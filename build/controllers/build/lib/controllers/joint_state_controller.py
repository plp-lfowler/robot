#!/user/bin/env3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node

from my_cobot_interfaces.srv import GetRadians
from sensor_msgs.msg import JointState

class JointStateController(Node):
    def __init__(self):
        super().__init__("Joint_state_controller")
        self.get_radians = self.create_client(GetRadians, '/mycobot/get_radians')
        while not self.get_radians.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Wating for get radian service...")
        
        self.publisher = self.create_publisher(JointState, '/joint_states', 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        self.get_logger().info("Getting angles... ")
        future = self.get_radians.call_async(GetRadians.Request())
        future.add_done_callback(self.done_callback)
        
        

    def done_callback(self, future):
        self.get_logger().info("Recieved")
        res = future.result()
        joints = res.joint_names
        angles = res.angles
        if len(angles) == 6:
            msg = JointState()
            msg.name = joints
            msg.position = angles
            self.publisher.publish(msg)
            self.get_logger().info("Publishing: " + str(angles))
        else:
            self.get_logger().warn("Expected 6 angles recieved: " + str(angles))



def main(args=None):
    rclpy.init(args=args)
    node = JointStateController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
        