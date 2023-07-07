// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_cobot_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_cobot_interfaces/srv/detail/set_coords__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_cobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoords_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << ", ";
  }

  // member: ry
  {
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << ", ";
  }

  // member: rz
  {
    out << "rz: ";
    rosidl_generator_traits::value_to_yaml(msg.rz, out);
    out << ", ";
  }

  // member: cartesian
  {
    out << "cartesian: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoords_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }

  // member: ry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << "\n";
  }

  // member: rz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rz: ";
    rosidl_generator_traits::value_to_yaml(msg.rz, out);
    out << "\n";
  }

  // member: cartesian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoords_Request & msg, bool use_flow_style = false)
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

}  // namespace my_cobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_cobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_cobot_interfaces::srv::SetCoords_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::srv::SetCoords_Request & msg)
{
  return my_cobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::srv::SetCoords_Request>()
{
  return "my_cobot_interfaces::srv::SetCoords_Request";
}

template<>
inline const char * name<my_cobot_interfaces::srv::SetCoords_Request>()
{
  return "my_cobot_interfaces/srv/SetCoords_Request";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::SetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::SetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_cobot_interfaces::srv::SetCoords_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_cobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoords_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoords_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoords_Response & msg, bool use_flow_style = false)
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

}  // namespace my_cobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_cobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_cobot_interfaces::srv::SetCoords_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::srv::SetCoords_Response & msg)
{
  return my_cobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::srv::SetCoords_Response>()
{
  return "my_cobot_interfaces::srv::SetCoords_Response";
}

template<>
inline const char * name<my_cobot_interfaces::srv::SetCoords_Response>()
{
  return "my_cobot_interfaces/srv/SetCoords_Response";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::SetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::SetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_cobot_interfaces::srv::SetCoords_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_cobot_interfaces::srv::SetCoords>()
{
  return "my_cobot_interfaces::srv::SetCoords";
}

template<>
inline const char * name<my_cobot_interfaces::srv::SetCoords>()
{
  return "my_cobot_interfaces/srv/SetCoords";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::SetCoords>
  : std::integral_constant<
    bool,
    has_fixed_size<my_cobot_interfaces::srv::SetCoords_Request>::value &&
    has_fixed_size<my_cobot_interfaces::srv::SetCoords_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::SetCoords>
  : std::integral_constant<
    bool,
    has_bounded_size<my_cobot_interfaces::srv::SetCoords_Request>::value &&
    has_bounded_size<my_cobot_interfaces::srv::SetCoords_Response>::value
  >
{
};

template<>
struct is_service<my_cobot_interfaces::srv::SetCoords>
  : std::true_type
{
};

template<>
struct is_service_request<my_cobot_interfaces::srv::SetCoords_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_cobot_interfaces::srv::SetCoords_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_
