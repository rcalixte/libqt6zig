#pragma once
#ifndef SRC_NETWORKC_LIBQTCPSOCKET_H
#define SRC_NETWORKC_LIBQTCPSOCKET_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QTcpSocket* QTcpSocket_new();
QTcpSocket* QTcpSocket_new2(QObject* parent);
QMetaObject* QTcpSocket_MetaObject(const QTcpSocket* self);
void* QTcpSocket_Metacast(QTcpSocket* self, const char* param1);
int QTcpSocket_Metacall(QTcpSocket* self, int param1, int param2, void** param3);
bool QTcpSocket_Bind(QTcpSocket* self, int addr);
bool QTcpSocket_Bind2(QTcpSocket* self, int addr, uint16_t port);
bool QTcpSocket_Bind3(QTcpSocket* self, int addr, uint16_t port, int mode);
void QTcpSocket_OnMetaObject(const QTcpSocket* self, intptr_t slot);
QMetaObject* QTcpSocket_SuperMetaObject(const QTcpSocket* self);
void QTcpSocket_OnMetacast(QTcpSocket* self, intptr_t slot);
void* QTcpSocket_SuperMetacast(QTcpSocket* self, const char* param1);
void QTcpSocket_OnMetacall(QTcpSocket* self, intptr_t slot);
int QTcpSocket_SuperMetacall(QTcpSocket* self, int param1, int param2, void** param3);
void QTcpSocket_Resume(QTcpSocket* self);
void QTcpSocket_OnResume(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperResume(QTcpSocket* self);
void QTcpSocket_ConnectToHost(QTcpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QTcpSocket_OnConnectToHost(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperConnectToHost(QTcpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QTcpSocket_DisconnectFromHost(QTcpSocket* self);
void QTcpSocket_OnDisconnectFromHost(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperDisconnectFromHost(QTcpSocket* self);
long long QTcpSocket_BytesAvailable(const QTcpSocket* self);
void QTcpSocket_OnBytesAvailable(const QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperBytesAvailable(const QTcpSocket* self);
long long QTcpSocket_BytesToWrite(const QTcpSocket* self);
void QTcpSocket_OnBytesToWrite(const QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperBytesToWrite(const QTcpSocket* self);
void QTcpSocket_SetReadBufferSize(QTcpSocket* self, long long size);
void QTcpSocket_OnSetReadBufferSize(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetReadBufferSize(QTcpSocket* self, long long size);
intptr_t QTcpSocket_SocketDescriptor(const QTcpSocket* self);
void QTcpSocket_OnSocketDescriptor(const QTcpSocket* self, intptr_t slot);
intptr_t QTcpSocket_SuperSocketDescriptor(const QTcpSocket* self);
bool QTcpSocket_SetSocketDescriptor(QTcpSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QTcpSocket_OnSetSocketDescriptor(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperSetSocketDescriptor(QTcpSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QTcpSocket_SetSocketOption(QTcpSocket* self, int option, const QVariant* value);
void QTcpSocket_OnSetSocketOption(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetSocketOption(QTcpSocket* self, int option, const QVariant* value);
QVariant* QTcpSocket_SocketOption(QTcpSocket* self, int option);
void QTcpSocket_OnSocketOption(QTcpSocket* self, intptr_t slot);
QVariant* QTcpSocket_SuperSocketOption(QTcpSocket* self, int option);
void QTcpSocket_Close(QTcpSocket* self);
void QTcpSocket_OnClose(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperClose(QTcpSocket* self);
bool QTcpSocket_IsSequential(const QTcpSocket* self);
void QTcpSocket_OnIsSequential(const QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperIsSequential(const QTcpSocket* self);
bool QTcpSocket_WaitForConnected(QTcpSocket* self, int msecs);
void QTcpSocket_OnWaitForConnected(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperWaitForConnected(QTcpSocket* self, int msecs);
bool QTcpSocket_WaitForReadyRead(QTcpSocket* self, int msecs);
void QTcpSocket_OnWaitForReadyRead(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperWaitForReadyRead(QTcpSocket* self, int msecs);
bool QTcpSocket_WaitForBytesWritten(QTcpSocket* self, int msecs);
void QTcpSocket_OnWaitForBytesWritten(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperWaitForBytesWritten(QTcpSocket* self, int msecs);
bool QTcpSocket_WaitForDisconnected(QTcpSocket* self, int msecs);
void QTcpSocket_OnWaitForDisconnected(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperWaitForDisconnected(QTcpSocket* self, int msecs);
long long QTcpSocket_ReadData(QTcpSocket* self, char* data, long long maxlen);
void QTcpSocket_OnReadData(QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperReadData(QTcpSocket* self, char* data, long long maxlen);
long long QTcpSocket_ReadLineData(QTcpSocket* self, char* data, long long maxlen);
void QTcpSocket_OnReadLineData(QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperReadLineData(QTcpSocket* self, char* data, long long maxlen);
long long QTcpSocket_SkipData(QTcpSocket* self, long long maxSize);
void QTcpSocket_OnSkipData(QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperSkipData(QTcpSocket* self, long long maxSize);
long long QTcpSocket_WriteData(QTcpSocket* self, const char* data, long long lenVal);
void QTcpSocket_OnWriteData(QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperWriteData(QTcpSocket* self, const char* data, long long lenVal);
bool QTcpSocket_Open(QTcpSocket* self, int mode);
void QTcpSocket_OnOpen(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperOpen(QTcpSocket* self, int mode);
long long QTcpSocket_Pos(const QTcpSocket* self);
void QTcpSocket_OnPos(const QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperPos(const QTcpSocket* self);
long long QTcpSocket_Size(const QTcpSocket* self);
void QTcpSocket_OnSize(const QTcpSocket* self, intptr_t slot);
long long QTcpSocket_SuperSize(const QTcpSocket* self);
bool QTcpSocket_Seek(QTcpSocket* self, long long pos);
void QTcpSocket_OnSeek(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperSeek(QTcpSocket* self, long long pos);
bool QTcpSocket_AtEnd(const QTcpSocket* self);
void QTcpSocket_OnAtEnd(const QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperAtEnd(const QTcpSocket* self);
bool QTcpSocket_Reset(QTcpSocket* self);
void QTcpSocket_OnReset(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperReset(QTcpSocket* self);
bool QTcpSocket_CanReadLine(const QTcpSocket* self);
void QTcpSocket_OnCanReadLine(const QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperCanReadLine(const QTcpSocket* self);
bool QTcpSocket_Event(QTcpSocket* self, QEvent* event);
void QTcpSocket_OnEvent(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperEvent(QTcpSocket* self, QEvent* event);
bool QTcpSocket_EventFilter(QTcpSocket* self, QObject* watched, QEvent* event);
void QTcpSocket_OnEventFilter(QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperEventFilter(QTcpSocket* self, QObject* watched, QEvent* event);
void QTcpSocket_TimerEvent(QTcpSocket* self, QTimerEvent* event);
void QTcpSocket_OnTimerEvent(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperTimerEvent(QTcpSocket* self, QTimerEvent* event);
void QTcpSocket_ChildEvent(QTcpSocket* self, QChildEvent* event);
void QTcpSocket_OnChildEvent(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperChildEvent(QTcpSocket* self, QChildEvent* event);
void QTcpSocket_CustomEvent(QTcpSocket* self, QEvent* event);
void QTcpSocket_OnCustomEvent(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperCustomEvent(QTcpSocket* self, QEvent* event);
void QTcpSocket_ConnectNotify(QTcpSocket* self, const QMetaMethod* signal);
void QTcpSocket_OnConnectNotify(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperConnectNotify(QTcpSocket* self, const QMetaMethod* signal);
void QTcpSocket_DisconnectNotify(QTcpSocket* self, const QMetaMethod* signal);
void QTcpSocket_OnDisconnectNotify(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperDisconnectNotify(QTcpSocket* self, const QMetaMethod* signal);
void QTcpSocket_SetSocketState(QTcpSocket* self, int state);
void QTcpSocket_OnSetSocketState(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetSocketState(QTcpSocket* self, int state);
void QTcpSocket_SetSocketError(QTcpSocket* self, int socketError);
void QTcpSocket_OnSetSocketError(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetSocketError(QTcpSocket* self, int socketError);
void QTcpSocket_SetLocalPort(QTcpSocket* self, uint16_t port);
void QTcpSocket_OnSetLocalPort(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetLocalPort(QTcpSocket* self, uint16_t port);
void QTcpSocket_SetLocalAddress(QTcpSocket* self, const QHostAddress* address);
void QTcpSocket_OnSetLocalAddress(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetLocalAddress(QTcpSocket* self, const QHostAddress* address);
void QTcpSocket_SetPeerPort(QTcpSocket* self, uint16_t port);
void QTcpSocket_OnSetPeerPort(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetPeerPort(QTcpSocket* self, uint16_t port);
void QTcpSocket_SetPeerAddress(QTcpSocket* self, const QHostAddress* address);
void QTcpSocket_OnSetPeerAddress(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetPeerAddress(QTcpSocket* self, const QHostAddress* address);
void QTcpSocket_SetPeerName(QTcpSocket* self, const libqt_string name);
void QTcpSocket_OnSetPeerName(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetPeerName(QTcpSocket* self, const libqt_string name);
void QTcpSocket_SetOpenMode(QTcpSocket* self, int openMode);
void QTcpSocket_OnSetOpenMode(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetOpenMode(QTcpSocket* self, int openMode);
void QTcpSocket_SetErrorString(QTcpSocket* self, const libqt_string errorString);
void QTcpSocket_OnSetErrorString(QTcpSocket* self, intptr_t slot);
void QTcpSocket_SuperSetErrorString(QTcpSocket* self, const libqt_string errorString);
QObject* QTcpSocket_Sender(const QTcpSocket* self);
void QTcpSocket_OnSender(const QTcpSocket* self, intptr_t slot);
QObject* QTcpSocket_SuperSender(const QTcpSocket* self);
int QTcpSocket_SenderSignalIndex(const QTcpSocket* self);
void QTcpSocket_OnSenderSignalIndex(const QTcpSocket* self, intptr_t slot);
int QTcpSocket_SuperSenderSignalIndex(const QTcpSocket* self);
int QTcpSocket_Receivers(const QTcpSocket* self, const char* signal);
void QTcpSocket_OnReceivers(const QTcpSocket* self, intptr_t slot);
int QTcpSocket_SuperReceivers(const QTcpSocket* self, const char* signal);
bool QTcpSocket_IsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal);
void QTcpSocket_OnIsSignalConnected(const QTcpSocket* self, intptr_t slot);
bool QTcpSocket_SuperIsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal);
void QTcpSocket_Delete(QTcpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
