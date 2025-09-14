#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDELETEORTRASHJOB_H
#define SRC_EXTRAS_KIOC_LIBDELETEORTRASHJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DeleteOrTrashJob)
typedef KIO::DeleteOrTrashJob KIO__DeleteOrTrashJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__DeleteOrTrashJob KIO__DeleteOrTrashJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__DeleteOrTrashJob* KIO__DeleteOrTrashJob_new(const libqt_list /* of QUrl* */ urls, int deletionType, int confirm, QObject* parent);
QMetaObject* KIO__DeleteOrTrashJob_MetaObject(const KIO__DeleteOrTrashJob* self);
void* KIO__DeleteOrTrashJob_Metacast(KIO__DeleteOrTrashJob* self, const char* param1);
int KIO__DeleteOrTrashJob_Metacall(KIO__DeleteOrTrashJob* self, int param1, int param2, void** param3);
libqt_string KIO__DeleteOrTrashJob_Tr(const char* s);
void KIO__DeleteOrTrashJob_Start(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_Started(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_Connect_Started(KIO__DeleteOrTrashJob* self, intptr_t slot);
libqt_string KIO__DeleteOrTrashJob_Tr2(const char* s, const char* c);
libqt_string KIO__DeleteOrTrashJob_Tr3(const char* s, const char* c, int n);
void KIO__DeleteOrTrashJob_OnMetacall(KIO__DeleteOrTrashJob* self, intptr_t slot);
int KIO__DeleteOrTrashJob_QBaseMetacall(KIO__DeleteOrTrashJob* self, int param1, int param2, void** param3);
void KIO__DeleteOrTrashJob_OnStart(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseStart(KIO__DeleteOrTrashJob* self);
bool KIO__DeleteOrTrashJob_AddSubjob(KIO__DeleteOrTrashJob* self, KJob* job);
void KIO__DeleteOrTrashJob_OnAddSubjob(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseAddSubjob(KIO__DeleteOrTrashJob* self, KJob* job);
bool KIO__DeleteOrTrashJob_RemoveSubjob(KIO__DeleteOrTrashJob* self, KJob* job);
void KIO__DeleteOrTrashJob_OnRemoveSubjob(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseRemoveSubjob(KIO__DeleteOrTrashJob* self, KJob* job);
void KIO__DeleteOrTrashJob_SlotInfoMessage(KIO__DeleteOrTrashJob* self, KJob* job, const libqt_string message);
void KIO__DeleteOrTrashJob_OnSlotInfoMessage(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSlotInfoMessage(KIO__DeleteOrTrashJob* self, KJob* job, const libqt_string message);
bool KIO__DeleteOrTrashJob_DoKill(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnDoKill(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseDoKill(KIO__DeleteOrTrashJob* self);
bool KIO__DeleteOrTrashJob_DoSuspend(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnDoSuspend(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseDoSuspend(KIO__DeleteOrTrashJob* self);
bool KIO__DeleteOrTrashJob_DoResume(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnDoResume(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseDoResume(KIO__DeleteOrTrashJob* self);
libqt_string KIO__DeleteOrTrashJob_ErrorString(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnErrorString(const KIO__DeleteOrTrashJob* self, intptr_t slot);
libqt_string KIO__DeleteOrTrashJob_QBaseErrorString(const KIO__DeleteOrTrashJob* self);
bool KIO__DeleteOrTrashJob_Event(KIO__DeleteOrTrashJob* self, QEvent* event);
void KIO__DeleteOrTrashJob_OnEvent(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseEvent(KIO__DeleteOrTrashJob* self, QEvent* event);
bool KIO__DeleteOrTrashJob_EventFilter(KIO__DeleteOrTrashJob* self, QObject* watched, QEvent* event);
void KIO__DeleteOrTrashJob_OnEventFilter(KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseEventFilter(KIO__DeleteOrTrashJob* self, QObject* watched, QEvent* event);
void KIO__DeleteOrTrashJob_TimerEvent(KIO__DeleteOrTrashJob* self, QTimerEvent* event);
void KIO__DeleteOrTrashJob_OnTimerEvent(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseTimerEvent(KIO__DeleteOrTrashJob* self, QTimerEvent* event);
void KIO__DeleteOrTrashJob_ChildEvent(KIO__DeleteOrTrashJob* self, QChildEvent* event);
void KIO__DeleteOrTrashJob_OnChildEvent(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseChildEvent(KIO__DeleteOrTrashJob* self, QChildEvent* event);
void KIO__DeleteOrTrashJob_CustomEvent(KIO__DeleteOrTrashJob* self, QEvent* event);
void KIO__DeleteOrTrashJob_OnCustomEvent(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseCustomEvent(KIO__DeleteOrTrashJob* self, QEvent* event);
void KIO__DeleteOrTrashJob_ConnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal);
void KIO__DeleteOrTrashJob_OnConnectNotify(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseConnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal);
void KIO__DeleteOrTrashJob_DisconnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal);
void KIO__DeleteOrTrashJob_OnDisconnectNotify(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseDisconnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal);
bool KIO__DeleteOrTrashJob_HasSubjobs(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnHasSubjobs(const KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseHasSubjobs(const KIO__DeleteOrTrashJob* self);
libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_Subjobs(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnSubjobs(const KIO__DeleteOrTrashJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_QBaseSubjobs(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_ClearSubjobs(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnClearSubjobs(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseClearSubjobs(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_SetCapabilities(KIO__DeleteOrTrashJob* self, int capabilities);
void KIO__DeleteOrTrashJob_OnSetCapabilities(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetCapabilities(KIO__DeleteOrTrashJob* self, int capabilities);
bool KIO__DeleteOrTrashJob_IsFinished(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnIsFinished(const KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseIsFinished(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_SetError(KIO__DeleteOrTrashJob* self, int errorCode);
void KIO__DeleteOrTrashJob_OnSetError(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetError(KIO__DeleteOrTrashJob* self, int errorCode);
void KIO__DeleteOrTrashJob_SetErrorText(KIO__DeleteOrTrashJob* self, const libqt_string errorText);
void KIO__DeleteOrTrashJob_OnSetErrorText(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetErrorText(KIO__DeleteOrTrashJob* self, const libqt_string errorText);
void KIO__DeleteOrTrashJob_SetProcessedAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount);
void KIO__DeleteOrTrashJob_OnSetProcessedAmount(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetProcessedAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount);
void KIO__DeleteOrTrashJob_SetTotalAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount);
void KIO__DeleteOrTrashJob_OnSetTotalAmount(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetTotalAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount);
void KIO__DeleteOrTrashJob_SetProgressUnit(KIO__DeleteOrTrashJob* self, int unit);
void KIO__DeleteOrTrashJob_OnSetProgressUnit(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetProgressUnit(KIO__DeleteOrTrashJob* self, int unit);
void KIO__DeleteOrTrashJob_SetPercent(KIO__DeleteOrTrashJob* self, unsigned long percentage);
void KIO__DeleteOrTrashJob_OnSetPercent(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseSetPercent(KIO__DeleteOrTrashJob* self, unsigned long percentage);
void KIO__DeleteOrTrashJob_EmitResult(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnEmitResult(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseEmitResult(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_EmitPercent(KIO__DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__DeleteOrTrashJob_OnEmitPercent(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseEmitPercent(KIO__DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__DeleteOrTrashJob_EmitSpeed(KIO__DeleteOrTrashJob* self, unsigned long speed);
void KIO__DeleteOrTrashJob_OnEmitSpeed(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseEmitSpeed(KIO__DeleteOrTrashJob* self, unsigned long speed);
void KIO__DeleteOrTrashJob_StartElapsedTimer(KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnStartElapsedTimer(KIO__DeleteOrTrashJob* self, intptr_t slot);
void KIO__DeleteOrTrashJob_QBaseStartElapsedTimer(KIO__DeleteOrTrashJob* self);
QObject* KIO__DeleteOrTrashJob_Sender(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnSender(const KIO__DeleteOrTrashJob* self, intptr_t slot);
QObject* KIO__DeleteOrTrashJob_QBaseSender(const KIO__DeleteOrTrashJob* self);
int KIO__DeleteOrTrashJob_SenderSignalIndex(const KIO__DeleteOrTrashJob* self);
void KIO__DeleteOrTrashJob_OnSenderSignalIndex(const KIO__DeleteOrTrashJob* self, intptr_t slot);
int KIO__DeleteOrTrashJob_QBaseSenderSignalIndex(const KIO__DeleteOrTrashJob* self);
int KIO__DeleteOrTrashJob_Receivers(const KIO__DeleteOrTrashJob* self, const char* signal);
void KIO__DeleteOrTrashJob_OnReceivers(const KIO__DeleteOrTrashJob* self, intptr_t slot);
int KIO__DeleteOrTrashJob_QBaseReceivers(const KIO__DeleteOrTrashJob* self, const char* signal);
bool KIO__DeleteOrTrashJob_IsSignalConnected(const KIO__DeleteOrTrashJob* self, const QMetaMethod* signal);
void KIO__DeleteOrTrashJob_OnIsSignalConnected(const KIO__DeleteOrTrashJob* self, intptr_t slot);
bool KIO__DeleteOrTrashJob_QBaseIsSignalConnected(const KIO__DeleteOrTrashJob* self, const QMetaMethod* signal);
void KIO__DeleteOrTrashJob_Delete(KIO__DeleteOrTrashJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
