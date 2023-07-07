// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/set_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoords_Request_cartesian
{
public:
  explicit Init_SetCoords_Request_cartesian(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  ::my_cobot_interfaces::srv::SetCoords_Request cartesian(::my_cobot_interfaces::srv::SetCoords_Request::_cartesian_type arg)
  {
    msg_.cartesian = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_rz
{
public:
  explicit Init_SetCoords_Request_rz(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_cartesian rz(::my_cobot_interfaces::srv::SetCoords_Request::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return Init_SetCoords_Request_cartesian(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_ry
{
public:
  explicit Init_SetCoords_Request_ry(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_rz ry(::my_cobot_interfaces::srv::SetCoords_Request::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_SetCoords_Request_rz(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_rx
{
public:
  explicit Init_SetCoords_Request_rx(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_ry rx(::my_cobot_interfaces::srv::SetCoords_Request::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_SetCoords_Request_ry(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_z
{
public:
  explicit Init_SetCoords_Request_z(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_rx z(::my_cobot_interfaces::srv::SetCoords_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SetCoords_Request_rx(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_y
{
public:
  explicit Init_SetCoords_Request_y(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_z y(::my_cobot_interfaces::srv::SetCoords_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SetCoords_Request_z(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_x
{
public:
  Init_SetCoords_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCoords_Request_y x(::my_cobot_interfaces::srv::SetCoords_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetCoords_Request_y(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::SetCoords_Request>()
{
  return my_cobot_interfaces::srv::builder::Init_SetCoords_Request_x();
}

}  // namespace my_cobot_interfaces


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoords_Response_success
{
public:
  Init_SetCoords_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_cobot_interfaces::srv::SetCoords_Response success(::my_cobot_interfaces::srv::SetCoords_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::SetCoords_Response>()
{
  return my_cobot_interfaces::srv::builder::Init_SetCoords_Response_success();
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__BUILDER_HPP_
