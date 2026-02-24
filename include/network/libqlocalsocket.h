#pragma once
#ifndef SRC_NETWORKC_LIBQLOCALSOCKET_H
#define SRC_NETWORKC_LIBQLOCALSOCKET_H

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
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLocalSocket* QLocalSocket_new();
QLocalSocket* QLocalSocket_new2(QObject* parent);
QMetaObject* QLocalSocket_MetaObject(const QLocalSocket* self);
void* QLocalSocket_Metacast(QLocalSocket* self, const char* param1);
int QLocalSocket_Metacall(QLocalSocket* self, int param1, int param2, void** param3);
void QLocalSocket_ConnectToServer(QLocalSocket* self);
void QLocalSocket_ConnectToServer2(QLocalSocket* self, const libqt_string name);
void QLocalSocket_DisconnectFromServer(QLocalSocket* self);
void QLocalSocket_SetServerName(QLocalSocket* self, const libqt_string name);
libqt_string QLocalSocket_ServerName(const QLocalSocket* self);
libqt_string QLocalSocket_FullServerName(const QLocalSocket* self);
void QLocalSocket_Abort(QLocalSocket* self);
bool QLocalSocket_IsSequential(const QLocalSocket* self);
long long QLocalSocket_BytesAvailable(const QLocalSocket* self);
long long QLocalSocket_BytesToWrite(const QLocalSocket* self);
bool QLocalSocket_CanReadLine(const QLocalSocket* self);
bool QLocalSocket_Open(QLocalSocket* self, int openMode);
void QLocalSocket_Close(QLocalSocket* self);
int QLocalSocket_Error(const QLocalSocket* self);
bool QLocalSocket_Flush(QLocalSocket* self);
bool QLocalSocket_IsValid(const QLocalSocket* self);
long long QLocalSocket_ReadBufferSize(const QLocalSocket* self);
void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size);
bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor);
intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self);
void QLocalSocket_SetSocketOptions(QLocalSocket* self, int option);
int QLocalSocket_SocketOptions(const QLocalSocket* self);
int QLocalSocket_State(const QLocalSocket* self);
bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForConnected(QLocalSocket* self);
bool QLocalSocket_WaitForDisconnected(QLocalSocket* self);
bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_Connected(QLocalSocket* self);
void QLocalSocket_Connect_Connected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_Disconnected(QLocalSocket* self);
void QLocalSocket_Connect_Disconnected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError);
void QLocalSocket_Connect_ErrorOccurred(QLocalSocket* self, intptr_t slot);
void QLocalSocket_StateChanged(QLocalSocket* self, int socketState);
void QLocalSocket_Connect_StateChanged(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2);
long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize);
long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize);
long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2);
void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode);
void QLocalSocket_ConnectToServer22(QLocalSocket* self, const libqt_string name, int openMode);
bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState);
bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode);
bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs);
void QLocalSocket_OnMetaObject(const QLocalSocket* self, intptr_t slot);
QMetaObject* QLocalSocket_SuperMetaObject(const QLocalSocket* self);
void QLocalSocket_OnMetacast(QLocalSocket* self, intptr_t slot);
void* QLocalSocket_SuperMetacast(QLocalSocket* self, const char* param1);
void QLocalSocket_OnMetacall(QLocalSocket* self, intptr_t slot);
int QLocalSocket_SuperMetacall(QLocalSocket* self, int param1, int param2, void** param3);
void QLocalSocket_OnIsSequential(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperIsSequential(const QLocalSocket* self);
void QLocalSocket_OnBytesAvailable(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperBytesAvailable(const QLocalSocket* self);
void QLocalSocket_OnBytesToWrite(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperBytesToWrite(const QLocalSocket* self);
void QLocalSocket_OnCanReadLine(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperCanReadLine(const QLocalSocket* self);
void QLocalSocket_OnOpen(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperOpen(QLocalSocket* self, int openMode);
void QLocalSocket_OnClose(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperClose(QLocalSocket* self);
void QLocalSocket_OnWaitForBytesWritten(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperWaitForBytesWritten(QLocalSocket* self, int msecs);
void QLocalSocket_OnWaitForReadyRead(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperWaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_OnReadData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperReadData(QLocalSocket* self, char* param1, long long param2);
void QLocalSocket_OnReadLineData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperReadLineData(QLocalSocket* self, char* data, long long maxSize);
void QLocalSocket_OnSkipData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperSkipData(QLocalSocket* self, long long maxSize);
void QLocalSocket_OnWriteData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperWriteData(QLocalSocket* self, const char* param1, long long param2);
long long QLocalSocket_Pos(const QLocalSocket* self);
void QLocalSocket_OnPos(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperPos(const QLocalSocket* self);
long long QLocalSocket_Size(const QLocalSocket* self);
void QLocalSocket_OnSize(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_SuperSize(const QLocalSocket* self);
bool QLocalSocket_Seek(QLocalSocket* self, long long pos);
void QLocalSocket_OnSeek(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperSeek(QLocalSocket* self, long long pos);
bool QLocalSocket_AtEnd(const QLocalSocket* self);
void QLocalSocket_OnAtEnd(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperAtEnd(const QLocalSocket* self);
bool QLocalSocket_Reset(QLocalSocket* self);
void QLocalSocket_OnReset(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperReset(QLocalSocket* self);
bool QLocalSocket_Event(QLocalSocket* self, QEvent* event);
void QLocalSocket_OnEvent(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperEvent(QLocalSocket* self, QEvent* event);
bool QLocalSocket_EventFilter(QLocalSocket* self, QObject* watched, QEvent* event);
void QLocalSocket_OnEventFilter(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperEventFilter(QLocalSocket* self, QObject* watched, QEvent* event);
void QLocalSocket_TimerEvent(QLocalSocket* self, QTimerEvent* event);
void QLocalSocket_OnTimerEvent(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperTimerEvent(QLocalSocket* self, QTimerEvent* event);
void QLocalSocket_ChildEvent(QLocalSocket* self, QChildEvent* event);
void QLocalSocket_OnChildEvent(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperChildEvent(QLocalSocket* self, QChildEvent* event);
void QLocalSocket_CustomEvent(QLocalSocket* self, QEvent* event);
void QLocalSocket_OnCustomEvent(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperCustomEvent(QLocalSocket* self, QEvent* event);
void QLocalSocket_ConnectNotify(QLocalSocket* self, const QMetaMethod* signal);
void QLocalSocket_OnConnectNotify(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperConnectNotify(QLocalSocket* self, const QMetaMethod* signal);
void QLocalSocket_DisconnectNotify(QLocalSocket* self, const QMetaMethod* signal);
void QLocalSocket_OnDisconnectNotify(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperDisconnectNotify(QLocalSocket* self, const QMetaMethod* signal);
void QLocalSocket_SetOpenMode(QLocalSocket* self, int openMode);
void QLocalSocket_OnSetOpenMode(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperSetOpenMode(QLocalSocket* self, int openMode);
void QLocalSocket_SetErrorString(QLocalSocket* self, const libqt_string errorString);
void QLocalSocket_OnSetErrorString(QLocalSocket* self, intptr_t slot);
void QLocalSocket_SuperSetErrorString(QLocalSocket* self, const libqt_string errorString);
QObject* QLocalSocket_Sender(const QLocalSocket* self);
void QLocalSocket_OnSender(const QLocalSocket* self, intptr_t slot);
QObject* QLocalSocket_SuperSender(const QLocalSocket* self);
int QLocalSocket_SenderSignalIndex(const QLocalSocket* self);
void QLocalSocket_OnSenderSignalIndex(const QLocalSocket* self, intptr_t slot);
int QLocalSocket_SuperSenderSignalIndex(const QLocalSocket* self);
int QLocalSocket_Receivers(const QLocalSocket* self, const char* signal);
void QLocalSocket_OnReceivers(const QLocalSocket* self, intptr_t slot);
int QLocalSocket_SuperReceivers(const QLocalSocket* self, const char* signal);
bool QLocalSocket_IsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal);
void QLocalSocket_OnIsSignalConnected(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_SuperIsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal);
void QLocalSocket_Delete(QLocalSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
