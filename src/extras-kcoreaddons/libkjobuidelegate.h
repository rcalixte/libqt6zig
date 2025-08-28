#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKJOBUIDELEGATE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKJOBUIDELEGATE_H

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

KJobUiDelegate* KJobUiDelegate_new();
KJobUiDelegate* KJobUiDelegate_new2(int flags);
QMetaObject* KJobUiDelegate_MetaObject(const KJobUiDelegate* self);
void* KJobUiDelegate_Metacast(KJobUiDelegate* self, const char* param1);
int KJobUiDelegate_Metacall(KJobUiDelegate* self, int param1, int param2, void** param3);
libqt_string KJobUiDelegate_Tr(const char* s);
bool KJobUiDelegate_SetJob(KJobUiDelegate* self, KJob* job);
void KJobUiDelegate_ShowErrorMessage(KJobUiDelegate* self);
void KJobUiDelegate_SetAutoErrorHandlingEnabled(KJobUiDelegate* self, bool enable);
bool KJobUiDelegate_IsAutoErrorHandlingEnabled(const KJobUiDelegate* self);
void KJobUiDelegate_SetAutoWarningHandlingEnabled(KJobUiDelegate* self, bool enable);
bool KJobUiDelegate_IsAutoWarningHandlingEnabled(const KJobUiDelegate* self);
void KJobUiDelegate_SlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message);
libqt_string KJobUiDelegate_Tr2(const char* s, const char* c);
libqt_string KJobUiDelegate_Tr3(const char* s, const char* c, int n);
void KJobUiDelegate_OnMetacall(KJobUiDelegate* self, intptr_t slot);
int KJobUiDelegate_QBaseMetacall(KJobUiDelegate* self, int param1, int param2, void** param3);
void KJobUiDelegate_OnSetJob(KJobUiDelegate* self, intptr_t slot);
bool KJobUiDelegate_QBaseSetJob(KJobUiDelegate* self, KJob* job);
void KJobUiDelegate_OnShowErrorMessage(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseShowErrorMessage(KJobUiDelegate* self);
void KJobUiDelegate_OnSlotWarning(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseSlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message);
bool KJobUiDelegate_Event(KJobUiDelegate* self, QEvent* event);
void KJobUiDelegate_OnEvent(KJobUiDelegate* self, intptr_t slot);
bool KJobUiDelegate_QBaseEvent(KJobUiDelegate* self, QEvent* event);
bool KJobUiDelegate_EventFilter(KJobUiDelegate* self, QObject* watched, QEvent* event);
void KJobUiDelegate_OnEventFilter(KJobUiDelegate* self, intptr_t slot);
bool KJobUiDelegate_QBaseEventFilter(KJobUiDelegate* self, QObject* watched, QEvent* event);
void KJobUiDelegate_TimerEvent(KJobUiDelegate* self, QTimerEvent* event);
void KJobUiDelegate_OnTimerEvent(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseTimerEvent(KJobUiDelegate* self, QTimerEvent* event);
void KJobUiDelegate_ChildEvent(KJobUiDelegate* self, QChildEvent* event);
void KJobUiDelegate_OnChildEvent(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseChildEvent(KJobUiDelegate* self, QChildEvent* event);
void KJobUiDelegate_CustomEvent(KJobUiDelegate* self, QEvent* event);
void KJobUiDelegate_OnCustomEvent(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseCustomEvent(KJobUiDelegate* self, QEvent* event);
void KJobUiDelegate_ConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
void KJobUiDelegate_OnConnectNotify(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
void KJobUiDelegate_DisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
void KJobUiDelegate_OnDisconnectNotify(KJobUiDelegate* self, intptr_t slot);
void KJobUiDelegate_QBaseDisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
KJob* KJobUiDelegate_Job(const KJobUiDelegate* self);
void KJobUiDelegate_OnJob(const KJobUiDelegate* self, intptr_t slot);
KJob* KJobUiDelegate_QBaseJob(const KJobUiDelegate* self);
QObject* KJobUiDelegate_Sender(const KJobUiDelegate* self);
void KJobUiDelegate_OnSender(const KJobUiDelegate* self, intptr_t slot);
QObject* KJobUiDelegate_QBaseSender(const KJobUiDelegate* self);
int KJobUiDelegate_SenderSignalIndex(const KJobUiDelegate* self);
void KJobUiDelegate_OnSenderSignalIndex(const KJobUiDelegate* self, intptr_t slot);
int KJobUiDelegate_QBaseSenderSignalIndex(const KJobUiDelegate* self);
int KJobUiDelegate_Receivers(const KJobUiDelegate* self, const char* signal);
void KJobUiDelegate_OnReceivers(const KJobUiDelegate* self, intptr_t slot);
int KJobUiDelegate_QBaseReceivers(const KJobUiDelegate* self, const char* signal);
bool KJobUiDelegate_IsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal);
void KJobUiDelegate_OnIsSignalConnected(const KJobUiDelegate* self, intptr_t slot);
bool KJobUiDelegate_QBaseIsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal);
void KJobUiDelegate_Delete(KJobUiDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
