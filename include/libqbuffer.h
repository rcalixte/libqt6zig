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
void QBuffer_OnMetaObject(const QBuffer* self, intptr_t slot);
QMetaObject* QBuffer_SuperMetaObject(const QBuffer* self);
void QBuffer_OnMetacast(QBuffer* self, intptr_t slot);
void* QBuffer_SuperMetacast(QBuffer* self, const char* param1);
void QBuffer_OnMetacall(QBuffer* self, intptr_t slot);
int QBuffer_SuperMetacall(QBuffer* self, int param1, int param2, void** param3);
void QBuffer_OnOpen(QBuffer* self, intptr_t slot);
bool QBuffer_SuperOpen(QBuffer* self, int openMode);
void QBuffer_OnClose(QBuffer* self, intptr_t slot);
void QBuffer_SuperClose(QBuffer* self);
void QBuffer_OnSize(const QBuffer* self, intptr_t slot);
long long QBuffer_SuperSize(const QBuffer* self);
void QBuffer_OnPos(const QBuffer* self, intptr_t slot);
long long QBuffer_SuperPos(const QBuffer* self);
void QBuffer_OnSeek(QBuffer* self, intptr_t slot);
bool QBuffer_SuperSeek(QBuffer* self, long long off);
void QBuffer_OnAtEnd(const QBuffer* self, intptr_t slot);
bool QBuffer_SuperAtEnd(const QBuffer* self);
void QBuffer_OnCanReadLine(const QBuffer* self, intptr_t slot);
bool QBuffer_SuperCanReadLine(const QBuffer* self);
void QBuffer_OnConnectNotify(QBuffer* self, intptr_t slot);
void QBuffer_SuperConnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_OnDisconnectNotify(QBuffer* self, intptr_t slot);
void QBuffer_SuperDisconnectNotify(QBuffer* self, const QMetaMethod* param1);
void QBuffer_OnReadData(QBuffer* self, intptr_t slot);
long long QBuffer_SuperReadData(QBuffer* self, char* data, long long maxlen);
void QBuffer_OnWriteData(QBuffer* self, intptr_t slot);
long long QBuffer_SuperWriteData(QBuffer* self, const char* data, long long lenVal);
bool QBuffer_IsSequential(const QBuffer* self);
void QBuffer_OnIsSequential(const QBuffer* self, intptr_t slot);
bool QBuffer_SuperIsSequential(const QBuffer* self);
bool QBuffer_Reset(QBuffer* self);
void QBuffer_OnReset(QBuffer* self, intptr_t slot);
bool QBuffer_SuperReset(QBuffer* self);
long long QBuffer_BytesAvailable(const QBuffer* self);
void QBuffer_OnBytesAvailable(const QBuffer* self, intptr_t slot);
long long QBuffer_SuperBytesAvailable(const QBuffer* self);
long long QBuffer_BytesToWrite(const QBuffer* self);
void QBuffer_OnBytesToWrite(const QBuffer* self, intptr_t slot);
long long QBuffer_SuperBytesToWrite(const QBuffer* self);
bool QBuffer_WaitForReadyRead(QBuffer* self, int msecs);
void QBuffer_OnWaitForReadyRead(QBuffer* self, intptr_t slot);
bool QBuffer_SuperWaitForReadyRead(QBuffer* self, int msecs);
bool QBuffer_WaitForBytesWritten(QBuffer* self, int msecs);
void QBuffer_OnWaitForBytesWritten(QBuffer* self, intptr_t slot);
bool QBuffer_SuperWaitForBytesWritten(QBuffer* self, int msecs);
long long QBuffer_ReadLineData(QBuffer* self, char* data, long long maxlen);
void QBuffer_OnReadLineData(QBuffer* self, intptr_t slot);
long long QBuffer_SuperReadLineData(QBuffer* self, char* data, long long maxlen);
long long QBuffer_SkipData(QBuffer* self, long long maxSize);
void QBuffer_OnSkipData(QBuffer* self, intptr_t slot);
long long QBuffer_SuperSkipData(QBuffer* self, long long maxSize);
bool QBuffer_Event(QBuffer* self, QEvent* event);
void QBuffer_OnEvent(QBuffer* self, intptr_t slot);
bool QBuffer_SuperEvent(QBuffer* self, QEvent* event);
bool QBuffer_EventFilter(QBuffer* self, QObject* watched, QEvent* event);
void QBuffer_OnEventFilter(QBuffer* self, intptr_t slot);
bool QBuffer_SuperEventFilter(QBuffer* self, QObject* watched, QEvent* event);
void QBuffer_TimerEvent(QBuffer* self, QTimerEvent* event);
void QBuffer_OnTimerEvent(QBuffer* self, intptr_t slot);
void QBuffer_SuperTimerEvent(QBuffer* self, QTimerEvent* event);
void QBuffer_ChildEvent(QBuffer* self, QChildEvent* event);
void QBuffer_OnChildEvent(QBuffer* self, intptr_t slot);
void QBuffer_SuperChildEvent(QBuffer* self, QChildEvent* event);
void QBuffer_CustomEvent(QBuffer* self, QEvent* event);
void QBuffer_OnCustomEvent(QBuffer* self, intptr_t slot);
void QBuffer_SuperCustomEvent(QBuffer* self, QEvent* event);
void QBuffer_SetOpenMode(QBuffer* self, int openMode);
void QBuffer_OnSetOpenMode(QBuffer* self, intptr_t slot);
void QBuffer_SuperSetOpenMode(QBuffer* self, int openMode);
void QBuffer_SetErrorString(QBuffer* self, const libqt_string errorString);
void QBuffer_OnSetErrorString(QBuffer* self, intptr_t slot);
void QBuffer_SuperSetErrorString(QBuffer* self, const libqt_string errorString);
QObject* QBuffer_Sender(const QBuffer* self);
void QBuffer_OnSender(const QBuffer* self, intptr_t slot);
QObject* QBuffer_SuperSender(const QBuffer* self);
int QBuffer_SenderSignalIndex(const QBuffer* self);
void QBuffer_OnSenderSignalIndex(const QBuffer* self, intptr_t slot);
int QBuffer_SuperSenderSignalIndex(const QBuffer* self);
int QBuffer_Receivers(const QBuffer* self, const char* signal);
void QBuffer_OnReceivers(const QBuffer* self, intptr_t slot);
int QBuffer_SuperReceivers(const QBuffer* self, const char* signal);
bool QBuffer_IsSignalConnected(const QBuffer* self, const QMetaMethod* signal);
void QBuffer_OnIsSignalConnected(const QBuffer* self, intptr_t slot);
bool QBuffer_SuperIsSignalConnected(const QBuffer* self, const QMetaMethod* signal);
void QBuffer_Delete(QBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
