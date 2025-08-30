#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKHAMBURGERMENU_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKHAMBURGERMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KHamburgerMenu KHamburgerMenu;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KHamburgerMenu* KHamburgerMenu_new(QObject* parent);
QMetaObject* KHamburgerMenu_MetaObject(const KHamburgerMenu* self);
void* KHamburgerMenu_Metacast(KHamburgerMenu* self, const char* param1);
int KHamburgerMenu_Metacall(KHamburgerMenu* self, int param1, int param2, void** param3);
libqt_string KHamburgerMenu_Tr(const char* s);
void KHamburgerMenu_SetMenuBar(KHamburgerMenu* self, QMenuBar* menuBar);
QMenuBar* KHamburgerMenu_MenuBar(const KHamburgerMenu* self);
void KHamburgerMenu_SetMenuBarAdvertised(KHamburgerMenu* self, bool advertise);
bool KHamburgerMenu_MenuBarAdvertised(const KHamburgerMenu* self);
void KHamburgerMenu_SetShowMenuBarAction(KHamburgerMenu* self, QAction* showMenuBarAction);
void KHamburgerMenu_AddToMenu(KHamburgerMenu* self, QMenu* menu);
void KHamburgerMenu_InsertIntoMenuBefore(KHamburgerMenu* self, QMenu* menu, QAction* before);
void KHamburgerMenu_HideActionsOf(KHamburgerMenu* self, QWidget* widget);
void KHamburgerMenu_ShowActionsOf(KHamburgerMenu* self, QWidget* widget);
void KHamburgerMenu_AboutToShowMenu(KHamburgerMenu* self);
void KHamburgerMenu_Connect_AboutToShowMenu(KHamburgerMenu* self, intptr_t slot);
QWidget* KHamburgerMenu_CreateWidget(KHamburgerMenu* self, QWidget* parent);
libqt_string KHamburgerMenu_Tr2(const char* s, const char* c);
libqt_string KHamburgerMenu_Tr3(const char* s, const char* c, int n);
void KHamburgerMenu_OnMetacall(KHamburgerMenu* self, intptr_t slot);
int KHamburgerMenu_QBaseMetacall(KHamburgerMenu* self, int param1, int param2, void** param3);
void KHamburgerMenu_OnCreateWidget(KHamburgerMenu* self, intptr_t slot);
QWidget* KHamburgerMenu_QBaseCreateWidget(KHamburgerMenu* self, QWidget* parent);
bool KHamburgerMenu_Event(KHamburgerMenu* self, QEvent* param1);
void KHamburgerMenu_OnEvent(KHamburgerMenu* self, intptr_t slot);
bool KHamburgerMenu_QBaseEvent(KHamburgerMenu* self, QEvent* param1);
bool KHamburgerMenu_EventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
void KHamburgerMenu_OnEventFilter(KHamburgerMenu* self, intptr_t slot);
bool KHamburgerMenu_QBaseEventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
void KHamburgerMenu_DeleteWidget(KHamburgerMenu* self, QWidget* widget);
void KHamburgerMenu_OnDeleteWidget(KHamburgerMenu* self, intptr_t slot);
void KHamburgerMenu_QBaseDeleteWidget(KHamburgerMenu* self, QWidget* widget);
void KHamburgerMenu_TimerEvent(KHamburgerMenu* self, QTimerEvent* event);
void KHamburgerMenu_OnTimerEvent(KHamburgerMenu* self, intptr_t slot);
void KHamburgerMenu_QBaseTimerEvent(KHamburgerMenu* self, QTimerEvent* event);
void KHamburgerMenu_ChildEvent(KHamburgerMenu* self, QChildEvent* event);
void KHamburgerMenu_OnChildEvent(KHamburgerMenu* self, intptr_t slot);
void KHamburgerMenu_QBaseChildEvent(KHamburgerMenu* self, QChildEvent* event);
void KHamburgerMenu_CustomEvent(KHamburgerMenu* self, QEvent* event);
void KHamburgerMenu_OnCustomEvent(KHamburgerMenu* self, intptr_t slot);
void KHamburgerMenu_QBaseCustomEvent(KHamburgerMenu* self, QEvent* event);
void KHamburgerMenu_ConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
void KHamburgerMenu_OnConnectNotify(KHamburgerMenu* self, intptr_t slot);
void KHamburgerMenu_QBaseConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
void KHamburgerMenu_DisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
void KHamburgerMenu_OnDisconnectNotify(KHamburgerMenu* self, intptr_t slot);
void KHamburgerMenu_QBaseDisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KHamburgerMenu_CreatedWidgets(const KHamburgerMenu* self);
void KHamburgerMenu_OnCreatedWidgets(const KHamburgerMenu* self, intptr_t slot);
libqt_list /* of QWidget* */ KHamburgerMenu_QBaseCreatedWidgets(const KHamburgerMenu* self);
QObject* KHamburgerMenu_Sender(const KHamburgerMenu* self);
void KHamburgerMenu_OnSender(const KHamburgerMenu* self, intptr_t slot);
QObject* KHamburgerMenu_QBaseSender(const KHamburgerMenu* self);
int KHamburgerMenu_SenderSignalIndex(const KHamburgerMenu* self);
void KHamburgerMenu_OnSenderSignalIndex(const KHamburgerMenu* self, intptr_t slot);
int KHamburgerMenu_QBaseSenderSignalIndex(const KHamburgerMenu* self);
int KHamburgerMenu_Receivers(const KHamburgerMenu* self, const char* signal);
void KHamburgerMenu_OnReceivers(const KHamburgerMenu* self, intptr_t slot);
int KHamburgerMenu_QBaseReceivers(const KHamburgerMenu* self, const char* signal);
bool KHamburgerMenu_IsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal);
void KHamburgerMenu_OnIsSignalConnected(const KHamburgerMenu* self, intptr_t slot);
bool KHamburgerMenu_QBaseIsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal);
void KHamburgerMenu_Delete(KHamburgerMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
