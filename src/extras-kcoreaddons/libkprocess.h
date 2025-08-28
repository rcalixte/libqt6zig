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
libqt_string KProcess_Tr(const char* s);
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
libqt_string KProcess_Tr2(const char* s, const char* c);
libqt_string KProcess_Tr3(const char* s, const char* c, int n);
void KProcess_SetEnv3(KProcess* self, const libqt_string name, const libqt_string value, bool overwrite);
void KProcess_SetProgram22(KProcess* self, const libqt_string exe, const libqt_list /* of libqt_string */ args);
int KProcess_Execute1(KProcess* self, int msecs);
int KProcess_Execute22(const libqt_string exe, const libqt_list /* of libqt_string */ args);
int KProcess_Execute32(const libqt_string exe, const libqt_list /* of libqt_string */ args, int msecs);
int KProcess_Execute23(const libqt_list /* of libqt_string */ argv, int msecs);
int KProcess_StartDetached22(const libqt_string exe, const libqt_list /* of libqt_string */ args);
void KProcess_OnMetacall(KProcess* self, intptr_t slot);
int KProcess_QBaseMetacall(KProcess* self, int param1, int param2, void** param3);
bool KProcess_Open(KProcess* self, int mode);
void KProcess_OnOpen(KProcess* self, intptr_t slot);
bool KProcess_QBaseOpen(KProcess* self, int mode);
bool KProcess_WaitForReadyRead(KProcess* self, int msecs);
void KProcess_OnWaitForReadyRead(KProcess* self, intptr_t slot);
bool KProcess_QBaseWaitForReadyRead(KProcess* self, int msecs);
bool KProcess_WaitForBytesWritten(KProcess* self, int msecs);
void KProcess_OnWaitForBytesWritten(KProcess* self, intptr_t slot);
bool KProcess_QBaseWaitForBytesWritten(KProcess* self, int msecs);
long long KProcess_BytesToWrite(const KProcess* self);
void KProcess_OnBytesToWrite(const KProcess* self, intptr_t slot);
long long KProcess_QBaseBytesToWrite(const KProcess* self);
bool KProcess_IsSequential(const KProcess* self);
void KProcess_OnIsSequential(const KProcess* self, intptr_t slot);
bool KProcess_QBaseIsSequential(const KProcess* self);
void KProcess_Close(KProcess* self);
void KProcess_OnClose(KProcess* self, intptr_t slot);
void KProcess_QBaseClose(KProcess* self);
long long KProcess_ReadData(KProcess* self, char* data, long long maxlen);
void KProcess_OnReadData(KProcess* self, intptr_t slot);
long long KProcess_QBaseReadData(KProcess* self, char* data, long long maxlen);
long long KProcess_WriteData(KProcess* self, const char* data, long long lenVal);
void KProcess_OnWriteData(KProcess* self, intptr_t slot);
long long KProcess_QBaseWriteData(KProcess* self, const char* data, long long lenVal);
long long KProcess_Pos(const KProcess* self);
void KProcess_OnPos(const KProcess* self, intptr_t slot);
long long KProcess_QBasePos(const KProcess* self);
long long KProcess_Size(const KProcess* self);
void KProcess_OnSize(const KProcess* self, intptr_t slot);
long long KProcess_QBaseSize(const KProcess* self);
bool KProcess_Seek(KProcess* self, long long pos);
void KProcess_OnSeek(KProcess* self, intptr_t slot);
bool KProcess_QBaseSeek(KProcess* self, long long pos);
bool KProcess_AtEnd(const KProcess* self);
void KProcess_OnAtEnd(const KProcess* self, intptr_t slot);
bool KProcess_QBaseAtEnd(const KProcess* self);
bool KProcess_Reset(KProcess* self);
void KProcess_OnReset(KProcess* self, intptr_t slot);
bool KProcess_QBaseReset(KProcess* self);
long long KProcess_BytesAvailable(const KProcess* self);
void KProcess_OnBytesAvailable(const KProcess* self, intptr_t slot);
long long KProcess_QBaseBytesAvailable(const KProcess* self);
bool KProcess_CanReadLine(const KProcess* self);
void KProcess_OnCanReadLine(const KProcess* self, intptr_t slot);
bool KProcess_QBaseCanReadLine(const KProcess* self);
long long KProcess_ReadLineData(KProcess* self, char* data, long long maxlen);
void KProcess_OnReadLineData(KProcess* self, intptr_t slot);
long long KProcess_QBaseReadLineData(KProcess* self, char* data, long long maxlen);
long long KProcess_SkipData(KProcess* self, long long maxSize);
void KProcess_OnSkipData(KProcess* self, intptr_t slot);
long long KProcess_QBaseSkipData(KProcess* self, long long maxSize);
bool KProcess_Event(KProcess* self, QEvent* event);
void KProcess_OnEvent(KProcess* self, intptr_t slot);
bool KProcess_QBaseEvent(KProcess* self, QEvent* event);
bool KProcess_EventFilter(KProcess* self, QObject* watched, QEvent* event);
void KProcess_OnEventFilter(KProcess* self, intptr_t slot);
bool KProcess_QBaseEventFilter(KProcess* self, QObject* watched, QEvent* event);
void KProcess_TimerEvent(KProcess* self, QTimerEvent* event);
void KProcess_OnTimerEvent(KProcess* self, intptr_t slot);
void KProcess_QBaseTimerEvent(KProcess* self, QTimerEvent* event);
void KProcess_ChildEvent(KProcess* self, QChildEvent* event);
void KProcess_OnChildEvent(KProcess* self, intptr_t slot);
void KProcess_QBaseChildEvent(KProcess* self, QChildEvent* event);
void KProcess_CustomEvent(KProcess* self, QEvent* event);
void KProcess_OnCustomEvent(KProcess* self, intptr_t slot);
void KProcess_QBaseCustomEvent(KProcess* self, QEvent* event);
void KProcess_ConnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_OnConnectNotify(KProcess* self, intptr_t slot);
void KProcess_QBaseConnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_DisconnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_OnDisconnectNotify(KProcess* self, intptr_t slot);
void KProcess_QBaseDisconnectNotify(KProcess* self, const QMetaMethod* signal);
void KProcess_SetProcessState(KProcess* self, int state);
void KProcess_OnSetProcessState(KProcess* self, intptr_t slot);
void KProcess_QBaseSetProcessState(KProcess* self, int state);
void KProcess_SetOpenMode(KProcess* self, int openMode);
void KProcess_OnSetOpenMode(KProcess* self, intptr_t slot);
void KProcess_QBaseSetOpenMode(KProcess* self, int openMode);
void KProcess_SetErrorString(KProcess* self, const libqt_string errorString);
void KProcess_OnSetErrorString(KProcess* self, intptr_t slot);
void KProcess_QBaseSetErrorString(KProcess* self, const libqt_string errorString);
QObject* KProcess_Sender(const KProcess* self);
void KProcess_OnSender(const KProcess* self, intptr_t slot);
QObject* KProcess_QBaseSender(const KProcess* self);
int KProcess_SenderSignalIndex(const KProcess* self);
void KProcess_OnSenderSignalIndex(const KProcess* self, intptr_t slot);
int KProcess_QBaseSenderSignalIndex(const KProcess* self);
int KProcess_Receivers(const KProcess* self, const char* signal);
void KProcess_OnReceivers(const KProcess* self, intptr_t slot);
int KProcess_QBaseReceivers(const KProcess* self, const char* signal);
bool KProcess_IsSignalConnected(const KProcess* self, const QMetaMethod* signal);
void KProcess_OnIsSignalConnected(const KProcess* self, intptr_t slot);
bool KProcess_QBaseIsSignalConnected(const KProcess* self, const QMetaMethod* signal);
void KProcess_Delete(KProcess* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
