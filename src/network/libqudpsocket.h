#pragma once
#ifndef SRC_NETWORKC_LIBQUDPSOCKET_H
#define SRC_NETWORKC_LIBQUDPSOCKET_H

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
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QNetworkInterface QNetworkInterface;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUdpSocket QUdpSocket;
typedef struct QVariant QVariant;
#endif

QUdpSocket* QUdpSocket_new();
QUdpSocket* QUdpSocket_new2(QObject* parent);
QMetaObject* QUdpSocket_MetaObject(const QUdpSocket* self);
void* QUdpSocket_Metacast(QUdpSocket* self, const char* param1);
int QUdpSocket_Metacall(QUdpSocket* self, int param1, int param2, void** param3);
void QUdpSocket_OnMetacall(QUdpSocket* self, intptr_t slot);
int QUdpSocket_QBaseMetacall(QUdpSocket* self, int param1, int param2, void** param3);
libqt_string QUdpSocket_Tr(const char* s);
bool QUdpSocket_Bind(QUdpSocket* self, int addr);
bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress);
bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface);
bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress);
bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface);
QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self);
void QUdpSocket_SetMulticastInterface(QUdpSocket* self, const QNetworkInterface* iface);
bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self);
long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self);
QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self);
long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_WriteDatagram(QUdpSocket* self, const QNetworkDatagram* datagram);
long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, const QHostAddress* host, uint16_t port);
long long QUdpSocket_WriteDatagram3(QUdpSocket* self, const libqt_string datagram, const QHostAddress* host, uint16_t port);
libqt_string QUdpSocket_Tr2(const char* s, const char* c);
libqt_string QUdpSocket_Tr3(const char* s, const char* c, int n);
bool QUdpSocket_Bind2(QUdpSocket* self, int addr, uint16_t port);
bool QUdpSocket_Bind3(QUdpSocket* self, int addr, uint16_t port, int mode);
QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize);
long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host);
long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port);
void QUdpSocket_Resume(QUdpSocket* self);
void QUdpSocket_OnResume(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseResume(QUdpSocket* self);
void QUdpSocket_ConnectToHost(QUdpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QUdpSocket_OnConnectToHost(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseConnectToHost(QUdpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QUdpSocket_DisconnectFromHost(QUdpSocket* self);
void QUdpSocket_OnDisconnectFromHost(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseDisconnectFromHost(QUdpSocket* self);
long long QUdpSocket_BytesAvailable(const QUdpSocket* self);
void QUdpSocket_OnBytesAvailable(const QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseBytesAvailable(const QUdpSocket* self);
long long QUdpSocket_BytesToWrite(const QUdpSocket* self);
void QUdpSocket_OnBytesToWrite(const QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseBytesToWrite(const QUdpSocket* self);
void QUdpSocket_SetReadBufferSize(QUdpSocket* self, long long size);
void QUdpSocket_OnSetReadBufferSize(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetReadBufferSize(QUdpSocket* self, long long size);
intptr_t QUdpSocket_SocketDescriptor(const QUdpSocket* self);
void QUdpSocket_OnSocketDescriptor(const QUdpSocket* self, intptr_t slot);
intptr_t QUdpSocket_QBaseSocketDescriptor(const QUdpSocket* self);
bool QUdpSocket_SetSocketDescriptor(QUdpSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QUdpSocket_OnSetSocketDescriptor(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseSetSocketDescriptor(QUdpSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QUdpSocket_SetSocketOption(QUdpSocket* self, int option, const QVariant* value);
void QUdpSocket_OnSetSocketOption(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetSocketOption(QUdpSocket* self, int option, const QVariant* value);
QVariant* QUdpSocket_SocketOption(QUdpSocket* self, int option);
void QUdpSocket_OnSocketOption(QUdpSocket* self, intptr_t slot);
QVariant* QUdpSocket_QBaseSocketOption(QUdpSocket* self, int option);
void QUdpSocket_Close(QUdpSocket* self);
void QUdpSocket_OnClose(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseClose(QUdpSocket* self);
bool QUdpSocket_IsSequential(const QUdpSocket* self);
void QUdpSocket_OnIsSequential(const QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseIsSequential(const QUdpSocket* self);
bool QUdpSocket_WaitForConnected(QUdpSocket* self, int msecs);
void QUdpSocket_OnWaitForConnected(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseWaitForConnected(QUdpSocket* self, int msecs);
bool QUdpSocket_WaitForReadyRead(QUdpSocket* self, int msecs);
void QUdpSocket_OnWaitForReadyRead(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseWaitForReadyRead(QUdpSocket* self, int msecs);
bool QUdpSocket_WaitForBytesWritten(QUdpSocket* self, int msecs);
void QUdpSocket_OnWaitForBytesWritten(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseWaitForBytesWritten(QUdpSocket* self, int msecs);
bool QUdpSocket_WaitForDisconnected(QUdpSocket* self, int msecs);
void QUdpSocket_OnWaitForDisconnected(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseWaitForDisconnected(QUdpSocket* self, int msecs);
long long QUdpSocket_ReadData(QUdpSocket* self, char* data, long long maxlen);
void QUdpSocket_OnReadData(QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseReadData(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_ReadLineData(QUdpSocket* self, char* data, long long maxlen);
void QUdpSocket_OnReadLineData(QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseReadLineData(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_SkipData(QUdpSocket* self, long long maxSize);
void QUdpSocket_OnSkipData(QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseSkipData(QUdpSocket* self, long long maxSize);
long long QUdpSocket_WriteData(QUdpSocket* self, const char* data, long long lenVal);
void QUdpSocket_OnWriteData(QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseWriteData(QUdpSocket* self, const char* data, long long lenVal);
bool QUdpSocket_Open(QUdpSocket* self, int mode);
void QUdpSocket_OnOpen(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseOpen(QUdpSocket* self, int mode);
long long QUdpSocket_Pos(const QUdpSocket* self);
void QUdpSocket_OnPos(const QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBasePos(const QUdpSocket* self);
long long QUdpSocket_Size(const QUdpSocket* self);
void QUdpSocket_OnSize(const QUdpSocket* self, intptr_t slot);
long long QUdpSocket_QBaseSize(const QUdpSocket* self);
bool QUdpSocket_Seek(QUdpSocket* self, long long pos);
void QUdpSocket_OnSeek(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseSeek(QUdpSocket* self, long long pos);
bool QUdpSocket_AtEnd(const QUdpSocket* self);
void QUdpSocket_OnAtEnd(const QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseAtEnd(const QUdpSocket* self);
bool QUdpSocket_Reset(QUdpSocket* self);
void QUdpSocket_OnReset(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseReset(QUdpSocket* self);
bool QUdpSocket_CanReadLine(const QUdpSocket* self);
void QUdpSocket_OnCanReadLine(const QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseCanReadLine(const QUdpSocket* self);
bool QUdpSocket_Event(QUdpSocket* self, QEvent* event);
void QUdpSocket_OnEvent(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseEvent(QUdpSocket* self, QEvent* event);
bool QUdpSocket_EventFilter(QUdpSocket* self, QObject* watched, QEvent* event);
void QUdpSocket_OnEventFilter(QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseEventFilter(QUdpSocket* self, QObject* watched, QEvent* event);
void QUdpSocket_TimerEvent(QUdpSocket* self, QTimerEvent* event);
void QUdpSocket_OnTimerEvent(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseTimerEvent(QUdpSocket* self, QTimerEvent* event);
void QUdpSocket_ChildEvent(QUdpSocket* self, QChildEvent* event);
void QUdpSocket_OnChildEvent(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseChildEvent(QUdpSocket* self, QChildEvent* event);
void QUdpSocket_CustomEvent(QUdpSocket* self, QEvent* event);
void QUdpSocket_OnCustomEvent(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseCustomEvent(QUdpSocket* self, QEvent* event);
void QUdpSocket_ConnectNotify(QUdpSocket* self, const QMetaMethod* signal);
void QUdpSocket_OnConnectNotify(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseConnectNotify(QUdpSocket* self, const QMetaMethod* signal);
void QUdpSocket_DisconnectNotify(QUdpSocket* self, const QMetaMethod* signal);
void QUdpSocket_OnDisconnectNotify(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseDisconnectNotify(QUdpSocket* self, const QMetaMethod* signal);
void QUdpSocket_SetSocketState(QUdpSocket* self, int state);
void QUdpSocket_OnSetSocketState(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetSocketState(QUdpSocket* self, int state);
void QUdpSocket_SetSocketError(QUdpSocket* self, int socketError);
void QUdpSocket_OnSetSocketError(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetSocketError(QUdpSocket* self, int socketError);
void QUdpSocket_SetLocalPort(QUdpSocket* self, uint16_t port);
void QUdpSocket_OnSetLocalPort(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetLocalPort(QUdpSocket* self, uint16_t port);
void QUdpSocket_SetLocalAddress(QUdpSocket* self, const QHostAddress* address);
void QUdpSocket_OnSetLocalAddress(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetLocalAddress(QUdpSocket* self, const QHostAddress* address);
void QUdpSocket_SetPeerPort(QUdpSocket* self, uint16_t port);
void QUdpSocket_OnSetPeerPort(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetPeerPort(QUdpSocket* self, uint16_t port);
void QUdpSocket_SetPeerAddress(QUdpSocket* self, const QHostAddress* address);
void QUdpSocket_OnSetPeerAddress(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetPeerAddress(QUdpSocket* self, const QHostAddress* address);
void QUdpSocket_SetPeerName(QUdpSocket* self, const libqt_string name);
void QUdpSocket_OnSetPeerName(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetPeerName(QUdpSocket* self, const libqt_string name);
void QUdpSocket_SetOpenMode(QUdpSocket* self, int openMode);
void QUdpSocket_OnSetOpenMode(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetOpenMode(QUdpSocket* self, int openMode);
void QUdpSocket_SetErrorString(QUdpSocket* self, const libqt_string errorString);
void QUdpSocket_OnSetErrorString(QUdpSocket* self, intptr_t slot);
void QUdpSocket_QBaseSetErrorString(QUdpSocket* self, const libqt_string errorString);
QObject* QUdpSocket_Sender(const QUdpSocket* self);
void QUdpSocket_OnSender(const QUdpSocket* self, intptr_t slot);
QObject* QUdpSocket_QBaseSender(const QUdpSocket* self);
int QUdpSocket_SenderSignalIndex(const QUdpSocket* self);
void QUdpSocket_OnSenderSignalIndex(const QUdpSocket* self, intptr_t slot);
int QUdpSocket_QBaseSenderSignalIndex(const QUdpSocket* self);
int QUdpSocket_Receivers(const QUdpSocket* self, const char* signal);
void QUdpSocket_OnReceivers(const QUdpSocket* self, intptr_t slot);
int QUdpSocket_QBaseReceivers(const QUdpSocket* self, const char* signal);
bool QUdpSocket_IsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal);
void QUdpSocket_OnIsSignalConnected(const QUdpSocket* self, intptr_t slot);
bool QUdpSocket_QBaseIsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal);
void QUdpSocket_Delete(QUdpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
