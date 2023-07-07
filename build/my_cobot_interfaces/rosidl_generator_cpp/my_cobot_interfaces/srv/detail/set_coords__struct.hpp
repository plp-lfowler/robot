// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_cobot_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__STRUCT_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__srv__SetCoords_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__srv__SetCoords_Request __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCoords_Request_
{
  using Type = SetCoords_Request_<ContainerAllocator>;

  explicit SetCoords_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rx = 0.0;
      this->ry = 0.0;
      this->rz = 0.0;
      this->cartesian = false;
    }
  }

  explicit SetCoords_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rx = 0.0;
      this->ry = 0.0;
      this->rz = 0.0;
      this->cartesian = false;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _rx_type =
    double;
  _rx_type rx;
  using _ry_type =
    double;
  _ry_type ry;
  using _rz_type =
    double;
  _rz_type rz;
  using _cartesian_type =
    bool;
  _cartesian_type cartesian;

  // setters for named parameter idiom
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
  Type & set__rx(
    const double & _arg)
  {
    this->rx = _arg;
    return *this;
  }
  Type & set__ry(
    const double & _arg)
  {
    this->ry = _arg;
    return *this;
  }
  Type & set__rz(
    const double & _arg)
  {
    this->rz = _arg;
    return *this;
  }
  Type & set__cartesian(
    const bool & _arg)
  {
    this->cartesian = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__srv__SetCoords_Request
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__srv__SetCoords_Request
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCoords_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->rx != other.rx) {
      return false;
    }
    if (this->ry != other.ry) {
      return false;
    }
    if (this->rz != other.rz) {
      return false;
    }
    if (this->cartesian != other.cartesian) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCoords_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCoords_Request_

// alias to use template instance with default allocator
using SetCoords_Request =
  my_cobot_interfaces::srv::SetCoords_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_cobot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__srv__SetCoords_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__srv__SetCoords_Response __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCoords_Response_
{
  using Type = SetCoords_Response_<ContainerAllocator>;

  explicit SetCoords_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCoords_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__srv__SetCoords_Response
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__srv__SetCoords_Response
    std::shared_ptr<my_cobot_interfaces::srv::SetCoords_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCoords_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCoords_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCoords_Response_

// alias to use template instance with default allocator
using SetCoords_Response =
  my_cobot_interfaces::srv::SetCoords_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_cobot_interfaces

namespace my_cobot_interfaces
{

namespace srv
{

struct SetCoords
{
  using Request = my_cobot_interfaces::srv::SetCoords_Request;
  using Response = my_cobot_interfaces::srv::SetCoords_Response;
};

}  // namespace srv

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_COORDS__STRUCT_HPP_