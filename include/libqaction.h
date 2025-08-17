#pragma once
#ifndef SRCC_LIBQACTION_H
#define SRCC_LIBQACTION_H

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
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAction* QAction_new();
QAction* QAction_new2(const libqt_string text);
QAction* QAction_new3(const QIcon* icon, const libqt_string text);
QAction* QAction_new4(QObject* parent);
QAction* QAction_new5(const libqt_string text, QObject* parent);
QAction* QAction_new6(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* QAction_MetaObject(const QAction* self);
void* QAction_Metacast(QAction* self, const char* param1);
int QAction_Metacall(QAction* self, int param1, int param2, void** param3);
void QAction_OnMetacall(QAction* self, intptr_t slot);
int QAction_QBaseMetacall(QAction* self, int param1, int param2, void** param3);
libqt_string QAction_Tr(const char* s);
libqt_list /* of QObject* */ QAction_AssociatedObjects(const QAction* self);
void QAction_SetActionGroup(QAction* self, QActionGroup* group);
QActionGroup* QAction_ActionGroup(const QAction* self);
void QAction_SetIcon(QAction* self, const QIcon* icon);
QIcon* QAction_Icon(const QAction* self);
void QAction_SetText(QAction* self, const libqt_string text);
libqt_string QAction_Text(const QAction* self);
void QAction_SetIconText(QAction* self, const libqt_string text);
libqt_string QAction_IconText(const QAction* self);
void QAction_SetToolTip(QAction* self, const libqt_string tip);
libqt_string QAction_ToolTip(const QAction* self);
void QAction_SetStatusTip(QAction* self, const libqt_string statusTip);
libqt_string QAction_StatusTip(const QAction* self);
void QAction_SetWhatsThis(QAction* self, const libqt_string what);
libqt_string QAction_WhatsThis(const QAction* self);
void QAction_SetPriority(QAction* self, int priority);
int QAction_Priority(const QAction* self);
void QAction_SetSeparator(QAction* self, bool b);
bool QAction_IsSeparator(const QAction* self);
void QAction_SetShortcut(QAction* self, const QKeySequence* shortcut);
QKeySequence* QAction_Shortcut(const QAction* self);
void QAction_SetShortcuts(QAction* self, const libqt_list /* of QKeySequence* */ shortcuts);
void QAction_SetShortcuts2(QAction* self, int shortcuts);
libqt_list /* of QKeySequence* */ QAction_Shortcuts(const QAction* self);
void QAction_SetShortcutContext(QAction* self, int context);
int QAction_ShortcutContext(const QAction* self);
void QAction_SetAutoRepeat(QAction* self, bool autoRepeat);
bool QAction_AutoRepeat(const QAction* self);
void QAction_SetFont(QAction* self, const QFont* font);
QFont* QAction_Font(const QAction* self);
void QAction_SetCheckable(QAction* self, bool checkable);
bool QAction_IsCheckable(const QAction* self);
QVariant* QAction_Data(const QAction* self);
void QAction_SetData(QAction* self, const QVariant* varVal);
bool QAction_IsChecked(const QAction* self);
bool QAction_IsEnabled(const QAction* self);
bool QAction_IsVisible(const QAction* self);
void QAction_Activate(QAction* self, int event);
void QAction_SetMenuRole(QAction* self, int menuRole);
int QAction_MenuRole(const QAction* self);
void QAction_SetIconVisibleInMenu(QAction* self, bool visible);
bool QAction_IsIconVisibleInMenu(const QAction* self);
void QAction_SetShortcutVisibleInContextMenu(QAction* self, bool show);
bool QAction_IsShortcutVisibleInContextMenu(const QAction* self);
bool QAction_ShowStatusText(QAction* self);
bool QAction_Event(QAction* self, QEvent* param1);
void QAction_OnEvent(QAction* self, intptr_t slot);
bool QAction_QBaseEvent(QAction* self, QEvent* param1);
void QAction_Trigger(QAction* self);
void QAction_Hover(QAction* self);
void QAction_SetChecked(QAction* self, bool checked);
void QAction_Toggle(QAction* self);
void QAction_SetEnabled(QAction* self, bool enabled);
void QAction_ResetEnabled(QAction* self);
void QAction_SetDisabled(QAction* self, bool b);
void QAction_SetVisible(QAction* self, bool visible);
void QAction_Changed(QAction* self);
void QAction_Connect_Changed(QAction* self, intptr_t slot);
void QAction_EnabledChanged(QAction* self, bool enabled);
void QAction_Connect_EnabledChanged(QAction* self, intptr_t slot);
void QAction_CheckableChanged(QAction* self, bool checkable);
void QAction_Connect_CheckableChanged(QAction* self, intptr_t slot);
void QAction_VisibleChanged(QAction* self);
void QAction_Connect_VisibleChanged(QAction* self, intptr_t slot);
void QAction_Triggered(QAction* self);
void QAction_Connect_Triggered(QAction* self, intptr_t slot);
void QAction_Hovered(QAction* self);
void QAction_Connect_Hovered(QAction* self, intptr_t slot);
void QAction_Toggled(QAction* self, bool param1);
void QAction_Connect_Toggled(QAction* self, intptr_t slot);
libqt_string QAction_Tr2(const char* s, const char* c);
libqt_string QAction_Tr3(const char* s, const char* c, int n);
bool QAction_ShowStatusText1(QAction* self, QObject* object);
void QAction_Triggered1(QAction* self, bool checked);
void QAction_Connect_Triggered1(QAction* self, intptr_t slot);
bool QAction_EventFilter(QAction* self, QObject* watched, QEvent* event);
void QAction_OnEventFilter(QAction* self, intptr_t slot);
bool QAction_QBaseEventFilter(QAction* self, QObject* watched, QEvent* event);
void QAction_TimerEvent(QAction* self, QTimerEvent* event);
void QAction_OnTimerEvent(QAction* self, intptr_t slot);
void QAction_QBaseTimerEvent(QAction* self, QTimerEvent* event);
void QAction_ChildEvent(QAction* self, QChildEvent* event);
void QAction_OnChildEvent(QAction* self, intptr_t slot);
void QAction_QBaseChildEvent(QAction* self, QChildEvent* event);
void QAction_CustomEvent(QAction* self, QEvent* event);
void QAction_OnCustomEvent(QAction* self, intptr_t slot);
void QAction_QBaseCustomEvent(QAction* self, QEvent* event);
void QAction_ConnectNotify(QAction* self, const QMetaMethod* signal);
void QAction_OnConnectNotify(QAction* self, intptr_t slot);
void QAction_QBaseConnectNotify(QAction* self, const QMetaMethod* signal);
void QAction_DisconnectNotify(QAction* self, const QMetaMethod* signal);
void QAction_OnDisconnectNotify(QAction* self, intptr_t slot);
void QAction_QBaseDisconnectNotify(QAction* self, const QMetaMethod* signal);
QObject* QAction_Sender(const QAction* self);
void QAction_OnSender(const QAction* self, intptr_t slot);
QObject* QAction_QBaseSender(const QAction* self);
int QAction_SenderSignalIndex(const QAction* self);
void QAction_OnSenderSignalIndex(const QAction* self, intptr_t slot);
int QAction_QBaseSenderSignalIndex(const QAction* self);
int QAction_Receivers(const QAction* self, const char* signal);
void QAction_OnReceivers(const QAction* self, intptr_t slot);
int QAction_QBaseReceivers(const QAction* self, const char* signal);
bool QAction_IsSignalConnected(const QAction* self, const QMetaMethod* signal);
void QAction_OnIsSignalConnected(const QAction* self, intptr_t slot);
bool QAction_QBaseIsSignalConnected(const QAction* self, const QMetaMethod* signal);
void QAction_Delete(QAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
