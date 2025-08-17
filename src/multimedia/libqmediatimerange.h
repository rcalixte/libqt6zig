#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIATIMERANGE_H
#define SRC_MULTIMEDIAC_LIBQMEDIATIMERANGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMediaTimeRange__Interval)
typedef QMediaTimeRange::Interval QMediaTimeRange__Interval;
#endif
#else
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMediaTimeRange__Interval QMediaTimeRange__Interval;
#endif

QMediaTimeRange* QMediaTimeRange_new();
QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end);
QMediaTimeRange* QMediaTimeRange_new3(const QMediaTimeRange__Interval* param1);
QMediaTimeRange* QMediaTimeRange_new4(const QMediaTimeRange* range);
void QMediaTimeRange_OperatorAssign(QMediaTimeRange* self, const QMediaTimeRange* param1);
void QMediaTimeRange_Swap(QMediaTimeRange* self, QMediaTimeRange* other);
void QMediaTimeRange_Detach(QMediaTimeRange* self);
void QMediaTimeRange_OperatorAssign2(QMediaTimeRange* self, const QMediaTimeRange__Interval* param1);
long long QMediaTimeRange_EarliestTime(const QMediaTimeRange* self);
long long QMediaTimeRange_LatestTime(const QMediaTimeRange* self);
libqt_list /* of QMediaTimeRange__Interval* */ QMediaTimeRange_Intervals(const QMediaTimeRange* self);
bool QMediaTimeRange_IsEmpty(const QMediaTimeRange* self);
bool QMediaTimeRange_IsContinuous(const QMediaTimeRange* self);
bool QMediaTimeRange_Contains(const QMediaTimeRange* self, long long time);
void QMediaTimeRange_AddInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_AddInterval2(QMediaTimeRange* self, const QMediaTimeRange__Interval* interval);
void QMediaTimeRange_AddTimeRange(QMediaTimeRange* self, const QMediaTimeRange* param1);
void QMediaTimeRange_RemoveInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_RemoveInterval2(QMediaTimeRange* self, const QMediaTimeRange__Interval* interval);
void QMediaTimeRange_RemoveTimeRange(QMediaTimeRange* self, const QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorPlusAssign(QMediaTimeRange* self, const QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorPlusAssign2(QMediaTimeRange* self, const QMediaTimeRange__Interval* param1);
QMediaTimeRange* QMediaTimeRange_OperatorMinusAssign(QMediaTimeRange* self, const QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorMinusAssign2(QMediaTimeRange* self, const QMediaTimeRange__Interval* param1);
void QMediaTimeRange_Clear(QMediaTimeRange* self);
void QMediaTimeRange_Delete(QMediaTimeRange* self);

QMediaTimeRange__Interval* QMediaTimeRange__Interval_new(const QMediaTimeRange__Interval* other);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new2(QMediaTimeRange__Interval* other);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new3();
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new4(long long start, long long end);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new5(const QMediaTimeRange__Interval* param1);
void QMediaTimeRange__Interval_CopyAssign(QMediaTimeRange__Interval* self, QMediaTimeRange__Interval* other);
void QMediaTimeRange__Interval_MoveAssign(QMediaTimeRange__Interval* self, QMediaTimeRange__Interval* other);
long long QMediaTimeRange__Interval_Start(const QMediaTimeRange__Interval* self);
long long QMediaTimeRange__Interval_End(const QMediaTimeRange__Interval* self);
bool QMediaTimeRange__Interval_Contains(const QMediaTimeRange__Interval* self, long long time);
bool QMediaTimeRange__Interval_IsNormal(const QMediaTimeRange__Interval* self);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_Normalized(const QMediaTimeRange__Interval* self);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_Translated(const QMediaTimeRange__Interval* self, long long offset);
void QMediaTimeRange__Interval_Delete(QMediaTimeRange__Interval* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
