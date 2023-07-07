// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/SetRadians.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_RADIANS__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_RADIANS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/set_radians__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetRadians_Request_angles
{
public:
  explicit Init_SetRadians_Request_angles(::my_cobot_interfaces::srv::SetRadians_Request & msg)
  : msg_(msg)
  {}
  ::my_cobot_interfaces::srv::SetRadians_Request angles(::my_cobot_interfaces::srv::SetRadians_Request::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetRadians_Request msg_;
};

class Init_SetRadians_Request_joint_names
{
public:
  Init_SetRadians_Request_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRadians_Request_angles joint_names(::my_cobot_interfaces::srv::SetRadians_Request::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_SetRadians_Request_angles(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetRadians_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::SetRadians_Request>()
{
  return my_cobot_interfaces::srv::builder::Init_SetRadians_Request_joint_names();
}

}  // namespace my_cobot_interfaces


namespace my_cobot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::SetRadians_Response>()
{
  return ::my_cobot_interfaces::srv::SetRadians_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_RADIANS__BUILDER_HPP_
