cmake_minimum_required(VERSION 3.8)
project(drone_bridge)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(gazebo_bridge
    src/gazebo_bridge.cpp
)

ament_target_dependencies(gazebo_bridge
    rclcpp
    geometry_msgs
)

install(TARGETS
    gazebo_bridge
    DESTINATION lib/${PROJECT_NAME}
)

ament_package()