#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBCOMMANDLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBCOMMANDLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__CommandLauncherJob)
typedef KIO::CommandLauncherJob KIO__CommandLauncherJob;
#endif
#else
typedef struct KIO__CommandLauncherJob KIO__CommandLauncherJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QProcessEnvironment QProcessEnvironment;
typedef struct QTimerEvent QTimerEvent;
#endif

KIO__CommandLauncherJob* KIO__CommandLauncherJob_new(const libqt_string command);
KIO__CommandLauncherJob* KIO__CommandLauncherJob_new2(const libqt_string executable, const libqt_list /* of libqt_string */ args);
KIO__CommandLauncherJob* KIO__CommandLauncherJob_new3(const libqt_string command, QObject* parent);
KIO__CommandLauncherJob* KIO__CommandLauncherJob_new4(const libqt_string executable, const libqt_list /* of libqt_string */ args, QObject* parent);
void KIO__CommandLauncherJob_SetCommand(KIO__CommandLauncherJob* self, const libqt_string command);
libqt_string KIO__CommandLauncherJob_Command(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_SetExecutable(KIO__CommandLauncherJob* self, const libqt_string executable);
void KIO__CommandLauncherJob_SetDesktopName(KIO__CommandLauncherJob* self, const libqt_string desktopName);
void KIO__CommandLauncherJob_SetStartupId(KIO__CommandLauncherJob* self, const libqt_string startupId);
void KIO__CommandLauncherJob_SetWorkingDirectory(KIO__CommandLauncherJob* self, const libqt_string workingDirectory);
libqt_string KIO__CommandLauncherJob_WorkingDirectory(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_SetProcessEnvironment(KIO__CommandLauncherJob* self, const QProcessEnvironment* environment);
void KIO__CommandLauncherJob_Start(KIO__CommandLauncherJob* self);
long long KIO__CommandLauncherJob_Pid(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnStart(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperStart(KIO__CommandLauncherJob* self);
QMetaObject* KIO__CommandLauncherJob_MetaObject(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnMetaObject(const KIO__CommandLauncherJob* self, intptr_t slot);
QMetaObject* KIO__CommandLauncherJob_SuperMetaObject(const KIO__CommandLauncherJob* self);
void* KIO__CommandLauncherJob_Metacast(KIO__CommandLauncherJob* self, const char* param1);
void KIO__CommandLauncherJob_OnMetacast(KIO__CommandLauncherJob* self, intptr_t slot);
void* KIO__CommandLauncherJob_SuperMetacast(KIO__CommandLauncherJob* self, const char* param1);
int KIO__CommandLauncherJob_Metacall(KIO__CommandLauncherJob* self, int param1, int param2, void** param3);
void KIO__CommandLauncherJob_OnMetacall(KIO__CommandLauncherJob* self, intptr_t slot);
int KIO__CommandLauncherJob_SuperMetacall(KIO__CommandLauncherJob* self, int param1, int param2, void** param3);
bool KIO__CommandLauncherJob_DoKill(KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnDoKill(KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperDoKill(KIO__CommandLauncherJob* self);
bool KIO__CommandLauncherJob_DoSuspend(KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnDoSuspend(KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperDoSuspend(KIO__CommandLauncherJob* self);
bool KIO__CommandLauncherJob_DoResume(KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnDoResume(KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperDoResume(KIO__CommandLauncherJob* self);
libqt_string KIO__CommandLauncherJob_ErrorString(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnErrorString(const KIO__CommandLauncherJob* self, intptr_t slot);
libqt_string KIO__CommandLauncherJob_SuperErrorString(const KIO__CommandLauncherJob* self);
bool KIO__CommandLauncherJob_Event(KIO__CommandLauncherJob* self, QEvent* event);
void KIO__CommandLauncherJob_OnEvent(KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperEvent(KIO__CommandLauncherJob* self, QEvent* event);
bool KIO__CommandLauncherJob_EventFilter(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event);
void KIO__CommandLauncherJob_OnEventFilter(KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperEventFilter(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event);
void KIO__CommandLauncherJob_TimerEvent(KIO__CommandLauncherJob* self, QTimerEvent* event);
void KIO__CommandLauncherJob_OnTimerEvent(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperTimerEvent(KIO__CommandLauncherJob* self, QTimerEvent* event);
void KIO__CommandLauncherJob_ChildEvent(KIO__CommandLauncherJob* self, QChildEvent* event);
void KIO__CommandLauncherJob_OnChildEvent(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperChildEvent(KIO__CommandLauncherJob* self, QChildEvent* event);
void KIO__CommandLauncherJob_CustomEvent(KIO__CommandLauncherJob* self, QEvent* event);
void KIO__CommandLauncherJob_OnCustomEvent(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperCustomEvent(KIO__CommandLauncherJob* self, QEvent* event);
void KIO__CommandLauncherJob_ConnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal);
void KIO__CommandLauncherJob_OnConnectNotify(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperConnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal);
void KIO__CommandLauncherJob_DisconnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal);
void KIO__CommandLauncherJob_OnDisconnectNotify(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperDisconnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal);
void KIO__CommandLauncherJob_SetCapabilities(KIO__CommandLauncherJob* self, int capabilities);
void KIO__CommandLauncherJob_OnSetCapabilities(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetCapabilities(KIO__CommandLauncherJob* self, int capabilities);
bool KIO__CommandLauncherJob_IsFinished(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnIsFinished(const KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperIsFinished(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_SetError(KIO__CommandLauncherJob* self, int errorCode);
void KIO__CommandLauncherJob_OnSetError(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetError(KIO__CommandLauncherJob* self, int errorCode);
void KIO__CommandLauncherJob_SetErrorText(KIO__CommandLauncherJob* self, const libqt_string errorText);
void KIO__CommandLauncherJob_OnSetErrorText(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetErrorText(KIO__CommandLauncherJob* self, const libqt_string errorText);
void KIO__CommandLauncherJob_SetProcessedAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount);
void KIO__CommandLauncherJob_OnSetProcessedAmount(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetProcessedAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount);
void KIO__CommandLauncherJob_SetTotalAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount);
void KIO__CommandLauncherJob_OnSetTotalAmount(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetTotalAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount);
void KIO__CommandLauncherJob_SetProgressUnit(KIO__CommandLauncherJob* self, int unit);
void KIO__CommandLauncherJob_OnSetProgressUnit(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetProgressUnit(KIO__CommandLauncherJob* self, int unit);
void KIO__CommandLauncherJob_SetPercent(KIO__CommandLauncherJob* self, unsigned long percentage);
void KIO__CommandLauncherJob_OnSetPercent(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperSetPercent(KIO__CommandLauncherJob* self, unsigned long percentage);
void KIO__CommandLauncherJob_EmitResult(KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnEmitResult(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperEmitResult(KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_EmitPercent(KIO__CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__CommandLauncherJob_OnEmitPercent(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperEmitPercent(KIO__CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__CommandLauncherJob_EmitSpeed(KIO__CommandLauncherJob* self, unsigned long speed);
void KIO__CommandLauncherJob_OnEmitSpeed(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperEmitSpeed(KIO__CommandLauncherJob* self, unsigned long speed);
void KIO__CommandLauncherJob_StartElapsedTimer(KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnStartElapsedTimer(KIO__CommandLauncherJob* self, intptr_t slot);
void KIO__CommandLauncherJob_SuperStartElapsedTimer(KIO__CommandLauncherJob* self);
QObject* KIO__CommandLauncherJob_Sender(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnSender(const KIO__CommandLauncherJob* self, intptr_t slot);
QObject* KIO__CommandLauncherJob_SuperSender(const KIO__CommandLauncherJob* self);
int KIO__CommandLauncherJob_SenderSignalIndex(const KIO__CommandLauncherJob* self);
void KIO__CommandLauncherJob_OnSenderSignalIndex(const KIO__CommandLauncherJob* self, intptr_t slot);
int KIO__CommandLauncherJob_SuperSenderSignalIndex(const KIO__CommandLauncherJob* self);
int KIO__CommandLauncherJob_Receivers(const KIO__CommandLauncherJob* self, const char* signal);
void KIO__CommandLauncherJob_OnReceivers(const KIO__CommandLauncherJob* self, intptr_t slot);
int KIO__CommandLauncherJob_SuperReceivers(const KIO__CommandLauncherJob* self, const char* signal);
bool KIO__CommandLauncherJob_IsSignalConnected(const KIO__CommandLauncherJob* self, const QMetaMethod* signal);
void KIO__CommandLauncherJob_OnIsSignalConnected(const KIO__CommandLauncherJob* self, intptr_t slot);
bool KIO__CommandLauncherJob_SuperIsSignalConnected(const KIO__CommandLauncherJob* self, const QMetaMethod* signal);
void KIO__CommandLauncherJob_Delete(KIO__CommandLauncherJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
