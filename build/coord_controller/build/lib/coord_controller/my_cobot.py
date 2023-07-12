#!/user/bin/env3
# -*- coding: utf-8 -*-
from pymycobot.mycobot import MyCobot
import RPi.GPIO as GPIO
import rclpy
from rclpy.node import Node

from my_cobot_interfaces.srv import SetCoords
import time
import math
from scipy.spatial.transform import Rotation
import numpy as np
from inverse_kinematics import inverse_kinematics

class Error:
    def __init__(self):
        self.e = 0
        self.de = 0
        self.timestamp = time.time()

    def low_error(self):
        return self.e < 5
    
    def low_derror(self):
        return self.de > -10

    def error(self):
        return self.e
    
    def derror(self):
        return self.de
    
    def update(self, new_e):
        t = time.time()
        self.de = (new_e - self.e) / (t - self.timestamp)
        self.e = new_e
        self.timestamp = t

class Robot:
    def __init__(self):
        self.robot = MyCobot("/dev/serial0", 1000000)
        time.sleep(0.1)
        self.robot.power_on()
        time.sleep(0.1)
        self.robot.set_fresh_mode(1)
        time.sleep(0.1)
        self.correction = [-40, -8, 0, 0, 0, -50]
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(20, GPIO.OUT)
        GPIO.setup(21, GPIO.OUT)

    def transform(self, angles:list[float], toRobot:bool) -> list[float]:
        new = []
        for i in range(len(angles)):
            new.append(float(angles[i] + self.correction[i] * (1 if toRobot else -1)))
        return list(new)
    
    def send_angles(self, angles, speed=20):
        angles = self.transform(angles, toRobot=True)
        print(angles)
        time.sleep(0.5)
        self.robot.send_angles(angles, speed)
        time.sleep(0.5)

    def get_angles(self):
        coords = self.robot.get_angles()
        if len(coords) == 6:
            coords = self.transform(coords, toRobot=False)
        time.sleep(0.1)
        return coords
    
    def pump_on(self):
        GPIO.output(21, 0)
        time.sleep(0.05)
    
    def pump_off(self):
        GPIO.output(20,0)
        time.sleep(0.05)
        GPIO.output(21, 0)
        time.sleep(1)
        GPIO.output(21, 1)
        time.sleep(0.05)

    def release_all_servos(self):
        self.robot.release_all_servos()
        time.sleep(0.1)


class MyCobotServer(Node):
    def __init__(self):
        super().__init__("my_cobot_coord_server")
        self.robot = Robot()
        self.set_coords_service = self.create_service(SetCoords, '/mycobot/set_coords', self.set_coords_callback)
        self.move_robot_timer = self.create_timer(1, self.move_robot_callback)
        self.target = inverse_kinematics(0, 170, 80, Rotation.from_euler('xyz',[0,0,-0], degrees=True))
        self.e = Error()
        self.speed = 10
        self.get_logger().info("Coord server started")
        self.move_robot_callback(True)



    def move_robot_callback(self, ignore_shutdown:bool=False):
        self.update_error()
        if (not self.e.low_error() and self.e.low_derror()) or ignore_shutdown:
            self.robot.send_angles(self.target, self.speed)
            self.get_logger().info("moving robot")
        if self.e.derror() > 3 and not ignore_shutdown:
            self.get_logger().error("EMERGENCY ROBOT SHUTDOWN")
            self.move_robot_timer.destroy()
            self.set_coords_service.destroy()
            for i in range(50):
                self.on_shutdown()
            while True:
                pass

    def set_coords_callback(self, request:SetCoords.Request(), response:SetCoords.Response()):
        rot = Rotation.from_quat([request.w, request.i, request.j, request.k])
        response.success = self.move_to_blocking(request.x, request.y, request.z)
        return response

    def move_to_blocking(self, x:float, y:float, z:float, rot:Rotation, timeout:float=30):
        target = inverse_kinematics(x, y, z, rot)
        if target is None:
            self.get_logger().error("Inverse Kinematics does not have a solution")
            return False
        start = time.time()
        self.target = target
        self.move_robot_callback(True)
        self.move_robot_callback(True)

        while(not self.e.low_error()):
            rclpy.spin_once(self, timeout_sec = 0.5)
            if time.time() - start > timeout:
                self.get_logger().error("Motion request timed out")
                return False

        return True
    
    def error(self, current:list[float], target:list[float]):
        e = 0
        for c, t in zip(current, target):
            e += (c-t) * (c-t)
        e = math.sqrt(e)
        self.get_logger().info(str(e))
        return e
    
    def get_angles(self) -> list[float]:
        for i in range(10):
            coords = self.robot.get_angles()
            if len(coords) == 6:
                return coords
        self.get_logger().warn("did not get coords")
        return None
    
    def update_error(self):
        current = self.get_angles()
        self.get_logger().info(str(current))
        if current is not None:
            self.e.update(self.error(current, self.target))

    def on_shutdown(self):
        self.robot.release_all_servos()


def main(args=None):
    rclpy.init(args=args)
    node = MyCobotServer()
    rclpy.spin(node)
    node.on_shutdown()
    node.destroy_node()
    rclpy.shutdown()

def shutdown(args=None):
    rclpy.init(args=args)
    node = MyCobotServer()
    node.on_shutdown()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()