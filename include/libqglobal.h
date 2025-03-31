#pragma once
#ifndef SRCC_LIBQGLOBAL_H
#define SRCC_LIBQGLOBAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

#ifdef __cplusplus
typedef QtPrivate::Deprecated_t Deprecated_t; // C++ enum
#else
typedef int Deprecated_t; // C ABI enum
#endif

#ifdef __cplusplus
} /* extern C */
#endif

#endif
