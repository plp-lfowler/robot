// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/GetBlocks.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__GET_BLOCKS__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__GET_BLOCKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/get_blocks__struct.hpp"
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
auto build<::my_cobot_interfaces::srv::GetBlocks_Request>()
{
  return ::my_cobot_interfaces::srv::GetBlocks_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_cobot_interfaces


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBlocks_Response_blocks
{
public:
  Init_GetBlocks_Response_blocks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_cobot_interfaces::srv::GetBlocks_Response blocks(::my_cobot_interfaces::srv::GetBlocks_Response::_blocks_type arg)
  {
    msg_.blocks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::GetBlocks_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::GetBlocks_Response>()
{
  return my_cobot_interfaces::srv::builder::Init_GetBlocks_Response_blocks();
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__GET_BLOCKS__BUILDER_HPP_
