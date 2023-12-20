// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drover4_info_interface:msg/DRover4Info.idl
// generated code does not contain a copyright notice

#ifndef DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__BUILDER_HPP_
#define DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drover4_info_interface/msg/detail/d_rover4_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drover4_info_interface
{

namespace msg
{

namespace builder
{

class Init_DRover4Info_health_status
{
public:
  explicit Init_DRover4Info_health_status(::drover4_info_interface::msg::DRover4Info & msg)
  : msg_(msg)
  {}
  ::drover4_info_interface::msg::DRover4Info health_status(::drover4_info_interface::msg::DRover4Info::_health_status_type arg)
  {
    msg_.health_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drover4_info_interface::msg::DRover4Info msg_;
};

class Init_DRover4Info_current_location
{
public:
  explicit Init_DRover4Info_current_location(::drover4_info_interface::msg::DRover4Info & msg)
  : msg_(msg)
  {}
  Init_DRover4Info_health_status current_location(::drover4_info_interface::msg::DRover4Info::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return Init_DRover4Info_health_status(msg_);
  }

private:
  ::drover4_info_interface::msg::DRover4Info msg_;
};

class Init_DRover4Info_battery_level
{
public:
  explicit Init_DRover4Info_battery_level(::drover4_info_interface::msg::DRover4Info & msg)
  : msg_(msg)
  {}
  Init_DRover4Info_current_location battery_level(::drover4_info_interface::msg::DRover4Info::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_DRover4Info_current_location(msg_);
  }

private:
  ::drover4_info_interface::msg::DRover4Info msg_;
};

class Init_DRover4Info_rover_id
{
public:
  Init_DRover4Info_rover_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DRover4Info_battery_level rover_id(::drover4_info_interface::msg::DRover4Info::_rover_id_type arg)
  {
    msg_.rover_id = std::move(arg);
    return Init_DRover4Info_battery_level(msg_);
  }

private:
  ::drover4_info_interface::msg::DRover4Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drover4_info_interface::msg::DRover4Info>()
{
  return drover4_info_interface::msg::builder::Init_DRover4Info_rover_id();
}

}  // namespace drover4_info_interface

#endif  // DROVER4_INFO_INTERFACE__MSG__DETAIL__D_ROVER4_INFO__BUILDER_HPP_
