cmake_minimum_required(VERSION 3.8)
project(mission_manager)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(drone_msgs REQUIRED)

include_directories(include)

add_executable(mission_manager_node
    src/main.cpp
    src/mission_manager_node.cpp
)

ament_target_dependencies(
    mission_manager_node
    rclcpp
    drone_msgs
)

install(
    TARGETS mission_manager_node
    DESTINATION lib/${PROJECT_NAME}
)

install(
    DIRECTORY include/
    DESTINATION include
)

ament_package()