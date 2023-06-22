// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/GetRadians.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__GET_RADIANS__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__GET_RADIANS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/get_radians__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_cobot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::GetRadians_Request>()
{
  return ::my_cobot_interfaces::srv::GetRadians_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_cobot_interfaces


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRadians_Response_joint_names
{
public:
  explicit Init_GetRadians_Response_joint_names(::my_cobot_interfaces::srv::GetRadians_Response & msg)
  : msg_(msg)
  {}
  ::my_cobot_interfaces::srv::GetRadians_Response joint_names(::my_cobot_interfaces::srv::GetRadians_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::GetRadians_Response msg_;
};

class Init_GetRadians_Response_angles
{
public:
  Init_GetRadians_Response_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRadians_Response_joint_names angles(::my_cobot_interfaces::srv::GetRadians_Response::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_GetRadians_Response_joint_names(msg_);
  }

private:
  ::my_cobot_interfaces::srv::GetRadians_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::GetRadians_Response>()
{
  return my_cobot_interfaces::srv::builder::Init_GetRadians_Response_angles();
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__GET_RADIANS__BUILDER_HPP_
