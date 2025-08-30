#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKRECENTFILESACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKRECENTFILESACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KRecentFilesAction KRecentFilesAction;
typedef struct KSelectAction KSelectAction;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeType QMimeType;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KRecentFilesAction* KRecentFilesAction_new(QObject* parent);
KRecentFilesAction* KRecentFilesAction_new2(const libqt_string text, QObject* parent);
KRecentFilesAction* KRecentFilesAction_new3(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KRecentFilesAction_MetaObject(const KRecentFilesAction* self);
void* KRecentFilesAction_Metacast(KRecentFilesAction* self, const char* param1);
int KRecentFilesAction_Metacall(KRecentFilesAction* self, int param1, int param2, void** param3);
libqt_string KRecentFilesAction_Tr(const char* s);
void KRecentFilesAction_AddAction(KRecentFilesAction* self, QAction* action, const QUrl* url, const libqt_string name);
QAction* KRecentFilesAction_RemoveAction(KRecentFilesAction* self, QAction* action);
int KRecentFilesAction_MaxItems(const KRecentFilesAction* self);
void KRecentFilesAction_SetMaxItems(KRecentFilesAction* self, int maxItems);
void KRecentFilesAction_LoadEntries(KRecentFilesAction* self, const KConfigGroup* config);
void KRecentFilesAction_SaveEntries(KRecentFilesAction* self, const KConfigGroup* config);
void KRecentFilesAction_AddUrl(KRecentFilesAction* self, const QUrl* url);
void KRecentFilesAction_AddUrl2(KRecentFilesAction* self, const QUrl* url, const libqt_string name, const libqt_string mimeType);
void KRecentFilesAction_RemoveUrl(KRecentFilesAction* self, const QUrl* url);
libqt_list /* of QUrl* */ KRecentFilesAction_Urls(const KRecentFilesAction* self);
void KRecentFilesAction_Clear(KRecentFilesAction* self);
void KRecentFilesAction_UrlSelected(KRecentFilesAction* self, const QUrl* url);
void KRecentFilesAction_Connect_UrlSelected(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_RecentListCleared(KRecentFilesAction* self);
void KRecentFilesAction_Connect_RecentListCleared(KRecentFilesAction* self, intptr_t slot);
libqt_string KRecentFilesAction_Tr2(const char* s, const char* c);
libqt_string KRecentFilesAction_Tr3(const char* s, const char* c, int n);
void KRecentFilesAction_AddAction4(KRecentFilesAction* self, QAction* action, const QUrl* url, const libqt_string name, const QMimeType* mimeType);
void KRecentFilesAction_AddUrl22(KRecentFilesAction* self, const QUrl* url, const libqt_string name);
void KRecentFilesAction_OnMetacall(KRecentFilesAction* self, intptr_t slot);
int KRecentFilesAction_QBaseMetacall(KRecentFilesAction* self, int param1, int param2, void** param3);
void KRecentFilesAction_OnRemoveAction(KRecentFilesAction* self, intptr_t slot);
QAction* KRecentFilesAction_QBaseRemoveAction(KRecentFilesAction* self, QAction* action);
void KRecentFilesAction_OnClear(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseClear(KRecentFilesAction* self);
void KRecentFilesAction_InsertAction(KRecentFilesAction* self, QAction* before, QAction* action);
void KRecentFilesAction_OnInsertAction(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseInsertAction(KRecentFilesAction* self, QAction* before, QAction* action);
void KRecentFilesAction_SlotActionTriggered(KRecentFilesAction* self, QAction* action);
void KRecentFilesAction_OnSlotActionTriggered(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseSlotActionTriggered(KRecentFilesAction* self, QAction* action);
QWidget* KRecentFilesAction_CreateWidget(KRecentFilesAction* self, QWidget* parent);
void KRecentFilesAction_OnCreateWidget(KRecentFilesAction* self, intptr_t slot);
QWidget* KRecentFilesAction_QBaseCreateWidget(KRecentFilesAction* self, QWidget* parent);
void KRecentFilesAction_DeleteWidget(KRecentFilesAction* self, QWidget* widget);
void KRecentFilesAction_OnDeleteWidget(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseDeleteWidget(KRecentFilesAction* self, QWidget* widget);
bool KRecentFilesAction_Event(KRecentFilesAction* self, QEvent* event);
void KRecentFilesAction_OnEvent(KRecentFilesAction* self, intptr_t slot);
bool KRecentFilesAction_QBaseEvent(KRecentFilesAction* self, QEvent* event);
bool KRecentFilesAction_EventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event);
void KRecentFilesAction_OnEventFilter(KRecentFilesAction* self, intptr_t slot);
bool KRecentFilesAction_QBaseEventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event);
void KRecentFilesAction_TimerEvent(KRecentFilesAction* self, QTimerEvent* event);
void KRecentFilesAction_OnTimerEvent(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseTimerEvent(KRecentFilesAction* self, QTimerEvent* event);
void KRecentFilesAction_ChildEvent(KRecentFilesAction* self, QChildEvent* event);
void KRecentFilesAction_OnChildEvent(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseChildEvent(KRecentFilesAction* self, QChildEvent* event);
void KRecentFilesAction_CustomEvent(KRecentFilesAction* self, QEvent* event);
void KRecentFilesAction_OnCustomEvent(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseCustomEvent(KRecentFilesAction* self, QEvent* event);
void KRecentFilesAction_ConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
void KRecentFilesAction_OnConnectNotify(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
void KRecentFilesAction_DisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
void KRecentFilesAction_OnDisconnectNotify(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseDisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
void KRecentFilesAction_SlotToggled(KRecentFilesAction* self, bool param1);
void KRecentFilesAction_OnSlotToggled(KRecentFilesAction* self, intptr_t slot);
void KRecentFilesAction_QBaseSlotToggled(KRecentFilesAction* self, bool param1);
libqt_list /* of QWidget* */ KRecentFilesAction_CreatedWidgets(const KRecentFilesAction* self);
void KRecentFilesAction_OnCreatedWidgets(const KRecentFilesAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KRecentFilesAction_QBaseCreatedWidgets(const KRecentFilesAction* self);
QObject* KRecentFilesAction_Sender(const KRecentFilesAction* self);
void KRecentFilesAction_OnSender(const KRecentFilesAction* self, intptr_t slot);
QObject* KRecentFilesAction_QBaseSender(const KRecentFilesAction* self);
int KRecentFilesAction_SenderSignalIndex(const KRecentFilesAction* self);
void KRecentFilesAction_OnSenderSignalIndex(const KRecentFilesAction* self, intptr_t slot);
int KRecentFilesAction_QBaseSenderSignalIndex(const KRecentFilesAction* self);
int KRecentFilesAction_Receivers(const KRecentFilesAction* self, const char* signal);
void KRecentFilesAction_OnReceivers(const KRecentFilesAction* self, intptr_t slot);
int KRecentFilesAction_QBaseReceivers(const KRecentFilesAction* self, const char* signal);
bool KRecentFilesAction_IsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal);
void KRecentFilesAction_OnIsSignalConnected(const KRecentFilesAction* self, intptr_t slot);
bool KRecentFilesAction_QBaseIsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal);
void KRecentFilesAction_Delete(KRecentFilesAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
