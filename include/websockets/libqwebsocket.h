#pragma once
#ifndef SRC_WEBSOCKETSC_LIBQWEBSOCKET_H
#define SRC_WEBSOCKETSC_LIBQWEBSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMaskGenerator QMaskGenerator;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebSocket QWebSocket;
typedef struct QWebSocketHandshakeOptions QWebSocketHandshakeOptions;
#endif

QWebSocket* QWebSocket_new();
QWebSocket* QWebSocket_new2(const libqt_string origin);
QWebSocket* QWebSocket_new3(const libqt_string origin, int version);
QWebSocket* QWebSocket_new4(const libqt_string origin, int version, QObject* parent);
QMetaObject* QWebSocket_MetaObject(const QWebSocket* self);
void* QWebSocket_Metacast(QWebSocket* self, const char* param1);
int QWebSocket_Metacall(QWebSocket* self, int param1, int param2, void** param3);
void QWebSocket_Abort(QWebSocket* self);
int QWebSocket_Error(const QWebSocket* self);
libqt_string QWebSocket_ErrorString(const QWebSocket* self);
bool QWebSocket_Flush(QWebSocket* self);
bool QWebSocket_IsValid(const QWebSocket* self);
QHostAddress* QWebSocket_LocalAddress(const QWebSocket* self);
uint16_t QWebSocket_LocalPort(const QWebSocket* self);
int QWebSocket_PauseMode(const QWebSocket* self);
QHostAddress* QWebSocket_PeerAddress(const QWebSocket* self);
libqt_string QWebSocket_PeerName(const QWebSocket* self);
uint16_t QWebSocket_PeerPort(const QWebSocket* self);
QNetworkProxy* QWebSocket_Proxy(const QWebSocket* self);
void QWebSocket_SetProxy(QWebSocket* self, const QNetworkProxy* networkProxy);
void QWebSocket_SetMaskGenerator(QWebSocket* self, const QMaskGenerator* maskGenerator);
QMaskGenerator* QWebSocket_MaskGenerator(const QWebSocket* self);
long long QWebSocket_ReadBufferSize(const QWebSocket* self);
void QWebSocket_SetReadBufferSize(QWebSocket* self, long long size);
void QWebSocket_Resume(QWebSocket* self);
void QWebSocket_SetPauseMode(QWebSocket* self, int pauseMode);
int QWebSocket_State(const QWebSocket* self);
int QWebSocket_Version(const QWebSocket* self);
libqt_string QWebSocket_ResourceName(const QWebSocket* self);
QUrl* QWebSocket_RequestUrl(const QWebSocket* self);
QNetworkRequest* QWebSocket_Request(const QWebSocket* self);
QWebSocketHandshakeOptions* QWebSocket_HandshakeOptions(const QWebSocket* self);
libqt_string QWebSocket_Origin(const QWebSocket* self);
libqt_string QWebSocket_Subprotocol(const QWebSocket* self);
int QWebSocket_CloseCode(const QWebSocket* self);
libqt_string QWebSocket_CloseReason(const QWebSocket* self);
long long QWebSocket_SendTextMessage(QWebSocket* self, const libqt_string message);
long long QWebSocket_SendBinaryMessage(QWebSocket* self, const libqt_string data);
void QWebSocket_IgnoreSslErrors(QWebSocket* self, const libqt_list /* of QSslError* */ errors);
void QWebSocket_ContinueInterruptedHandshake(QWebSocket* self);
void QWebSocket_SetSslConfiguration(QWebSocket* self, const QSslConfiguration* sslConfiguration);
QSslConfiguration* QWebSocket_SslConfiguration(const QWebSocket* self);
long long QWebSocket_BytesToWrite(const QWebSocket* self);
void QWebSocket_SetMaxAllowedIncomingFrameSize(QWebSocket* self, unsigned long long maxAllowedIncomingFrameSize);
unsigned long long QWebSocket_MaxAllowedIncomingFrameSize(const QWebSocket* self);
void QWebSocket_SetMaxAllowedIncomingMessageSize(QWebSocket* self, unsigned long long maxAllowedIncomingMessageSize);
unsigned long long QWebSocket_MaxAllowedIncomingMessageSize(const QWebSocket* self);
unsigned long long QWebSocket_MaxIncomingMessageSize();
unsigned long long QWebSocket_MaxIncomingFrameSize();
void QWebSocket_SetOutgoingFrameSize(QWebSocket* self, unsigned long long outgoingFrameSize);
unsigned long long QWebSocket_OutgoingFrameSize(const QWebSocket* self);
unsigned long long QWebSocket_MaxOutgoingFrameSize();
void QWebSocket_Close(QWebSocket* self);
void QWebSocket_Open(QWebSocket* self, const QUrl* url);
void QWebSocket_Open2(QWebSocket* self, const QNetworkRequest* request);
void QWebSocket_Open3(QWebSocket* self, const QUrl* url, const QWebSocketHandshakeOptions* options);
void QWebSocket_Open4(QWebSocket* self, const QNetworkRequest* request, const QWebSocketHandshakeOptions* options);
void QWebSocket_Ping(QWebSocket* self);
void QWebSocket_IgnoreSslErrors2(QWebSocket* self);
void QWebSocket_AboutToClose(QWebSocket* self);
void QWebSocket_Connect_AboutToClose(QWebSocket* self, intptr_t slot);
void QWebSocket_Connected(QWebSocket* self);
void QWebSocket_Connect_Connected(QWebSocket* self, intptr_t slot);
void QWebSocket_Disconnected(QWebSocket* self);
void QWebSocket_Connect_Disconnected(QWebSocket* self, intptr_t slot);
void QWebSocket_StateChanged(QWebSocket* self, int state);
void QWebSocket_Connect_StateChanged(QWebSocket* self, intptr_t slot);
void QWebSocket_ProxyAuthenticationRequired(QWebSocket* self, const QNetworkProxy* proxy, QAuthenticator* pAuthenticator);
void QWebSocket_Connect_ProxyAuthenticationRequired(QWebSocket* self, intptr_t slot);
void QWebSocket_AuthenticationRequired(QWebSocket* self, QAuthenticator* authenticator);
void QWebSocket_Connect_AuthenticationRequired(QWebSocket* self, intptr_t slot);
void QWebSocket_ReadChannelFinished(QWebSocket* self);
void QWebSocket_Connect_ReadChannelFinished(QWebSocket* self, intptr_t slot);
void QWebSocket_TextFrameReceived(QWebSocket* self, const libqt_string frame, bool isLastFrame);
void QWebSocket_Connect_TextFrameReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_BinaryFrameReceived(QWebSocket* self, const libqt_string frame, bool isLastFrame);
void QWebSocket_Connect_BinaryFrameReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_TextMessageReceived(QWebSocket* self, const libqt_string message);
void QWebSocket_Connect_TextMessageReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_BinaryMessageReceived(QWebSocket* self, const libqt_string message);
void QWebSocket_Connect_BinaryMessageReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_Error2(QWebSocket* self, int errorVal);
void QWebSocket_ErrorOccurred(QWebSocket* self, int errorVal);
void QWebSocket_Connect_ErrorOccurred(QWebSocket* self, intptr_t slot);
void QWebSocket_Pong(QWebSocket* self, unsigned long long elapsedTime, const libqt_string payload);
void QWebSocket_Connect_Pong(QWebSocket* self, intptr_t slot);
void QWebSocket_BytesWritten(QWebSocket* self, long long bytes);
void QWebSocket_Connect_BytesWritten(QWebSocket* self, intptr_t slot);
void QWebSocket_PeerVerifyError(QWebSocket* self, const QSslError* errorVal);
void QWebSocket_Connect_PeerVerifyError(QWebSocket* self, intptr_t slot);
void QWebSocket_SslErrors(QWebSocket* self, const libqt_list /* of QSslError* */ errors);
void QWebSocket_Connect_SslErrors(QWebSocket* self, intptr_t slot);
void QWebSocket_PreSharedKeyAuthenticationRequired(QWebSocket* self, QSslPreSharedKeyAuthenticator* authenticator);
void QWebSocket_Connect_PreSharedKeyAuthenticationRequired(QWebSocket* self, intptr_t slot);
void QWebSocket_AlertSent(QWebSocket* self, int level, int typeVal, const libqt_string description);
void QWebSocket_Connect_AlertSent(QWebSocket* self, intptr_t slot);
void QWebSocket_AlertReceived(QWebSocket* self, int level, int typeVal, const libqt_string description);
void QWebSocket_Connect_AlertReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_HandshakeInterruptedOnError(QWebSocket* self, const QSslError* errorVal);
void QWebSocket_Connect_HandshakeInterruptedOnError(QWebSocket* self, intptr_t slot);
void QWebSocket_Close1(QWebSocket* self, int closeCode);
void QWebSocket_Close2(QWebSocket* self, int closeCode, const libqt_string reason);
void QWebSocket_Ping1(QWebSocket* self, const libqt_string payload);
void QWebSocket_OnMetaObject(const QWebSocket* self, intptr_t slot);
QMetaObject* QWebSocket_QBaseMetaObject(const QWebSocket* self);
void QWebSocket_OnMetacast(QWebSocket* self, intptr_t slot);
void* QWebSocket_QBaseMetacast(QWebSocket* self, const char* param1);
void QWebSocket_OnMetacall(QWebSocket* self, intptr_t slot);
int QWebSocket_QBaseMetacall(QWebSocket* self, int param1, int param2, void** param3);
bool QWebSocket_Event(QWebSocket* self, QEvent* event);
void QWebSocket_OnEvent(QWebSocket* self, intptr_t slot);
bool QWebSocket_QBaseEvent(QWebSocket* self, QEvent* event);
bool QWebSocket_EventFilter(QWebSocket* self, QObject* watched, QEvent* event);
void QWebSocket_OnEventFilter(QWebSocket* self, intptr_t slot);
bool QWebSocket_QBaseEventFilter(QWebSocket* self, QObject* watched, QEvent* event);
void QWebSocket_TimerEvent(QWebSocket* self, QTimerEvent* event);
void QWebSocket_OnTimerEvent(QWebSocket* self, intptr_t slot);
void QWebSocket_QBaseTimerEvent(QWebSocket* self, QTimerEvent* event);
void QWebSocket_ChildEvent(QWebSocket* self, QChildEvent* event);
void QWebSocket_OnChildEvent(QWebSocket* self, intptr_t slot);
void QWebSocket_QBaseChildEvent(QWebSocket* self, QChildEvent* event);
void QWebSocket_CustomEvent(QWebSocket* self, QEvent* event);
void QWebSocket_OnCustomEvent(QWebSocket* self, intptr_t slot);
void QWebSocket_QBaseCustomEvent(QWebSocket* self, QEvent* event);
void QWebSocket_ConnectNotify(QWebSocket* self, const QMetaMethod* signal);
void QWebSocket_OnConnectNotify(QWebSocket* self, intptr_t slot);
void QWebSocket_QBaseConnectNotify(QWebSocket* self, const QMetaMethod* signal);
void QWebSocket_DisconnectNotify(QWebSocket* self, const QMetaMethod* signal);
void QWebSocket_OnDisconnectNotify(QWebSocket* self, intptr_t slot);
void QWebSocket_QBaseDisconnectNotify(QWebSocket* self, const QMetaMethod* signal);
QObject* QWebSocket_Sender(const QWebSocket* self);
void QWebSocket_OnSender(const QWebSocket* self, intptr_t slot);
QObject* QWebSocket_QBaseSender(const QWebSocket* self);
int QWebSocket_SenderSignalIndex(const QWebSocket* self);
void QWebSocket_OnSenderSignalIndex(const QWebSocket* self, intptr_t slot);
int QWebSocket_QBaseSenderSignalIndex(const QWebSocket* self);
int QWebSocket_Receivers(const QWebSocket* self, const char* signal);
void QWebSocket_OnReceivers(const QWebSocket* self, intptr_t slot);
int QWebSocket_QBaseReceivers(const QWebSocket* self, const char* signal);
bool QWebSocket_IsSignalConnected(const QWebSocket* self, const QMetaMethod* signal);
void QWebSocket_OnIsSignalConnected(const QWebSocket* self, intptr_t slot);
bool QWebSocket_QBaseIsSignalConnected(const QWebSocket* self, const QMetaMethod* signal);
void QWebSocket_Delete(QWebSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
