#pragma once
#ifndef SRC_EXTRAS_KSTATUSNOTIFIERITEMC_LIBKSTATUSNOTIFIERITEM_H
#define SRC_EXTRAS_KSTATUSNOTIFIERITEMC_LIBKSTATUSNOTIFIERITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStatusNotifierItem KStatusNotifierItem;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindow QWindow;
#endif

KStatusNotifierItem* KStatusNotifierItem_new();
KStatusNotifierItem* KStatusNotifierItem_new2(const libqt_string id);
KStatusNotifierItem* KStatusNotifierItem_new3(QObject* parent);
KStatusNotifierItem* KStatusNotifierItem_new4(const libqt_string id, QObject* parent);
QMetaObject* KStatusNotifierItem_MetaObject(const KStatusNotifierItem* self);
void* KStatusNotifierItem_Metacast(KStatusNotifierItem* self, const char* param1);
int KStatusNotifierItem_Metacall(KStatusNotifierItem* self, int param1, int param2, void** param3);
libqt_string KStatusNotifierItem_Id(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetCategory(KStatusNotifierItem* self, const int category);
int KStatusNotifierItem_Category(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetTitle(KStatusNotifierItem* self, const libqt_string title);
libqt_string KStatusNotifierItem_Title(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetStatus(KStatusNotifierItem* self, const int status);
int KStatusNotifierItem_Status(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetIconByName(KStatusNotifierItem* self, const libqt_string name);
libqt_string KStatusNotifierItem_IconName(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetIconByPixmap(KStatusNotifierItem* self, const QIcon* icon);
QIcon* KStatusNotifierItem_IconPixmap(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetOverlayIconByName(KStatusNotifierItem* self, const libqt_string name);
libqt_string KStatusNotifierItem_OverlayIconName(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetOverlayIconByPixmap(KStatusNotifierItem* self, const QIcon* icon);
QIcon* KStatusNotifierItem_OverlayIconPixmap(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetAttentionIconByName(KStatusNotifierItem* self, const libqt_string name);
libqt_string KStatusNotifierItem_AttentionIconName(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetAttentionIconByPixmap(KStatusNotifierItem* self, const QIcon* icon);
QIcon* KStatusNotifierItem_AttentionIconPixmap(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetAttentionMovieByName(KStatusNotifierItem* self, const libqt_string name);
libqt_string KStatusNotifierItem_AttentionMovieName(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetToolTip(KStatusNotifierItem* self, const libqt_string iconName, const libqt_string title, const libqt_string subTitle);
void KStatusNotifierItem_SetToolTip2(KStatusNotifierItem* self, const QIcon* icon, const libqt_string title, const libqt_string subTitle);
void KStatusNotifierItem_SetToolTipIconByName(KStatusNotifierItem* self, const libqt_string name);
libqt_string KStatusNotifierItem_ToolTipIconName(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetToolTipIconByPixmap(KStatusNotifierItem* self, const QIcon* icon);
QIcon* KStatusNotifierItem_ToolTipIconPixmap(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetToolTipTitle(KStatusNotifierItem* self, const libqt_string title);
libqt_string KStatusNotifierItem_ToolTipTitle(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetToolTipSubTitle(KStatusNotifierItem* self, const libqt_string subTitle);
libqt_string KStatusNotifierItem_ToolTipSubTitle(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetContextMenu(KStatusNotifierItem* self, QMenu* menu);
QMenu* KStatusNotifierItem_ContextMenu(const KStatusNotifierItem* self);
void KStatusNotifierItem_SetAssociatedWindow(KStatusNotifierItem* self, QWindow* window);
QWindow* KStatusNotifierItem_AssociatedWindow(const KStatusNotifierItem* self);
libqt_list /* of QAction* */ KStatusNotifierItem_ActionCollection(const KStatusNotifierItem* self);
void KStatusNotifierItem_AddAction(KStatusNotifierItem* self, const libqt_string name, QAction* action);
void KStatusNotifierItem_RemoveAction(KStatusNotifierItem* self, const libqt_string name);
QAction* KStatusNotifierItem_Action(const KStatusNotifierItem* self, const libqt_string name);
void KStatusNotifierItem_SetStandardActionsEnabled(KStatusNotifierItem* self, bool enabled);
bool KStatusNotifierItem_StandardActionsEnabled(const KStatusNotifierItem* self);
void KStatusNotifierItem_ShowMessage(KStatusNotifierItem* self, const libqt_string title, const libqt_string message, const libqt_string icon);
libqt_string KStatusNotifierItem_ProvidedToken(const KStatusNotifierItem* self);
void KStatusNotifierItem_AbortQuit(KStatusNotifierItem* self);
void KStatusNotifierItem_Activate(KStatusNotifierItem* self, const QPoint* pos);
void KStatusNotifierItem_HideAssociatedWindow(KStatusNotifierItem* self);
void KStatusNotifierItem_ScrollRequested(KStatusNotifierItem* self, int delta, int orientation);
void KStatusNotifierItem_Connect_ScrollRequested(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_ActivateRequested(KStatusNotifierItem* self, bool active, const QPoint* pos);
void KStatusNotifierItem_Connect_ActivateRequested(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SecondaryActivateRequested(KStatusNotifierItem* self, const QPoint* pos);
void KStatusNotifierItem_Connect_SecondaryActivateRequested(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_QuitRequested(KStatusNotifierItem* self);
void KStatusNotifierItem_Connect_QuitRequested(KStatusNotifierItem* self, intptr_t slot);
bool KStatusNotifierItem_EventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event);
void KStatusNotifierItem_ShowMessage4(KStatusNotifierItem* self, const libqt_string title, const libqt_string message, const libqt_string icon, int timeout);
void KStatusNotifierItem_OnMetaObject(const KStatusNotifierItem* self, intptr_t slot);
QMetaObject* KStatusNotifierItem_SuperMetaObject(const KStatusNotifierItem* self);
void KStatusNotifierItem_OnMetacast(KStatusNotifierItem* self, intptr_t slot);
void* KStatusNotifierItem_SuperMetacast(KStatusNotifierItem* self, const char* param1);
void KStatusNotifierItem_OnMetacall(KStatusNotifierItem* self, intptr_t slot);
int KStatusNotifierItem_SuperMetacall(KStatusNotifierItem* self, int param1, int param2, void** param3);
void KStatusNotifierItem_OnActivate(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SuperActivate(KStatusNotifierItem* self, const QPoint* pos);
void KStatusNotifierItem_OnEventFilter(KStatusNotifierItem* self, intptr_t slot);
bool KStatusNotifierItem_SuperEventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event);
bool KStatusNotifierItem_Event(KStatusNotifierItem* self, QEvent* event);
void KStatusNotifierItem_OnEvent(KStatusNotifierItem* self, intptr_t slot);
bool KStatusNotifierItem_SuperEvent(KStatusNotifierItem* self, QEvent* event);
void KStatusNotifierItem_TimerEvent(KStatusNotifierItem* self, QTimerEvent* event);
void KStatusNotifierItem_OnTimerEvent(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SuperTimerEvent(KStatusNotifierItem* self, QTimerEvent* event);
void KStatusNotifierItem_ChildEvent(KStatusNotifierItem* self, QChildEvent* event);
void KStatusNotifierItem_OnChildEvent(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SuperChildEvent(KStatusNotifierItem* self, QChildEvent* event);
void KStatusNotifierItem_CustomEvent(KStatusNotifierItem* self, QEvent* event);
void KStatusNotifierItem_OnCustomEvent(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SuperCustomEvent(KStatusNotifierItem* self, QEvent* event);
void KStatusNotifierItem_ConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
void KStatusNotifierItem_OnConnectNotify(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SuperConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
void KStatusNotifierItem_DisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
void KStatusNotifierItem_OnDisconnectNotify(KStatusNotifierItem* self, intptr_t slot);
void KStatusNotifierItem_SuperDisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
QObject* KStatusNotifierItem_Sender(const KStatusNotifierItem* self);
void KStatusNotifierItem_OnSender(const KStatusNotifierItem* self, intptr_t slot);
QObject* KStatusNotifierItem_SuperSender(const KStatusNotifierItem* self);
int KStatusNotifierItem_SenderSignalIndex(const KStatusNotifierItem* self);
void KStatusNotifierItem_OnSenderSignalIndex(const KStatusNotifierItem* self, intptr_t slot);
int KStatusNotifierItem_SuperSenderSignalIndex(const KStatusNotifierItem* self);
int KStatusNotifierItem_Receivers(const KStatusNotifierItem* self, const char* signal);
void KStatusNotifierItem_OnReceivers(const KStatusNotifierItem* self, intptr_t slot);
int KStatusNotifierItem_SuperReceivers(const KStatusNotifierItem* self, const char* signal);
bool KStatusNotifierItem_IsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal);
void KStatusNotifierItem_OnIsSignalConnected(const KStatusNotifierItem* self, intptr_t slot);
bool KStatusNotifierItem_SuperIsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal);
void KStatusNotifierItem_Delete(KStatusNotifierItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
