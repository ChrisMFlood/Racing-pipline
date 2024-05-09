// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interfaces:srv/CarControl.idl
// generated code does not contain a copyright notice
#include "car_interfaces/srv/detail/car_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
car_interfaces__srv__CarControl_Request__init(car_interfaces__srv__CarControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // initial_position
  return true;
}

void
car_interfaces__srv__CarControl_Request__fini(car_interfaces__srv__CarControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // initial_position
}

bool
car_interfaces__srv__CarControl_Request__are_equal(const car_interfaces__srv__CarControl_Request * lhs, const car_interfaces__srv__CarControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // initial_position
  if (lhs->initial_position != rhs->initial_position) {
    return false;
  }
  return true;
}

bool
car_interfaces__srv__CarControl_Request__copy(
  const car_interfaces__srv__CarControl_Request * input,
  car_interfaces__srv__CarControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // initial_position
  output->initial_position = input->initial_position;
  return true;
}

car_interfaces__srv__CarControl_Request *
car_interfaces__srv__CarControl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interfaces__srv__CarControl_Request * msg = (car_interfaces__srv__CarControl_Request *)allocator.allocate(sizeof(car_interfaces__srv__CarControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__srv__CarControl_Request));
  bool success = car_interfaces__srv__CarControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_interfaces__srv__CarControl_Request__destroy(car_interfaces__srv__CarControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_interfaces__srv__CarControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_interfaces__srv__CarControl_Request__Sequence__init(car_interfaces__srv__CarControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interfaces__srv__CarControl_Request * data = NULL;

  if (size) {
    data = (car_interfaces__srv__CarControl_Request *)allocator.zero_allocate(size, sizeof(car_interfaces__srv__CarControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__srv__CarControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__srv__CarControl_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
car_interfaces__srv__CarControl_Request__Sequence__fini(car_interfaces__srv__CarControl_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__srv__CarControl_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

car_interfaces__srv__CarControl_Request__Sequence *
car_interfaces__srv__CarControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interfaces__srv__CarControl_Request__Sequence * array = (car_interfaces__srv__CarControl_Request__Sequence *)allocator.allocate(sizeof(car_interfaces__srv__CarControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__srv__CarControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_interfaces__srv__CarControl_Request__Sequence__destroy(car_interfaces__srv__CarControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_interfaces__srv__CarControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_interfaces__srv__CarControl_Request__Sequence__are_equal(const car_interfaces__srv__CarControl_Request__Sequence * lhs, const car_interfaces__srv__CarControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__srv__CarControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__srv__CarControl_Request__Sequence__copy(
  const car_interfaces__srv__CarControl_Request__Sequence * input,
  car_interfaces__srv__CarControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__srv__CarControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_interfaces__srv__CarControl_Request * data =
      (car_interfaces__srv__CarControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__srv__CarControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_interfaces__srv__CarControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_interfaces__srv__CarControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
car_interfaces__srv__CarControl_Response__init(car_interfaces__srv__CarControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    car_interfaces__srv__CarControl_Response__fini(msg);
    return false;
  }
  return true;
}

void
car_interfaces__srv__CarControl_Response__fini(car_interfaces__srv__CarControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
car_interfaces__srv__CarControl_Response__are_equal(const car_interfaces__srv__CarControl_Response * lhs, const car_interfaces__srv__CarControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
car_interfaces__srv__CarControl_Response__copy(
  const car_interfaces__srv__CarControl_Response * input,
  car_interfaces__srv__CarControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

car_interfaces__srv__CarControl_Response *
car_interfaces__srv__CarControl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interfaces__srv__CarControl_Response * msg = (car_interfaces__srv__CarControl_Response *)allocator.allocate(sizeof(car_interfaces__srv__CarControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interfaces__srv__CarControl_Response));
  bool success = car_interfaces__srv__CarControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_interfaces__srv__CarControl_Response__destroy(car_interfaces__srv__CarControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_interfaces__srv__CarControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_interfaces__srv__CarControl_Response__Sequence__init(car_interfaces__srv__CarControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interfaces__srv__CarControl_Response * data = NULL;

  if (size) {
    data = (car_interfaces__srv__CarControl_Response *)allocator.zero_allocate(size, sizeof(car_interfaces__srv__CarControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interfaces__srv__CarControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interfaces__srv__CarControl_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
car_interfaces__srv__CarControl_Response__Sequence__fini(car_interfaces__srv__CarControl_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interfaces__srv__CarControl_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

car_interfaces__srv__CarControl_Response__Sequence *
car_interfaces__srv__CarControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interfaces__srv__CarControl_Response__Sequence * array = (car_interfaces__srv__CarControl_Response__Sequence *)allocator.allocate(sizeof(car_interfaces__srv__CarControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_interfaces__srv__CarControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_interfaces__srv__CarControl_Response__Sequence__destroy(car_interfaces__srv__CarControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_interfaces__srv__CarControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_interfaces__srv__CarControl_Response__Sequence__are_equal(const car_interfaces__srv__CarControl_Response__Sequence * lhs, const car_interfaces__srv__CarControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interfaces__srv__CarControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interfaces__srv__CarControl_Response__Sequence__copy(
  const car_interfaces__srv__CarControl_Response__Sequence * input,
  car_interfaces__srv__CarControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interfaces__srv__CarControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_interfaces__srv__CarControl_Response * data =
      (car_interfaces__srv__CarControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interfaces__srv__CarControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_interfaces__srv__CarControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_interfaces__srv__CarControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
