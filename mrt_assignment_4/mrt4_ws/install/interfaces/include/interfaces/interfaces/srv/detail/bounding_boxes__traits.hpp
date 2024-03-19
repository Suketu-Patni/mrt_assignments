// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__BOUNDING_BOXES__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__BOUNDING_BOXES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/bounding_boxes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BoundingBoxes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBoxes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBoxes_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::BoundingBoxes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::BoundingBoxes_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::BoundingBoxes_Request>()
{
  return "interfaces::srv::BoundingBoxes_Request";
}

template<>
inline const char * name<interfaces::srv::BoundingBoxes_Request>()
{
  return "interfaces/srv/BoundingBoxes_Request";
}

template<>
struct has_fixed_size<interfaces::srv::BoundingBoxes_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<interfaces::srv::BoundingBoxes_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<interfaces::srv::BoundingBoxes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BoundingBoxes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: bounding_boxes
  {
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []";
    } else {
      out << "bounding_boxes: [";
      size_t pending_items = msg.bounding_boxes.size();
      for (auto item : msg.bounding_boxes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aruco_ids
  {
    if (msg.aruco_ids.size() == 0) {
      out << "aruco_ids: []";
    } else {
      out << "aruco_ids: [";
      size_t pending_items = msg.aruco_ids.size();
      for (auto item : msg.aruco_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBoxes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bounding_boxes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []\n";
    } else {
      out << "bounding_boxes:\n";
      for (auto item : msg.bounding_boxes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aruco_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aruco_ids.size() == 0) {
      out << "aruco_ids: []\n";
    } else {
      out << "aruco_ids:\n";
      for (auto item : msg.aruco_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBoxes_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::BoundingBoxes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::BoundingBoxes_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::BoundingBoxes_Response>()
{
  return "interfaces::srv::BoundingBoxes_Response";
}

template<>
inline const char * name<interfaces::srv::BoundingBoxes_Response>()
{
  return "interfaces/srv/BoundingBoxes_Response";
}

template<>
struct has_fixed_size<interfaces::srv::BoundingBoxes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::BoundingBoxes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::BoundingBoxes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::BoundingBoxes>()
{
  return "interfaces::srv::BoundingBoxes";
}

template<>
inline const char * name<interfaces::srv::BoundingBoxes>()
{
  return "interfaces/srv/BoundingBoxes";
}

template<>
struct has_fixed_size<interfaces::srv::BoundingBoxes>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::BoundingBoxes_Request>::value &&
    has_fixed_size<interfaces::srv::BoundingBoxes_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::BoundingBoxes>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::BoundingBoxes_Request>::value &&
    has_bounded_size<interfaces::srv::BoundingBoxes_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::BoundingBoxes>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::BoundingBoxes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::BoundingBoxes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__BOUNDING_BOXES__TRAITS_HPP_
