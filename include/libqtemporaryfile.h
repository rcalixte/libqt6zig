#pragma once
#ifndef SRCC_LIBQTEMPORARYFILE_H
#define SRCC_LIBQTEMPORARYFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QFile QFile;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QTemporaryFile QTemporaryFile;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QTemporaryFile* QTemporaryFile_new();
QTemporaryFile* QTemporaryFile_new2(libqt_string templateName);
QTemporaryFile* QTemporaryFile_new3(QObject* parent);
QTemporaryFile* QTemporaryFile_new4(libqt_string templateName, QObject* parent);
QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self);
void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1);
int QTemporaryFile_Metacall(QTemporaryFile* self, int param1, int param2, void** param3);
void QTemporaryFile_OnMetacall(QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_QBaseMetacall(QTemporaryFile* self, int param1, int param2, void** param3);
libqt_string QTemporaryFile_Tr(const char* s);
bool QTemporaryFile_AutoRemove(const QTemporaryFile* self);
void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_Open(QTemporaryFile* self);
libqt_string QTemporaryFile_FileName(const QTemporaryFile* self);
void QTemporaryFile_OnFileName(const QTemporaryFile* self, intptr_t slot);
libqt_string QTemporaryFile_QBaseFileName(const QTemporaryFile* self);
libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self);
void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, libqt_string name);
bool QTemporaryFile_Rename(QTemporaryFile* self, libqt_string newName);
QTemporaryFile* QTemporaryFile_CreateNativeFile(libqt_string fileName);
QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file);
bool QTemporaryFile_OpenWithFlags(QTemporaryFile* self, int flags);
void QTemporaryFile_OnOpenWithFlags(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseOpenWithFlags(QTemporaryFile* self, int flags);
libqt_string QTemporaryFile_Tr2(const char* s, const char* c);
libqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n);
long long QTemporaryFile_Size(const QTemporaryFile* self);
void QTemporaryFile_OnSize(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseSize(const QTemporaryFile* self);
bool QTemporaryFile_Resize(QTemporaryFile* self, long long sz);
void QTemporaryFile_OnResize(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseResize(QTemporaryFile* self, long long sz);
int QTemporaryFile_Permissions(const QTemporaryFile* self);
void QTemporaryFile_OnPermissions(const QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_QBasePermissions(const QTemporaryFile* self);
bool QTemporaryFile_SetPermissions(QTemporaryFile* self, int permissionSpec);
void QTemporaryFile_OnSetPermissions(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseSetPermissions(QTemporaryFile* self, int permissionSpec);
void QTemporaryFile_Close(QTemporaryFile* self);
void QTemporaryFile_OnClose(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseClose(QTemporaryFile* self);
bool QTemporaryFile_IsSequential(const QTemporaryFile* self);
void QTemporaryFile_OnIsSequential(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseIsSequential(const QTemporaryFile* self);
long long QTemporaryFile_Pos(const QTemporaryFile* self);
void QTemporaryFile_OnPos(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBasePos(const QTemporaryFile* self);
bool QTemporaryFile_Seek(QTemporaryFile* self, long long offset);
void QTemporaryFile_OnSeek(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseSeek(QTemporaryFile* self, long long offset);
bool QTemporaryFile_AtEnd(const QTemporaryFile* self);
void QTemporaryFile_OnAtEnd(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseAtEnd(const QTemporaryFile* self);
long long QTemporaryFile_ReadData(QTemporaryFile* self, char* data, long long maxlen);
void QTemporaryFile_OnReadData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseReadData(QTemporaryFile* self, char* data, long long maxlen);
long long QTemporaryFile_WriteData(QTemporaryFile* self, const char* data, long long lenVal);
void QTemporaryFile_OnWriteData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseWriteData(QTemporaryFile* self, const char* data, long long lenVal);
long long QTemporaryFile_ReadLineData(QTemporaryFile* self, char* data, long long maxlen);
void QTemporaryFile_OnReadLineData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseReadLineData(QTemporaryFile* self, char* data, long long maxlen);
bool QTemporaryFile_Reset(QTemporaryFile* self);
void QTemporaryFile_OnReset(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseReset(QTemporaryFile* self);
long long QTemporaryFile_BytesAvailable(const QTemporaryFile* self);
void QTemporaryFile_OnBytesAvailable(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseBytesAvailable(const QTemporaryFile* self);
long long QTemporaryFile_BytesToWrite(const QTemporaryFile* self);
void QTemporaryFile_OnBytesToWrite(const QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseBytesToWrite(const QTemporaryFile* self);
bool QTemporaryFile_CanReadLine(const QTemporaryFile* self);
void QTemporaryFile_OnCanReadLine(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseCanReadLine(const QTemporaryFile* self);
bool QTemporaryFile_WaitForReadyRead(QTemporaryFile* self, int msecs);
void QTemporaryFile_OnWaitForReadyRead(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseWaitForReadyRead(QTemporaryFile* self, int msecs);
bool QTemporaryFile_WaitForBytesWritten(QTemporaryFile* self, int msecs);
void QTemporaryFile_OnWaitForBytesWritten(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseWaitForBytesWritten(QTemporaryFile* self, int msecs);
long long QTemporaryFile_SkipData(QTemporaryFile* self, long long maxSize);
void QTemporaryFile_OnSkipData(QTemporaryFile* self, intptr_t slot);
long long QTemporaryFile_QBaseSkipData(QTemporaryFile* self, long long maxSize);
bool QTemporaryFile_Event(QTemporaryFile* self, QEvent* event);
void QTemporaryFile_OnEvent(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseEvent(QTemporaryFile* self, QEvent* event);
bool QTemporaryFile_EventFilter(QTemporaryFile* self, QObject* watched, QEvent* event);
void QTemporaryFile_OnEventFilter(QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseEventFilter(QTemporaryFile* self, QObject* watched, QEvent* event);
void QTemporaryFile_TimerEvent(QTemporaryFile* self, QTimerEvent* event);
void QTemporaryFile_OnTimerEvent(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseTimerEvent(QTemporaryFile* self, QTimerEvent* event);
void QTemporaryFile_ChildEvent(QTemporaryFile* self, QChildEvent* event);
void QTemporaryFile_OnChildEvent(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseChildEvent(QTemporaryFile* self, QChildEvent* event);
void QTemporaryFile_CustomEvent(QTemporaryFile* self, QEvent* event);
void QTemporaryFile_OnCustomEvent(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseCustomEvent(QTemporaryFile* self, QEvent* event);
void QTemporaryFile_ConnectNotify(QTemporaryFile* self, QMetaMethod* signal);
void QTemporaryFile_OnConnectNotify(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseConnectNotify(QTemporaryFile* self, QMetaMethod* signal);
void QTemporaryFile_DisconnectNotify(QTemporaryFile* self, QMetaMethod* signal);
void QTemporaryFile_OnDisconnectNotify(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseDisconnectNotify(QTemporaryFile* self, QMetaMethod* signal);
void QTemporaryFile_SetOpenMode(QTemporaryFile* self, int openMode);
void QTemporaryFile_OnSetOpenMode(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseSetOpenMode(QTemporaryFile* self, int openMode);
void QTemporaryFile_SetErrorString(QTemporaryFile* self, libqt_string errorString);
void QTemporaryFile_OnSetErrorString(QTemporaryFile* self, intptr_t slot);
void QTemporaryFile_QBaseSetErrorString(QTemporaryFile* self, libqt_string errorString);
QObject* QTemporaryFile_Sender(const QTemporaryFile* self);
void QTemporaryFile_OnSender(const QTemporaryFile* self, intptr_t slot);
QObject* QTemporaryFile_QBaseSender(const QTemporaryFile* self);
int QTemporaryFile_SenderSignalIndex(const QTemporaryFile* self);
void QTemporaryFile_OnSenderSignalIndex(const QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_QBaseSenderSignalIndex(const QTemporaryFile* self);
int QTemporaryFile_Receivers(const QTemporaryFile* self, const char* signal);
void QTemporaryFile_OnReceivers(const QTemporaryFile* self, intptr_t slot);
int QTemporaryFile_QBaseReceivers(const QTemporaryFile* self, const char* signal);
bool QTemporaryFile_IsSignalConnected(const QTemporaryFile* self, QMetaMethod* signal);
void QTemporaryFile_OnIsSignalConnected(const QTemporaryFile* self, intptr_t slot);
bool QTemporaryFile_QBaseIsSignalConnected(const QTemporaryFile* self, QMetaMethod* signal);
void QTemporaryFile_Delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
