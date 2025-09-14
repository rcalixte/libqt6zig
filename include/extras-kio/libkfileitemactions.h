#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKFILEITEMACTIONS_H
#define SRC_EXTRAS_KIOC_LIBKFILEITEMACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileItemActions KFileItemActions;
typedef struct KFileItemList KFileItemList;
typedef struct KFileItemListProperties KFileItemListProperties;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KFileItemActions* KFileItemActions_new();
KFileItemActions* KFileItemActions_new2(QObject* parent);
QMetaObject* KFileItemActions_MetaObject(const KFileItemActions* self);
void* KFileItemActions_Metacast(KFileItemActions* self, const char* param1);
int KFileItemActions_Metacall(KFileItemActions* self, int param1, int param2, void** param3);
libqt_string KFileItemActions_Tr(const char* s);
void KFileItemActions_SetItemListProperties(KFileItemActions* self, const KFileItemListProperties* itemList);
void KFileItemActions_SetParentWidget(KFileItemActions* self, QWidget* widget);
void KFileItemActions_InsertOpenWithActionsTo(KFileItemActions* self, QAction* before, QMenu* topMenu, const libqt_list /* of libqt_string */ excludedDesktopEntryNames);
void KFileItemActions_AddActionsTo(KFileItemActions* self, QMenu* menu);
void KFileItemActions_OpenWithDialogAboutToBeShown(KFileItemActions* self);
void KFileItemActions_Connect_OpenWithDialogAboutToBeShown(KFileItemActions* self, intptr_t slot);
void KFileItemActions_Error(KFileItemActions* self, const libqt_string errorMessage);
void KFileItemActions_Connect_Error(KFileItemActions* self, intptr_t slot);
void KFileItemActions_RunPreferredApplications(KFileItemActions* self, const KFileItemList* fileOpenList);
libqt_string KFileItemActions_Tr2(const char* s, const char* c);
libqt_string KFileItemActions_Tr3(const char* s, const char* c, int n);
void KFileItemActions_AddActionsTo2(KFileItemActions* self, QMenu* menu, int sources);
void KFileItemActions_AddActionsTo3(KFileItemActions* self, QMenu* menu, int sources, const libqt_list /* of QAction* */ additionalActions);
void KFileItemActions_AddActionsTo4(KFileItemActions* self, QMenu* menu, int sources, const libqt_list /* of QAction* */ additionalActions, const libqt_list /* of libqt_string */ excludeList);
void KFileItemActions_OnMetacall(KFileItemActions* self, intptr_t slot);
int KFileItemActions_QBaseMetacall(KFileItemActions* self, int param1, int param2, void** param3);
bool KFileItemActions_Event(KFileItemActions* self, QEvent* event);
void KFileItemActions_OnEvent(KFileItemActions* self, intptr_t slot);
bool KFileItemActions_QBaseEvent(KFileItemActions* self, QEvent* event);
bool KFileItemActions_EventFilter(KFileItemActions* self, QObject* watched, QEvent* event);
void KFileItemActions_OnEventFilter(KFileItemActions* self, intptr_t slot);
bool KFileItemActions_QBaseEventFilter(KFileItemActions* self, QObject* watched, QEvent* event);
void KFileItemActions_TimerEvent(KFileItemActions* self, QTimerEvent* event);
void KFileItemActions_OnTimerEvent(KFileItemActions* self, intptr_t slot);
void KFileItemActions_QBaseTimerEvent(KFileItemActions* self, QTimerEvent* event);
void KFileItemActions_ChildEvent(KFileItemActions* self, QChildEvent* event);
void KFileItemActions_OnChildEvent(KFileItemActions* self, intptr_t slot);
void KFileItemActions_QBaseChildEvent(KFileItemActions* self, QChildEvent* event);
void KFileItemActions_CustomEvent(KFileItemActions* self, QEvent* event);
void KFileItemActions_OnCustomEvent(KFileItemActions* self, intptr_t slot);
void KFileItemActions_QBaseCustomEvent(KFileItemActions* self, QEvent* event);
void KFileItemActions_ConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
void KFileItemActions_OnConnectNotify(KFileItemActions* self, intptr_t slot);
void KFileItemActions_QBaseConnectNotify(KFileItemActions* self, const QMetaMethod* signal);
void KFileItemActions_DisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
void KFileItemActions_OnDisconnectNotify(KFileItemActions* self, intptr_t slot);
void KFileItemActions_QBaseDisconnectNotify(KFileItemActions* self, const QMetaMethod* signal);
QObject* KFileItemActions_Sender(const KFileItemActions* self);
void KFileItemActions_OnSender(const KFileItemActions* self, intptr_t slot);
QObject* KFileItemActions_QBaseSender(const KFileItemActions* self);
int KFileItemActions_SenderSignalIndex(const KFileItemActions* self);
void KFileItemActions_OnSenderSignalIndex(const KFileItemActions* self, intptr_t slot);
int KFileItemActions_QBaseSenderSignalIndex(const KFileItemActions* self);
int KFileItemActions_Receivers(const KFileItemActions* self, const char* signal);
void KFileItemActions_OnReceivers(const KFileItemActions* self, intptr_t slot);
int KFileItemActions_QBaseReceivers(const KFileItemActions* self, const char* signal);
bool KFileItemActions_IsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal);
void KFileItemActions_OnIsSignalConnected(const KFileItemActions* self, intptr_t slot);
bool KFileItemActions_QBaseIsSignalConnected(const KFileItemActions* self, const QMetaMethod* signal);
void KFileItemActions_Delete(KFileItemActions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
