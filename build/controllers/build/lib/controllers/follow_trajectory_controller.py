#!/user/bin/env3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory
from my_cobot_interfaces.srv import SetRadians

class FollowTrajectoryController(Node):
    def __init__(self):
        self.__init__("follow_trajectory_controller")
        self.joint_traj_sub = self.create_subscription(JointTrajectory, 'move_group/execute_trajectory', self.execute_trajectory_callback, 10)

    def execute_trajectory_callback(self, msg:JointTrajectory):
        # Extract the joint angles from the received message
        joint_angles = msg.points[-1].positions

        joint_names = msg.joint_names

        # Send the joint angles to the robot
        self.send_joint_angles_to_robot(joint_angles, joint_names)

    def send_joint_angles_to_robot(self, joint_angles, joint_names):
        # Create a service client to set the joint angles
        set_angles_client = self.create_client(SetRadians, 'set_joint_angles')

        # Wait for the service to be available
        if not set_angles_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().warn('set_joint_angles service not available')
            return

        # Create a request message and set the joint angles
        request = SetRadians.Request()
        request.angles = joint_angles
        request.joint_names = joint_names

        # Call the service to set the joint angles
        future = set_angles_client.call_async(request)

        # Wait for the service call to complete
        rclpy.spin_until_future_complete(self, future)


    
