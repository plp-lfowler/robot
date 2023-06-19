import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    pass