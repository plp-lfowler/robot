#!/user/bin/env3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.duration import Duration
import time
from control_msgs.action import FollowJointTrajectory
from my_cobot_interfaces.srv import GetRadians, SetRadians, PlayPause

class MyRobotActionServerNode(Node):
    def __init__(self):
        super().__init__('my_cobot_action_server')
        self.action_server = ActionServer(
            self,
            FollowJointTrajectory,
            'arm_controller/follow_joint_trajectory',
            self.execute_trajectory_callback
        )
        self.hardware_interface = MyRobotHardwareInterface()

    def execute_trajectory_callback(self, goal_handle):
        # Extract the joint trajectory commands from the goal
        trajectory = goal_handle.request.trajectory

        self.hardware_interface.play_pause_robot(False)

        for point in trajectory.points:
            # Send each trajectory point to the robot's hardware interface
            self.hardware_interface.send_joint_angles_to_robot(point.positions, trajectory.joint_names)
            time.sleep(0.1)

        self.hardware_interface.play_pause_robot(True)

        self.hardware_interface.wait_for_joint_angles(trajectory.points[-1].positions, trajectory.joint_names)

        # Once the trajectory is executed, set the result
        result = FollowJointTrajectory.Result()
        goal_handle.succeed()
        return result

class MyRobotHardwareInterface(Node):
    def __init__(self):
        super().__init__('my_cobot_hardware_interface')
        self.get_radians_client = self.create_client(GetRadians, '/mycobot/get_radians')
        self.set_radians_client = self.create_client(SetRadians, '/mycobot/set_radians')
        self.set_play_pause_client = self.create_client(PlayPause, '/mycobot/play_pause')
        self.joints = ["joint2_to_joint1", "joint3_to_joint2", "joint4_to_joint3", "joint5_to_joint4", "joint6_to_joint5", "joint6output_to_joint6"]

    def reorder_angles(self, angles:list[float], from_joint_order:list[str], to_joint_order:list[str]) -> list[float]:
        angles_out = []
        for joint in to_joint_order:
            i = from_joint_order.index(joint)
            if i < 0 or i >= len(angles):
                return None
            angles_out.append(angles[i])
        return angles_out
    
    def play_pause_robot(self, play):
        request = PlayPause.Request()
        request.play = play
        future = self.set_play_pause_client.call_async(request)

        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            self.get_logger().info('Robot paused/started successfully')
        else:
            self.get_logger().warn('Failed to pause/start robot')

    def send_joint_angles_to_robot(self, joint_angles, joint_names):
        # Create a request message and set the joint angles
        request = SetRadians.Request()
        request.angles = joint_angles
        request.joint_names = joint_names

        # Call the set_joint_angles service to set the joint angles
        future = self.set_radians_client.call_async(request)

        # Wait for the service call to complete
        rclpy.spin_until_future_complete(self, future)

        # Check if the service call was successful
        if future.result() is not None:
            self.get_logger().info('Joint angles set successfully')
        else:
            self.get_logger().warn('Failed to set joint angles')

        # Wait for the robot to arrive at the desired joint angles
        #target_angles = self.reorder_angles(joint_angles, joint_names, self.joints)
        #self.wait_for_joint_angles(target_angles)

    def wait_for_joint_angles(self, target_angles, joint_names, tolerance=0.15, timeout=10.0):
        target_angles = self.reorder_angles(target_angles, joint_names, self.joints)
        start_time = self.get_clock().now()

        while self.get_clock().now() - start_time < Duration(seconds=timeout):
            angles = self.get_joint_angles_from_robot()
            # Check if the current joint angles are close to the target angles
            if self.are_angles_close(angles, target_angles, tolerance):
                return

            time.sleep(0.1)  # Sleep for a short duration before checking again
            #self.get_logger().info('Waiting...' + str(self.robot_angles) + str(target_angles))

        self.get_logger().warn('Timeout: Robot did not reach the desired joint angles')

    def get_joint_angles_from_robot(self):
        # Create a request message
        request = GetRadians.Request()

        # Call the get_joint_angles service to retrieve the joint angles
        future = self.get_radians_client.call_async(request)

        # Wait for the service call to complete
        rclpy.spin_until_future_complete(self, future)

        # Check if the service call was successful
        if future.result() is not None:
            angles = self.reorder_angles(future.result().angles, future.result().joint_names, self.joints)
            if angles is not None:
                return angles
        self.get_logger().warn('Failed to get joint angles')
        return []

    def are_angles_close(self, angles1, angles2, tolerance):
        if len(angles1) != len(angles2):
            return False

        for angle1, angle2 in zip(angles1, angles2):
            if abs(angle1 - angle2) > tolerance:
                #self.get_logger().info('Waiting...' + str(angle1 - angle2) + " " + str(angles1.index(angle1)))
                return False

        return True

def main(args=None):
    rclpy.init(args=args)
    action_server_node = MyRobotActionServerNode()
    rclpy.spin(action_server_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
