// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interfaces:msg/StartPosition.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__START_POSITION__STRUCT_HPP_
#define CAR_INTERFACES__MSG__DETAIL__START_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_interfaces__msg__StartPosition __attribute__((deprecated))
#else
# define DEPRECATED__car_interfaces__msg__StartPosition __declspec(deprecated)
#endif

namespace car_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartPosition_
{
  using Type = StartPosition_<ContainerAllocator>;

  explicit StartPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initial_position = false;
    }
  }

  explicit StartPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initial_position = false;
    }
  }

  // field types and members
  using _initial_position_type =
    bool;
  _initial_position_type initial_position;

  // setters for named parameter idiom
  Type & set__initial_position(
    const bool & _arg)
  {
    this->initial_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interfaces::msg::StartPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interfaces::msg::StartPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::StartPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interfaces::msg::StartPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interfaces__msg__StartPosition
    std::shared_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interfaces__msg__StartPosition
    std::shared_ptr<car_interfaces::msg::StartPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartPosition_ & other) const
  {
    if (this->initial_position != other.initial_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartPosition_

// alias to use template instance with default allocator
using StartPosition =
  car_interfaces::msg::StartPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__START_POSITION__STRUCT_HPP_
