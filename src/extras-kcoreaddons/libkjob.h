#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KJob KJob;
typedef struct KJobUiDelegate KJobUiDelegate;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KJob* KJob_new();
KJob* KJob_new2(QObject* parent);
QMetaObject* KJob_MetaObject(const KJob* self);
void* KJob_Metacast(KJob* self, const char* param1);
int KJob_Metacall(KJob* self, int param1, int param2, void** param3);
libqt_string KJob_Tr(const char* s);
void KJob_SetUiDelegate(KJob* self, KJobUiDelegate* delegate);
KJobUiDelegate* KJob_UiDelegate(const KJob* self);
int KJob_Capabilities(const KJob* self);
bool KJob_IsSuspended(const KJob* self);
void KJob_Start(KJob* self);
bool KJob_Kill(KJob* self);
bool KJob_Suspend(KJob* self);
bool KJob_Resume(KJob* self);
bool KJob_DoKill(KJob* self);
bool KJob_DoSuspend(KJob* self);
bool KJob_DoResume(KJob* self);
bool KJob_Exec(KJob* self);
int KJob_Error(const KJob* self);
libqt_string KJob_ErrorText(const KJob* self);
libqt_string KJob_ErrorString(const KJob* self);
unsigned long long KJob_ProcessedAmount(const KJob* self, int unit);
unsigned long long KJob_TotalAmount(const KJob* self, int unit);
unsigned long KJob_Percent(const KJob* self);
void KJob_SetAutoDelete(KJob* self, bool autodelete);
bool KJob_IsAutoDelete(const KJob* self);
void KJob_SetFinishedNotificationHidden(KJob* self);
bool KJob_IsFinishedNotificationHidden(const KJob* self);
bool KJob_IsStartedWithExec(const KJob* self);
long long KJob_ElapsedTime(const KJob* self);
void KJob_Description(KJob* self, KJob* job, const libqt_string title);
void KJob_Connect_Description(KJob* self, intptr_t slot);
void KJob_InfoMessage(KJob* self, KJob* job, const libqt_string message);
void KJob_Connect_InfoMessage(KJob* self, intptr_t slot);
void KJob_Warning(KJob* self, KJob* job, const libqt_string message);
void KJob_Connect_Warning(KJob* self, intptr_t slot);
void KJob_TotalSize(KJob* self, KJob* job, unsigned long long size);
void KJob_Connect_TotalSize(KJob* self, intptr_t slot);
void KJob_ProcessedSize(KJob* self, KJob* job, unsigned long long size);
void KJob_Connect_ProcessedSize(KJob* self, intptr_t slot);
void KJob_Speed(KJob* self, KJob* job, unsigned long speed);
void KJob_Connect_Speed(KJob* self, intptr_t slot);
libqt_string KJob_Tr2(const char* s, const char* c);
libqt_string KJob_Tr3(const char* s, const char* c, int n);
bool KJob_Kill1(KJob* self, int verbosity);
void KJob_SetFinishedNotificationHidden1(KJob* self, bool hide);
void KJob_Description3(KJob* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1);
void KJob_Connect_Description3(KJob* self, intptr_t slot);
void KJob_Description4(KJob* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KJob_Connect_Description4(KJob* self, intptr_t slot);
void KJob_OnMetacall(KJob* self, intptr_t slot);
int KJob_QBaseMetacall(KJob* self, int param1, int param2, void** param3);
void KJob_OnStart(KJob* self, intptr_t slot);
void KJob_QBaseStart(KJob* self);
void KJob_OnDoKill(KJob* self, intptr_t slot);
bool KJob_QBaseDoKill(KJob* self);
void KJob_OnDoSuspend(KJob* self, intptr_t slot);
bool KJob_QBaseDoSuspend(KJob* self);
void KJob_OnDoResume(KJob* self, intptr_t slot);
bool KJob_QBaseDoResume(KJob* self);
void KJob_OnErrorString(const KJob* self, intptr_t slot);
libqt_string KJob_QBaseErrorString(const KJob* self);
bool KJob_Event(KJob* self, QEvent* event);
void KJob_OnEvent(KJob* self, intptr_t slot);
bool KJob_QBaseEvent(KJob* self, QEvent* event);
bool KJob_EventFilter(KJob* self, QObject* watched, QEvent* event);
void KJob_OnEventFilter(KJob* self, intptr_t slot);
bool KJob_QBaseEventFilter(KJob* self, QObject* watched, QEvent* event);
void KJob_TimerEvent(KJob* self, QTimerEvent* event);
void KJob_OnTimerEvent(KJob* self, intptr_t slot);
void KJob_QBaseTimerEvent(KJob* self, QTimerEvent* event);
void KJob_ChildEvent(KJob* self, QChildEvent* event);
void KJob_OnChildEvent(KJob* self, intptr_t slot);
void KJob_QBaseChildEvent(KJob* self, QChildEvent* event);
void KJob_CustomEvent(KJob* self, QEvent* event);
void KJob_OnCustomEvent(KJob* self, intptr_t slot);
void KJob_QBaseCustomEvent(KJob* self, QEvent* event);
void KJob_ConnectNotify(KJob* self, const QMetaMethod* signal);
void KJob_OnConnectNotify(KJob* self, intptr_t slot);
void KJob_QBaseConnectNotify(KJob* self, const QMetaMethod* signal);
void KJob_DisconnectNotify(KJob* self, const QMetaMethod* signal);
void KJob_OnDisconnectNotify(KJob* self, intptr_t slot);
void KJob_QBaseDisconnectNotify(KJob* self, const QMetaMethod* signal);
void KJob_SetCapabilities(KJob* self, int capabilities);
void KJob_OnSetCapabilities(KJob* self, intptr_t slot);
void KJob_QBaseSetCapabilities(KJob* self, int capabilities);
bool KJob_IsFinished(const KJob* self);
void KJob_OnIsFinished(const KJob* self, intptr_t slot);
bool KJob_QBaseIsFinished(const KJob* self);
void KJob_SetError(KJob* self, int errorCode);
void KJob_OnSetError(KJob* self, intptr_t slot);
void KJob_QBaseSetError(KJob* self, int errorCode);
void KJob_SetErrorText(KJob* self, const libqt_string errorText);
void KJob_OnSetErrorText(KJob* self, intptr_t slot);
void KJob_QBaseSetErrorText(KJob* self, const libqt_string errorText);
void KJob_SetProcessedAmount(KJob* self, int unit, unsigned long long amount);
void KJob_OnSetProcessedAmount(KJob* self, intptr_t slot);
void KJob_QBaseSetProcessedAmount(KJob* self, int unit, unsigned long long amount);
void KJob_SetTotalAmount(KJob* self, int unit, unsigned long long amount);
void KJob_OnSetTotalAmount(KJob* self, intptr_t slot);
void KJob_QBaseSetTotalAmount(KJob* self, int unit, unsigned long long amount);
void KJob_SetProgressUnit(KJob* self, int unit);
void KJob_OnSetProgressUnit(KJob* self, intptr_t slot);
void KJob_QBaseSetProgressUnit(KJob* self, int unit);
void KJob_SetPercent(KJob* self, unsigned long percentage);
void KJob_OnSetPercent(KJob* self, intptr_t slot);
void KJob_QBaseSetPercent(KJob* self, unsigned long percentage);
void KJob_EmitResult(KJob* self);
void KJob_OnEmitResult(KJob* self, intptr_t slot);
void KJob_QBaseEmitResult(KJob* self);
void KJob_EmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KJob_OnEmitPercent(KJob* self, intptr_t slot);
void KJob_QBaseEmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KJob_EmitSpeed(KJob* self, unsigned long speed);
void KJob_OnEmitSpeed(KJob* self, intptr_t slot);
void KJob_QBaseEmitSpeed(KJob* self, unsigned long speed);
void KJob_StartElapsedTimer(KJob* self);
void KJob_OnStartElapsedTimer(KJob* self, intptr_t slot);
void KJob_QBaseStartElapsedTimer(KJob* self);
QObject* KJob_Sender(const KJob* self);
void KJob_OnSender(const KJob* self, intptr_t slot);
QObject* KJob_QBaseSender(const KJob* self);
int KJob_SenderSignalIndex(const KJob* self);
void KJob_OnSenderSignalIndex(const KJob* self, intptr_t slot);
int KJob_QBaseSenderSignalIndex(const KJob* self);
int KJob_Receivers(const KJob* self, const char* signal);
void KJob_OnReceivers(const KJob* self, intptr_t slot);
int KJob_QBaseReceivers(const KJob* self, const char* signal);
bool KJob_IsSignalConnected(const KJob* self, const QMetaMethod* signal);
void KJob_OnIsSignalConnected(const KJob* self, intptr_t slot);
bool KJob_QBaseIsSignalConnected(const KJob* self, const QMetaMethod* signal);
void KJob_Connect_Finished(KJob* self, intptr_t slot);
void KJob_Connect_Suspended(KJob* self, intptr_t slot);
void KJob_Connect_Resumed(KJob* self, intptr_t slot);
void KJob_Connect_Result(KJob* self, intptr_t slot);
void KJob_Connect_TotalAmountChanged(KJob* self, intptr_t slot);
void KJob_Connect_ProcessedAmountChanged(KJob* self, intptr_t slot);
void KJob_Connect_PercentChanged(KJob* self, intptr_t slot);
void KJob_Delete(KJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
