#pragma once
#ifndef SRC_WEBSOCKETSC_LIBQWEBSOCKETSERVER_H
#define SRC_WEBSOCKETSC_LIBQWEBSOCKETSERVER_H

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
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebSocket QWebSocket;
typedef struct QWebSocketCorsAuthenticator QWebSocketCorsAuthenticator;
typedef struct QWebSocketServer QWebSocketServer;
#endif

QWebSocketServer* QWebSocketServer_new(const libqt_string serverName, int secureMode);
QWebSocketServer* QWebSocketServer_new2(const libqt_string serverName, int secureMode, QObject* parent);
QMetaObject* QWebSocketServer_MetaObject(const QWebSocketServer* self);
void* QWebSocketServer_Metacast(QWebSocketServer* self, const char* param1);
int QWebSocketServer_Metacall(QWebSocketServer* self, int param1, int param2, void** param3);
bool QWebSocketServer_Listen(QWebSocketServer* self);
void QWebSocketServer_Close(QWebSocketServer* self);
bool QWebSocketServer_IsListening(const QWebSocketServer* self);
void QWebSocketServer_SetMaxPendingConnections(QWebSocketServer* self, int numConnections);
int QWebSocketServer_MaxPendingConnections(const QWebSocketServer* self);
void QWebSocketServer_SetHandshakeTimeout(QWebSocketServer* self, int64_t msec);
int64_t QWebSocketServer_HandshakeTimeout(const QWebSocketServer* self);
void QWebSocketServer_SetHandshakeTimeout2(QWebSocketServer* self, int msec);
int QWebSocketServer_HandshakeTimeoutMS(const QWebSocketServer* self);
uint16_t QWebSocketServer_ServerPort(const QWebSocketServer* self);
QHostAddress* QWebSocketServer_ServerAddress(const QWebSocketServer* self);
QUrl* QWebSocketServer_ServerUrl(const QWebSocketServer* self);
int QWebSocketServer_SecureMode(const QWebSocketServer* self);
bool QWebSocketServer_SetSocketDescriptor(QWebSocketServer* self, intptr_t socketDescriptor);
intptr_t QWebSocketServer_SocketDescriptor(const QWebSocketServer* self);
bool QWebSocketServer_SetNativeDescriptor(QWebSocketServer* self, intptr_t descriptor);
intptr_t QWebSocketServer_NativeDescriptor(const QWebSocketServer* self);
bool QWebSocketServer_HasPendingConnections(const QWebSocketServer* self);
QWebSocket* QWebSocketServer_NextPendingConnection(QWebSocketServer* self);
int QWebSocketServer_Error(const QWebSocketServer* self);
libqt_string QWebSocketServer_ErrorString(const QWebSocketServer* self);
void QWebSocketServer_PauseAccepting(QWebSocketServer* self);
void QWebSocketServer_ResumeAccepting(QWebSocketServer* self);
void QWebSocketServer_SetServerName(QWebSocketServer* self, const libqt_string serverName);
libqt_string QWebSocketServer_ServerName(const QWebSocketServer* self);
void QWebSocketServer_SetSupportedSubprotocols(QWebSocketServer* self, const libqt_list /* of libqt_string */ protocols);
libqt_list /* of libqt_string */ QWebSocketServer_SupportedSubprotocols(const QWebSocketServer* self);
void QWebSocketServer_SetProxy(QWebSocketServer* self, const QNetworkProxy* networkProxy);
QNetworkProxy* QWebSocketServer_Proxy(const QWebSocketServer* self);
void QWebSocketServer_SetSslConfiguration(QWebSocketServer* self, const QSslConfiguration* sslConfiguration);
QSslConfiguration* QWebSocketServer_SslConfiguration(const QWebSocketServer* self);
libqt_list /* of int */ QWebSocketServer_SupportedVersions(const QWebSocketServer* self);
void QWebSocketServer_HandleConnection(const QWebSocketServer* self, QTcpSocket* socket);
void QWebSocketServer_AcceptError(QWebSocketServer* self, int socketError);
void QWebSocketServer_Connect_AcceptError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_ServerError(QWebSocketServer* self, int closeCode);
void QWebSocketServer_Connect_ServerError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_OriginAuthenticationRequired(QWebSocketServer* self, QWebSocketCorsAuthenticator* pAuthenticator);
void QWebSocketServer_Connect_OriginAuthenticationRequired(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_NewConnection(QWebSocketServer* self);
void QWebSocketServer_Connect_NewConnection(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_PeerVerifyError(QWebSocketServer* self, const QSslError* errorVal);
void QWebSocketServer_Connect_PeerVerifyError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_SslErrors(QWebSocketServer* self, const libqt_list /* of QSslError* */ errors);
void QWebSocketServer_Connect_SslErrors(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_PreSharedKeyAuthenticationRequired(QWebSocketServer* self, QSslPreSharedKeyAuthenticator* authenticator);
void QWebSocketServer_Connect_PreSharedKeyAuthenticationRequired(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_AlertSent(QWebSocketServer* self, int level, int typeVal, const libqt_string description);
void QWebSocketServer_Connect_AlertSent(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_AlertReceived(QWebSocketServer* self, int level, int typeVal, const libqt_string description);
void QWebSocketServer_Connect_AlertReceived(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_HandshakeInterruptedOnError(QWebSocketServer* self, const QSslError* errorVal);
void QWebSocketServer_Connect_HandshakeInterruptedOnError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_Closed(QWebSocketServer* self);
void QWebSocketServer_Connect_Closed(QWebSocketServer* self, intptr_t slot);
bool QWebSocketServer_Listen1(QWebSocketServer* self, const QHostAddress* address);
bool QWebSocketServer_Listen2(QWebSocketServer* self, const QHostAddress* address, uint16_t port);
void QWebSocketServer_OnMetaObject(const QWebSocketServer* self, intptr_t slot);
QMetaObject* QWebSocketServer_SuperMetaObject(const QWebSocketServer* self);
void QWebSocketServer_OnMetacast(QWebSocketServer* self, intptr_t slot);
void* QWebSocketServer_SuperMetacast(QWebSocketServer* self, const char* param1);
void QWebSocketServer_OnMetacall(QWebSocketServer* self, intptr_t slot);
int QWebSocketServer_SuperMetacall(QWebSocketServer* self, int param1, int param2, void** param3);
void QWebSocketServer_OnNextPendingConnection(QWebSocketServer* self, intptr_t slot);
QWebSocket* QWebSocketServer_SuperNextPendingConnection(QWebSocketServer* self);
bool QWebSocketServer_Event(QWebSocketServer* self, QEvent* event);
void QWebSocketServer_OnEvent(QWebSocketServer* self, intptr_t slot);
bool QWebSocketServer_SuperEvent(QWebSocketServer* self, QEvent* event);
bool QWebSocketServer_EventFilter(QWebSocketServer* self, QObject* watched, QEvent* event);
void QWebSocketServer_OnEventFilter(QWebSocketServer* self, intptr_t slot);
bool QWebSocketServer_SuperEventFilter(QWebSocketServer* self, QObject* watched, QEvent* event);
void QWebSocketServer_TimerEvent(QWebSocketServer* self, QTimerEvent* event);
void QWebSocketServer_OnTimerEvent(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_SuperTimerEvent(QWebSocketServer* self, QTimerEvent* event);
void QWebSocketServer_ChildEvent(QWebSocketServer* self, QChildEvent* event);
void QWebSocketServer_OnChildEvent(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_SuperChildEvent(QWebSocketServer* self, QChildEvent* event);
void QWebSocketServer_CustomEvent(QWebSocketServer* self, QEvent* event);
void QWebSocketServer_OnCustomEvent(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_SuperCustomEvent(QWebSocketServer* self, QEvent* event);
void QWebSocketServer_ConnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
void QWebSocketServer_OnConnectNotify(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_SuperConnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
void QWebSocketServer_DisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
void QWebSocketServer_OnDisconnectNotify(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_SuperDisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal);
QObject* QWebSocketServer_Sender(const QWebSocketServer* self);
void QWebSocketServer_OnSender(const QWebSocketServer* self, intptr_t slot);
QObject* QWebSocketServer_SuperSender(const QWebSocketServer* self);
int QWebSocketServer_SenderSignalIndex(const QWebSocketServer* self);
void QWebSocketServer_OnSenderSignalIndex(const QWebSocketServer* self, intptr_t slot);
int QWebSocketServer_SuperSenderSignalIndex(const QWebSocketServer* self);
int QWebSocketServer_Receivers(const QWebSocketServer* self, const char* signal);
void QWebSocketServer_OnReceivers(const QWebSocketServer* self, intptr_t slot);
int QWebSocketServer_SuperReceivers(const QWebSocketServer* self, const char* signal);
bool QWebSocketServer_IsSignalConnected(const QWebSocketServer* self, const QMetaMethod* signal);
void QWebSocketServer_OnIsSignalConnected(const QWebSocketServer* self, intptr_t slot);
bool QWebSocketServer_SuperIsSignalConnected(const QWebSocketServer* self, const QMetaMethod* signal);
void QWebSocketServer_Delete(QWebSocketServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
