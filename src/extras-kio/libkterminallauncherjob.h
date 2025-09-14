#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKTERMINALLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBKTERMINALLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KJob KJob;
typedef struct KTerminalLauncherJob KTerminalLauncherJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QProcessEnvironment QProcessEnvironment;
typedef struct QTimerEvent QTimerEvent;
#endif

KTerminalLauncherJob* KTerminalLauncherJob_new(const libqt_string command);
KTerminalLauncherJob* KTerminalLauncherJob_new2(const libqt_string command, QObject* parent);
QMetaObject* KTerminalLauncherJob_MetaObject(const KTerminalLauncherJob* self);
void* KTerminalLauncherJob_Metacast(KTerminalLauncherJob* self, const char* param1);
int KTerminalLauncherJob_Metacall(KTerminalLauncherJob* self, int param1, int param2, void** param3);
libqt_string KTerminalLauncherJob_Tr(const char* s);
void KTerminalLauncherJob_SetWorkingDirectory(KTerminalLauncherJob* self, const libqt_string workingDirectory);
void KTerminalLauncherJob_SetStartupId(KTerminalLauncherJob* self, const libqt_string startupId);
void KTerminalLauncherJob_SetProcessEnvironment(KTerminalLauncherJob* self, const QProcessEnvironment* environment);
void KTerminalLauncherJob_Start(KTerminalLauncherJob* self);
libqt_string KTerminalLauncherJob_Tr2(const char* s, const char* c);
libqt_string KTerminalLauncherJob_Tr3(const char* s, const char* c, int n);
void KTerminalLauncherJob_OnMetacall(KTerminalLauncherJob* self, intptr_t slot);
int KTerminalLauncherJob_QBaseMetacall(KTerminalLauncherJob* self, int param1, int param2, void** param3);
void KTerminalLauncherJob_OnStart(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseStart(KTerminalLauncherJob* self);
bool KTerminalLauncherJob_DoKill(KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnDoKill(KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseDoKill(KTerminalLauncherJob* self);
bool KTerminalLauncherJob_DoSuspend(KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnDoSuspend(KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseDoSuspend(KTerminalLauncherJob* self);
bool KTerminalLauncherJob_DoResume(KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnDoResume(KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseDoResume(KTerminalLauncherJob* self);
libqt_string KTerminalLauncherJob_ErrorString(const KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnErrorString(const KTerminalLauncherJob* self, intptr_t slot);
libqt_string KTerminalLauncherJob_QBaseErrorString(const KTerminalLauncherJob* self);
bool KTerminalLauncherJob_Event(KTerminalLauncherJob* self, QEvent* event);
void KTerminalLauncherJob_OnEvent(KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseEvent(KTerminalLauncherJob* self, QEvent* event);
bool KTerminalLauncherJob_EventFilter(KTerminalLauncherJob* self, QObject* watched, QEvent* event);
void KTerminalLauncherJob_OnEventFilter(KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseEventFilter(KTerminalLauncherJob* self, QObject* watched, QEvent* event);
void KTerminalLauncherJob_TimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
void KTerminalLauncherJob_OnTimerEvent(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseTimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
void KTerminalLauncherJob_ChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
void KTerminalLauncherJob_OnChildEvent(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
void KTerminalLauncherJob_CustomEvent(KTerminalLauncherJob* self, QEvent* event);
void KTerminalLauncherJob_OnCustomEvent(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseCustomEvent(KTerminalLauncherJob* self, QEvent* event);
void KTerminalLauncherJob_ConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
void KTerminalLauncherJob_OnConnectNotify(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
void KTerminalLauncherJob_DisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
void KTerminalLauncherJob_OnDisconnectNotify(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseDisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
void KTerminalLauncherJob_SetCapabilities(KTerminalLauncherJob* self, int capabilities);
void KTerminalLauncherJob_OnSetCapabilities(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetCapabilities(KTerminalLauncherJob* self, int capabilities);
bool KTerminalLauncherJob_IsFinished(const KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnIsFinished(const KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseIsFinished(const KTerminalLauncherJob* self);
void KTerminalLauncherJob_SetError(KTerminalLauncherJob* self, int errorCode);
void KTerminalLauncherJob_OnSetError(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetError(KTerminalLauncherJob* self, int errorCode);
void KTerminalLauncherJob_SetErrorText(KTerminalLauncherJob* self, const libqt_string errorText);
void KTerminalLauncherJob_OnSetErrorText(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetErrorText(KTerminalLauncherJob* self, const libqt_string errorText);
void KTerminalLauncherJob_SetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
void KTerminalLauncherJob_OnSetProcessedAmount(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
void KTerminalLauncherJob_SetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
void KTerminalLauncherJob_OnSetTotalAmount(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
void KTerminalLauncherJob_SetProgressUnit(KTerminalLauncherJob* self, int unit);
void KTerminalLauncherJob_OnSetProgressUnit(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetProgressUnit(KTerminalLauncherJob* self, int unit);
void KTerminalLauncherJob_SetPercent(KTerminalLauncherJob* self, unsigned long percentage);
void KTerminalLauncherJob_OnSetPercent(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseSetPercent(KTerminalLauncherJob* self, unsigned long percentage);
void KTerminalLauncherJob_EmitResult(KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnEmitResult(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseEmitResult(KTerminalLauncherJob* self);
void KTerminalLauncherJob_EmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KTerminalLauncherJob_OnEmitPercent(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseEmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KTerminalLauncherJob_EmitSpeed(KTerminalLauncherJob* self, unsigned long speed);
void KTerminalLauncherJob_OnEmitSpeed(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseEmitSpeed(KTerminalLauncherJob* self, unsigned long speed);
void KTerminalLauncherJob_StartElapsedTimer(KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnStartElapsedTimer(KTerminalLauncherJob* self, intptr_t slot);
void KTerminalLauncherJob_QBaseStartElapsedTimer(KTerminalLauncherJob* self);
QObject* KTerminalLauncherJob_Sender(const KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnSender(const KTerminalLauncherJob* self, intptr_t slot);
QObject* KTerminalLauncherJob_QBaseSender(const KTerminalLauncherJob* self);
int KTerminalLauncherJob_SenderSignalIndex(const KTerminalLauncherJob* self);
void KTerminalLauncherJob_OnSenderSignalIndex(const KTerminalLauncherJob* self, intptr_t slot);
int KTerminalLauncherJob_QBaseSenderSignalIndex(const KTerminalLauncherJob* self);
int KTerminalLauncherJob_Receivers(const KTerminalLauncherJob* self, const char* signal);
void KTerminalLauncherJob_OnReceivers(const KTerminalLauncherJob* self, intptr_t slot);
int KTerminalLauncherJob_QBaseReceivers(const KTerminalLauncherJob* self, const char* signal);
bool KTerminalLauncherJob_IsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal);
void KTerminalLauncherJob_OnIsSignalConnected(const KTerminalLauncherJob* self, intptr_t slot);
bool KTerminalLauncherJob_QBaseIsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal);
void KTerminalLauncherJob_Delete(KTerminalLauncherJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
