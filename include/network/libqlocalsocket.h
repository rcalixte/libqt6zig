#pragma once
#ifndef SRC_NETWORKC_LIBQLOCALSOCKET_H
#define SRC_NETWORKC_LIBQLOCALSOCKET_H

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
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QLocalSocket::LocalSocketError LocalSocketError; // C++ enum
typedef QLocalSocket::LocalSocketState LocalSocketState; // C++ enum
typedef QLocalSocket::SocketOption SocketOption;         // C++ enum
typedef QLocalSocket::SocketOptions SocketOptions;       // C++ QFlags
#else
typedef int LocalSocketError; // C ABI enum
typedef int LocalSocketState; // C ABI enum
typedef int SocketOption;     // C ABI enum
typedef int SocketOptions;    // C ABI QFlags
#endif

QLocalSocket* QLocalSocket_new();
QLocalSocket* QLocalSocket_new2(QObject* parent);
QMetaObject* QLocalSocket_MetaObject(const QLocalSocket* self);
void* QLocalSocket_Metacast(QLocalSocket* self, const char* param1);
int QLocalSocket_Metacall(QLocalSocket* self, int param1, int param2, void** param3);
void QLocalSocket_OnMetacall(QLocalSocket* self, intptr_t slot);
int QLocalSocket_QBaseMetacall(QLocalSocket* self, int param1, int param2, void** param3);
libqt_string QLocalSocket_Tr(const char* s);
void QLocalSocket_ConnectToServer(QLocalSocket* self);
void QLocalSocket_ConnectToServerWithName(QLocalSocket* self, libqt_string name);
void QLocalSocket_DisconnectFromServer(QLocalSocket* self);
void QLocalSocket_SetServerName(QLocalSocket* self, libqt_string name);
libqt_string QLocalSocket_ServerName(const QLocalSocket* self);
libqt_string QLocalSocket_FullServerName(const QLocalSocket* self);
void QLocalSocket_Abort(QLocalSocket* self);
bool QLocalSocket_IsSequential(const QLocalSocket* self);
void QLocalSocket_OnIsSequential(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseIsSequential(const QLocalSocket* self);
long long QLocalSocket_BytesAvailable(const QLocalSocket* self);
void QLocalSocket_OnBytesAvailable(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseBytesAvailable(const QLocalSocket* self);
long long QLocalSocket_BytesToWrite(const QLocalSocket* self);
void QLocalSocket_OnBytesToWrite(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseBytesToWrite(const QLocalSocket* self);
bool QLocalSocket_CanReadLine(const QLocalSocket* self);
void QLocalSocket_OnCanReadLine(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseCanReadLine(const QLocalSocket* self);
bool QLocalSocket_Open(QLocalSocket* self, int openMode);
void QLocalSocket_OnOpen(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseOpen(QLocalSocket* self, int openMode);
void QLocalSocket_Close(QLocalSocket* self);
void QLocalSocket_OnClose(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseClose(QLocalSocket* self);
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
void QLocalSocket_OnWaitForBytesWritten(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseWaitForBytesWritten(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForConnected(QLocalSocket* self);
bool QLocalSocket_WaitForDisconnected(QLocalSocket* self);
bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_OnWaitForReadyRead(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseWaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_Connected(QLocalSocket* self);
void QLocalSocket_Connect_Connected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_Disconnected(QLocalSocket* self);
void QLocalSocket_Connect_Disconnected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError);
void QLocalSocket_Connect_ErrorOccurred(QLocalSocket* self, intptr_t slot);
void QLocalSocket_StateChanged(QLocalSocket* self, int socketState);
void QLocalSocket_Connect_StateChanged(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2);
void QLocalSocket_OnReadData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseReadData(QLocalSocket* self, char* param1, long long param2);
long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize);
void QLocalSocket_OnReadLineData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseReadLineData(QLocalSocket* self, char* data, long long maxSize);
long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize);
void QLocalSocket_OnSkipData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseSkipData(QLocalSocket* self, long long maxSize);
long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2);
void QLocalSocket_OnWriteData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseWriteData(QLocalSocket* self, const char* param1, long long param2);
libqt_string QLocalSocket_Tr2(const char* s, const char* c);
libqt_string QLocalSocket_Tr3(const char* s, const char* c, int n);
void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode);
void QLocalSocket_ConnectToServer2(QLocalSocket* self, libqt_string name, int openMode);
bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState);
bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode);
bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs);
long long QLocalSocket_Pos(const QLocalSocket* self);
void QLocalSocket_OnPos(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBasePos(const QLocalSocket* self);
long long QLocalSocket_Size(const QLocalSocket* self);
void QLocalSocket_OnSize(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseSize(const QLocalSocket* self);
bool QLocalSocket_Seek(QLocalSocket* self, long long pos);
void QLocalSocket_OnSeek(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseSeek(QLocalSocket* self, long long pos);
bool QLocalSocket_AtEnd(const QLocalSocket* self);
void QLocalSocket_OnAtEnd(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseAtEnd(const QLocalSocket* self);
bool QLocalSocket_Reset(QLocalSocket* self);
void QLocalSocket_OnReset(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseReset(QLocalSocket* self);
bool QLocalSocket_Event(QLocalSocket* self, QEvent* event);
void QLocalSocket_OnEvent(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseEvent(QLocalSocket* self, QEvent* event);
bool QLocalSocket_EventFilter(QLocalSocket* self, QObject* watched, QEvent* event);
void QLocalSocket_OnEventFilter(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseEventFilter(QLocalSocket* self, QObject* watched, QEvent* event);
void QLocalSocket_TimerEvent(QLocalSocket* self, QTimerEvent* event);
void QLocalSocket_OnTimerEvent(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseTimerEvent(QLocalSocket* self, QTimerEvent* event);
void QLocalSocket_ChildEvent(QLocalSocket* self, QChildEvent* event);
void QLocalSocket_OnChildEvent(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseChildEvent(QLocalSocket* self, QChildEvent* event);
void QLocalSocket_CustomEvent(QLocalSocket* self, QEvent* event);
void QLocalSocket_OnCustomEvent(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseCustomEvent(QLocalSocket* self, QEvent* event);
void QLocalSocket_ConnectNotify(QLocalSocket* self, QMetaMethod* signal);
void QLocalSocket_OnConnectNotify(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseConnectNotify(QLocalSocket* self, QMetaMethod* signal);
void QLocalSocket_DisconnectNotify(QLocalSocket* self, QMetaMethod* signal);
void QLocalSocket_OnDisconnectNotify(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseDisconnectNotify(QLocalSocket* self, QMetaMethod* signal);
void QLocalSocket_SetOpenMode(QLocalSocket* self, int openMode);
void QLocalSocket_OnSetOpenMode(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseSetOpenMode(QLocalSocket* self, int openMode);
void QLocalSocket_SetErrorString(QLocalSocket* self, libqt_string errorString);
void QLocalSocket_OnSetErrorString(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseSetErrorString(QLocalSocket* self, libqt_string errorString);
QObject* QLocalSocket_Sender(const QLocalSocket* self);
void QLocalSocket_OnSender(const QLocalSocket* self, intptr_t slot);
QObject* QLocalSocket_QBaseSender(const QLocalSocket* self);
int QLocalSocket_SenderSignalIndex(const QLocalSocket* self);
void QLocalSocket_OnSenderSignalIndex(const QLocalSocket* self, intptr_t slot);
int QLocalSocket_QBaseSenderSignalIndex(const QLocalSocket* self);
int QLocalSocket_Receivers(const QLocalSocket* self, const char* signal);
void QLocalSocket_OnReceivers(const QLocalSocket* self, intptr_t slot);
int QLocalSocket_QBaseReceivers(const QLocalSocket* self, const char* signal);
bool QLocalSocket_IsSignalConnected(const QLocalSocket* self, QMetaMethod* signal);
void QLocalSocket_OnIsSignalConnected(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseIsSignalConnected(const QLocalSocket* self, QMetaMethod* signal);
void QLocalSocket_Delete(QLocalSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
