#pragma once
#ifndef SRCC_LIBQWIDGETACTION_H
#define SRCC_LIBQWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
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

QWidgetAction* QWidgetAction_new(QObject* parent);
QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self);
void* QWidgetAction_Metacast(QWidgetAction* self, const char* param1);
int QWidgetAction_Metacall(QWidgetAction* self, int param1, int param2, void** param3);
void QWidgetAction_OnMetacall(QWidgetAction* self, intptr_t slot);
int QWidgetAction_QBaseMetacall(QWidgetAction* self, int param1, int param2, void** param3);
libqt_string QWidgetAction_Tr(const char* s);
void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w);
QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self);
QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget);
bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1);
void QWidgetAction_OnEvent(QWidgetAction* self, intptr_t slot);
bool QWidgetAction_QBaseEvent(QWidgetAction* self, QEvent* param1);
bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
void QWidgetAction_OnEventFilter(QWidgetAction* self, intptr_t slot);
bool QWidgetAction_QBaseEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_OnCreateWidget(QWidgetAction* self, intptr_t slot);
QWidget* QWidgetAction_QBaseCreateWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget);
void QWidgetAction_OnDeleteWidget(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseDeleteWidget(QWidgetAction* self, QWidget* widget);
libqt_string QWidgetAction_Tr2(const char* s, const char* c);
libqt_string QWidgetAction_Tr3(const char* s, const char* c, int n);
void QWidgetAction_TimerEvent(QWidgetAction* self, QTimerEvent* event);
void QWidgetAction_OnTimerEvent(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseTimerEvent(QWidgetAction* self, QTimerEvent* event);
void QWidgetAction_ChildEvent(QWidgetAction* self, QChildEvent* event);
void QWidgetAction_OnChildEvent(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseChildEvent(QWidgetAction* self, QChildEvent* event);
void QWidgetAction_CustomEvent(QWidgetAction* self, QEvent* event);
void QWidgetAction_OnCustomEvent(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseCustomEvent(QWidgetAction* self, QEvent* event);
void QWidgetAction_ConnectNotify(QWidgetAction* self, const QMetaMethod* signal);
void QWidgetAction_OnConnectNotify(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseConnectNotify(QWidgetAction* self, const QMetaMethod* signal);
void QWidgetAction_DisconnectNotify(QWidgetAction* self, const QMetaMethod* signal);
void QWidgetAction_OnDisconnectNotify(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseDisconnectNotify(QWidgetAction* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ QWidgetAction_CreatedWidgets(const QWidgetAction* self);
void QWidgetAction_OnCreatedWidgets(const QWidgetAction* self, intptr_t slot);
libqt_list /* of QWidget* */ QWidgetAction_QBaseCreatedWidgets(const QWidgetAction* self);
QObject* QWidgetAction_Sender(const QWidgetAction* self);
void QWidgetAction_OnSender(const QWidgetAction* self, intptr_t slot);
QObject* QWidgetAction_QBaseSender(const QWidgetAction* self);
int QWidgetAction_SenderSignalIndex(const QWidgetAction* self);
void QWidgetAction_OnSenderSignalIndex(const QWidgetAction* self, intptr_t slot);
int QWidgetAction_QBaseSenderSignalIndex(const QWidgetAction* self);
int QWidgetAction_Receivers(const QWidgetAction* self, const char* signal);
void QWidgetAction_OnReceivers(const QWidgetAction* self, intptr_t slot);
int QWidgetAction_QBaseReceivers(const QWidgetAction* self, const char* signal);
bool QWidgetAction_IsSignalConnected(const QWidgetAction* self, const QMetaMethod* signal);
void QWidgetAction_OnIsSignalConnected(const QWidgetAction* self, intptr_t slot);
bool QWidgetAction_QBaseIsSignalConnected(const QWidgetAction* self, const QMetaMethod* signal);
void QWidgetAction_Delete(QWidgetAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
