#pragma once
#ifndef SRC_NETWORKC_LIBQSCTPSOCKET_H
#define SRC_NETWORKC_LIBQSCTPSOCKET_H

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
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QObject QObject;
typedef struct QSctpSocket QSctpSocket;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSctpSocket* QSctpSocket_new();
QSctpSocket* QSctpSocket_new2(QObject* parent);
QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self);
void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1);
int QSctpSocket_Metacall(QSctpSocket* self, int param1, int param2, void** param3);
void QSctpSocket_Close(QSctpSocket* self);
void QSctpSocket_DisconnectFromHost(QSctpSocket* self);
void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count);
int QSctpSocket_MaximumChannelCount(const QSctpSocket* self);
bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self);
QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self);
bool QSctpSocket_WriteDatagram(QSctpSocket* self, const QNetworkDatagram* datagram);
long long QSctpSocket_ReadData(QSctpSocket* self, char* data, long long maxlen);
long long QSctpSocket_ReadLineData(QSctpSocket* self, char* data, long long maxlen);
void QSctpSocket_OnMetaObject(const QSctpSocket* self, intptr_t slot);
QMetaObject* QSctpSocket_SuperMetaObject(const QSctpSocket* self);
void QSctpSocket_OnMetacast(QSctpSocket* self, intptr_t slot);
void* QSctpSocket_SuperMetacast(QSctpSocket* self, const char* param1);
void QSctpSocket_OnMetacall(QSctpSocket* self, intptr_t slot);
int QSctpSocket_SuperMetacall(QSctpSocket* self, int param1, int param2, void** param3);
void QSctpSocket_OnClose(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperClose(QSctpSocket* self);
void QSctpSocket_OnDisconnectFromHost(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperDisconnectFromHost(QSctpSocket* self);
void QSctpSocket_OnReadData(QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperReadData(QSctpSocket* self, char* data, long long maxlen);
void QSctpSocket_OnReadLineData(QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperReadLineData(QSctpSocket* self, char* data, long long maxlen);
void QSctpSocket_Resume(QSctpSocket* self);
void QSctpSocket_OnResume(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperResume(QSctpSocket* self);
bool QSctpSocket_Bind(QSctpSocket* self, const QHostAddress* address, uint16_t port, int mode);
void QSctpSocket_OnBind(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperBind(QSctpSocket* self, const QHostAddress* address, uint16_t port, int mode);
void QSctpSocket_ConnectToHost(QSctpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QSctpSocket_OnConnectToHost(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperConnectToHost(QSctpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
long long QSctpSocket_BytesAvailable(const QSctpSocket* self);
void QSctpSocket_OnBytesAvailable(const QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperBytesAvailable(const QSctpSocket* self);
long long QSctpSocket_BytesToWrite(const QSctpSocket* self);
void QSctpSocket_OnBytesToWrite(const QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperBytesToWrite(const QSctpSocket* self);
void QSctpSocket_SetReadBufferSize(QSctpSocket* self, long long size);
void QSctpSocket_OnSetReadBufferSize(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetReadBufferSize(QSctpSocket* self, long long size);
intptr_t QSctpSocket_SocketDescriptor(const QSctpSocket* self);
void QSctpSocket_OnSocketDescriptor(const QSctpSocket* self, intptr_t slot);
intptr_t QSctpSocket_SuperSocketDescriptor(const QSctpSocket* self);
bool QSctpSocket_SetSocketDescriptor(QSctpSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSctpSocket_OnSetSocketDescriptor(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperSetSocketDescriptor(QSctpSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSctpSocket_SetSocketOption(QSctpSocket* self, int option, const QVariant* value);
void QSctpSocket_OnSetSocketOption(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetSocketOption(QSctpSocket* self, int option, const QVariant* value);
QVariant* QSctpSocket_SocketOption(QSctpSocket* self, int option);
void QSctpSocket_OnSocketOption(QSctpSocket* self, intptr_t slot);
QVariant* QSctpSocket_SuperSocketOption(QSctpSocket* self, int option);
bool QSctpSocket_IsSequential(const QSctpSocket* self);
void QSctpSocket_OnIsSequential(const QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperIsSequential(const QSctpSocket* self);
bool QSctpSocket_WaitForConnected(QSctpSocket* self, int msecs);
void QSctpSocket_OnWaitForConnected(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperWaitForConnected(QSctpSocket* self, int msecs);
bool QSctpSocket_WaitForReadyRead(QSctpSocket* self, int msecs);
void QSctpSocket_OnWaitForReadyRead(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperWaitForReadyRead(QSctpSocket* self, int msecs);
bool QSctpSocket_WaitForBytesWritten(QSctpSocket* self, int msecs);
void QSctpSocket_OnWaitForBytesWritten(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperWaitForBytesWritten(QSctpSocket* self, int msecs);
bool QSctpSocket_WaitForDisconnected(QSctpSocket* self, int msecs);
void QSctpSocket_OnWaitForDisconnected(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperWaitForDisconnected(QSctpSocket* self, int msecs);
long long QSctpSocket_SkipData(QSctpSocket* self, long long maxSize);
void QSctpSocket_OnSkipData(QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperSkipData(QSctpSocket* self, long long maxSize);
long long QSctpSocket_WriteData(QSctpSocket* self, const char* data, long long lenVal);
void QSctpSocket_OnWriteData(QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperWriteData(QSctpSocket* self, const char* data, long long lenVal);
bool QSctpSocket_Open(QSctpSocket* self, int mode);
void QSctpSocket_OnOpen(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperOpen(QSctpSocket* self, int mode);
long long QSctpSocket_Pos(const QSctpSocket* self);
void QSctpSocket_OnPos(const QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperPos(const QSctpSocket* self);
long long QSctpSocket_Size(const QSctpSocket* self);
void QSctpSocket_OnSize(const QSctpSocket* self, intptr_t slot);
long long QSctpSocket_SuperSize(const QSctpSocket* self);
bool QSctpSocket_Seek(QSctpSocket* self, long long pos);
void QSctpSocket_OnSeek(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperSeek(QSctpSocket* self, long long pos);
bool QSctpSocket_AtEnd(const QSctpSocket* self);
void QSctpSocket_OnAtEnd(const QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperAtEnd(const QSctpSocket* self);
bool QSctpSocket_Reset(QSctpSocket* self);
void QSctpSocket_OnReset(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperReset(QSctpSocket* self);
bool QSctpSocket_CanReadLine(const QSctpSocket* self);
void QSctpSocket_OnCanReadLine(const QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperCanReadLine(const QSctpSocket* self);
bool QSctpSocket_Event(QSctpSocket* self, QEvent* event);
void QSctpSocket_OnEvent(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperEvent(QSctpSocket* self, QEvent* event);
bool QSctpSocket_EventFilter(QSctpSocket* self, QObject* watched, QEvent* event);
void QSctpSocket_OnEventFilter(QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperEventFilter(QSctpSocket* self, QObject* watched, QEvent* event);
void QSctpSocket_TimerEvent(QSctpSocket* self, QTimerEvent* event);
void QSctpSocket_OnTimerEvent(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperTimerEvent(QSctpSocket* self, QTimerEvent* event);
void QSctpSocket_ChildEvent(QSctpSocket* self, QChildEvent* event);
void QSctpSocket_OnChildEvent(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperChildEvent(QSctpSocket* self, QChildEvent* event);
void QSctpSocket_CustomEvent(QSctpSocket* self, QEvent* event);
void QSctpSocket_OnCustomEvent(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperCustomEvent(QSctpSocket* self, QEvent* event);
void QSctpSocket_ConnectNotify(QSctpSocket* self, const QMetaMethod* signal);
void QSctpSocket_OnConnectNotify(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperConnectNotify(QSctpSocket* self, const QMetaMethod* signal);
void QSctpSocket_DisconnectNotify(QSctpSocket* self, const QMetaMethod* signal);
void QSctpSocket_OnDisconnectNotify(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperDisconnectNotify(QSctpSocket* self, const QMetaMethod* signal);
void QSctpSocket_SetSocketState(QSctpSocket* self, int state);
void QSctpSocket_OnSetSocketState(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetSocketState(QSctpSocket* self, int state);
void QSctpSocket_SetSocketError(QSctpSocket* self, int socketError);
void QSctpSocket_OnSetSocketError(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetSocketError(QSctpSocket* self, int socketError);
void QSctpSocket_SetLocalPort(QSctpSocket* self, uint16_t port);
void QSctpSocket_OnSetLocalPort(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetLocalPort(QSctpSocket* self, uint16_t port);
void QSctpSocket_SetLocalAddress(QSctpSocket* self, const QHostAddress* address);
void QSctpSocket_OnSetLocalAddress(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetLocalAddress(QSctpSocket* self, const QHostAddress* address);
void QSctpSocket_SetPeerPort(QSctpSocket* self, uint16_t port);
void QSctpSocket_OnSetPeerPort(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetPeerPort(QSctpSocket* self, uint16_t port);
void QSctpSocket_SetPeerAddress(QSctpSocket* self, const QHostAddress* address);
void QSctpSocket_OnSetPeerAddress(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetPeerAddress(QSctpSocket* self, const QHostAddress* address);
void QSctpSocket_SetPeerName(QSctpSocket* self, const libqt_string name);
void QSctpSocket_OnSetPeerName(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetPeerName(QSctpSocket* self, const libqt_string name);
void QSctpSocket_SetOpenMode(QSctpSocket* self, int openMode);
void QSctpSocket_OnSetOpenMode(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetOpenMode(QSctpSocket* self, int openMode);
void QSctpSocket_SetErrorString(QSctpSocket* self, const libqt_string errorString);
void QSctpSocket_OnSetErrorString(QSctpSocket* self, intptr_t slot);
void QSctpSocket_SuperSetErrorString(QSctpSocket* self, const libqt_string errorString);
QObject* QSctpSocket_Sender(const QSctpSocket* self);
void QSctpSocket_OnSender(const QSctpSocket* self, intptr_t slot);
QObject* QSctpSocket_SuperSender(const QSctpSocket* self);
int QSctpSocket_SenderSignalIndex(const QSctpSocket* self);
void QSctpSocket_OnSenderSignalIndex(const QSctpSocket* self, intptr_t slot);
int QSctpSocket_SuperSenderSignalIndex(const QSctpSocket* self);
int QSctpSocket_Receivers(const QSctpSocket* self, const char* signal);
void QSctpSocket_OnReceivers(const QSctpSocket* self, intptr_t slot);
int QSctpSocket_SuperReceivers(const QSctpSocket* self, const char* signal);
bool QSctpSocket_IsSignalConnected(const QSctpSocket* self, const QMetaMethod* signal);
void QSctpSocket_OnIsSignalConnected(const QSctpSocket* self, intptr_t slot);
bool QSctpSocket_SuperIsSignalConnected(const QSctpSocket* self, const QMetaMethod* signal);
void QSctpSocket_Delete(QSctpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
