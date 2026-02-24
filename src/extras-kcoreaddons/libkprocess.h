#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKPROCESS_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKPROCESS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KProcess KProcess;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QProcess QProcess;
typedef struct QTimerEvent QTimerEvent;
#endif

KProcess* KProcess_new();
KProcess* KProcess_new2(QObject* parent);
QMetaObject* KProcess_MetaObject(const KProcess* self);
void* KProcess_Metacast(KProcess* self, const char* param1);
int KProcess_Metacall(KProcess* self, int param1, int param2, void** param3);
void KProcess_SetOutputChannelMode(KProcess* self, int mode);
int KProcess_OutputChannelMode(const KProcess* self);
void KProcess_SetNextOpenMode(KProcess* self, int mode);
void KProcess_SetEnv(KProcess* self, const libqt_string name, const libqt_string value);
void KProcess_UnsetEnv(KProcess* self, const libqt_string name);
void KProcess_ClearEnvironment(KProcess* self);
void KProcess_SetProgram(KProcess* self, const libqt_string exe);
void KProcess_SetProgram2(KProcess* self, const libqt_list /* of libqt_string */ argv);
KProcess* KProcess_OperatorShiftLeft(KProcess* self, const libqt_string arg);
KProcess* KProcess_OperatorShiftLeft2(KProcess* self, const libqt_list /* of libqt_string */ args);
void KProcess_ClearProgram(KProcess* self);
void KProcess_SetShellCommand(KProcess* self, const libqt_string cmd);
libqt_list /* of libqt_string */ KProcess_Program(const KProcess* self);
void KProcess_Start(KProcess* self);
int KProcess_Execute(KProcess* self);
int KProcess_Execute2(const libqt_string exe);
int KProcess_Execute3(const libqt_list /* of libqt_string */ argv);
int KProcess_StartDetached(KProcess* self);
int KProcess_StartDetached2(const libqt_string exe);
int KProcess_StartDetached3(const libqt_list /* of libqt_string */ argv);
void KProcess_SetEnv3(KProcess* self, const libqt_string name, const libqt_string value, bool overwrite);
void KProcess_SetProgram22(KProcess* self, const libqt_string exe, const libqt_list /* of libqt_string */ args);
int KProcess_Execute1(KProcess* self, int msecs);
int KProcess_Execute22(const libqt_string exe, const libqt_list /* of libqt_string */ args);
int KProcess_Execute32(const libqt_string exe, const libqt_list /* of libqt_string */ args, int msecs);
int KProcess_Execute23(const libqt_list /* of libqt_string */ argv, int msecs);
int KProcess_StartDetached22(const libqt_string exe, const libqt_list /* of libqt_string */ args);
void KProcess_OnMetaObject(const KProcess* self, intptr_t slot);
QMetaObject* KProcess_SuperMetaObject(const KProcess* self);
void KProcess_OnMetacast(KProcess* self, intptr_t slot);
void* KProcess_SuperMetacast(KProcess* self, const char* param1);
void KProcess_OnMetacall(KProcess* self, intptr_t slot);
int KProcess_SuperMetacall(KProcess* self, int param1, int param2, void** param3);
bool KProcess_Open(KProcess* self, int mode);
void KProcess_OnOpen(KProcess* self, intptr_t slot);
bool KProcess_SuperOpen(KProcess* self, int mode);
bool KProcess_WaitForReadyRead(KProcess* self, int msecs);
void KProcess_OnWaitForReadyRead(KProcess* self, intptr_t slot);
bool KProcess_SuperWaitForReadyRead(KProcess* self, int msecs);
bool KProcess_WaitForBytesWritten(KProcess* self, int msecs);
void KProcess_OnWaitForBytesWritten(KProcess* self, intptr_t slot);
bool KProcess_SuperWaitForBytesWritten(KProcess* self, int msecs);
long long KProcess_BytesToWrite(const KProcess* self);
void KProcess_OnBytesToWrite(const KProcess* self, intptr_t slot);
long long KProcess_SuperBytesToWrite(const KProcess* self);
bool KProcess_IsSequential(const KProcess* self);
void KProcess_OnIsSequential(const KProcess* self, intptr_t slot);
bool KProcess_SuperIsSequential(const KProcess* self);
void KProcess_Close(KProcess* self);
void KProcess_OnClose(KProcess* self, intptr_t slot);
void KProcess_SuperClose(KProcess* self);
long long KProcess_ReadData(KProcess* self, char* data, long long maxlen);
void KProcess_OnReadData(KProcess* self, intptr_t slot);
long long KProcess_SuperReadData(KProcess* self, char* data, long long maxlen);
long long KProcess_WriteData(KProcess* self, const char* data, long long lenVal);
void KProcess_OnWriteData(KProcess* self, intptr_t slot);
long long KProcess_SuperWriteData(KProcess* self, const char* data, long long lenVal);
long long KProcess_Pos(const KProcess* self);
void KProcess_OnPos(const KProcess* self, intptr_t slot);
long long KProcess_SuperPos(const KProcess* self);
long long KProcess_Size(const KProcess* self);
void KProcess_OnSize(const KProcess* self, intptr_t slot);
long long KProcess_SuperSize(const KProcess* self);
bool KProcess_Seek(KProcess* self, long long pos);
void KProcess_OnSeek(KProcess* self, intptr_t slot);
bool KProcess_SuperSeek(KProcess* self, long long pos);
bool KProcess_AtEnd(const KProcess* self);
void KProcess_OnAtEnd(const KProcess* self, intptr_t slot);
bool KProcess_SuperAtEnd(const KProcess* self);
bool KProcess_Reset(KProcess* self);
void KProcess_OnReset(KProcess* self, intptr_t slot);
bool KProcess_SuperReset(KProcess* self);
long long KProcess_BytesAvailable(const KProcess* self);
void KProcess_OnBytesAvailable(const KProcess* self, intptr_t slot);
long long KProcess_SuperBytesAvailable(const KProcess* self);
bool KProcess_CanReadLine(const KProcess* self);
void KProcess_OnCanReadLine(const KProcess* self, intptr_t slot);
bool KProcess_SuperCanReadLine(const KProcess* self);
long long KProcess_ReadLineData(KProcess* self, char* data, long long maxlen);
void KProcess_OnReadLineData(KProcess* self, intptr_t slot);
long long KProcess_SuperReadLineData(KProcess* self, char* data, long long maxlen);
long long KProcess_SkipData(KProcess* self, long long maxSize);
void KProcess_OnSkipData(KProcess* self, intptr_t slot);
long long KProcess_SuperSkipData(KProcess* self, long long maxSize);
bool KProcess_Event(KProcess* self, QEvent* event);
void KProcess_OnEvent(KProcess* self, intptr_t slot);
bool KProcess_SuperEvent(KProcess* self, QEvent* event);
bool KProcess_EventFilter(KProcess* self, QObject* watched, QEvent* event);
void KProcess_OnEventFilter(KProcess* self, intptr_t slot);
bool KProcess_SuperEventFilter(KProcess* self, QObject* watched, QEvent* event);
void KProcess_TimerEvent(KProcess* self, QTimerEvent* event);
void KProcess_OnTimerEvent(KProcess* self, intptr_t slot);
void KProcess_SuperTimerEvent(KProcess* self, QTimerEvent* event);
void KProcess_ChildEvent(KProcess* self, QChildEvent* event);
void KProcess_OnChildEvent(KProcess* self, intptr_t slot);
void KProcess_SuperChildEvent(KProcess* self, QChildEvent* event);
void KProcess_CustomEvent(KProcess* self, QEvent* event);
void KProcess_OnCustomEvent(KProcess* self, intptr_t slot);
void KProcess_SuperCustomEvent(KProcess* self, QEvent* event);
void KProcess_ConnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_OnConnectNotify(KProcess* self, intptr_t slot);
void KProcess_SuperConnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_DisconnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_OnDisconnectNotify(KProcess* self, intptr_t slot);
void KProcess_SuperDisconnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_SetProcessState(KProcess* self, int state);
void KProcess_OnSetProcessState(KProcess* self, intptr_t slot);
void KProcess_SuperSetProcessState(KProcess* self, int state);
void KProcess_SetOpenMode(KProcess* self, int openMode);
void KProcess_OnSetOpenMode(KProcess* self, intptr_t slot);
void KProcess_SuperSetOpenMode(KProcess* self, int openMode);
void KProcess_SetErrorString(KProcess* self, const libqt_string errorString);
void KProcess_OnSetErrorString(KProcess* self, intptr_t slot);
void KProcess_SuperSetErrorString(KProcess* self, const libqt_string errorString);
QObject* KProcess_Sender(const KProcess* self);
void KProcess_OnSender(const KProcess* self, intptr_t slot);
QObject* KProcess_SuperSender(const KProcess* self);
int KProcess_SenderSignalIndex(const KProcess* self);
void KProcess_OnSenderSignalIndex(const KProcess* self, intptr_t slot);
int KProcess_SuperSenderSignalIndex(const KProcess* self);
int KProcess_Receivers(const KProcess* self, const char* signal);
void KProcess_OnReceivers(const KProcess* self, intptr_t slot);
int KProcess_SuperReceivers(const KProcess* self, const char* signal);
bool KProcess_IsSignalConnected(const KProcess* self, const QMetaMethod* signal);
void KProcess_OnIsSignalConnected(const KProcess* self, intptr_t slot);
bool KProcess_SuperIsSignalConnected(const KProcess* self, const QMetaMethod* signal);
void KProcess_Delete(KProcess* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
