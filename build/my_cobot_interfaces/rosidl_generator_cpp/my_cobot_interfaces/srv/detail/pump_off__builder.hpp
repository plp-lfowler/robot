// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/PumpOff.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__PUMP_OFF__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__PUMP_OFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/pump_off__struct.hpp"
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
auto build<::my_cobot_interfaces::srv::PumpOff_Request>()
{
  return ::my_cobot_interfaces::srv::PumpOff_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
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
auto build<::my_cobot_interfaces::srv::PumpOff_Response>()
{
  return ::my_cobot_interfaces::srv::PumpOff_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__PUMP_OFF__BUILDER_HPP_
