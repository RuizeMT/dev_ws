cmake_minimum_required(VERSION 3.5)
project(usv_gazebo_plugins)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(gazebo REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(std_msgs REQUIRED)
find_package(xacro REQUIRED)
find_package(wave_gazebo_plugins REQUIRED)
find_package(usv_msgs REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(tf2 REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

ament_export_include_directories(include)
ament_export_dependencies(rosidl_default_runtime tf2 gazebo_ros gazebo_dev rclcpp wave_gazebo_plugins std_msgs)
ament_export_libraries(buoyancy_gazebo_plugin usv_gazebo_dynamics_plugin)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${Boost_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
  ${GAZEBO_INCLUDE_DIRS}
  ${GAZEBO_MSG_INCLUDE_DIRS}
  ${IGNITION-COMMON_INCLUDE_DIRS}
  ${IGNITION-MATHS_INCLUDE_DIRS}
  ${IGNITION-MSGS_INCLUDE_DIRS}
  )

link_directories(
  ${GAZEBO_LIBRARY_DIRS}
  ${IGNITION-COMMON_LIBRARY_DIRS}
  ${IGNITION-MATHS_LIBRARY_DIRS}
  ${IGNITION-MSGS_LIBRARY_DIRS}
  )

## Declare a C++ library
add_library(buoyancy_gazebo_plugin
  SHARED
    src/buoyancy_gazebo_plugin.cc
    src/shape_volume.cc
    src/polyhedron_volume.cc
)
target_link_libraries(buoyancy_gazebo_plugin
  ${GAZEBO_LIBRARIES}
  ${Eigen_LIBRARIES}
)
target_compile_options(buoyancy_gazebo_plugin PRIVATE "-Wno-unknown-pragmas")

install(TARGETS buoyancy_gazebo_plugin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

## Declare a C++ library
add_library(usv_gazebo_dynamics_plugin
  SHARED
    src/usv_gazebo_dynamics_plugin.cc
)
target_link_libraries(usv_gazebo_dynamics_plugin
  ${tf2_LIBRARIES}
  ${GAZEBO_LIBRARIES}
  ${Eigen_LIBRARIES}
)
target_compile_options(buoyancy_gazebo_plugin PRIVATE "-Wno-unknown-pragmas")

install(TARGETS usv_gazebo_dynamics_plugin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

## Declare a C++ library
# add_library(usv_gazebo_thrust_plugin
#   src/usv_gazebo_thrust_plugin.cc
# )
# target_link_libraries(usv_gazebo_thrust_plugin
#   ${Eigen_LIBRARIES}
# )
# install(TARGETS usv_gazebo_thrust_plugin
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )

## Declare a C++ library
# add_library(usv_gazebo_wind_plugin
#   src/usv_gazebo_wind_plugin.cc
# )
# target_link_libraries(usv_gazebo_wind_plugin
#   ${Eigen_LIBRARIES}
# )
# install(TARGETS usv_gazebo_wind_plugin
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )

## Declare a C++ library
# add_library(usv_gazebo_acoustic_pinger_plugin
#   src/acoustic_pinger_plugin.cc
# )
# add_dependencies(usv_gazebo_acoustic_pinger_plugin usv_msgs_generate_messages_cpp)
# target_link_libraries(usv_gazebo_acoustic_pinger_plugin
#   ${Eigen_LIBRARIES}
# )
# install(TARGETS usv_gazebo_acoustic_pinger_plugin
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )

set(XACRO_INORDER)
if(DEFINED ENV{ROS_DISTRO})
  if($ENV{ROS_DISTRO} STREQUAL "kinetic")
    set(XACRO_INORDER INORDER)
  endif()
endif()

# Generate demo world files from xacro and install
xacro_add_files(
  worlds/buoyancy_plugin_demo.world.xacro
  ${XACRO_INORDER} INSTALL DESTINATION worlds
)
install(DIRECTORY worlds/
        DESTINATION share/${PROJECT_NAME}/worlds)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.hh"
  PATTERN "*~" EXCLUDE
)

install(DIRECTORY include/
   DESTINATION include
   FILES_MATCHING PATTERN ".hh"
)

install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.pb.*"
  PATTERN "*~" EXCLUDE
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()