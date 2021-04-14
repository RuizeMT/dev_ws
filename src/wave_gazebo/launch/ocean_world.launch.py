import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='paused',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='use_sim_time',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='extra_gazebo_args',
            default_value=''
        ),
        launch.actions.DeclareLaunchArgument(
            name='gui',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='recording',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='debug',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='verbose',
            default_value='false'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'gazebo_ros'), 'launch/gazebo.launch.py')
            ),
            launch_arguments={
                'world': get_package_share_directory('wave_gazebo') + '/worlds/ocean.world',
                'paused': launch.substitutions.LaunchConfiguration('paused'),
                'use_sim_time': launch.substitutions.LaunchConfiguration('use_sim_time'),
                'extra_gazebo_args': launch.substitutions.LaunchConfiguration('extra_gazebo_args'),
                'gui': launch.substitutions.LaunchConfiguration('gui'),
                'recording': launch.substitutions.LaunchConfiguration('recording'),
                'debug': launch.substitutions.LaunchConfiguration('debug'),
                'verbose': launch.substitutions.LaunchConfiguration('verbose')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
