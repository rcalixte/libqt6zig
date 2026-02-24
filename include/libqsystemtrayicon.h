#pragma once
#ifndef SRCC_LIBQSYSTEMTRAYICON_H
#define SRCC_LIBQSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSystemTrayIcon QSystemTrayIcon;
typedef struct QTimerEvent QTimerEvent;
#endif

QSystemTrayIcon* QSystemTrayIcon_new();
QSystemTrayIcon* QSystemTrayIcon_new2(const QIcon* icon);
QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent);
QSystemTrayIcon* QSystemTrayIcon_new4(const QIcon* icon, QObject* parent);
QMetaObject* QSystemTrayIcon_MetaObject(const QSystemTrayIcon* self);
void* QSystemTrayIcon_Metacast(QSystemTrayIcon* self, const char* param1);
int QSystemTrayIcon_Metacall(QSystemTrayIcon* self, int param1, int param2, void** param3);
void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu);
QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self);
QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, const QIcon* icon);
libqt_string QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, const libqt_string tip);
bool QSystemTrayIcon_IsSystemTrayAvailable();
bool QSystemTrayIcon_SupportsMessages();
QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self);
bool QSystemTrayIcon_IsVisible(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible);
void QSystemTrayIcon_Show(QSystemTrayIcon* self);
void QSystemTrayIcon_Hide(QSystemTrayIcon* self);
void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon);
void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg);
void QSystemTrayIcon_Activated(QSystemTrayIcon* self, int reason);
void QSystemTrayIcon_Connect_Activated(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self);
void QSystemTrayIcon_Connect_MessageClicked(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event);
void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon, int msecs);
void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon);
void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon, int msecs);
void QSystemTrayIcon_OnMetaObject(const QSystemTrayIcon* self, intptr_t slot);
QMetaObject* QSystemTrayIcon_SuperMetaObject(const QSystemTrayIcon* self);
void QSystemTrayIcon_OnMetacast(QSystemTrayIcon* self, intptr_t slot);
void* QSystemTrayIcon_SuperMetacast(QSystemTrayIcon* self, const char* param1);
void QSystemTrayIcon_OnMetacall(QSystemTrayIcon* self, intptr_t slot);
int QSystemTrayIcon_SuperMetacall(QSystemTrayIcon* self, int param1, int param2, void** param3);
void QSystemTrayIcon_OnEvent(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_SuperEvent(QSystemTrayIcon* self, QEvent* event);
bool QSystemTrayIcon_EventFilter(QSystemTrayIcon* self, QObject* watched, QEvent* event);
void QSystemTrayIcon_OnEventFilter(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_SuperEventFilter(QSystemTrayIcon* self, QObject* watched, QEvent* event);
void QSystemTrayIcon_TimerEvent(QSystemTrayIcon* self, QTimerEvent* event);
void QSystemTrayIcon_OnTimerEvent(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_SuperTimerEvent(QSystemTrayIcon* self, QTimerEvent* event);
void QSystemTrayIcon_ChildEvent(QSystemTrayIcon* self, QChildEvent* event);
void QSystemTrayIcon_OnChildEvent(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_SuperChildEvent(QSystemTrayIcon* self, QChildEvent* event);
void QSystemTrayIcon_CustomEvent(QSystemTrayIcon* self, QEvent* event);
void QSystemTrayIcon_OnCustomEvent(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_SuperCustomEvent(QSystemTrayIcon* self, QEvent* event);
void QSystemTrayIcon_ConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
void QSystemTrayIcon_OnConnectNotify(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_SuperConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
void QSystemTrayIcon_DisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
void QSystemTrayIcon_OnDisconnectNotify(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_SuperDisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
QObject* QSystemTrayIcon_Sender(const QSystemTrayIcon* self);
void QSystemTrayIcon_OnSender(const QSystemTrayIcon* self, intptr_t slot);
QObject* QSystemTrayIcon_SuperSender(const QSystemTrayIcon* self);
int QSystemTrayIcon_SenderSignalIndex(const QSystemTrayIcon* self);
void QSystemTrayIcon_OnSenderSignalIndex(const QSystemTrayIcon* self, intptr_t slot);
int QSystemTrayIcon_SuperSenderSignalIndex(const QSystemTrayIcon* self);
int QSystemTrayIcon_Receivers(const QSystemTrayIcon* self, const char* signal);
void QSystemTrayIcon_OnReceivers(const QSystemTrayIcon* self, intptr_t slot);
int QSystemTrayIcon_SuperReceivers(const QSystemTrayIcon* self, const char* signal);
bool QSystemTrayIcon_IsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal);
void QSystemTrayIcon_OnIsSignalConnected(const QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_SuperIsSignalConnected(const QSystemTrayIcon* self, const QMetaMethod* signal);
void QSystemTrayIcon_Delete(QSystemTrayIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
