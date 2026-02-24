#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBPREVIEWJOB_H
#define SRC_EXTRAS_KIOC_LIBPREVIEWJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__PreviewJob)
typedef KIO::PreviewJob KIO__PreviewJob;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KFileItem KFileItem;
typedef struct KFileItemList KFileItemList;
typedef struct KIO KIO;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__PreviewJob KIO__PreviewJob;
typedef struct KJob KJob;
typedef struct KPluginMetaData KPluginMetaData;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__PreviewJob* KIO__PreviewJob_new(const KFileItemList* items, const QSize* size);
KIO__PreviewJob* KIO__PreviewJob_new2(const KFileItemList* items, const QSize* size, const libqt_list /* of libqt_string */ enabledPlugins);
QMetaObject* KIO__PreviewJob_MetaObject(const KIO__PreviewJob* self);
void* KIO__PreviewJob_Metacast(KIO__PreviewJob* self, const char* param1);
int KIO__PreviewJob_Metacall(KIO__PreviewJob* self, int param1, int param2, void** param3);
void KIO__PreviewJob_SetScaleType(KIO__PreviewJob* self, int typeVal);
int KIO__PreviewJob_ScaleType(const KIO__PreviewJob* self);
void KIO__PreviewJob_RemoveItem(KIO__PreviewJob* self, const QUrl* url);
void KIO__PreviewJob_SetIgnoreMaximumSize(KIO__PreviewJob* self);
void KIO__PreviewJob_SetSequenceIndex(KIO__PreviewJob* self, int index);
int KIO__PreviewJob_SequenceIndex(const KIO__PreviewJob* self);
float KIO__PreviewJob_SequenceIndexWraparoundPoint(const KIO__PreviewJob* self);
bool KIO__PreviewJob_HandlesSequences(const KIO__PreviewJob* self);
void KIO__PreviewJob_SetDevicePixelRatio(KIO__PreviewJob* self, double dpr);
libqt_list /* of libqt_string */ KIO__PreviewJob_AvailablePlugins();
libqt_list /* of KPluginMetaData* */ KIO__PreviewJob_AvailableThumbnailerPlugins();
libqt_list /* of libqt_string */ KIO__PreviewJob_DefaultPlugins();
libqt_list /* of libqt_string */ KIO__PreviewJob_SupportedMimeTypes();
void KIO__PreviewJob_GotPreview(KIO__PreviewJob* self, const KFileItem* item, const QPixmap* preview);
void KIO__PreviewJob_Connect_GotPreview(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_Failed(KIO__PreviewJob* self, const KFileItem* item);
void KIO__PreviewJob_Connect_Failed(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SlotResult(KIO__PreviewJob* self, KJob* job);
void KIO__PreviewJob_SetDefaultDevicePixelRatio(double devicePixelRatio);
void KIO__PreviewJob_SetIgnoreMaximumSize1(KIO__PreviewJob* self, bool ignoreSize);
void KIO__PreviewJob_OnMetaObject(const KIO__PreviewJob* self, intptr_t slot);
QMetaObject* KIO__PreviewJob_SuperMetaObject(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnMetacast(KIO__PreviewJob* self, intptr_t slot);
void* KIO__PreviewJob_SuperMetacast(KIO__PreviewJob* self, const char* param1);
void KIO__PreviewJob_OnMetacall(KIO__PreviewJob* self, intptr_t slot);
int KIO__PreviewJob_SuperMetacall(KIO__PreviewJob* self, int param1, int param2, void** param3);
void KIO__PreviewJob_OnSlotResult(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSlotResult(KIO__PreviewJob* self, KJob* job);
void KIO__PreviewJob_Start(KIO__PreviewJob* self);
void KIO__PreviewJob_OnStart(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperStart(KIO__PreviewJob* self);
bool KIO__PreviewJob_DoKill(KIO__PreviewJob* self);
void KIO__PreviewJob_OnDoKill(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperDoKill(KIO__PreviewJob* self);
bool KIO__PreviewJob_DoSuspend(KIO__PreviewJob* self);
void KIO__PreviewJob_OnDoSuspend(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperDoSuspend(KIO__PreviewJob* self);
bool KIO__PreviewJob_DoResume(KIO__PreviewJob* self);
void KIO__PreviewJob_OnDoResume(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperDoResume(KIO__PreviewJob* self);
libqt_string KIO__PreviewJob_ErrorString(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnErrorString(const KIO__PreviewJob* self, intptr_t slot);
libqt_string KIO__PreviewJob_SuperErrorString(const KIO__PreviewJob* self);
bool KIO__PreviewJob_AddSubjob(KIO__PreviewJob* self, KJob* job);
void KIO__PreviewJob_OnAddSubjob(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperAddSubjob(KIO__PreviewJob* self, KJob* job);
bool KIO__PreviewJob_RemoveSubjob(KIO__PreviewJob* self, KJob* job);
void KIO__PreviewJob_OnRemoveSubjob(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperRemoveSubjob(KIO__PreviewJob* self, KJob* job);
void KIO__PreviewJob_SlotInfoMessage(KIO__PreviewJob* self, KJob* job, const libqt_string message);
void KIO__PreviewJob_OnSlotInfoMessage(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSlotInfoMessage(KIO__PreviewJob* self, KJob* job, const libqt_string message);
bool KIO__PreviewJob_Event(KIO__PreviewJob* self, QEvent* event);
void KIO__PreviewJob_OnEvent(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperEvent(KIO__PreviewJob* self, QEvent* event);
bool KIO__PreviewJob_EventFilter(KIO__PreviewJob* self, QObject* watched, QEvent* event);
void KIO__PreviewJob_OnEventFilter(KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperEventFilter(KIO__PreviewJob* self, QObject* watched, QEvent* event);
void KIO__PreviewJob_TimerEvent(KIO__PreviewJob* self, QTimerEvent* event);
void KIO__PreviewJob_OnTimerEvent(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperTimerEvent(KIO__PreviewJob* self, QTimerEvent* event);
void KIO__PreviewJob_ChildEvent(KIO__PreviewJob* self, QChildEvent* event);
void KIO__PreviewJob_OnChildEvent(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperChildEvent(KIO__PreviewJob* self, QChildEvent* event);
void KIO__PreviewJob_CustomEvent(KIO__PreviewJob* self, QEvent* event);
void KIO__PreviewJob_OnCustomEvent(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperCustomEvent(KIO__PreviewJob* self, QEvent* event);
void KIO__PreviewJob_ConnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal);
void KIO__PreviewJob_OnConnectNotify(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperConnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal);
void KIO__PreviewJob_DisconnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal);
void KIO__PreviewJob_OnDisconnectNotify(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperDisconnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal);
bool KIO__PreviewJob_HasSubjobs(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnHasSubjobs(const KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperHasSubjobs(const KIO__PreviewJob* self);
libqt_list /* of KJob* */ KIO__PreviewJob_Subjobs(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnSubjobs(const KIO__PreviewJob* self, intptr_t slot);
libqt_list /* of KJob* */ KIO__PreviewJob_SuperSubjobs(const KIO__PreviewJob* self);
void KIO__PreviewJob_ClearSubjobs(KIO__PreviewJob* self);
void KIO__PreviewJob_OnClearSubjobs(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperClearSubjobs(KIO__PreviewJob* self);
void KIO__PreviewJob_SetCapabilities(KIO__PreviewJob* self, int capabilities);
void KIO__PreviewJob_OnSetCapabilities(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetCapabilities(KIO__PreviewJob* self, int capabilities);
bool KIO__PreviewJob_IsFinished(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnIsFinished(const KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperIsFinished(const KIO__PreviewJob* self);
void KIO__PreviewJob_SetError(KIO__PreviewJob* self, int errorCode);
void KIO__PreviewJob_OnSetError(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetError(KIO__PreviewJob* self, int errorCode);
void KIO__PreviewJob_SetErrorText(KIO__PreviewJob* self, const libqt_string errorText);
void KIO__PreviewJob_OnSetErrorText(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetErrorText(KIO__PreviewJob* self, const libqt_string errorText);
void KIO__PreviewJob_SetProcessedAmount(KIO__PreviewJob* self, int unit, unsigned long long amount);
void KIO__PreviewJob_OnSetProcessedAmount(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetProcessedAmount(KIO__PreviewJob* self, int unit, unsigned long long amount);
void KIO__PreviewJob_SetTotalAmount(KIO__PreviewJob* self, int unit, unsigned long long amount);
void KIO__PreviewJob_OnSetTotalAmount(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetTotalAmount(KIO__PreviewJob* self, int unit, unsigned long long amount);
void KIO__PreviewJob_SetProgressUnit(KIO__PreviewJob* self, int unit);
void KIO__PreviewJob_OnSetProgressUnit(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetProgressUnit(KIO__PreviewJob* self, int unit);
void KIO__PreviewJob_SetPercent(KIO__PreviewJob* self, unsigned long percentage);
void KIO__PreviewJob_OnSetPercent(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperSetPercent(KIO__PreviewJob* self, unsigned long percentage);
void KIO__PreviewJob_EmitResult(KIO__PreviewJob* self);
void KIO__PreviewJob_OnEmitResult(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperEmitResult(KIO__PreviewJob* self);
void KIO__PreviewJob_EmitPercent(KIO__PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__PreviewJob_OnEmitPercent(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperEmitPercent(KIO__PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__PreviewJob_EmitSpeed(KIO__PreviewJob* self, unsigned long speed);
void KIO__PreviewJob_OnEmitSpeed(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperEmitSpeed(KIO__PreviewJob* self, unsigned long speed);
void KIO__PreviewJob_StartElapsedTimer(KIO__PreviewJob* self);
void KIO__PreviewJob_OnStartElapsedTimer(KIO__PreviewJob* self, intptr_t slot);
void KIO__PreviewJob_SuperStartElapsedTimer(KIO__PreviewJob* self);
QObject* KIO__PreviewJob_Sender(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnSender(const KIO__PreviewJob* self, intptr_t slot);
QObject* KIO__PreviewJob_SuperSender(const KIO__PreviewJob* self);
int KIO__PreviewJob_SenderSignalIndex(const KIO__PreviewJob* self);
void KIO__PreviewJob_OnSenderSignalIndex(const KIO__PreviewJob* self, intptr_t slot);
int KIO__PreviewJob_SuperSenderSignalIndex(const KIO__PreviewJob* self);
int KIO__PreviewJob_Receivers(const KIO__PreviewJob* self, const char* signal);
void KIO__PreviewJob_OnReceivers(const KIO__PreviewJob* self, intptr_t slot);
int KIO__PreviewJob_SuperReceivers(const KIO__PreviewJob* self, const char* signal);
bool KIO__PreviewJob_IsSignalConnected(const KIO__PreviewJob* self, const QMetaMethod* signal);
void KIO__PreviewJob_OnIsSignalConnected(const KIO__PreviewJob* self, intptr_t slot);
bool KIO__PreviewJob_SuperIsSignalConnected(const KIO__PreviewJob* self, const QMetaMethod* signal);
void KIO__PreviewJob_Delete(KIO__PreviewJob* self);

KIO__PreviewJob* KIO_FilePreview(const KFileItemList* param1, const QSize* param2, const libqt_list /* of libqt_string */ param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
