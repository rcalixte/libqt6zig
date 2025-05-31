#pragma once
#ifndef SRC_NETWORKC_LIBQSSLSERVER_H
#define SRC_NETWORKC_LIBQSSLSERVER_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslServer QSslServer;
typedef struct QSslSocket QSslSocket;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
#endif

QSslServer* QSslServer_new();
QSslServer* QSslServer_new2(QObject* parent);
QMetaObject* QSslServer_MetaObject(const QSslServer* self);
void* QSslServer_Metacast(QSslServer* self, const char* param1);
int QSslServer_Metacall(QSslServer* self, int param1, int param2, void** param3);
void QSslServer_OnMetacall(QSslServer* self, intptr_t slot);
int QSslServer_QBaseMetacall(QSslServer* self, int param1, int param2, void** param3);
libqt_string QSslServer_Tr(const char* s);
void QSslServer_SetSslConfiguration(QSslServer* self, const QSslConfiguration* sslConfiguration);
QSslConfiguration* QSslServer_SslConfiguration(const QSslServer* self);
void QSslServer_SetHandshakeTimeout(QSslServer* self, int timeout);
int QSslServer_HandshakeTimeout(const QSslServer* self);
void QSslServer_SslErrors(QSslServer* self, QSslSocket* socket, const libqt_list /* of QSslError* */ errors);
void QSslServer_Connect_SslErrors(QSslServer* self, intptr_t slot);
void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal);
void QSslServer_Connect_PeerVerifyError(QSslServer* self, intptr_t slot);
void QSslServer_ErrorOccurred(QSslServer* self, QSslSocket* socket, int errorVal);
void QSslServer_Connect_ErrorOccurred(QSslServer* self, intptr_t slot);
void QSslServer_PreSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator);
void QSslServer_Connect_PreSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot);
void QSslServer_AlertSent(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description);
void QSslServer_Connect_AlertSent(QSslServer* self, intptr_t slot);
void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description);
void QSslServer_Connect_AlertReceived(QSslServer* self, intptr_t slot);
void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal);
void QSslServer_Connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot);
void QSslServer_StartedEncryptionHandshake(QSslServer* self, QSslSocket* socket);
void QSslServer_Connect_StartedEncryptionHandshake(QSslServer* self, intptr_t slot);
void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket);
void QSslServer_OnIncomingConnection(QSslServer* self, intptr_t slot);
void QSslServer_QBaseIncomingConnection(QSslServer* self, intptr_t socket);
libqt_string QSslServer_Tr2(const char* s, const char* c);
libqt_string QSslServer_Tr3(const char* s, const char* c, int n);
bool QSslServer_HasPendingConnections(const QSslServer* self);
void QSslServer_OnHasPendingConnections(const QSslServer* self, intptr_t slot);
bool QSslServer_QBaseHasPendingConnections(const QSslServer* self);
QTcpSocket* QSslServer_NextPendingConnection(QSslServer* self);
void QSslServer_OnNextPendingConnection(QSslServer* self, intptr_t slot);
QTcpSocket* QSslServer_QBaseNextPendingConnection(QSslServer* self);
bool QSslServer_Event(QSslServer* self, QEvent* event);
void QSslServer_OnEvent(QSslServer* self, intptr_t slot);
bool QSslServer_QBaseEvent(QSslServer* self, QEvent* event);
bool QSslServer_EventFilter(QSslServer* self, QObject* watched, QEvent* event);
void QSslServer_OnEventFilter(QSslServer* self, intptr_t slot);
bool QSslServer_QBaseEventFilter(QSslServer* self, QObject* watched, QEvent* event);
void QSslServer_TimerEvent(QSslServer* self, QTimerEvent* event);
void QSslServer_OnTimerEvent(QSslServer* self, intptr_t slot);
void QSslServer_QBaseTimerEvent(QSslServer* self, QTimerEvent* event);
void QSslServer_ChildEvent(QSslServer* self, QChildEvent* event);
void QSslServer_OnChildEvent(QSslServer* self, intptr_t slot);
void QSslServer_QBaseChildEvent(QSslServer* self, QChildEvent* event);
void QSslServer_CustomEvent(QSslServer* self, QEvent* event);
void QSslServer_OnCustomEvent(QSslServer* self, intptr_t slot);
void QSslServer_QBaseCustomEvent(QSslServer* self, QEvent* event);
void QSslServer_ConnectNotify(QSslServer* self, const QMetaMethod* signal);
void QSslServer_OnConnectNotify(QSslServer* self, intptr_t slot);
void QSslServer_QBaseConnectNotify(QSslServer* self, const QMetaMethod* signal);
void QSslServer_DisconnectNotify(QSslServer* self, const QMetaMethod* signal);
void QSslServer_OnDisconnectNotify(QSslServer* self, intptr_t slot);
void QSslServer_QBaseDisconnectNotify(QSslServer* self, const QMetaMethod* signal);
void QSslServer_AddPendingConnection(QSslServer* self, QTcpSocket* socket);
void QSslServer_OnAddPendingConnection(QSslServer* self, intptr_t slot);
void QSslServer_QBaseAddPendingConnection(QSslServer* self, QTcpSocket* socket);
QObject* QSslServer_Sender(const QSslServer* self);
void QSslServer_OnSender(const QSslServer* self, intptr_t slot);
QObject* QSslServer_QBaseSender(const QSslServer* self);
int QSslServer_SenderSignalIndex(const QSslServer* self);
void QSslServer_OnSenderSignalIndex(const QSslServer* self, intptr_t slot);
int QSslServer_QBaseSenderSignalIndex(const QSslServer* self);
int QSslServer_Receivers(const QSslServer* self, const char* signal);
void QSslServer_OnReceivers(const QSslServer* self, intptr_t slot);
int QSslServer_QBaseReceivers(const QSslServer* self, const char* signal);
bool QSslServer_IsSignalConnected(const QSslServer* self, const QMetaMethod* signal);
void QSslServer_OnIsSignalConnected(const QSslServer* self, intptr_t slot);
bool QSslServer_QBaseIsSignalConnected(const QSslServer* self, const QMetaMethod* signal);
void QSslServer_Delete(QSslServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
