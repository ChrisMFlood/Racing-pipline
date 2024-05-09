// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interfaces:msg/StartPosition.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__START_POSITION__STRUCT_H_
#define CAR_INTERFACES__MSG__DETAIL__START_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/StartPosition in the package car_interfaces.
typedef struct car_interfaces__msg__StartPosition
{
  bool initial_position;
} car_interfaces__msg__StartPosition;

// Struct for a sequence of car_interfaces__msg__StartPosition.
typedef struct car_interfaces__msg__StartPosition__Sequence
{
  car_interfaces__msg__StartPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interfaces__msg__StartPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__START_POSITION__STRUCT_H_
