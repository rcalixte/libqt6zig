#pragma once
#ifndef SRCC_LIBQPROCESS_H
#define SRCC_LIBQPROCESS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QProcess__UnixProcessParameters)
typedef QProcess::UnixProcessParameters QProcess__UnixProcessParameters;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QProcess QProcess;
typedef struct QProcessEnvironment QProcessEnvironment;
typedef struct QProcess__UnixProcessParameters QProcess__UnixProcessParameters;
typedef struct QTimerEvent QTimerEvent;
#endif

QProcessEnvironment* QProcessEnvironment_new();
QProcessEnvironment* QProcessEnvironment_new2(int param1);
QProcessEnvironment* QProcessEnvironment_new3(const QProcessEnvironment* other);
void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, const QProcessEnvironment* other);
void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other);
bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self);
bool QProcessEnvironment_InheritsFromParent(const QProcessEnvironment* self);
void QProcessEnvironment_Clear(QProcessEnvironment* self);
bool QProcessEnvironment_Contains(const QProcessEnvironment* self, const libqt_string name);
void QProcessEnvironment_Insert(QProcessEnvironment* self, const libqt_string name, const libqt_string value);
void QProcessEnvironment_Remove(QProcessEnvironment* self, const libqt_string name);
libqt_string QProcessEnvironment_Value(const QProcessEnvironment* self, const libqt_string name);
libqt_list /* of libqt_string */ QProcessEnvironment_ToStringList(const QProcessEnvironment* self);
libqt_list /* of libqt_string */ QProcessEnvironment_Keys(const QProcessEnvironment* self);
void QProcessEnvironment_Insert2(QProcessEnvironment* self, const QProcessEnvironment* e);
QProcessEnvironment* QProcessEnvironment_SystemEnvironment();
libqt_string QProcessEnvironment_Value2(const QProcessEnvironment* self, const libqt_string name, const libqt_string defaultValue);
void QProcessEnvironment_Delete(QProcessEnvironment* self);

QProcess* QProcess_new();
QProcess* QProcess_new2(QObject* parent);
QMetaObject* QProcess_MetaObject(const QProcess* self);
void* QProcess_Metacast(QProcess* self, const char* param1);
int QProcess_Metacall(QProcess* self, int param1, int param2, void** param3);
libqt_string QProcess_Tr(const char* s);
void QProcess_Start(QProcess* self, const libqt_string program);
void QProcess_Start2(QProcess* self);
void QProcess_StartCommand(QProcess* self, const libqt_string command);
bool QProcess_StartDetached(QProcess* self);
bool QProcess_Open(QProcess* self, int mode);
libqt_string QProcess_Program(const QProcess* self);
void QProcess_SetProgram(QProcess* self, const libqt_string program);
libqt_list /* of libqt_string */ QProcess_Arguments(const QProcess* self);
void QProcess_SetArguments(QProcess* self, const libqt_list /* of libqt_string */ arguments);
int QProcess_ProcessChannelMode(const QProcess* self);
void QProcess_SetProcessChannelMode(QProcess* self, int mode);
int QProcess_InputChannelMode(const QProcess* self);
void QProcess_SetInputChannelMode(QProcess* self, int mode);
int QProcess_ReadChannel(const QProcess* self);
void QProcess_SetReadChannel(QProcess* self, int channel);
void QProcess_CloseReadChannel(QProcess* self, int channel);
void QProcess_CloseWriteChannel(QProcess* self);
void QProcess_SetStandardInputFile(QProcess* self, const libqt_string fileName);
void QProcess_SetStandardOutputFile(QProcess* self, const libqt_string fileName);
void QProcess_SetStandardErrorFile(QProcess* self, const libqt_string fileName);
void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination);
void QProcess_FailChildProcessModifier(QProcess* self, const char* description);
QProcess__UnixProcessParameters* QProcess_UnixProcessParameters(const QProcess* self);
void QProcess_SetUnixProcessParameters(QProcess* self, const QProcess__UnixProcessParameters* params);
void QProcess_SetUnixProcessParameters2(QProcess* self, int flagsOnly);
libqt_string QProcess_WorkingDirectory(const QProcess* self);
void QProcess_SetWorkingDirectory(QProcess* self, const libqt_string dir);
void QProcess_SetEnvironment(QProcess* self, const libqt_list /* of libqt_string */ environment);
libqt_list /* of libqt_string */ QProcess_Environment(const QProcess* self);
void QProcess_SetProcessEnvironment(QProcess* self, const QProcessEnvironment* environment);
QProcessEnvironment* QProcess_ProcessEnvironment(const QProcess* self);
int QProcess_Error(const QProcess* self);
int QProcess_State(const QProcess* self);
long long QProcess_ProcessId(const QProcess* self);
bool QProcess_WaitForStarted(QProcess* self);
bool QProcess_WaitForReadyRead(QProcess* self, int msecs);
bool QProcess_WaitForBytesWritten(QProcess* self, int msecs);
bool QProcess_WaitForFinished(QProcess* self);
libqt_string QProcess_ReadAllStandardOutput(QProcess* self);
libqt_string QProcess_ReadAllStandardError(QProcess* self);
int QProcess_ExitCode(const QProcess* self);
int QProcess_ExitStatus(const QProcess* self);
long long QProcess_BytesToWrite(const QProcess* self);
bool QProcess_IsSequential(const QProcess* self);
void QProcess_Close(QProcess* self);
int QProcess_Execute(const libqt_string program);
bool QProcess_StartDetached2(const libqt_string program);
libqt_list /* of libqt_string */ QProcess_SystemEnvironment();
libqt_string QProcess_NullDevice();
void QProcess_Terminate(QProcess* self);
void QProcess_Kill(QProcess* self);
void QProcess_Finished(QProcess* self, int exitCode);
void QProcess_Connect_Finished(QProcess* self, intptr_t slot);
void QProcess_ErrorOccurred(QProcess* self, int errorVal);
void QProcess_Connect_ErrorOccurred(QProcess* self, intptr_t slot);
long long QProcess_ReadData(QProcess* self, char* data, long long maxlen);
long long QProcess_WriteData(QProcess* self, const char* data, long long lenVal);
libqt_string QProcess_Tr2(const char* s, const char* c);
libqt_string QProcess_Tr3(const char* s, const char* c, int n);
void QProcess_Start22(QProcess* self, const libqt_string program, const libqt_list /* of libqt_string */ arguments);
void QProcess_Start3(QProcess* self, const libqt_string program, const libqt_list /* of libqt_string */ arguments, int mode);
void QProcess_Start1(QProcess* self, int mode);
void QProcess_StartCommand2(QProcess* self, const libqt_string command, int mode);
bool QProcess_StartDetached1(QProcess* self, long long* pid);
void QProcess_SetStandardOutputFile2(QProcess* self, const libqt_string fileName, int mode);
void QProcess_SetStandardErrorFile2(QProcess* self, const libqt_string fileName, int mode);
void QProcess_FailChildProcessModifier2(QProcess* self, const char* description, int errorVal);
bool QProcess_WaitForStarted1(QProcess* self, int msecs);
bool QProcess_WaitForFinished1(QProcess* self, int msecs);
int QProcess_Execute2(const libqt_string program, const libqt_list /* of libqt_string */ arguments);
bool QProcess_StartDetached22(const libqt_string program, const libqt_list /* of libqt_string */ arguments);
bool QProcess_StartDetached3(const libqt_string program, const libqt_list /* of libqt_string */ arguments, const libqt_string workingDirectory);
bool QProcess_StartDetached4(const libqt_string program, const libqt_list /* of libqt_string */ arguments, const libqt_string workingDirectory, long long* pid);
void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus);
void QProcess_Connect_Finished2(QProcess* self, intptr_t slot);
void QProcess_OnMetacall(QProcess* self, intptr_t slot);
int QProcess_QBaseMetacall(QProcess* self, int param1, int param2, void** param3);
void QProcess_OnOpen(QProcess* self, intptr_t slot);
bool QProcess_QBaseOpen(QProcess* self, int mode);
void QProcess_OnWaitForReadyRead(QProcess* self, intptr_t slot);
bool QProcess_QBaseWaitForReadyRead(QProcess* self, int msecs);
void QProcess_OnWaitForBytesWritten(QProcess* self, intptr_t slot);
bool QProcess_QBaseWaitForBytesWritten(QProcess* self, int msecs);
void QProcess_OnBytesToWrite(const QProcess* self, intptr_t slot);
long long QProcess_QBaseBytesToWrite(const QProcess* self);
void QProcess_OnIsSequential(const QProcess* self, intptr_t slot);
bool QProcess_QBaseIsSequential(const QProcess* self);
void QProcess_OnClose(QProcess* self, intptr_t slot);
void QProcess_QBaseClose(QProcess* self);
void QProcess_OnReadData(QProcess* self, intptr_t slot);
long long QProcess_QBaseReadData(QProcess* self, char* data, long long maxlen);
void QProcess_OnWriteData(QProcess* self, intptr_t slot);
long long QProcess_QBaseWriteData(QProcess* self, const char* data, long long lenVal);
long long QProcess_Pos(const QProcess* self);
void QProcess_OnPos(const QProcess* self, intptr_t slot);
long long QProcess_QBasePos(const QProcess* self);
long long QProcess_Size(const QProcess* self);
void QProcess_OnSize(const QProcess* self, intptr_t slot);
long long QProcess_QBaseSize(const QProcess* self);
bool QProcess_Seek(QProcess* self, long long pos);
void QProcess_OnSeek(QProcess* self, intptr_t slot);
bool QProcess_QBaseSeek(QProcess* self, long long pos);
bool QProcess_AtEnd(const QProcess* self);
void QProcess_OnAtEnd(const QProcess* self, intptr_t slot);
bool QProcess_QBaseAtEnd(const QProcess* self);
bool QProcess_Reset(QProcess* self);
void QProcess_OnReset(QProcess* self, intptr_t slot);
bool QProcess_QBaseReset(QProcess* self);
long long QProcess_BytesAvailable(const QProcess* self);
void QProcess_OnBytesAvailable(const QProcess* self, intptr_t slot);
long long QProcess_QBaseBytesAvailable(const QProcess* self);
bool QProcess_CanReadLine(const QProcess* self);
void QProcess_OnCanReadLine(const QProcess* self, intptr_t slot);
bool QProcess_QBaseCanReadLine(const QProcess* self);
long long QProcess_ReadLineData(QProcess* self, char* data, long long maxlen);
void QProcess_OnReadLineData(QProcess* self, intptr_t slot);
long long QProcess_QBaseReadLineData(QProcess* self, char* data, long long maxlen);
long long QProcess_SkipData(QProcess* self, long long maxSize);
void QProcess_OnSkipData(QProcess* self, intptr_t slot);
long long QProcess_QBaseSkipData(QProcess* self, long long maxSize);
bool QProcess_Event(QProcess* self, QEvent* event);
void QProcess_OnEvent(QProcess* self, intptr_t slot);
bool QProcess_QBaseEvent(QProcess* self, QEvent* event);
bool QProcess_EventFilter(QProcess* self, QObject* watched, QEvent* event);
void QProcess_OnEventFilter(QProcess* self, intptr_t slot);
bool QProcess_QBaseEventFilter(QProcess* self, QObject* watched, QEvent* event);
void QProcess_TimerEvent(QProcess* self, QTimerEvent* event);
void QProcess_OnTimerEvent(QProcess* self, intptr_t slot);
void QProcess_QBaseTimerEvent(QProcess* self, QTimerEvent* event);
void QProcess_ChildEvent(QProcess* self, QChildEvent* event);
void QProcess_OnChildEvent(QProcess* self, intptr_t slot);
void QProcess_QBaseChildEvent(QProcess* self, QChildEvent* event);
void QProcess_CustomEvent(QProcess* self, QEvent* event);
void QProcess_OnCustomEvent(QProcess* self, intptr_t slot);
void QProcess_QBaseCustomEvent(QProcess* self, QEvent* event);
void QProcess_ConnectNotify(QProcess* self, const QMetaMethod* signal);
void QProcess_OnConnectNotify(QProcess* self, intptr_t slot);
void QProcess_QBaseConnectNotify(QProcess* self, const QMetaMethod* signal);
void QProcess_DisconnectNotify(QProcess* self, const QMetaMethod* signal);
void QProcess_OnDisconnectNotify(QProcess* self, intptr_t slot);
void QProcess_QBaseDisconnectNotify(QProcess* self, const QMetaMethod* signal);
void QProcess_SetProcessState(QProcess* self, int state);
void QProcess_OnSetProcessState(QProcess* self, intptr_t slot);
void QProcess_QBaseSetProcessState(QProcess* self, int state);
void QProcess_SetOpenMode(QProcess* self, int openMode);
void QProcess_OnSetOpenMode(QProcess* self, intptr_t slot);
void QProcess_QBaseSetOpenMode(QProcess* self, int openMode);
void QProcess_SetErrorString(QProcess* self, const libqt_string errorString);
void QProcess_OnSetErrorString(QProcess* self, intptr_t slot);
void QProcess_QBaseSetErrorString(QProcess* self, const libqt_string errorString);
QObject* QProcess_Sender(const QProcess* self);
void QProcess_OnSender(const QProcess* self, intptr_t slot);
QObject* QProcess_QBaseSender(const QProcess* self);
int QProcess_SenderSignalIndex(const QProcess* self);
void QProcess_OnSenderSignalIndex(const QProcess* self, intptr_t slot);
int QProcess_QBaseSenderSignalIndex(const QProcess* self);
int QProcess_Receivers(const QProcess* self, const char* signal);
void QProcess_OnReceivers(const QProcess* self, intptr_t slot);
int QProcess_QBaseReceivers(const QProcess* self, const char* signal);
bool QProcess_IsSignalConnected(const QProcess* self, const QMetaMethod* signal);
void QProcess_OnIsSignalConnected(const QProcess* self, intptr_t slot);
bool QProcess_QBaseIsSignalConnected(const QProcess* self, const QMetaMethod* signal);
void QProcess_Connect_Started(QProcess* self, intptr_t slot);
void QProcess_Connect_StateChanged(QProcess* self, intptr_t slot);
void QProcess_Connect_ReadyReadStandardOutput(QProcess* self, intptr_t slot);
void QProcess_Connect_ReadyReadStandardError(QProcess* self, intptr_t slot);
void QProcess_Delete(QProcess* self);

QProcess__UnixProcessParameters* QProcess__UnixProcessParameters_new(const QProcess__UnixProcessParameters* other);
QProcess__UnixProcessParameters* QProcess__UnixProcessParameters_new2(QProcess__UnixProcessParameters* other);
void QProcess__UnixProcessParameters_CopyAssign(QProcess__UnixProcessParameters* self, QProcess__UnixProcessParameters* other);
void QProcess__UnixProcessParameters_MoveAssign(QProcess__UnixProcessParameters* self, QProcess__UnixProcessParameters* other);
int QProcess__UnixProcessParameters_Flags(const QProcess__UnixProcessParameters* self);
void QProcess__UnixProcessParameters_SetFlags(QProcess__UnixProcessParameters* self, int flags);
int QProcess__UnixProcessParameters_LowestFileDescriptorToClose(const QProcess__UnixProcessParameters* self);
void QProcess__UnixProcessParameters_SetLowestFileDescriptorToClose(QProcess__UnixProcessParameters* self, int lowestFileDescriptorToClose);
void QProcess__UnixProcessParameters_Delete(QProcess__UnixProcessParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
