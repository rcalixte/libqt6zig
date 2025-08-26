#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKCOMPOSITEJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKCOMPOSITEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KCompositeJob* KCompositeJob_new();
KCompositeJob* KCompositeJob_new2(QObject* parent);
QMetaObject* KCompositeJob_MetaObject(const KCompositeJob* self);
void* KCompositeJob_Metacast(KCompositeJob* self, const char* param1);
int KCompositeJob_Metacall(KCompositeJob* self, int param1, int param2, void** param3);
void KCompositeJob_OnMetacall(KCompositeJob* self, intptr_t slot);
int KCompositeJob_QBaseMetacall(KCompositeJob* self, int param1, int param2, void** param3);
libqt_string KCompositeJob_Tr(const char* s);
bool KCompositeJob_AddSubjob(KCompositeJob* self, KJob* job);
void KCompositeJob_OnAddSubjob(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseAddSubjob(KCompositeJob* self, KJob* job);
bool KCompositeJob_RemoveSubjob(KCompositeJob* self, KJob* job);
void KCompositeJob_OnRemoveSubjob(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseRemoveSubjob(KCompositeJob* self, KJob* job);
void KCompositeJob_SlotResult(KCompositeJob* self, KJob* job);
void KCompositeJob_OnSlotResult(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSlotResult(KCompositeJob* self, KJob* job);
void KCompositeJob_SlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message);
void KCompositeJob_OnSlotInfoMessage(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message);
libqt_string KCompositeJob_Tr2(const char* s, const char* c);
libqt_string KCompositeJob_Tr3(const char* s, const char* c, int n);
void KCompositeJob_Start(KCompositeJob* self);
void KCompositeJob_OnStart(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseStart(KCompositeJob* self);
bool KCompositeJob_DoKill(KCompositeJob* self);
void KCompositeJob_OnDoKill(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseDoKill(KCompositeJob* self);
bool KCompositeJob_DoSuspend(KCompositeJob* self);
void KCompositeJob_OnDoSuspend(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseDoSuspend(KCompositeJob* self);
bool KCompositeJob_DoResume(KCompositeJob* self);
void KCompositeJob_OnDoResume(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseDoResume(KCompositeJob* self);
libqt_string KCompositeJob_ErrorString(const KCompositeJob* self);
void KCompositeJob_OnErrorString(const KCompositeJob* self, intptr_t slot);
libqt_string KCompositeJob_QBaseErrorString(const KCompositeJob* self);
bool KCompositeJob_Event(KCompositeJob* self, QEvent* event);
void KCompositeJob_OnEvent(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseEvent(KCompositeJob* self, QEvent* event);
bool KCompositeJob_EventFilter(KCompositeJob* self, QObject* watched, QEvent* event);
void KCompositeJob_OnEventFilter(KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseEventFilter(KCompositeJob* self, QObject* watched, QEvent* event);
void KCompositeJob_TimerEvent(KCompositeJob* self, QTimerEvent* event);
void KCompositeJob_OnTimerEvent(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseTimerEvent(KCompositeJob* self, QTimerEvent* event);
void KCompositeJob_ChildEvent(KCompositeJob* self, QChildEvent* event);
void KCompositeJob_OnChildEvent(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseChildEvent(KCompositeJob* self, QChildEvent* event);
void KCompositeJob_CustomEvent(KCompositeJob* self, QEvent* event);
void KCompositeJob_OnCustomEvent(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseCustomEvent(KCompositeJob* self, QEvent* event);
void KCompositeJob_ConnectNotify(KCompositeJob* self, const QMetaMethod* signal);
void KCompositeJob_OnConnectNotify(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseConnectNotify(KCompositeJob* self, const QMetaMethod* signal);
void KCompositeJob_DisconnectNotify(KCompositeJob* self, const QMetaMethod* signal);
void KCompositeJob_OnDisconnectNotify(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseDisconnectNotify(KCompositeJob* self, const QMetaMethod* signal);
bool KCompositeJob_HasSubjobs(const KCompositeJob* self);
void KCompositeJob_OnHasSubjobs(const KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseHasSubjobs(const KCompositeJob* self);
libqt_list /* of KJob* */ KCompositeJob_Subjobs(const KCompositeJob* self);
void KCompositeJob_OnSubjobs(const KCompositeJob* self, intptr_t slot);
libqt_list /* of KJob* */ KCompositeJob_QBaseSubjobs(const KCompositeJob* self);
void KCompositeJob_ClearSubjobs(KCompositeJob* self);
void KCompositeJob_OnClearSubjobs(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseClearSubjobs(KCompositeJob* self);
void KCompositeJob_SetCapabilities(KCompositeJob* self, int capabilities);
void KCompositeJob_OnSetCapabilities(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetCapabilities(KCompositeJob* self, int capabilities);
bool KCompositeJob_IsFinished(const KCompositeJob* self);
void KCompositeJob_OnIsFinished(const KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseIsFinished(const KCompositeJob* self);
void KCompositeJob_SetError(KCompositeJob* self, int errorCode);
void KCompositeJob_OnSetError(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetError(KCompositeJob* self, int errorCode);
void KCompositeJob_SetErrorText(KCompositeJob* self, const libqt_string errorText);
void KCompositeJob_OnSetErrorText(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetErrorText(KCompositeJob* self, const libqt_string errorText);
void KCompositeJob_SetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount);
void KCompositeJob_OnSetProcessedAmount(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount);
void KCompositeJob_SetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount);
void KCompositeJob_OnSetTotalAmount(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount);
void KCompositeJob_SetProgressUnit(KCompositeJob* self, int unit);
void KCompositeJob_OnSetProgressUnit(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetProgressUnit(KCompositeJob* self, int unit);
void KCompositeJob_SetPercent(KCompositeJob* self, unsigned long percentage);
void KCompositeJob_OnSetPercent(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseSetPercent(KCompositeJob* self, unsigned long percentage);
void KCompositeJob_EmitResult(KCompositeJob* self);
void KCompositeJob_OnEmitResult(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseEmitResult(KCompositeJob* self);
void KCompositeJob_EmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KCompositeJob_OnEmitPercent(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseEmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KCompositeJob_EmitSpeed(KCompositeJob* self, unsigned long speed);
void KCompositeJob_OnEmitSpeed(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseEmitSpeed(KCompositeJob* self, unsigned long speed);
void KCompositeJob_StartElapsedTimer(KCompositeJob* self);
void KCompositeJob_OnStartElapsedTimer(KCompositeJob* self, intptr_t slot);
void KCompositeJob_QBaseStartElapsedTimer(KCompositeJob* self);
QObject* KCompositeJob_Sender(const KCompositeJob* self);
void KCompositeJob_OnSender(const KCompositeJob* self, intptr_t slot);
QObject* KCompositeJob_QBaseSender(const KCompositeJob* self);
int KCompositeJob_SenderSignalIndex(const KCompositeJob* self);
void KCompositeJob_OnSenderSignalIndex(const KCompositeJob* self, intptr_t slot);
int KCompositeJob_QBaseSenderSignalIndex(const KCompositeJob* self);
int KCompositeJob_Receivers(const KCompositeJob* self, const char* signal);
void KCompositeJob_OnReceivers(const KCompositeJob* self, intptr_t slot);
int KCompositeJob_QBaseReceivers(const KCompositeJob* self, const char* signal);
bool KCompositeJob_IsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal);
void KCompositeJob_OnIsSignalConnected(const KCompositeJob* self, intptr_t slot);
bool KCompositeJob_QBaseIsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal);
void KCompositeJob_Delete(KCompositeJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
