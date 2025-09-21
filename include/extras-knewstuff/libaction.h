#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBACTION_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Action)
typedef KNSWidgets::Action KNSWidgets__Action;
#endif
#else
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSWidgets__Action KNSWidgets__Action;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KNSWidgets__Action* KNSWidgets__Action_new(const libqt_string text, const libqt_string configFile, QObject* parent);
QMetaObject* KNSWidgets__Action_MetaObject(const KNSWidgets__Action* self);
void* KNSWidgets__Action_Metacast(KNSWidgets__Action* self, const char* param1);
int KNSWidgets__Action_Metacall(KNSWidgets__Action* self, int param1, int param2, void** param3);
libqt_string KNSWidgets__Action_Tr(const char* s);
void KNSWidgets__Action_DialogFinished(KNSWidgets__Action* self, const libqt_list /* of KNSCore__Entry* */ changedEntries);
void KNSWidgets__Action_Connect_DialogFinished(KNSWidgets__Action* self, intptr_t slot);
libqt_string KNSWidgets__Action_Tr2(const char* s, const char* c);
libqt_string KNSWidgets__Action_Tr3(const char* s, const char* c, int n);
void KNSWidgets__Action_OnMetacall(KNSWidgets__Action* self, intptr_t slot);
int KNSWidgets__Action_QBaseMetacall(KNSWidgets__Action* self, int param1, int param2, void** param3);
bool KNSWidgets__Action_Event(KNSWidgets__Action* self, QEvent* param1);
void KNSWidgets__Action_OnEvent(KNSWidgets__Action* self, intptr_t slot);
bool KNSWidgets__Action_QBaseEvent(KNSWidgets__Action* self, QEvent* param1);
bool KNSWidgets__Action_EventFilter(KNSWidgets__Action* self, QObject* watched, QEvent* event);
void KNSWidgets__Action_OnEventFilter(KNSWidgets__Action* self, intptr_t slot);
bool KNSWidgets__Action_QBaseEventFilter(KNSWidgets__Action* self, QObject* watched, QEvent* event);
void KNSWidgets__Action_TimerEvent(KNSWidgets__Action* self, QTimerEvent* event);
void KNSWidgets__Action_OnTimerEvent(KNSWidgets__Action* self, intptr_t slot);
void KNSWidgets__Action_QBaseTimerEvent(KNSWidgets__Action* self, QTimerEvent* event);
void KNSWidgets__Action_ChildEvent(KNSWidgets__Action* self, QChildEvent* event);
void KNSWidgets__Action_OnChildEvent(KNSWidgets__Action* self, intptr_t slot);
void KNSWidgets__Action_QBaseChildEvent(KNSWidgets__Action* self, QChildEvent* event);
void KNSWidgets__Action_CustomEvent(KNSWidgets__Action* self, QEvent* event);
void KNSWidgets__Action_OnCustomEvent(KNSWidgets__Action* self, intptr_t slot);
void KNSWidgets__Action_QBaseCustomEvent(KNSWidgets__Action* self, QEvent* event);
void KNSWidgets__Action_ConnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal);
void KNSWidgets__Action_OnConnectNotify(KNSWidgets__Action* self, intptr_t slot);
void KNSWidgets__Action_QBaseConnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal);
void KNSWidgets__Action_DisconnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal);
void KNSWidgets__Action_OnDisconnectNotify(KNSWidgets__Action* self, intptr_t slot);
void KNSWidgets__Action_QBaseDisconnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal);
QObject* KNSWidgets__Action_Sender(const KNSWidgets__Action* self);
void KNSWidgets__Action_OnSender(const KNSWidgets__Action* self, intptr_t slot);
QObject* KNSWidgets__Action_QBaseSender(const KNSWidgets__Action* self);
int KNSWidgets__Action_SenderSignalIndex(const KNSWidgets__Action* self);
void KNSWidgets__Action_OnSenderSignalIndex(const KNSWidgets__Action* self, intptr_t slot);
int KNSWidgets__Action_QBaseSenderSignalIndex(const KNSWidgets__Action* self);
int KNSWidgets__Action_Receivers(const KNSWidgets__Action* self, const char* signal);
void KNSWidgets__Action_OnReceivers(const KNSWidgets__Action* self, intptr_t slot);
int KNSWidgets__Action_QBaseReceivers(const KNSWidgets__Action* self, const char* signal);
bool KNSWidgets__Action_IsSignalConnected(const KNSWidgets__Action* self, const QMetaMethod* signal);
void KNSWidgets__Action_OnIsSignalConnected(const KNSWidgets__Action* self, intptr_t slot);
bool KNSWidgets__Action_QBaseIsSignalConnected(const KNSWidgets__Action* self, const QMetaMethod* signal);
void KNSWidgets__Action_Delete(KNSWidgets__Action* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
