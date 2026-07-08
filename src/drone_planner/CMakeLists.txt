cmake_minimum_required(VERSION 3.8)
project(drone_planner)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(drone_msgs REQUIRED)
find_package(drone_common REQUIRED)

add_executable(planner_node
    src/main.cpp
    src/planner_node.cpp
)

target_include_directories(planner_node PUBLIC
    include
)

ament_target_dependencies(
    planner_node
    rclcpp
    geometry_msgs
    drone_msgs
    drone_common
)

install(
    TARGETS planner_node
    DESTINATION lib/${PROJECT_NAME}
)

install(
    DIRECTORY include/
    DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()