cmake_minimum_required(VERSION 3.5)
project(wave_gazebo)

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
find_package(xacro)
find_package(gazebo_ros)
find_package(wave_gazebo_plugins)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Model files to be processed with erb
set (xacro_erb_files
  world_models/ocean_waves/model.xacro.erb
)

# Process the xacro erb files
foreach(_erb ${xacro_erb_files})
  string(REGEX REPLACE ".xacro.erb" ".xacro" _model ${_erb})
  set(_model ${CMAKE_CURRENT_SOURCE_DIR}/${_model})
  add_custom_command(OUTPUT ${_model}
                     COMMAND ${ERB_EXE_PATH} ${_erb} > ${_model}
                     DEPENDS
                       ${CMAKE_CURRENT_SOURCE_DIR}/${_erb}
                     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

  list(APPEND model_files ${_model})
endforeach()

install(DIRECTORY world_models/
  DESTINATION share/${PROJECT_NAME}/world_models)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

add_custom_target(model_erb_generation ALL
  DEPENDS
    ${model_files}
)

set(XACRO_INORDER)
if(DEFINED ENV{ROS_DISTRO})
  if($ENV{ROS_DISTRO} STREQUAL "kinetic")
    set(XACRO_INORDER INORDER)
  endif()
endif()

# Generate world files from xacro and install
xacro_add_files(
  worlds/ocean.world.xacro
  worlds/ocean_buoys.world.xacro
  worlds/ocean_wamv.world.xacro
  ${XACRO_INORDER} INSTALL DESTINATION worlds
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
