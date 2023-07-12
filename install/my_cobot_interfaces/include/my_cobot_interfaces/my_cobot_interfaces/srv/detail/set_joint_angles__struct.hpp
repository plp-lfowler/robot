// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_cobot_interfaces:srv/SetJointAngles.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__STRUCT_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Request __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointAngles_Request_
{
  using Type = SetJointAngles_Request_<ContainerAllocator>;

  explicit SetJointAngles_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j1 = 0.0;
      this->j2 = 0.0;
      this->j3 = 0.0;
      this->j4 = 0.0;
      this->j5 = 0.0;
      this->j6 = 0.0;
    }
  }

  explicit SetJointAngles_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->j1 = 0.0;
      this->j2 = 0.0;
      this->j3 = 0.0;
      this->j4 = 0.0;
      this->j5 = 0.0;
      this->j6 = 0.0;
    }
  }

  // field types and members
  using _j1_type =
    double;
  _j1_type j1;
  using _j2_type =
    double;
  _j2_type j2;
  using _j3_type =
    double;
  _j3_type j3;
  using _j4_type =
    double;
  _j4_type j4;
  using _j5_type =
    double;
  _j5_type j5;
  using _j6_type =
    double;
  _j6_type j6;

  // setters for named parameter idiom
  Type & set__j1(
    const double & _arg)
  {
    this->j1 = _arg;
    return *this;
  }
  Type & set__j2(
    const double & _arg)
  {
    this->j2 = _arg;
    return *this;
  }
  Type & set__j3(
    const double & _arg)
  {
    this->j3 = _arg;
    return *this;
  }
  Type & set__j4(
    const double & _arg)
  {
    this->j4 = _arg;
    return *this;
  }
  Type & set__j5(
    const double & _arg)
  {
    this->j5 = _arg;
    return *this;
  }
  Type & set__j6(
    const double & _arg)
  {
    this->j6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Request
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Request
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointAngles_Request_ & other) const
  {
    if (this->j1 != other.j1) {
      return false;
    }
    if (this->j2 != other.j2) {
      return false;
    }
    if (this->j3 != other.j3) {
      return false;
    }
    if (this->j4 != other.j4) {
      return false;
    }
    if (this->j5 != other.j5) {
      return false;
    }
    if (this->j6 != other.j6) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointAngles_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointAngles_Request_

// alias to use template instance with default allocator
using SetJointAngles_Request =
  my_cobot_interfaces::srv::SetJointAngles_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_cobot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Response __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointAngles_Response_
{
  using Type = SetJointAngles_Response_<ContainerAllocator>;

  explicit SetJointAngles_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetJointAngles_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Response
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__srv__SetJointAngles_Response
    std::shared_ptr<my_cobot_interfaces::srv::SetJointAngles_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointAngles_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointAngles_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointAngles_Response_

// alias to use template instance with default allocator
using SetJointAngles_Response =
  my_cobot_interfaces::srv::SetJointAngles_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_cobot_interfaces

namespace my_cobot_interfaces
{

namespace srv
{

struct SetJointAngles
{
  using Request = my_cobot_interfaces::srv::SetJointAngles_Request;
  using Response = my_cobot_interfaces::srv::SetJointAngles_Response;
};

}  // namespace srv

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_JOINT_ANGLES__STRUCT_HPP_
