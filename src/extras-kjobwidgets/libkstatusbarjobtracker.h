#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKSTATUSBARJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKSTATUSBARJOBTRACKER_H

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
typedef struct KStatusBarJobTracker KStatusBarJobTracker;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KStatusBarJobTracker* KStatusBarJobTracker_new(QWidget* parent);
KStatusBarJobTracker* KStatusBarJobTracker_new2();
KStatusBarJobTracker* KStatusBarJobTracker_new3(QWidget* parent, bool button);
QMetaObject* KStatusBarJobTracker_MetaObject(const KStatusBarJobTracker* self);
void* KStatusBarJobTracker_Metacast(KStatusBarJobTracker* self, const char* param1);
int KStatusBarJobTracker_Metacall(KStatusBarJobTracker* self, int param1, int param2, void** param3);
libqt_string KStatusBarJobTracker_Tr(const char* s);
void KStatusBarJobTracker_RegisterJob(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_UnregisterJob(KStatusBarJobTracker* self, KJob* job);
QWidget* KStatusBarJobTracker_Widget(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_SetStatusBarMode(KStatusBarJobTracker* self, int statusBarMode);
void KStatusBarJobTracker_Description(KStatusBarJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KStatusBarJobTracker_TotalAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KStatusBarJobTracker_Percent(KStatusBarJobTracker* self, KJob* job, unsigned long percent);
void KStatusBarJobTracker_Speed(KStatusBarJobTracker* self, KJob* job, unsigned long value);
void KStatusBarJobTracker_SlotClean(KStatusBarJobTracker* self, KJob* job);
libqt_string KStatusBarJobTracker_Tr2(const char* s, const char* c);
libqt_string KStatusBarJobTracker_Tr3(const char* s, const char* c, int n);
void KStatusBarJobTracker_OnMetacall(KStatusBarJobTracker* self, intptr_t slot);
int KStatusBarJobTracker_QBaseMetacall(KStatusBarJobTracker* self, int param1, int param2, void** param3);
void KStatusBarJobTracker_OnRegisterJob(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseRegisterJob(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnUnregisterJob(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseUnregisterJob(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnWidget(KStatusBarJobTracker* self, intptr_t slot);
QWidget* KStatusBarJobTracker_QBaseWidget(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnDescription(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseDescription(KStatusBarJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KStatusBarJobTracker_OnTotalAmount(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseTotalAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KStatusBarJobTracker_OnPercent(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBasePercent(KStatusBarJobTracker* self, KJob* job, unsigned long percent);
void KStatusBarJobTracker_OnSpeed(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseSpeed(KStatusBarJobTracker* self, KJob* job, unsigned long value);
void KStatusBarJobTracker_OnSlotClean(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseSlotClean(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_Finished(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnFinished(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseFinished(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_SlotStop(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnSlotStop(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseSlotStop(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_SlotSuspend(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnSlotSuspend(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseSlotSuspend(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_SlotResume(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnSlotResume(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseSlotResume(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_Suspended(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnSuspended(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseSuspended(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_Resumed(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_OnResumed(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseResumed(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_InfoMessage(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
void KStatusBarJobTracker_OnInfoMessage(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseInfoMessage(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
void KStatusBarJobTracker_Warning(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
void KStatusBarJobTracker_OnWarning(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseWarning(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
void KStatusBarJobTracker_ProcessedAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KStatusBarJobTracker_OnProcessedAmount(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseProcessedAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
bool KStatusBarJobTracker_Event(KStatusBarJobTracker* self, QEvent* event);
void KStatusBarJobTracker_OnEvent(KStatusBarJobTracker* self, intptr_t slot);
bool KStatusBarJobTracker_QBaseEvent(KStatusBarJobTracker* self, QEvent* event);
bool KStatusBarJobTracker_EventFilter(KStatusBarJobTracker* self, QObject* watched, QEvent* event);
void KStatusBarJobTracker_OnEventFilter(KStatusBarJobTracker* self, intptr_t slot);
bool KStatusBarJobTracker_QBaseEventFilter(KStatusBarJobTracker* self, QObject* watched, QEvent* event);
void KStatusBarJobTracker_TimerEvent(KStatusBarJobTracker* self, QTimerEvent* event);
void KStatusBarJobTracker_OnTimerEvent(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseTimerEvent(KStatusBarJobTracker* self, QTimerEvent* event);
void KStatusBarJobTracker_ChildEvent(KStatusBarJobTracker* self, QChildEvent* event);
void KStatusBarJobTracker_OnChildEvent(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseChildEvent(KStatusBarJobTracker* self, QChildEvent* event);
void KStatusBarJobTracker_CustomEvent(KStatusBarJobTracker* self, QEvent* event);
void KStatusBarJobTracker_OnCustomEvent(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseCustomEvent(KStatusBarJobTracker* self, QEvent* event);
void KStatusBarJobTracker_ConnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
void KStatusBarJobTracker_OnConnectNotify(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseConnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
void KStatusBarJobTracker_DisconnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
void KStatusBarJobTracker_OnDisconnectNotify(KStatusBarJobTracker* self, intptr_t slot);
void KStatusBarJobTracker_QBaseDisconnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
QObject* KStatusBarJobTracker_Sender(const KStatusBarJobTracker* self);
void KStatusBarJobTracker_OnSender(const KStatusBarJobTracker* self, intptr_t slot);
QObject* KStatusBarJobTracker_QBaseSender(const KStatusBarJobTracker* self);
int KStatusBarJobTracker_SenderSignalIndex(const KStatusBarJobTracker* self);
void KStatusBarJobTracker_OnSenderSignalIndex(const KStatusBarJobTracker* self, intptr_t slot);
int KStatusBarJobTracker_QBaseSenderSignalIndex(const KStatusBarJobTracker* self);
int KStatusBarJobTracker_Receivers(const KStatusBarJobTracker* self, const char* signal);
void KStatusBarJobTracker_OnReceivers(const KStatusBarJobTracker* self, intptr_t slot);
int KStatusBarJobTracker_QBaseReceivers(const KStatusBarJobTracker* self, const char* signal);
bool KStatusBarJobTracker_IsSignalConnected(const KStatusBarJobTracker* self, const QMetaMethod* signal);
void KStatusBarJobTracker_OnIsSignalConnected(const KStatusBarJobTracker* self, intptr_t slot);
bool KStatusBarJobTracker_QBaseIsSignalConnected(const KStatusBarJobTracker* self, const QMetaMethod* signal);
void KStatusBarJobTracker_Delete(KStatusBarJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
