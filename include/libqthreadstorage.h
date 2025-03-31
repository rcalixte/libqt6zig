#pragma once
#ifndef SRCC_LIBQTHREADSTORAGE_H
#define SRCC_LIBQTHREADSTORAGE_H

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
typedef struct QThreadStorageData QThreadStorageData;
#endif

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1);
void** QThreadStorageData_Get(const QThreadStorageData* self);
void** QThreadStorageData_Set(QThreadStorageData* self, void* p);
void QThreadStorageData_Finish(void** param1);
void QThreadStorageData_Delete(QThreadStorageData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
