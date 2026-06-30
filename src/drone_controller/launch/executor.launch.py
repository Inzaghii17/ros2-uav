from launch import LaunchDescription

from launch_ros.actions import Node


def generate_launch_description():

    blue = Node(
        package="drone_controller",
        executable="executor_node",
        namespace="drone_blue",
        output="screen",
    )

    green = Node(
        package="drone_controller",
        executable="executor_node",
        namespace="drone_green",
        output="screen",
    )

    return LaunchDescription([
        blue,
        green
    ])



