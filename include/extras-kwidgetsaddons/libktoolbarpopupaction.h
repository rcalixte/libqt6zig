#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLBARPOPUPACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLBARPOPUPACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToolBarPopupAction KToolBarPopupAction;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KToolBarPopupAction* KToolBarPopupAction_new(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KToolBarPopupAction_MetaObject(const KToolBarPopupAction* self);
void* KToolBarPopupAction_Metacast(KToolBarPopupAction* self, const char* param1);
int KToolBarPopupAction_Metacall(KToolBarPopupAction* self, int param1, int param2, void** param3);
libqt_string KToolBarPopupAction_Tr(const char* s);
QMenu* KToolBarPopupAction_PopupMenu(const KToolBarPopupAction* self);
int KToolBarPopupAction_PopupMode(const KToolBarPopupAction* self);
void KToolBarPopupAction_SetPopupMode(KToolBarPopupAction* self, int popupMode);
QWidget* KToolBarPopupAction_CreateWidget(KToolBarPopupAction* self, QWidget* parent);
libqt_string KToolBarPopupAction_Tr2(const char* s, const char* c);
libqt_string KToolBarPopupAction_Tr3(const char* s, const char* c, int n);
void KToolBarPopupAction_OnMetacall(KToolBarPopupAction* self, intptr_t slot);
int KToolBarPopupAction_QBaseMetacall(KToolBarPopupAction* self, int param1, int param2, void** param3);
void KToolBarPopupAction_OnCreateWidget(KToolBarPopupAction* self, intptr_t slot);
QWidget* KToolBarPopupAction_QBaseCreateWidget(KToolBarPopupAction* self, QWidget* parent);
bool KToolBarPopupAction_Event(KToolBarPopupAction* self, QEvent* param1);
void KToolBarPopupAction_OnEvent(KToolBarPopupAction* self, intptr_t slot);
bool KToolBarPopupAction_QBaseEvent(KToolBarPopupAction* self, QEvent* param1);
bool KToolBarPopupAction_EventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2);
void KToolBarPopupAction_OnEventFilter(KToolBarPopupAction* self, intptr_t slot);
bool KToolBarPopupAction_QBaseEventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2);
void KToolBarPopupAction_DeleteWidget(KToolBarPopupAction* self, QWidget* widget);
void KToolBarPopupAction_OnDeleteWidget(KToolBarPopupAction* self, intptr_t slot);
void KToolBarPopupAction_QBaseDeleteWidget(KToolBarPopupAction* self, QWidget* widget);
void KToolBarPopupAction_TimerEvent(KToolBarPopupAction* self, QTimerEvent* event);
void KToolBarPopupAction_OnTimerEvent(KToolBarPopupAction* self, intptr_t slot);
void KToolBarPopupAction_QBaseTimerEvent(KToolBarPopupAction* self, QTimerEvent* event);
void KToolBarPopupAction_ChildEvent(KToolBarPopupAction* self, QChildEvent* event);
void KToolBarPopupAction_OnChildEvent(KToolBarPopupAction* self, intptr_t slot);
void KToolBarPopupAction_QBaseChildEvent(KToolBarPopupAction* self, QChildEvent* event);
void KToolBarPopupAction_CustomEvent(KToolBarPopupAction* self, QEvent* event);
void KToolBarPopupAction_OnCustomEvent(KToolBarPopupAction* self, intptr_t slot);
void KToolBarPopupAction_QBaseCustomEvent(KToolBarPopupAction* self, QEvent* event);
void KToolBarPopupAction_ConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
void KToolBarPopupAction_OnConnectNotify(KToolBarPopupAction* self, intptr_t slot);
void KToolBarPopupAction_QBaseConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
void KToolBarPopupAction_DisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
void KToolBarPopupAction_OnDisconnectNotify(KToolBarPopupAction* self, intptr_t slot);
void KToolBarPopupAction_QBaseDisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KToolBarPopupAction_CreatedWidgets(const KToolBarPopupAction* self);
void KToolBarPopupAction_OnCreatedWidgets(const KToolBarPopupAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KToolBarPopupAction_QBaseCreatedWidgets(const KToolBarPopupAction* self);
QObject* KToolBarPopupAction_Sender(const KToolBarPopupAction* self);
void KToolBarPopupAction_OnSender(const KToolBarPopupAction* self, intptr_t slot);
QObject* KToolBarPopupAction_QBaseSender(const KToolBarPopupAction* self);
int KToolBarPopupAction_SenderSignalIndex(const KToolBarPopupAction* self);
void KToolBarPopupAction_OnSenderSignalIndex(const KToolBarPopupAction* self, intptr_t slot);
int KToolBarPopupAction_QBaseSenderSignalIndex(const KToolBarPopupAction* self);
int KToolBarPopupAction_Receivers(const KToolBarPopupAction* self, const char* signal);
void KToolBarPopupAction_OnReceivers(const KToolBarPopupAction* self, intptr_t slot);
int KToolBarPopupAction_QBaseReceivers(const KToolBarPopupAction* self, const char* signal);
bool KToolBarPopupAction_IsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal);
void KToolBarPopupAction_OnIsSignalConnected(const KToolBarPopupAction* self, intptr_t slot);
bool KToolBarPopupAction_QBaseIsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal);
void KToolBarPopupAction_Delete(KToolBarPopupAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
