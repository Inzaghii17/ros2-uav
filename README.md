<div align="center">

# 🚁 ROS2 Multi-Drone UAV Planning Framework

**A modular, simulator-agnostic autonomous UAV planning system**  
built with ROS2 Jazzy · Gazebo Harmonic · C++17

---

[![ROS2](https://img.shields.io/badge/ROS2-Jazzy-blue?style=flat-square&logo=ros)](https://docs.ros.org/en/jazzy/)
[![Gazebo](https://img.shields.io/badge/Gazebo-Harmonic-orange?style=flat-square)](https://gazebosim.org/)
[![C++](https://img.shields.io/badge/C++-17-00599C?style=flat-square&logo=cplusplus)](https://en.cppreference.com/w/cpp/17)
[![Ubuntu](https://img.shields.io/badge/Ubuntu-22.04%20WSL-E95420?style=flat-square&logo=ubuntu)](https://ubuntu.com/)
[![Branch](https://img.shields.io/badge/branch-week2%2Fnehal-brightgreen?style=flat-square&logo=git)](https://github.com/Inzaghii17/ros2-uav/tree/week2/nehal)
[![License](https://img.shields.io/badge/license-MIT-yellow?style=flat-square)](LICENSE)

<br/>

> *Two drones. Independent missions. Stochastic battery. Full 3D movement.*  
> *Every layer is replaceable. No layer knows more than it needs to.*

</div>

---

## 📖 Table of Contents

- [What This Is](#-what-this-is)
- [System Architecture](#-system-architecture)
- [Package Overview](#-package-overview)
- [Motion Primitives](#-motion-primitives)
- [Battery Model](#-battery-model)
- [Message Pipeline](#-message-pipeline)
- [Directory Structure](#-directory-structure)
- [Getting Started](#-getting-started)
- [Running the Demo](#-running-the-demo)
- [Testing](#-testing)
- [Design Philosophy](#-design-philosophy)
- [Future Work](#-future-work)

---

## 🎯 What This Is

This is a **modular UAV planning framework** — not a drone physics simulator.

The objective is clean software architecture: strict separation between planning, execution, and visualization so that any layer can be upgraded without touching the others.

| What we focus on | What we deliberately skip |
|---|---|
| Motion primitive planning | PX4 / ArduPilot |
| Stochastic battery modelling | Aerodynamic physics |
| Multi-drone coordination | Flight controllers |
| Modular, swappable architecture | MAVROS |
| Real-time Gazebo visualization | Sensor simulation |

**Two drones** (`drone_blue`, `drone_green`) execute independent source→destination missions concurrently, with 11 motion primitives, stochastic battery drain, and pre-flight feasibility estimation — all visualized live in Gazebo Harmonic.

---

## 🏗 System Architecture

```
┌─────────────────────────────────────────────────────────┐
│                    Mission Request                       │
│           source · destination · drone_name             │
└───────────────────────┬─────────────────────────────────┘
                        │  /mission_request
                        ▼
┌─────────────────────────────────────────────────────────┐
│                    planner_node                          │
│         Greedy XY → Z primitive chain                   │
│    Mission.msg ──────────────► MissionPlan.msg          │
└───────────────────────┬─────────────────────────────────┘
                        │  /mission_plan_raw
                        ▼
┌─────────────────────────────────────────────────────────┐
│                 mission_manager_node                     │
│       Estimate battery · Gate dispatch · Route          │
└──────────────┬────────────────────┬─────────────────────┘
               │ /drone_blue/       │ /drone_green/
               │  mission_plan      │  mission_plan
               ▼                    ▼
┌──────────────────────┐  ┌──────────────────────────────┐
│   executor_node      │  │       executor_node           │
│   /drone_blue        │  │       /drone_green            │
│                      │  │                               │
│  pose · interpolate  │  │  pose · interpolate           │
│  battery · state     │  │  battery · state              │
│  machine · 30Hz pub  │  │  machine · 30Hz pub           │
└──────────┬───────────┘  └───────────────┬───────────────┘
           │ /drone_blue/drone_state       │ /drone_green/drone_state
           └──────────────┬───────────────┘
                          ▼
┌─────────────────────────────────────────────────────────┐
│                  gazebo_bridge_node                      │
│          Reads pose only · Calls SetEntityPose          │
└───────────────────────┬─────────────────────────────────┘
                        │  /world/empty_world/set_pose
                        ▼
┌─────────────────────────────────────────────────────────┐
│                    ros_gz_bridge                         │
│              ROS ↔ Gazebo transport layer               │
└───────────────────────┬─────────────────────────────────┘
                        │
                        ▼
┌─────────────────────────────────────────────────────────┐
│                  Gazebo Harmonic                         │
│         drone_blue  ·  drone_green  ·  3D world         │
│              visualization only — no physics            │
└─────────────────────────────────────────────────────────┘
```

### Key architectural rule

> **No layer knows more than it needs to.**

- The Planner does not know Gazebo exists
- The Executor does not know Gazebo exists
- The Mission Manager does not know Gazebo exists
- Only the Bridge talks to Gazebo
- The two Executors never communicate with each other

---

## 📦 Package Overview

```
ros2-uav/src/
├── drone_msgs          Message definitions — shared language of the system
├── drone_common        Shared battery cost header — one formula, no drift
├── drone_planner       Source → destination → primitive sequence
├── mission_manager     Estimate · Gate · Route · Log
├── drone_controller    Execute primitives · Interpolate · Track battery
├── drone_bridge        Read pose → call Gazebo SetEntityPose
└── drone_sim           World SDF · Drone models · Launch files
```

### `drone_msgs` — the contract

All message types live here. No logic. Every node agrees on this schema.

| Message | Purpose |
|---|---|
| `Mission.msg` | Input: source, destination, drone_name |
| `Primitive.msg` | Atomic movement unit with type enum + step_distance |
| `MissionPlan.msg` | Full primitive sequence for one drone |
| `DroneState.msg` | 30Hz heartbeat: pose, battery, moving flag |
| `PrimitiveStatus.msg` | Feedback: current index, mission_complete flag |
| `Battery.msg` | Pre-flight estimate: cost, current, mission_possible |

### `drone_common` — shared battery math

A header-only package. No compiled library. No ROS dependency.

```cpp
namespace drone_common {
  // Professor's exact formula
  // battery_drained = static_charge × random(0, 1)
  constexpr double kChargePerUnitDistance = 2.0;

  double battery_cost(double random_draw);
  double expected_battery_cost();   // used by Mission Manager for estimation
}
```

Both `mission_manager` and `drone_controller` include this header.
One formula. No drift between estimate and execution.

### `drone_planner` — geometry to primitives

Greedy straight-line planner. Resolves XY first, then Z.

```
Source  (0, 0, 0)  →  Destination  (3, 3, 3)

Generates:   NE  NE  NE  UP  UP  UP
```

Replace this algorithm (with A\*, Dijkstra, RRT) by modifying one function.
The message contract never changes. Nothing downstream is affected.

### `mission_manager` — the decision maker

```
Receive MissionPlan (raw)
    ↓
Dry-run battery_cost over full sequence
    ↓
Publish Battery.msg (estimate + mission_possible)
    ↓
if mission_possible:
    publish to /drone_blue/mission_plan
    or /drone_green/mission_plan
    ↓
Track PrimitiveStatus feedback
    ↓
On mission_complete: log result
```

### `drone_controller` — the Executor

State machine: **IDLE → EXECUTING → IDLE**

```
Receive MissionPlan
    ↓
for each primitive:
    computeNextTarget()     maps type → dx, dy, dz
    30Hz timer tick:
        interpolateStep()   move current_pose toward target_pose
        publishDroneState() 30Hz stream to Bridge
    targetReached():
        applyBatteryCost()  battery -= static × random(0,1)
        publishPrimitiveStatus()
        advancePrimitive()
    ↓
mission_complete → IDLE
```

### `drone_bridge` — Gazebo's only contact

```cpp
// Entire business logic of the Bridge:
void onDroneState(const DroneState::SharedPtr msg) {
  auto request = std::make_shared<SetEntityPose::Request>();
  request->name = msg->drone_name;
  request->pose = msg->pose;   // pose only — battery/moving ignored
  set_pose_client_->async_send_request(request);
}
```

Replace Gazebo with RViz or Isaac Sim by changing only this file.

---

## 🧭 Motion Primitives

11 primitives covering full 3D space. One primitive = one unit of movement.

```
         NW    N    NE
           ↖   ↑   ↗
        W ←  HOVER  → E          UP  ↑
           ↙   ↓   ↘             DOWN ↓
         SW    S    SE
```

| Value | Primitive | Direction | Delta |
|---|---|---|---|
| 0 | HOVER | stay | (0, 0, 0) |
| 1 | N | north | (0, +1, 0) |
| 2 | NE | north-east | (+1, +1, 0) |
| 3 | E | east | (+1, 0, 0) |
| 4 | SE | south-east | (+1, -1, 0) |
| 5 | S | south | (0, -1, 0) |
| 6 | SW | south-west | (-1, -1, 0) |
| 7 | W | west | (-1, 0, 0) |
| 8 | NW | north-west | (-1, +1, 0) |
| 9 | UP | climb | (0, 0, +1) |
| 10 | DOWN | descend | (0, 0, -1) |

> HOVER costs battery even though the drone does not move.  
> Stationary flight still burns charge — intentional design.

---

## 🔋 Battery Model

Implementing the professor's exact stochastic specification:

```
battery_drained  =  static_charge_per_unit  ×  random(0, 1)
new_battery      =  old_battery  −  battery_drained
```

- `random(0, 1)` is sampled **fresh on every primitive execution**
- The same primitive costs **different battery every single time**
- Models real-world uncertainty: wind, payload variation, motor efficiency

### Pre-flight estimation

Mission Manager cannot know future random draws — so it uses **expected value**:

```
estimated_cost  =  num_primitives  ×  static_charge  ×  0.5
                                               ↑
                                    mean of U(0, 1)
```

This is a documented design choice, not an approximation to be hidden.  
Actual consumption will differ from the estimate. That gap **is the stochastic model working correctly.**

### Battery drain — example run

```
Mission: (0,0,0) → (3,0,0)    =   3 × E primitives
static_charge = 2.0%

Primitive 1:  random = 0.73   →  drain = 1.46%   battery: 100.00 → 98.54
Primitive 2:  random = 0.21   →  drain = 0.42%   battery:  98.54 → 98.12
Primitive 3:  random = 0.89   →  drain = 1.78%   battery:  98.12 → 96.34

Estimated cost (pre-flight):  3 × 2.0 × 0.5 = 3.00%
Actual cost:                  1.46 + 0.42 + 1.78 = 3.66%
```

---

## 📨 Message Pipeline

```
/mission_request          Mission.msg
        ↓
/mission_plan_raw         MissionPlan.msg          (Planner → Manager)
        ↓
/mission_battery_estimate Battery.msg              (Manager → log)
        ↓
/drone_blue/mission_plan  MissionPlan.msg          (Manager → Executor)
/drone_green/mission_plan MissionPlan.msg
        ↓
/drone_blue/drone_state   DroneState.msg  @ 30Hz  (Executor → Bridge + Manager)
/drone_green/drone_state  DroneState.msg  @ 30Hz
        ↓
/drone_blue/primitive_status  PrimitiveStatus.msg  (Executor → Manager)
/drone_green/primitive_status PrimitiveStatus.msg
        ↓
/world/empty_world/set_pose   SetEntityPose srv    (Bridge → Gazebo)
```

---

## 📁 Directory Structure

```
ros2-uav/
├── src/
│   ├── drone_msgs/                    # Message definitions
│   │   ├── msg/
│   │   │   ├── Mission.msg
│   │   │   ├── Primitive.msg
│   │   │   ├── MissionPlan.msg
│   │   │   ├── DroneState.msg
│   │   │   ├── PrimitiveStatus.msg
│   │   │   └── Battery.msg
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   ├── drone_common/                  # Shared header-only battery math
│   │   ├── include/drone_common/
│   │   │   └── battery_cost.hpp
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   ├── drone_planner/                 # Source → primitive sequence
│   │   ├── src/planner_node.cpp
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   ├── mission_manager/               # Estimate · route · log
│   │   ├── src/mission_manager_node.cpp
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   ├── drone_controller/              # Executor — interpolation + battery
│   │   ├── src/executor_node.cpp
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   ├── drone_bridge/                  # Pose → Gazebo SetEntityPose
│   │   ├── src/gazebo_bridge_node.cpp
│   │   ├── CMakeLists.txt
│   │   └── package.xml
│   │
│   └── drone_sim/                     # World · Models · Launch
│       ├── launch/
│       │   └── simulation.launch.py
│       ├── models/
│       │   ├── drone_blue/
│       │   │   ├── model.config
│       │   │   └── model.sdf          # Quadcopter shape
│       │   └── drone_green/
│       │       ├── model.config
│       │       └── model.sdf          # Quadcopter shape
│       ├── worlds/
│       │   └── empty_world.sdf
│       ├── CMakeLists.txt
│       └── package.xml
│
├── .gitignore
└── README.md
```

---

## 🚀 Getting Started

### Prerequisites

```bash
# ROS2 Jazzy
sudo apt install ros-jazzy-desktop

# Gazebo Harmonic
sudo apt install gz-harmonic

# ros_gz bridge
sudo apt install ros-jazzy-ros-gz

# colcon
sudo apt install python3-colcon-common-extensions
```

### Clone and build

```bash
# Clone the repository
git clone https://github.com/Inzaghii17/ros2-uav.git
cd ros2-uav
git checkout week2/nehal

# Source ROS2
source /opt/ros/jazzy/setup.bash

# Build all packages
colcon build

# Source the workspace
source install/setup.bash
```

### Add to ~/.bashrc (recommended)

```bash
echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc
echo "source ~/ros2-uav/install/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

---

## 🎮 Running the Demo

### 1 — Launch the full simulation

```bash
# Terminal 1 — starts Gazebo, spawns both drones, launches all nodes
ros2 launch drone_sim simulation.launch.py
```

### 2 — Verify everything is running

```bash
# Terminal 2
ros2 node list
ros2 topic list
```

### 3 — Send a single drone mission (2D)

```bash
ros2 topic pub /mission_request drone_msgs/msg/Mission \
  "{drone_name: 'drone_blue', \
    source: {x: 0.0, y: 0.0, z: 0.0}, \
    destination: {x: 5.0, y: 5.0, z: 0.0}, \
    mission_id: 1}" --once
```

### 4 — Send a full 3D mission

```bash
ros2 topic pub /mission_request drone_msgs/msg/Mission \
  "{drone_name: 'drone_blue', \
    source: {x: 0.0, y: 0.0, z: 0.0}, \
    destination: {x: 5.0, y: 5.0, z: 5.0}, \
    mission_id: 2}" --once
```

Expected primitive sequence: `NE NE NE NE NE UP UP UP UP UP`

### 5 — Two drones simultaneously

```bash
# Fire both missions — drone_blue goes NE+UP, drone_green goes SW
ros2 topic pub /mission_request drone_msgs/msg/Mission \
  "{drone_name: 'drone_blue', \
    source: {x: 0.0, y: 0.0, z: 0.0}, \
    destination: {x: 5.0, y: 5.0, z: 3.0}, \
    mission_id: 10}" --once

ros2 topic pub /mission_request drone_msgs/msg/Mission \
  "{drone_name: 'drone_green', \
    source: {x: 0.0, y: 0.0, z: 0.0}, \
    destination: {x: -4.0, y: 3.0, z: 2.0}, \
    mission_id: 11}" --once
```

### 6 — Monitor live state

```bash
# Watch battery draining in real time
ros2 topic echo /drone_blue/drone_state | grep battery

# Watch primitive progress
ros2 topic echo /drone_blue/primitive_status

# Watch the pre-flight estimate
ros2 topic echo /mission_battery_estimate

# Visualize the full node graph
rqt_graph
```

---

## 🧪 Testing

### Build verification

```bash
colcon build
source install/setup.bash

# Confirm all message types exist
ros2 interface show drone_msgs/msg/DroneState
ros2 interface show drone_msgs/msg/Primitive
ros2 interface show drone_msgs/msg/MissionPlan
```

### Stochastic battery proof

Run the same mission three times. The battery consumed each time will differ.

```bash
# Mission: (0,0,0) → (2,0,0) = exactly 2 E primitives
# Run 3 times, note battery_remaining in primitive_status each time

ros2 topic pub /mission_request drone_msgs/msg/Mission \
  "{drone_name: 'drone_blue', source: {x: 0.0, y: 0.0, z: 0.0}, \
    destination: {x: 2.0, y: 0.0, z: 0.0}, mission_id: 20}" --once
```

**Expected:** Three different `battery_remaining` values — same mission, different cost every time.

### HOVER battery test

```bash
# HOVER: drone stays still, battery still drains
ros2 topic pub /drone_blue/mission_plan drone_msgs/msg/MissionPlan \
  "{drone_name: 'drone_blue', mission_id: 99, \
    primitives: [{type: 0, step_distance: 1.0}]}" --once
```

**Expected:** No movement in Gazebo. Battery decreases. `mission_complete: true`.

### Publish rate check

```bash
ros2 topic hz /drone_blue/drone_state
# Expected: ~30 Hz
```

---

## 🧠 Design Philosophy

### Strict separation of concerns

| Component | Knows about | Does NOT know about |
|---|---|---|
| Planner | Geometry, directions | Gazebo, battery, drones |
| Mission Manager | Both drones, battery, routing | How drones move, Gazebo |
| Executor | Pose, primitives, battery | Gazebo, other drones, origin of commands |
| Bridge | Gazebo API, pose | Missions, battery, planning |

### Simulator-agnostic execution

The Executor publishes `DroneState`. It imports no Gazebo headers.  
Swapping Gazebo for RViz or Isaac Sim = change one file: `gazebo_bridge_node.cpp`.

### Planner-agnostic execution

The Planner publishes `MissionPlan`. The algorithm is internal.  
Swapping greedy for A\* = change one function: `missionCallback()`.

### Drone-count-agnostic design

Adding a third drone requires:
- One new model SDF in `drone_sim`
- One new namespaced Executor in the launch file
- One additional routing condition in Mission Manager

Zero changes to any message type, Planner, or Bridge.

---

## 🔭 Future Work

| Enhancement | Package to modify | Everything else |
|---|---|---|
| A\* / Dijkstra planner | `drone_planner` only | unchanged |
| Obstacle avoidance | `drone_planner` only | unchanged |
| RViz visualization | `drone_bridge` only | unchanged |
| Battery failure handling | `drone_controller` only | unchanged |
| Battery colour indicator in Gazebo | `drone_bridge` only | unchanged |
| Third drone | `drone_sim` + launch | unchanged |
| Mission from YAML config | `mission_manager` only | unchanged |

---

## 👥 Authors

| Name | Branch |
|---|---|
| Nehal | `week2/nehal` |

---

## 📄 License

MIT License — see [LICENSE](LICENSE) for details.

---

<div align="center">

**Built with ROS2 Jazzy · Gazebo Harmonic · C++17**

*Modular by design. Every layer is replaceable.*

</div>
