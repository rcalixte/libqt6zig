#pragma once
#ifndef SRC_NETWORKC_LIBQLOCALSERVER_H
#define SRC_NETWORKC_LIBQLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocalServer QLocalServer;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QLocalServer::SocketOption SocketOption;   // C++ enum
typedef QLocalServer::SocketOptions SocketOptions; // C++ QFlags
#else
typedef int SocketOption;  // C ABI enum
typedef int SocketOptions; // C ABI QFlags
#endif

QLocalServer* QLocalServer_new();
QLocalServer* QLocalServer_new2(QObject* parent);
QMetaObject* QLocalServer_MetaObject(const QLocalServer* self);
void* QLocalServer_Metacast(QLocalServer* self, const char* param1);
int QLocalServer_Metacall(QLocalServer* self, int param1, int param2, void** param3);
void QLocalServer_OnMetacall(QLocalServer* self, intptr_t slot);
int QLocalServer_QBaseMetacall(QLocalServer* self, int param1, int param2, void** param3);
libqt_string QLocalServer_Tr(const char* s);
void QLocalServer_NewConnection(QLocalServer* self);
void QLocalServer_Connect_NewConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_Close(QLocalServer* self);
libqt_string QLocalServer_ErrorString(const QLocalServer* self);
bool QLocalServer_HasPendingConnections(const QLocalServer* self);
void QLocalServer_OnHasPendingConnections(const QLocalServer* self, intptr_t slot);
bool QLocalServer_QBaseHasPendingConnections(const QLocalServer* self);
bool QLocalServer_IsListening(const QLocalServer* self);
bool QLocalServer_Listen(QLocalServer* self, libqt_string name);
bool QLocalServer_ListenWithSocketDescriptor(QLocalServer* self, intptr_t socketDescriptor);
int QLocalServer_MaxPendingConnections(const QLocalServer* self);
QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self);
void QLocalServer_OnNextPendingConnection(QLocalServer* self, intptr_t slot);
QLocalSocket* QLocalServer_QBaseNextPendingConnection(QLocalServer* self);
libqt_string QLocalServer_ServerName(const QLocalServer* self);
libqt_string QLocalServer_FullServerName(const QLocalServer* self);
bool QLocalServer_RemoveServer(libqt_string name);
int QLocalServer_ServerError(const QLocalServer* self);
void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections);
bool QLocalServer_WaitForNewConnection(QLocalServer* self);
void QLocalServer_SetListenBacklogSize(QLocalServer* self, int size);
int QLocalServer_ListenBacklogSize(const QLocalServer* self);
void QLocalServer_SetSocketOptions(QLocalServer* self, int options);
int QLocalServer_SocketOptions(const QLocalServer* self);
intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self);
void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
void QLocalServer_OnIncomingConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
libqt_string QLocalServer_Tr2(const char* s, const char* c);
libqt_string QLocalServer_Tr3(const char* s, const char* c, int n);
bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec);
bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut);
bool QLocalServer_Event(QLocalServer* self, QEvent* event);
void QLocalServer_OnEvent(QLocalServer* self, intptr_t slot);
bool QLocalServer_QBaseEvent(QLocalServer* self, QEvent* event);
bool QLocalServer_EventFilter(QLocalServer* self, QObject* watched, QEvent* event);
void QLocalServer_OnEventFilter(QLocalServer* self, intptr_t slot);
bool QLocalServer_QBaseEventFilter(QLocalServer* self, QObject* watched, QEvent* event);
void QLocalServer_TimerEvent(QLocalServer* self, QTimerEvent* event);
void QLocalServer_OnTimerEvent(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseTimerEvent(QLocalServer* self, QTimerEvent* event);
void QLocalServer_ChildEvent(QLocalServer* self, QChildEvent* event);
void QLocalServer_OnChildEvent(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseChildEvent(QLocalServer* self, QChildEvent* event);
void QLocalServer_CustomEvent(QLocalServer* self, QEvent* event);
void QLocalServer_OnCustomEvent(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseCustomEvent(QLocalServer* self, QEvent* event);
void QLocalServer_ConnectNotify(QLocalServer* self, QMetaMethod* signal);
void QLocalServer_OnConnectNotify(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseConnectNotify(QLocalServer* self, QMetaMethod* signal);
void QLocalServer_DisconnectNotify(QLocalServer* self, QMetaMethod* signal);
void QLocalServer_OnDisconnectNotify(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseDisconnectNotify(QLocalServer* self, QMetaMethod* signal);
QObject* QLocalServer_Sender(const QLocalServer* self);
void QLocalServer_OnSender(const QLocalServer* self, intptr_t slot);
QObject* QLocalServer_QBaseSender(const QLocalServer* self);
int QLocalServer_SenderSignalIndex(const QLocalServer* self);
void QLocalServer_OnSenderSignalIndex(const QLocalServer* self, intptr_t slot);
int QLocalServer_QBaseSenderSignalIndex(const QLocalServer* self);
int QLocalServer_Receivers(const QLocalServer* self, const char* signal);
void QLocalServer_OnReceivers(const QLocalServer* self, intptr_t slot);
int QLocalServer_QBaseReceivers(const QLocalServer* self, const char* signal);
bool QLocalServer_IsSignalConnected(const QLocalServer* self, QMetaMethod* signal);
void QLocalServer_OnIsSignalConnected(const QLocalServer* self, intptr_t slot);
bool QLocalServer_QBaseIsSignalConnected(const QLocalServer* self, QMetaMethod* signal);
void QLocalServer_Delete(QLocalServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
