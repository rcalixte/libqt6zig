#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKMENU_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBookmark KBookmark;
typedef struct KBookmarkManager KBookmarkManager;
typedef struct KBookmarkMenu KBookmarkMenu;
typedef struct KBookmarkOwner KBookmarkOwner;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KBookmarkMenu* KBookmarkMenu_new(KBookmarkManager* manager, KBookmarkOwner* owner, QMenu* parentMenu);
KBookmarkMenu* KBookmarkMenu_new2(KBookmarkManager* mgr, KBookmarkOwner* owner, QMenu* parentMenu, const libqt_string parentAddress);
QMetaObject* KBookmarkMenu_MetaObject(const KBookmarkMenu* self);
void* KBookmarkMenu_Metacast(KBookmarkMenu* self, const char* param1);
int KBookmarkMenu_Metacall(KBookmarkMenu* self, int param1, int param2, void** param3);
void KBookmarkMenu_EnsureUpToDate(KBookmarkMenu* self);
QAction* KBookmarkMenu_AddBookmarkAction(const KBookmarkMenu* self);
QAction* KBookmarkMenu_BookmarkTabsAsFolderAction(const KBookmarkMenu* self);
QAction* KBookmarkMenu_NewBookmarkFolderAction(const KBookmarkMenu* self);
QAction* KBookmarkMenu_EditBookmarksAction(const KBookmarkMenu* self);
void KBookmarkMenu_SetBrowserMode(KBookmarkMenu* self, bool browserMode);
bool KBookmarkMenu_BrowserMode(const KBookmarkMenu* self);
void KBookmarkMenu_SlotBookmarksChanged(KBookmarkMenu* self, const libqt_string param1);
void KBookmarkMenu_Clear(KBookmarkMenu* self);
void KBookmarkMenu_Refill(KBookmarkMenu* self);
QAction* KBookmarkMenu_ActionForBookmark(KBookmarkMenu* self, const KBookmark* bm);
QMenu* KBookmarkMenu_ContextMenu(KBookmarkMenu* self, QAction* action);
void KBookmarkMenu_OnMetaObject(const KBookmarkMenu* self, intptr_t slot);
QMetaObject* KBookmarkMenu_SuperMetaObject(const KBookmarkMenu* self);
void KBookmarkMenu_OnMetacast(KBookmarkMenu* self, intptr_t slot);
void* KBookmarkMenu_SuperMetacast(KBookmarkMenu* self, const char* param1);
void KBookmarkMenu_OnMetacall(KBookmarkMenu* self, intptr_t slot);
int KBookmarkMenu_SuperMetacall(KBookmarkMenu* self, int param1, int param2, void** param3);
void KBookmarkMenu_OnClear(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperClear(KBookmarkMenu* self);
void KBookmarkMenu_OnRefill(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperRefill(KBookmarkMenu* self);
void KBookmarkMenu_OnActionForBookmark(KBookmarkMenu* self, intptr_t slot);
QAction* KBookmarkMenu_SuperActionForBookmark(KBookmarkMenu* self, const KBookmark* bm);
void KBookmarkMenu_OnContextMenu(KBookmarkMenu* self, intptr_t slot);
QMenu* KBookmarkMenu_SuperContextMenu(KBookmarkMenu* self, QAction* action);
bool KBookmarkMenu_Event(KBookmarkMenu* self, QEvent* event);
void KBookmarkMenu_OnEvent(KBookmarkMenu* self, intptr_t slot);
bool KBookmarkMenu_SuperEvent(KBookmarkMenu* self, QEvent* event);
bool KBookmarkMenu_EventFilter(KBookmarkMenu* self, QObject* watched, QEvent* event);
void KBookmarkMenu_OnEventFilter(KBookmarkMenu* self, intptr_t slot);
bool KBookmarkMenu_SuperEventFilter(KBookmarkMenu* self, QObject* watched, QEvent* event);
void KBookmarkMenu_TimerEvent(KBookmarkMenu* self, QTimerEvent* event);
void KBookmarkMenu_OnTimerEvent(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperTimerEvent(KBookmarkMenu* self, QTimerEvent* event);
void KBookmarkMenu_ChildEvent(KBookmarkMenu* self, QChildEvent* event);
void KBookmarkMenu_OnChildEvent(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperChildEvent(KBookmarkMenu* self, QChildEvent* event);
void KBookmarkMenu_CustomEvent(KBookmarkMenu* self, QEvent* event);
void KBookmarkMenu_OnCustomEvent(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperCustomEvent(KBookmarkMenu* self, QEvent* event);
void KBookmarkMenu_ConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
void KBookmarkMenu_OnConnectNotify(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
void KBookmarkMenu_DisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
void KBookmarkMenu_OnDisconnectNotify(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperDisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
void KBookmarkMenu_SlotAboutToShow(KBookmarkMenu* self);
void KBookmarkMenu_OnSlotAboutToShow(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperSlotAboutToShow(KBookmarkMenu* self);
void KBookmarkMenu_SlotAddBookmarksList(KBookmarkMenu* self);
void KBookmarkMenu_OnSlotAddBookmarksList(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperSlotAddBookmarksList(KBookmarkMenu* self);
void KBookmarkMenu_SlotAddBookmark(KBookmarkMenu* self);
void KBookmarkMenu_OnSlotAddBookmark(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperSlotAddBookmark(KBookmarkMenu* self);
void KBookmarkMenu_SlotNewFolder(KBookmarkMenu* self);
void KBookmarkMenu_OnSlotNewFolder(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperSlotNewFolder(KBookmarkMenu* self);
void KBookmarkMenu_SlotOpenFolderInTabs(KBookmarkMenu* self);
void KBookmarkMenu_OnSlotOpenFolderInTabs(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperSlotOpenFolderInTabs(KBookmarkMenu* self);
void KBookmarkMenu_AddActions(KBookmarkMenu* self);
void KBookmarkMenu_OnAddActions(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperAddActions(KBookmarkMenu* self);
void KBookmarkMenu_FillBookmarks(KBookmarkMenu* self);
void KBookmarkMenu_OnFillBookmarks(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperFillBookmarks(KBookmarkMenu* self);
void KBookmarkMenu_AddAddBookmark(KBookmarkMenu* self);
void KBookmarkMenu_OnAddAddBookmark(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperAddAddBookmark(KBookmarkMenu* self);
void KBookmarkMenu_AddAddBookmarksList(KBookmarkMenu* self);
void KBookmarkMenu_OnAddAddBookmarksList(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperAddAddBookmarksList(KBookmarkMenu* self);
void KBookmarkMenu_AddEditBookmarks(KBookmarkMenu* self);
void KBookmarkMenu_OnAddEditBookmarks(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperAddEditBookmarks(KBookmarkMenu* self);
void KBookmarkMenu_AddNewFolder(KBookmarkMenu* self);
void KBookmarkMenu_OnAddNewFolder(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperAddNewFolder(KBookmarkMenu* self);
void KBookmarkMenu_AddOpenInTabs(KBookmarkMenu* self);
void KBookmarkMenu_OnAddOpenInTabs(KBookmarkMenu* self, intptr_t slot);
void KBookmarkMenu_SuperAddOpenInTabs(KBookmarkMenu* self);
bool KBookmarkMenu_IsRoot(const KBookmarkMenu* self);
void KBookmarkMenu_OnIsRoot(const KBookmarkMenu* self, intptr_t slot);
bool KBookmarkMenu_SuperIsRoot(const KBookmarkMenu* self);
bool KBookmarkMenu_IsDirty(const KBookmarkMenu* self);
void KBookmarkMenu_OnIsDirty(const KBookmarkMenu* self, intptr_t slot);
bool KBookmarkMenu_SuperIsDirty(const KBookmarkMenu* self);
libqt_string KBookmarkMenu_ParentAddress(const KBookmarkMenu* self);
void KBookmarkMenu_OnParentAddress(const KBookmarkMenu* self, intptr_t slot);
libqt_string KBookmarkMenu_SuperParentAddress(const KBookmarkMenu* self);
KBookmarkManager* KBookmarkMenu_Manager(const KBookmarkMenu* self);
void KBookmarkMenu_OnManager(const KBookmarkMenu* self, intptr_t slot);
KBookmarkManager* KBookmarkMenu_SuperManager(const KBookmarkMenu* self);
KBookmarkOwner* KBookmarkMenu_Owner(const KBookmarkMenu* self);
void KBookmarkMenu_OnOwner(const KBookmarkMenu* self, intptr_t slot);
KBookmarkOwner* KBookmarkMenu_SuperOwner(const KBookmarkMenu* self);
QMenu* KBookmarkMenu_ParentMenu(const KBookmarkMenu* self);
void KBookmarkMenu_OnParentMenu(const KBookmarkMenu* self, intptr_t slot);
QMenu* KBookmarkMenu_SuperParentMenu(const KBookmarkMenu* self);
QObject* KBookmarkMenu_Sender(const KBookmarkMenu* self);
void KBookmarkMenu_OnSender(const KBookmarkMenu* self, intptr_t slot);
QObject* KBookmarkMenu_SuperSender(const KBookmarkMenu* self);
int KBookmarkMenu_SenderSignalIndex(const KBookmarkMenu* self);
void KBookmarkMenu_OnSenderSignalIndex(const KBookmarkMenu* self, intptr_t slot);
int KBookmarkMenu_SuperSenderSignalIndex(const KBookmarkMenu* self);
int KBookmarkMenu_Receivers(const KBookmarkMenu* self, const char* signal);
void KBookmarkMenu_OnReceivers(const KBookmarkMenu* self, intptr_t slot);
int KBookmarkMenu_SuperReceivers(const KBookmarkMenu* self, const char* signal);
bool KBookmarkMenu_IsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal);
void KBookmarkMenu_OnIsSignalConnected(const KBookmarkMenu* self, intptr_t slot);
bool KBookmarkMenu_SuperIsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal);
void KBookmarkMenu_Delete(KBookmarkMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
