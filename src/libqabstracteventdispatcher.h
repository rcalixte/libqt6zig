#pragma once
#ifndef SRCC_LIBQABSTRACTEVENTDISPATCHER_H
#define SRCC_LIBQABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfo)
typedef QAbstractEventDispatcher::TimerInfo QAbstractEventDispatcher__TimerInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractEventDispatcher__TimerInfoV2)
typedef QAbstractEventDispatcher::TimerInfoV2 QAbstractEventDispatcher__TimerInfoV2;
#endif
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractEventDispatcherV2 QAbstractEventDispatcherV2;
typedef struct QAbstractEventDispatcher__TimerInfo QAbstractEventDispatcher__TimerInfo;
typedef struct QAbstractEventDispatcher__TimerInfoV2 QAbstractEventDispatcher__TimerInfoV2;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QThread QThread;
#endif

QMetaObject* QAbstractEventDispatcher_MetaObject(const QAbstractEventDispatcher* self);
void* QAbstractEventDispatcher_Metacast(QAbstractEventDispatcher* self, const char* param1);
int QAbstractEventDispatcher_Metacall(QAbstractEventDispatcher* self, int param1, int param2, void** param3);
libqt_string QAbstractEventDispatcher_Tr(const char* s);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance();
bool QAbstractEventDispatcher_ProcessEvents(QAbstractEventDispatcher* self, int flags);
void QAbstractEventDispatcher_RegisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
void QAbstractEventDispatcher_UnregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
int QAbstractEventDispatcher_RegisterTimer(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object);
void QAbstractEventDispatcher_RegisterTimer2(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object);
bool QAbstractEventDispatcher_UnregisterTimer(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_UnregisterTimers(QAbstractEventDispatcher* self, QObject* object);
libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ QAbstractEventDispatcher_RegisteredTimers(const QAbstractEventDispatcher* self, QObject* object);
int QAbstractEventDispatcher_RemainingTime(QAbstractEventDispatcher* self, int timerId);
bool QAbstractEventDispatcher_UnregisterTimer2(QAbstractEventDispatcher* self, int timerId);
libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ QAbstractEventDispatcher_TimersForObject(const QAbstractEventDispatcher* self, QObject* object);
void QAbstractEventDispatcher_WakeUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Interrupt(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_StartingUp(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_ClosingDown(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_InstallNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
void QAbstractEventDispatcher_RemoveNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
bool QAbstractEventDispatcher_FilterNativeEvent(QAbstractEventDispatcher* self, const libqt_string eventType, void* message, intptr_t* result);
void QAbstractEventDispatcher_AboutToBlock(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Connect_AboutToBlock(QAbstractEventDispatcher* self, intptr_t slot);
void QAbstractEventDispatcher_Awake(QAbstractEventDispatcher* self);
void QAbstractEventDispatcher_Connect_Awake(QAbstractEventDispatcher* self, intptr_t slot);
libqt_string QAbstractEventDispatcher_Tr2(const char* s, const char* c);
libqt_string QAbstractEventDispatcher_Tr3(const char* s, const char* c, int n);
QAbstractEventDispatcher* QAbstractEventDispatcher_Instance1(QThread* thread);
void QAbstractEventDispatcher_Delete(QAbstractEventDispatcher* self);

QMetaObject* QAbstractEventDispatcherV2_MetaObject(const QAbstractEventDispatcherV2* self);
void* QAbstractEventDispatcherV2_Metacast(QAbstractEventDispatcherV2* self, const char* param1);
int QAbstractEventDispatcherV2_Metacall(QAbstractEventDispatcherV2* self, int param1, int param2, void** param3);
libqt_string QAbstractEventDispatcherV2_Tr(const char* s);
bool QAbstractEventDispatcherV2_UnregisterTimer(QAbstractEventDispatcherV2* self, int timerId);
libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ QAbstractEventDispatcherV2_TimersForObject(const QAbstractEventDispatcherV2* self, QObject* object);
bool QAbstractEventDispatcherV2_ProcessEventsWithDeadline(QAbstractEventDispatcherV2* self, int flags, QDeadlineTimer* deadline);
libqt_string QAbstractEventDispatcherV2_Tr2(const char* s, const char* c);
libqt_string QAbstractEventDispatcherV2_Tr3(const char* s, const char* c, int n);
void QAbstractEventDispatcherV2_Delete(QAbstractEventDispatcherV2* self);

QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new(const QAbstractEventDispatcher__TimerInfo* other);
QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new2(QAbstractEventDispatcher__TimerInfo* other);
QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new3(int id, int i, int t);
QAbstractEventDispatcher__TimerInfo* QAbstractEventDispatcher__TimerInfo_new4(const QAbstractEventDispatcher__TimerInfo* param1);
void QAbstractEventDispatcher__TimerInfo_CopyAssign(QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other);
void QAbstractEventDispatcher__TimerInfo_MoveAssign(QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other);
void QAbstractEventDispatcher__TimerInfo_Delete(QAbstractEventDispatcher__TimerInfo* self);

QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new(const QAbstractEventDispatcher__TimerInfoV2* param1);
QAbstractEventDispatcher__TimerInfoV2* QAbstractEventDispatcher__TimerInfoV2_new2();
void QAbstractEventDispatcher__TimerInfoV2_OperatorAssign(QAbstractEventDispatcher__TimerInfoV2* self, const QAbstractEventDispatcher__TimerInfoV2* param1);
void QAbstractEventDispatcher__TimerInfoV2_Delete(QAbstractEventDispatcher__TimerInfoV2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
