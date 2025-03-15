// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dhanush_srv:srv/SpeedAngle.idl
// generated code does not contain a copyright notice
#include "dhanush_srv/srv/detail/speed_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dhanush_srv__srv__SpeedAngle_Request__init(dhanush_srv__srv__SpeedAngle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // angle
  return true;
}

void
dhanush_srv__srv__SpeedAngle_Request__fini(dhanush_srv__srv__SpeedAngle_Request * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // angle
}

bool
dhanush_srv__srv__SpeedAngle_Request__are_equal(const dhanush_srv__srv__SpeedAngle_Request * lhs, const dhanush_srv__srv__SpeedAngle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
dhanush_srv__srv__SpeedAngle_Request__copy(
  const dhanush_srv__srv__SpeedAngle_Request * input,
  dhanush_srv__srv__SpeedAngle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // angle
  output->angle = input->angle;
  return true;
}

dhanush_srv__srv__SpeedAngle_Request *
dhanush_srv__srv__SpeedAngle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dhanush_srv__srv__SpeedAngle_Request * msg = (dhanush_srv__srv__SpeedAngle_Request *)allocator.allocate(sizeof(dhanush_srv__srv__SpeedAngle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dhanush_srv__srv__SpeedAngle_Request));
  bool success = dhanush_srv__srv__SpeedAngle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dhanush_srv__srv__SpeedAngle_Request__destroy(dhanush_srv__srv__SpeedAngle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dhanush_srv__srv__SpeedAngle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dhanush_srv__srv__SpeedAngle_Request__Sequence__init(dhanush_srv__srv__SpeedAngle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dhanush_srv__srv__SpeedAngle_Request * data = NULL;

  if (size) {
    data = (dhanush_srv__srv__SpeedAngle_Request *)allocator.zero_allocate(size, sizeof(dhanush_srv__srv__SpeedAngle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dhanush_srv__srv__SpeedAngle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dhanush_srv__srv__SpeedAngle_Request__fini(&data[i - 1]);
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
dhanush_srv__srv__SpeedAngle_Request__Sequence__fini(dhanush_srv__srv__SpeedAngle_Request__Sequence * array)
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
      dhanush_srv__srv__SpeedAngle_Request__fini(&array->data[i]);
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

dhanush_srv__srv__SpeedAngle_Request__Sequence *
dhanush_srv__srv__SpeedAngle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dhanush_srv__srv__SpeedAngle_Request__Sequence * array = (dhanush_srv__srv__SpeedAngle_Request__Sequence *)allocator.allocate(sizeof(dhanush_srv__srv__SpeedAngle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dhanush_srv__srv__SpeedAngle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dhanush_srv__srv__SpeedAngle_Request__Sequence__destroy(dhanush_srv__srv__SpeedAngle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dhanush_srv__srv__SpeedAngle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dhanush_srv__srv__SpeedAngle_Request__Sequence__are_equal(const dhanush_srv__srv__SpeedAngle_Request__Sequence * lhs, const dhanush_srv__srv__SpeedAngle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dhanush_srv__srv__SpeedAngle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dhanush_srv__srv__SpeedAngle_Request__Sequence__copy(
  const dhanush_srv__srv__SpeedAngle_Request__Sequence * input,
  dhanush_srv__srv__SpeedAngle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dhanush_srv__srv__SpeedAngle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dhanush_srv__srv__SpeedAngle_Request * data =
      (dhanush_srv__srv__SpeedAngle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dhanush_srv__srv__SpeedAngle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dhanush_srv__srv__SpeedAngle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dhanush_srv__srv__SpeedAngle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dhanush_srv__srv__SpeedAngle_Response__init(dhanush_srv__srv__SpeedAngle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
dhanush_srv__srv__SpeedAngle_Response__fini(dhanush_srv__srv__SpeedAngle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
dhanush_srv__srv__SpeedAngle_Response__are_equal(const dhanush_srv__srv__SpeedAngle_Response * lhs, const dhanush_srv__srv__SpeedAngle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
dhanush_srv__srv__SpeedAngle_Response__copy(
  const dhanush_srv__srv__SpeedAngle_Response * input,
  dhanush_srv__srv__SpeedAngle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

dhanush_srv__srv__SpeedAngle_Response *
dhanush_srv__srv__SpeedAngle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dhanush_srv__srv__SpeedAngle_Response * msg = (dhanush_srv__srv__SpeedAngle_Response *)allocator.allocate(sizeof(dhanush_srv__srv__SpeedAngle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dhanush_srv__srv__SpeedAngle_Response));
  bool success = dhanush_srv__srv__SpeedAngle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dhanush_srv__srv__SpeedAngle_Response__destroy(dhanush_srv__srv__SpeedAngle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dhanush_srv__srv__SpeedAngle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dhanush_srv__srv__SpeedAngle_Response__Sequence__init(dhanush_srv__srv__SpeedAngle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dhanush_srv__srv__SpeedAngle_Response * data = NULL;

  if (size) {
    data = (dhanush_srv__srv__SpeedAngle_Response *)allocator.zero_allocate(size, sizeof(dhanush_srv__srv__SpeedAngle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dhanush_srv__srv__SpeedAngle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dhanush_srv__srv__SpeedAngle_Response__fini(&data[i - 1]);
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
dhanush_srv__srv__SpeedAngle_Response__Sequence__fini(dhanush_srv__srv__SpeedAngle_Response__Sequence * array)
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
      dhanush_srv__srv__SpeedAngle_Response__fini(&array->data[i]);
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

dhanush_srv__srv__SpeedAngle_Response__Sequence *
dhanush_srv__srv__SpeedAngle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dhanush_srv__srv__SpeedAngle_Response__Sequence * array = (dhanush_srv__srv__SpeedAngle_Response__Sequence *)allocator.allocate(sizeof(dhanush_srv__srv__SpeedAngle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dhanush_srv__srv__SpeedAngle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dhanush_srv__srv__SpeedAngle_Response__Sequence__destroy(dhanush_srv__srv__SpeedAngle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dhanush_srv__srv__SpeedAngle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dhanush_srv__srv__SpeedAngle_Response__Sequence__are_equal(const dhanush_srv__srv__SpeedAngle_Response__Sequence * lhs, const dhanush_srv__srv__SpeedAngle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dhanush_srv__srv__SpeedAngle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dhanush_srv__srv__SpeedAngle_Response__Sequence__copy(
  const dhanush_srv__srv__SpeedAngle_Response__Sequence * input,
  dhanush_srv__srv__SpeedAngle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dhanush_srv__srv__SpeedAngle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dhanush_srv__srv__SpeedAngle_Response * data =
      (dhanush_srv__srv__SpeedAngle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dhanush_srv__srv__SpeedAngle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dhanush_srv__srv__SpeedAngle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dhanush_srv__srv__SpeedAngle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
