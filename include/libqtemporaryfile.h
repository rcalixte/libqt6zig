#pragma once
#ifndef SRCC_LIBQTEMPORARYFILE_H
#define SRCC_LIBQTEMPORARYFILE_H

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
typedef struct QFile QFile;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTemporaryFile QTemporaryFile;
typedef struct QTimerEvent QTimerEvent;
#endif

QTemporaryFile* QTemporaryFile_new();
QTemporaryFile* QTemporaryFile_new2(const libqt_string templateName);
QTemporaryFile* QTemporaryFile_new3(QObject* parent);
QTemporaryFile* QTemporaryFile_new4(const libqt_string templateName, QObject* parent);
QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self);
void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1);
int QTemporaryFile_Metacall(QTemporaryFile* self, int param1, int param2, void** param3);
bool QTemporaryFile_AutoRemove(const QTemporaryFile* self);
void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_Open(QTemporaryFile* self);
libqt_string QTemporaryFile_FileName(const QTemporaryFile* self);
libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self);
void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const libqt_string name);
bool QTemporaryFile_Rename(QTemporaryFile* self, const libqt_string newName);
QTemporaryFile* QTemporaryFile_CreateNativeFile(const libqt_string fileName);
QTemporaryFile* QTemporaryFile_CreateNativeFile2(QFile* file);
bool QTemporaryFile_Open2(QTemporaryFile* self, int flags);
void QTemporaryFile_OnMetaObject(const QTemporaryFile* self, intptr_t slot);
QMetaObject* QTemporaryFile_SuperMetaObject(const QTemporaryFile* self);
void QTemporaryFile_OnMetacast(QTemporaryFile* self, intptr_t slot);
void* QTemporaryFile_SuperMetacast(QTemporaryFile* self, const char* param1);
void QTemporaryFile_OnMetacall(QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_SuperMetacall(QTemporaryFile* self, int param1, int param2, void** param3);
void QTemporaryFile_OnFileName(const QTemporaryFile* self, intptr_t slot);
libqt_string QTemporaryFile_SuperFileName(const QTemporaryFile* self);
void QTemporaryFile_OnOpen2(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperOpen2(QTemporaryFile* self, int flags);
long long QTemporaryFile_Size(const QTemporaryFile* self);
void QTemporaryFile_OnSize(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperSize(const QTemporaryFile* self);
bool QTemporaryFile_Resize(QTemporaryFile* self, long long sz);
void QTemporaryFile_OnResize(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperResize(QTemporaryFile* self, long long sz);
int QTemporaryFile_Permissions(const QTemporaryFile* self);
void QTemporaryFile_OnPermissions(const QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_SuperPermissions(const QTemporaryFile* self);
bool QTemporaryFile_SetPermissions(QTemporaryFile* self, int permissionSpec);
void QTemporaryFile_OnSetPermissions(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperSetPermissions(QTemporaryFile* self, int permissionSpec);
void QTemporaryFile_Close(QTemporaryFile* self);
void QTemporaryFile_OnClose(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperClose(QTemporaryFile* self);
bool QTemporaryFile_IsSequential(const QTemporaryFile* self);
void QTemporaryFile_OnIsSequential(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperIsSequential(const QTemporaryFile* self);
long long QTemporaryFile_Pos(const QTemporaryFile* self);
void QTemporaryFile_OnPos(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperPos(const QTemporaryFile* self);
bool QTemporaryFile_Seek(QTemporaryFile* self, long long offset);
void QTemporaryFile_OnSeek(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperSeek(QTemporaryFile* self, long long offset);
bool QTemporaryFile_AtEnd(const QTemporaryFile* self);
void QTemporaryFile_OnAtEnd(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperAtEnd(const QTemporaryFile* self);
long long QTemporaryFile_ReadData(QTemporaryFile* self, char* data, long long maxlen);
void QTemporaryFile_OnReadData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperReadData(QTemporaryFile* self, char* data, long long maxlen);
long long QTemporaryFile_WriteData(QTemporaryFile* self, const char* data, long long lenVal);
void QTemporaryFile_OnWriteData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperWriteData(QTemporaryFile* self, const char* data, long long lenVal);
long long QTemporaryFile_ReadLineData(QTemporaryFile* self, char* data, long long maxlen);
void QTemporaryFile_OnReadLineData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperReadLineData(QTemporaryFile* self, char* data, long long maxlen);
bool QTemporaryFile_Reset(QTemporaryFile* self);
void QTemporaryFile_OnReset(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperReset(QTemporaryFile* self);
long long QTemporaryFile_BytesAvailable(const QTemporaryFile* self);
void QTemporaryFile_OnBytesAvailable(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperBytesAvailable(const QTemporaryFile* self);
long long QTemporaryFile_BytesToWrite(const QTemporaryFile* self);
void QTemporaryFile_OnBytesToWrite(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperBytesToWrite(const QTemporaryFile* self);
bool QTemporaryFile_CanReadLine(const QTemporaryFile* self);
void QTemporaryFile_OnCanReadLine(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperCanReadLine(const QTemporaryFile* self);
bool QTemporaryFile_WaitForReadyRead(QTemporaryFile* self, int msecs);
void QTemporaryFile_OnWaitForReadyRead(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperWaitForReadyRead(QTemporaryFile* self, int msecs);
bool QTemporaryFile_WaitForBytesWritten(QTemporaryFile* self, int msecs);
void QTemporaryFile_OnWaitForBytesWritten(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperWaitForBytesWritten(QTemporaryFile* self, int msecs);
long long QTemporaryFile_SkipData(QTemporaryFile* self, long long maxSize);
void QTemporaryFile_OnSkipData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_SuperSkipData(QTemporaryFile* self, long long maxSize);
bool QTemporaryFile_Event(QTemporaryFile* self, QEvent* event);
void QTemporaryFile_OnEvent(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperEvent(QTemporaryFile* self, QEvent* event);
bool QTemporaryFile_EventFilter(QTemporaryFile* self, QObject* watched, QEvent* event);
void QTemporaryFile_OnEventFilter(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperEventFilter(QTemporaryFile* self, QObject* watched, QEvent* event);
void QTemporaryFile_TimerEvent(QTemporaryFile* self, QTimerEvent* event);
void QTemporaryFile_OnTimerEvent(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperTimerEvent(QTemporaryFile* self, QTimerEvent* event);
void QTemporaryFile_ChildEvent(QTemporaryFile* self, QChildEvent* event);
void QTemporaryFile_OnChildEvent(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperChildEvent(QTemporaryFile* self, QChildEvent* event);
void QTemporaryFile_CustomEvent(QTemporaryFile* self, QEvent* event);
void QTemporaryFile_OnCustomEvent(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperCustomEvent(QTemporaryFile* self, QEvent* event);
void QTemporaryFile_ConnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
void QTemporaryFile_OnConnectNotify(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperConnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
void QTemporaryFile_DisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
void QTemporaryFile_OnDisconnectNotify(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperDisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
void QTemporaryFile_SetOpenMode(QTemporaryFile* self, int openMode);
void QTemporaryFile_OnSetOpenMode(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperSetOpenMode(QTemporaryFile* self, int openMode);
void QTemporaryFile_SetErrorString(QTemporaryFile* self, const libqt_string errorString);
void QTemporaryFile_OnSetErrorString(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_SuperSetErrorString(QTemporaryFile* self, const libqt_string errorString);
QObject* QTemporaryFile_Sender(const QTemporaryFile* self);
void QTemporaryFile_OnSender(const QTemporaryFile* self, intptr_t slot);
QObject* QTemporaryFile_SuperSender(const QTemporaryFile* self);
int QTemporaryFile_SenderSignalIndex(const QTemporaryFile* self);
void QTemporaryFile_OnSenderSignalIndex(const QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_SuperSenderSignalIndex(const QTemporaryFile* self);
int QTemporaryFile_Receivers(const QTemporaryFile* self, const char* signal);
void QTemporaryFile_OnReceivers(const QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_SuperReceivers(const QTemporaryFile* self, const char* signal);
bool QTemporaryFile_IsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal);
void QTemporaryFile_OnIsSignalConnected(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_SuperIsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal);
void QTemporaryFile_Delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
