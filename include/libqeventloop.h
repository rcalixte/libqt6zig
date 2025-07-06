#pragma once
#ifndef SRCC_LIBQEVENTLOOP_H
#define SRCC_LIBQEVENTLOOP_H

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
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QEvent QEvent;
typedef struct QEventLoop QEventLoop;
typedef struct QEventLoopLocker QEventLoopLocker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
#endif

QEventLoop* QEventLoop_new();
QEventLoop* QEventLoop_new2(QObject* parent);
QMetaObject* QEventLoop_MetaObject(const QEventLoop* self);
void* QEventLoop_Metacast(QEventLoop* self, const char* param1);
int QEventLoop_Metacall(QEventLoop* self, int param1, int param2, void** param3);
void QEventLoop_OnMetacall(QEventLoop* self, intptr_t slot);
int QEventLoop_QBaseMetacall(QEventLoop* self, int param1, int param2, void** param3);
libqt_string QEventLoop_Tr(const char* s);
bool QEventLoop_ProcessEvents(QEventLoop* self);
void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime);
void QEventLoop_ProcessEvents3(QEventLoop* self, int flags, QDeadlineTimer* deadline);
int QEventLoop_Exec(QEventLoop* self);
bool QEventLoop_IsRunning(const QEventLoop* self);
void QEventLoop_WakeUp(QEventLoop* self);
bool QEventLoop_Event(QEventLoop* self, QEvent* event);
void QEventLoop_OnEvent(QEventLoop* self, intptr_t slot);
bool QEventLoop_QBaseEvent(QEventLoop* self, QEvent* event);
void QEventLoop_Exit(QEventLoop* self);
void QEventLoop_Quit(QEventLoop* self);
libqt_string QEventLoop_Tr2(const char* s, const char* c);
libqt_string QEventLoop_Tr3(const char* s, const char* c, int n);
bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags);
int QEventLoop_Exec1(QEventLoop* self, int flags);
void QEventLoop_Exit1(QEventLoop* self, int returnCode);
bool QEventLoop_EventFilter(QEventLoop* self, QObject* watched, QEvent* event);
void QEventLoop_OnEventFilter(QEventLoop* self, intptr_t slot);
bool QEventLoop_QBaseEventFilter(QEventLoop* self, QObject* watched, QEvent* event);
void QEventLoop_TimerEvent(QEventLoop* self, QTimerEvent* event);
void QEventLoop_OnTimerEvent(QEventLoop* self, intptr_t slot);
void QEventLoop_QBaseTimerEvent(QEventLoop* self, QTimerEvent* event);
void QEventLoop_ChildEvent(QEventLoop* self, QChildEvent* event);
void QEventLoop_OnChildEvent(QEventLoop* self, intptr_t slot);
void QEventLoop_QBaseChildEvent(QEventLoop* self, QChildEvent* event);
void QEventLoop_CustomEvent(QEventLoop* self, QEvent* event);
void QEventLoop_OnCustomEvent(QEventLoop* self, intptr_t slot);
void QEventLoop_QBaseCustomEvent(QEventLoop* self, QEvent* event);
void QEventLoop_ConnectNotify(QEventLoop* self, const QMetaMethod* signal);
void QEventLoop_OnConnectNotify(QEventLoop* self, intptr_t slot);
void QEventLoop_QBaseConnectNotify(QEventLoop* self, const QMetaMethod* signal);
void QEventLoop_DisconnectNotify(QEventLoop* self, const QMetaMethod* signal);
void QEventLoop_OnDisconnectNotify(QEventLoop* self, intptr_t slot);
void QEventLoop_QBaseDisconnectNotify(QEventLoop* self, const QMetaMethod* signal);
QObject* QEventLoop_Sender(const QEventLoop* self);
void QEventLoop_OnSender(const QEventLoop* self, intptr_t slot);
QObject* QEventLoop_QBaseSender(const QEventLoop* self);
int QEventLoop_SenderSignalIndex(const QEventLoop* self);
void QEventLoop_OnSenderSignalIndex(const QEventLoop* self, intptr_t slot);
int QEventLoop_QBaseSenderSignalIndex(const QEventLoop* self);
int QEventLoop_Receivers(const QEventLoop* self, const char* signal);
void QEventLoop_OnReceivers(const QEventLoop* self, intptr_t slot);
int QEventLoop_QBaseReceivers(const QEventLoop* self, const char* signal);
bool QEventLoop_IsSignalConnected(const QEventLoop* self, const QMetaMethod* signal);
void QEventLoop_OnIsSignalConnected(const QEventLoop* self, intptr_t slot);
bool QEventLoop_QBaseIsSignalConnected(const QEventLoop* self, const QMetaMethod* signal);
void QEventLoop_Delete(QEventLoop* self);

QEventLoopLocker* QEventLoopLocker_new();
QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop);
QEventLoopLocker* QEventLoopLocker_new3(QThread* thread);
void QEventLoopLocker_Swap(QEventLoopLocker* self, QEventLoopLocker* other);
void QEventLoopLocker_Delete(QEventLoopLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
