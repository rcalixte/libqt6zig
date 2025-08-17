#pragma once
#ifndef SRCC_LIBQREADWRITELOCK_H
#define SRCC_LIBQREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QReadLocker QReadLocker;
typedef struct QReadWriteLock QReadWriteLock;
typedef struct QWriteLocker QWriteLocker;
#endif

QReadWriteLock* QReadWriteLock_new();
QReadWriteLock* QReadWriteLock_new2(int recursionMode);
void QReadWriteLock_LockForRead(QReadWriteLock* self);
bool QReadWriteLock_TryLockForRead(QReadWriteLock* self, int timeout);
bool QReadWriteLock_TryLockForRead2(QReadWriteLock* self);
void QReadWriteLock_LockForWrite(QReadWriteLock* self);
bool QReadWriteLock_TryLockForWrite(QReadWriteLock* self, int timeout);
bool QReadWriteLock_TryLockForWrite2(QReadWriteLock* self);
void QReadWriteLock_Unlock(QReadWriteLock* self);
bool QReadWriteLock_TryLockForRead1(QReadWriteLock* self, QDeadlineTimer* timeout);
bool QReadWriteLock_TryLockForWrite1(QReadWriteLock* self, QDeadlineTimer* timeout);
void QReadWriteLock_Delete(QReadWriteLock* self);

QReadLocker* QReadLocker_new(QReadWriteLock* readWriteLock);
void QReadLocker_Unlock(QReadLocker* self);
void QReadLocker_Relock(QReadLocker* self);
QReadWriteLock* QReadLocker_ReadWriteLock(const QReadLocker* self);
void QReadLocker_Delete(QReadLocker* self);

QWriteLocker* QWriteLocker_new(QReadWriteLock* readWriteLock);
void QWriteLocker_Unlock(QWriteLocker* self);
void QWriteLocker_Relock(QWriteLocker* self);
QReadWriteLock* QWriteLocker_ReadWriteLock(const QWriteLocker* self);
void QWriteLocker_Delete(QWriteLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
