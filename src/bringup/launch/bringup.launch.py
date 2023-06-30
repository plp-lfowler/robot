from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_xml.launch_description_sources import XMLLaunchDescriptionSource
from ament_index_python import get_package_share_directory
import os

def generate_launch_description():
    control_launch = IncludeLaunchDescription(XMLLaunchDescriptionSource(
        [os.path.join(get_package_share_directory("controllers"), "launch"),
         "/mycobot.launch.xml"]))

    moveit_launch = IncludeLaunchDescription(PythonLaunchDescriptionSource(
        [os.path.join(get_package_share_directory("moveit_config"), "launch"),
         "/move_group.launch.py"]))
    return LaunchDescription([control_launch, moveit_launch])
