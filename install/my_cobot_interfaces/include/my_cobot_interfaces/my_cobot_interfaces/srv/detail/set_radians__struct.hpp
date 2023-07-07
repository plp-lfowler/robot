// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_cobot_interfaces:srv/SetRadians.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__SRV__DETAIL__SET_RADIANS__STRUCT_HPP_
#define MY_COBOT_INTERFACES__SRV__DETAIL__SET_RADIANS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__srv__SetRadians_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__srv__SetRadians_Request __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRadians_Request_
{
  using Type = SetRadians_Request_<ContainerAllocator>;

  explicit SetRadians_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetRadians_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _angles_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__angles(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__srv__SetRadians_Request
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__srv__SetRadians_Request
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRadians_Request_ & other) const
  {
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRadians_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRadians_Request_

// alias to use template instance with default allocator
using SetRadians_Request =
  my_cobot_interfaces::srv::SetRadians_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_cobot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__srv__SetRadians_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__srv__SetRadians_Response __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRadians_Response_
{
  using Type = SetRadians_Response_<ContainerAllocator>;

  explicit SetRadians_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetRadians_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__srv__SetRadians_Response
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__srv__SetRadians_Response
    std::shared_ptr<my_cobot_interfaces::srv::SetRadians_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRadians_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRadians_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRadians_Response_

// alias to use template instance with default allocator
using SetRadians_Response =
  my_cobot_interfaces::srv::SetRadians_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_cobot_interfaces

namespace my_cobot_interfaces
{

namespace srv
{

struct SetRadians
{
  using Request = my_cobot_interfaces::srv::SetRadians_Request;
  using Response = my_cobot_interfaces::srv::SetRadians_Response;
};

}  // namespace srv

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__SRV__DETAIL__SET_RADIANS__STRUCT_HPP_
