#pragma once
#ifndef SRCC_LIBQTHREADPOOL_H
#define SRCC_LIBQTHREADPOOL_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRunnable QRunnable;
typedef struct QThread QThread;
typedef struct QThreadPool QThreadPool;
typedef struct QTimerEvent QTimerEvent;
#endif

QThreadPool* QThreadPool_new();
QThreadPool* QThreadPool_new2(QObject* parent);
QMetaObject* QThreadPool_MetaObject(const QThreadPool* self);
void* QThreadPool_Metacast(QThreadPool* self, const char* param1);
int QThreadPool_Metacall(QThreadPool* self, int param1, int param2, void** param3);
void QThreadPool_OnMetacall(QThreadPool* self, intptr_t slot);
int QThreadPool_QBaseMetacall(QThreadPool* self, int param1, int param2, void** param3);
libqt_string QThreadPool_Tr(const char* s);
QThreadPool* QThreadPool_GlobalInstance();
void QThreadPool_Start(QThreadPool* self, QRunnable* runnable);
bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable);
void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable);
int QThreadPool_ExpiryTimeout(const QThreadPool* self);
void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout);
int QThreadPool_MaxThreadCount(const QThreadPool* self);
void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount);
int QThreadPool_ActiveThreadCount(const QThreadPool* self);
void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize);
unsigned int QThreadPool_StackSize(const QThreadPool* self);
void QThreadPool_SetThreadPriority(QThreadPool* self, int priority);
int QThreadPool_ThreadPriority(const QThreadPool* self);
void QThreadPool_ReserveThread(QThreadPool* self);
void QThreadPool_ReleaseThread(QThreadPool* self);
bool QThreadPool_WaitForDone(QThreadPool* self);
void QThreadPool_Clear(QThreadPool* self);
bool QThreadPool_Contains(const QThreadPool* self, const QThread* thread);
bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable);
libqt_string QThreadPool_Tr2(const char* s, const char* c);
libqt_string QThreadPool_Tr3(const char* s, const char* c, int n);
void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority);
bool QThreadPool_WaitForDone1(QThreadPool* self, int msecs);
bool QThreadPool_Event(QThreadPool* self, QEvent* event);
void QThreadPool_OnEvent(QThreadPool* self, intptr_t slot);
bool QThreadPool_QBaseEvent(QThreadPool* self, QEvent* event);
bool QThreadPool_EventFilter(QThreadPool* self, QObject* watched, QEvent* event);
void QThreadPool_OnEventFilter(QThreadPool* self, intptr_t slot);
bool QThreadPool_QBaseEventFilter(QThreadPool* self, QObject* watched, QEvent* event);
void QThreadPool_TimerEvent(QThreadPool* self, QTimerEvent* event);
void QThreadPool_OnTimerEvent(QThreadPool* self, intptr_t slot);
void QThreadPool_QBaseTimerEvent(QThreadPool* self, QTimerEvent* event);
void QThreadPool_ChildEvent(QThreadPool* self, QChildEvent* event);
void QThreadPool_OnChildEvent(QThreadPool* self, intptr_t slot);
void QThreadPool_QBaseChildEvent(QThreadPool* self, QChildEvent* event);
void QThreadPool_CustomEvent(QThreadPool* self, QEvent* event);
void QThreadPool_OnCustomEvent(QThreadPool* self, intptr_t slot);
void QThreadPool_QBaseCustomEvent(QThreadPool* self, QEvent* event);
void QThreadPool_ConnectNotify(QThreadPool* self, const QMetaMethod* signal);
void QThreadPool_OnConnectNotify(QThreadPool* self, intptr_t slot);
void QThreadPool_QBaseConnectNotify(QThreadPool* self, const QMetaMethod* signal);
void QThreadPool_DisconnectNotify(QThreadPool* self, const QMetaMethod* signal);
void QThreadPool_OnDisconnectNotify(QThreadPool* self, intptr_t slot);
void QThreadPool_QBaseDisconnectNotify(QThreadPool* self, const QMetaMethod* signal);
QObject* QThreadPool_Sender(const QThreadPool* self);
void QThreadPool_OnSender(const QThreadPool* self, intptr_t slot);
QObject* QThreadPool_QBaseSender(const QThreadPool* self);
int QThreadPool_SenderSignalIndex(const QThreadPool* self);
void QThreadPool_OnSenderSignalIndex(const QThreadPool* self, intptr_t slot);
int QThreadPool_QBaseSenderSignalIndex(const QThreadPool* self);
int QThreadPool_Receivers(const QThreadPool* self, const char* signal);
void QThreadPool_OnReceivers(const QThreadPool* self, intptr_t slot);
int QThreadPool_QBaseReceivers(const QThreadPool* self, const char* signal);
bool QThreadPool_IsSignalConnected(const QThreadPool* self, const QMetaMethod* signal);
void QThreadPool_OnIsSignalConnected(const QThreadPool* self, intptr_t slot);
bool QThreadPool_QBaseIsSignalConnected(const QThreadPool* self, const QMetaMethod* signal);
void QThreadPool_Delete(QThreadPool* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
