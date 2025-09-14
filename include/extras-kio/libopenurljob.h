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
libqt_string KIO__OpenUrlJob_Tr(const char* s);
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
libqt_string KIO__OpenUrlJob_Tr2(const char* s, const char* c);
libqt_string KIO__OpenUrlJob_Tr3(const char* s, const char* c, int n);
void KIO__OpenUrlJob_OnMetacall(KIO__OpenUrlJob* self, intptr_t slot);
int KIO__OpenUrlJob_QBaseMetacall(KIO__OpenUrlJob* self, int param1, int param2, void** param3);
void KIO__OpenUrlJob_OnStart(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseStart(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnDoKill(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseDoKill(KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_AddSubjob(KIO__OpenUrlJob* self, KJob* job);
void KIO__OpenUrlJob_OnAddSubjob(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseAddSubjob(KIO__OpenUrlJob* self, KJob* job);
bool KIO__OpenUrlJob_RemoveSubjob(KIO__OpenUrlJob* self, KJob* job);
void KIO__OpenUrlJob_OnRemoveSubjob(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseRemoveSubjob(KIO__OpenUrlJob* self, KJob* job);
void KIO__OpenUrlJob_SlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message);
void KIO__OpenUrlJob_OnSlotInfoMessage(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message);
bool KIO__OpenUrlJob_DoSuspend(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnDoSuspend(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseDoSuspend(KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_DoResume(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnDoResume(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseDoResume(KIO__OpenUrlJob* self);
libqt_string KIO__OpenUrlJob_ErrorString(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnErrorString(const KIO__OpenUrlJob* self, intptr_t slot);
libqt_string KIO__OpenUrlJob_QBaseErrorString(const KIO__OpenUrlJob* self);
bool KIO__OpenUrlJob_Event(KIO__OpenUrlJob* self, QEvent* event);
void KIO__OpenUrlJob_OnEvent(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseEvent(KIO__OpenUrlJob* self, QEvent* event);
bool KIO__OpenUrlJob_EventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event);
void KIO__OpenUrlJob_OnEventFilter(KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseEventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event);
void KIO__OpenUrlJob_TimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event);
void KIO__OpenUrlJob_OnTimerEvent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseTimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event);
void KIO__OpenUrlJob_ChildEvent(KIO__OpenUrlJob* self, QChildEvent* event);
void KIO__OpenUrlJob_OnChildEvent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseChildEvent(KIO__OpenUrlJob* self, QChildEvent* event);
void KIO__OpenUrlJob_CustomEvent(KIO__OpenUrlJob* self, QEvent* event);
void KIO__OpenUrlJob_OnCustomEvent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseCustomEvent(KIO__OpenUrlJob* self, QEvent* event);
void KIO__OpenUrlJob_ConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_OnConnectNotify(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_DisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_OnDisconnectNotify(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseDisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal);
bool KIO__OpenUrlJob_HasSubjobs(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnHasSubjobs(const KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseHasSubjobs(const KIO__OpenUrlJob* self);
libqt_list /* of KJob* */ KIO__OpenUrlJob_Subjobs(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnSubjobs(const KIO__OpenUrlJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__OpenUrlJob_QBaseSubjobs(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_ClearSubjobs(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnClearSubjobs(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseClearSubjobs(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_SetCapabilities(KIO__OpenUrlJob* self, int capabilities);
void KIO__OpenUrlJob_OnSetCapabilities(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetCapabilities(KIO__OpenUrlJob* self, int capabilities);
bool KIO__OpenUrlJob_IsFinished(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnIsFinished(const KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseIsFinished(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_SetError(KIO__OpenUrlJob* self, int errorCode);
void KIO__OpenUrlJob_OnSetError(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetError(KIO__OpenUrlJob* self, int errorCode);
void KIO__OpenUrlJob_SetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText);
void KIO__OpenUrlJob_OnSetErrorText(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText);
void KIO__OpenUrlJob_SetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_OnSetProcessedAmount(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_SetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_OnSetTotalAmount(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount);
void KIO__OpenUrlJob_SetProgressUnit(KIO__OpenUrlJob* self, int unit);
void KIO__OpenUrlJob_OnSetProgressUnit(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetProgressUnit(KIO__OpenUrlJob* self, int unit);
void KIO__OpenUrlJob_SetPercent(KIO__OpenUrlJob* self, unsigned long percentage);
void KIO__OpenUrlJob_OnSetPercent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseSetPercent(KIO__OpenUrlJob* self, unsigned long percentage);
void KIO__OpenUrlJob_EmitResult(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnEmitResult(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseEmitResult(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_EmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenUrlJob_OnEmitPercent(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseEmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenUrlJob_EmitSpeed(KIO__OpenUrlJob* self, unsigned long speed);
void KIO__OpenUrlJob_OnEmitSpeed(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseEmitSpeed(KIO__OpenUrlJob* self, unsigned long speed);
void KIO__OpenUrlJob_StartElapsedTimer(KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnStartElapsedTimer(KIO__OpenUrlJob* self, intptr_t slot);
void KIO__OpenUrlJob_QBaseStartElapsedTimer(KIO__OpenUrlJob* self);
QObject* KIO__OpenUrlJob_Sender(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnSender(const KIO__OpenUrlJob* self, intptr_t slot);
QObject* KIO__OpenUrlJob_QBaseSender(const KIO__OpenUrlJob* self);
int KIO__OpenUrlJob_SenderSignalIndex(const KIO__OpenUrlJob* self);
void KIO__OpenUrlJob_OnSenderSignalIndex(const KIO__OpenUrlJob* self, intptr_t slot);
int KIO__OpenUrlJob_QBaseSenderSignalIndex(const KIO__OpenUrlJob* self);
int KIO__OpenUrlJob_Receivers(const KIO__OpenUrlJob* self, const char* signal);
void KIO__OpenUrlJob_OnReceivers(const KIO__OpenUrlJob* self, intptr_t slot);
int KIO__OpenUrlJob_QBaseReceivers(const KIO__OpenUrlJob* self, const char* signal);
bool KIO__OpenUrlJob_IsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_OnIsSignalConnected(const KIO__OpenUrlJob* self, intptr_t slot);
bool KIO__OpenUrlJob_QBaseIsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal);
void KIO__OpenUrlJob_Delete(KIO__OpenUrlJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
