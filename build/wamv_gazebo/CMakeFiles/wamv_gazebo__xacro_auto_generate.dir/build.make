# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ruize/dev_ws/src/wamv_gazebo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ruize/dev_ws/build/wamv_gazebo

# Utility rule file for wamv_gazebo__xacro_auto_generate.

# Include the progress variables for this target.
include CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/progress.make

CMakeFiles/wamv_gazebo__xacro_auto_generate: urdf/wamv_gazebo.urdf


urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/src/wamv_gazebo/urdf/wamv_gazebo.urdf.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_description/share/wamv_description/urdf/battery.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_imu.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_camera.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_planar_lidar.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/macros.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_description/share/wamv_description/urdf/wamv_base.urdf.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_pinger.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/thruster_layouts/wamv_aft_thrusters.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/thruster_layouts/wamv_gazebo_thruster_config.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/wamv_gazebo.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_gps.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_p3d.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_description/share/wamv_description/urdf/thrusters/engine.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/wamv_3d_lidar.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/dynamics/wamv_gazebo_dynamics_plugin.xacro
urdf/wamv_gazebo.urdf: /home/ruize/dev_ws/install/wamv_gazebo/share/wamv_gazebo/urdf/sensors/lidar.xacro
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ruize/dev_ws/build/wamv_gazebo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "xacro: generating urdf/wamv_gazebo.urdf from urdf/wamv_gazebo.urdf.xacro"
	cd /home/ruize/dev_ws/src/wamv_gazebo && xacro -o /home/ruize/dev_ws/build/wamv_gazebo/urdf/wamv_gazebo.urdf urdf/wamv_gazebo.urdf.xacro

wamv_gazebo__xacro_auto_generate: CMakeFiles/wamv_gazebo__xacro_auto_generate
wamv_gazebo__xacro_auto_generate: urdf/wamv_gazebo.urdf
wamv_gazebo__xacro_auto_generate: CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/build.make

.PHONY : wamv_gazebo__xacro_auto_generate

# Rule to build all files generated by this target.
CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/build: wamv_gazebo__xacro_auto_generate

.PHONY : CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/build

CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/clean

CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/depend:
	cd /home/ruize/dev_ws/build/wamv_gazebo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ruize/dev_ws/src/wamv_gazebo /home/ruize/dev_ws/src/wamv_gazebo /home/ruize/dev_ws/build/wamv_gazebo /home/ruize/dev_ws/build/wamv_gazebo /home/ruize/dev_ws/build/wamv_gazebo/CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wamv_gazebo__xacro_auto_generate.dir/depend

