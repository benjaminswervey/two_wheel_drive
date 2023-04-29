// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Encoder in the package interfaces.
typedef struct interfaces__msg__Encoder
{
  int64_t first;
  int64_t second;
} interfaces__msg__Encoder;

// Struct for a sequence of interfaces__msg__Encoder.
typedef struct interfaces__msg__Encoder__Sequence
{
  interfaces__msg__Encoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Encoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_
