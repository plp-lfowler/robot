// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_cobot_interfaces:srv/PlayPause.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__PLAY_PAUSE__BUILDER_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__PLAY_PAUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_cobot_interfaces/srv/detail/play_pause__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_cobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlayPause_Request_play
{
public:
  Init_PlayPause_Request_play()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_cobot_interfaces::srv::PlayPause_Request play(::my_cobot_interfaces::srv::PlayPause_Request::_play_type arg)
  {
    msg_.play = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_cobot_interfaces::srv::PlayPause_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_cobot_interfaces::srv::PlayPause_Request>()
{
  return my_cobot_interfaces::srv::builder::Init_PlayPause_Request_play();
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
auto build<::my_cobot_interfaces::srv::PlayPause_Response>()
{
  return ::my_cobot_interfaces::srv::PlayPause_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__PLAY_PAUSE__BUILDER_HPP_
