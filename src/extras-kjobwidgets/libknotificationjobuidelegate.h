#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKNOTIFICATIONJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKNOTIFICATIONJOBUIDELEGATE_H

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
typedef struct KNotificationJobUiDelegate KNotificationJobUiDelegate;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new();
KNotificationJobUiDelegate* KNotificationJobUiDelegate_new2(int flags);
QMetaObject* KNotificationJobUiDelegate_MetaObject(const KNotificationJobUiDelegate* self);
void* KNotificationJobUiDelegate_Metacast(KNotificationJobUiDelegate* self, const char* param1);
int KNotificationJobUiDelegate_Metacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3);
libqt_string KNotificationJobUiDelegate_Tr(const char* s);
void KNotificationJobUiDelegate_ShowErrorMessage(KNotificationJobUiDelegate* self);
bool KNotificationJobUiDelegate_SetJob(KNotificationJobUiDelegate* self, KJob* job);
void KNotificationJobUiDelegate_SlotWarning(KNotificationJobUiDelegate* self, KJob* job, const libqt_string message);
libqt_string KNotificationJobUiDelegate_Tr2(const char* s, const char* c);
libqt_string KNotificationJobUiDelegate_Tr3(const char* s, const char* c, int n);
void KNotificationJobUiDelegate_OnMetacall(KNotificationJobUiDelegate* self, intptr_t slot);
int KNotificationJobUiDelegate_QBaseMetacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3);
void KNotificationJobUiDelegate_OnShowErrorMessage(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseShowErrorMessage(KNotificationJobUiDelegate* self);
void KNotificationJobUiDelegate_OnSetJob(KNotificationJobUiDelegate* self, intptr_t slot);
bool KNotificationJobUiDelegate_QBaseSetJob(KNotificationJobUiDelegate* self, KJob* job);
void KNotificationJobUiDelegate_OnSlotWarning(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseSlotWarning(KNotificationJobUiDelegate* self, KJob* job, const libqt_string message);
bool KNotificationJobUiDelegate_Event(KNotificationJobUiDelegate* self, QEvent* event);
void KNotificationJobUiDelegate_OnEvent(KNotificationJobUiDelegate* self, intptr_t slot);
bool KNotificationJobUiDelegate_QBaseEvent(KNotificationJobUiDelegate* self, QEvent* event);
bool KNotificationJobUiDelegate_EventFilter(KNotificationJobUiDelegate* self, QObject* watched, QEvent* event);
void KNotificationJobUiDelegate_OnEventFilter(KNotificationJobUiDelegate* self, intptr_t slot);
bool KNotificationJobUiDelegate_QBaseEventFilter(KNotificationJobUiDelegate* self, QObject* watched, QEvent* event);
void KNotificationJobUiDelegate_TimerEvent(KNotificationJobUiDelegate* self, QTimerEvent* event);
void KNotificationJobUiDelegate_OnTimerEvent(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseTimerEvent(KNotificationJobUiDelegate* self, QTimerEvent* event);
void KNotificationJobUiDelegate_ChildEvent(KNotificationJobUiDelegate* self, QChildEvent* event);
void KNotificationJobUiDelegate_OnChildEvent(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseChildEvent(KNotificationJobUiDelegate* self, QChildEvent* event);
void KNotificationJobUiDelegate_CustomEvent(KNotificationJobUiDelegate* self, QEvent* event);
void KNotificationJobUiDelegate_OnCustomEvent(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseCustomEvent(KNotificationJobUiDelegate* self, QEvent* event);
void KNotificationJobUiDelegate_ConnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
void KNotificationJobUiDelegate_OnConnectNotify(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseConnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
void KNotificationJobUiDelegate_DisconnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
void KNotificationJobUiDelegate_OnDisconnectNotify(KNotificationJobUiDelegate* self, intptr_t slot);
void KNotificationJobUiDelegate_QBaseDisconnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
KJob* KNotificationJobUiDelegate_Job(const KNotificationJobUiDelegate* self);
void KNotificationJobUiDelegate_OnJob(const KNotificationJobUiDelegate* self, intptr_t slot);
KJob* KNotificationJobUiDelegate_QBaseJob(const KNotificationJobUiDelegate* self);
QObject* KNotificationJobUiDelegate_Sender(const KNotificationJobUiDelegate* self);
void KNotificationJobUiDelegate_OnSender(const KNotificationJobUiDelegate* self, intptr_t slot);
QObject* KNotificationJobUiDelegate_QBaseSender(const KNotificationJobUiDelegate* self);
int KNotificationJobUiDelegate_SenderSignalIndex(const KNotificationJobUiDelegate* self);
void KNotificationJobUiDelegate_OnSenderSignalIndex(const KNotificationJobUiDelegate* self, intptr_t slot);
int KNotificationJobUiDelegate_QBaseSenderSignalIndex(const KNotificationJobUiDelegate* self);
int KNotificationJobUiDelegate_Receivers(const KNotificationJobUiDelegate* self, const char* signal);
void KNotificationJobUiDelegate_OnReceivers(const KNotificationJobUiDelegate* self, intptr_t slot);
int KNotificationJobUiDelegate_QBaseReceivers(const KNotificationJobUiDelegate* self, const char* signal);
bool KNotificationJobUiDelegate_IsSignalConnected(const KNotificationJobUiDelegate* self, const QMetaMethod* signal);
void KNotificationJobUiDelegate_OnIsSignalConnected(const KNotificationJobUiDelegate* self, intptr_t slot);
bool KNotificationJobUiDelegate_QBaseIsSignalConnected(const KNotificationJobUiDelegate* self, const QMetaMethod* signal);
void KNotificationJobUiDelegate_Delete(KNotificationJobUiDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
