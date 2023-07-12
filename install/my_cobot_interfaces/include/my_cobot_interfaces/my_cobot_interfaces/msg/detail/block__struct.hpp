// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_cobot_interfaces:msg/Block.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__STRUCT_HPP_
#define MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__msg__Block __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__msg__Block __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Block_
{
  using Type = Block_<ContainerAllocator>;

  explicit Block_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->theta = 0.0;
    }
  }

  explicit Block_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->theta = 0.0;
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _theta_type =
    double;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::msg::Block_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::msg::Block_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::msg::Block_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::msg::Block_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__msg__Block
    std::shared_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__msg__Block
    std::shared_ptr<my_cobot_interfaces::msg::Block_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Block_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Block_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Block_

// alias to use template instance with default allocator
using Block =
  my_cobot_interfaces::msg::Block_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__MSG__DETAIL__BLOCK__STRUCT_HPP_
