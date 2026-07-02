cmake_minimum_required(VERSION 3.8)
project(drone_bridge)
include_directories(include)



if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(drone_msgs REQUIRED)
find_package(ros_gz_interfaces REQUIRED)

add_executable(gazebo_bridge_node
    src/main.cpp
    src/gazebo_bridge_node.cpp
)

ament_target_dependencies(
    gazebo_bridge_node
    rclcpp
    drone_msgs
    geometry_msgs
    ros_gz_interfaces
)

install(
    TARGETS gazebo_bridge_node
    DESTINATION lib/${PROJECT_NAME}
)

install(
    DIRECTORY include/
    DESTINATION include
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
