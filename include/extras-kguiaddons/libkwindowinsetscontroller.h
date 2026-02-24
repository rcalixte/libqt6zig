#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKWINDOWINSETSCONTROLLER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKWINDOWINSETSCONTROLLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KWindowInsetsController KWindowInsetsController;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KWindowInsetsController* KWindowInsetsController_new();
KWindowInsetsController* KWindowInsetsController_new2(QObject* parent);
QMetaObject* KWindowInsetsController_MetaObject(const KWindowInsetsController* self);
void* KWindowInsetsController_Metacast(KWindowInsetsController* self, const char* param1);
int KWindowInsetsController_Metacall(KWindowInsetsController* self, int param1, int param2, void** param3);
QColor* KWindowInsetsController_StatusBarBackgroundColor(const KWindowInsetsController* self);
void KWindowInsetsController_SetStatusBarBackgroundColor(KWindowInsetsController* self, const QColor* color);
QColor* KWindowInsetsController_NavigationBarBackgroundColor(const KWindowInsetsController* self);
void KWindowInsetsController_SetNavigationBarBackgroundColor(KWindowInsetsController* self, const QColor* color);
void KWindowInsetsController_StatusBarBackgroundColorChanged(KWindowInsetsController* self);
void KWindowInsetsController_Connect_StatusBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_NavigationBarBackgroundColorChanged(KWindowInsetsController* self);
void KWindowInsetsController_Connect_NavigationBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_OnMetaObject(const KWindowInsetsController* self, intptr_t slot);
QMetaObject* KWindowInsetsController_SuperMetaObject(const KWindowInsetsController* self);
void KWindowInsetsController_OnMetacast(KWindowInsetsController* self, intptr_t slot);
void* KWindowInsetsController_SuperMetacast(KWindowInsetsController* self, const char* param1);
void KWindowInsetsController_OnMetacall(KWindowInsetsController* self, intptr_t slot);
int KWindowInsetsController_SuperMetacall(KWindowInsetsController* self, int param1, int param2, void** param3);
bool KWindowInsetsController_Event(KWindowInsetsController* self, QEvent* event);
void KWindowInsetsController_OnEvent(KWindowInsetsController* self, intptr_t slot);
bool KWindowInsetsController_SuperEvent(KWindowInsetsController* self, QEvent* event);
bool KWindowInsetsController_EventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event);
void KWindowInsetsController_OnEventFilter(KWindowInsetsController* self, intptr_t slot);
bool KWindowInsetsController_SuperEventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event);
void KWindowInsetsController_TimerEvent(KWindowInsetsController* self, QTimerEvent* event);
void KWindowInsetsController_OnTimerEvent(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_SuperTimerEvent(KWindowInsetsController* self, QTimerEvent* event);
void KWindowInsetsController_ChildEvent(KWindowInsetsController* self, QChildEvent* event);
void KWindowInsetsController_OnChildEvent(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_SuperChildEvent(KWindowInsetsController* self, QChildEvent* event);
void KWindowInsetsController_CustomEvent(KWindowInsetsController* self, QEvent* event);
void KWindowInsetsController_OnCustomEvent(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_SuperCustomEvent(KWindowInsetsController* self, QEvent* event);
void KWindowInsetsController_ConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_OnConnectNotify(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_SuperConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_DisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_OnDisconnectNotify(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_SuperDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
QObject* KWindowInsetsController_Sender(const KWindowInsetsController* self);
void KWindowInsetsController_OnSender(const KWindowInsetsController* self, intptr_t slot);
QObject* KWindowInsetsController_SuperSender(const KWindowInsetsController* self);
int KWindowInsetsController_SenderSignalIndex(const KWindowInsetsController* self);
void KWindowInsetsController_OnSenderSignalIndex(const KWindowInsetsController* self, intptr_t slot);
int KWindowInsetsController_SuperSenderSignalIndex(const KWindowInsetsController* self);
int KWindowInsetsController_Receivers(const KWindowInsetsController* self, const char* signal);
void KWindowInsetsController_OnReceivers(const KWindowInsetsController* self, intptr_t slot);
int KWindowInsetsController_SuperReceivers(const KWindowInsetsController* self, const char* signal);
bool KWindowInsetsController_IsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_OnIsSignalConnected(const KWindowInsetsController* self, intptr_t slot);
bool KWindowInsetsController_SuperIsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_Delete(KWindowInsetsController* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
