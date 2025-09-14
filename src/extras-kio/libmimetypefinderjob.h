#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBMIMETYPEFINDERJOB_H
#define SRC_EXTRAS_KIOC_LIBMIMETYPEFINDERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__MimeTypeFinderJob)
typedef KIO::MimeTypeFinderJob KIO__MimeTypeFinderJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__MimeTypeFinderJob KIO__MimeTypeFinderJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__MimeTypeFinderJob* KIO__MimeTypeFinderJob_new(const QUrl* url);
KIO__MimeTypeFinderJob* KIO__MimeTypeFinderJob_new2(const QUrl* url, QObject* parent);
QMetaObject* KIO__MimeTypeFinderJob_MetaObject(const KIO__MimeTypeFinderJob* self);
void* KIO__MimeTypeFinderJob_Metacast(KIO__MimeTypeFinderJob* self, const char* param1);
int KIO__MimeTypeFinderJob_Metacall(KIO__MimeTypeFinderJob* self, int param1, int param2, void** param3);
libqt_string KIO__MimeTypeFinderJob_Tr(const char* s);
void KIO__MimeTypeFinderJob_SetFollowRedirections(KIO__MimeTypeFinderJob* self, bool b);
void KIO__MimeTypeFinderJob_SetSuggestedFileName(KIO__MimeTypeFinderJob* self, const libqt_string suggestedFileName);
libqt_string KIO__MimeTypeFinderJob_SuggestedFileName(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_SetAuthenticationPromptEnabled(KIO__MimeTypeFinderJob* self, bool enable);
bool KIO__MimeTypeFinderJob_IsAuthenticationPromptEnabled(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_Start(KIO__MimeTypeFinderJob* self);
libqt_string KIO__MimeTypeFinderJob_MimeType(const KIO__MimeTypeFinderJob* self);
bool KIO__MimeTypeFinderJob_DoKill(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_SlotResult(KIO__MimeTypeFinderJob* self, KJob* job);
libqt_string KIO__MimeTypeFinderJob_Tr2(const char* s, const char* c);
libqt_string KIO__MimeTypeFinderJob_Tr3(const char* s, const char* c, int n);
void KIO__MimeTypeFinderJob_OnMetacall(KIO__MimeTypeFinderJob* self, intptr_t slot);
int KIO__MimeTypeFinderJob_QBaseMetacall(KIO__MimeTypeFinderJob* self, int param1, int param2, void** param3);
void KIO__MimeTypeFinderJob_OnStart(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseStart(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnDoKill(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseDoKill(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnSlotResult(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSlotResult(KIO__MimeTypeFinderJob* self, KJob* job);
bool KIO__MimeTypeFinderJob_AddSubjob(KIO__MimeTypeFinderJob* self, KJob* job);
void KIO__MimeTypeFinderJob_OnAddSubjob(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseAddSubjob(KIO__MimeTypeFinderJob* self, KJob* job);
bool KIO__MimeTypeFinderJob_RemoveSubjob(KIO__MimeTypeFinderJob* self, KJob* job);
void KIO__MimeTypeFinderJob_OnRemoveSubjob(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseRemoveSubjob(KIO__MimeTypeFinderJob* self, KJob* job);
void KIO__MimeTypeFinderJob_SlotInfoMessage(KIO__MimeTypeFinderJob* self, KJob* job, const libqt_string message);
void KIO__MimeTypeFinderJob_OnSlotInfoMessage(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSlotInfoMessage(KIO__MimeTypeFinderJob* self, KJob* job, const libqt_string message);
bool KIO__MimeTypeFinderJob_DoSuspend(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnDoSuspend(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseDoSuspend(KIO__MimeTypeFinderJob* self);
bool KIO__MimeTypeFinderJob_DoResume(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnDoResume(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseDoResume(KIO__MimeTypeFinderJob* self);
libqt_string KIO__MimeTypeFinderJob_ErrorString(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnErrorString(const KIO__MimeTypeFinderJob* self, intptr_t slot);
libqt_string KIO__MimeTypeFinderJob_QBaseErrorString(const KIO__MimeTypeFinderJob* self);
bool KIO__MimeTypeFinderJob_Event(KIO__MimeTypeFinderJob* self, QEvent* event);
void KIO__MimeTypeFinderJob_OnEvent(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseEvent(KIO__MimeTypeFinderJob* self, QEvent* event);
bool KIO__MimeTypeFinderJob_EventFilter(KIO__MimeTypeFinderJob* self, QObject* watched, QEvent* event);
void KIO__MimeTypeFinderJob_OnEventFilter(KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseEventFilter(KIO__MimeTypeFinderJob* self, QObject* watched, QEvent* event);
void KIO__MimeTypeFinderJob_TimerEvent(KIO__MimeTypeFinderJob* self, QTimerEvent* event);
void KIO__MimeTypeFinderJob_OnTimerEvent(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseTimerEvent(KIO__MimeTypeFinderJob* self, QTimerEvent* event);
void KIO__MimeTypeFinderJob_ChildEvent(KIO__MimeTypeFinderJob* self, QChildEvent* event);
void KIO__MimeTypeFinderJob_OnChildEvent(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseChildEvent(KIO__MimeTypeFinderJob* self, QChildEvent* event);
void KIO__MimeTypeFinderJob_CustomEvent(KIO__MimeTypeFinderJob* self, QEvent* event);
void KIO__MimeTypeFinderJob_OnCustomEvent(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseCustomEvent(KIO__MimeTypeFinderJob* self, QEvent* event);
void KIO__MimeTypeFinderJob_ConnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal);
void KIO__MimeTypeFinderJob_OnConnectNotify(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseConnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal);
void KIO__MimeTypeFinderJob_DisconnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal);
void KIO__MimeTypeFinderJob_OnDisconnectNotify(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseDisconnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal);
bool KIO__MimeTypeFinderJob_HasSubjobs(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnHasSubjobs(const KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseHasSubjobs(const KIO__MimeTypeFinderJob* self);
libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_Subjobs(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnSubjobs(const KIO__MimeTypeFinderJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_QBaseSubjobs(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_ClearSubjobs(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnClearSubjobs(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseClearSubjobs(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_SetCapabilities(KIO__MimeTypeFinderJob* self, int capabilities);
void KIO__MimeTypeFinderJob_OnSetCapabilities(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetCapabilities(KIO__MimeTypeFinderJob* self, int capabilities);
bool KIO__MimeTypeFinderJob_IsFinished(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnIsFinished(const KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseIsFinished(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_SetError(KIO__MimeTypeFinderJob* self, int errorCode);
void KIO__MimeTypeFinderJob_OnSetError(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetError(KIO__MimeTypeFinderJob* self, int errorCode);
void KIO__MimeTypeFinderJob_SetErrorText(KIO__MimeTypeFinderJob* self, const libqt_string errorText);
void KIO__MimeTypeFinderJob_OnSetErrorText(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetErrorText(KIO__MimeTypeFinderJob* self, const libqt_string errorText);
void KIO__MimeTypeFinderJob_SetProcessedAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount);
void KIO__MimeTypeFinderJob_OnSetProcessedAmount(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetProcessedAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount);
void KIO__MimeTypeFinderJob_SetTotalAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount);
void KIO__MimeTypeFinderJob_OnSetTotalAmount(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetTotalAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount);
void KIO__MimeTypeFinderJob_SetProgressUnit(KIO__MimeTypeFinderJob* self, int unit);
void KIO__MimeTypeFinderJob_OnSetProgressUnit(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetProgressUnit(KIO__MimeTypeFinderJob* self, int unit);
void KIO__MimeTypeFinderJob_SetPercent(KIO__MimeTypeFinderJob* self, unsigned long percentage);
void KIO__MimeTypeFinderJob_OnSetPercent(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseSetPercent(KIO__MimeTypeFinderJob* self, unsigned long percentage);
void KIO__MimeTypeFinderJob_EmitResult(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnEmitResult(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseEmitResult(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_EmitPercent(KIO__MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__MimeTypeFinderJob_OnEmitPercent(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseEmitPercent(KIO__MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__MimeTypeFinderJob_EmitSpeed(KIO__MimeTypeFinderJob* self, unsigned long speed);
void KIO__MimeTypeFinderJob_OnEmitSpeed(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseEmitSpeed(KIO__MimeTypeFinderJob* self, unsigned long speed);
void KIO__MimeTypeFinderJob_StartElapsedTimer(KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnStartElapsedTimer(KIO__MimeTypeFinderJob* self, intptr_t slot);
void KIO__MimeTypeFinderJob_QBaseStartElapsedTimer(KIO__MimeTypeFinderJob* self);
QObject* KIO__MimeTypeFinderJob_Sender(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnSender(const KIO__MimeTypeFinderJob* self, intptr_t slot);
QObject* KIO__MimeTypeFinderJob_QBaseSender(const KIO__MimeTypeFinderJob* self);
int KIO__MimeTypeFinderJob_SenderSignalIndex(const KIO__MimeTypeFinderJob* self);
void KIO__MimeTypeFinderJob_OnSenderSignalIndex(const KIO__MimeTypeFinderJob* self, intptr_t slot);
int KIO__MimeTypeFinderJob_QBaseSenderSignalIndex(const KIO__MimeTypeFinderJob* self);
int KIO__MimeTypeFinderJob_Receivers(const KIO__MimeTypeFinderJob* self, const char* signal);
void KIO__MimeTypeFinderJob_OnReceivers(const KIO__MimeTypeFinderJob* self, intptr_t slot);
int KIO__MimeTypeFinderJob_QBaseReceivers(const KIO__MimeTypeFinderJob* self, const char* signal);
bool KIO__MimeTypeFinderJob_IsSignalConnected(const KIO__MimeTypeFinderJob* self, const QMetaMethod* signal);
void KIO__MimeTypeFinderJob_OnIsSignalConnected(const KIO__MimeTypeFinderJob* self, intptr_t slot);
bool KIO__MimeTypeFinderJob_QBaseIsSignalConnected(const KIO__MimeTypeFinderJob* self, const QMetaMethod* signal);
void KIO__MimeTypeFinderJob_Delete(KIO__MimeTypeFinderJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
