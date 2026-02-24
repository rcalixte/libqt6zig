#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKCOLORSCHEMEWATCHER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKCOLORSCHEMEWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KColorSchemeWatcher KColorSchemeWatcher;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KColorSchemeWatcher* KColorSchemeWatcher_new();
KColorSchemeWatcher* KColorSchemeWatcher_new2(QObject* parent);
QMetaObject* KColorSchemeWatcher_MetaObject(const KColorSchemeWatcher* self);
void* KColorSchemeWatcher_Metacast(KColorSchemeWatcher* self, const char* param1);
int KColorSchemeWatcher_Metacall(KColorSchemeWatcher* self, int param1, int param2, void** param3);
int KColorSchemeWatcher_SystemPreference(const KColorSchemeWatcher* self);
void KColorSchemeWatcher_SystemPreferenceChanged(KColorSchemeWatcher* self);
void KColorSchemeWatcher_Connect_SystemPreferenceChanged(KColorSchemeWatcher* self, intptr_t slot);
void KColorSchemeWatcher_OnMetaObject(const KColorSchemeWatcher* self, intptr_t slot);
QMetaObject* KColorSchemeWatcher_SuperMetaObject(const KColorSchemeWatcher* self);
void KColorSchemeWatcher_OnMetacast(KColorSchemeWatcher* self, intptr_t slot);
void* KColorSchemeWatcher_SuperMetacast(KColorSchemeWatcher* self, const char* param1);
void KColorSchemeWatcher_OnMetacall(KColorSchemeWatcher* self, intptr_t slot);
int KColorSchemeWatcher_SuperMetacall(KColorSchemeWatcher* self, int param1, int param2, void** param3);
bool KColorSchemeWatcher_Event(KColorSchemeWatcher* self, QEvent* event);
void KColorSchemeWatcher_OnEvent(KColorSchemeWatcher* self, intptr_t slot);
bool KColorSchemeWatcher_SuperEvent(KColorSchemeWatcher* self, QEvent* event);
bool KColorSchemeWatcher_EventFilter(KColorSchemeWatcher* self, QObject* watched, QEvent* event);
void KColorSchemeWatcher_OnEventFilter(KColorSchemeWatcher* self, intptr_t slot);
bool KColorSchemeWatcher_SuperEventFilter(KColorSchemeWatcher* self, QObject* watched, QEvent* event);
void KColorSchemeWatcher_TimerEvent(KColorSchemeWatcher* self, QTimerEvent* event);
void KColorSchemeWatcher_OnTimerEvent(KColorSchemeWatcher* self, intptr_t slot);
void KColorSchemeWatcher_SuperTimerEvent(KColorSchemeWatcher* self, QTimerEvent* event);
void KColorSchemeWatcher_ChildEvent(KColorSchemeWatcher* self, QChildEvent* event);
void KColorSchemeWatcher_OnChildEvent(KColorSchemeWatcher* self, intptr_t slot);
void KColorSchemeWatcher_SuperChildEvent(KColorSchemeWatcher* self, QChildEvent* event);
void KColorSchemeWatcher_CustomEvent(KColorSchemeWatcher* self, QEvent* event);
void KColorSchemeWatcher_OnCustomEvent(KColorSchemeWatcher* self, intptr_t slot);
void KColorSchemeWatcher_SuperCustomEvent(KColorSchemeWatcher* self, QEvent* event);
void KColorSchemeWatcher_ConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
void KColorSchemeWatcher_OnConnectNotify(KColorSchemeWatcher* self, intptr_t slot);
void KColorSchemeWatcher_SuperConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
void KColorSchemeWatcher_DisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
void KColorSchemeWatcher_OnDisconnectNotify(KColorSchemeWatcher* self, intptr_t slot);
void KColorSchemeWatcher_SuperDisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal);
QObject* KColorSchemeWatcher_Sender(const KColorSchemeWatcher* self);
void KColorSchemeWatcher_OnSender(const KColorSchemeWatcher* self, intptr_t slot);
QObject* KColorSchemeWatcher_SuperSender(const KColorSchemeWatcher* self);
int KColorSchemeWatcher_SenderSignalIndex(const KColorSchemeWatcher* self);
void KColorSchemeWatcher_OnSenderSignalIndex(const KColorSchemeWatcher* self, intptr_t slot);
int KColorSchemeWatcher_SuperSenderSignalIndex(const KColorSchemeWatcher* self);
int KColorSchemeWatcher_Receivers(const KColorSchemeWatcher* self, const char* signal);
void KColorSchemeWatcher_OnReceivers(const KColorSchemeWatcher* self, intptr_t slot);
int KColorSchemeWatcher_SuperReceivers(const KColorSchemeWatcher* self, const char* signal);
bool KColorSchemeWatcher_IsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal);
void KColorSchemeWatcher_OnIsSignalConnected(const KColorSchemeWatcher* self, intptr_t slot);
bool KColorSchemeWatcher_SuperIsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal);
void KColorSchemeWatcher_Delete(KColorSchemeWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
