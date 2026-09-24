#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONWATCHER_H
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONWATCHER_H

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

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new(uint32_t selection);
#endif
KSelectionWatcher* KSelectionWatcher_new2(const char* selection);
#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new3(uint32_t selection, xcb_connection_t* c, uint32_t root);
#endif
#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new4(const char* selection, xcb_connection_t* c, uint32_t root);
#endif
#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new5(uint32_t selection, int screen);
#endif
#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new6(uint32_t selection, int screen, QObject* parent);
#endif
KSelectionWatcher* KSelectionWatcher_new7(const char* selection, int screen);
KSelectionWatcher* KSelectionWatcher_new8(const char* selection, int screen, QObject* parent);
#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new9(uint32_t selection, xcb_connection_t* c, uint32_t root, QObject* parent);
#endif
#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_new10(const char* selection, xcb_connection_t* c, uint32_t root, QObject* parent);
#endif
QMetaObject* KSelectionWatcher_MetaObject(const KSelectionWatcher* self);
void* KSelectionWatcher_Metacast(KSelectionWatcher* self, const char* param1);
int KSelectionWatcher_Metacall(KSelectionWatcher* self, int param1, int param2, void** param3);
libqt_string KSelectionWatcher_Tr(const char* s);
#ifdef __linux__
uint32_t KSelectionWatcher_Owner(KSelectionWatcher* self);
#endif
void KSelectionWatcher_FilterEvent(KSelectionWatcher* self, void* ev_P);
#ifdef __linux__
void KSelectionWatcher_NewOwner(KSelectionWatcher* self, uint32_t owner);
#endif
void KSelectionWatcher_Connect_NewOwner(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_LostOwner(KSelectionWatcher* self);
void KSelectionWatcher_Connect_LostOwner(KSelectionWatcher* self, intptr_t slot);
libqt_string KSelectionWatcher_Tr2(const char* s, const char* c);
libqt_string KSelectionWatcher_Tr3(const char* s, const char* c, int n);
void KSelectionWatcher_OnMetaObject(const KSelectionWatcher* self, intptr_t slot);
QMetaObject* KSelectionWatcher_SuperMetaObject(const KSelectionWatcher* self);
void KSelectionWatcher_OnMetacast(KSelectionWatcher* self, intptr_t slot);
void* KSelectionWatcher_SuperMetacast(KSelectionWatcher* self, const char* param1);
void KSelectionWatcher_OnMetacall(KSelectionWatcher* self, intptr_t slot);
int KSelectionWatcher_SuperMetacall(KSelectionWatcher* self, int param1, int param2, void** param3);
bool KSelectionWatcher_Event(KSelectionWatcher* self, QEvent* event);
void KSelectionWatcher_OnEvent(KSelectionWatcher* self, intptr_t slot);
bool KSelectionWatcher_SuperEvent(KSelectionWatcher* self, QEvent* event);
bool KSelectionWatcher_EventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event);
void KSelectionWatcher_OnEventFilter(KSelectionWatcher* self, intptr_t slot);
bool KSelectionWatcher_SuperEventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event);
void KSelectionWatcher_TimerEvent(KSelectionWatcher* self, QTimerEvent* event);
void KSelectionWatcher_OnTimerEvent(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_SuperTimerEvent(KSelectionWatcher* self, QTimerEvent* event);
void KSelectionWatcher_ChildEvent(KSelectionWatcher* self, QChildEvent* event);
void KSelectionWatcher_OnChildEvent(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_SuperChildEvent(KSelectionWatcher* self, QChildEvent* event);
void KSelectionWatcher_CustomEvent(KSelectionWatcher* self, QEvent* event);
void KSelectionWatcher_OnCustomEvent(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_SuperCustomEvent(KSelectionWatcher* self, QEvent* event);
void KSelectionWatcher_ConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_OnConnectNotify(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_SuperConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_DisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_OnDisconnectNotify(KSelectionWatcher* self, intptr_t slot);
void KSelectionWatcher_SuperDisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal);
QObject* KSelectionWatcher_Sender(const KSelectionWatcher* self);
void KSelectionWatcher_OnSender(const KSelectionWatcher* self, intptr_t slot);
QObject* KSelectionWatcher_SuperSender(const KSelectionWatcher* self);
int KSelectionWatcher_SenderSignalIndex(const KSelectionWatcher* self);
void KSelectionWatcher_OnSenderSignalIndex(const KSelectionWatcher* self, intptr_t slot);
int KSelectionWatcher_SuperSenderSignalIndex(const KSelectionWatcher* self);
int KSelectionWatcher_Receivers(const KSelectionWatcher* self, const char* signal);
void KSelectionWatcher_OnReceivers(const KSelectionWatcher* self, intptr_t slot);
int KSelectionWatcher_SuperReceivers(const KSelectionWatcher* self, const char* signal);
bool KSelectionWatcher_IsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_OnIsSignalConnected(const KSelectionWatcher* self, intptr_t slot);
bool KSelectionWatcher_SuperIsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal);
void KSelectionWatcher_Delete(KSelectionWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
