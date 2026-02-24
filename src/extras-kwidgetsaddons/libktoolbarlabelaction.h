#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLBARLABELACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLBARLABELACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToolBarLabelAction KToolBarLabelAction;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KToolBarLabelAction* KToolBarLabelAction_new(const libqt_string text, QObject* parent);
KToolBarLabelAction* KToolBarLabelAction_new2(QAction* buddy, const libqt_string text, QObject* parent);
QMetaObject* KToolBarLabelAction_MetaObject(const KToolBarLabelAction* self);
void* KToolBarLabelAction_Metacast(KToolBarLabelAction* self, const char* param1);
int KToolBarLabelAction_Metacall(KToolBarLabelAction* self, int param1, int param2, void** param3);
void KToolBarLabelAction_SetBuddy(KToolBarLabelAction* self, QAction* buddy);
QAction* KToolBarLabelAction_Buddy(const KToolBarLabelAction* self);
QWidget* KToolBarLabelAction_CreateWidget(KToolBarLabelAction* self, QWidget* parent);
void KToolBarLabelAction_TextChanged(KToolBarLabelAction* self, const libqt_string newText);
void KToolBarLabelAction_Connect_TextChanged(KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_Event(KToolBarLabelAction* self, QEvent* param1);
bool KToolBarLabelAction_EventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
void KToolBarLabelAction_OnMetaObject(const KToolBarLabelAction* self, intptr_t slot);
QMetaObject* KToolBarLabelAction_SuperMetaObject(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnMetacast(KToolBarLabelAction* self, intptr_t slot);
void* KToolBarLabelAction_SuperMetacast(KToolBarLabelAction* self, const char* param1);
void KToolBarLabelAction_OnMetacall(KToolBarLabelAction* self, intptr_t slot);
int KToolBarLabelAction_SuperMetacall(KToolBarLabelAction* self, int param1, int param2, void** param3);
void KToolBarLabelAction_OnCreateWidget(KToolBarLabelAction* self, intptr_t slot);
QWidget* KToolBarLabelAction_SuperCreateWidget(KToolBarLabelAction* self, QWidget* parent);
void KToolBarLabelAction_OnEvent(KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_SuperEvent(KToolBarLabelAction* self, QEvent* param1);
void KToolBarLabelAction_OnEventFilter(KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_SuperEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
void KToolBarLabelAction_DeleteWidget(KToolBarLabelAction* self, QWidget* widget);
void KToolBarLabelAction_OnDeleteWidget(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_SuperDeleteWidget(KToolBarLabelAction* self, QWidget* widget);
void KToolBarLabelAction_TimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
void KToolBarLabelAction_OnTimerEvent(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_SuperTimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
void KToolBarLabelAction_ChildEvent(KToolBarLabelAction* self, QChildEvent* event);
void KToolBarLabelAction_OnChildEvent(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_SuperChildEvent(KToolBarLabelAction* self, QChildEvent* event);
void KToolBarLabelAction_CustomEvent(KToolBarLabelAction* self, QEvent* event);
void KToolBarLabelAction_OnCustomEvent(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_SuperCustomEvent(KToolBarLabelAction* self, QEvent* event);
void KToolBarLabelAction_ConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_OnConnectNotify(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_SuperConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_DisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_OnDisconnectNotify(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_SuperDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KToolBarLabelAction_CreatedWidgets(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnCreatedWidgets(const KToolBarLabelAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KToolBarLabelAction_SuperCreatedWidgets(const KToolBarLabelAction* self);
QObject* KToolBarLabelAction_Sender(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnSender(const KToolBarLabelAction* self, intptr_t slot);
QObject* KToolBarLabelAction_SuperSender(const KToolBarLabelAction* self);
int KToolBarLabelAction_SenderSignalIndex(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnSenderSignalIndex(const KToolBarLabelAction* self, intptr_t slot);
int KToolBarLabelAction_SuperSenderSignalIndex(const KToolBarLabelAction* self);
int KToolBarLabelAction_Receivers(const KToolBarLabelAction* self, const char* signal);
void KToolBarLabelAction_OnReceivers(const KToolBarLabelAction* self, intptr_t slot);
int KToolBarLabelAction_SuperReceivers(const KToolBarLabelAction* self, const char* signal);
bool KToolBarLabelAction_IsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_OnIsSignalConnected(const KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_SuperIsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_Delete(KToolBarLabelAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
