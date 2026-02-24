#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOGGLEFULLSCREENACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOGGLEFULLSCREENACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToggleAction KToggleAction;
typedef struct KToggleFullScreenAction KToggleFullScreenAction;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KToggleFullScreenAction* KToggleFullScreenAction_new(QObject* parent);
KToggleFullScreenAction* KToggleFullScreenAction_new2(QWidget* window, QObject* parent);
QMetaObject* KToggleFullScreenAction_MetaObject(const KToggleFullScreenAction* self);
void* KToggleFullScreenAction_Metacast(KToggleFullScreenAction* self, const char* param1);
int KToggleFullScreenAction_Metacall(KToggleFullScreenAction* self, int param1, int param2, void** param3);
void KToggleFullScreenAction_SetWindow(KToggleFullScreenAction* self, QWidget* window);
void KToggleFullScreenAction_SetFullScreen(QWidget* window, bool set);
bool KToggleFullScreenAction_EventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event);
void KToggleFullScreenAction_SlotToggled(KToggleFullScreenAction* self, bool checked);
void KToggleFullScreenAction_OnMetaObject(const KToggleFullScreenAction* self, intptr_t slot);
QMetaObject* KToggleFullScreenAction_SuperMetaObject(const KToggleFullScreenAction* self);
void KToggleFullScreenAction_OnMetacast(KToggleFullScreenAction* self, intptr_t slot);
void* KToggleFullScreenAction_SuperMetacast(KToggleFullScreenAction* self, const char* param1);
void KToggleFullScreenAction_OnMetacall(KToggleFullScreenAction* self, intptr_t slot);
int KToggleFullScreenAction_SuperMetacall(KToggleFullScreenAction* self, int param1, int param2, void** param3);
void KToggleFullScreenAction_OnEventFilter(KToggleFullScreenAction* self, intptr_t slot);
bool KToggleFullScreenAction_SuperEventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event);
void KToggleFullScreenAction_OnSlotToggled(KToggleFullScreenAction* self, intptr_t slot);
void KToggleFullScreenAction_SuperSlotToggled(KToggleFullScreenAction* self, bool checked);
bool KToggleFullScreenAction_Event(KToggleFullScreenAction* self, QEvent* param1);
void KToggleFullScreenAction_OnEvent(KToggleFullScreenAction* self, intptr_t slot);
bool KToggleFullScreenAction_SuperEvent(KToggleFullScreenAction* self, QEvent* param1);
void KToggleFullScreenAction_TimerEvent(KToggleFullScreenAction* self, QTimerEvent* event);
void KToggleFullScreenAction_OnTimerEvent(KToggleFullScreenAction* self, intptr_t slot);
void KToggleFullScreenAction_SuperTimerEvent(KToggleFullScreenAction* self, QTimerEvent* event);
void KToggleFullScreenAction_ChildEvent(KToggleFullScreenAction* self, QChildEvent* event);
void KToggleFullScreenAction_OnChildEvent(KToggleFullScreenAction* self, intptr_t slot);
void KToggleFullScreenAction_SuperChildEvent(KToggleFullScreenAction* self, QChildEvent* event);
void KToggleFullScreenAction_CustomEvent(KToggleFullScreenAction* self, QEvent* event);
void KToggleFullScreenAction_OnCustomEvent(KToggleFullScreenAction* self, intptr_t slot);
void KToggleFullScreenAction_SuperCustomEvent(KToggleFullScreenAction* self, QEvent* event);
void KToggleFullScreenAction_ConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
void KToggleFullScreenAction_OnConnectNotify(KToggleFullScreenAction* self, intptr_t slot);
void KToggleFullScreenAction_SuperConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
void KToggleFullScreenAction_DisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
void KToggleFullScreenAction_OnDisconnectNotify(KToggleFullScreenAction* self, intptr_t slot);
void KToggleFullScreenAction_SuperDisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
QObject* KToggleFullScreenAction_Sender(const KToggleFullScreenAction* self);
void KToggleFullScreenAction_OnSender(const KToggleFullScreenAction* self, intptr_t slot);
QObject* KToggleFullScreenAction_SuperSender(const KToggleFullScreenAction* self);
int KToggleFullScreenAction_SenderSignalIndex(const KToggleFullScreenAction* self);
void KToggleFullScreenAction_OnSenderSignalIndex(const KToggleFullScreenAction* self, intptr_t slot);
int KToggleFullScreenAction_SuperSenderSignalIndex(const KToggleFullScreenAction* self);
int KToggleFullScreenAction_Receivers(const KToggleFullScreenAction* self, const char* signal);
void KToggleFullScreenAction_OnReceivers(const KToggleFullScreenAction* self, intptr_t slot);
int KToggleFullScreenAction_SuperReceivers(const KToggleFullScreenAction* self, const char* signal);
bool KToggleFullScreenAction_IsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal);
void KToggleFullScreenAction_OnIsSignalConnected(const KToggleFullScreenAction* self, intptr_t slot);
bool KToggleFullScreenAction_SuperIsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal);
void KToggleFullScreenAction_Delete(KToggleFullScreenAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
