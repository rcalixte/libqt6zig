#pragma once
#ifndef SRCC_LIBQFILE_H
#define SRCC_LIBQFILE_H

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
typedef struct QTimerEvent QTimerEvent;
#endif

QFile* QFile_new();
QFile* QFile_new2(const libqt_string name);
QFile* QFile_new3(QObject* parent);
QFile* QFile_new4(const libqt_string name, QObject* parent);
QMetaObject* QFile_MetaObject(const QFile* self);
void* QFile_Metacast(QFile* self, const char* param1);
int QFile_Metacall(QFile* self, int param1, int param2, void** param3);
libqt_string QFile_FileName(const QFile* self);
void QFile_SetFileName(QFile* self, const libqt_string name);
libqt_string QFile_EncodeName(const libqt_string fileName);
libqt_string QFile_DecodeName(const libqt_string localFileName);
libqt_string QFile_DecodeName2(const char* localFileName);
bool QFile_Exists(const QFile* self);
bool QFile_Exists2(const libqt_string fileName);
libqt_string QFile_SymLinkTarget(const QFile* self);
libqt_string QFile_SymLinkTarget2(const libqt_string fileName);
bool QFile_Remove(QFile* self);
bool QFile_Remove2(const libqt_string fileName);
bool QFile_MoveToTrash(QFile* self);
bool QFile_MoveToTrash2(const libqt_string fileName);
bool QFile_Rename(QFile* self, const libqt_string newName);
bool QFile_Rename2(const libqt_string oldName, const libqt_string newName);
bool QFile_Link(QFile* self, const libqt_string newName);
bool QFile_Link2(const libqt_string fileName, const libqt_string newName);
bool QFile_Copy(QFile* self, const libqt_string newName);
bool QFile_Copy2(const libqt_string fileName, const libqt_string newName);
bool QFile_Open(QFile* self, int flags);
bool QFile_Open2(QFile* self, int flags, int permissions);
bool QFile_Open4(QFile* self, int fd, int ioFlags);
long long QFile_Size(const QFile* self);
bool QFile_Resize(QFile* self, long long sz);
bool QFile_Resize2(const libqt_string filename, long long sz);
int QFile_Permissions(const QFile* self);
int QFile_Permissions2(const libqt_string filename);
bool QFile_SetPermissions(QFile* self, int permissionSpec);
bool QFile_SetPermissions2(const libqt_string filename, int permissionSpec);
bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags);
void QFile_OnMetaObject(const QFile* self, intptr_t slot);
QMetaObject* QFile_SuperMetaObject(const QFile* self);
void QFile_OnMetacast(QFile* self, intptr_t slot);
void* QFile_SuperMetacast(QFile* self, const char* param1);
void QFile_OnMetacall(QFile* self, intptr_t slot);
int QFile_SuperMetacall(QFile* self, int param1, int param2, void** param3);
void QFile_OnFileName(const QFile* self, intptr_t slot);
libqt_string QFile_SuperFileName(const QFile* self);
void QFile_OnOpen(QFile* self, intptr_t slot);
bool QFile_SuperOpen(QFile* self, int flags);
void QFile_OnSize(const QFile* self, intptr_t slot);
long long QFile_SuperSize(const QFile* self);
void QFile_OnResize(QFile* self, intptr_t slot);
bool QFile_SuperResize(QFile* self, long long sz);
void QFile_OnPermissions(const QFile* self, intptr_t slot);
int QFile_SuperPermissions(const QFile* self);
void QFile_OnSetPermissions(QFile* self, intptr_t slot);
bool QFile_SuperSetPermissions(QFile* self, int permissionSpec);
void QFile_Close(QFile* self);
void QFile_OnClose(QFile* self, intptr_t slot);
void QFile_SuperClose(QFile* self);
bool QFile_IsSequential(const QFile* self);
void QFile_OnIsSequential(const QFile* self, intptr_t slot);
bool QFile_SuperIsSequential(const QFile* self);
long long QFile_Pos(const QFile* self);
void QFile_OnPos(const QFile* self, intptr_t slot);
long long QFile_SuperPos(const QFile* self);
bool QFile_Seek(QFile* self, long long offset);
void QFile_OnSeek(QFile* self, intptr_t slot);
bool QFile_SuperSeek(QFile* self, long long offset);
bool QFile_AtEnd(const QFile* self);
void QFile_OnAtEnd(const QFile* self, intptr_t slot);
bool QFile_SuperAtEnd(const QFile* self);
long long QFile_ReadData(QFile* self, char* data, long long maxlen);
void QFile_OnReadData(QFile* self, intptr_t slot);
long long QFile_SuperReadData(QFile* self, char* data, long long maxlen);
long long QFile_WriteData(QFile* self, const char* data, long long lenVal);
void QFile_OnWriteData(QFile* self, intptr_t slot);
long long QFile_SuperWriteData(QFile* self, const char* data, long long lenVal);
long long QFile_ReadLineData(QFile* self, char* data, long long maxlen);
void QFile_OnReadLineData(QFile* self, intptr_t slot);
long long QFile_SuperReadLineData(QFile* self, char* data, long long maxlen);
bool QFile_Reset(QFile* self);
void QFile_OnReset(QFile* self, intptr_t slot);
bool QFile_SuperReset(QFile* self);
long long QFile_BytesAvailable(const QFile* self);
void QFile_OnBytesAvailable(const QFile* self, intptr_t slot);
long long QFile_SuperBytesAvailable(const QFile* self);
long long QFile_BytesToWrite(const QFile* self);
void QFile_OnBytesToWrite(const QFile* self, intptr_t slot);
long long QFile_SuperBytesToWrite(const QFile* self);
bool QFile_CanReadLine(const QFile* self);
void QFile_OnCanReadLine(const QFile* self, intptr_t slot);
bool QFile_SuperCanReadLine(const QFile* self);
bool QFile_WaitForReadyRead(QFile* self, int msecs);
void QFile_OnWaitForReadyRead(QFile* self, intptr_t slot);
bool QFile_SuperWaitForReadyRead(QFile* self, int msecs);
bool QFile_WaitForBytesWritten(QFile* self, int msecs);
void QFile_OnWaitForBytesWritten(QFile* self, intptr_t slot);
bool QFile_SuperWaitForBytesWritten(QFile* self, int msecs);
long long QFile_SkipData(QFile* self, long long maxSize);
void QFile_OnSkipData(QFile* self, intptr_t slot);
long long QFile_SuperSkipData(QFile* self, long long maxSize);
bool QFile_Event(QFile* self, QEvent* event);
void QFile_OnEvent(QFile* self, intptr_t slot);
bool QFile_SuperEvent(QFile* self, QEvent* event);
bool QFile_EventFilter(QFile* self, QObject* watched, QEvent* event);
void QFile_OnEventFilter(QFile* self, intptr_t slot);
bool QFile_SuperEventFilter(QFile* self, QObject* watched, QEvent* event);
void QFile_TimerEvent(QFile* self, QTimerEvent* event);
void QFile_OnTimerEvent(QFile* self, intptr_t slot);
void QFile_SuperTimerEvent(QFile* self, QTimerEvent* event);
void QFile_ChildEvent(QFile* self, QChildEvent* event);
void QFile_OnChildEvent(QFile* self, intptr_t slot);
void QFile_SuperChildEvent(QFile* self, QChildEvent* event);
void QFile_CustomEvent(QFile* self, QEvent* event);
void QFile_OnCustomEvent(QFile* self, intptr_t slot);
void QFile_SuperCustomEvent(QFile* self, QEvent* event);
void QFile_ConnectNotify(QFile* self, const QMetaMethod* signal);
void QFile_OnConnectNotify(QFile* self, intptr_t slot);
void QFile_SuperConnectNotify(QFile* self, const QMetaMethod* signal);
void QFile_DisconnectNotify(QFile* self, const QMetaMethod* signal);
void QFile_OnDisconnectNotify(QFile* self, intptr_t slot);
void QFile_SuperDisconnectNotify(QFile* self, const QMetaMethod* signal);
void QFile_SetOpenMode(QFile* self, int openMode);
void QFile_OnSetOpenMode(QFile* self, intptr_t slot);
void QFile_SuperSetOpenMode(QFile* self, int openMode);
void QFile_SetErrorString(QFile* self, const libqt_string errorString);
void QFile_OnSetErrorString(QFile* self, intptr_t slot);
void QFile_SuperSetErrorString(QFile* self, const libqt_string errorString);
QObject* QFile_Sender(const QFile* self);
void QFile_OnSender(const QFile* self, intptr_t slot);
QObject* QFile_SuperSender(const QFile* self);
int QFile_SenderSignalIndex(const QFile* self);
void QFile_OnSenderSignalIndex(const QFile* self, intptr_t slot);
int QFile_SuperSenderSignalIndex(const QFile* self);
int QFile_Receivers(const QFile* self, const char* signal);
void QFile_OnReceivers(const QFile* self, intptr_t slot);
int QFile_SuperReceivers(const QFile* self, const char* signal);
bool QFile_IsSignalConnected(const QFile* self, const QMetaMethod* signal);
void QFile_OnIsSignalConnected(const QFile* self, intptr_t slot);
bool QFile_SuperIsSignalConnected(const QFile* self, const QMetaMethod* signal);
void QFile_Delete(QFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
