#!/user/bin/env3
# -*- coding: utf-8 -*-
from pymycobot.mycobot import MyCobot
import RPi.GPIO as GPIO
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.action import ActionServer

from my_cobot_interfaces.srv import SetJointAngles, PumpOn, PumpOff
from my_cobot_interfaces.action import SetAngles
import time
import math


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
        self.correction = [-40, -8, 0, 0, 0, -45]
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(20, GPIO.OUT)
        GPIO.setup(21, GPIO.OUT)
        self.pump_off()

    def transform(self, angles:list[float], toRobot:bool) -> list[float]:
        new = []
        for i in range(len(angles)):
            new.append(float(angles[i] + self.correction[i] * (1 if toRobot else -1)))
        return list(new)
    
    def send_angles(self, angles, speed=30):
        angles = self.transform(angles, toRobot=True)
        #print(angles)
        time.sleep(0.2)
        self.robot.send_angles(angles, speed)
        time.sleep(0.7)

    def get_angles(self):
        coords = []
        try:
            coords = self.robot.get_angles()
        except:
            pass
        if len(coords) == 6:
            coords = self.transform(coords, toRobot=False)
        else:
            time.sleep(0.3)
        time.sleep(0.1)
        return coords
    
    def pump_on(self):
        GPIO.output(21, 0)
        time.sleep(0.05)
    
    def pump_off(self):
        GPIO.output(20,0)
        time.sleep(0.05)
        GPIO.output(21, 0)
        time.sleep(0.1)
        GPIO.output(21, 1)
        time.sleep(0.05)

    def release_all_servos(self):
        self.robot.release_all_servos()
        time.sleep(0.1)


class MyCobotController(Node):
    def __init__(self):
        super().__init__("my_cobot_coord_server")
        self.robot = Robot()
        self.move_robot_timer = self.create_timer(0.5, self.move_robot_callback, callback_group = MutuallyExclusiveCallbackGroup())
        self.set_angles_action = ActionServer(self, SetAngles, '/set_angles', self.set_angles_callback)
        self.pump_on_service = self.create_service(PumpOn, "/pump_on", self.pump_on_callback)
        self.pump_off_service = self.create_service(PumpOff, "/pump_off", self.pump_off_callback)
        self.target = self.get_angles()
        self.ignore_shutdown = 3
        self.e = Error()
        self.speed = 10
        self.get_logger().info("Coord server started")

    def move_robot_callback(self):
        self.update_error()
        if (not self.e.low_error() and self.e.low_derror()) or self.ignore_shutdown:
            self.robot.send_angles(self.target, self.speed)
            self.get_logger().info("moving robot")
        if self.e.derror() > 5 and not self.ignore_shutdown:
            self.get_logger().error("EMERGENCY ROBOT SHUTDOWN")
            self.move_robot_timer.destroy()
            self.set_angles_action.destroy()
            for i in range(3):
                self.on_shutdown()
            while True:
                pass
        if self.ignore_shutdown: self.ignore_shutdown -= 1

    def set_angles_callback(self, goal_handle):
        request = goal_handle.request
        target = [request.j1, request.j2, request.j3, request.j4, request.j5, request.j6]
        goal_handle.succeed()
        response = SetAngles.Result()
        response.timeout = not self.move_to_blocking(target)
        return response

    def move_to_blocking(self, target:list[float], timeout:float=30):
        self.get_logger().info("Motion request accepted")
        start = time.time()
        self.target = target
        self.ignore_shutdown = 3

        while(not self.e.low_error() or self.ignore_shutdown == 3):
            time.sleep(0.1)
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
        if current is not None:
            self.e.update(self.error(current, self.target))
        else: self.update_error()

    def on_shutdown(self):
        self.robot.release_all_servos()
        #self.robot.pump_off()

    def pump_on_callback(self, request:PumpOn.Request, response:PumpOn.Response):
        self.robot.pump_on()
        return response

    def pump_off_callback(self, request:PumpOff.Request, response:PumpOff.Response):
        self.robot.pump_off()
        return response


def main(args=None):
    rclpy.init(args=args)
    node = MyCobotController()
    executor = MultiThreadedExecutor(5)
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        node.on_shutdown()

if __name__ == "__main__":
    main()
