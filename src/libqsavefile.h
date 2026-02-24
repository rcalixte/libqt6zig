#pragma once
#ifndef SRCC_LIBQSAVEFILE_H
#define SRCC_LIBQSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSaveFile QSaveFile;
typedef struct QTimerEvent QTimerEvent;
#endif

QSaveFile* QSaveFile_new(const libqt_string name);
QSaveFile* QSaveFile_new2();
QSaveFile* QSaveFile_new3(const libqt_string name, QObject* parent);
QSaveFile* QSaveFile_new4(QObject* parent);
QMetaObject* QSaveFile_MetaObject(const QSaveFile* self);
void* QSaveFile_Metacast(QSaveFile* self, const char* param1);
int QSaveFile_Metacall(QSaveFile* self, int param1, int param2, void** param3);
libqt_string QSaveFile_FileName(const QSaveFile* self);
void QSaveFile_SetFileName(QSaveFile* self, const libqt_string name);
bool QSaveFile_Open(QSaveFile* self, int flags);
bool QSaveFile_Commit(QSaveFile* self);
void QSaveFile_CancelWriting(QSaveFile* self);
void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled);
bool QSaveFile_DirectWriteFallback(const QSaveFile* self);
long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long lenVal);
void QSaveFile_OnMetaObject(const QSaveFile* self, intptr_t slot);
QMetaObject* QSaveFile_SuperMetaObject(const QSaveFile* self);
void QSaveFile_OnMetacast(QSaveFile* self, intptr_t slot);
void* QSaveFile_SuperMetacast(QSaveFile* self, const char* param1);
void QSaveFile_OnMetacall(QSaveFile* self, intptr_t slot);
int QSaveFile_SuperMetacall(QSaveFile* self, int param1, int param2, void** param3);
void QSaveFile_OnFileName(const QSaveFile* self, intptr_t slot);
libqt_string QSaveFile_SuperFileName(const QSaveFile* self);
void QSaveFile_OnOpen(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperOpen(QSaveFile* self, int flags);
void QSaveFile_OnWriteData(QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperWriteData(QSaveFile* self, const char* data, long long lenVal);
bool QSaveFile_IsSequential(const QSaveFile* self);
void QSaveFile_OnIsSequential(const QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperIsSequential(const QSaveFile* self);
long long QSaveFile_Pos(const QSaveFile* self);
void QSaveFile_OnPos(const QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperPos(const QSaveFile* self);
bool QSaveFile_Seek(QSaveFile* self, long long offset);
void QSaveFile_OnSeek(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperSeek(QSaveFile* self, long long offset);
bool QSaveFile_AtEnd(const QSaveFile* self);
void QSaveFile_OnAtEnd(const QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperAtEnd(const QSaveFile* self);
long long QSaveFile_Size(const QSaveFile* self);
void QSaveFile_OnSize(const QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperSize(const QSaveFile* self);
bool QSaveFile_Resize(QSaveFile* self, long long sz);
void QSaveFile_OnResize(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperResize(QSaveFile* self, long long sz);
int QSaveFile_Permissions(const QSaveFile* self);
void QSaveFile_OnPermissions(const QSaveFile* self, intptr_t slot);
int QSaveFile_SuperPermissions(const QSaveFile* self);
bool QSaveFile_SetPermissions(QSaveFile* self, int permissionSpec);
void QSaveFile_OnSetPermissions(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperSetPermissions(QSaveFile* self, int permissionSpec);
long long QSaveFile_ReadData(QSaveFile* self, char* data, long long maxlen);
void QSaveFile_OnReadData(QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperReadData(QSaveFile* self, char* data, long long maxlen);
long long QSaveFile_ReadLineData(QSaveFile* self, char* data, long long maxlen);
void QSaveFile_OnReadLineData(QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperReadLineData(QSaveFile* self, char* data, long long maxlen);
bool QSaveFile_Reset(QSaveFile* self);
void QSaveFile_OnReset(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperReset(QSaveFile* self);
long long QSaveFile_BytesAvailable(const QSaveFile* self);
void QSaveFile_OnBytesAvailable(const QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperBytesAvailable(const QSaveFile* self);
long long QSaveFile_BytesToWrite(const QSaveFile* self);
void QSaveFile_OnBytesToWrite(const QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperBytesToWrite(const QSaveFile* self);
bool QSaveFile_CanReadLine(const QSaveFile* self);
void QSaveFile_OnCanReadLine(const QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperCanReadLine(const QSaveFile* self);
bool QSaveFile_WaitForReadyRead(QSaveFile* self, int msecs);
void QSaveFile_OnWaitForReadyRead(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperWaitForReadyRead(QSaveFile* self, int msecs);
bool QSaveFile_WaitForBytesWritten(QSaveFile* self, int msecs);
void QSaveFile_OnWaitForBytesWritten(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperWaitForBytesWritten(QSaveFile* self, int msecs);
long long QSaveFile_SkipData(QSaveFile* self, long long maxSize);
void QSaveFile_OnSkipData(QSaveFile* self, intptr_t slot);
long long QSaveFile_SuperSkipData(QSaveFile* self, long long maxSize);
bool QSaveFile_Event(QSaveFile* self, QEvent* event);
void QSaveFile_OnEvent(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperEvent(QSaveFile* self, QEvent* event);
bool QSaveFile_EventFilter(QSaveFile* self, QObject* watched, QEvent* event);
void QSaveFile_OnEventFilter(QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperEventFilter(QSaveFile* self, QObject* watched, QEvent* event);
void QSaveFile_TimerEvent(QSaveFile* self, QTimerEvent* event);
void QSaveFile_OnTimerEvent(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperTimerEvent(QSaveFile* self, QTimerEvent* event);
void QSaveFile_ChildEvent(QSaveFile* self, QChildEvent* event);
void QSaveFile_OnChildEvent(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperChildEvent(QSaveFile* self, QChildEvent* event);
void QSaveFile_CustomEvent(QSaveFile* self, QEvent* event);
void QSaveFile_OnCustomEvent(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperCustomEvent(QSaveFile* self, QEvent* event);
void QSaveFile_ConnectNotify(QSaveFile* self, const QMetaMethod* signal);
void QSaveFile_OnConnectNotify(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperConnectNotify(QSaveFile* self, const QMetaMethod* signal);
void QSaveFile_DisconnectNotify(QSaveFile* self, const QMetaMethod* signal);
void QSaveFile_OnDisconnectNotify(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperDisconnectNotify(QSaveFile* self, const QMetaMethod* signal);
void QSaveFile_SetOpenMode(QSaveFile* self, int openMode);
void QSaveFile_OnSetOpenMode(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperSetOpenMode(QSaveFile* self, int openMode);
void QSaveFile_SetErrorString(QSaveFile* self, const libqt_string errorString);
void QSaveFile_OnSetErrorString(QSaveFile* self, intptr_t slot);
void QSaveFile_SuperSetErrorString(QSaveFile* self, const libqt_string errorString);
QObject* QSaveFile_Sender(const QSaveFile* self);
void QSaveFile_OnSender(const QSaveFile* self, intptr_t slot);
QObject* QSaveFile_SuperSender(const QSaveFile* self);
int QSaveFile_SenderSignalIndex(const QSaveFile* self);
void QSaveFile_OnSenderSignalIndex(const QSaveFile* self, intptr_t slot);
int QSaveFile_SuperSenderSignalIndex(const QSaveFile* self);
int QSaveFile_Receivers(const QSaveFile* self, const char* signal);
void QSaveFile_OnReceivers(const QSaveFile* self, intptr_t slot);
int QSaveFile_SuperReceivers(const QSaveFile* self, const char* signal);
bool QSaveFile_IsSignalConnected(const QSaveFile* self, const QMetaMethod* signal);
void QSaveFile_OnIsSignalConnected(const QSaveFile* self, intptr_t slot);
bool QSaveFile_SuperIsSignalConnected(const QSaveFile* self, const QMetaMethod* signal);
void QSaveFile_Delete(QSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
