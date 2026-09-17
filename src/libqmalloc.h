#pragma once
#ifndef LIBQMALLOC_H
#define LIBQMALLOC_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

void* qmalloc_QMallocAligned(size_t size, size_t alignment);
void* qmalloc_QReallocAligned(void* ptr, size_t size, size_t oldsize, size_t alignment);
void qmalloc_QFreeAligned(void* ptr);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
