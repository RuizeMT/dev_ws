cmake_minimum_required(VERSION 3.5)
project(wave_gazebo_plugins)

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

###############################################################################
# Other dependencies...

find_package(ament_cmake REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(gazebo REQUIRED)
find_package(Eigen3 REQUIRED)

############################################################################### 

ament_export_include_directories(include)
ament_export_dependencies(gazebo_ros)
ament_export_libraries(Hydrodynamics WavefieldModelPlugin WavefieldVisualPlugin wavegauge_plugin)

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

############################################################################### 
# Libraries...

# Hydrodynamics
add_library(Hydrodynamics
  SHARED
    src/Gazebo.cc
    src/Geometry.cc
    src/PhysicalConstants.cc
    src/Physics.cc
    src/Utilities.cc
    src/Wavefield.cc
    src/WavefieldEntity.cc
)

target_link_libraries(Hydrodynamics
  ${Boost_LIBRARIES}
  ${GAZEBO_LIBRARIES}
)

target_compile_options(Hydrodynamics PRIVATE "-Wno-unknown-pragmas")

list(APPEND WAVE_GAZEBO_LIBRARIES_LIST Hydrodynamics)

############################################################################### 
# Plugins...

# WavefieldModelPlugin
add_library(WavefieldModelPlugin
  SHARED
    src/WavefieldModelPlugin.cc
)

target_link_libraries(WavefieldModelPlugin
  ${Boost_LIBRARIES}
  ${GAZEBO_LIBRARIES}
  ${WAVE_GAZEBO_LIBRARIES_LIST}
)

target_compile_options(WavefieldModelPlugin PRIVATE "-Wno-unknown-pragmas")

list(APPEND WAVE_GAZEBO_PLUGINS_LIST WavefieldModelPlugin)

# WavefieldVisualPlugin
add_library(WavefieldVisualPlugin
  SHARED
    src/WavefieldVisualPlugin.cc
)

target_link_libraries(WavefieldVisualPlugin
  ${Boost_LIBRARIES}
  ${GAZEBO_LIBRARIES}
  ${WAVE_GAZEBO_LIBRARIES_LIST}
)

target_compile_options(WavefieldVisualPlugin PRIVATE "-Wno-unknown-pragmas")

list(APPEND WAVE_GAZEBO_PLUGINS_LIST WavefieldVisualPlugin)


# WavegaugePlugin
add_library(wavegauge_plugin
  SHARED
    src/wavegauge_plugin.cc
)

target_link_libraries(wavegauge_plugin
  WavefieldModelPlugin
  ${Boost_LIBRARIES}
  ${GAZEBO_LIBRARIES}
  ${WAVE_GAZEBO_LIBRARIES_LIST}
)

add_dependencies(wavegauge_plugin WavefieldModelPlugin)

target_compile_options(wavegauge_plugin PRIVATE "-Wno-unknown-pragmas")

list(APPEND WAVE_GAZEBO_PLUGINS_LIST wavegauge_plugin)

############################################################################### 
# Executables...


############################################################################### 
# Tests...
# 
# Useful notes on running catkin tests:
# http://www.personalrobotics.ri.cmu.edu/software/unit-testing
# 

if(CATKIN_ENABLE_TESTING)

  catkin_add_gtest(UNIT_Wavefield_TEST src/Wavefield_TEST.cc)
  target_link_libraries(UNIT_Wavefield_TEST ${WAVE_GAZEBO_LIBRARIES_LIST})
  target_compile_options(UNIT_Wavefield_TEST PRIVATE "-Wno-unknown-pragmas")

endif()

############################################################################### 
# Install

install(TARGETS ${WAVE_GAZEBO_LIBRARIES_LIST}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS ${WAVE_GAZEBO_PLUGINS_LIST}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS ${WAVE_GAZEBO_EXECUTABLES_LIST}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
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

ament_package()