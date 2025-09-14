#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERJOBTRACKER_H

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
typedef struct KJobTrackerInterface KJobTrackerInterface;
typedef struct KUiServerJobTracker KUiServerJobTracker;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KUiServerJobTracker* KUiServerJobTracker_new();
KUiServerJobTracker* KUiServerJobTracker_new2(QObject* parent);
QMetaObject* KUiServerJobTracker_MetaObject(const KUiServerJobTracker* self);
void* KUiServerJobTracker_Metacast(KUiServerJobTracker* self, const char* param1);
int KUiServerJobTracker_Metacall(KUiServerJobTracker* self, int param1, int param2, void** param3);
libqt_string KUiServerJobTracker_Tr(const char* s);
void KUiServerJobTracker_RegisterJob(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_UnregisterJob(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_Finished(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_Suspended(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_Resumed(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_Description(KUiServerJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KUiServerJobTracker_InfoMessage(KUiServerJobTracker* self, KJob* job, const libqt_string message);
void KUiServerJobTracker_TotalAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerJobTracker_ProcessedAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerJobTracker_Percent(KUiServerJobTracker* self, KJob* job, unsigned long percent);
void KUiServerJobTracker_Speed(KUiServerJobTracker* self, KJob* job, unsigned long value);
libqt_string KUiServerJobTracker_Tr2(const char* s, const char* c);
libqt_string KUiServerJobTracker_Tr3(const char* s, const char* c, int n);
void KUiServerJobTracker_OnMetacall(KUiServerJobTracker* self, intptr_t slot);
int KUiServerJobTracker_QBaseMetacall(KUiServerJobTracker* self, int param1, int param2, void** param3);
void KUiServerJobTracker_OnRegisterJob(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseRegisterJob(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_OnUnregisterJob(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseUnregisterJob(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_OnFinished(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseFinished(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_OnSuspended(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseSuspended(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_OnResumed(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseResumed(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_OnDescription(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseDescription(KUiServerJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KUiServerJobTracker_OnInfoMessage(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseInfoMessage(KUiServerJobTracker* self, KJob* job, const libqt_string message);
void KUiServerJobTracker_OnTotalAmount(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseTotalAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerJobTracker_OnProcessedAmount(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseProcessedAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerJobTracker_OnPercent(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBasePercent(KUiServerJobTracker* self, KJob* job, unsigned long percent);
void KUiServerJobTracker_OnSpeed(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseSpeed(KUiServerJobTracker* self, KJob* job, unsigned long value);
void KUiServerJobTracker_Warning(KUiServerJobTracker* self, KJob* job, const libqt_string message);
void KUiServerJobTracker_OnWarning(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseWarning(KUiServerJobTracker* self, KJob* job, const libqt_string message);
bool KUiServerJobTracker_Event(KUiServerJobTracker* self, QEvent* event);
void KUiServerJobTracker_OnEvent(KUiServerJobTracker* self, intptr_t slot);
bool KUiServerJobTracker_QBaseEvent(KUiServerJobTracker* self, QEvent* event);
bool KUiServerJobTracker_EventFilter(KUiServerJobTracker* self, QObject* watched, QEvent* event);
void KUiServerJobTracker_OnEventFilter(KUiServerJobTracker* self, intptr_t slot);
bool KUiServerJobTracker_QBaseEventFilter(KUiServerJobTracker* self, QObject* watched, QEvent* event);
void KUiServerJobTracker_TimerEvent(KUiServerJobTracker* self, QTimerEvent* event);
void KUiServerJobTracker_OnTimerEvent(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseTimerEvent(KUiServerJobTracker* self, QTimerEvent* event);
void KUiServerJobTracker_ChildEvent(KUiServerJobTracker* self, QChildEvent* event);
void KUiServerJobTracker_OnChildEvent(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseChildEvent(KUiServerJobTracker* self, QChildEvent* event);
void KUiServerJobTracker_CustomEvent(KUiServerJobTracker* self, QEvent* event);
void KUiServerJobTracker_OnCustomEvent(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseCustomEvent(KUiServerJobTracker* self, QEvent* event);
void KUiServerJobTracker_ConnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
void KUiServerJobTracker_OnConnectNotify(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseConnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
void KUiServerJobTracker_DisconnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
void KUiServerJobTracker_OnDisconnectNotify(KUiServerJobTracker* self, intptr_t slot);
void KUiServerJobTracker_QBaseDisconnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
QObject* KUiServerJobTracker_Sender(const KUiServerJobTracker* self);
void KUiServerJobTracker_OnSender(const KUiServerJobTracker* self, intptr_t slot);
QObject* KUiServerJobTracker_QBaseSender(const KUiServerJobTracker* self);
int KUiServerJobTracker_SenderSignalIndex(const KUiServerJobTracker* self);
void KUiServerJobTracker_OnSenderSignalIndex(const KUiServerJobTracker* self, intptr_t slot);
int KUiServerJobTracker_QBaseSenderSignalIndex(const KUiServerJobTracker* self);
int KUiServerJobTracker_Receivers(const KUiServerJobTracker* self, const char* signal);
void KUiServerJobTracker_OnReceivers(const KUiServerJobTracker* self, intptr_t slot);
int KUiServerJobTracker_QBaseReceivers(const KUiServerJobTracker* self, const char* signal);
bool KUiServerJobTracker_IsSignalConnected(const KUiServerJobTracker* self, const QMetaMethod* signal);
void KUiServerJobTracker_OnIsSignalConnected(const KUiServerJobTracker* self, intptr_t slot);
bool KUiServerJobTracker_QBaseIsSignalConnected(const KUiServerJobTracker* self, const QMetaMethod* signal);
void KUiServerJobTracker_Delete(KUiServerJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
