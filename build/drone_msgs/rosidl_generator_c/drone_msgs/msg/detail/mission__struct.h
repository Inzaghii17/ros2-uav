// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__MISSION__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__MISSION__STRUCT_H_

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
// Member 'source'
// Member 'destination'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Mission in the package drone_msgs.
typedef struct drone_msgs__msg__Mission
{
  rosidl_runtime_c__String drone_name;
  geometry_msgs__msg__Point source;
  geometry_msgs__msg__Point destination;
  uint32_t mission_id;
} drone_msgs__msg__Mission;

// Struct for a sequence of drone_msgs__msg__Mission.
typedef struct drone_msgs__msg__Mission__Sequence
{
  drone_msgs__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__MISSION__STRUCT_H_
