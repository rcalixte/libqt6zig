#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKJOBTRACKERINTERFACE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKJOBTRACKERINTERFACE_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KJobTrackerInterface* KJobTrackerInterface_new();
KJobTrackerInterface* KJobTrackerInterface_new2(QObject* parent);
QMetaObject* KJobTrackerInterface_MetaObject(const KJobTrackerInterface* self);
void* KJobTrackerInterface_Metacast(KJobTrackerInterface* self, const char* param1);
int KJobTrackerInterface_Metacall(KJobTrackerInterface* self, int param1, int param2, void** param3);
libqt_string KJobTrackerInterface_Tr(const char* s);
void KJobTrackerInterface_RegisterJob(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_UnregisterJob(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_Finished(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_Suspended(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_Resumed(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_Description(KJobTrackerInterface* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KJobTrackerInterface_InfoMessage(KJobTrackerInterface* self, KJob* job, const libqt_string message);
void KJobTrackerInterface_Warning(KJobTrackerInterface* self, KJob* job, const libqt_string message);
void KJobTrackerInterface_TotalAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
void KJobTrackerInterface_ProcessedAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
void KJobTrackerInterface_Percent(KJobTrackerInterface* self, KJob* job, unsigned long percent);
void KJobTrackerInterface_Speed(KJobTrackerInterface* self, KJob* job, unsigned long value);
libqt_string KJobTrackerInterface_Tr2(const char* s, const char* c);
libqt_string KJobTrackerInterface_Tr3(const char* s, const char* c, int n);
void KJobTrackerInterface_OnMetacall(KJobTrackerInterface* self, intptr_t slot);
int KJobTrackerInterface_QBaseMetacall(KJobTrackerInterface* self, int param1, int param2, void** param3);
void KJobTrackerInterface_OnRegisterJob(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseRegisterJob(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_OnUnregisterJob(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseUnregisterJob(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_OnFinished(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseFinished(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_OnSuspended(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseSuspended(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_OnResumed(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseResumed(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_OnDescription(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseDescription(KJobTrackerInterface* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KJobTrackerInterface_OnInfoMessage(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseInfoMessage(KJobTrackerInterface* self, KJob* job, const libqt_string message);
void KJobTrackerInterface_OnWarning(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseWarning(KJobTrackerInterface* self, KJob* job, const libqt_string message);
void KJobTrackerInterface_OnTotalAmount(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseTotalAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
void KJobTrackerInterface_OnProcessedAmount(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseProcessedAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
void KJobTrackerInterface_OnPercent(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBasePercent(KJobTrackerInterface* self, KJob* job, unsigned long percent);
void KJobTrackerInterface_OnSpeed(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseSpeed(KJobTrackerInterface* self, KJob* job, unsigned long value);
bool KJobTrackerInterface_Event(KJobTrackerInterface* self, QEvent* event);
void KJobTrackerInterface_OnEvent(KJobTrackerInterface* self, intptr_t slot);
bool KJobTrackerInterface_QBaseEvent(KJobTrackerInterface* self, QEvent* event);
bool KJobTrackerInterface_EventFilter(KJobTrackerInterface* self, QObject* watched, QEvent* event);
void KJobTrackerInterface_OnEventFilter(KJobTrackerInterface* self, intptr_t slot);
bool KJobTrackerInterface_QBaseEventFilter(KJobTrackerInterface* self, QObject* watched, QEvent* event);
void KJobTrackerInterface_TimerEvent(KJobTrackerInterface* self, QTimerEvent* event);
void KJobTrackerInterface_OnTimerEvent(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseTimerEvent(KJobTrackerInterface* self, QTimerEvent* event);
void KJobTrackerInterface_ChildEvent(KJobTrackerInterface* self, QChildEvent* event);
void KJobTrackerInterface_OnChildEvent(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseChildEvent(KJobTrackerInterface* self, QChildEvent* event);
void KJobTrackerInterface_CustomEvent(KJobTrackerInterface* self, QEvent* event);
void KJobTrackerInterface_OnCustomEvent(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseCustomEvent(KJobTrackerInterface* self, QEvent* event);
void KJobTrackerInterface_ConnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
void KJobTrackerInterface_OnConnectNotify(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseConnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
void KJobTrackerInterface_DisconnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
void KJobTrackerInterface_OnDisconnectNotify(KJobTrackerInterface* self, intptr_t slot);
void KJobTrackerInterface_QBaseDisconnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
QObject* KJobTrackerInterface_Sender(const KJobTrackerInterface* self);
void KJobTrackerInterface_OnSender(const KJobTrackerInterface* self, intptr_t slot);
QObject* KJobTrackerInterface_QBaseSender(const KJobTrackerInterface* self);
int KJobTrackerInterface_SenderSignalIndex(const KJobTrackerInterface* self);
void KJobTrackerInterface_OnSenderSignalIndex(const KJobTrackerInterface* self, intptr_t slot);
int KJobTrackerInterface_QBaseSenderSignalIndex(const KJobTrackerInterface* self);
int KJobTrackerInterface_Receivers(const KJobTrackerInterface* self, const char* signal);
void KJobTrackerInterface_OnReceivers(const KJobTrackerInterface* self, intptr_t slot);
int KJobTrackerInterface_QBaseReceivers(const KJobTrackerInterface* self, const char* signal);
bool KJobTrackerInterface_IsSignalConnected(const KJobTrackerInterface* self, const QMetaMethod* signal);
void KJobTrackerInterface_OnIsSignalConnected(const KJobTrackerInterface* self, intptr_t slot);
bool KJobTrackerInterface_QBaseIsSignalConnected(const KJobTrackerInterface* self, const QMetaMethod* signal);
void KJobTrackerInterface_Delete(KJobTrackerInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
