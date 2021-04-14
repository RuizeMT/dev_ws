import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='rviz_config',
            default_value=get_package_share_directory(
                'wamv_gazebo') + '/config/rviz_example.rviz'
        ),
        launch_ros.actions.Node(
            package='rviz',
            executable='rviz',
            name='wamv_visualization'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
