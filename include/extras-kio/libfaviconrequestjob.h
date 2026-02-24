#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBFAVICONREQUESTJOB_H
#define SRC_EXTRAS_KIOC_LIBFAVICONREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__FavIconRequestJob)
typedef KIO::FavIconRequestJob KIO__FavIconRequestJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO__FavIconRequestJob KIO__FavIconRequestJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__FavIconRequestJob* KIO__FavIconRequestJob_new(const QUrl* hostUrl);
KIO__FavIconRequestJob* KIO__FavIconRequestJob_new2(const QUrl* hostUrl, int reload);
KIO__FavIconRequestJob* KIO__FavIconRequestJob_new3(const QUrl* hostUrl, int reload, QObject* parent);
QMetaObject* KIO__FavIconRequestJob_MetaObject(const KIO__FavIconRequestJob* self);
void* KIO__FavIconRequestJob_Metacast(KIO__FavIconRequestJob* self, const char* param1);
int KIO__FavIconRequestJob_Metacall(KIO__FavIconRequestJob* self, int param1, int param2, void** param3);
void KIO__FavIconRequestJob_SetIconUrl(KIO__FavIconRequestJob* self, const QUrl* iconUrl);
libqt_string KIO__FavIconRequestJob_IconFile(const KIO__FavIconRequestJob* self);
QUrl* KIO__FavIconRequestJob_HostUrl(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_Start(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnMetaObject(const KIO__FavIconRequestJob* self, intptr_t slot);
QMetaObject* KIO__FavIconRequestJob_SuperMetaObject(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnMetacast(KIO__FavIconRequestJob* self, intptr_t slot);
void* KIO__FavIconRequestJob_SuperMetacast(KIO__FavIconRequestJob* self, const char* param1);
void KIO__FavIconRequestJob_OnMetacall(KIO__FavIconRequestJob* self, intptr_t slot);
int KIO__FavIconRequestJob_SuperMetacall(KIO__FavIconRequestJob* self, int param1, int param2, void** param3);
void KIO__FavIconRequestJob_OnStart(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperStart(KIO__FavIconRequestJob* self);
bool KIO__FavIconRequestJob_AddSubjob(KIO__FavIconRequestJob* self, KJob* job);
void KIO__FavIconRequestJob_OnAddSubjob(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperAddSubjob(KIO__FavIconRequestJob* self, KJob* job);
bool KIO__FavIconRequestJob_RemoveSubjob(KIO__FavIconRequestJob* self, KJob* job);
void KIO__FavIconRequestJob_OnRemoveSubjob(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperRemoveSubjob(KIO__FavIconRequestJob* self, KJob* job);
void KIO__FavIconRequestJob_SlotInfoMessage(KIO__FavIconRequestJob* self, KJob* job, const libqt_string message);
void KIO__FavIconRequestJob_OnSlotInfoMessage(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSlotInfoMessage(KIO__FavIconRequestJob* self, KJob* job, const libqt_string message);
bool KIO__FavIconRequestJob_DoKill(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnDoKill(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperDoKill(KIO__FavIconRequestJob* self);
bool KIO__FavIconRequestJob_DoSuspend(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnDoSuspend(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperDoSuspend(KIO__FavIconRequestJob* self);
bool KIO__FavIconRequestJob_DoResume(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnDoResume(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperDoResume(KIO__FavIconRequestJob* self);
libqt_string KIO__FavIconRequestJob_ErrorString(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnErrorString(const KIO__FavIconRequestJob* self, intptr_t slot);
libqt_string KIO__FavIconRequestJob_SuperErrorString(const KIO__FavIconRequestJob* self);
bool KIO__FavIconRequestJob_Event(KIO__FavIconRequestJob* self, QEvent* event);
void KIO__FavIconRequestJob_OnEvent(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperEvent(KIO__FavIconRequestJob* self, QEvent* event);
bool KIO__FavIconRequestJob_EventFilter(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event);
void KIO__FavIconRequestJob_OnEventFilter(KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperEventFilter(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event);
void KIO__FavIconRequestJob_TimerEvent(KIO__FavIconRequestJob* self, QTimerEvent* event);
void KIO__FavIconRequestJob_OnTimerEvent(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperTimerEvent(KIO__FavIconRequestJob* self, QTimerEvent* event);
void KIO__FavIconRequestJob_ChildEvent(KIO__FavIconRequestJob* self, QChildEvent* event);
void KIO__FavIconRequestJob_OnChildEvent(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperChildEvent(KIO__FavIconRequestJob* self, QChildEvent* event);
void KIO__FavIconRequestJob_CustomEvent(KIO__FavIconRequestJob* self, QEvent* event);
void KIO__FavIconRequestJob_OnCustomEvent(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperCustomEvent(KIO__FavIconRequestJob* self, QEvent* event);
void KIO__FavIconRequestJob_ConnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal);
void KIO__FavIconRequestJob_OnConnectNotify(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperConnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal);
void KIO__FavIconRequestJob_DisconnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal);
void KIO__FavIconRequestJob_OnDisconnectNotify(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperDisconnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal);
bool KIO__FavIconRequestJob_HasSubjobs(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnHasSubjobs(const KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperHasSubjobs(const KIO__FavIconRequestJob* self);
libqt_list /* of KJob* */ KIO__FavIconRequestJob_Subjobs(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnSubjobs(const KIO__FavIconRequestJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__FavIconRequestJob_SuperSubjobs(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_ClearSubjobs(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnClearSubjobs(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperClearSubjobs(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_SetCapabilities(KIO__FavIconRequestJob* self, int capabilities);
void KIO__FavIconRequestJob_OnSetCapabilities(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetCapabilities(KIO__FavIconRequestJob* self, int capabilities);
bool KIO__FavIconRequestJob_IsFinished(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnIsFinished(const KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperIsFinished(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_SetError(KIO__FavIconRequestJob* self, int errorCode);
void KIO__FavIconRequestJob_OnSetError(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetError(KIO__FavIconRequestJob* self, int errorCode);
void KIO__FavIconRequestJob_SetErrorText(KIO__FavIconRequestJob* self, const libqt_string errorText);
void KIO__FavIconRequestJob_OnSetErrorText(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetErrorText(KIO__FavIconRequestJob* self, const libqt_string errorText);
void KIO__FavIconRequestJob_SetProcessedAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount);
void KIO__FavIconRequestJob_OnSetProcessedAmount(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetProcessedAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount);
void KIO__FavIconRequestJob_SetTotalAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount);
void KIO__FavIconRequestJob_OnSetTotalAmount(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetTotalAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount);
void KIO__FavIconRequestJob_SetProgressUnit(KIO__FavIconRequestJob* self, int unit);
void KIO__FavIconRequestJob_OnSetProgressUnit(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetProgressUnit(KIO__FavIconRequestJob* self, int unit);
void KIO__FavIconRequestJob_SetPercent(KIO__FavIconRequestJob* self, unsigned long percentage);
void KIO__FavIconRequestJob_OnSetPercent(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperSetPercent(KIO__FavIconRequestJob* self, unsigned long percentage);
void KIO__FavIconRequestJob_EmitResult(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnEmitResult(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperEmitResult(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_EmitPercent(KIO__FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__FavIconRequestJob_OnEmitPercent(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperEmitPercent(KIO__FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__FavIconRequestJob_EmitSpeed(KIO__FavIconRequestJob* self, unsigned long speed);
void KIO__FavIconRequestJob_OnEmitSpeed(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperEmitSpeed(KIO__FavIconRequestJob* self, unsigned long speed);
void KIO__FavIconRequestJob_StartElapsedTimer(KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnStartElapsedTimer(KIO__FavIconRequestJob* self, intptr_t slot);
void KIO__FavIconRequestJob_SuperStartElapsedTimer(KIO__FavIconRequestJob* self);
QObject* KIO__FavIconRequestJob_Sender(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnSender(const KIO__FavIconRequestJob* self, intptr_t slot);
QObject* KIO__FavIconRequestJob_SuperSender(const KIO__FavIconRequestJob* self);
int KIO__FavIconRequestJob_SenderSignalIndex(const KIO__FavIconRequestJob* self);
void KIO__FavIconRequestJob_OnSenderSignalIndex(const KIO__FavIconRequestJob* self, intptr_t slot);
int KIO__FavIconRequestJob_SuperSenderSignalIndex(const KIO__FavIconRequestJob* self);
int KIO__FavIconRequestJob_Receivers(const KIO__FavIconRequestJob* self, const char* signal);
void KIO__FavIconRequestJob_OnReceivers(const KIO__FavIconRequestJob* self, intptr_t slot);
int KIO__FavIconRequestJob_SuperReceivers(const KIO__FavIconRequestJob* self, const char* signal);
bool KIO__FavIconRequestJob_IsSignalConnected(const KIO__FavIconRequestJob* self, const QMetaMethod* signal);
void KIO__FavIconRequestJob_OnIsSignalConnected(const KIO__FavIconRequestJob* self, intptr_t slot);
bool KIO__FavIconRequestJob_SuperIsSignalConnected(const KIO__FavIconRequestJob* self, const QMetaMethod* signal);
void KIO__FavIconRequestJob_Delete(KIO__FavIconRequestJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
