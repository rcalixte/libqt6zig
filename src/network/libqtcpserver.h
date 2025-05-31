#pragma once
#ifndef SRC_NETWORKC_LIBQTCPSERVER_H
#define SRC_NETWORKC_LIBQTCPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
#endif

QTcpServer* QTcpServer_new();
QTcpServer* QTcpServer_new2(QObject* parent);
QMetaObject* QTcpServer_MetaObject(const QTcpServer* self);
void* QTcpServer_Metacast(QTcpServer* self, const char* param1);
int QTcpServer_Metacall(QTcpServer* self, int param1, int param2, void** param3);
void QTcpServer_OnMetacall(QTcpServer* self, intptr_t slot);
int QTcpServer_QBaseMetacall(QTcpServer* self, int param1, int param2, void** param3);
libqt_string QTcpServer_Tr(const char* s);
bool QTcpServer_Listen(QTcpServer* self);
void QTcpServer_Close(QTcpServer* self);
bool QTcpServer_IsListening(const QTcpServer* self);
void QTcpServer_SetMaxPendingConnections(QTcpServer* self, int numConnections);
int QTcpServer_MaxPendingConnections(const QTcpServer* self);
void QTcpServer_SetListenBacklogSize(QTcpServer* self, int size);
int QTcpServer_ListenBacklogSize(const QTcpServer* self);
uint16_t QTcpServer_ServerPort(const QTcpServer* self);
QHostAddress* QTcpServer_ServerAddress(const QTcpServer* self);
intptr_t QTcpServer_SocketDescriptor(const QTcpServer* self);
bool QTcpServer_SetSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor);
bool QTcpServer_WaitForNewConnection(QTcpServer* self);
bool QTcpServer_HasPendingConnections(const QTcpServer* self);
void QTcpServer_OnHasPendingConnections(const QTcpServer* self, intptr_t slot);
bool QTcpServer_QBaseHasPendingConnections(const QTcpServer* self);
QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self);
void QTcpServer_OnNextPendingConnection(QTcpServer* self, intptr_t slot);
QTcpSocket* QTcpServer_QBaseNextPendingConnection(QTcpServer* self);
int QTcpServer_ServerError(const QTcpServer* self);
libqt_string QTcpServer_ErrorString(const QTcpServer* self);
void QTcpServer_PauseAccepting(QTcpServer* self);
void QTcpServer_ResumeAccepting(QTcpServer* self);
void QTcpServer_SetProxy(QTcpServer* self, const QNetworkProxy* networkProxy);
QNetworkProxy* QTcpServer_Proxy(const QTcpServer* self);
void QTcpServer_IncomingConnection(QTcpServer* self, intptr_t handle);
void QTcpServer_OnIncomingConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseIncomingConnection(QTcpServer* self, intptr_t handle);
void QTcpServer_NewConnection(QTcpServer* self);
void QTcpServer_Connect_NewConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_AcceptError(QTcpServer* self, int socketError);
void QTcpServer_Connect_AcceptError(QTcpServer* self, intptr_t slot);
libqt_string QTcpServer_Tr2(const char* s, const char* c);
libqt_string QTcpServer_Tr3(const char* s, const char* c, int n);
bool QTcpServer_Listen1(QTcpServer* self, const QHostAddress* address);
bool QTcpServer_Listen2(QTcpServer* self, const QHostAddress* address, uint16_t port);
bool QTcpServer_WaitForNewConnection1(QTcpServer* self, int msec);
bool QTcpServer_WaitForNewConnection2(QTcpServer* self, int msec, bool* timedOut);
bool QTcpServer_Event(QTcpServer* self, QEvent* event);
void QTcpServer_OnEvent(QTcpServer* self, intptr_t slot);
bool QTcpServer_QBaseEvent(QTcpServer* self, QEvent* event);
bool QTcpServer_EventFilter(QTcpServer* self, QObject* watched, QEvent* event);
void QTcpServer_OnEventFilter(QTcpServer* self, intptr_t slot);
bool QTcpServer_QBaseEventFilter(QTcpServer* self, QObject* watched, QEvent* event);
void QTcpServer_TimerEvent(QTcpServer* self, QTimerEvent* event);
void QTcpServer_OnTimerEvent(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseTimerEvent(QTcpServer* self, QTimerEvent* event);
void QTcpServer_ChildEvent(QTcpServer* self, QChildEvent* event);
void QTcpServer_OnChildEvent(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseChildEvent(QTcpServer* self, QChildEvent* event);
void QTcpServer_CustomEvent(QTcpServer* self, QEvent* event);
void QTcpServer_OnCustomEvent(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseCustomEvent(QTcpServer* self, QEvent* event);
void QTcpServer_ConnectNotify(QTcpServer* self, const QMetaMethod* signal);
void QTcpServer_OnConnectNotify(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseConnectNotify(QTcpServer* self, const QMetaMethod* signal);
void QTcpServer_DisconnectNotify(QTcpServer* self, const QMetaMethod* signal);
void QTcpServer_OnDisconnectNotify(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseDisconnectNotify(QTcpServer* self, const QMetaMethod* signal);
void QTcpServer_AddPendingConnection(QTcpServer* self, QTcpSocket* socket);
void QTcpServer_OnAddPendingConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseAddPendingConnection(QTcpServer* self, QTcpSocket* socket);
QObject* QTcpServer_Sender(const QTcpServer* self);
void QTcpServer_OnSender(const QTcpServer* self, intptr_t slot);
QObject* QTcpServer_QBaseSender(const QTcpServer* self);
int QTcpServer_SenderSignalIndex(const QTcpServer* self);
void QTcpServer_OnSenderSignalIndex(const QTcpServer* self, intptr_t slot);
int QTcpServer_QBaseSenderSignalIndex(const QTcpServer* self);
int QTcpServer_Receivers(const QTcpServer* self, const char* signal);
void QTcpServer_OnReceivers(const QTcpServer* self, intptr_t slot);
int QTcpServer_QBaseReceivers(const QTcpServer* self, const char* signal);
bool QTcpServer_IsSignalConnected(const QTcpServer* self, const QMetaMethod* signal);
void QTcpServer_OnIsSignalConnected(const QTcpServer* self, intptr_t slot);
bool QTcpServer_QBaseIsSignalConnected(const QTcpServer* self, const QMetaMethod* signal);
void QTcpServer_Connect_PendingConnectionAvailable(QTcpServer* self, intptr_t slot);
void QTcpServer_Delete(QTcpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
