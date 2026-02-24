#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBOPENURLJOB_H
#define SRC_EXTRAS_KIOC_LIBOPENURLJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenUrlJob)
typedef KIO::OpenUrlJob KIO__OpenUrlJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__OpenUrlJob KIO__OpenUrlJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__OpenUrlJob* KIO__OpenUrlJob_new(const QUrl* url);
KIO__OpenUrlJob* KIO__OpenUrlJob_new2(const QUrl* url, const libqt_string mimeType);
KIO__OpenUrlJob* KIO__OpenUrlJob_new3(const QUrl* url, QObject* parent);
KIO__OpenUrlJob* KIO__OpenUrlJob_new4(const QUrl* url, const libqt_string mimeType, QObject* parent);
QMetaObject* KIO__OpenUrlJob_MetaObject(const KIO__OpenUrlJob* self);
void* KIO__OpenUrlJob_Metacast(KIO__OpenUrlJob* self, const char* param1);
int KIO__OpenUrlJob_Metacall(KIO__OpenUrlJob* self, int param1, int param2, void** param3);
void KIO__OpenUrlJob_SetDeleteTemporaryFile(KIO__OpenUrlJob* self, bool b);
void KIO__OpenUrlJob_SetSuggestedFileName(KIO__OpenUrlJob* self, const libqt_string suggestedFileName);
void KIO__OpenUrlJob_SetStartupId(KIO__OpenUrlJob* self, const libqt_string startupId);
void KIO__OpenUrlJob_SetRunExecutables(KIO__OpenUrlJob* self, bool allow);
void KIO__OpenUrlJob_SetShowOpenOrExecuteDialog(KIO__OpenUrlJob* self, bool b);
void KIO__OpenUrlJob_SetEnableExternalBrowser(KIO__OpenUrlJob* self, bool b);
void KIO__OpenUrlJob_SetFollowRedirections(KIO__OpenUrlJob* self, bool b);
void KIO__OpenUrlJob_Start(KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_IsExecutableFile(const QUrl* url, const libqt_string mimetypeName);
void KIO__OpenUrlJob_MimeTypeFound(KIO__OpenUrlJob* self, const libqt_string mimeType);
void KIO__OpenUrlJob_Connect_MimeTypeFound(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_DoKill(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnMetaObject(const KIO__OpenUrlJob* self, intptr_t slot);
QMetaObject* KIO__OpenUrlJob_SuperMetaObject(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnMetacast(KIO__OpenUrlJob* self, intptr_t slot);
void* KIO__OpenUrlJob_SuperMetacast(KIO__OpenUrlJob* self, const char* param1);
void KIO__OpenUrlJob_OnMetacall(KIO__OpenUrlJob* self, intptr_t slot);
int KIO__OpenUrlJob_SuperMetacall(KIO__OpenUrlJob* self, int param1, int param2, void** param3);
void KIO__OpenUrlJob_OnStart(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperStart(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnDoKill(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperDoKill(KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_AddSubjob(KIO__OpenUrlJob* self, KJob* job);
void KIO__OpenUrlJob_OnAddSubjob(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperAddSubjob(KIO__OpenUrlJob* self, KJob* job);
bool KIO__OpenUrlJob_RemoveSubjob(KIO__OpenUrlJob* self, KJob* job);
void KIO__OpenUrlJob_OnRemoveSubjob(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperRemoveSubjob(KIO__OpenUrlJob* self, KJob* job);
void KIO__OpenUrlJob_SlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message);
void KIO__OpenUrlJob_OnSlotInfoMessage(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message);
bool KIO__OpenUrlJob_DoSuspend(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnDoSuspend(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperDoSuspend(KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_DoResume(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnDoResume(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperDoResume(KIO__OpenUrlJob* self);
libqt_string KIO__OpenUrlJob_ErrorString(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnErrorString(const KIO__OpenUrlJob* self, intptr_t slot);
libqt_string KIO__OpenUrlJob_SuperErrorString(const KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_Event(KIO__OpenUrlJob* self, QEvent* event);
void KIO__OpenUrlJob_OnEvent(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperEvent(KIO__OpenUrlJob* self, QEvent* event);
bool KIO__OpenUrlJob_EventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event);
void KIO__OpenUrlJob_OnEventFilter(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperEventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event);
void KIO__OpenUrlJob_TimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event);
void KIO__OpenUrlJob_OnTimerEvent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperTimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event);
void KIO__OpenUrlJob_ChildEvent(KIO__OpenUrlJob* self, QChildEvent* event);
void KIO__OpenUrlJob_OnChildEvent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperChildEvent(KIO__OpenUrlJob* self, QChildEvent* event);
void KIO__OpenUrlJob_CustomEvent(KIO__OpenUrlJob* self, QEvent* event);
void KIO__OpenUrlJob_OnCustomEvent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperCustomEvent(KIO__OpenUrlJob* self, QEvent* event);
void KIO__OpenUrlJob_ConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_OnConnectNotify(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_DisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_OnDisconnectNotify(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperDisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
bool KIO__OpenUrlJob_HasSubjobs(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnHasSubjobs(const KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperHasSubjobs(const KIO__OpenUrlJob* self);
libqt_list /* of KJob* */ KIO__OpenUrlJob_Subjobs(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnSubjobs(const KIO__OpenUrlJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__OpenUrlJob_SuperSubjobs(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_ClearSubjobs(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnClearSubjobs(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperClearSubjobs(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_SetCapabilities(KIO__OpenUrlJob* self, int capabilities);
void KIO__OpenUrlJob_OnSetCapabilities(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetCapabilities(KIO__OpenUrlJob* self, int capabilities);
bool KIO__OpenUrlJob_IsFinished(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnIsFinished(const KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperIsFinished(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_SetError(KIO__OpenUrlJob* self, int errorCode);
void KIO__OpenUrlJob_OnSetError(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetError(KIO__OpenUrlJob* self, int errorCode);
void KIO__OpenUrlJob_SetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText);
void KIO__OpenUrlJob_OnSetErrorText(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText);
void KIO__OpenUrlJob_SetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_OnSetProcessedAmount(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_SetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_OnSetTotalAmount(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_SetProgressUnit(KIO__OpenUrlJob* self, int unit);
void KIO__OpenUrlJob_OnSetProgressUnit(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetProgressUnit(KIO__OpenUrlJob* self, int unit);
void KIO__OpenUrlJob_SetPercent(KIO__OpenUrlJob* self, unsigned long percentage);
void KIO__OpenUrlJob_OnSetPercent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperSetPercent(KIO__OpenUrlJob* self, unsigned long percentage);
void KIO__OpenUrlJob_EmitResult(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnEmitResult(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperEmitResult(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_EmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenUrlJob_OnEmitPercent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperEmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenUrlJob_EmitSpeed(KIO__OpenUrlJob* self, unsigned long speed);
void KIO__OpenUrlJob_OnEmitSpeed(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperEmitSpeed(KIO__OpenUrlJob* self, unsigned long speed);
void KIO__OpenUrlJob_StartElapsedTimer(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnStartElapsedTimer(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_SuperStartElapsedTimer(KIO__OpenUrlJob* self);
QObject* KIO__OpenUrlJob_Sender(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnSender(const KIO__OpenUrlJob* self, intptr_t slot);
QObject* KIO__OpenUrlJob_SuperSender(const KIO__OpenUrlJob* self);
int KIO__OpenUrlJob_SenderSignalIndex(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnSenderSignalIndex(const KIO__OpenUrlJob* self, intptr_t slot);
int KIO__OpenUrlJob_SuperSenderSignalIndex(const KIO__OpenUrlJob* self);
int KIO__OpenUrlJob_Receivers(const KIO__OpenUrlJob* self, const char* signal);
void KIO__OpenUrlJob_OnReceivers(const KIO__OpenUrlJob* self, intptr_t slot);
int KIO__OpenUrlJob_SuperReceivers(const KIO__OpenUrlJob* self, const char* signal);
bool KIO__OpenUrlJob_IsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_OnIsSignalConnected(const KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_SuperIsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_Delete(KIO__OpenUrlJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
