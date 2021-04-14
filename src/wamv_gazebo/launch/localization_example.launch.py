import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='rob_st_pub',
            parameters=[
                {
                    'tf_prefix': 'wamv'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            parameters=[
                {
                    'gui': 'false'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='robot_localization',
            executable='ekf_localization_node',
            name='ekf_localization',
            parameters=[
                {
                    'sensor_timeout': '2.0'
                },
                {
                    'two_d_mode': 'false'
                },
                {
                    'map_frame': 'map'
                },
                {
                    'odom_frame': 'wamv/odom'
                },
                {
                    'base_link_frame': 'wamv/base_link'
                },
                {
                    'world_frame': 'wamv/odom'
                },
                {
                    'publish_tf': 'true'
                },
                {
                    'frequency': '60'
                },
                {
                    'imu0': '/wamv/sensors/imu/imu/data'
                },
                {
                    'imu0_differential': 'false'
                },
                {
                    'imu0_remove_gravitational_acceleration': 'true'
                },
                {
                    'odom0': '/wamv/robot_localization/odometry/gps'
                },
                {
                    'odom0_differential': 'false'
                },
                {
                    'smooth_lagged_data': 'true'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='robot_localization',
            executable='navsat_transform_node',
            name='navsat_transform_node',
            output='screen',
            parameters=[
                {
                    'tf_prefix': 'wamv'
                },
                {
                    'frequency': '60'
                },
                {
                    'magnetic_declination_radians': '0'
                },
                {
                    'broadcast_utm_transform': 'true'
                },
                {
                    'wait_for_datum': 'true'
                },
                {
                    'use_odometry_yaw': 'true'
                },
                {
                    'yaw_offset': '0'
                },
                {
                    'publish_filtered_gps': 'true'
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
