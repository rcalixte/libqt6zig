#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKWIDGETJOBTRACKER_H

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
typedef struct KWidgetJobTracker KWidgetJobTracker;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KWidgetJobTracker* KWidgetJobTracker_new(QWidget* parent);
KWidgetJobTracker* KWidgetJobTracker_new2();
QMetaObject* KWidgetJobTracker_MetaObject(const KWidgetJobTracker* self);
void* KWidgetJobTracker_Metacast(KWidgetJobTracker* self, const char* param1);
int KWidgetJobTracker_Metacall(KWidgetJobTracker* self, int param1, int param2, void** param3);
libqt_string KWidgetJobTracker_Tr(const char* s);
QWidget* KWidgetJobTracker_Widget(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_RegisterJob(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_UnregisterJob(KWidgetJobTracker* self, KJob* job);
bool KWidgetJobTracker_KeepOpen(const KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_InfoMessage(KWidgetJobTracker* self, KJob* job, const libqt_string message);
void KWidgetJobTracker_Description(KWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KWidgetJobTracker_TotalAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KWidgetJobTracker_ProcessedAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KWidgetJobTracker_Percent(KWidgetJobTracker* self, KJob* job, unsigned long percent);
void KWidgetJobTracker_Speed(KWidgetJobTracker* self, KJob* job, unsigned long value);
void KWidgetJobTracker_SlotClean(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_Suspended(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_Resumed(KWidgetJobTracker* self, KJob* job);
libqt_string KWidgetJobTracker_Tr2(const char* s, const char* c);
libqt_string KWidgetJobTracker_Tr3(const char* s, const char* c, int n);
void KWidgetJobTracker_OnMetacall(KWidgetJobTracker* self, intptr_t slot);
int KWidgetJobTracker_QBaseMetacall(KWidgetJobTracker* self, int param1, int param2, void** param3);
void KWidgetJobTracker_OnWidget(KWidgetJobTracker* self, intptr_t slot);
QWidget* KWidgetJobTracker_QBaseWidget(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnRegisterJob(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseRegisterJob(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnUnregisterJob(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseUnregisterJob(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnInfoMessage(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseInfoMessage(KWidgetJobTracker* self, KJob* job, const libqt_string message);
void KWidgetJobTracker_OnDescription(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseDescription(KWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KWidgetJobTracker_OnTotalAmount(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseTotalAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KWidgetJobTracker_OnProcessedAmount(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseProcessedAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KWidgetJobTracker_OnPercent(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBasePercent(KWidgetJobTracker* self, KJob* job, unsigned long percent);
void KWidgetJobTracker_OnSpeed(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseSpeed(KWidgetJobTracker* self, KJob* job, unsigned long value);
void KWidgetJobTracker_OnSlotClean(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseSlotClean(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnSuspended(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseSuspended(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnResumed(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseResumed(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_Finished(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnFinished(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseFinished(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_SlotStop(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnSlotStop(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseSlotStop(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_SlotSuspend(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnSlotSuspend(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseSlotSuspend(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_SlotResume(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_OnSlotResume(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseSlotResume(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_Warning(KWidgetJobTracker* self, KJob* job, const libqt_string message);
void KWidgetJobTracker_OnWarning(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseWarning(KWidgetJobTracker* self, KJob* job, const libqt_string message);
bool KWidgetJobTracker_Event(KWidgetJobTracker* self, QEvent* event);
void KWidgetJobTracker_OnEvent(KWidgetJobTracker* self, intptr_t slot);
bool KWidgetJobTracker_QBaseEvent(KWidgetJobTracker* self, QEvent* event);
bool KWidgetJobTracker_EventFilter(KWidgetJobTracker* self, QObject* watched, QEvent* event);
void KWidgetJobTracker_OnEventFilter(KWidgetJobTracker* self, intptr_t slot);
bool KWidgetJobTracker_QBaseEventFilter(KWidgetJobTracker* self, QObject* watched, QEvent* event);
void KWidgetJobTracker_TimerEvent(KWidgetJobTracker* self, QTimerEvent* event);
void KWidgetJobTracker_OnTimerEvent(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseTimerEvent(KWidgetJobTracker* self, QTimerEvent* event);
void KWidgetJobTracker_ChildEvent(KWidgetJobTracker* self, QChildEvent* event);
void KWidgetJobTracker_OnChildEvent(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseChildEvent(KWidgetJobTracker* self, QChildEvent* event);
void KWidgetJobTracker_CustomEvent(KWidgetJobTracker* self, QEvent* event);
void KWidgetJobTracker_OnCustomEvent(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseCustomEvent(KWidgetJobTracker* self, QEvent* event);
void KWidgetJobTracker_ConnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
void KWidgetJobTracker_OnConnectNotify(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseConnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
void KWidgetJobTracker_DisconnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
void KWidgetJobTracker_OnDisconnectNotify(KWidgetJobTracker* self, intptr_t slot);
void KWidgetJobTracker_QBaseDisconnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
QObject* KWidgetJobTracker_Sender(const KWidgetJobTracker* self);
void KWidgetJobTracker_OnSender(const KWidgetJobTracker* self, intptr_t slot);
QObject* KWidgetJobTracker_QBaseSender(const KWidgetJobTracker* self);
int KWidgetJobTracker_SenderSignalIndex(const KWidgetJobTracker* self);
void KWidgetJobTracker_OnSenderSignalIndex(const KWidgetJobTracker* self, intptr_t slot);
int KWidgetJobTracker_QBaseSenderSignalIndex(const KWidgetJobTracker* self);
int KWidgetJobTracker_Receivers(const KWidgetJobTracker* self, const char* signal);
void KWidgetJobTracker_OnReceivers(const KWidgetJobTracker* self, intptr_t slot);
int KWidgetJobTracker_QBaseReceivers(const KWidgetJobTracker* self, const char* signal);
bool KWidgetJobTracker_IsSignalConnected(const KWidgetJobTracker* self, const QMetaMethod* signal);
void KWidgetJobTracker_OnIsSignalConnected(const KWidgetJobTracker* self, intptr_t slot);
bool KWidgetJobTracker_QBaseIsSignalConnected(const KWidgetJobTracker* self, const QMetaMethod* signal);
void KWidgetJobTracker_Delete(KWidgetJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
