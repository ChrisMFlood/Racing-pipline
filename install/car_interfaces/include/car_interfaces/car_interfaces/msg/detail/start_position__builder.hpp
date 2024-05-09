// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/StartPosition.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__START_POSITION__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__START_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_interfaces/msg/detail/start_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_StartPosition_initial_position
{
public:
  Init_StartPosition_initial_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::car_interfaces::msg::StartPosition initial_position(::car_interfaces::msg::StartPosition::_initial_position_type arg)
  {
    msg_.initial_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::StartPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::StartPosition>()
{
  return car_interfaces::msg::builder::Init_StartPosition_initial_position();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__START_POSITION__BUILDER_HPP_
