#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSPENDINGCALL_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSPENDINGCALL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDBusError QDBusError;
typedef struct QDBusMessage QDBusMessage;
typedef struct QDBusPendingCall QDBusPendingCall;
typedef struct QDBusPendingCallWatcher QDBusPendingCallWatcher;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDBusPendingCall* QDBusPendingCall_new(const QDBusPendingCall* other);
void QDBusPendingCall_OperatorAssign(QDBusPendingCall* self, const QDBusPendingCall* other);
void QDBusPendingCall_Swap(QDBusPendingCall* self, QDBusPendingCall* other);
bool QDBusPendingCall_IsFinished(const QDBusPendingCall* self);
void QDBusPendingCall_WaitForFinished(QDBusPendingCall* self);
bool QDBusPendingCall_IsError(const QDBusPendingCall* self);
bool QDBusPendingCall_IsValid(const QDBusPendingCall* self);
QDBusError* QDBusPendingCall_Error(const QDBusPendingCall* self);
QDBusMessage* QDBusPendingCall_Reply(const QDBusPendingCall* self);
QDBusPendingCall* QDBusPendingCall_FromError(const QDBusError* errorVal);
QDBusPendingCall* QDBusPendingCall_FromCompletedCall(const QDBusMessage* message);
void QDBusPendingCall_Delete(QDBusPendingCall* self);

QDBusPendingCallWatcher* QDBusPendingCallWatcher_new(const QDBusPendingCall* call);
QDBusPendingCallWatcher* QDBusPendingCallWatcher_new2(const QDBusPendingCall* call, QObject* parent);
QMetaObject* QDBusPendingCallWatcher_MetaObject(const QDBusPendingCallWatcher* self);
void* QDBusPendingCallWatcher_Metacast(QDBusPendingCallWatcher* self, const char* param1);
int QDBusPendingCallWatcher_Metacall(QDBusPendingCallWatcher* self, int param1, int param2, void** param3);
libqt_string QDBusPendingCallWatcher_Tr(const char* s);
void QDBusPendingCallWatcher_WaitForFinished(QDBusPendingCallWatcher* self);
void QDBusPendingCallWatcher_Finished(QDBusPendingCallWatcher* self);
void QDBusPendingCallWatcher_Connect_Finished(QDBusPendingCallWatcher* self, intptr_t slot);
libqt_string QDBusPendingCallWatcher_Tr2(const char* s, const char* c);
libqt_string QDBusPendingCallWatcher_Tr3(const char* s, const char* c, int n);
void QDBusPendingCallWatcher_Finished1(QDBusPendingCallWatcher* self, QDBusPendingCallWatcher* selfVal);
void QDBusPendingCallWatcher_Connect_Finished1(QDBusPendingCallWatcher* self, intptr_t slot);
void QDBusPendingCallWatcher_OnMetacall(QDBusPendingCallWatcher* self, intptr_t slot);
int QDBusPendingCallWatcher_QBaseMetacall(QDBusPendingCallWatcher* self, int param1, int param2, void** param3);
bool QDBusPendingCallWatcher_Event(QDBusPendingCallWatcher* self, QEvent* event);
void QDBusPendingCallWatcher_OnEvent(QDBusPendingCallWatcher* self, intptr_t slot);
bool QDBusPendingCallWatcher_QBaseEvent(QDBusPendingCallWatcher* self, QEvent* event);
bool QDBusPendingCallWatcher_EventFilter(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event);
void QDBusPendingCallWatcher_OnEventFilter(QDBusPendingCallWatcher* self, intptr_t slot);
bool QDBusPendingCallWatcher_QBaseEventFilter(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event);
void QDBusPendingCallWatcher_TimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
void QDBusPendingCallWatcher_OnTimerEvent(QDBusPendingCallWatcher* self, intptr_t slot);
void QDBusPendingCallWatcher_QBaseTimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
void QDBusPendingCallWatcher_ChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
void QDBusPendingCallWatcher_OnChildEvent(QDBusPendingCallWatcher* self, intptr_t slot);
void QDBusPendingCallWatcher_QBaseChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
void QDBusPendingCallWatcher_CustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
void QDBusPendingCallWatcher_OnCustomEvent(QDBusPendingCallWatcher* self, intptr_t slot);
void QDBusPendingCallWatcher_QBaseCustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
void QDBusPendingCallWatcher_ConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
void QDBusPendingCallWatcher_OnConnectNotify(QDBusPendingCallWatcher* self, intptr_t slot);
void QDBusPendingCallWatcher_QBaseConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
void QDBusPendingCallWatcher_DisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
void QDBusPendingCallWatcher_OnDisconnectNotify(QDBusPendingCallWatcher* self, intptr_t slot);
void QDBusPendingCallWatcher_QBaseDisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
QObject* QDBusPendingCallWatcher_Sender(const QDBusPendingCallWatcher* self);
void QDBusPendingCallWatcher_OnSender(const QDBusPendingCallWatcher* self, intptr_t slot);
QObject* QDBusPendingCallWatcher_QBaseSender(const QDBusPendingCallWatcher* self);
int QDBusPendingCallWatcher_SenderSignalIndex(const QDBusPendingCallWatcher* self);
void QDBusPendingCallWatcher_OnSenderSignalIndex(const QDBusPendingCallWatcher* self, intptr_t slot);
int QDBusPendingCallWatcher_QBaseSenderSignalIndex(const QDBusPendingCallWatcher* self);
int QDBusPendingCallWatcher_Receivers(const QDBusPendingCallWatcher* self, const char* signal);
void QDBusPendingCallWatcher_OnReceivers(const QDBusPendingCallWatcher* self, intptr_t slot);
int QDBusPendingCallWatcher_QBaseReceivers(const QDBusPendingCallWatcher* self, const char* signal);
bool QDBusPendingCallWatcher_IsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal);
void QDBusPendingCallWatcher_OnIsSignalConnected(const QDBusPendingCallWatcher* self, intptr_t slot);
bool QDBusPendingCallWatcher_QBaseIsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal);
void QDBusPendingCallWatcher_Delete(QDBusPendingCallWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
