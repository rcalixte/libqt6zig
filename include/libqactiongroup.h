#pragma once
#ifndef SRCC_LIBQACTIONGROUP_H
#define SRCC_LIBQACTIONGROUP_H

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
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QActionGroup* QActionGroup_new(QObject* parent);
QMetaObject* QActionGroup_MetaObject(const QActionGroup* self);
void* QActionGroup_Metacast(QActionGroup* self, const char* param1);
int QActionGroup_Metacall(QActionGroup* self, int param1, int param2, void** param3);
QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a);
QAction* QActionGroup_AddAction2(QActionGroup* self, const libqt_string text);
QAction* QActionGroup_AddAction3(QActionGroup* self, const QIcon* icon, const libqt_string text);
void QActionGroup_RemoveAction(QActionGroup* self, QAction* a);
libqt_list /* of QAction* */ QActionGroup_Actions(const QActionGroup* self);
QAction* QActionGroup_CheckedAction(const QActionGroup* self);
bool QActionGroup_IsExclusive(const QActionGroup* self);
bool QActionGroup_IsEnabled(const QActionGroup* self);
bool QActionGroup_IsVisible(const QActionGroup* self);
int QActionGroup_ExclusionPolicy(const QActionGroup* self);
void QActionGroup_SetEnabled(QActionGroup* self, bool enabled);
void QActionGroup_SetDisabled(QActionGroup* self, bool b);
void QActionGroup_SetVisible(QActionGroup* self, bool visible);
void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive);
void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy);
void QActionGroup_Triggered(QActionGroup* self, QAction* param1);
void QActionGroup_Connect_Triggered(QActionGroup* self, intptr_t slot);
void QActionGroup_Hovered(QActionGroup* self, QAction* param1);
void QActionGroup_Connect_Hovered(QActionGroup* self, intptr_t slot);
void QActionGroup_OnMetaObject(const QActionGroup* self, intptr_t slot);
QMetaObject* QActionGroup_SuperMetaObject(const QActionGroup* self);
void QActionGroup_OnMetacast(QActionGroup* self, intptr_t slot);
void* QActionGroup_SuperMetacast(QActionGroup* self, const char* param1);
void QActionGroup_OnMetacall(QActionGroup* self, intptr_t slot);
int QActionGroup_SuperMetacall(QActionGroup* self, int param1, int param2, void** param3);
bool QActionGroup_Event(QActionGroup* self, QEvent* event);
void QActionGroup_OnEvent(QActionGroup* self, intptr_t slot);
bool QActionGroup_SuperEvent(QActionGroup* self, QEvent* event);
bool QActionGroup_EventFilter(QActionGroup* self, QObject* watched, QEvent* event);
void QActionGroup_OnEventFilter(QActionGroup* self, intptr_t slot);
bool QActionGroup_SuperEventFilter(QActionGroup* self, QObject* watched, QEvent* event);
void QActionGroup_TimerEvent(QActionGroup* self, QTimerEvent* event);
void QActionGroup_OnTimerEvent(QActionGroup* self, intptr_t slot);
void QActionGroup_SuperTimerEvent(QActionGroup* self, QTimerEvent* event);
void QActionGroup_ChildEvent(QActionGroup* self, QChildEvent* event);
void QActionGroup_OnChildEvent(QActionGroup* self, intptr_t slot);
void QActionGroup_SuperChildEvent(QActionGroup* self, QChildEvent* event);
void QActionGroup_CustomEvent(QActionGroup* self, QEvent* event);
void QActionGroup_OnCustomEvent(QActionGroup* self, intptr_t slot);
void QActionGroup_SuperCustomEvent(QActionGroup* self, QEvent* event);
void QActionGroup_ConnectNotify(QActionGroup* self, const QMetaMethod* signal);
void QActionGroup_OnConnectNotify(QActionGroup* self, intptr_t slot);
void QActionGroup_SuperConnectNotify(QActionGroup* self, const QMetaMethod* signal);
void QActionGroup_DisconnectNotify(QActionGroup* self, const QMetaMethod* signal);
void QActionGroup_OnDisconnectNotify(QActionGroup* self, intptr_t slot);
void QActionGroup_SuperDisconnectNotify(QActionGroup* self, const QMetaMethod* signal);
QObject* QActionGroup_Sender(const QActionGroup* self);
void QActionGroup_OnSender(const QActionGroup* self, intptr_t slot);
QObject* QActionGroup_SuperSender(const QActionGroup* self);
int QActionGroup_SenderSignalIndex(const QActionGroup* self);
void QActionGroup_OnSenderSignalIndex(const QActionGroup* self, intptr_t slot);
int QActionGroup_SuperSenderSignalIndex(const QActionGroup* self);
int QActionGroup_Receivers(const QActionGroup* self, const char* signal);
void QActionGroup_OnReceivers(const QActionGroup* self, intptr_t slot);
int QActionGroup_SuperReceivers(const QActionGroup* self, const char* signal);
bool QActionGroup_IsSignalConnected(const QActionGroup* self, const QMetaMethod* signal);
void QActionGroup_OnIsSignalConnected(const QActionGroup* self, intptr_t slot);
bool QActionGroup_SuperIsSignalConnected(const QActionGroup* self, const QMetaMethod* signal);
void QActionGroup_Delete(QActionGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
