#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBNAMEFINDERJOB_H
#define SRC_EXTRAS_KIOC_LIBNAMEFINDERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__NameFinderJob)
typedef KIO::NameFinderJob KIO__NameFinderJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__NameFinderJob KIO__NameFinderJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__NameFinderJob* KIO__NameFinderJob_new(const QUrl* baseUrl, const libqt_string name, QObject* parent);
QMetaObject* KIO__NameFinderJob_MetaObject(const KIO__NameFinderJob* self);
void* KIO__NameFinderJob_Metacast(KIO__NameFinderJob* self, const char* param1);
int KIO__NameFinderJob_Metacall(KIO__NameFinderJob* self, int param1, int param2, void** param3);
libqt_string KIO__NameFinderJob_Tr(const char* s);
void KIO__NameFinderJob_Start(KIO__NameFinderJob* self);
QUrl* KIO__NameFinderJob_FinalUrl(const KIO__NameFinderJob* self);
QUrl* KIO__NameFinderJob_BaseUrl(const KIO__NameFinderJob* self);
libqt_string KIO__NameFinderJob_FinalName(const KIO__NameFinderJob* self);
libqt_string KIO__NameFinderJob_Tr2(const char* s, const char* c);
libqt_string KIO__NameFinderJob_Tr3(const char* s, const char* c, int n);
void KIO__NameFinderJob_OnMetacall(KIO__NameFinderJob* self, intptr_t slot);
int KIO__NameFinderJob_QBaseMetacall(KIO__NameFinderJob* self, int param1, int param2, void** param3);
void KIO__NameFinderJob_OnStart(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseStart(KIO__NameFinderJob* self);
bool KIO__NameFinderJob_AddSubjob(KIO__NameFinderJob* self, KJob* job);
void KIO__NameFinderJob_OnAddSubjob(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseAddSubjob(KIO__NameFinderJob* self, KJob* job);
bool KIO__NameFinderJob_RemoveSubjob(KIO__NameFinderJob* self, KJob* job);
void KIO__NameFinderJob_OnRemoveSubjob(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseRemoveSubjob(KIO__NameFinderJob* self, KJob* job);
void KIO__NameFinderJob_SlotResult(KIO__NameFinderJob* self, KJob* job);
void KIO__NameFinderJob_OnSlotResult(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSlotResult(KIO__NameFinderJob* self, KJob* job);
void KIO__NameFinderJob_SlotInfoMessage(KIO__NameFinderJob* self, KJob* job, const libqt_string message);
void KIO__NameFinderJob_OnSlotInfoMessage(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSlotInfoMessage(KIO__NameFinderJob* self, KJob* job, const libqt_string message);
bool KIO__NameFinderJob_DoKill(KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnDoKill(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseDoKill(KIO__NameFinderJob* self);
bool KIO__NameFinderJob_DoSuspend(KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnDoSuspend(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseDoSuspend(KIO__NameFinderJob* self);
bool KIO__NameFinderJob_DoResume(KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnDoResume(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseDoResume(KIO__NameFinderJob* self);
libqt_string KIO__NameFinderJob_ErrorString(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnErrorString(const KIO__NameFinderJob* self, intptr_t slot);
libqt_string KIO__NameFinderJob_QBaseErrorString(const KIO__NameFinderJob* self);
bool KIO__NameFinderJob_Event(KIO__NameFinderJob* self, QEvent* event);
void KIO__NameFinderJob_OnEvent(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseEvent(KIO__NameFinderJob* self, QEvent* event);
bool KIO__NameFinderJob_EventFilter(KIO__NameFinderJob* self, QObject* watched, QEvent* event);
void KIO__NameFinderJob_OnEventFilter(KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseEventFilter(KIO__NameFinderJob* self, QObject* watched, QEvent* event);
void KIO__NameFinderJob_TimerEvent(KIO__NameFinderJob* self, QTimerEvent* event);
void KIO__NameFinderJob_OnTimerEvent(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseTimerEvent(KIO__NameFinderJob* self, QTimerEvent* event);
void KIO__NameFinderJob_ChildEvent(KIO__NameFinderJob* self, QChildEvent* event);
void KIO__NameFinderJob_OnChildEvent(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseChildEvent(KIO__NameFinderJob* self, QChildEvent* event);
void KIO__NameFinderJob_CustomEvent(KIO__NameFinderJob* self, QEvent* event);
void KIO__NameFinderJob_OnCustomEvent(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseCustomEvent(KIO__NameFinderJob* self, QEvent* event);
void KIO__NameFinderJob_ConnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal);
void KIO__NameFinderJob_OnConnectNotify(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseConnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal);
void KIO__NameFinderJob_DisconnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal);
void KIO__NameFinderJob_OnDisconnectNotify(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseDisconnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal);
bool KIO__NameFinderJob_HasSubjobs(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnHasSubjobs(const KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseHasSubjobs(const KIO__NameFinderJob* self);
libqt_list /* of KJob* */ KIO__NameFinderJob_Subjobs(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnSubjobs(const KIO__NameFinderJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__NameFinderJob_QBaseSubjobs(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_ClearSubjobs(KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnClearSubjobs(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseClearSubjobs(KIO__NameFinderJob* self);
void KIO__NameFinderJob_SetCapabilities(KIO__NameFinderJob* self, int capabilities);
void KIO__NameFinderJob_OnSetCapabilities(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetCapabilities(KIO__NameFinderJob* self, int capabilities);
bool KIO__NameFinderJob_IsFinished(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnIsFinished(const KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseIsFinished(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_SetError(KIO__NameFinderJob* self, int errorCode);
void KIO__NameFinderJob_OnSetError(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetError(KIO__NameFinderJob* self, int errorCode);
void KIO__NameFinderJob_SetErrorText(KIO__NameFinderJob* self, const libqt_string errorText);
void KIO__NameFinderJob_OnSetErrorText(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetErrorText(KIO__NameFinderJob* self, const libqt_string errorText);
void KIO__NameFinderJob_SetProcessedAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount);
void KIO__NameFinderJob_OnSetProcessedAmount(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetProcessedAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount);
void KIO__NameFinderJob_SetTotalAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount);
void KIO__NameFinderJob_OnSetTotalAmount(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetTotalAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount);
void KIO__NameFinderJob_SetProgressUnit(KIO__NameFinderJob* self, int unit);
void KIO__NameFinderJob_OnSetProgressUnit(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetProgressUnit(KIO__NameFinderJob* self, int unit);
void KIO__NameFinderJob_SetPercent(KIO__NameFinderJob* self, unsigned long percentage);
void KIO__NameFinderJob_OnSetPercent(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseSetPercent(KIO__NameFinderJob* self, unsigned long percentage);
void KIO__NameFinderJob_EmitResult(KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnEmitResult(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseEmitResult(KIO__NameFinderJob* self);
void KIO__NameFinderJob_EmitPercent(KIO__NameFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__NameFinderJob_OnEmitPercent(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseEmitPercent(KIO__NameFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__NameFinderJob_EmitSpeed(KIO__NameFinderJob* self, unsigned long speed);
void KIO__NameFinderJob_OnEmitSpeed(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseEmitSpeed(KIO__NameFinderJob* self, unsigned long speed);
void KIO__NameFinderJob_StartElapsedTimer(KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnStartElapsedTimer(KIO__NameFinderJob* self, intptr_t slot);
void KIO__NameFinderJob_QBaseStartElapsedTimer(KIO__NameFinderJob* self);
QObject* KIO__NameFinderJob_Sender(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnSender(const KIO__NameFinderJob* self, intptr_t slot);
QObject* KIO__NameFinderJob_QBaseSender(const KIO__NameFinderJob* self);
int KIO__NameFinderJob_SenderSignalIndex(const KIO__NameFinderJob* self);
void KIO__NameFinderJob_OnSenderSignalIndex(const KIO__NameFinderJob* self, intptr_t slot);
int KIO__NameFinderJob_QBaseSenderSignalIndex(const KIO__NameFinderJob* self);
int KIO__NameFinderJob_Receivers(const KIO__NameFinderJob* self, const char* signal);
void KIO__NameFinderJob_OnReceivers(const KIO__NameFinderJob* self, intptr_t slot);
int KIO__NameFinderJob_QBaseReceivers(const KIO__NameFinderJob* self, const char* signal);
bool KIO__NameFinderJob_IsSignalConnected(const KIO__NameFinderJob* self, const QMetaMethod* signal);
void KIO__NameFinderJob_OnIsSignalConnected(const KIO__NameFinderJob* self, intptr_t slot);
bool KIO__NameFinderJob_QBaseIsSignalConnected(const KIO__NameFinderJob* self, const QMetaMethod* signal);
void KIO__NameFinderJob_Delete(KIO__NameFinderJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
