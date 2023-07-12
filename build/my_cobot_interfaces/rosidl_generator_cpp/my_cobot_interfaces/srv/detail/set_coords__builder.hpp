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

class Init_SetCoords_Request_k
{
public:
  explicit Init_SetCoords_Request_k(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  ::my_cobot_interfaces::srv::SetCoords_Request k(::my_cobot_interfaces::srv::SetCoords_Request::_k_type arg)
  {
    msg_.k = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_j
{
public:
  explicit Init_SetCoords_Request_j(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_k j(::my_cobot_interfaces::srv::SetCoords_Request::_j_type arg)
  {
    msg_.j = std::move(arg);
    return Init_SetCoords_Request_k(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_i
{
public:
  explicit Init_SetCoords_Request_i(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_j i(::my_cobot_interfaces::srv::SetCoords_Request::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_SetCoords_Request_j(msg_);
  }

private:
  ::my_cobot_interfaces::srv::SetCoords_Request msg_;
};

class Init_SetCoords_Request_w
{
public:
  explicit Init_SetCoords_Request_w(::my_cobot_interfaces::srv::SetCoords_Request & msg)
  : msg_(msg)
  {}
  Init_SetCoords_Request_i w(::my_cobot_interfaces::srv::SetCoords_Request::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_SetCoords_Request_i(msg_);
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
  Init_SetCoords_Request_w z(::my_cobot_interfaces::srv::SetCoords_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SetCoords_Request_w(msg_);
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
