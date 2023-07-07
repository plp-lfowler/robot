#!/user/bin/env3
# -*- coding: utf-8 -*-
from pymycobot.mycobot import MyCobot
import rclpy
from rclpy.node import Node

from my_cobot_interfaces.srv import SetCoords
import time

class Error:
    def __init__(self):
        self.e = 0
        self.de = 0
        self.timestamp = time.time()

    def low_error(self):
        return self.e < 1
    
    def low_derror(self):
        return self.de > -1

    def error(self):
        return self.e
    
    def derror(self):
        return self.de
    
    def update(self, new_e):
        t = time.time()
        self.de = (new_e - self.e) / (t - self.timestamp)
        self.e = new_e
        self.timestamp = t


class MyCobotServer(Node):
    def __init__(self):
        super().__init__("my_cobot_coord_server")
        self.robot = MyCobot("/dev/serial0", 1000000)
        self.set_coords_service = self.create_service(SetCoords, '/mycobot/set_coords', self.set_coords_callback)
        self.move_robot_timer = self.create_timer(0.5, self.move_robot_callback)
        self.target = [20, 0, 30, 0, 0, 0]
        self.cart = False
        self.e = Error()

    def move_robot_callback(self):
        self.update_error()
        if not self.e.low_error() and self.e.low_derror():
            self.robot.send_coords(self.target, 70, 1 if self.cart else 0)
            self.get_logger().info("moving robot")

    def set_coords_callback(self, request:SetCoords.Request(), response:SetCoords.Response()):
        self.target = [request.x, request.y, request.z, request.rx, request.ry, request.rz]

        self.cart = request.cartesian
        start = time.time()
        self.move_robot_callback()

        while(not self.e.low_error()):
            rclpy.spin_once(self, timeout_sec = 0.5)
            if time.time() - start > 30:
                response.success = False
                return response

        response.success = True
        return response
    
    def error(self, current:list[float], target:list[float]):
        e = 0
        for c, t in zip(current, target)[:3]:
            e += (c-t) * (c-t)
        for c, t in zip(current, target)[3:]:
            d = ((c-t) % 180) * 0.5
            e += d * d
        return e
    
    def get_coords(self) -> list[float]:
        for i in range(10):
            coords = self.robot.get_coords()
            if len(coords) == 6:
                return coords
            time.sleep(0.1)
        return None
    
    def update_error(self):
        current = self.get_coords()
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