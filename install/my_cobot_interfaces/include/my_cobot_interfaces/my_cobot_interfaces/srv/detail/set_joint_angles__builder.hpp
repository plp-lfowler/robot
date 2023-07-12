// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/SetJointAngles.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/set_joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJointAngles_Request_j6
{
public:
  explicit Init_SetJointAngles_Request_j6(::my_cobot_interfaces::srv::SetJointAngles_Request & msg)
  : msg_(msg)
  {}
  ::my_cobot_interfaces::srv::SetJointAngles_Request j6(::my_cobot_interfaces::srv::SetJointAngles_Request::_j6_type arg)
  {
    msg_.j6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Request msg_;
};

class Init_SetJointAngles_Request_j5
{
public:
  explicit Init_SetJointAngles_Request_j5(::my_cobot_interfaces::srv::SetJointAngles_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointAngles_Request_j6 j5(::my_cobot_interfaces::srv::SetJointAngles_Request::_j5_type arg)
  {
    msg_.j5 = std::move(arg);
    return Init_SetJointAngles_Request_j6(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Request msg_;
};

class Init_SetJointAngles_Request_j4
{
public:
  explicit Init_SetJointAngles_Request_j4(::my_cobot_interfaces::srv::SetJointAngles_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointAngles_Request_j5 j4(::my_cobot_interfaces::srv::SetJointAngles_Request::_j4_type arg)
  {
    msg_.j4 = std::move(arg);
    return Init_SetJointAngles_Request_j5(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Request msg_;
};

class Init_SetJointAngles_Request_j3
{
public:
  explicit Init_SetJointAngles_Request_j3(::my_cobot_interfaces::srv::SetJointAngles_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointAngles_Request_j4 j3(::my_cobot_interfaces::srv::SetJointAngles_Request::_j3_type arg)
  {
    msg_.j3 = std::move(arg);
    return Init_SetJointAngles_Request_j4(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Request msg_;
};

class Init_SetJointAngles_Request_j2
{
public:
  explicit Init_SetJointAngles_Request_j2(::my_cobot_interfaces::srv::SetJointAngles_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointAngles_Request_j3 j2(::my_cobot_interfaces::srv::SetJointAngles_Request::_j2_type arg)
  {
    msg_.j2 = std::move(arg);
    return Init_SetJointAngles_Request_j3(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Request msg_;
};

class Init_SetJointAngles_Request_j1
{
public:
  Init_SetJointAngles_Request_j1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointAngles_Request_j2 j1(::my_cobot_interfaces::srv::SetJointAngles_Request::_j1_type arg)
  {
    msg_.j1 = std::move(arg);
    return Init_SetJointAngles_Request_j2(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::SetJointAngles_Request>()
{
  return my_cobot_interfaces::srv::builder::Init_SetJointAngles_Request_j1();
}

}  // namespace my_cobot_interfaces


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJointAngles_Response_success
{
public:
  Init_SetJointAngles_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_cobot_interfaces::srv::SetJointAngles_Response success(::my_cobot_interfaces::srv::SetJointAngles_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetJointAngles_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::SetJointAngles_Response>()
{
  return my_cobot_interfaces::srv::builder::Init_SetJointAngles_Response_success();
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__BUILDER_HPP_
