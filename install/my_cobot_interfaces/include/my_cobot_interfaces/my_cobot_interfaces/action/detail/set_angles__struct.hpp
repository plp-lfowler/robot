// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_cobot_interfaces:action/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MY_COBOT_INTERFACES__ACTION__DETAIL__SET_ANGLES__STRUCT_HPP_
#define MY_COBOT_INTERFACES__ACTION__DETAIL__SET_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_Goal __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_Goal_
{
  using Type = SetAngles_Goal_<ContainerAllocator>;

  explicit SetAngles_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit SetAngles_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_Goal
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_Goal
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_Goal_ & other) const
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
  bool operator!=(const SetAngles_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_Goal_

// alias to use template instance with default allocator
using SetAngles_Goal =
  my_cobot_interfaces::action::SetAngles_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_Result __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_Result_
{
  using Type = SetAngles_Result_<ContainerAllocator>;

  explicit SetAngles_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
    }
  }

  explicit SetAngles_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
    }
  }

  // field types and members
  using _timeout_type =
    bool;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__timeout(
    const bool & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_Result
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_Result
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_Result_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_Result_

// alias to use template instance with default allocator
using SetAngles_Result =
  my_cobot_interfaces::action::SetAngles_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_Feedback __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_Feedback_
{
  using Type = SetAngles_Feedback_<ContainerAllocator>;

  explicit SetAngles_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetAngles_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_Feedback
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_Feedback
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_Feedback_

// alias to use template instance with default allocator
using SetAngles_Feedback =
  my_cobot_interfaces::action::SetAngles_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Request __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_SendGoal_Request_
{
  using Type = SetAngles_SendGoal_Request_<ContainerAllocator>;

  explicit SetAngles_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SetAngles_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_cobot_interfaces::action::SetAngles_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Request
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Request
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_SendGoal_Request_

// alias to use template instance with default allocator
using SetAngles_SendGoal_Request =
  my_cobot_interfaces::action::SetAngles_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Response __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_SendGoal_Response_
{
  using Type = SetAngles_SendGoal_Response_<ContainerAllocator>;

  explicit SetAngles_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SetAngles_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Response
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_SendGoal_Response
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_SendGoal_Response_

// alias to use template instance with default allocator
using SetAngles_SendGoal_Response =
  my_cobot_interfaces::action::SetAngles_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces

namespace my_cobot_interfaces
{

namespace action
{

struct SetAngles_SendGoal
{
  using Request = my_cobot_interfaces::action::SetAngles_SendGoal_Request;
  using Response = my_cobot_interfaces::action::SetAngles_SendGoal_Response;
};

}  // namespace action

}  // namespace my_cobot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Request __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_GetResult_Request_
{
  using Type = SetAngles_GetResult_Request_<ContainerAllocator>;

  explicit SetAngles_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SetAngles_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Request
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Request
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_GetResult_Request_

// alias to use template instance with default allocator
using SetAngles_GetResult_Request =
  my_cobot_interfaces::action::SetAngles_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Response __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_GetResult_Response_
{
  using Type = SetAngles_GetResult_Response_<ContainerAllocator>;

  explicit SetAngles_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SetAngles_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_cobot_interfaces::action::SetAngles_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Response
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_GetResult_Response
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_GetResult_Response_

// alias to use template instance with default allocator
using SetAngles_GetResult_Response =
  my_cobot_interfaces::action::SetAngles_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces

namespace my_cobot_interfaces
{

namespace action
{

struct SetAngles_GetResult
{
  using Request = my_cobot_interfaces::action::SetAngles_GetResult_Request;
  using Response = my_cobot_interfaces::action::SetAngles_GetResult_Response;
};

}  // namespace action

}  // namespace my_cobot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_cobot_interfaces/action/detail/set_angles__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_cobot_interfaces__action__SetAngles_FeedbackMessage __declspec(deprecated)
#endif

namespace my_cobot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SetAngles_FeedbackMessage_
{
  using Type = SetAngles_FeedbackMessage_<ContainerAllocator>;

  explicit SetAngles_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SetAngles_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_cobot_interfaces::action::SetAngles_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_FeedbackMessage
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_cobot_interfaces__action__SetAngles_FeedbackMessage
    std::shared_ptr<my_cobot_interfaces::action::SetAngles_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAngles_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAngles_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAngles_FeedbackMessage_

// alias to use template instance with default allocator
using SetAngles_FeedbackMessage =
  my_cobot_interfaces::action::SetAngles_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_cobot_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_cobot_interfaces
{

namespace action
{

struct SetAngles
{
  /// The goal message defined in the action definition.
  using Goal = my_cobot_interfaces::action::SetAngles_Goal;
  /// The result message defined in the action definition.
  using Result = my_cobot_interfaces::action::SetAngles_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_cobot_interfaces::action::SetAngles_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_cobot_interfaces::action::SetAngles_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_cobot_interfaces::action::SetAngles_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_cobot_interfaces::action::SetAngles_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SetAngles SetAngles;

}  // namespace action

}  // namespace my_cobot_interfaces

#endif  // MY_COBOT_INTERFACES__ACTION__DETAIL__SET_ANGLES__STRUCT_HPP_
