#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKACTIONMENU_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKACTIONMENU_H

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
typedef struct KBookmark KBookmark;
typedef struct KBookmarkActionInterface KBookmarkActionInterface;
typedef struct KBookmarkActionMenu KBookmarkActionMenu;
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

KBookmarkActionMenu* KBookmarkActionMenu_new(const KBookmark* bm, QObject* parent);
KBookmarkActionMenu* KBookmarkActionMenu_new2(const KBookmark* bm, const libqt_string text, QObject* parent);
QMetaObject* KBookmarkActionMenu_MetaObject(const KBookmarkActionMenu* self);
void* KBookmarkActionMenu_Metacast(KBookmarkActionMenu* self, const char* param1);
int KBookmarkActionMenu_Metacall(KBookmarkActionMenu* self, int param1, int param2, void** param3);
void KBookmarkActionMenu_OnMetaObject(const KBookmarkActionMenu* self, intptr_t slot);
QMetaObject* KBookmarkActionMenu_SuperMetaObject(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnMetacast(KBookmarkActionMenu* self, intptr_t slot);
void* KBookmarkActionMenu_SuperMetacast(KBookmarkActionMenu* self, const char* param1);
void KBookmarkActionMenu_OnMetacall(KBookmarkActionMenu* self, intptr_t slot);
int KBookmarkActionMenu_SuperMetacall(KBookmarkActionMenu* self, int param1, int param2, void** param3);
QWidget* KBookmarkActionMenu_CreateWidget(KBookmarkActionMenu* self, QWidget* parent);
void KBookmarkActionMenu_OnCreateWidget(KBookmarkActionMenu* self, intptr_t slot);
QWidget* KBookmarkActionMenu_SuperCreateWidget(KBookmarkActionMenu* self, QWidget* parent);
bool KBookmarkActionMenu_Event(KBookmarkActionMenu* self, QEvent* param1);
void KBookmarkActionMenu_OnEvent(KBookmarkActionMenu* self, intptr_t slot);
bool KBookmarkActionMenu_SuperEvent(KBookmarkActionMenu* self, QEvent* param1);
bool KBookmarkActionMenu_EventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
void KBookmarkActionMenu_OnEventFilter(KBookmarkActionMenu* self, intptr_t slot);
bool KBookmarkActionMenu_SuperEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
void KBookmarkActionMenu_DeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
void KBookmarkActionMenu_OnDeleteWidget(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_SuperDeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
void KBookmarkActionMenu_TimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
void KBookmarkActionMenu_OnTimerEvent(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_SuperTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
void KBookmarkActionMenu_ChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
void KBookmarkActionMenu_OnChildEvent(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_SuperChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
void KBookmarkActionMenu_CustomEvent(KBookmarkActionMenu* self, QEvent* event);
void KBookmarkActionMenu_OnCustomEvent(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_SuperCustomEvent(KBookmarkActionMenu* self, QEvent* event);
void KBookmarkActionMenu_ConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_OnConnectNotify(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_SuperConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_DisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_OnDisconnectNotify(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_SuperDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KBookmarkActionMenu_CreatedWidgets(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnCreatedWidgets(const KBookmarkActionMenu* self, intptr_t slot);
libqt_list /* of QWidget* */ KBookmarkActionMenu_SuperCreatedWidgets(const KBookmarkActionMenu* self);
QObject* KBookmarkActionMenu_Sender(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnSender(const KBookmarkActionMenu* self, intptr_t slot);
QObject* KBookmarkActionMenu_SuperSender(const KBookmarkActionMenu* self);
int KBookmarkActionMenu_SenderSignalIndex(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnSenderSignalIndex(const KBookmarkActionMenu* self, intptr_t slot);
int KBookmarkActionMenu_SuperSenderSignalIndex(const KBookmarkActionMenu* self);
int KBookmarkActionMenu_Receivers(const KBookmarkActionMenu* self, const char* signal);
void KBookmarkActionMenu_OnReceivers(const KBookmarkActionMenu* self, intptr_t slot);
int KBookmarkActionMenu_SuperReceivers(const KBookmarkActionMenu* self, const char* signal);
bool KBookmarkActionMenu_IsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_OnIsSignalConnected(const KBookmarkActionMenu* self, intptr_t slot);
bool KBookmarkActionMenu_SuperIsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_Delete(KBookmarkActionMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
