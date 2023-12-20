// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#ifndef DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__STRUCT_H_
#define DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_location'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'health_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DRover4Info in the package drover4_info_interface.
typedef struct drover4_info_interface__msg__DRover4Info
{
  int32_t rover_id;
  float battery_level;
  geometry_msgs__msg__Pose current_location;
  rosidl_runtime_c__String health_status;
} drover4_info_interface__msg__DRover4Info;

// Struct for a sequence of drover4_info_interface__msg__DRover4Info.
typedef struct drover4_info_interface__msg__DRover4Info__Sequence
{
  drover4_info_interface__msg__DRover4Info * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drover4_info_interface__msg__DRover4Info__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__STRUCT_H_
