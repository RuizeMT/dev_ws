import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='world',
            default_value=get_package_share_directory(
                'usv_gazebo_plugins') + '/worlds/buoyancy_plugin_demo.world'
        ),
        launch.actions.DeclareLaunchArgument(
            name='gui',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='verbose',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='paused',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='use_sim_time',
            default_value='true'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'gazebo_ros'), 'launch/gazebo.launch.py')
            ),
            launch_arguments={
                'world_name': launch.substitutions.LaunchConfiguration('world'),
                'verbose': launch.substitutions.LaunchConfiguration('verbose'),
                'paused': launch.substitutions.LaunchConfiguration('paused'),
                'use_sim_time': launch.substitutions.LaunchConfiguration('use_sim_time'),
                'gui': launch.substitutions.LaunchConfiguration('gui')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
