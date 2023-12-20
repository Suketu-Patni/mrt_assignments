// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#ifndef DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__TRAITS_HPP_
#define DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drover4_info_interface/msg/detail/d_rover4_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_location'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace drover4_info_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const DRover4Info & msg,
  std::ostream & out)
{
  out << "{";
  // member: rover_id
  {
    out << "rover_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_id, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: current_location
  {
    out << "current_location: ";
    to_flow_style_yaml(msg.current_location, out);
    out << ", ";
  }

  // member: health_status
  {
    out << "health_status: ";
    rosidl_generator_traits::value_to_yaml(msg.health_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DRover4Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rover_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rover_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rover_id, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: current_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_location:\n";
    to_block_style_yaml(msg.current_location, out, indentation + 2);
  }

  // member: health_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_status: ";
    rosidl_generator_traits::value_to_yaml(msg.health_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DRover4Info & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drover4_info_interface

namespace rosidl_generator_traits
{

[[deprecated("use drover4_info_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drover4_info_interface::msg::DRover4Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  drover4_info_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drover4_info_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const drover4_info_interface::msg::DRover4Info & msg)
{
  return drover4_info_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drover4_info_interface::msg::DRover4Info>()
{
  return "drover4_info_interface::msg::DRover4Info";
}

template<>
inline const char * name<drover4_info_interface::msg::DRover4Info>()
{
  return "drover4_info_interface/msg/DRover4Info";
}

template<>
struct has_fixed_size<drover4_info_interface::msg::DRover4Info>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drover4_info_interface::msg::DRover4Info>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drover4_info_interface::msg::DRover4Info>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__TRAITS_HPP_
