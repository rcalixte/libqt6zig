#pragma once
#ifndef SRC_NETWORKC_LIBQSCTPSERVER_H
#define SRC_NETWORKC_LIBQSCTPSERVER_H

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
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QSctpServer QSctpServer;
typedef struct QSctpSocket QSctpSocket;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSctpServer* QSctpServer_new();
QSctpServer* QSctpServer_new2(QObject* parent);
QMetaObject* QSctpServer_MetaObject(const QSctpServer* self);
void* QSctpServer_Metacast(QSctpServer* self, const char* param1);
int QSctpServer_Metacall(QSctpServer* self, int param1, int param2, void** param3);
void QSctpServer_OnMetacall(QSctpServer* self, intptr_t slot);
int QSctpServer_QBaseMetacall(QSctpServer* self, int param1, int param2, void** param3);
libqt_string QSctpServer_Tr(const char* s);
void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count);
int QSctpServer_MaximumChannelCount(const QSctpServer* self);
QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self);
void QSctpServer_IncomingConnection(QSctpServer* self, intptr_t handle);
void QSctpServer_OnIncomingConnection(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseIncomingConnection(QSctpServer* self, intptr_t handle);
libqt_string QSctpServer_Tr2(const char* s, const char* c);
libqt_string QSctpServer_Tr3(const char* s, const char* c, int n);
bool QSctpServer_HasPendingConnections(const QSctpServer* self);
void QSctpServer_OnHasPendingConnections(const QSctpServer* self, intptr_t slot);
bool QSctpServer_QBaseHasPendingConnections(const QSctpServer* self);
QTcpSocket* QSctpServer_NextPendingConnection(QSctpServer* self);
void QSctpServer_OnNextPendingConnection(QSctpServer* self, intptr_t slot);
QTcpSocket* QSctpServer_QBaseNextPendingConnection(QSctpServer* self);
bool QSctpServer_Event(QSctpServer* self, QEvent* event);
void QSctpServer_OnEvent(QSctpServer* self, intptr_t slot);
bool QSctpServer_QBaseEvent(QSctpServer* self, QEvent* event);
bool QSctpServer_EventFilter(QSctpServer* self, QObject* watched, QEvent* event);
void QSctpServer_OnEventFilter(QSctpServer* self, intptr_t slot);
bool QSctpServer_QBaseEventFilter(QSctpServer* self, QObject* watched, QEvent* event);
void QSctpServer_TimerEvent(QSctpServer* self, QTimerEvent* event);
void QSctpServer_OnTimerEvent(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseTimerEvent(QSctpServer* self, QTimerEvent* event);
void QSctpServer_ChildEvent(QSctpServer* self, QChildEvent* event);
void QSctpServer_OnChildEvent(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseChildEvent(QSctpServer* self, QChildEvent* event);
void QSctpServer_CustomEvent(QSctpServer* self, QEvent* event);
void QSctpServer_OnCustomEvent(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseCustomEvent(QSctpServer* self, QEvent* event);
void QSctpServer_ConnectNotify(QSctpServer* self, QMetaMethod* signal);
void QSctpServer_OnConnectNotify(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseConnectNotify(QSctpServer* self, QMetaMethod* signal);
void QSctpServer_DisconnectNotify(QSctpServer* self, QMetaMethod* signal);
void QSctpServer_OnDisconnectNotify(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseDisconnectNotify(QSctpServer* self, QMetaMethod* signal);
void QSctpServer_AddPendingConnection(QSctpServer* self, QTcpSocket* socket);
void QSctpServer_OnAddPendingConnection(QSctpServer* self, intptr_t slot);
void QSctpServer_QBaseAddPendingConnection(QSctpServer* self, QTcpSocket* socket);
QObject* QSctpServer_Sender(const QSctpServer* self);
void QSctpServer_OnSender(const QSctpServer* self, intptr_t slot);
QObject* QSctpServer_QBaseSender(const QSctpServer* self);
int QSctpServer_SenderSignalIndex(const QSctpServer* self);
void QSctpServer_OnSenderSignalIndex(const QSctpServer* self, intptr_t slot);
int QSctpServer_QBaseSenderSignalIndex(const QSctpServer* self);
int QSctpServer_Receivers(const QSctpServer* self, const char* signal);
void QSctpServer_OnReceivers(const QSctpServer* self, intptr_t slot);
int QSctpServer_QBaseReceivers(const QSctpServer* self, const char* signal);
bool QSctpServer_IsSignalConnected(const QSctpServer* self, QMetaMethod* signal);
void QSctpServer_OnIsSignalConnected(const QSctpServer* self, intptr_t slot);
bool QSctpServer_QBaseIsSignalConnected(const QSctpServer* self, QMetaMethod* signal);
void QSctpServer_Delete(QSctpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
