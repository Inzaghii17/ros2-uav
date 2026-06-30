// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/DroneState.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'drone_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/DroneState in the package drone_msgs.
typedef struct drone_msgs__msg__DroneState
{
  rosidl_runtime_c__String drone_name;
  geometry_msgs__msg__Pose pose;
  double battery;
  bool moving;
  uint32_t current_primitive_index;
} drone_msgs__msg__DroneState;

// Struct for a sequence of drone_msgs__msg__DroneState.
typedef struct drone_msgs__msg__DroneState__Sequence
{
  drone_msgs__msg__DroneState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__DroneState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE__STRUCT_H_
