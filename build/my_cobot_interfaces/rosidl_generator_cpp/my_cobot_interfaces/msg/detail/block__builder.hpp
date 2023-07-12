// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__BUILDER_HPP_
#define MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/msg/detail/block__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_cobot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Block_theta
{
public:
  explicit Init_Block_theta(::my_cobot_interfaces::msg::Block & msg)
  : msg_(msg)
  {}
  ::my_cobot_interfaces::msg::Block theta(::my_cobot_interfaces::msg::Block::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::msg::Block msg_;
};

class Init_Block_z
{
public:
  explicit Init_Block_z(::my_cobot_interfaces::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_theta z(::my_cobot_interfaces::msg::Block::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Block_theta(msg_);
  }

private:
  ::my_cobot_interfaces::msg::Block msg_;
};

class Init_Block_y
{
public:
  explicit Init_Block_y(::my_cobot_interfaces::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_z y(::my_cobot_interfaces::msg::Block::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Block_z(msg_);
  }

private:
  ::my_cobot_interfaces::msg::Block msg_;
};

class Init_Block_x
{
public:
  explicit Init_Block_x(::my_cobot_interfaces::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_y x(::my_cobot_interfaces::msg::Block::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Block_y(msg_);
  }

private:
  ::my_cobot_interfaces::msg::Block msg_;
};

class Init_Block_color
{
public:
  Init_Block_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Block_x color(::my_cobot_interfaces::msg::Block::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Block_x(msg_);
  }

private:
  ::my_cobot_interfaces::msg::Block msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::msg::Block>()
{
  return my_cobot_interfaces::msg::builder::Init_Block_color();
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__BUILDER_HPP_
