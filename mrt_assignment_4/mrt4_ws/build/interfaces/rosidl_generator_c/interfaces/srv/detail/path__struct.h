// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Path.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PATH__STRUCT_H_
#define INTERFACES__SRV__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bounding_boxes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Path in the package interfaces.
typedef struct interfaces__srv__Path_Request
{
  rosidl_runtime_c__int32__Sequence bounding_boxes;
} interfaces__srv__Path_Request;

// Struct for a sequence of interfaces__srv__Path_Request.
typedef struct interfaces__srv__Path_Request__Sequence
{
  interfaces__srv__Path_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Path_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Path in the package interfaces.
typedef struct interfaces__srv__Path_Response
{
  rosidl_runtime_c__int32__Sequence path;
} interfaces__srv__Path_Response;

// Struct for a sequence of interfaces__srv__Path_Response.
typedef struct interfaces__srv__Path_Response__Sequence
{
  interfaces__srv__Path_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Path_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__PATH__STRUCT_H_
