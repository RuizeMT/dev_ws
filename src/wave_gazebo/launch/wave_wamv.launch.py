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
            name='gui',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='verbose',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='world',
            default_value=get_package_share_directory(
                'wave_gazebo') + '/worlds/ocean_wamv.world'
        ),
        launch.actions.DeclareLaunchArgument(
            name='x',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='y',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='z',
            default_value='0.1'
        ),
        launch.actions.DeclareLaunchArgument(
            name='P',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='R',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='Y',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thrust_config',
            default_value='H'
        ),
        launch.actions.DeclareLaunchArgument(
            name='camera_enabled',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='gps_enabled',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='imu_enabled',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='lidar_enabled',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='ground_truth_enabled',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='urdf',
            default_value=get_package_share_directory(
                'wamv_gazebo') + '/urdf/wamv_gazebo.urdf.xacro'
        ),
        # launch_ros.actions.Node(
        #     package='gazebo_ros',
        #     executable='spawn_model',
        #     name='spawn_model_wamv0',
        #     parameters=[
        #         {
        #             'wamv0/robot_description': None
        #         },
        #         {
        #             'wamv1/robot_description': None
        #         }
        #     ]
        # ),
        # launch_ros.actions.Node(
        #     package='gazebo_ros',
        #     executable='spawn_model',
        #     name='spawn_model_wamv1',
        #     parameters=[
        #         {
        #             'wamv0/robot_description': None
        #         },
        #         {
        #             'wamv1/robot_description': None
        #         }
        #     ]
        # ),
        # launch_ros.actions.Node(
        #     package='rqt_gui',
        #     executable='rqt_gui',
        #     name='rqt_cameras',
        #     output='screen',
        #     parameters=[
        #         {
        #             'wamv0/robot_description': None
        #         },
        #         {
        #             'wamv1/robot_description': None
        #         }
        #     ]
        # ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'gazebo_ros'), 'launch/gazebo.launch.py')
            ),
            launch_arguments={
                'world_name': launch.substitutions.LaunchConfiguration('world'),
                'verbose': launch.substitutions.LaunchConfiguration('verbose'),
                'paused': launch.substitutions.LaunchConfiguration('paused'),
                'use_sim_time': 'true',
                'gui': launch.substitutions.LaunchConfiguration('gui')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
