#pragma once
#ifndef SRCC_LIBQFUTUREWATCHER_H
#define SRCC_LIBQFUTUREWATCHER_H

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
typedef struct QEvent QEvent;
typedef struct QFutureWatcherBase QFutureWatcherBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QFutureWatcherBase_MetaObject(const QFutureWatcherBase* self);
void* QFutureWatcherBase_Metacast(QFutureWatcherBase* self, const char* param1);
int QFutureWatcherBase_Metacall(QFutureWatcherBase* self, int param1, int param2, void** param3);
libqt_string QFutureWatcherBase_Tr(const char* s);
int QFutureWatcherBase_ProgressValue(const QFutureWatcherBase* self);
int QFutureWatcherBase_ProgressMinimum(const QFutureWatcherBase* self);
int QFutureWatcherBase_ProgressMaximum(const QFutureWatcherBase* self);
libqt_string QFutureWatcherBase_ProgressText(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsStarted(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsFinished(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsRunning(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsCanceled(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsPaused(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsSuspending(const QFutureWatcherBase* self);
bool QFutureWatcherBase_IsSuspended(const QFutureWatcherBase* self);
void QFutureWatcherBase_WaitForFinished(QFutureWatcherBase* self);
void QFutureWatcherBase_SetPendingResultsLimit(QFutureWatcherBase* self, int limit);
bool QFutureWatcherBase_Event(QFutureWatcherBase* self, QEvent* event);
void QFutureWatcherBase_Started(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Started(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Finished(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Finished(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Canceled(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Canceled(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Paused(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Paused(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Suspending(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Suspending(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Suspended(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Suspended(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Resumed(QFutureWatcherBase* self);
void QFutureWatcherBase_Connect_Resumed(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_ResultReadyAt(QFutureWatcherBase* self, int resultIndex);
void QFutureWatcherBase_Connect_ResultReadyAt(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_ResultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex);
void QFutureWatcherBase_Connect_ResultsReadyAt(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_ProgressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum);
void QFutureWatcherBase_Connect_ProgressRangeChanged(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_ProgressValueChanged(QFutureWatcherBase* self, int progressValue);
void QFutureWatcherBase_Connect_ProgressValueChanged(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_ProgressTextChanged(QFutureWatcherBase* self, const libqt_string progressText);
void QFutureWatcherBase_Connect_ProgressTextChanged(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_Cancel(QFutureWatcherBase* self);
void QFutureWatcherBase_SetSuspended(QFutureWatcherBase* self, bool suspendVal);
void QFutureWatcherBase_Suspend(QFutureWatcherBase* self);
void QFutureWatcherBase_Resume(QFutureWatcherBase* self);
void QFutureWatcherBase_ToggleSuspended(QFutureWatcherBase* self);
void QFutureWatcherBase_SetPaused(QFutureWatcherBase* self, bool paused);
void QFutureWatcherBase_Pause(QFutureWatcherBase* self);
void QFutureWatcherBase_TogglePaused(QFutureWatcherBase* self);
libqt_string QFutureWatcherBase_Tr2(const char* s, const char* c);
libqt_string QFutureWatcherBase_Tr3(const char* s, const char* c, int n);
void QFutureWatcherBase_Delete(QFutureWatcherBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
