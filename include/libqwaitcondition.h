#pragma once
#ifndef SRCC_LIBQWAITCONDITION_H
#define SRCC_LIBQWAITCONDITION_H

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
typedef struct QMutex QMutex;
typedef struct QReadWriteLock QReadWriteLock;
typedef struct QWaitCondition QWaitCondition;
#endif

QWaitCondition* QWaitCondition_new();
bool QWaitCondition_Wait(QWaitCondition* self, QMutex* lockedMutex);
bool QWaitCondition_Wait2(QWaitCondition* self, QMutex* lockedMutex, unsigned long time);
bool QWaitCondition_Wait3(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock);
bool QWaitCondition_Wait4(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, unsigned long time);
void QWaitCondition_WakeOne(QWaitCondition* self);
void QWaitCondition_WakeAll(QWaitCondition* self);
void QWaitCondition_NotifyOne(QWaitCondition* self);
void QWaitCondition_NotifyAll(QWaitCondition* self);
bool QWaitCondition_Wait22(QWaitCondition* self, QMutex* lockedMutex, QDeadlineTimer* deadline);
bool QWaitCondition_Wait23(QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, QDeadlineTimer* deadline);
void QWaitCondition_Delete(QWaitCondition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
