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
void KWindowInsetsController_OnMetacall(KWindowInsetsController* self, intptr_t slot);
int KWindowInsetsController_QBaseMetacall(KWindowInsetsController* self, int param1, int param2, void** param3);
libqt_string KWindowInsetsController_Tr(const char* s);
QColor* KWindowInsetsController_StatusBarBackgroundColor(const KWindowInsetsController* self);
void KWindowInsetsController_SetStatusBarBackgroundColor(KWindowInsetsController* self, const QColor* color);
QColor* KWindowInsetsController_NavigationBarBackgroundColor(const KWindowInsetsController* self);
void KWindowInsetsController_SetNavigationBarBackgroundColor(KWindowInsetsController* self, const QColor* color);
void KWindowInsetsController_StatusBarBackgroundColorChanged(KWindowInsetsController* self);
void KWindowInsetsController_Connect_StatusBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_NavigationBarBackgroundColorChanged(KWindowInsetsController* self);
void KWindowInsetsController_Connect_NavigationBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot);
libqt_string KWindowInsetsController_Tr2(const char* s, const char* c);
libqt_string KWindowInsetsController_Tr3(const char* s, const char* c, int n);
bool KWindowInsetsController_Event(KWindowInsetsController* self, QEvent* event);
void KWindowInsetsController_OnEvent(KWindowInsetsController* self, intptr_t slot);
bool KWindowInsetsController_QBaseEvent(KWindowInsetsController* self, QEvent* event);
bool KWindowInsetsController_EventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event);
void KWindowInsetsController_OnEventFilter(KWindowInsetsController* self, intptr_t slot);
bool KWindowInsetsController_QBaseEventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event);
void KWindowInsetsController_TimerEvent(KWindowInsetsController* self, QTimerEvent* event);
void KWindowInsetsController_OnTimerEvent(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_QBaseTimerEvent(KWindowInsetsController* self, QTimerEvent* event);
void KWindowInsetsController_ChildEvent(KWindowInsetsController* self, QChildEvent* event);
void KWindowInsetsController_OnChildEvent(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_QBaseChildEvent(KWindowInsetsController* self, QChildEvent* event);
void KWindowInsetsController_CustomEvent(KWindowInsetsController* self, QEvent* event);
void KWindowInsetsController_OnCustomEvent(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_QBaseCustomEvent(KWindowInsetsController* self, QEvent* event);
void KWindowInsetsController_ConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_OnConnectNotify(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_QBaseConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_DisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_OnDisconnectNotify(KWindowInsetsController* self, intptr_t slot);
void KWindowInsetsController_QBaseDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal);
QObject* KWindowInsetsController_Sender(const KWindowInsetsController* self);
void KWindowInsetsController_OnSender(const KWindowInsetsController* self, intptr_t slot);
QObject* KWindowInsetsController_QBaseSender(const KWindowInsetsController* self);
int KWindowInsetsController_SenderSignalIndex(const KWindowInsetsController* self);
void KWindowInsetsController_OnSenderSignalIndex(const KWindowInsetsController* self, intptr_t slot);
int KWindowInsetsController_QBaseSenderSignalIndex(const KWindowInsetsController* self);
int KWindowInsetsController_Receivers(const KWindowInsetsController* self, const char* signal);
void KWindowInsetsController_OnReceivers(const KWindowInsetsController* self, intptr_t slot);
int KWindowInsetsController_QBaseReceivers(const KWindowInsetsController* self, const char* signal);
bool KWindowInsetsController_IsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_OnIsSignalConnected(const KWindowInsetsController* self, intptr_t slot);
bool KWindowInsetsController_QBaseIsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal);
void KWindowInsetsController_Delete(KWindowInsetsController* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
