#pragma once
#ifndef SRC_NETWORKC_LIBQABSTRACTSOCKET_H
#define SRC_NETWORKC_LIBQABSTRACTSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent);
QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self);
void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1);
int QAbstractSocket_Metacall(QAbstractSocket* self, int param1, int param2, void** param3);
void QAbstractSocket_Resume(QAbstractSocket* self);
int QAbstractSocket_PauseMode(const QAbstractSocket* self);
void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode);
bool QAbstractSocket_Bind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_Bind2(QAbstractSocket* self);
void QAbstractSocket_ConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, const QHostAddress* address, uint16_t port);
void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self);
bool QAbstractSocket_IsValid(const QAbstractSocket* self);
long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self);
long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self);
uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self);
uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self);
libqt_string QAbstractSocket_PeerName(const QAbstractSocket* self);
long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self);
void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_Abort(QAbstractSocket* self);
intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self);
bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, const QVariant* value);
QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option);
int QAbstractSocket_SocketType(const QAbstractSocket* self);
int QAbstractSocket_State(const QAbstractSocket* self);
int QAbstractSocket_Error(const QAbstractSocket* self);
void QAbstractSocket_Close(QAbstractSocket* self);
bool QAbstractSocket_IsSequential(const QAbstractSocket* self);
bool QAbstractSocket_Flush(QAbstractSocket* self);
bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_SetProxy(QAbstractSocket* self, const QNetworkProxy* networkProxy);
QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self);
libqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self);
void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, const libqt_string tag);
void QAbstractSocket_HostFound(QAbstractSocket* self);
void QAbstractSocket_Connect_HostFound(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_Connected(QAbstractSocket* self);
void QAbstractSocket_Connect_Connected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_Disconnected(QAbstractSocket* self);
void QAbstractSocket_Connect_Disconnected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1);
void QAbstractSocket_Connect_StateChanged(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1);
void QAbstractSocket_Connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, const QNetworkProxy* proxy, QAuthenticator* authenticator);
void QAbstractSocket_Connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize);
long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal);
bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port);
bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode);
void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode);
void QAbstractSocket_OnMetaObject(const QAbstractSocket* self, intptr_t slot);
QMetaObject* QAbstractSocket_SuperMetaObject(const QAbstractSocket* self);
void QAbstractSocket_OnMetacast(QAbstractSocket* self, intptr_t slot);
void* QAbstractSocket_SuperMetacast(QAbstractSocket* self, const char* param1);
void QAbstractSocket_OnMetacall(QAbstractSocket* self, intptr_t slot);
int QAbstractSocket_SuperMetacall(QAbstractSocket* self, int param1, int param2, void** param3);
void QAbstractSocket_OnResume(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperResume(QAbstractSocket* self);
void QAbstractSocket_OnBind(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperBind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode);
void QAbstractSocket_OnConnectToHost(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QAbstractSocket_OnDisconnectFromHost(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperDisconnectFromHost(QAbstractSocket* self);
void QAbstractSocket_OnBytesAvailable(const QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperBytesAvailable(const QAbstractSocket* self);
void QAbstractSocket_OnBytesToWrite(const QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperBytesToWrite(const QAbstractSocket* self);
void QAbstractSocket_OnSetReadBufferSize(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_OnSocketDescriptor(const QAbstractSocket* self, intptr_t slot);
intptr_t QAbstractSocket_SuperSocketDescriptor(const QAbstractSocket* self);
void QAbstractSocket_OnSetSocketDescriptor(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperSetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QAbstractSocket_OnSetSocketOption(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetSocketOption(QAbstractSocket* self, int option, const QVariant* value);
void QAbstractSocket_OnSocketOption(QAbstractSocket* self, intptr_t slot);
QVariant* QAbstractSocket_SuperSocketOption(QAbstractSocket* self, int option);
void QAbstractSocket_OnClose(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperClose(QAbstractSocket* self);
void QAbstractSocket_OnIsSequential(const QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperIsSequential(const QAbstractSocket* self);
void QAbstractSocket_OnWaitForConnected(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperWaitForConnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnWaitForReadyRead(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperWaitForReadyRead(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnWaitForBytesWritten(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperWaitForBytesWritten(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnWaitForDisconnected(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperWaitForDisconnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnReadData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperReadData(QAbstractSocket* self, char* data, long long maxlen);
void QAbstractSocket_OnReadLineData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperReadLineData(QAbstractSocket* self, char* data, long long maxlen);
void QAbstractSocket_OnSkipData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperSkipData(QAbstractSocket* self, long long maxSize);
void QAbstractSocket_OnWriteData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperWriteData(QAbstractSocket* self, const char* data, long long lenVal);
bool QAbstractSocket_Open(QAbstractSocket* self, int mode);
void QAbstractSocket_OnOpen(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperOpen(QAbstractSocket* self, int mode);
long long QAbstractSocket_Pos(const QAbstractSocket* self);
void QAbstractSocket_OnPos(const QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperPos(const QAbstractSocket* self);
long long QAbstractSocket_Size(const QAbstractSocket* self);
void QAbstractSocket_OnSize(const QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_SuperSize(const QAbstractSocket* self);
bool QAbstractSocket_Seek(QAbstractSocket* self, long long pos);
void QAbstractSocket_OnSeek(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperSeek(QAbstractSocket* self, long long pos);
bool QAbstractSocket_AtEnd(const QAbstractSocket* self);
void QAbstractSocket_OnAtEnd(const QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperAtEnd(const QAbstractSocket* self);
bool QAbstractSocket_Reset(QAbstractSocket* self);
void QAbstractSocket_OnReset(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperReset(QAbstractSocket* self);
bool QAbstractSocket_CanReadLine(const QAbstractSocket* self);
void QAbstractSocket_OnCanReadLine(const QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperCanReadLine(const QAbstractSocket* self);
bool QAbstractSocket_Event(QAbstractSocket* self, QEvent* event);
void QAbstractSocket_OnEvent(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperEvent(QAbstractSocket* self, QEvent* event);
bool QAbstractSocket_EventFilter(QAbstractSocket* self, QObject* watched, QEvent* event);
void QAbstractSocket_OnEventFilter(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperEventFilter(QAbstractSocket* self, QObject* watched, QEvent* event);
void QAbstractSocket_TimerEvent(QAbstractSocket* self, QTimerEvent* event);
void QAbstractSocket_OnTimerEvent(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperTimerEvent(QAbstractSocket* self, QTimerEvent* event);
void QAbstractSocket_ChildEvent(QAbstractSocket* self, QChildEvent* event);
void QAbstractSocket_OnChildEvent(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperChildEvent(QAbstractSocket* self, QChildEvent* event);
void QAbstractSocket_CustomEvent(QAbstractSocket* self, QEvent* event);
void QAbstractSocket_OnCustomEvent(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperCustomEvent(QAbstractSocket* self, QEvent* event);
void QAbstractSocket_ConnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
void QAbstractSocket_OnConnectNotify(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperConnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
void QAbstractSocket_DisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
void QAbstractSocket_OnDisconnectNotify(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperDisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state);
void QAbstractSocket_OnSetSocketState(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetSocketState(QAbstractSocket* self, int state);
void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError);
void QAbstractSocket_OnSetSocketError(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetSocketError(QAbstractSocket* self, int socketError);
void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_OnSetLocalPort(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetLocalPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_OnSetLocalAddress(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_OnSetPeerPort(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetPeerPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_OnSetPeerAddress(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_SetPeerName(QAbstractSocket* self, const libqt_string name);
void QAbstractSocket_OnSetPeerName(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetPeerName(QAbstractSocket* self, const libqt_string name);
void QAbstractSocket_SetOpenMode(QAbstractSocket* self, int openMode);
void QAbstractSocket_OnSetOpenMode(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetOpenMode(QAbstractSocket* self, int openMode);
void QAbstractSocket_SetErrorString(QAbstractSocket* self, const libqt_string errorString);
void QAbstractSocket_OnSetErrorString(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_SuperSetErrorString(QAbstractSocket* self, const libqt_string errorString);
QObject* QAbstractSocket_Sender(const QAbstractSocket* self);
void QAbstractSocket_OnSender(const QAbstractSocket* self, intptr_t slot);
QObject* QAbstractSocket_SuperSender(const QAbstractSocket* self);
int QAbstractSocket_SenderSignalIndex(const QAbstractSocket* self);
void QAbstractSocket_OnSenderSignalIndex(const QAbstractSocket* self, intptr_t slot);
int QAbstractSocket_SuperSenderSignalIndex(const QAbstractSocket* self);
int QAbstractSocket_Receivers(const QAbstractSocket* self, const char* signal);
void QAbstractSocket_OnReceivers(const QAbstractSocket* self, intptr_t slot);
int QAbstractSocket_SuperReceivers(const QAbstractSocket* self, const char* signal);
bool QAbstractSocket_IsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal);
void QAbstractSocket_OnIsSignalConnected(const QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_SuperIsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal);
void QAbstractSocket_Delete(QAbstractSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
