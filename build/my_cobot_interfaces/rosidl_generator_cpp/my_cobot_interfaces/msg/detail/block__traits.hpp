// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_cobot_interfaces:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__TRAITS_HPP_
#define MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_cobot_interfaces/msg/detail/block__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_cobot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Block & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

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

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Block & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

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

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Block & msg, bool use_flow_style = false)
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

}  // namespace my_cobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_cobot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_cobot_interfaces::msg::Block & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::msg::Block & msg)
{
  return my_cobot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::msg::Block>()
{
  return "my_cobot_interfaces::msg::Block";
}

template<>
inline const char * name<my_cobot_interfaces::msg::Block>()
{
  return "my_cobot_interfaces/msg/Block";
}

template<>
struct has_fixed_size<my_cobot_interfaces::msg::Block>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_cobot_interfaces::msg::Block>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_cobot_interfaces::msg::Block>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__TRAITS_HPP_
