set(_AMENT_PACKAGE_NAME "usv_gazebo_plugins")
set(usv_gazebo_plugins_VERSION "0.0.0")
set(usv_gazebo_plugins_MAINTAINER "ruize <ruize.nie@marinethinking.com>")
set(usv_gazebo_plugins_BUILD_DEPENDS "gazebo_ros" "rosidl_default_generators" "rosidl_interface" "tf2" "gazebo_dev" "rclcpp" "eigen" "xacro" "wave_gazebo_plugins" "usv_msgs" "std_msgs")
set(usv_gazebo_plugins_BUILDTOOL_DEPENDS "ament_cmake")
set(usv_gazebo_plugins_BUILD_EXPORT_DEPENDS "tf2" "gazebo_dev" "rclcpp" "eigen" "xacro" "wave_gazebo_plugins" "usv_msgs" "std_msgs")
set(usv_gazebo_plugins_BUILDTOOL_EXPORT_DEPENDS )
set(usv_gazebo_plugins_EXEC_DEPENDS "gazebo_ros" "rosidl_default_runtime" "rosidl_interface" "tf2" "gazebo_dev" "rclcpp" "eigen" "xacro" "wave_gazebo_plugins" "usv_msgs" "std_msgs")
set(usv_gazebo_plugins_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(usv_gazebo_plugins_GROUP_DEPENDS )
set(usv_gazebo_plugins_MEMBER_OF_GROUPS "rosidl_interface_packages")
set(usv_gazebo_plugins_DEPRECATED "")
set(usv_gazebo_plugins_EXPORT_TAGS)
list(APPEND usv_gazebo_plugins_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND usv_gazebo_plugins_EXPORT_TAGS "<gazebo_ros plugin_path=\"lib\"/>")
