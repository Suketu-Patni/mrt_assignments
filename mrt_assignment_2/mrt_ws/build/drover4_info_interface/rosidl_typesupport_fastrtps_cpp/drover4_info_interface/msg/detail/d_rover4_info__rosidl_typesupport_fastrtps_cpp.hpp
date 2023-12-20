// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#ifndef DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "drover4_info_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "drover4_info_interface/msg/detail/d_rover4_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace drover4_info_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drover4_info_interface
cdr_serialize(
  const drover4_info_interface::msg::DRover4Info & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drover4_info_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drover4_info_interface::msg::DRover4Info & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drover4_info_interface
get_serialized_size(
  const drover4_info_interface::msg::DRover4Info & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drover4_info_interface
max_serialized_size_DRover4Info(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drover4_info_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drover4_info_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drover4_info_interface, msg, DRover4Info)();

#ifdef __cplusplus
}
#endif

#endif  // DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
