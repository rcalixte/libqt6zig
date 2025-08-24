#pragma once
#ifndef SRCC_LIBQCONTIGUOUSCACHE_H
#define SRCC_LIBQCONTIGUOUSCACHE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QContiguousCacheData QContiguousCacheData;
#endif

ptrdiff_t QContiguousCacheData_Alloc(const QContiguousCacheData* self);
void QContiguousCacheData_SetAlloc(QContiguousCacheData* self, ptrdiff_t alloc);
ptrdiff_t QContiguousCacheData_Count(const QContiguousCacheData* self);
void QContiguousCacheData_SetCount(QContiguousCacheData* self, ptrdiff_t count);
ptrdiff_t QContiguousCacheData_Start(const QContiguousCacheData* self);
void QContiguousCacheData_SetStart(QContiguousCacheData* self, ptrdiff_t start);
ptrdiff_t QContiguousCacheData_Offset(const QContiguousCacheData* self);
void QContiguousCacheData_SetOffset(QContiguousCacheData* self, ptrdiff_t offset);
QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment);
void QContiguousCacheData_FreeData(QContiguousCacheData* data);
void QContiguousCacheData_Delete(QContiguousCacheData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
