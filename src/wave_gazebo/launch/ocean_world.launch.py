import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='verbose',
            default_value='true'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'gazebo_ros'), 'launch/gazebo.launch.py')
            ),
            launch_arguments={
                'world': get_package_share_directory('wave_gazebo') + '/worlds/ocean.world',
                'verbose': launch.substitutions.LaunchConfiguration('verbose')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
