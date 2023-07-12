// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_cobot_interfaces:msg/Block.idl
// generated code does not contain a copyright notice
#include "my_cobot_interfaces/msg/detail/block__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
my_cobot_interfaces__msg__Block__init(my_cobot_interfaces__msg__Block * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    my_cobot_interfaces__msg__Block__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // theta
  return true;
}

void
my_cobot_interfaces__msg__Block__fini(my_cobot_interfaces__msg__Block * msg)
{
  if (!msg) {
    return;
  }
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // x
  // y
  // z
  // theta
}

bool
my_cobot_interfaces__msg__Block__are_equal(const my_cobot_interfaces__msg__Block * lhs, const my_cobot_interfaces__msg__Block * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
my_cobot_interfaces__msg__Block__copy(
  const my_cobot_interfaces__msg__Block * input,
  my_cobot_interfaces__msg__Block * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // theta
  output->theta = input->theta;
  return true;
}

my_cobot_interfaces__msg__Block *
my_cobot_interfaces__msg__Block__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_cobot_interfaces__msg__Block * msg = (my_cobot_interfaces__msg__Block *)allocator.allocate(sizeof(my_cobot_interfaces__msg__Block), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_cobot_interfaces__msg__Block));
  bool success = my_cobot_interfaces__msg__Block__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_cobot_interfaces__msg__Block__destroy(my_cobot_interfaces__msg__Block * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_cobot_interfaces__msg__Block__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_cobot_interfaces__msg__Block__Sequence__init(my_cobot_interfaces__msg__Block__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_cobot_interfaces__msg__Block * data = NULL;

  if (size) {
    data = (my_cobot_interfaces__msg__Block *)allocator.zero_allocate(size, sizeof(my_cobot_interfaces__msg__Block), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_cobot_interfaces__msg__Block__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_cobot_interfaces__msg__Block__fini(&data[i - 1]);
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
my_cobot_interfaces__msg__Block__Sequence__fini(my_cobot_interfaces__msg__Block__Sequence * array)
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
      my_cobot_interfaces__msg__Block__fini(&array->data[i]);
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

my_cobot_interfaces__msg__Block__Sequence *
my_cobot_interfaces__msg__Block__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_cobot_interfaces__msg__Block__Sequence * array = (my_cobot_interfaces__msg__Block__Sequence *)allocator.allocate(sizeof(my_cobot_interfaces__msg__Block__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_cobot_interfaces__msg__Block__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_cobot_interfaces__msg__Block__Sequence__destroy(my_cobot_interfaces__msg__Block__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_cobot_interfaces__msg__Block__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_cobot_interfaces__msg__Block__Sequence__are_equal(const my_cobot_interfaces__msg__Block__Sequence * lhs, const my_cobot_interfaces__msg__Block__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_cobot_interfaces__msg__Block__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_cobot_interfaces__msg__Block__Sequence__copy(
  const my_cobot_interfaces__msg__Block__Sequence * input,
  my_cobot_interfaces__msg__Block__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_cobot_interfaces__msg__Block);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_cobot_interfaces__msg__Block * data =
      (my_cobot_interfaces__msg__Block *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_cobot_interfaces__msg__Block__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_cobot_interfaces__msg__Block__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_cobot_interfaces__msg__Block__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
