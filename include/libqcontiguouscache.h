#pragma once
#ifndef SRCC_LIBQCONTIGUOUSCACHE_H
#define SRCC_LIBQCONTIGUOUSCACHE_H

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
typedef struct QContiguousCacheData QContiguousCacheData;
#endif

QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment);
void QContiguousCacheData_FreeData(QContiguousCacheData* data);
void QContiguousCacheData_Delete(QContiguousCacheData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
