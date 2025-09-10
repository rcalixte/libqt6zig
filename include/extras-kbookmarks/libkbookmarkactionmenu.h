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
libqt_string KBookmarkActionMenu_Tr(const char* s);
libqt_string KBookmarkActionMenu_Tr2(const char* s, const char* c);
libqt_string KBookmarkActionMenu_Tr3(const char* s, const char* c, int n);
void KBookmarkActionMenu_OnMetacall(KBookmarkActionMenu* self, intptr_t slot);
int KBookmarkActionMenu_QBaseMetacall(KBookmarkActionMenu* self, int param1, int param2, void** param3);
QWidget* KBookmarkActionMenu_CreateWidget(KBookmarkActionMenu* self, QWidget* parent);
void KBookmarkActionMenu_OnCreateWidget(KBookmarkActionMenu* self, intptr_t slot);
QWidget* KBookmarkActionMenu_QBaseCreateWidget(KBookmarkActionMenu* self, QWidget* parent);
bool KBookmarkActionMenu_Event(KBookmarkActionMenu* self, QEvent* param1);
void KBookmarkActionMenu_OnEvent(KBookmarkActionMenu* self, intptr_t slot);
bool KBookmarkActionMenu_QBaseEvent(KBookmarkActionMenu* self, QEvent* param1);
bool KBookmarkActionMenu_EventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
void KBookmarkActionMenu_OnEventFilter(KBookmarkActionMenu* self, intptr_t slot);
bool KBookmarkActionMenu_QBaseEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
void KBookmarkActionMenu_DeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
void KBookmarkActionMenu_OnDeleteWidget(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_QBaseDeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
void KBookmarkActionMenu_TimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
void KBookmarkActionMenu_OnTimerEvent(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_QBaseTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
void KBookmarkActionMenu_ChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
void KBookmarkActionMenu_OnChildEvent(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_QBaseChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
void KBookmarkActionMenu_CustomEvent(KBookmarkActionMenu* self, QEvent* event);
void KBookmarkActionMenu_OnCustomEvent(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_QBaseCustomEvent(KBookmarkActionMenu* self, QEvent* event);
void KBookmarkActionMenu_ConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_OnConnectNotify(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_QBaseConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_DisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_OnDisconnectNotify(KBookmarkActionMenu* self, intptr_t slot);
void KBookmarkActionMenu_QBaseDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KBookmarkActionMenu_CreatedWidgets(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnCreatedWidgets(const KBookmarkActionMenu* self, intptr_t slot);
libqt_list /* of QWidget* */ KBookmarkActionMenu_QBaseCreatedWidgets(const KBookmarkActionMenu* self);
QObject* KBookmarkActionMenu_Sender(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnSender(const KBookmarkActionMenu* self, intptr_t slot);
QObject* KBookmarkActionMenu_QBaseSender(const KBookmarkActionMenu* self);
int KBookmarkActionMenu_SenderSignalIndex(const KBookmarkActionMenu* self);
void KBookmarkActionMenu_OnSenderSignalIndex(const KBookmarkActionMenu* self, intptr_t slot);
int KBookmarkActionMenu_QBaseSenderSignalIndex(const KBookmarkActionMenu* self);
int KBookmarkActionMenu_Receivers(const KBookmarkActionMenu* self, const char* signal);
void KBookmarkActionMenu_OnReceivers(const KBookmarkActionMenu* self, intptr_t slot);
int KBookmarkActionMenu_QBaseReceivers(const KBookmarkActionMenu* self, const char* signal);
bool KBookmarkActionMenu_IsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_OnIsSignalConnected(const KBookmarkActionMenu* self, intptr_t slot);
bool KBookmarkActionMenu_QBaseIsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
void KBookmarkActionMenu_Delete(KBookmarkActionMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
