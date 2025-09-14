#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKABSTRACTWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKABSTRACTWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAbstractWidgetJobTracker KAbstractWidgetJobTracker;
typedef struct KJob KJob;
typedef struct KJobTrackerInterface KJobTrackerInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KAbstractWidgetJobTracker* KAbstractWidgetJobTracker_new(QWidget* parent);
KAbstractWidgetJobTracker* KAbstractWidgetJobTracker_new2();
QMetaObject* KAbstractWidgetJobTracker_MetaObject(const KAbstractWidgetJobTracker* self);
void* KAbstractWidgetJobTracker_Metacast(KAbstractWidgetJobTracker* self, const char* param1);
int KAbstractWidgetJobTracker_Metacall(KAbstractWidgetJobTracker* self, int param1, int param2, void** param3);
libqt_string KAbstractWidgetJobTracker_Tr(const char* s);
void KAbstractWidgetJobTracker_RegisterJob(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_UnregisterJob(KAbstractWidgetJobTracker* self, KJob* job);
QWidget* KAbstractWidgetJobTracker_Widget(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SetStopOnClose(KAbstractWidgetJobTracker* self, KJob* job, bool stopOnClose);
bool KAbstractWidgetJobTracker_StopOnClose(const KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SetAutoDelete(KAbstractWidgetJobTracker* self, KJob* job, bool autoDelete);
bool KAbstractWidgetJobTracker_AutoDelete(const KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Finished(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SlotStop(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SlotSuspend(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SlotResume(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SlotClean(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Stopped(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Connect_Stopped(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_Suspend(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Connect_Suspend(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_Resume(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Connect_Resume(KAbstractWidgetJobTracker* self, intptr_t slot);
libqt_string KAbstractWidgetJobTracker_Tr2(const char* s, const char* c);
libqt_string KAbstractWidgetJobTracker_Tr3(const char* s, const char* c, int n);
void KAbstractWidgetJobTracker_OnMetacall(KAbstractWidgetJobTracker* self, intptr_t slot);
int KAbstractWidgetJobTracker_QBaseMetacall(KAbstractWidgetJobTracker* self, int param1, int param2, void** param3);
void KAbstractWidgetJobTracker_OnRegisterJob(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseRegisterJob(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnUnregisterJob(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseUnregisterJob(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnWidget(KAbstractWidgetJobTracker* self, intptr_t slot);
QWidget* KAbstractWidgetJobTracker_QBaseWidget(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnFinished(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseFinished(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnSlotStop(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseSlotStop(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnSlotSuspend(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseSlotSuspend(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnSlotResume(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseSlotResume(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnSlotClean(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseSlotClean(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Suspended(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnSuspended(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseSuspended(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Resumed(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_OnResumed(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseResumed(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Description(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KAbstractWidgetJobTracker_OnDescription(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseDescription(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KAbstractWidgetJobTracker_InfoMessage(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
void KAbstractWidgetJobTracker_OnInfoMessage(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseInfoMessage(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
void KAbstractWidgetJobTracker_Warning(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
void KAbstractWidgetJobTracker_OnWarning(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseWarning(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
void KAbstractWidgetJobTracker_TotalAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KAbstractWidgetJobTracker_OnTotalAmount(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseTotalAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KAbstractWidgetJobTracker_ProcessedAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KAbstractWidgetJobTracker_OnProcessedAmount(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseProcessedAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KAbstractWidgetJobTracker_Percent(KAbstractWidgetJobTracker* self, KJob* job, unsigned long percent);
void KAbstractWidgetJobTracker_OnPercent(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBasePercent(KAbstractWidgetJobTracker* self, KJob* job, unsigned long percent);
void KAbstractWidgetJobTracker_Speed(KAbstractWidgetJobTracker* self, KJob* job, unsigned long value);
void KAbstractWidgetJobTracker_OnSpeed(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseSpeed(KAbstractWidgetJobTracker* self, KJob* job, unsigned long value);
bool KAbstractWidgetJobTracker_Event(KAbstractWidgetJobTracker* self, QEvent* event);
void KAbstractWidgetJobTracker_OnEvent(KAbstractWidgetJobTracker* self, intptr_t slot);
bool KAbstractWidgetJobTracker_QBaseEvent(KAbstractWidgetJobTracker* self, QEvent* event);
bool KAbstractWidgetJobTracker_EventFilter(KAbstractWidgetJobTracker* self, QObject* watched, QEvent* event);
void KAbstractWidgetJobTracker_OnEventFilter(KAbstractWidgetJobTracker* self, intptr_t slot);
bool KAbstractWidgetJobTracker_QBaseEventFilter(KAbstractWidgetJobTracker* self, QObject* watched, QEvent* event);
void KAbstractWidgetJobTracker_TimerEvent(KAbstractWidgetJobTracker* self, QTimerEvent* event);
void KAbstractWidgetJobTracker_OnTimerEvent(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseTimerEvent(KAbstractWidgetJobTracker* self, QTimerEvent* event);
void KAbstractWidgetJobTracker_ChildEvent(KAbstractWidgetJobTracker* self, QChildEvent* event);
void KAbstractWidgetJobTracker_OnChildEvent(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseChildEvent(KAbstractWidgetJobTracker* self, QChildEvent* event);
void KAbstractWidgetJobTracker_CustomEvent(KAbstractWidgetJobTracker* self, QEvent* event);
void KAbstractWidgetJobTracker_OnCustomEvent(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseCustomEvent(KAbstractWidgetJobTracker* self, QEvent* event);
void KAbstractWidgetJobTracker_ConnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
void KAbstractWidgetJobTracker_OnConnectNotify(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseConnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
void KAbstractWidgetJobTracker_DisconnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
void KAbstractWidgetJobTracker_OnDisconnectNotify(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_QBaseDisconnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
QObject* KAbstractWidgetJobTracker_Sender(const KAbstractWidgetJobTracker* self);
void KAbstractWidgetJobTracker_OnSender(const KAbstractWidgetJobTracker* self, intptr_t slot);
QObject* KAbstractWidgetJobTracker_QBaseSender(const KAbstractWidgetJobTracker* self);
int KAbstractWidgetJobTracker_SenderSignalIndex(const KAbstractWidgetJobTracker* self);
void KAbstractWidgetJobTracker_OnSenderSignalIndex(const KAbstractWidgetJobTracker* self, intptr_t slot);
int KAbstractWidgetJobTracker_QBaseSenderSignalIndex(const KAbstractWidgetJobTracker* self);
int KAbstractWidgetJobTracker_Receivers(const KAbstractWidgetJobTracker* self, const char* signal);
void KAbstractWidgetJobTracker_OnReceivers(const KAbstractWidgetJobTracker* self, intptr_t slot);
int KAbstractWidgetJobTracker_QBaseReceivers(const KAbstractWidgetJobTracker* self, const char* signal);
bool KAbstractWidgetJobTracker_IsSignalConnected(const KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
void KAbstractWidgetJobTracker_OnIsSignalConnected(const KAbstractWidgetJobTracker* self, intptr_t slot);
bool KAbstractWidgetJobTracker_QBaseIsSignalConnected(const KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
void KAbstractWidgetJobTracker_Delete(KAbstractWidgetJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
