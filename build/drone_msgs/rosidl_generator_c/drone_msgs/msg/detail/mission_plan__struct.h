// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/MissionPlan.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__STRUCT_H_

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
// Member 'primitives'
#include "drone_msgs/msg/detail/primitive__struct.h"

/// Struct defined in msg/MissionPlan in the package drone_msgs.
typedef struct drone_msgs__msg__MissionPlan
{
  rosidl_runtime_c__String drone_name;
  drone_msgs__msg__Primitive__Sequence primitives;
  uint32_t mission_id;
} drone_msgs__msg__MissionPlan;

// Struct for a sequence of drone_msgs__msg__MissionPlan.
typedef struct drone_msgs__msg__MissionPlan__Sequence
{
  drone_msgs__msg__MissionPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__MissionPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION_PLAN__STRUCT_H_
