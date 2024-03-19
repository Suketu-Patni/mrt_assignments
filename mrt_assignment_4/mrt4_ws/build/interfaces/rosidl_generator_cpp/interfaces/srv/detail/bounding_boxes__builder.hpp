// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__BOUNDING_BOXES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/bounding_boxes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_BoundingBoxes_Request_img
{
public:
  Init_BoundingBoxes_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::BoundingBoxes_Request img(::interfaces::srv::BoundingBoxes_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::BoundingBoxes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::BoundingBoxes_Request>()
{
  return interfaces::srv::builder::Init_BoundingBoxes_Request_img();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_BoundingBoxes_Response_aruco_ids
{
public:
  explicit Init_BoundingBoxes_Response_aruco_ids(::interfaces::srv::BoundingBoxes_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::BoundingBoxes_Response aruco_ids(::interfaces::srv::BoundingBoxes_Response::_aruco_ids_type arg)
  {
    msg_.aruco_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::BoundingBoxes_Response msg_;
};

class Init_BoundingBoxes_Response_bounding_boxes
{
public:
  Init_BoundingBoxes_Response_bounding_boxes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxes_Response_aruco_ids bounding_boxes(::interfaces::srv::BoundingBoxes_Response::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return Init_BoundingBoxes_Response_aruco_ids(msg_);
  }

private:
  ::interfaces::srv::BoundingBoxes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::BoundingBoxes_Response>()
{
  return interfaces::srv::builder::Init_BoundingBoxes_Response_bounding_boxes();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
