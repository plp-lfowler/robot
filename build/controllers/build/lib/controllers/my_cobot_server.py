#!/user/bin/env3
# -*- coding: utf-8 -*-
from pymycobot.mycobot import MyCobot
import rclpy
from rclpy.node import Node

from my_cobot_interfaces.srv import GetRadians, SetRadians

class MyCobotServer(Node):
    def __init__(self):
        super().__init__("my_cobot_server")
        self.robot = MyCobot("/dev/serial0", 1000000)
        self.joints = ["joint2_to_joint1", "joint3_to_joint2", "joint4_to_joint3", "joint5_to_joint4", "joint6_to_joint5", "joint6output_to_joint6"]
        self.get_radians_service = self.create_service(GetRadians, '/mycobot/get_radians', self.get_radians_callback)
        self.set_radians_service = self.create_service(SetRadians, '/mycobot/set_radians', self.set_radians_callback)
        

    def get_radians_callback(self, request:GetRadians.Request(), response:GetRadians.Response()):
        self.get_logger().info("Recieved get radian request")
        response.angles, response.joint_names = self.get_radians()
        self.get_logger().info("Finished get radian request")
        return response
    
    def set_radians_callback(self, request, response):
        self.get_logger().info("Recieved set radian request")
        self.set_radians(request.angles, request.joint_names, self.joints)
        self.get_logger().info("Finished set radian request")
        return response

    def get_radians(self) -> tuple[list[float], list[str]]:
        angles = self.robot.get_radians()
        return angles, self.joints
    
    def set_radians(self, angles, joint_order):
        angles = self.reorder_angles(angles, joint_order, self.joints)
        self.robot.send_radians(angles)

    def reorder_angles(self, angles:list[float], from_joint_order:list[str], to_joint_order:list[str]) -> list[float]:
        angles_out = []
        for joint in to_joint_order:
            i = from_joint_order.index(joint)
            angles_out = angles[i]
        return angles_out


def main(args=None):
    rclpy.init(args=args)
    node = MyCobotServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()