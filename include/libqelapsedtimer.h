#pragma once
#ifndef SRCC_LIBQELAPSEDTIMER_H
#define SRCC_LIBQELAPSEDTIMER_H

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
typedef struct QElapsedTimer QElapsedTimer;
#endif

#ifdef __cplusplus
typedef QElapsedTimer::ClockType ClockType; // C++ enum
#else
typedef int ClockType; // C ABI enum
#endif

QElapsedTimer* QElapsedTimer_new(QElapsedTimer* other);
QElapsedTimer* QElapsedTimer_new2(QElapsedTimer* other);
QElapsedTimer* QElapsedTimer_new3();
void QElapsedTimer_CopyAssign(QElapsedTimer* self, QElapsedTimer* other);
void QElapsedTimer_MoveAssign(QElapsedTimer* self, QElapsedTimer* other);
int QElapsedTimer_ClockType();
bool QElapsedTimer_IsMonotonic();
void QElapsedTimer_Start(QElapsedTimer* self);
long long QElapsedTimer_Restart(QElapsedTimer* self);
void QElapsedTimer_Invalidate(QElapsedTimer* self);
bool QElapsedTimer_IsValid(const QElapsedTimer* self);
long long QElapsedTimer_NsecsElapsed(const QElapsedTimer* self);
long long QElapsedTimer_Elapsed(const QElapsedTimer* self);
bool QElapsedTimer_HasExpired(const QElapsedTimer* self, long long timeout);
long long QElapsedTimer_MsecsSinceReference(const QElapsedTimer* self);
long long QElapsedTimer_MsecsTo(const QElapsedTimer* self, QElapsedTimer* other);
long long QElapsedTimer_SecsTo(const QElapsedTimer* self, QElapsedTimer* other);
void QElapsedTimer_Delete(QElapsedTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
