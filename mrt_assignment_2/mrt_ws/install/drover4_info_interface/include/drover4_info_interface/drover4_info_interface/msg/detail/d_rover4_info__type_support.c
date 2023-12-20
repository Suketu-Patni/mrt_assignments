// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drover4_info_interface/msg/detail/d_rover4_info__rosidl_typesupport_introspection_c.h"
#include "drover4_info_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drover4_info_interface/msg/detail/d_rover4_info__functions.h"
#include "drover4_info_interface/msg/detail/d_rover4_info__struct.h"


// Include directives for member types
// Member `current_location`
#include "geometry_msgs/msg/pose.h"
// Member `current_location`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `health_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drover4_info_interface__msg__DRover4Info__init(message_memory);
}

void drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_fini_function(void * message_memory)
{
  drover4_info_interface__msg__DRover4Info__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_member_array[4] = {
  {
    "rover_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drover4_info_interface__msg__DRover4Info, rover_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drover4_info_interface__msg__DRover4Info, battery_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drover4_info_interface__msg__DRover4Info, current_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drover4_info_interface__msg__DRover4Info, health_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_members = {
  "drover4_info_interface__msg",  // message namespace
  "DRover4Info",  // message name
  4,  // number of fields
  sizeof(drover4_info_interface__msg__DRover4Info),
  drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_member_array,  // message members
  drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_init_function,  // function to initialize message memory (memory has to be allocated)
  drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_type_support_handle = {
  0,
  &drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drover4_info_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drover4_info_interface, msg, DRover4Info)() {
  drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_type_support_handle.typesupport_identifier) {
    drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drover4_info_interface__msg__DRover4Info__rosidl_typesupport_introspection_c__DRover4Info_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
