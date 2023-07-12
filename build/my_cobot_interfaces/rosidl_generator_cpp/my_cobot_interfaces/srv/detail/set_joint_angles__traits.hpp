// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_cobot_interfaces:srv/SetJointAngles.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__TRAITS_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_cobot_interfaces/srv/detail/set_joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_cobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointAngles_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: j1
  {
    out << "j1: ";
    rosidl_generator_traits::value_to_yaml(msg.j1, out);
    out << ", ";
  }

  // member: j2
  {
    out << "j2: ";
    rosidl_generator_traits::value_to_yaml(msg.j2, out);
    out << ", ";
  }

  // member: j3
  {
    out << "j3: ";
    rosidl_generator_traits::value_to_yaml(msg.j3, out);
    out << ", ";
  }

  // member: j4
  {
    out << "j4: ";
    rosidl_generator_traits::value_to_yaml(msg.j4, out);
    out << ", ";
  }

  // member: j5
  {
    out << "j5: ";
    rosidl_generator_traits::value_to_yaml(msg.j5, out);
    out << ", ";
  }

  // member: j6
  {
    out << "j6: ";
    rosidl_generator_traits::value_to_yaml(msg.j6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointAngles_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: j1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1: ";
    rosidl_generator_traits::value_to_yaml(msg.j1, out);
    out << "\n";
  }

  // member: j2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2: ";
    rosidl_generator_traits::value_to_yaml(msg.j2, out);
    out << "\n";
  }

  // member: j3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3: ";
    rosidl_generator_traits::value_to_yaml(msg.j3, out);
    out << "\n";
  }

  // member: j4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4: ";
    rosidl_generator_traits::value_to_yaml(msg.j4, out);
    out << "\n";
  }

  // member: j5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5: ";
    rosidl_generator_traits::value_to_yaml(msg.j5, out);
    out << "\n";
  }

  // member: j6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6: ";
    rosidl_generator_traits::value_to_yaml(msg.j6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointAngles_Request & msg, bool use_flow_style = false)
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
  const my_cobot_interfaces::srv::SetJointAngles_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::srv::SetJointAngles_Request & msg)
{
  return my_cobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::srv::SetJointAngles_Request>()
{
  return "my_cobot_interfaces::srv::SetJointAngles_Request";
}

template<>
inline const char * name<my_cobot_interfaces::srv::SetJointAngles_Request>()
{
  return "my_cobot_interfaces/srv/SetJointAngles_Request";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::SetJointAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::SetJointAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_cobot_interfaces::srv::SetJointAngles_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_cobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointAngles_Response & msg,
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
  const SetJointAngles_Response & msg,
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

inline std::string to_yaml(const SetJointAngles_Response & msg, bool use_flow_style = false)
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
  const my_cobot_interfaces::srv::SetJointAngles_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::srv::SetJointAngles_Response & msg)
{
  return my_cobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::srv::SetJointAngles_Response>()
{
  return "my_cobot_interfaces::srv::SetJointAngles_Response";
}

template<>
inline const char * name<my_cobot_interfaces::srv::SetJointAngles_Response>()
{
  return "my_cobot_interfaces/srv/SetJointAngles_Response";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::SetJointAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::SetJointAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_cobot_interfaces::srv::SetJointAngles_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_cobot_interfaces::srv::SetJointAngles>()
{
  return "my_cobot_interfaces::srv::SetJointAngles";
}

template<>
inline const char * name<my_cobot_interfaces::srv::SetJointAngles>()
{
  return "my_cobot_interfaces/srv/SetJointAngles";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::SetJointAngles>
  : std::integral_constant<
    bool,
    has_fixed_size<my_cobot_interfaces::srv::SetJointAngles_Request>::value &&
    has_fixed_size<my_cobot_interfaces::srv::SetJointAngles_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::SetJointAngles>
  : std::integral_constant<
    bool,
    has_bounded_size<my_cobot_interfaces::srv::SetJointAngles_Request>::value &&
    has_bounded_size<my_cobot_interfaces::srv::SetJointAngles_Response>::value
  >
{
};

template<>
struct is_service<my_cobot_interfaces::srv::SetJointAngles>
  : std::true_type
{
};

template<>
struct is_service_request<my_cobot_interfaces::srv::SetJointAngles_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_cobot_interfaces::srv::SetJointAngles_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__TRAITS_HPP_
