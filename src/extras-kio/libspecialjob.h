#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBSPECIALJOB_H
#define SRC_EXTRAS_KIOC_LIBSPECIALJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
typedef KIO::MetaData KIO__MetaData;
typedef KIO::SimpleJob KIO__SimpleJob;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__SpecialJob)
typedef KIO::SpecialJob KIO__SpecialJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob)
typedef KIO::TransferJob KIO__TransferJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__MetaData KIO__MetaData;
typedef struct KIO__SimpleJob KIO__SimpleJob;
typedef struct KIO__SpecialJob KIO__SpecialJob;
typedef struct KIO__TransferJob KIO__TransferJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__SpecialJob* KIO__SpecialJob_new(const QUrl* url);
KIO__SpecialJob* KIO__SpecialJob_new2(const QUrl* url, const libqt_string data);
QMetaObject* KIO__SpecialJob_MetaObject(const KIO__SpecialJob* self);
void* KIO__SpecialJob_Metacast(KIO__SpecialJob* self, const char* param1);
int KIO__SpecialJob_Metacall(KIO__SpecialJob* self, int param1, int param2, void** param3);
libqt_string KIO__SpecialJob_Tr(const char* s);
void KIO__SpecialJob_SetArguments(KIO__SpecialJob* self, const libqt_string data);
libqt_string KIO__SpecialJob_Arguments(const KIO__SpecialJob* self);
libqt_string KIO__SpecialJob_Tr2(const char* s, const char* c);
libqt_string KIO__SpecialJob_Tr3(const char* s, const char* c, int n);
void KIO__SpecialJob_OnMetacall(KIO__SpecialJob* self, intptr_t slot);
int KIO__SpecialJob_QBaseMetacall(KIO__SpecialJob* self, int param1, int param2, void** param3);
bool KIO__SpecialJob_DoResume(KIO__SpecialJob* self);
void KIO__SpecialJob_OnDoResume(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseDoResume(KIO__SpecialJob* self);
void KIO__SpecialJob_SlotRedirection(KIO__SpecialJob* self, const QUrl* url);
void KIO__SpecialJob_OnSlotRedirection(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotRedirection(KIO__SpecialJob* self, const QUrl* url);
void KIO__SpecialJob_SlotFinished(KIO__SpecialJob* self);
void KIO__SpecialJob_OnSlotFinished(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotFinished(KIO__SpecialJob* self);
void KIO__SpecialJob_SlotData(KIO__SpecialJob* self, const libqt_string data);
void KIO__SpecialJob_OnSlotData(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotData(KIO__SpecialJob* self, const libqt_string data);
void KIO__SpecialJob_SlotDataReq(KIO__SpecialJob* self);
void KIO__SpecialJob_OnSlotDataReq(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotDataReq(KIO__SpecialJob* self);
void KIO__SpecialJob_SlotMimetype(KIO__SpecialJob* self, const libqt_string mimetype);
void KIO__SpecialJob_OnSlotMimetype(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotMimetype(KIO__SpecialJob* self, const libqt_string mimetype);
bool KIO__SpecialJob_DoSuspend(KIO__SpecialJob* self);
void KIO__SpecialJob_OnDoSuspend(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseDoSuspend(KIO__SpecialJob* self);
bool KIO__SpecialJob_DoKill(KIO__SpecialJob* self);
void KIO__SpecialJob_OnDoKill(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseDoKill(KIO__SpecialJob* self);
void KIO__SpecialJob_PutOnHold(KIO__SpecialJob* self);
void KIO__SpecialJob_OnPutOnHold(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBasePutOnHold(KIO__SpecialJob* self);
void KIO__SpecialJob_SlotWarning(KIO__SpecialJob* self, const libqt_string param1);
void KIO__SpecialJob_OnSlotWarning(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotWarning(KIO__SpecialJob* self, const libqt_string param1);
void KIO__SpecialJob_SlotMetaData(KIO__SpecialJob* self, const KIO__MetaData* _metaData);
void KIO__SpecialJob_OnSlotMetaData(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotMetaData(KIO__SpecialJob* self, const KIO__MetaData* _metaData);
void KIO__SpecialJob_Start(KIO__SpecialJob* self);
void KIO__SpecialJob_OnStart(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseStart(KIO__SpecialJob* self);
libqt_string KIO__SpecialJob_ErrorString(const KIO__SpecialJob* self);
void KIO__SpecialJob_OnErrorString(const KIO__SpecialJob* self, intptr_t slot);
libqt_string KIO__SpecialJob_QBaseErrorString(const KIO__SpecialJob* self);
bool KIO__SpecialJob_AddSubjob(KIO__SpecialJob* self, KJob* job);
void KIO__SpecialJob_OnAddSubjob(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseAddSubjob(KIO__SpecialJob* self, KJob* job);
bool KIO__SpecialJob_RemoveSubjob(KIO__SpecialJob* self, KJob* job);
void KIO__SpecialJob_OnRemoveSubjob(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseRemoveSubjob(KIO__SpecialJob* self, KJob* job);
void KIO__SpecialJob_SlotResult(KIO__SpecialJob* self, KJob* job);
void KIO__SpecialJob_OnSlotResult(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotResult(KIO__SpecialJob* self, KJob* job);
void KIO__SpecialJob_SlotInfoMessage(KIO__SpecialJob* self, KJob* job, const libqt_string message);
void KIO__SpecialJob_OnSlotInfoMessage(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSlotInfoMessage(KIO__SpecialJob* self, KJob* job, const libqt_string message);
bool KIO__SpecialJob_Event(KIO__SpecialJob* self, QEvent* event);
void KIO__SpecialJob_OnEvent(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseEvent(KIO__SpecialJob* self, QEvent* event);
bool KIO__SpecialJob_EventFilter(KIO__SpecialJob* self, QObject* watched, QEvent* event);
void KIO__SpecialJob_OnEventFilter(KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseEventFilter(KIO__SpecialJob* self, QObject* watched, QEvent* event);
void KIO__SpecialJob_TimerEvent(KIO__SpecialJob* self, QTimerEvent* event);
void KIO__SpecialJob_OnTimerEvent(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseTimerEvent(KIO__SpecialJob* self, QTimerEvent* event);
void KIO__SpecialJob_ChildEvent(KIO__SpecialJob* self, QChildEvent* event);
void KIO__SpecialJob_OnChildEvent(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseChildEvent(KIO__SpecialJob* self, QChildEvent* event);
void KIO__SpecialJob_CustomEvent(KIO__SpecialJob* self, QEvent* event);
void KIO__SpecialJob_OnCustomEvent(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseCustomEvent(KIO__SpecialJob* self, QEvent* event);
void KIO__SpecialJob_ConnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal);
void KIO__SpecialJob_OnConnectNotify(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseConnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal);
void KIO__SpecialJob_DisconnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal);
void KIO__SpecialJob_OnDisconnectNotify(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseDisconnectNotify(KIO__SpecialJob* self, const QMetaMethod* signal);
bool KIO__SpecialJob_HasSubjobs(const KIO__SpecialJob* self);
void KIO__SpecialJob_OnHasSubjobs(const KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseHasSubjobs(const KIO__SpecialJob* self);
libqt_list /* of KJob* */ KIO__SpecialJob_Subjobs(const KIO__SpecialJob* self);
void KIO__SpecialJob_OnSubjobs(const KIO__SpecialJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__SpecialJob_QBaseSubjobs(const KIO__SpecialJob* self);
void KIO__SpecialJob_ClearSubjobs(KIO__SpecialJob* self);
void KIO__SpecialJob_OnClearSubjobs(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseClearSubjobs(KIO__SpecialJob* self);
void KIO__SpecialJob_SetCapabilities(KIO__SpecialJob* self, int capabilities);
void KIO__SpecialJob_OnSetCapabilities(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetCapabilities(KIO__SpecialJob* self, int capabilities);
bool KIO__SpecialJob_IsFinished(const KIO__SpecialJob* self);
void KIO__SpecialJob_OnIsFinished(const KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseIsFinished(const KIO__SpecialJob* self);
void KIO__SpecialJob_SetError(KIO__SpecialJob* self, int errorCode);
void KIO__SpecialJob_OnSetError(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetError(KIO__SpecialJob* self, int errorCode);
void KIO__SpecialJob_SetErrorText(KIO__SpecialJob* self, const libqt_string errorText);
void KIO__SpecialJob_OnSetErrorText(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetErrorText(KIO__SpecialJob* self, const libqt_string errorText);
void KIO__SpecialJob_SetProcessedAmount(KIO__SpecialJob* self, int unit, unsigned long long amount);
void KIO__SpecialJob_OnSetProcessedAmount(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetProcessedAmount(KIO__SpecialJob* self, int unit, unsigned long long amount);
void KIO__SpecialJob_SetTotalAmount(KIO__SpecialJob* self, int unit, unsigned long long amount);
void KIO__SpecialJob_OnSetTotalAmount(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetTotalAmount(KIO__SpecialJob* self, int unit, unsigned long long amount);
void KIO__SpecialJob_SetProgressUnit(KIO__SpecialJob* self, int unit);
void KIO__SpecialJob_OnSetProgressUnit(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetProgressUnit(KIO__SpecialJob* self, int unit);
void KIO__SpecialJob_SetPercent(KIO__SpecialJob* self, unsigned long percentage);
void KIO__SpecialJob_OnSetPercent(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseSetPercent(KIO__SpecialJob* self, unsigned long percentage);
void KIO__SpecialJob_EmitResult(KIO__SpecialJob* self);
void KIO__SpecialJob_OnEmitResult(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseEmitResult(KIO__SpecialJob* self);
void KIO__SpecialJob_EmitPercent(KIO__SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__SpecialJob_OnEmitPercent(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseEmitPercent(KIO__SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__SpecialJob_EmitSpeed(KIO__SpecialJob* self, unsigned long speed);
void KIO__SpecialJob_OnEmitSpeed(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseEmitSpeed(KIO__SpecialJob* self, unsigned long speed);
void KIO__SpecialJob_StartElapsedTimer(KIO__SpecialJob* self);
void KIO__SpecialJob_OnStartElapsedTimer(KIO__SpecialJob* self, intptr_t slot);
void KIO__SpecialJob_QBaseStartElapsedTimer(KIO__SpecialJob* self);
QObject* KIO__SpecialJob_Sender(const KIO__SpecialJob* self);
void KIO__SpecialJob_OnSender(const KIO__SpecialJob* self, intptr_t slot);
QObject* KIO__SpecialJob_QBaseSender(const KIO__SpecialJob* self);
int KIO__SpecialJob_SenderSignalIndex(const KIO__SpecialJob* self);
void KIO__SpecialJob_OnSenderSignalIndex(const KIO__SpecialJob* self, intptr_t slot);
int KIO__SpecialJob_QBaseSenderSignalIndex(const KIO__SpecialJob* self);
int KIO__SpecialJob_Receivers(const KIO__SpecialJob* self, const char* signal);
void KIO__SpecialJob_OnReceivers(const KIO__SpecialJob* self, intptr_t slot);
int KIO__SpecialJob_QBaseReceivers(const KIO__SpecialJob* self, const char* signal);
bool KIO__SpecialJob_IsSignalConnected(const KIO__SpecialJob* self, const QMetaMethod* signal);
void KIO__SpecialJob_OnIsSignalConnected(const KIO__SpecialJob* self, intptr_t slot);
bool KIO__SpecialJob_QBaseIsSignalConnected(const KIO__SpecialJob* self, const QMetaMethod* signal);
void KIO__SpecialJob_Delete(KIO__SpecialJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
