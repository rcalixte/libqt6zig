#pragma once
#ifndef SRCC_LIBQBUFFER_H
#define SRCC_LIBQBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBuffer QBuffer;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBuffer* QBuffer_new();
QBuffer* QBuffer_new2(QObject* parent);
QMetaObject* QBuffer_MetaObject(const QBuffer* self);
void* QBuffer_Metacast(QBuffer* self, const char* param1);
int QBuffer_Metacall(QBuffer* self, int param1, int param2, void** param3);
libqt_string QBuffer_Tr(const char* s);
libqt_string QBuffer_Buffer(QBuffer* self);
libqt_string QBuffer_Buffer2(const QBuffer* self);
void QBuffer_SetData(QBuffer* self, const libqt_string data);
void QBuffer_SetData2(QBuffer* self, const char* data, ptrdiff_t lenVal);
libqt_string QBuffer_Data(const QBuffer* self);
bool QBuffer_Open(QBuffer* self, int openMode);
void QBuffer_Close(QBuffer* self);
long long QBuffer_Size(const QBuffer* self);
long long QBuffer_Pos(const QBuffer* self);
bool QBuffer_Seek(QBuffer* self, long long off);
bool QBuffer_AtEnd(const QBuffer* self);
bool QBuffer_CanReadLine(const QBuffer* self);
void QBuffer_ConnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_DisconnectNotify(QBuffer* self, const QMetaMethod* param1);
long long QBuffer_ReadData(QBuffer* self, char* data, long long maxlen);
long long QBuffer_WriteData(QBuffer* self, const char* data, long long lenVal);
libqt_string QBuffer_Tr2(const char* s, const char* c);
libqt_string QBuffer_Tr3(const char* s, const char* c, int n);
void QBuffer_OnMetacall(QBuffer* self, intptr_t slot);
int QBuffer_QBaseMetacall(QBuffer* self, int param1, int param2, void** param3);
void QBuffer_OnOpen(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseOpen(QBuffer* self, int openMode);
void QBuffer_OnClose(QBuffer* self, intptr_t slot);
void QBuffer_QBaseClose(QBuffer* self);
void QBuffer_OnSize(const QBuffer* self, intptr_t slot);
long long QBuffer_QBaseSize(const QBuffer* self);
void QBuffer_OnPos(const QBuffer* self, intptr_t slot);
long long QBuffer_QBasePos(const QBuffer* self);
void QBuffer_OnSeek(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseSeek(QBuffer* self, long long off);
void QBuffer_OnAtEnd(const QBuffer* self, intptr_t slot);
bool QBuffer_QBaseAtEnd(const QBuffer* self);
void QBuffer_OnCanReadLine(const QBuffer* self, intptr_t slot);
bool QBuffer_QBaseCanReadLine(const QBuffer* self);
void QBuffer_OnConnectNotify(QBuffer* self, intptr_t slot);
void QBuffer_QBaseConnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_OnDisconnectNotify(QBuffer* self, intptr_t slot);
void QBuffer_QBaseDisconnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_OnReadData(QBuffer* self, intptr_t slot);
long long QBuffer_QBaseReadData(QBuffer* self, char* data, long long maxlen);
void QBuffer_OnWriteData(QBuffer* self, intptr_t slot);
long long QBuffer_QBaseWriteData(QBuffer* self, const char* data, long long lenVal);
bool QBuffer_IsSequential(const QBuffer* self);
void QBuffer_OnIsSequential(const QBuffer* self, intptr_t slot);
bool QBuffer_QBaseIsSequential(const QBuffer* self);
bool QBuffer_Reset(QBuffer* self);
void QBuffer_OnReset(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseReset(QBuffer* self);
long long QBuffer_BytesAvailable(const QBuffer* self);
void QBuffer_OnBytesAvailable(const QBuffer* self, intptr_t slot);
long long QBuffer_QBaseBytesAvailable(const QBuffer* self);
long long QBuffer_BytesToWrite(const QBuffer* self);
void QBuffer_OnBytesToWrite(const QBuffer* self, intptr_t slot);
long long QBuffer_QBaseBytesToWrite(const QBuffer* self);
bool QBuffer_WaitForReadyRead(QBuffer* self, int msecs);
void QBuffer_OnWaitForReadyRead(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseWaitForReadyRead(QBuffer* self, int msecs);
bool QBuffer_WaitForBytesWritten(QBuffer* self, int msecs);
void QBuffer_OnWaitForBytesWritten(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseWaitForBytesWritten(QBuffer* self, int msecs);
long long QBuffer_ReadLineData(QBuffer* self, char* data, long long maxlen);
void QBuffer_OnReadLineData(QBuffer* self, intptr_t slot);
long long QBuffer_QBaseReadLineData(QBuffer* self, char* data, long long maxlen);
long long QBuffer_SkipData(QBuffer* self, long long maxSize);
void QBuffer_OnSkipData(QBuffer* self, intptr_t slot);
long long QBuffer_QBaseSkipData(QBuffer* self, long long maxSize);
bool QBuffer_Event(QBuffer* self, QEvent* event);
void QBuffer_OnEvent(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseEvent(QBuffer* self, QEvent* event);
bool QBuffer_EventFilter(QBuffer* self, QObject* watched, QEvent* event);
void QBuffer_OnEventFilter(QBuffer* self, intptr_t slot);
bool QBuffer_QBaseEventFilter(QBuffer* self, QObject* watched, QEvent* event);
void QBuffer_TimerEvent(QBuffer* self, QTimerEvent* event);
void QBuffer_OnTimerEvent(QBuffer* self, intptr_t slot);
void QBuffer_QBaseTimerEvent(QBuffer* self, QTimerEvent* event);
void QBuffer_ChildEvent(QBuffer* self, QChildEvent* event);
void QBuffer_OnChildEvent(QBuffer* self, intptr_t slot);
void QBuffer_QBaseChildEvent(QBuffer* self, QChildEvent* event);
void QBuffer_CustomEvent(QBuffer* self, QEvent* event);
void QBuffer_OnCustomEvent(QBuffer* self, intptr_t slot);
void QBuffer_QBaseCustomEvent(QBuffer* self, QEvent* event);
void QBuffer_SetOpenMode(QBuffer* self, int openMode);
void QBuffer_OnSetOpenMode(QBuffer* self, intptr_t slot);
void QBuffer_QBaseSetOpenMode(QBuffer* self, int openMode);
void QBuffer_SetErrorString(QBuffer* self, const libqt_string errorString);
void QBuffer_OnSetErrorString(QBuffer* self, intptr_t slot);
void QBuffer_QBaseSetErrorString(QBuffer* self, const libqt_string errorString);
QObject* QBuffer_Sender(const QBuffer* self);
void QBuffer_OnSender(const QBuffer* self, intptr_t slot);
QObject* QBuffer_QBaseSender(const QBuffer* self);
int QBuffer_SenderSignalIndex(const QBuffer* self);
void QBuffer_OnSenderSignalIndex(const QBuffer* self, intptr_t slot);
int QBuffer_QBaseSenderSignalIndex(const QBuffer* self);
int QBuffer_Receivers(const QBuffer* self, const char* signal);
void QBuffer_OnReceivers(const QBuffer* self, intptr_t slot);
int QBuffer_QBaseReceivers(const QBuffer* self, const char* signal);
bool QBuffer_IsSignalConnected(const QBuffer* self, const QMetaMethod* signal);
void QBuffer_OnIsSignalConnected(const QBuffer* self, intptr_t slot);
bool QBuffer_QBaseIsSignalConnected(const QBuffer* self, const QMetaMethod* signal);
void QBuffer_Delete(QBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
