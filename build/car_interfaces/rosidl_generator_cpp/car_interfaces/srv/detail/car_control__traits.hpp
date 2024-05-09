// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:srv/CarControl.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__TRAITS_HPP_
#define CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_interfaces/srv/detail/car_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CarControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: initial_position
  {
    out << "initial_position: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initial_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_position: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace car_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use car_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_interfaces::srv::CarControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_interfaces::srv::CarControl_Request & msg)
{
  return car_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_interfaces::srv::CarControl_Request>()
{
  return "car_interfaces::srv::CarControl_Request";
}

template<>
inline const char * name<car_interfaces::srv::CarControl_Request>()
{
  return "car_interfaces/srv/CarControl_Request";
}

template<>
struct has_fixed_size<car_interfaces::srv::CarControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::srv::CarControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::srv::CarControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace car_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CarControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace car_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use car_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_interfaces::srv::CarControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_interfaces::srv::CarControl_Response & msg)
{
  return car_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_interfaces::srv::CarControl_Response>()
{
  return "car_interfaces::srv::CarControl_Response";
}

template<>
inline const char * name<car_interfaces::srv::CarControl_Response>()
{
  return "car_interfaces/srv/CarControl_Response";
}

template<>
struct has_fixed_size<car_interfaces::srv::CarControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::srv::CarControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::srv::CarControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<car_interfaces::srv::CarControl>()
{
  return "car_interfaces::srv::CarControl";
}

template<>
inline const char * name<car_interfaces::srv::CarControl>()
{
  return "car_interfaces/srv/CarControl";
}

template<>
struct has_fixed_size<car_interfaces::srv::CarControl>
  : std::integral_constant<
    bool,
    has_fixed_size<car_interfaces::srv::CarControl_Request>::value &&
    has_fixed_size<car_interfaces::srv::CarControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<car_interfaces::srv::CarControl>
  : std::integral_constant<
    bool,
    has_bounded_size<car_interfaces::srv::CarControl_Request>::value &&
    has_bounded_size<car_interfaces::srv::CarControl_Response>::value
  >
{
};

template<>
struct is_service<car_interfaces::srv::CarControl>
  : std::true_type
{
};

template<>
struct is_service_request<car_interfaces::srv::CarControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<car_interfaces::srv::CarControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__TRAITS_HPP_
