#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERV2JOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERV2JOBTRACKER_H

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
typedef struct KUiServerV2JobTracker KUiServerV2JobTracker;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KUiServerV2JobTracker* KUiServerV2JobTracker_new();
KUiServerV2JobTracker* KUiServerV2JobTracker_new2(QObject* parent);
QMetaObject* KUiServerV2JobTracker_MetaObject(const KUiServerV2JobTracker* self);
void* KUiServerV2JobTracker_Metacast(KUiServerV2JobTracker* self, const char* param1);
int KUiServerV2JobTracker_Metacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3);
libqt_string KUiServerV2JobTracker_Tr(const char* s);
void KUiServerV2JobTracker_RegisterJob(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_UnregisterJob(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_Finished(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_Suspended(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_Resumed(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_Description(KUiServerV2JobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KUiServerV2JobTracker_InfoMessage(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
void KUiServerV2JobTracker_TotalAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerV2JobTracker_ProcessedAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerV2JobTracker_Percent(KUiServerV2JobTracker* self, KJob* job, unsigned long percent);
void KUiServerV2JobTracker_Speed(KUiServerV2JobTracker* self, KJob* job, unsigned long value);
libqt_string KUiServerV2JobTracker_Tr2(const char* s, const char* c);
libqt_string KUiServerV2JobTracker_Tr3(const char* s, const char* c, int n);
void KUiServerV2JobTracker_OnMetacall(KUiServerV2JobTracker* self, intptr_t slot);
int KUiServerV2JobTracker_QBaseMetacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3);
void KUiServerV2JobTracker_OnRegisterJob(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseRegisterJob(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_OnUnregisterJob(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseUnregisterJob(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_OnFinished(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseFinished(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_OnSuspended(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseSuspended(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_OnResumed(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseResumed(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_OnDescription(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseDescription(KUiServerV2JobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KUiServerV2JobTracker_OnInfoMessage(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseInfoMessage(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
void KUiServerV2JobTracker_OnTotalAmount(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseTotalAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerV2JobTracker_OnProcessedAmount(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseProcessedAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
void KUiServerV2JobTracker_OnPercent(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBasePercent(KUiServerV2JobTracker* self, KJob* job, unsigned long percent);
void KUiServerV2JobTracker_OnSpeed(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseSpeed(KUiServerV2JobTracker* self, KJob* job, unsigned long value);
void KUiServerV2JobTracker_Warning(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
void KUiServerV2JobTracker_OnWarning(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseWarning(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
bool KUiServerV2JobTracker_Event(KUiServerV2JobTracker* self, QEvent* event);
void KUiServerV2JobTracker_OnEvent(KUiServerV2JobTracker* self, intptr_t slot);
bool KUiServerV2JobTracker_QBaseEvent(KUiServerV2JobTracker* self, QEvent* event);
bool KUiServerV2JobTracker_EventFilter(KUiServerV2JobTracker* self, QObject* watched, QEvent* event);
void KUiServerV2JobTracker_OnEventFilter(KUiServerV2JobTracker* self, intptr_t slot);
bool KUiServerV2JobTracker_QBaseEventFilter(KUiServerV2JobTracker* self, QObject* watched, QEvent* event);
void KUiServerV2JobTracker_TimerEvent(KUiServerV2JobTracker* self, QTimerEvent* event);
void KUiServerV2JobTracker_OnTimerEvent(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseTimerEvent(KUiServerV2JobTracker* self, QTimerEvent* event);
void KUiServerV2JobTracker_ChildEvent(KUiServerV2JobTracker* self, QChildEvent* event);
void KUiServerV2JobTracker_OnChildEvent(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseChildEvent(KUiServerV2JobTracker* self, QChildEvent* event);
void KUiServerV2JobTracker_CustomEvent(KUiServerV2JobTracker* self, QEvent* event);
void KUiServerV2JobTracker_OnCustomEvent(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseCustomEvent(KUiServerV2JobTracker* self, QEvent* event);
void KUiServerV2JobTracker_ConnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
void KUiServerV2JobTracker_OnConnectNotify(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseConnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
void KUiServerV2JobTracker_DisconnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
void KUiServerV2JobTracker_OnDisconnectNotify(KUiServerV2JobTracker* self, intptr_t slot);
void KUiServerV2JobTracker_QBaseDisconnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
QObject* KUiServerV2JobTracker_Sender(const KUiServerV2JobTracker* self);
void KUiServerV2JobTracker_OnSender(const KUiServerV2JobTracker* self, intptr_t slot);
QObject* KUiServerV2JobTracker_QBaseSender(const KUiServerV2JobTracker* self);
int KUiServerV2JobTracker_SenderSignalIndex(const KUiServerV2JobTracker* self);
void KUiServerV2JobTracker_OnSenderSignalIndex(const KUiServerV2JobTracker* self, intptr_t slot);
int KUiServerV2JobTracker_QBaseSenderSignalIndex(const KUiServerV2JobTracker* self);
int KUiServerV2JobTracker_Receivers(const KUiServerV2JobTracker* self, const char* signal);
void KUiServerV2JobTracker_OnReceivers(const KUiServerV2JobTracker* self, intptr_t slot);
int KUiServerV2JobTracker_QBaseReceivers(const KUiServerV2JobTracker* self, const char* signal);
bool KUiServerV2JobTracker_IsSignalConnected(const KUiServerV2JobTracker* self, const QMetaMethod* signal);
void KUiServerV2JobTracker_OnIsSignalConnected(const KUiServerV2JobTracker* self, intptr_t slot);
bool KUiServerV2JobTracker_QBaseIsSignalConnected(const KUiServerV2JobTracker* self, const QMetaMethod* signal);
void KUiServerV2JobTracker_Delete(KUiServerV2JobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
