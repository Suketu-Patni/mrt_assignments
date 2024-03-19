// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Path.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PATH__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Path_Request_bounding_boxes
{
public:
  Init_Path_Request_bounding_boxes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Path_Request bounding_boxes(::interfaces::srv::Path_Request::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Path_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Path_Request>()
{
  return interfaces::srv::builder::Init_Path_Request_bounding_boxes();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Path_Response_path
{
public:
  Init_Path_Response_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Path_Response path(::interfaces::srv::Path_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Path_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Path_Response>()
{
  return interfaces::srv::builder::Init_Path_Response_path();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PATH__BUILDER_HPP_
