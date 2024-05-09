// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:srv/CarControl.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__BUILDER_HPP_
#define CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_interfaces/srv/detail/car_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_interfaces
{

namespace srv
{

namespace builder
{

class Init_CarControl_Request_initial_position
{
public:
  Init_CarControl_Request_initial_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::car_interfaces::srv::CarControl_Request initial_position(::car_interfaces::srv::CarControl_Request::_initial_position_type arg)
  {
    msg_.initial_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::srv::CarControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::srv::CarControl_Request>()
{
  return car_interfaces::srv::builder::Init_CarControl_Request_initial_position();
}

}  // namespace car_interfaces


namespace car_interfaces
{

namespace srv
{

namespace builder
{

class Init_CarControl_Response_message
{
public:
  explicit Init_CarControl_Response_message(::car_interfaces::srv::CarControl_Response & msg)
  : msg_(msg)
  {}
  ::car_interfaces::srv::CarControl_Response message(::car_interfaces::srv::CarControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::srv::CarControl_Response msg_;
};

class Init_CarControl_Response_success
{
public:
  Init_CarControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarControl_Response_message success(::car_interfaces::srv::CarControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CarControl_Response_message(msg_);
  }

private:
  ::car_interfaces::srv::CarControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::srv::CarControl_Response>()
{
  return car_interfaces::srv::builder::Init_CarControl_Response_success();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__BUILDER_HPP_
