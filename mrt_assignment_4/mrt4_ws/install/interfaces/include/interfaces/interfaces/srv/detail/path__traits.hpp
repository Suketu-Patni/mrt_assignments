// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Path.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PATH__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Path_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Path_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path_Request & msg, bool use_flow_style = false)
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
  const interfaces::srv::Path_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Path_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Path_Request>()
{
  return "interfaces::srv::Path_Request";
}

template<>
inline const char * name<interfaces::srv::Path_Request>()
{
  return "interfaces/srv/Path_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Path_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Path_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Path_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Path_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
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
  const Path_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
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

inline std::string to_yaml(const Path_Response & msg, bool use_flow_style = false)
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
  const interfaces::srv::Path_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Path_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Path_Response>()
{
  return "interfaces::srv::Path_Response";
}

template<>
inline const char * name<interfaces::srv::Path_Response>()
{
  return "interfaces/srv/Path_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Path_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Path_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Path_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Path>()
{
  return "interfaces::srv::Path";
}

template<>
inline const char * name<interfaces::srv::Path>()
{
  return "interfaces/srv/Path";
}

template<>
struct has_fixed_size<interfaces::srv::Path>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Path_Request>::value &&
    has_fixed_size<interfaces::srv::Path_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Path>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Path_Request>::value &&
    has_bounded_size<interfaces::srv::Path_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Path>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Path_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Path_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__PATH__TRAITS_HPP_
