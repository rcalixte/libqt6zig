#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHSOCKET_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBluetoothAddress QBluetoothAddress;
typedef struct QBluetoothServiceInfo QBluetoothServiceInfo;
typedef struct QBluetoothSocket QBluetoothSocket;
typedef struct QBluetoothUuid QBluetoothUuid;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBluetoothSocket* QBluetoothSocket_new(int socketType);
QBluetoothSocket* QBluetoothSocket_new2();
QBluetoothSocket* QBluetoothSocket_new3(int socketType, QObject* parent);
QBluetoothSocket* QBluetoothSocket_new4(QObject* parent);
QMetaObject* QBluetoothSocket_MetaObject(const QBluetoothSocket* self);
void* QBluetoothSocket_Metacast(QBluetoothSocket* self, const char* param1);
int QBluetoothSocket_Metacall(QBluetoothSocket* self, int param1, int param2, void** param3);
void QBluetoothSocket_Abort(QBluetoothSocket* self);
void QBluetoothSocket_Close(QBluetoothSocket* self);
bool QBluetoothSocket_IsSequential(const QBluetoothSocket* self);
long long QBluetoothSocket_BytesAvailable(const QBluetoothSocket* self);
long long QBluetoothSocket_BytesToWrite(const QBluetoothSocket* self);
bool QBluetoothSocket_CanReadLine(const QBluetoothSocket* self);
void QBluetoothSocket_ConnectToService(QBluetoothSocket* self, const QBluetoothServiceInfo* service);
void QBluetoothSocket_ConnectToService2(QBluetoothSocket* self, const QBluetoothAddress* address, const QBluetoothUuid* uuid);
void QBluetoothSocket_ConnectToService3(QBluetoothSocket* self, const QBluetoothAddress* address, uint16_t port);
void QBluetoothSocket_ConnectToService4(QBluetoothSocket* self, const QBluetoothAddress* address, int uuid);
void QBluetoothSocket_DisconnectFromService(QBluetoothSocket* self);
libqt_string QBluetoothSocket_LocalName(const QBluetoothSocket* self);
QBluetoothAddress* QBluetoothSocket_LocalAddress(const QBluetoothSocket* self);
uint16_t QBluetoothSocket_LocalPort(const QBluetoothSocket* self);
libqt_string QBluetoothSocket_PeerName(const QBluetoothSocket* self);
QBluetoothAddress* QBluetoothSocket_PeerAddress(const QBluetoothSocket* self);
uint16_t QBluetoothSocket_PeerPort(const QBluetoothSocket* self);
bool QBluetoothSocket_SetSocketDescriptor(QBluetoothSocket* self, int socketDescriptor, int socketType);
int QBluetoothSocket_SocketDescriptor(const QBluetoothSocket* self);
int QBluetoothSocket_SocketType(const QBluetoothSocket* self);
int QBluetoothSocket_State(const QBluetoothSocket* self);
int QBluetoothSocket_Error(const QBluetoothSocket* self);
libqt_string QBluetoothSocket_ErrorString(const QBluetoothSocket* self);
void QBluetoothSocket_SetPreferredSecurityFlags(QBluetoothSocket* self, int flags);
int QBluetoothSocket_PreferredSecurityFlags(const QBluetoothSocket* self);
void QBluetoothSocket_Connected(QBluetoothSocket* self);
void QBluetoothSocket_Connect_Connected(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_Disconnected(QBluetoothSocket* self);
void QBluetoothSocket_Connect_Disconnected(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_ErrorOccurred(QBluetoothSocket* self, int errorVal);
void QBluetoothSocket_Connect_ErrorOccurred(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_StateChanged(QBluetoothSocket* self, int state);
void QBluetoothSocket_Connect_StateChanged(QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_ReadData(QBluetoothSocket* self, char* data, long long maxSize);
long long QBluetoothSocket_WriteData(QBluetoothSocket* self, const char* data, long long maxSize);
void QBluetoothSocket_ConnectToService22(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode);
void QBluetoothSocket_ConnectToService32(QBluetoothSocket* self, const QBluetoothAddress* address, const QBluetoothUuid* uuid, int openMode);
void QBluetoothSocket_ConnectToService33(QBluetoothSocket* self, const QBluetoothAddress* address, uint16_t port, int openMode);
void QBluetoothSocket_ConnectToService34(QBluetoothSocket* self, const QBluetoothAddress* address, int uuid, int mode);
bool QBluetoothSocket_SetSocketDescriptor3(QBluetoothSocket* self, int socketDescriptor, int socketType, int socketState);
bool QBluetoothSocket_SetSocketDescriptor4(QBluetoothSocket* self, int socketDescriptor, int socketType, int socketState, int openMode);
void QBluetoothSocket_OnMetaObject(const QBluetoothSocket* self, intptr_t slot);
QMetaObject* QBluetoothSocket_SuperMetaObject(const QBluetoothSocket* self);
void QBluetoothSocket_OnMetacast(QBluetoothSocket* self, intptr_t slot);
void* QBluetoothSocket_SuperMetacast(QBluetoothSocket* self, const char* param1);
void QBluetoothSocket_OnMetacall(QBluetoothSocket* self, intptr_t slot);
int QBluetoothSocket_SuperMetacall(QBluetoothSocket* self, int param1, int param2, void** param3);
void QBluetoothSocket_OnClose(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperClose(QBluetoothSocket* self);
void QBluetoothSocket_OnIsSequential(const QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperIsSequential(const QBluetoothSocket* self);
void QBluetoothSocket_OnBytesAvailable(const QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperBytesAvailable(const QBluetoothSocket* self);
void QBluetoothSocket_OnBytesToWrite(const QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperBytesToWrite(const QBluetoothSocket* self);
void QBluetoothSocket_OnCanReadLine(const QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperCanReadLine(const QBluetoothSocket* self);
void QBluetoothSocket_OnReadData(QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperReadData(QBluetoothSocket* self, char* data, long long maxSize);
void QBluetoothSocket_OnWriteData(QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperWriteData(QBluetoothSocket* self, const char* data, long long maxSize);
bool QBluetoothSocket_Open(QBluetoothSocket* self, int mode);
void QBluetoothSocket_OnOpen(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperOpen(QBluetoothSocket* self, int mode);
long long QBluetoothSocket_Pos(const QBluetoothSocket* self);
void QBluetoothSocket_OnPos(const QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperPos(const QBluetoothSocket* self);
long long QBluetoothSocket_Size(const QBluetoothSocket* self);
void QBluetoothSocket_OnSize(const QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperSize(const QBluetoothSocket* self);
bool QBluetoothSocket_Seek(QBluetoothSocket* self, long long pos);
void QBluetoothSocket_OnSeek(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperSeek(QBluetoothSocket* self, long long pos);
bool QBluetoothSocket_AtEnd(const QBluetoothSocket* self);
void QBluetoothSocket_OnAtEnd(const QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperAtEnd(const QBluetoothSocket* self);
bool QBluetoothSocket_Reset(QBluetoothSocket* self);
void QBluetoothSocket_OnReset(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperReset(QBluetoothSocket* self);
bool QBluetoothSocket_WaitForReadyRead(QBluetoothSocket* self, int msecs);
void QBluetoothSocket_OnWaitForReadyRead(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperWaitForReadyRead(QBluetoothSocket* self, int msecs);
bool QBluetoothSocket_WaitForBytesWritten(QBluetoothSocket* self, int msecs);
void QBluetoothSocket_OnWaitForBytesWritten(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperWaitForBytesWritten(QBluetoothSocket* self, int msecs);
long long QBluetoothSocket_ReadLineData(QBluetoothSocket* self, char* data, long long maxlen);
void QBluetoothSocket_OnReadLineData(QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperReadLineData(QBluetoothSocket* self, char* data, long long maxlen);
long long QBluetoothSocket_SkipData(QBluetoothSocket* self, long long maxSize);
void QBluetoothSocket_OnSkipData(QBluetoothSocket* self, intptr_t slot);
long long QBluetoothSocket_SuperSkipData(QBluetoothSocket* self, long long maxSize);
bool QBluetoothSocket_Event(QBluetoothSocket* self, QEvent* event);
void QBluetoothSocket_OnEvent(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperEvent(QBluetoothSocket* self, QEvent* event);
bool QBluetoothSocket_EventFilter(QBluetoothSocket* self, QObject* watched, QEvent* event);
void QBluetoothSocket_OnEventFilter(QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperEventFilter(QBluetoothSocket* self, QObject* watched, QEvent* event);
void QBluetoothSocket_TimerEvent(QBluetoothSocket* self, QTimerEvent* event);
void QBluetoothSocket_OnTimerEvent(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperTimerEvent(QBluetoothSocket* self, QTimerEvent* event);
void QBluetoothSocket_ChildEvent(QBluetoothSocket* self, QChildEvent* event);
void QBluetoothSocket_OnChildEvent(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperChildEvent(QBluetoothSocket* self, QChildEvent* event);
void QBluetoothSocket_CustomEvent(QBluetoothSocket* self, QEvent* event);
void QBluetoothSocket_OnCustomEvent(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperCustomEvent(QBluetoothSocket* self, QEvent* event);
void QBluetoothSocket_ConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
void QBluetoothSocket_OnConnectNotify(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
void QBluetoothSocket_DisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
void QBluetoothSocket_OnDisconnectNotify(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperDisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
void QBluetoothSocket_SetSocketState(QBluetoothSocket* self, int state);
void QBluetoothSocket_OnSetSocketState(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperSetSocketState(QBluetoothSocket* self, int state);
void QBluetoothSocket_SetSocketError(QBluetoothSocket* self, int errorVal);
void QBluetoothSocket_OnSetSocketError(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperSetSocketError(QBluetoothSocket* self, int errorVal);
void QBluetoothSocket_DoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode);
void QBluetoothSocket_OnDoDeviceDiscovery(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperDoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode);
void QBluetoothSocket_SetOpenMode(QBluetoothSocket* self, int openMode);
void QBluetoothSocket_OnSetOpenMode(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperSetOpenMode(QBluetoothSocket* self, int openMode);
void QBluetoothSocket_SetErrorString(QBluetoothSocket* self, const libqt_string errorString);
void QBluetoothSocket_OnSetErrorString(QBluetoothSocket* self, intptr_t slot);
void QBluetoothSocket_SuperSetErrorString(QBluetoothSocket* self, const libqt_string errorString);
QObject* QBluetoothSocket_Sender(const QBluetoothSocket* self);
void QBluetoothSocket_OnSender(const QBluetoothSocket* self, intptr_t slot);
QObject* QBluetoothSocket_SuperSender(const QBluetoothSocket* self);
int QBluetoothSocket_SenderSignalIndex(const QBluetoothSocket* self);
void QBluetoothSocket_OnSenderSignalIndex(const QBluetoothSocket* self, intptr_t slot);
int QBluetoothSocket_SuperSenderSignalIndex(const QBluetoothSocket* self);
int QBluetoothSocket_Receivers(const QBluetoothSocket* self, const char* signal);
void QBluetoothSocket_OnReceivers(const QBluetoothSocket* self, intptr_t slot);
int QBluetoothSocket_SuperReceivers(const QBluetoothSocket* self, const char* signal);
bool QBluetoothSocket_IsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal);
void QBluetoothSocket_OnIsSignalConnected(const QBluetoothSocket* self, intptr_t slot);
bool QBluetoothSocket_SuperIsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal);
void QBluetoothSocket_Delete(QBluetoothSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
