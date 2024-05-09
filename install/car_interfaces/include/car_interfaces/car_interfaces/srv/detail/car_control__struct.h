// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:srv/CarControl.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__STRUCT_H_
#define CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CarControl in the package car_interfaces.
typedef struct car_interfaces__srv__CarControl_Request
{
  bool initial_position;
} car_interfaces__srv__CarControl_Request;

// Struct for a sequence of car_interfaces__srv__CarControl_Request.
typedef struct car_interfaces__srv__CarControl_Request__Sequence
{
  car_interfaces__srv__CarControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__srv__CarControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CarControl in the package car_interfaces.
typedef struct car_interfaces__srv__CarControl_Response
{
  bool success;
  rosidl_runtime_c__String message;
} car_interfaces__srv__CarControl_Response;

// Struct for a sequence of car_interfaces__srv__CarControl_Response.
typedef struct car_interfaces__srv__CarControl_Response__Sequence
{
  car_interfaces__srv__CarControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__srv__CarControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__SRV__DETAIL__CAR_CONTROL__STRUCT_H_
