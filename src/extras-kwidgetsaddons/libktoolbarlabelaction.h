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
void KToolBarLabelAction_OnMetacall(KToolBarLabelAction* self, intptr_t slot);
int KToolBarLabelAction_QBaseMetacall(KToolBarLabelAction* self, int param1, int param2, void** param3);
libqt_string KToolBarLabelAction_Tr(const char* s);
void KToolBarLabelAction_SetBuddy(KToolBarLabelAction* self, QAction* buddy);
QAction* KToolBarLabelAction_Buddy(const KToolBarLabelAction* self);
QWidget* KToolBarLabelAction_CreateWidget(KToolBarLabelAction* self, QWidget* parent);
void KToolBarLabelAction_OnCreateWidget(KToolBarLabelAction* self, intptr_t slot);
QWidget* KToolBarLabelAction_QBaseCreateWidget(KToolBarLabelAction* self, QWidget* parent);
void KToolBarLabelAction_TextChanged(KToolBarLabelAction* self, const libqt_string newText);
void KToolBarLabelAction_Connect_TextChanged(KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_Event(KToolBarLabelAction* self, QEvent* param1);
void KToolBarLabelAction_OnEvent(KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_QBaseEvent(KToolBarLabelAction* self, QEvent* param1);
bool KToolBarLabelAction_EventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
void KToolBarLabelAction_OnEventFilter(KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_QBaseEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
libqt_string KToolBarLabelAction_Tr2(const char* s, const char* c);
libqt_string KToolBarLabelAction_Tr3(const char* s, const char* c, int n);
void KToolBarLabelAction_DeleteWidget(KToolBarLabelAction* self, QWidget* widget);
void KToolBarLabelAction_OnDeleteWidget(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_QBaseDeleteWidget(KToolBarLabelAction* self, QWidget* widget);
void KToolBarLabelAction_TimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
void KToolBarLabelAction_OnTimerEvent(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_QBaseTimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
void KToolBarLabelAction_ChildEvent(KToolBarLabelAction* self, QChildEvent* event);
void KToolBarLabelAction_OnChildEvent(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_QBaseChildEvent(KToolBarLabelAction* self, QChildEvent* event);
void KToolBarLabelAction_CustomEvent(KToolBarLabelAction* self, QEvent* event);
void KToolBarLabelAction_OnCustomEvent(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_QBaseCustomEvent(KToolBarLabelAction* self, QEvent* event);
void KToolBarLabelAction_ConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_OnConnectNotify(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_QBaseConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_DisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_OnDisconnectNotify(KToolBarLabelAction* self, intptr_t slot);
void KToolBarLabelAction_QBaseDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KToolBarLabelAction_CreatedWidgets(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnCreatedWidgets(const KToolBarLabelAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KToolBarLabelAction_QBaseCreatedWidgets(const KToolBarLabelAction* self);
QObject* KToolBarLabelAction_Sender(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnSender(const KToolBarLabelAction* self, intptr_t slot);
QObject* KToolBarLabelAction_QBaseSender(const KToolBarLabelAction* self);
int KToolBarLabelAction_SenderSignalIndex(const KToolBarLabelAction* self);
void KToolBarLabelAction_OnSenderSignalIndex(const KToolBarLabelAction* self, intptr_t slot);
int KToolBarLabelAction_QBaseSenderSignalIndex(const KToolBarLabelAction* self);
int KToolBarLabelAction_Receivers(const KToolBarLabelAction* self, const char* signal);
void KToolBarLabelAction_OnReceivers(const KToolBarLabelAction* self, intptr_t slot);
int KToolBarLabelAction_QBaseReceivers(const KToolBarLabelAction* self, const char* signal);
bool KToolBarLabelAction_IsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_OnIsSignalConnected(const KToolBarLabelAction* self, intptr_t slot);
bool KToolBarLabelAction_QBaseIsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
void KToolBarLabelAction_Delete(KToolBarLabelAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
