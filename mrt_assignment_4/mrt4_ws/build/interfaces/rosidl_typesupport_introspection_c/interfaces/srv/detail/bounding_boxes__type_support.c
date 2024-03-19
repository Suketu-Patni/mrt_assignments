// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:srv/BoundingBoxes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/srv/detail/bounding_boxes__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/srv/detail/bounding_boxes__functions.h"
#include "interfaces/srv/detail/bounding_boxes__struct.h"


// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/image.h"
// Member `img`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__BoundingBoxes_Request__init(message_memory);
}

void interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_fini_function(void * message_memory)
{
  interfaces__srv__BoundingBoxes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_member_array[1] = {
  {
    "img",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__BoundingBoxes_Request, img),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_members = {
  "interfaces__srv",  // message namespace
  "BoundingBoxes_Request",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__BoundingBoxes_Request),
  interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_member_array,  // message members
  interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_type_support_handle = {
  0,
  &interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes_Request)() {
  interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__BoundingBoxes_Request__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/bounding_boxes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/bounding_boxes__functions.h"
// already included above
// #include "interfaces/srv/detail/bounding_boxes__struct.h"


// Include directives for member types
// Member `bounding_boxes`
// Member `aruco_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__BoundingBoxes_Response__init(message_memory);
}

void interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_fini_function(void * message_memory)
{
  interfaces__srv__BoundingBoxes_Response__fini(message_memory);
}

size_t interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__size_function__BoundingBoxes_Response__bounding_boxes(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes_Response__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_function__BoundingBoxes_Response__bounding_boxes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes_Response__bounding_boxes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes_Response__bounding_boxes(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes_Response__bounding_boxes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_function__BoundingBoxes_Response__bounding_boxes(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes_Response__bounding_boxes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__size_function__BoundingBoxes_Response__aruco_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes_Response__aruco_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_function__BoundingBoxes_Response__aruco_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes_Response__aruco_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes_Response__aruco_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes_Response__aruco_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_function__BoundingBoxes_Response__aruco_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes_Response__aruco_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_member_array[2] = {
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__BoundingBoxes_Response, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__size_function__BoundingBoxes_Response__bounding_boxes,  // size() function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes_Response__bounding_boxes,  // get_const(index) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_function__BoundingBoxes_Response__bounding_boxes,  // get(index) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes_Response__bounding_boxes,  // fetch(index, &value) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes_Response__bounding_boxes,  // assign(index, value) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes_Response__bounding_boxes  // resize(index) function pointer
  },
  {
    "aruco_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__BoundingBoxes_Response, aruco_ids),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__size_function__BoundingBoxes_Response__aruco_ids,  // size() function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes_Response__aruco_ids,  // get_const(index) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__get_function__BoundingBoxes_Response__aruco_ids,  // get(index) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes_Response__aruco_ids,  // fetch(index, &value) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes_Response__aruco_ids,  // assign(index, value) function pointer
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes_Response__aruco_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_members = {
  "interfaces__srv",  // message namespace
  "BoundingBoxes_Response",  // message name
  2,  // number of fields
  sizeof(interfaces__srv__BoundingBoxes_Response),
  interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_member_array,  // message members
  interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_type_support_handle = {
  0,
  &interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes_Response)() {
  if (!interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__BoundingBoxes_Response__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/bounding_boxes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_members = {
  "interfaces__srv",  // service namespace
  "BoundingBoxes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_type_support_handle = {
  0,
  &interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes)() {
  if (!interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_type_support_handle.typesupport_identifier) {
    interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, BoundingBoxes_Response)()->data;
  }

  return &interfaces__srv__detail__bounding_boxes__rosidl_typesupport_introspection_c__BoundingBoxes_service_type_support_handle;
}
