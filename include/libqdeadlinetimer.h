#pragma once
#ifndef SRCC_LIBQDEADLINETIMER_H
#define SRCC_LIBQDEADLINETIMER_H

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
typedef struct QDeadlineTimer QDeadlineTimer;
#endif

#ifdef __cplusplus
typedef QDeadlineTimer::ForeverConstant ForeverConstant; // C++ enum
#else
typedef int ForeverConstant; // C ABI enum
#endif

QDeadlineTimer* QDeadlineTimer_new(QDeadlineTimer* other);
QDeadlineTimer* QDeadlineTimer_new2(QDeadlineTimer* other);
QDeadlineTimer* QDeadlineTimer_new3();
QDeadlineTimer* QDeadlineTimer_new4(int param1);
QDeadlineTimer* QDeadlineTimer_new5(long long msecs);
QDeadlineTimer* QDeadlineTimer_new6(QDeadlineTimer* param1);
QDeadlineTimer* QDeadlineTimer_new7(int type_);
QDeadlineTimer* QDeadlineTimer_new8(int param1, int type_);
QDeadlineTimer* QDeadlineTimer_new9(long long msecs, int typeVal);
void QDeadlineTimer_CopyAssign(QDeadlineTimer* self, QDeadlineTimer* other);
void QDeadlineTimer_MoveAssign(QDeadlineTimer* self, QDeadlineTimer* other);
void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other);
bool QDeadlineTimer_IsForever(const QDeadlineTimer* self);
bool QDeadlineTimer_HasExpired(const QDeadlineTimer* self);
int QDeadlineTimer_TimerType(const QDeadlineTimer* self);
void QDeadlineTimer_SetTimerType(QDeadlineTimer* self, int typeVal);
long long QDeadlineTimer_RemainingTime(const QDeadlineTimer* self);
long long QDeadlineTimer_RemainingTimeNSecs(const QDeadlineTimer* self);
void QDeadlineTimer_SetRemainingTime(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_SetPreciseRemainingTime(QDeadlineTimer* self, long long secs);
long long QDeadlineTimer_Deadline(const QDeadlineTimer* self);
long long QDeadlineTimer_DeadlineNSecs(const QDeadlineTimer* self);
void QDeadlineTimer_SetDeadline(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_SetPreciseDeadline(QDeadlineTimer* self, long long secs);
QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, long long nsecs);
QDeadlineTimer* QDeadlineTimer_Current();
QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, long long msecs);
QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1);
void QDeadlineTimer_SetRemainingTime2(QDeadlineTimer* self, long long msecs, int typeVal);
void QDeadlineTimer_SetPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_SetPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal);
void QDeadlineTimer_SetDeadline2(QDeadlineTimer* self, long long msecs, int timerType);
void QDeadlineTimer_SetPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_SetPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal);
QDeadlineTimer* QDeadlineTimer_Current1(int timerType);
void QDeadlineTimer_Delete(QDeadlineTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
