#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBAPPLICATIONLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBAPPLICATIONLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__ApplicationLauncherJob)
typedef KIO::ApplicationLauncherJob KIO__ApplicationLauncherJob;
#endif
#else
typedef struct KDesktopFileAction KDesktopFileAction;
typedef struct KIO__ApplicationLauncherJob KIO__ApplicationLauncherJob;
typedef struct KJob KJob;
typedef struct KServiceAction KServiceAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new(const KServiceAction* serviceAction);
KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new2(const KDesktopFileAction* desktopFileAction);
KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new3();
KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new4(const KServiceAction* serviceAction, QObject* parent);
KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new5(const KDesktopFileAction* desktopFileAction, QObject* parent);
KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new6(QObject* parent);
void KIO__ApplicationLauncherJob_SetUrls(KIO__ApplicationLauncherJob* self, const libqt_list /* of QUrl* */ urls);
void KIO__ApplicationLauncherJob_SetRunFlags(KIO__ApplicationLauncherJob* self, int runFlags);
void KIO__ApplicationLauncherJob_SetSuggestedFileName(KIO__ApplicationLauncherJob* self, const libqt_string suggestedFileName);
void KIO__ApplicationLauncherJob_SetStartupId(KIO__ApplicationLauncherJob* self, const libqt_string startupId);
void KIO__ApplicationLauncherJob_Start(KIO__ApplicationLauncherJob* self);
long long KIO__ApplicationLauncherJob_Pid(const KIO__ApplicationLauncherJob* self);
libqt_list /* of long long */ KIO__ApplicationLauncherJob_Pids(const KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnStart(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseStart(KIO__ApplicationLauncherJob* self);
int KIO__ApplicationLauncherJob_Metacall(KIO__ApplicationLauncherJob* self, int param1, int param2, void** param3);
void KIO__ApplicationLauncherJob_OnMetacall(KIO__ApplicationLauncherJob* self, intptr_t slot);
int KIO__ApplicationLauncherJob_QBaseMetacall(KIO__ApplicationLauncherJob* self, int param1, int param2, void** param3);
bool KIO__ApplicationLauncherJob_DoKill(KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnDoKill(KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseDoKill(KIO__ApplicationLauncherJob* self);
bool KIO__ApplicationLauncherJob_DoSuspend(KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnDoSuspend(KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseDoSuspend(KIO__ApplicationLauncherJob* self);
bool KIO__ApplicationLauncherJob_DoResume(KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnDoResume(KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseDoResume(KIO__ApplicationLauncherJob* self);
libqt_string KIO__ApplicationLauncherJob_ErrorString(const KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnErrorString(const KIO__ApplicationLauncherJob* self, intptr_t slot);
libqt_string KIO__ApplicationLauncherJob_QBaseErrorString(const KIO__ApplicationLauncherJob* self);
bool KIO__ApplicationLauncherJob_Event(KIO__ApplicationLauncherJob* self, QEvent* event);
void KIO__ApplicationLauncherJob_OnEvent(KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseEvent(KIO__ApplicationLauncherJob* self, QEvent* event);
bool KIO__ApplicationLauncherJob_EventFilter(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event);
void KIO__ApplicationLauncherJob_OnEventFilter(KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseEventFilter(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event);
void KIO__ApplicationLauncherJob_TimerEvent(KIO__ApplicationLauncherJob* self, QTimerEvent* event);
void KIO__ApplicationLauncherJob_OnTimerEvent(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseTimerEvent(KIO__ApplicationLauncherJob* self, QTimerEvent* event);
void KIO__ApplicationLauncherJob_ChildEvent(KIO__ApplicationLauncherJob* self, QChildEvent* event);
void KIO__ApplicationLauncherJob_OnChildEvent(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseChildEvent(KIO__ApplicationLauncherJob* self, QChildEvent* event);
void KIO__ApplicationLauncherJob_CustomEvent(KIO__ApplicationLauncherJob* self, QEvent* event);
void KIO__ApplicationLauncherJob_OnCustomEvent(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseCustomEvent(KIO__ApplicationLauncherJob* self, QEvent* event);
void KIO__ApplicationLauncherJob_ConnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal);
void KIO__ApplicationLauncherJob_OnConnectNotify(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseConnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal);
void KIO__ApplicationLauncherJob_DisconnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal);
void KIO__ApplicationLauncherJob_OnDisconnectNotify(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseDisconnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal);
void KIO__ApplicationLauncherJob_SetCapabilities(KIO__ApplicationLauncherJob* self, int capabilities);
void KIO__ApplicationLauncherJob_OnSetCapabilities(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetCapabilities(KIO__ApplicationLauncherJob* self, int capabilities);
bool KIO__ApplicationLauncherJob_IsFinished(const KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnIsFinished(const KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseIsFinished(const KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_SetError(KIO__ApplicationLauncherJob* self, int errorCode);
void KIO__ApplicationLauncherJob_OnSetError(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetError(KIO__ApplicationLauncherJob* self, int errorCode);
void KIO__ApplicationLauncherJob_SetErrorText(KIO__ApplicationLauncherJob* self, const libqt_string errorText);
void KIO__ApplicationLauncherJob_OnSetErrorText(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetErrorText(KIO__ApplicationLauncherJob* self, const libqt_string errorText);
void KIO__ApplicationLauncherJob_SetProcessedAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount);
void KIO__ApplicationLauncherJob_OnSetProcessedAmount(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetProcessedAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount);
void KIO__ApplicationLauncherJob_SetTotalAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount);
void KIO__ApplicationLauncherJob_OnSetTotalAmount(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetTotalAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount);
void KIO__ApplicationLauncherJob_SetProgressUnit(KIO__ApplicationLauncherJob* self, int unit);
void KIO__ApplicationLauncherJob_OnSetProgressUnit(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetProgressUnit(KIO__ApplicationLauncherJob* self, int unit);
void KIO__ApplicationLauncherJob_SetPercent(KIO__ApplicationLauncherJob* self, unsigned long percentage);
void KIO__ApplicationLauncherJob_OnSetPercent(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseSetPercent(KIO__ApplicationLauncherJob* self, unsigned long percentage);
void KIO__ApplicationLauncherJob_EmitResult(KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnEmitResult(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseEmitResult(KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_EmitPercent(KIO__ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__ApplicationLauncherJob_OnEmitPercent(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseEmitPercent(KIO__ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__ApplicationLauncherJob_EmitSpeed(KIO__ApplicationLauncherJob* self, unsigned long speed);
void KIO__ApplicationLauncherJob_OnEmitSpeed(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseEmitSpeed(KIO__ApplicationLauncherJob* self, unsigned long speed);
void KIO__ApplicationLauncherJob_StartElapsedTimer(KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnStartElapsedTimer(KIO__ApplicationLauncherJob* self, intptr_t slot);
void KIO__ApplicationLauncherJob_QBaseStartElapsedTimer(KIO__ApplicationLauncherJob* self);
QObject* KIO__ApplicationLauncherJob_Sender(const KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnSender(const KIO__ApplicationLauncherJob* self, intptr_t slot);
QObject* KIO__ApplicationLauncherJob_QBaseSender(const KIO__ApplicationLauncherJob* self);
int KIO__ApplicationLauncherJob_SenderSignalIndex(const KIO__ApplicationLauncherJob* self);
void KIO__ApplicationLauncherJob_OnSenderSignalIndex(const KIO__ApplicationLauncherJob* self, intptr_t slot);
int KIO__ApplicationLauncherJob_QBaseSenderSignalIndex(const KIO__ApplicationLauncherJob* self);
int KIO__ApplicationLauncherJob_Receivers(const KIO__ApplicationLauncherJob* self, const char* signal);
void KIO__ApplicationLauncherJob_OnReceivers(const KIO__ApplicationLauncherJob* self, intptr_t slot);
int KIO__ApplicationLauncherJob_QBaseReceivers(const KIO__ApplicationLauncherJob* self, const char* signal);
bool KIO__ApplicationLauncherJob_IsSignalConnected(const KIO__ApplicationLauncherJob* self, const QMetaMethod* signal);
void KIO__ApplicationLauncherJob_OnIsSignalConnected(const KIO__ApplicationLauncherJob* self, intptr_t slot);
bool KIO__ApplicationLauncherJob_QBaseIsSignalConnected(const KIO__ApplicationLauncherJob* self, const QMetaMethod* signal);
void KIO__ApplicationLauncherJob_Delete(KIO__ApplicationLauncherJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
