// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_cobot_interfaces:srv/PlayPause.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__PLAY_PAUSE__TRAITS_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__PLAY_PAUSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_cobot_interfaces/srv/detail/play_pause__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_cobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayPause_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: play
  {
    out << "play: ";
    rosidl_generator_traits::value_to_yaml(msg.play, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayPause_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: play
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play: ";
    rosidl_generator_traits::value_to_yaml(msg.play, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayPause_Request & msg, bool use_flow_style = false)
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
  const my_cobot_interfaces::srv::PlayPause_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::srv::PlayPause_Request & msg)
{
  return my_cobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::srv::PlayPause_Request>()
{
  return "my_cobot_interfaces::srv::PlayPause_Request";
}

template<>
inline const char * name<my_cobot_interfaces::srv::PlayPause_Request>()
{
  return "my_cobot_interfaces/srv/PlayPause_Request";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::PlayPause_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::PlayPause_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_cobot_interfaces::srv::PlayPause_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_cobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayPause_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayPause_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayPause_Response & msg, bool use_flow_style = false)
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
  const my_cobot_interfaces::srv::PlayPause_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_cobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_cobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_cobot_interfaces::srv::PlayPause_Response & msg)
{
  return my_cobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_cobot_interfaces::srv::PlayPause_Response>()
{
  return "my_cobot_interfaces::srv::PlayPause_Response";
}

template<>
inline const char * name<my_cobot_interfaces::srv::PlayPause_Response>()
{
  return "my_cobot_interfaces/srv/PlayPause_Response";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::PlayPause_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::PlayPause_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_cobot_interfaces::srv::PlayPause_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_cobot_interfaces::srv::PlayPause>()
{
  return "my_cobot_interfaces::srv::PlayPause";
}

template<>
inline const char * name<my_cobot_interfaces::srv::PlayPause>()
{
  return "my_cobot_interfaces/srv/PlayPause";
}

template<>
struct has_fixed_size<my_cobot_interfaces::srv::PlayPause>
  : std::integral_constant<
    bool,
    has_fixed_size<my_cobot_interfaces::srv::PlayPause_Request>::value &&
    has_fixed_size<my_cobot_interfaces::srv::PlayPause_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_cobot_interfaces::srv::PlayPause>
  : std::integral_constant<
    bool,
    has_bounded_size<my_cobot_interfaces::srv::PlayPause_Request>::value &&
    has_bounded_size<my_cobot_interfaces::srv::PlayPause_Response>::value
  >
{
};

template<>
struct is_service<my_cobot_interfaces::srv::PlayPause>
  : std::true_type
{
};

template<>
struct is_service_request<my_cobot_interfaces::srv::PlayPause_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_cobot_interfaces::srv::PlayPause_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__PLAY_PAUSE__TRAITS_HPP_
