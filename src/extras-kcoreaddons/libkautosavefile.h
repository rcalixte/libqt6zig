#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKAUTOSAVEFILE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKAUTOSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAutoSaveFile KAutoSaveFile;
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
typedef struct QUrl QUrl;
#endif

KAutoSaveFile* KAutoSaveFile_new(const QUrl* filename);
KAutoSaveFile* KAutoSaveFile_new2();
KAutoSaveFile* KAutoSaveFile_new3(const QUrl* filename, QObject* parent);
KAutoSaveFile* KAutoSaveFile_new4(QObject* parent);
QMetaObject* KAutoSaveFile_MetaObject(const KAutoSaveFile* self);
void* KAutoSaveFile_Metacast(KAutoSaveFile* self, const char* param1);
int KAutoSaveFile_Metacall(KAutoSaveFile* self, int param1, int param2, void** param3);
QUrl* KAutoSaveFile_ManagedFile(const KAutoSaveFile* self);
void KAutoSaveFile_SetManagedFile(KAutoSaveFile* self, const QUrl* filename);
void KAutoSaveFile_ReleaseLock(KAutoSaveFile* self);
bool KAutoSaveFile_Open(KAutoSaveFile* self, int openmode);
libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_StaleFiles(const QUrl* url);
libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_AllStaleFiles();
libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_StaleFiles2(const QUrl* url, const libqt_string applicationName);
libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_AllStaleFiles1(const libqt_string applicationName);
void KAutoSaveFile_OnMetaObject(const KAutoSaveFile* self, intptr_t slot);
QMetaObject* KAutoSaveFile_SuperMetaObject(const KAutoSaveFile* self);
void KAutoSaveFile_OnMetacast(KAutoSaveFile* self, intptr_t slot);
void* KAutoSaveFile_SuperMetacast(KAutoSaveFile* self, const char* param1);
void KAutoSaveFile_OnMetacall(KAutoSaveFile* self, intptr_t slot);
int KAutoSaveFile_SuperMetacall(KAutoSaveFile* self, int param1, int param2, void** param3);
void KAutoSaveFile_OnReleaseLock(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperReleaseLock(KAutoSaveFile* self);
void KAutoSaveFile_OnOpen(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperOpen(KAutoSaveFile* self, int openmode);
libqt_string KAutoSaveFile_FileName(const KAutoSaveFile* self);
void KAutoSaveFile_OnFileName(const KAutoSaveFile* self, intptr_t slot);
libqt_string KAutoSaveFile_SuperFileName(const KAutoSaveFile* self);
long long KAutoSaveFile_Size(const KAutoSaveFile* self);
void KAutoSaveFile_OnSize(const KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperSize(const KAutoSaveFile* self);
bool KAutoSaveFile_Resize(KAutoSaveFile* self, long long sz);
void KAutoSaveFile_OnResize(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperResize(KAutoSaveFile* self, long long sz);
int KAutoSaveFile_Permissions(const KAutoSaveFile* self);
void KAutoSaveFile_OnPermissions(const KAutoSaveFile* self, intptr_t slot);
int KAutoSaveFile_SuperPermissions(const KAutoSaveFile* self);
bool KAutoSaveFile_SetPermissions(KAutoSaveFile* self, int permissionSpec);
void KAutoSaveFile_OnSetPermissions(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperSetPermissions(KAutoSaveFile* self, int permissionSpec);
void KAutoSaveFile_Close(KAutoSaveFile* self);
void KAutoSaveFile_OnClose(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperClose(KAutoSaveFile* self);
bool KAutoSaveFile_IsSequential(const KAutoSaveFile* self);
void KAutoSaveFile_OnIsSequential(const KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperIsSequential(const KAutoSaveFile* self);
long long KAutoSaveFile_Pos(const KAutoSaveFile* self);
void KAutoSaveFile_OnPos(const KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperPos(const KAutoSaveFile* self);
bool KAutoSaveFile_Seek(KAutoSaveFile* self, long long offset);
void KAutoSaveFile_OnSeek(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperSeek(KAutoSaveFile* self, long long offset);
bool KAutoSaveFile_AtEnd(const KAutoSaveFile* self);
void KAutoSaveFile_OnAtEnd(const KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperAtEnd(const KAutoSaveFile* self);
long long KAutoSaveFile_ReadData(KAutoSaveFile* self, char* data, long long maxlen);
void KAutoSaveFile_OnReadData(KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperReadData(KAutoSaveFile* self, char* data, long long maxlen);
long long KAutoSaveFile_WriteData(KAutoSaveFile* self, const char* data, long long lenVal);
void KAutoSaveFile_OnWriteData(KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperWriteData(KAutoSaveFile* self, const char* data, long long lenVal);
long long KAutoSaveFile_ReadLineData(KAutoSaveFile* self, char* data, long long maxlen);
void KAutoSaveFile_OnReadLineData(KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperReadLineData(KAutoSaveFile* self, char* data, long long maxlen);
bool KAutoSaveFile_Reset(KAutoSaveFile* self);
void KAutoSaveFile_OnReset(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperReset(KAutoSaveFile* self);
long long KAutoSaveFile_BytesAvailable(const KAutoSaveFile* self);
void KAutoSaveFile_OnBytesAvailable(const KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperBytesAvailable(const KAutoSaveFile* self);
long long KAutoSaveFile_BytesToWrite(const KAutoSaveFile* self);
void KAutoSaveFile_OnBytesToWrite(const KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperBytesToWrite(const KAutoSaveFile* self);
bool KAutoSaveFile_CanReadLine(const KAutoSaveFile* self);
void KAutoSaveFile_OnCanReadLine(const KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperCanReadLine(const KAutoSaveFile* self);
bool KAutoSaveFile_WaitForReadyRead(KAutoSaveFile* self, int msecs);
void KAutoSaveFile_OnWaitForReadyRead(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperWaitForReadyRead(KAutoSaveFile* self, int msecs);
bool KAutoSaveFile_WaitForBytesWritten(KAutoSaveFile* self, int msecs);
void KAutoSaveFile_OnWaitForBytesWritten(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperWaitForBytesWritten(KAutoSaveFile* self, int msecs);
long long KAutoSaveFile_SkipData(KAutoSaveFile* self, long long maxSize);
void KAutoSaveFile_OnSkipData(KAutoSaveFile* self, intptr_t slot);
long long KAutoSaveFile_SuperSkipData(KAutoSaveFile* self, long long maxSize);
bool KAutoSaveFile_Event(KAutoSaveFile* self, QEvent* event);
void KAutoSaveFile_OnEvent(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperEvent(KAutoSaveFile* self, QEvent* event);
bool KAutoSaveFile_EventFilter(KAutoSaveFile* self, QObject* watched, QEvent* event);
void KAutoSaveFile_OnEventFilter(KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperEventFilter(KAutoSaveFile* self, QObject* watched, QEvent* event);
void KAutoSaveFile_TimerEvent(KAutoSaveFile* self, QTimerEvent* event);
void KAutoSaveFile_OnTimerEvent(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperTimerEvent(KAutoSaveFile* self, QTimerEvent* event);
void KAutoSaveFile_ChildEvent(KAutoSaveFile* self, QChildEvent* event);
void KAutoSaveFile_OnChildEvent(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperChildEvent(KAutoSaveFile* self, QChildEvent* event);
void KAutoSaveFile_CustomEvent(KAutoSaveFile* self, QEvent* event);
void KAutoSaveFile_OnCustomEvent(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperCustomEvent(KAutoSaveFile* self, QEvent* event);
void KAutoSaveFile_ConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
void KAutoSaveFile_OnConnectNotify(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
void KAutoSaveFile_DisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
void KAutoSaveFile_OnDisconnectNotify(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperDisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
void KAutoSaveFile_SetOpenMode(KAutoSaveFile* self, int openMode);
void KAutoSaveFile_OnSetOpenMode(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperSetOpenMode(KAutoSaveFile* self, int openMode);
void KAutoSaveFile_SetErrorString(KAutoSaveFile* self, const libqt_string errorString);
void KAutoSaveFile_OnSetErrorString(KAutoSaveFile* self, intptr_t slot);
void KAutoSaveFile_SuperSetErrorString(KAutoSaveFile* self, const libqt_string errorString);
QObject* KAutoSaveFile_Sender(const KAutoSaveFile* self);
void KAutoSaveFile_OnSender(const KAutoSaveFile* self, intptr_t slot);
QObject* KAutoSaveFile_SuperSender(const KAutoSaveFile* self);
int KAutoSaveFile_SenderSignalIndex(const KAutoSaveFile* self);
void KAutoSaveFile_OnSenderSignalIndex(const KAutoSaveFile* self, intptr_t slot);
int KAutoSaveFile_SuperSenderSignalIndex(const KAutoSaveFile* self);
int KAutoSaveFile_Receivers(const KAutoSaveFile* self, const char* signal);
void KAutoSaveFile_OnReceivers(const KAutoSaveFile* self, intptr_t slot);
int KAutoSaveFile_SuperReceivers(const KAutoSaveFile* self, const char* signal);
bool KAutoSaveFile_IsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal);
void KAutoSaveFile_OnIsSignalConnected(const KAutoSaveFile* self, intptr_t slot);
bool KAutoSaveFile_SuperIsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal);
void KAutoSaveFile_Delete(KAutoSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
