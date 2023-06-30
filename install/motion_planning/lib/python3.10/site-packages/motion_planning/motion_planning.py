#!/usr/bin/env python3

from threading import Thread

import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from pymoveit2 import MoveIt2

from scipy.spatial.transform import Rotation


def main():
    rclpy.init()

    node = Node("pose_goal")

    callback_group = ReentrantCallbackGroup()

    moveit2 = MoveIt2(
        node=node,
        joint_names = ["joint2_to_joint1", "joint3_to_joint2", "joint4_to_joint3", "joint5_to_joint4", "joint6_to_joint5", "joint6output_to_joint6"],
        base_link_name="joint1",
        end_effector_name="suction_pump",
        group_name="arm",
        callback_group=callback_group,
        execute_via_moveit=True
    )

    executor = MultiThreadedExecutor(2)
    executor.add_node(node)
    executor_thread = Thread(target=executor.spin, daemon=True, args=())
    executor_thread.start()

    rot = Rotation.from_euler('xyz', [90, 0, 0], degrees=True)

    position = [0.1, 0.1, 0.3] #xyz
    quat = rot.as_quat()
    cartesian = False

    joints = [0.0,0.0,0.0,0.0,0.0,0.0]

    moveit2.move_to_pose(position=position, quat_xyzw=quat, cartesian=cartesian)
    #moveit2.move_to_configuration(joints)
    moveit2.wait_until_executed()



if __name__ == "__main__":
    main()