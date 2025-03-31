#pragma once
#ifndef SRCC_LIBQMUTEX_H
#define SRCC_LIBQMUTEX_H

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
typedef struct QBasicMutex QBasicMutex;
typedef struct QMutex QMutex;
typedef struct QRecursiveMutex QRecursiveMutex;
#endif

QBasicMutex* QBasicMutex_new();
void QBasicMutex_Lock(QBasicMutex* self);
void QBasicMutex_Unlock(QBasicMutex* self);
bool QBasicMutex_TryLock(QBasicMutex* self);
bool QBasicMutex_TryLock2(QBasicMutex* self);
void QBasicMutex_Delete(QBasicMutex* self);

QMutex* QMutex_new();
bool QMutex_TryLock(QMutex* self);
bool QMutex_TryLockWithTimeout(QMutex* self, int timeout);
void QMutex_Delete(QMutex* self);

QRecursiveMutex* QRecursiveMutex_new();
void QRecursiveMutex_Lock(QRecursiveMutex* self);
bool QRecursiveMutex_TryLock(QRecursiveMutex* self);
void QRecursiveMutex_Unlock(QRecursiveMutex* self);
bool QRecursiveMutex_TryLock2(QRecursiveMutex* self);
bool QRecursiveMutex_TryLock1(QRecursiveMutex* self, int timeout);
void QRecursiveMutex_Delete(QRecursiveMutex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
