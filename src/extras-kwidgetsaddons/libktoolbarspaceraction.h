#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLBARSPACERACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOOLBARSPACERACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToolBarSpacerAction KToolBarSpacerAction;
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

KToolBarSpacerAction* KToolBarSpacerAction_new(QObject* parent);
QMetaObject* KToolBarSpacerAction_MetaObject(const KToolBarSpacerAction* self);
void* KToolBarSpacerAction_Metacast(KToolBarSpacerAction* self, const char* param1);
int KToolBarSpacerAction_Metacall(KToolBarSpacerAction* self, int param1, int param2, void** param3);
QWidget* KToolBarSpacerAction_CreateWidget(KToolBarSpacerAction* self, QWidget* parent);
void KToolBarSpacerAction_OnMetaObject(const KToolBarSpacerAction* self, intptr_t slot);
QMetaObject* KToolBarSpacerAction_SuperMetaObject(const KToolBarSpacerAction* self);
void KToolBarSpacerAction_OnMetacast(KToolBarSpacerAction* self, intptr_t slot);
void* KToolBarSpacerAction_SuperMetacast(KToolBarSpacerAction* self, const char* param1);
void KToolBarSpacerAction_OnMetacall(KToolBarSpacerAction* self, intptr_t slot);
int KToolBarSpacerAction_SuperMetacall(KToolBarSpacerAction* self, int param1, int param2, void** param3);
void KToolBarSpacerAction_OnCreateWidget(KToolBarSpacerAction* self, intptr_t slot);
QWidget* KToolBarSpacerAction_SuperCreateWidget(KToolBarSpacerAction* self, QWidget* parent);
bool KToolBarSpacerAction_Event(KToolBarSpacerAction* self, QEvent* param1);
void KToolBarSpacerAction_OnEvent(KToolBarSpacerAction* self, intptr_t slot);
bool KToolBarSpacerAction_SuperEvent(KToolBarSpacerAction* self, QEvent* param1);
bool KToolBarSpacerAction_EventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2);
void KToolBarSpacerAction_OnEventFilter(KToolBarSpacerAction* self, intptr_t slot);
bool KToolBarSpacerAction_SuperEventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2);
void KToolBarSpacerAction_DeleteWidget(KToolBarSpacerAction* self, QWidget* widget);
void KToolBarSpacerAction_OnDeleteWidget(KToolBarSpacerAction* self, intptr_t slot);
void KToolBarSpacerAction_SuperDeleteWidget(KToolBarSpacerAction* self, QWidget* widget);
void KToolBarSpacerAction_TimerEvent(KToolBarSpacerAction* self, QTimerEvent* event);
void KToolBarSpacerAction_OnTimerEvent(KToolBarSpacerAction* self, intptr_t slot);
void KToolBarSpacerAction_SuperTimerEvent(KToolBarSpacerAction* self, QTimerEvent* event);
void KToolBarSpacerAction_ChildEvent(KToolBarSpacerAction* self, QChildEvent* event);
void KToolBarSpacerAction_OnChildEvent(KToolBarSpacerAction* self, intptr_t slot);
void KToolBarSpacerAction_SuperChildEvent(KToolBarSpacerAction* self, QChildEvent* event);
void KToolBarSpacerAction_CustomEvent(KToolBarSpacerAction* self, QEvent* event);
void KToolBarSpacerAction_OnCustomEvent(KToolBarSpacerAction* self, intptr_t slot);
void KToolBarSpacerAction_SuperCustomEvent(KToolBarSpacerAction* self, QEvent* event);
void KToolBarSpacerAction_ConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
void KToolBarSpacerAction_OnConnectNotify(KToolBarSpacerAction* self, intptr_t slot);
void KToolBarSpacerAction_SuperConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
void KToolBarSpacerAction_DisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
void KToolBarSpacerAction_OnDisconnectNotify(KToolBarSpacerAction* self, intptr_t slot);
void KToolBarSpacerAction_SuperDisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KToolBarSpacerAction_CreatedWidgets(const KToolBarSpacerAction* self);
void KToolBarSpacerAction_OnCreatedWidgets(const KToolBarSpacerAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KToolBarSpacerAction_SuperCreatedWidgets(const KToolBarSpacerAction* self);
QObject* KToolBarSpacerAction_Sender(const KToolBarSpacerAction* self);
void KToolBarSpacerAction_OnSender(const KToolBarSpacerAction* self, intptr_t slot);
QObject* KToolBarSpacerAction_SuperSender(const KToolBarSpacerAction* self);
int KToolBarSpacerAction_SenderSignalIndex(const KToolBarSpacerAction* self);
void KToolBarSpacerAction_OnSenderSignalIndex(const KToolBarSpacerAction* self, intptr_t slot);
int KToolBarSpacerAction_SuperSenderSignalIndex(const KToolBarSpacerAction* self);
int KToolBarSpacerAction_Receivers(const KToolBarSpacerAction* self, const char* signal);
void KToolBarSpacerAction_OnReceivers(const KToolBarSpacerAction* self, intptr_t slot);
int KToolBarSpacerAction_SuperReceivers(const KToolBarSpacerAction* self, const char* signal);
bool KToolBarSpacerAction_IsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal);
void KToolBarSpacerAction_OnIsSignalConnected(const KToolBarSpacerAction* self, intptr_t slot);
bool KToolBarSpacerAction_SuperIsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal);
void KToolBarSpacerAction_Delete(KToolBarSpacerAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
