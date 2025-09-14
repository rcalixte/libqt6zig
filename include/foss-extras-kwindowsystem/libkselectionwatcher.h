#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKSELECTIONWATCHER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKSELECTIONWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSelectionWatcher KSelectionWatcher;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KSelectionWatcher* KSelectionWatcher_new(const char* selection);
KSelectionWatcher* KSelectionWatcher_new2(const char* selection, int screen);
KSelectionWatcher* KSelectionWatcher_new3(const char* selection, int screen, QObject* parent);
QMetaObject* KSelectionWatcher_MetaObject(const KSelectionWatcher* self);
void* KSelectionWatcher_Metacast(KSelectionWatcher* self, const char* param1);
int KSelectionWatcher_Metacall(KSelectionWatcher* self, int param1, int param2, void** param3);
libqt_string KSelectionWatcher_Tr(const char* s);
void KSelectionWatcher_FilterEvent(KSelectionWatcher* self, void* ev_P);
void KSelectionWatcher_LostOwner(KSelectionWatcher* self);
void KSelectionWatcher_Connect_LostOwner(KSelectionWatcher* self, intptr_t slot);
libqt_string KSelectionWatcher_Tr2(const char* s, const char* c);
libqt_string KSelectionWatcher_Tr3(const char* s, const char* c, int n);
void KSelectionWatcher_OnMetacall(KSelectionWatcher* self, intptr_t slot);
int KSelectionWatcher_QBaseMetacall(KSelectionWatcher* self, int param1, int param2, void** param3);
bool KSelectionWatcher_Event(KSelectionWatcher* self, QEvent* event);
void KSelectionWatcher_OnEvent(KSelectionWatcher* self, intptr_t slot);
bool KSelectionWatcher_QBaseEvent(KSelectionWatcher* self, QEvent* event);
bool KSelectionWatcher_EventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event);
void KSelectionWatcher_OnEventFilter(KSelectionWatcher* self, intptr_t slot);
bool KSelectionWatcher_QBaseEventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event);
void KSelectionWatcher_TimerEvent(KSelectionWatcher* self, QTimerEvent* event);
void KSelectionWatcher_OnTimerEvent(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_QBaseTimerEvent(KSelectionWatcher* self, QTimerEvent* event);
void KSelectionWatcher_ChildEvent(KSelectionWatcher* self, QChildEvent* event);
void KSelectionWatcher_OnChildEvent(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_QBaseChildEvent(KSelectionWatcher* self, QChildEvent* event);
void KSelectionWatcher_CustomEvent(KSelectionWatcher* self, QEvent* event);
void KSelectionWatcher_OnCustomEvent(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_QBaseCustomEvent(KSelectionWatcher* self, QEvent* event);
void KSelectionWatcher_ConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_OnConnectNotify(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_QBaseConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_DisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_OnDisconnectNotify(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_QBaseDisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
QObject* KSelectionWatcher_Sender(const KSelectionWatcher* self);
void KSelectionWatcher_OnSender(const KSelectionWatcher* self, intptr_t slot);
QObject* KSelectionWatcher_QBaseSender(const KSelectionWatcher* self);
int KSelectionWatcher_SenderSignalIndex(const KSelectionWatcher* self);
void KSelectionWatcher_OnSenderSignalIndex(const KSelectionWatcher* self, intptr_t slot);
int KSelectionWatcher_QBaseSenderSignalIndex(const KSelectionWatcher* self);
int KSelectionWatcher_Receivers(const KSelectionWatcher* self, const char* signal);
void KSelectionWatcher_OnReceivers(const KSelectionWatcher* self, intptr_t slot);
int KSelectionWatcher_QBaseReceivers(const KSelectionWatcher* self, const char* signal);
bool KSelectionWatcher_IsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_OnIsSignalConnected(const KSelectionWatcher* self, intptr_t slot);
bool KSelectionWatcher_QBaseIsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_Delete(KSelectionWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
