from launch import LaunchDescription
from launch.actions import ExecuteProcess, TimerAction

from ament_index_python.packages import get_package_share_directory

import os


def generate_launch_description():

    package_share = get_package_share_directory("drone_sim")

    world = os.path.join(
        package_share,
        "worlds",
        "empty.sdf"
    )

    blue_model = os.path.join(
        package_share,
        "models",
        "drone_blue",
        "model.sdf"
    )

    green_model = os.path.join(
        package_share,
        "models",
        "drone_green",
        "model.sdf"
    )

    gazebo = ExecuteProcess(
        cmd=[
            "gz",
            "sim",
            world
        ],
        output="screen"
    )

    spawn_blue = ExecuteProcess(
        cmd=[
            "gz",
            "service",
            "-s",
            "/world/empty_world/create",
            "--reqtype",
            "gz.msgs.EntityFactory",
            "--reptype",
            "gz.msgs.Boolean",
            "--timeout",
            "3000",
            "--req",
            f"""
            sdf_filename: "{blue_model}"
            name: "drone_blue"
            pose {{
                position {{
                    x: 0
                    y: 0
                    z: 0.3
                }}
            }}
            """
        ],
        output="screen"
    )

    spawn_green = ExecuteProcess(
        cmd=[
            "gz",
            "service",
            "-s",
            "/world/empty_world/create",
            "--reqtype",
            "gz.msgs.EntityFactory",
            "--reptype",
            "gz.msgs.Boolean",
            "--timeout",
            "3000",
            "--req",
            f"""
            sdf_filename: "{green_model}"
            name: "drone_green"
            pose {{
                position {{
                    x: 3
                    y: 0
                    z: 0.3
                }}
            }}
            """
        ],
        output="screen"
    )

    return LaunchDescription([

        gazebo,

        TimerAction(
            period=3.0,
            actions=[spawn_blue]
        ),

        TimerAction(
            period=4.0,
            actions=[spawn_green]
        )

    ])