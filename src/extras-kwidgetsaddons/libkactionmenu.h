#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKACTIONMENU_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionMenu KActionMenu;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KActionMenu* KActionMenu_new(QObject* parent);
KActionMenu* KActionMenu_new2(const libqt_string text, QObject* parent);
KActionMenu* KActionMenu_new3(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KActionMenu_MetaObject(const KActionMenu* self);
void* KActionMenu_Metacast(KActionMenu* self, const char* param1);
int KActionMenu_Metacall(KActionMenu* self, int param1, int param2, void** param3);
libqt_string KActionMenu_Tr(const char* s);
void KActionMenu_AddAction(KActionMenu* self, QAction* action);
QAction* KActionMenu_AddSeparator(KActionMenu* self);
void KActionMenu_InsertAction(KActionMenu* self, QAction* before, QAction* action);
QAction* KActionMenu_InsertSeparator(KActionMenu* self, QAction* before);
void KActionMenu_RemoveAction(KActionMenu* self, QAction* action);
int KActionMenu_PopupMode(const KActionMenu* self);
void KActionMenu_SetPopupMode(KActionMenu* self, int popupMode);
QWidget* KActionMenu_CreateWidget(KActionMenu* self, QWidget* parent);
libqt_string KActionMenu_Tr2(const char* s, const char* c);
libqt_string KActionMenu_Tr3(const char* s, const char* c, int n);
void KActionMenu_OnMetacall(KActionMenu* self, intptr_t slot);
int KActionMenu_QBaseMetacall(KActionMenu* self, int param1, int param2, void** param3);
void KActionMenu_OnCreateWidget(KActionMenu* self, intptr_t slot);
QWidget* KActionMenu_QBaseCreateWidget(KActionMenu* self, QWidget* parent);
bool KActionMenu_Event(KActionMenu* self, QEvent* param1);
void KActionMenu_OnEvent(KActionMenu* self, intptr_t slot);
bool KActionMenu_QBaseEvent(KActionMenu* self, QEvent* param1);
bool KActionMenu_EventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
void KActionMenu_OnEventFilter(KActionMenu* self, intptr_t slot);
bool KActionMenu_QBaseEventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
void KActionMenu_DeleteWidget(KActionMenu* self, QWidget* widget);
void KActionMenu_OnDeleteWidget(KActionMenu* self, intptr_t slot);
void KActionMenu_QBaseDeleteWidget(KActionMenu* self, QWidget* widget);
void KActionMenu_TimerEvent(KActionMenu* self, QTimerEvent* event);
void KActionMenu_OnTimerEvent(KActionMenu* self, intptr_t slot);
void KActionMenu_QBaseTimerEvent(KActionMenu* self, QTimerEvent* event);
void KActionMenu_ChildEvent(KActionMenu* self, QChildEvent* event);
void KActionMenu_OnChildEvent(KActionMenu* self, intptr_t slot);
void KActionMenu_QBaseChildEvent(KActionMenu* self, QChildEvent* event);
void KActionMenu_CustomEvent(KActionMenu* self, QEvent* event);
void KActionMenu_OnCustomEvent(KActionMenu* self, intptr_t slot);
void KActionMenu_QBaseCustomEvent(KActionMenu* self, QEvent* event);
void KActionMenu_ConnectNotify(KActionMenu* self, const QMetaMethod* signal);
void KActionMenu_OnConnectNotify(KActionMenu* self, intptr_t slot);
void KActionMenu_QBaseConnectNotify(KActionMenu* self, const QMetaMethod* signal);
void KActionMenu_DisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
void KActionMenu_OnDisconnectNotify(KActionMenu* self, intptr_t slot);
void KActionMenu_QBaseDisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KActionMenu_CreatedWidgets(const KActionMenu* self);
void KActionMenu_OnCreatedWidgets(const KActionMenu* self, intptr_t slot);
libqt_list /* of QWidget* */ KActionMenu_QBaseCreatedWidgets(const KActionMenu* self);
QObject* KActionMenu_Sender(const KActionMenu* self);
void KActionMenu_OnSender(const KActionMenu* self, intptr_t slot);
QObject* KActionMenu_QBaseSender(const KActionMenu* self);
int KActionMenu_SenderSignalIndex(const KActionMenu* self);
void KActionMenu_OnSenderSignalIndex(const KActionMenu* self, intptr_t slot);
int KActionMenu_QBaseSenderSignalIndex(const KActionMenu* self);
int KActionMenu_Receivers(const KActionMenu* self, const char* signal);
void KActionMenu_OnReceivers(const KActionMenu* self, intptr_t slot);
int KActionMenu_QBaseReceivers(const KActionMenu* self, const char* signal);
bool KActionMenu_IsSignalConnected(const KActionMenu* self, const QMetaMethod* signal);
void KActionMenu_OnIsSignalConnected(const KActionMenu* self, intptr_t slot);
bool KActionMenu_QBaseIsSignalConnected(const KActionMenu* self, const QMetaMethod* signal);
void KActionMenu_Delete(KActionMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
