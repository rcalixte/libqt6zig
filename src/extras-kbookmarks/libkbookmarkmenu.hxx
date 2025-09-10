#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKMENU_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkMenu so that we can call protected methods
class VirtualKBookmarkMenu final : public KBookmarkMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkMenu = true;

    // Virtual class public types (including callbacks)
    using KBookmarkMenu_Metacall_Callback = int (*)(KBookmarkMenu*, int, int, void**);
    using KBookmarkMenu_Clear_Callback = void (*)();
    using KBookmarkMenu_Refill_Callback = void (*)();
    using KBookmarkMenu_ActionForBookmark_Callback = QAction* (*)(KBookmarkMenu*, KBookmark*);
    using KBookmarkMenu_ContextMenu_Callback = QMenu* (*)(KBookmarkMenu*, QAction*);
    using KBookmarkMenu_Event_Callback = bool (*)(KBookmarkMenu*, QEvent*);
    using KBookmarkMenu_EventFilter_Callback = bool (*)(KBookmarkMenu*, QObject*, QEvent*);
    using KBookmarkMenu_TimerEvent_Callback = void (*)(KBookmarkMenu*, QTimerEvent*);
    using KBookmarkMenu_ChildEvent_Callback = void (*)(KBookmarkMenu*, QChildEvent*);
    using KBookmarkMenu_CustomEvent_Callback = void (*)(KBookmarkMenu*, QEvent*);
    using KBookmarkMenu_ConnectNotify_Callback = void (*)(KBookmarkMenu*, QMetaMethod*);
    using KBookmarkMenu_DisconnectNotify_Callback = void (*)(KBookmarkMenu*, QMetaMethod*);
    using KBookmarkMenu_SlotAboutToShow_Callback = void (*)();
    using KBookmarkMenu_SlotAddBookmarksList_Callback = void (*)();
    using KBookmarkMenu_SlotAddBookmark_Callback = void (*)();
    using KBookmarkMenu_SlotNewFolder_Callback = void (*)();
    using KBookmarkMenu_SlotOpenFolderInTabs_Callback = void (*)();
    using KBookmarkMenu_AddActions_Callback = void (*)();
    using KBookmarkMenu_FillBookmarks_Callback = void (*)();
    using KBookmarkMenu_AddAddBookmark_Callback = void (*)();
    using KBookmarkMenu_AddAddBookmarksList_Callback = void (*)();
    using KBookmarkMenu_AddEditBookmarks_Callback = void (*)();
    using KBookmarkMenu_AddNewFolder_Callback = void (*)();
    using KBookmarkMenu_AddOpenInTabs_Callback = void (*)();
    using KBookmarkMenu_IsRoot_Callback = bool (*)();
    using KBookmarkMenu_IsDirty_Callback = bool (*)();
    using KBookmarkMenu_ParentAddress_Callback = const char* (*)();
    using KBookmarkMenu_Manager_Callback = KBookmarkManager* (*)();
    using KBookmarkMenu_Owner_Callback = KBookmarkOwner* (*)();
    using KBookmarkMenu_ParentMenu_Callback = QMenu* (*)();
    using KBookmarkMenu_Sender_Callback = QObject* (*)();
    using KBookmarkMenu_SenderSignalIndex_Callback = int (*)();
    using KBookmarkMenu_Receivers_Callback = int (*)(const KBookmarkMenu*, const char*);
    using KBookmarkMenu_IsSignalConnected_Callback = bool (*)(const KBookmarkMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KBookmarkMenu_Metacall_Callback kbookmarkmenu_metacall_callback = nullptr;
    KBookmarkMenu_Clear_Callback kbookmarkmenu_clear_callback = nullptr;
    KBookmarkMenu_Refill_Callback kbookmarkmenu_refill_callback = nullptr;
    KBookmarkMenu_ActionForBookmark_Callback kbookmarkmenu_actionforbookmark_callback = nullptr;
    KBookmarkMenu_ContextMenu_Callback kbookmarkmenu_contextmenu_callback = nullptr;
    KBookmarkMenu_Event_Callback kbookmarkmenu_event_callback = nullptr;
    KBookmarkMenu_EventFilter_Callback kbookmarkmenu_eventfilter_callback = nullptr;
    KBookmarkMenu_TimerEvent_Callback kbookmarkmenu_timerevent_callback = nullptr;
    KBookmarkMenu_ChildEvent_Callback kbookmarkmenu_childevent_callback = nullptr;
    KBookmarkMenu_CustomEvent_Callback kbookmarkmenu_customevent_callback = nullptr;
    KBookmarkMenu_ConnectNotify_Callback kbookmarkmenu_connectnotify_callback = nullptr;
    KBookmarkMenu_DisconnectNotify_Callback kbookmarkmenu_disconnectnotify_callback = nullptr;
    KBookmarkMenu_SlotAboutToShow_Callback kbookmarkmenu_slotabouttoshow_callback = nullptr;
    KBookmarkMenu_SlotAddBookmarksList_Callback kbookmarkmenu_slotaddbookmarkslist_callback = nullptr;
    KBookmarkMenu_SlotAddBookmark_Callback kbookmarkmenu_slotaddbookmark_callback = nullptr;
    KBookmarkMenu_SlotNewFolder_Callback kbookmarkmenu_slotnewfolder_callback = nullptr;
    KBookmarkMenu_SlotOpenFolderInTabs_Callback kbookmarkmenu_slotopenfolderintabs_callback = nullptr;
    KBookmarkMenu_AddActions_Callback kbookmarkmenu_addactions_callback = nullptr;
    KBookmarkMenu_FillBookmarks_Callback kbookmarkmenu_fillbookmarks_callback = nullptr;
    KBookmarkMenu_AddAddBookmark_Callback kbookmarkmenu_addaddbookmark_callback = nullptr;
    KBookmarkMenu_AddAddBookmarksList_Callback kbookmarkmenu_addaddbookmarkslist_callback = nullptr;
    KBookmarkMenu_AddEditBookmarks_Callback kbookmarkmenu_addeditbookmarks_callback = nullptr;
    KBookmarkMenu_AddNewFolder_Callback kbookmarkmenu_addnewfolder_callback = nullptr;
    KBookmarkMenu_AddOpenInTabs_Callback kbookmarkmenu_addopenintabs_callback = nullptr;
    KBookmarkMenu_IsRoot_Callback kbookmarkmenu_isroot_callback = nullptr;
    KBookmarkMenu_IsDirty_Callback kbookmarkmenu_isdirty_callback = nullptr;
    KBookmarkMenu_ParentAddress_Callback kbookmarkmenu_parentaddress_callback = nullptr;
    KBookmarkMenu_Manager_Callback kbookmarkmenu_manager_callback = nullptr;
    KBookmarkMenu_Owner_Callback kbookmarkmenu_owner_callback = nullptr;
    KBookmarkMenu_ParentMenu_Callback kbookmarkmenu_parentmenu_callback = nullptr;
    KBookmarkMenu_Sender_Callback kbookmarkmenu_sender_callback = nullptr;
    KBookmarkMenu_SenderSignalIndex_Callback kbookmarkmenu_sendersignalindex_callback = nullptr;
    KBookmarkMenu_Receivers_Callback kbookmarkmenu_receivers_callback = nullptr;
    KBookmarkMenu_IsSignalConnected_Callback kbookmarkmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkmenu_metacall_isbase = false;
    mutable bool kbookmarkmenu_clear_isbase = false;
    mutable bool kbookmarkmenu_refill_isbase = false;
    mutable bool kbookmarkmenu_actionforbookmark_isbase = false;
    mutable bool kbookmarkmenu_contextmenu_isbase = false;
    mutable bool kbookmarkmenu_event_isbase = false;
    mutable bool kbookmarkmenu_eventfilter_isbase = false;
    mutable bool kbookmarkmenu_timerevent_isbase = false;
    mutable bool kbookmarkmenu_childevent_isbase = false;
    mutable bool kbookmarkmenu_customevent_isbase = false;
    mutable bool kbookmarkmenu_connectnotify_isbase = false;
    mutable bool kbookmarkmenu_disconnectnotify_isbase = false;
    mutable bool kbookmarkmenu_slotabouttoshow_isbase = false;
    mutable bool kbookmarkmenu_slotaddbookmarkslist_isbase = false;
    mutable bool kbookmarkmenu_slotaddbookmark_isbase = false;
    mutable bool kbookmarkmenu_slotnewfolder_isbase = false;
    mutable bool kbookmarkmenu_slotopenfolderintabs_isbase = false;
    mutable bool kbookmarkmenu_addactions_isbase = false;
    mutable bool kbookmarkmenu_fillbookmarks_isbase = false;
    mutable bool kbookmarkmenu_addaddbookmark_isbase = false;
    mutable bool kbookmarkmenu_addaddbookmarkslist_isbase = false;
    mutable bool kbookmarkmenu_addeditbookmarks_isbase = false;
    mutable bool kbookmarkmenu_addnewfolder_isbase = false;
    mutable bool kbookmarkmenu_addopenintabs_isbase = false;
    mutable bool kbookmarkmenu_isroot_isbase = false;
    mutable bool kbookmarkmenu_isdirty_isbase = false;
    mutable bool kbookmarkmenu_parentaddress_isbase = false;
    mutable bool kbookmarkmenu_manager_isbase = false;
    mutable bool kbookmarkmenu_owner_isbase = false;
    mutable bool kbookmarkmenu_parentmenu_isbase = false;
    mutable bool kbookmarkmenu_sender_isbase = false;
    mutable bool kbookmarkmenu_sendersignalindex_isbase = false;
    mutable bool kbookmarkmenu_receivers_isbase = false;
    mutable bool kbookmarkmenu_issignalconnected_isbase = false;

  public:
    VirtualKBookmarkMenu(KBookmarkManager* manager, KBookmarkOwner* owner, QMenu* parentMenu) : KBookmarkMenu(manager, owner, parentMenu) {};
    VirtualKBookmarkMenu(KBookmarkManager* mgr, KBookmarkOwner* owner, QMenu* parentMenu, const QString& parentAddress) : KBookmarkMenu(mgr, owner, parentMenu, parentAddress) {};

    ~VirtualKBookmarkMenu() {
        kbookmarkmenu_metacall_callback = nullptr;
        kbookmarkmenu_clear_callback = nullptr;
        kbookmarkmenu_refill_callback = nullptr;
        kbookmarkmenu_actionforbookmark_callback = nullptr;
        kbookmarkmenu_contextmenu_callback = nullptr;
        kbookmarkmenu_event_callback = nullptr;
        kbookmarkmenu_eventfilter_callback = nullptr;
        kbookmarkmenu_timerevent_callback = nullptr;
        kbookmarkmenu_childevent_callback = nullptr;
        kbookmarkmenu_customevent_callback = nullptr;
        kbookmarkmenu_connectnotify_callback = nullptr;
        kbookmarkmenu_disconnectnotify_callback = nullptr;
        kbookmarkmenu_slotabouttoshow_callback = nullptr;
        kbookmarkmenu_slotaddbookmarkslist_callback = nullptr;
        kbookmarkmenu_slotaddbookmark_callback = nullptr;
        kbookmarkmenu_slotnewfolder_callback = nullptr;
        kbookmarkmenu_slotopenfolderintabs_callback = nullptr;
        kbookmarkmenu_addactions_callback = nullptr;
        kbookmarkmenu_fillbookmarks_callback = nullptr;
        kbookmarkmenu_addaddbookmark_callback = nullptr;
        kbookmarkmenu_addaddbookmarkslist_callback = nullptr;
        kbookmarkmenu_addeditbookmarks_callback = nullptr;
        kbookmarkmenu_addnewfolder_callback = nullptr;
        kbookmarkmenu_addopenintabs_callback = nullptr;
        kbookmarkmenu_isroot_callback = nullptr;
        kbookmarkmenu_isdirty_callback = nullptr;
        kbookmarkmenu_parentaddress_callback = nullptr;
        kbookmarkmenu_manager_callback = nullptr;
        kbookmarkmenu_owner_callback = nullptr;
        kbookmarkmenu_parentmenu_callback = nullptr;
        kbookmarkmenu_sender_callback = nullptr;
        kbookmarkmenu_sendersignalindex_callback = nullptr;
        kbookmarkmenu_receivers_callback = nullptr;
        kbookmarkmenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKBookmarkMenu_Metacall_Callback(KBookmarkMenu_Metacall_Callback cb) { kbookmarkmenu_metacall_callback = cb; }
    inline void setKBookmarkMenu_Clear_Callback(KBookmarkMenu_Clear_Callback cb) { kbookmarkmenu_clear_callback = cb; }
    inline void setKBookmarkMenu_Refill_Callback(KBookmarkMenu_Refill_Callback cb) { kbookmarkmenu_refill_callback = cb; }
    inline void setKBookmarkMenu_ActionForBookmark_Callback(KBookmarkMenu_ActionForBookmark_Callback cb) { kbookmarkmenu_actionforbookmark_callback = cb; }
    inline void setKBookmarkMenu_ContextMenu_Callback(KBookmarkMenu_ContextMenu_Callback cb) { kbookmarkmenu_contextmenu_callback = cb; }
    inline void setKBookmarkMenu_Event_Callback(KBookmarkMenu_Event_Callback cb) { kbookmarkmenu_event_callback = cb; }
    inline void setKBookmarkMenu_EventFilter_Callback(KBookmarkMenu_EventFilter_Callback cb) { kbookmarkmenu_eventfilter_callback = cb; }
    inline void setKBookmarkMenu_TimerEvent_Callback(KBookmarkMenu_TimerEvent_Callback cb) { kbookmarkmenu_timerevent_callback = cb; }
    inline void setKBookmarkMenu_ChildEvent_Callback(KBookmarkMenu_ChildEvent_Callback cb) { kbookmarkmenu_childevent_callback = cb; }
    inline void setKBookmarkMenu_CustomEvent_Callback(KBookmarkMenu_CustomEvent_Callback cb) { kbookmarkmenu_customevent_callback = cb; }
    inline void setKBookmarkMenu_ConnectNotify_Callback(KBookmarkMenu_ConnectNotify_Callback cb) { kbookmarkmenu_connectnotify_callback = cb; }
    inline void setKBookmarkMenu_DisconnectNotify_Callback(KBookmarkMenu_DisconnectNotify_Callback cb) { kbookmarkmenu_disconnectnotify_callback = cb; }
    inline void setKBookmarkMenu_SlotAboutToShow_Callback(KBookmarkMenu_SlotAboutToShow_Callback cb) { kbookmarkmenu_slotabouttoshow_callback = cb; }
    inline void setKBookmarkMenu_SlotAddBookmarksList_Callback(KBookmarkMenu_SlotAddBookmarksList_Callback cb) { kbookmarkmenu_slotaddbookmarkslist_callback = cb; }
    inline void setKBookmarkMenu_SlotAddBookmark_Callback(KBookmarkMenu_SlotAddBookmark_Callback cb) { kbookmarkmenu_slotaddbookmark_callback = cb; }
    inline void setKBookmarkMenu_SlotNewFolder_Callback(KBookmarkMenu_SlotNewFolder_Callback cb) { kbookmarkmenu_slotnewfolder_callback = cb; }
    inline void setKBookmarkMenu_SlotOpenFolderInTabs_Callback(KBookmarkMenu_SlotOpenFolderInTabs_Callback cb) { kbookmarkmenu_slotopenfolderintabs_callback = cb; }
    inline void setKBookmarkMenu_AddActions_Callback(KBookmarkMenu_AddActions_Callback cb) { kbookmarkmenu_addactions_callback = cb; }
    inline void setKBookmarkMenu_FillBookmarks_Callback(KBookmarkMenu_FillBookmarks_Callback cb) { kbookmarkmenu_fillbookmarks_callback = cb; }
    inline void setKBookmarkMenu_AddAddBookmark_Callback(KBookmarkMenu_AddAddBookmark_Callback cb) { kbookmarkmenu_addaddbookmark_callback = cb; }
    inline void setKBookmarkMenu_AddAddBookmarksList_Callback(KBookmarkMenu_AddAddBookmarksList_Callback cb) { kbookmarkmenu_addaddbookmarkslist_callback = cb; }
    inline void setKBookmarkMenu_AddEditBookmarks_Callback(KBookmarkMenu_AddEditBookmarks_Callback cb) { kbookmarkmenu_addeditbookmarks_callback = cb; }
    inline void setKBookmarkMenu_AddNewFolder_Callback(KBookmarkMenu_AddNewFolder_Callback cb) { kbookmarkmenu_addnewfolder_callback = cb; }
    inline void setKBookmarkMenu_AddOpenInTabs_Callback(KBookmarkMenu_AddOpenInTabs_Callback cb) { kbookmarkmenu_addopenintabs_callback = cb; }
    inline void setKBookmarkMenu_IsRoot_Callback(KBookmarkMenu_IsRoot_Callback cb) { kbookmarkmenu_isroot_callback = cb; }
    inline void setKBookmarkMenu_IsDirty_Callback(KBookmarkMenu_IsDirty_Callback cb) { kbookmarkmenu_isdirty_callback = cb; }
    inline void setKBookmarkMenu_ParentAddress_Callback(KBookmarkMenu_ParentAddress_Callback cb) { kbookmarkmenu_parentaddress_callback = cb; }
    inline void setKBookmarkMenu_Manager_Callback(KBookmarkMenu_Manager_Callback cb) { kbookmarkmenu_manager_callback = cb; }
    inline void setKBookmarkMenu_Owner_Callback(KBookmarkMenu_Owner_Callback cb) { kbookmarkmenu_owner_callback = cb; }
    inline void setKBookmarkMenu_ParentMenu_Callback(KBookmarkMenu_ParentMenu_Callback cb) { kbookmarkmenu_parentmenu_callback = cb; }
    inline void setKBookmarkMenu_Sender_Callback(KBookmarkMenu_Sender_Callback cb) { kbookmarkmenu_sender_callback = cb; }
    inline void setKBookmarkMenu_SenderSignalIndex_Callback(KBookmarkMenu_SenderSignalIndex_Callback cb) { kbookmarkmenu_sendersignalindex_callback = cb; }
    inline void setKBookmarkMenu_Receivers_Callback(KBookmarkMenu_Receivers_Callback cb) { kbookmarkmenu_receivers_callback = cb; }
    inline void setKBookmarkMenu_IsSignalConnected_Callback(KBookmarkMenu_IsSignalConnected_Callback cb) { kbookmarkmenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKBookmarkMenu_Metacall_IsBase(bool value) const { kbookmarkmenu_metacall_isbase = value; }
    inline void setKBookmarkMenu_Clear_IsBase(bool value) const { kbookmarkmenu_clear_isbase = value; }
    inline void setKBookmarkMenu_Refill_IsBase(bool value) const { kbookmarkmenu_refill_isbase = value; }
    inline void setKBookmarkMenu_ActionForBookmark_IsBase(bool value) const { kbookmarkmenu_actionforbookmark_isbase = value; }
    inline void setKBookmarkMenu_ContextMenu_IsBase(bool value) const { kbookmarkmenu_contextmenu_isbase = value; }
    inline void setKBookmarkMenu_Event_IsBase(bool value) const { kbookmarkmenu_event_isbase = value; }
    inline void setKBookmarkMenu_EventFilter_IsBase(bool value) const { kbookmarkmenu_eventfilter_isbase = value; }
    inline void setKBookmarkMenu_TimerEvent_IsBase(bool value) const { kbookmarkmenu_timerevent_isbase = value; }
    inline void setKBookmarkMenu_ChildEvent_IsBase(bool value) const { kbookmarkmenu_childevent_isbase = value; }
    inline void setKBookmarkMenu_CustomEvent_IsBase(bool value) const { kbookmarkmenu_customevent_isbase = value; }
    inline void setKBookmarkMenu_ConnectNotify_IsBase(bool value) const { kbookmarkmenu_connectnotify_isbase = value; }
    inline void setKBookmarkMenu_DisconnectNotify_IsBase(bool value) const { kbookmarkmenu_disconnectnotify_isbase = value; }
    inline void setKBookmarkMenu_SlotAboutToShow_IsBase(bool value) const { kbookmarkmenu_slotabouttoshow_isbase = value; }
    inline void setKBookmarkMenu_SlotAddBookmarksList_IsBase(bool value) const { kbookmarkmenu_slotaddbookmarkslist_isbase = value; }
    inline void setKBookmarkMenu_SlotAddBookmark_IsBase(bool value) const { kbookmarkmenu_slotaddbookmark_isbase = value; }
    inline void setKBookmarkMenu_SlotNewFolder_IsBase(bool value) const { kbookmarkmenu_slotnewfolder_isbase = value; }
    inline void setKBookmarkMenu_SlotOpenFolderInTabs_IsBase(bool value) const { kbookmarkmenu_slotopenfolderintabs_isbase = value; }
    inline void setKBookmarkMenu_AddActions_IsBase(bool value) const { kbookmarkmenu_addactions_isbase = value; }
    inline void setKBookmarkMenu_FillBookmarks_IsBase(bool value) const { kbookmarkmenu_fillbookmarks_isbase = value; }
    inline void setKBookmarkMenu_AddAddBookmark_IsBase(bool value) const { kbookmarkmenu_addaddbookmark_isbase = value; }
    inline void setKBookmarkMenu_AddAddBookmarksList_IsBase(bool value) const { kbookmarkmenu_addaddbookmarkslist_isbase = value; }
    inline void setKBookmarkMenu_AddEditBookmarks_IsBase(bool value) const { kbookmarkmenu_addeditbookmarks_isbase = value; }
    inline void setKBookmarkMenu_AddNewFolder_IsBase(bool value) const { kbookmarkmenu_addnewfolder_isbase = value; }
    inline void setKBookmarkMenu_AddOpenInTabs_IsBase(bool value) const { kbookmarkmenu_addopenintabs_isbase = value; }
    inline void setKBookmarkMenu_IsRoot_IsBase(bool value) const { kbookmarkmenu_isroot_isbase = value; }
    inline void setKBookmarkMenu_IsDirty_IsBase(bool value) const { kbookmarkmenu_isdirty_isbase = value; }
    inline void setKBookmarkMenu_ParentAddress_IsBase(bool value) const { kbookmarkmenu_parentaddress_isbase = value; }
    inline void setKBookmarkMenu_Manager_IsBase(bool value) const { kbookmarkmenu_manager_isbase = value; }
    inline void setKBookmarkMenu_Owner_IsBase(bool value) const { kbookmarkmenu_owner_isbase = value; }
    inline void setKBookmarkMenu_ParentMenu_IsBase(bool value) const { kbookmarkmenu_parentmenu_isbase = value; }
    inline void setKBookmarkMenu_Sender_IsBase(bool value) const { kbookmarkmenu_sender_isbase = value; }
    inline void setKBookmarkMenu_SenderSignalIndex_IsBase(bool value) const { kbookmarkmenu_sendersignalindex_isbase = value; }
    inline void setKBookmarkMenu_Receivers_IsBase(bool value) const { kbookmarkmenu_receivers_isbase = value; }
    inline void setKBookmarkMenu_IsSignalConnected_IsBase(bool value) const { kbookmarkmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkmenu_metacall_isbase) {
            kbookmarkmenu_metacall_isbase = false;
            return KBookmarkMenu::qt_metacall(param1, param2, param3);
        } else if (kbookmarkmenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbookmarkmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kbookmarkmenu_clear_isbase) {
            kbookmarkmenu_clear_isbase = false;
            KBookmarkMenu::clear();
        } else if (kbookmarkmenu_clear_callback != nullptr) {
            kbookmarkmenu_clear_callback();
        } else {
            KBookmarkMenu::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refill() override {
        if (kbookmarkmenu_refill_isbase) {
            kbookmarkmenu_refill_isbase = false;
            KBookmarkMenu::refill();
        } else if (kbookmarkmenu_refill_callback != nullptr) {
            kbookmarkmenu_refill_callback();
        } else {
            KBookmarkMenu::refill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* actionForBookmark(const KBookmark& bm) override {
        if (kbookmarkmenu_actionforbookmark_isbase) {
            kbookmarkmenu_actionforbookmark_isbase = false;
            return KBookmarkMenu::actionForBookmark(bm);
        } else if (kbookmarkmenu_actionforbookmark_callback != nullptr) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);

            QAction* callback_ret = kbookmarkmenu_actionforbookmark_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkMenu::actionForBookmark(bm);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* contextMenu(QAction* action) override {
        if (kbookmarkmenu_contextmenu_isbase) {
            kbookmarkmenu_contextmenu_isbase = false;
            return KBookmarkMenu::contextMenu(action);
        } else if (kbookmarkmenu_contextmenu_callback != nullptr) {
            QAction* cbval1 = action;

            QMenu* callback_ret = kbookmarkmenu_contextmenu_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkMenu::contextMenu(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbookmarkmenu_event_isbase) {
            kbookmarkmenu_event_isbase = false;
            return KBookmarkMenu::event(event);
        } else if (kbookmarkmenu_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kbookmarkmenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkMenu::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkmenu_eventfilter_isbase) {
            kbookmarkmenu_eventfilter_isbase = false;
            return KBookmarkMenu::eventFilter(watched, event);
        } else if (kbookmarkmenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kbookmarkmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBookmarkMenu::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkmenu_timerevent_isbase) {
            kbookmarkmenu_timerevent_isbase = false;
            KBookmarkMenu::timerEvent(event);
        } else if (kbookmarkmenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kbookmarkmenu_timerevent_callback(this, cbval1);
        } else {
            KBookmarkMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkmenu_childevent_isbase) {
            kbookmarkmenu_childevent_isbase = false;
            KBookmarkMenu::childEvent(event);
        } else if (kbookmarkmenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbookmarkmenu_childevent_callback(this, cbval1);
        } else {
            KBookmarkMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkmenu_customevent_isbase) {
            kbookmarkmenu_customevent_isbase = false;
            KBookmarkMenu::customEvent(event);
        } else if (kbookmarkmenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbookmarkmenu_customevent_callback(this, cbval1);
        } else {
            KBookmarkMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmenu_connectnotify_isbase) {
            kbookmarkmenu_connectnotify_isbase = false;
            KBookmarkMenu::connectNotify(signal);
        } else if (kbookmarkmenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkmenu_connectnotify_callback(this, cbval1);
        } else {
            KBookmarkMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmenu_disconnectnotify_isbase) {
            kbookmarkmenu_disconnectnotify_isbase = false;
            KBookmarkMenu::disconnectNotify(signal);
        } else if (kbookmarkmenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkmenu_disconnectnotify_callback(this, cbval1);
        } else {
            KBookmarkMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotAboutToShow() {
        if (kbookmarkmenu_slotabouttoshow_isbase) {
            kbookmarkmenu_slotabouttoshow_isbase = false;
            KBookmarkMenu::slotAboutToShow();
        } else if (kbookmarkmenu_slotabouttoshow_callback != nullptr) {
            kbookmarkmenu_slotabouttoshow_callback();
        } else {
            KBookmarkMenu::slotAboutToShow();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotAddBookmarksList() {
        if (kbookmarkmenu_slotaddbookmarkslist_isbase) {
            kbookmarkmenu_slotaddbookmarkslist_isbase = false;
            KBookmarkMenu::slotAddBookmarksList();
        } else if (kbookmarkmenu_slotaddbookmarkslist_callback != nullptr) {
            kbookmarkmenu_slotaddbookmarkslist_callback();
        } else {
            KBookmarkMenu::slotAddBookmarksList();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotAddBookmark() {
        if (kbookmarkmenu_slotaddbookmark_isbase) {
            kbookmarkmenu_slotaddbookmark_isbase = false;
            KBookmarkMenu::slotAddBookmark();
        } else if (kbookmarkmenu_slotaddbookmark_callback != nullptr) {
            kbookmarkmenu_slotaddbookmark_callback();
        } else {
            KBookmarkMenu::slotAddBookmark();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotNewFolder() {
        if (kbookmarkmenu_slotnewfolder_isbase) {
            kbookmarkmenu_slotnewfolder_isbase = false;
            KBookmarkMenu::slotNewFolder();
        } else if (kbookmarkmenu_slotnewfolder_callback != nullptr) {
            kbookmarkmenu_slotnewfolder_callback();
        } else {
            KBookmarkMenu::slotNewFolder();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotOpenFolderInTabs() {
        if (kbookmarkmenu_slotopenfolderintabs_isbase) {
            kbookmarkmenu_slotopenfolderintabs_isbase = false;
            KBookmarkMenu::slotOpenFolderInTabs();
        } else if (kbookmarkmenu_slotopenfolderintabs_callback != nullptr) {
            kbookmarkmenu_slotopenfolderintabs_callback();
        } else {
            KBookmarkMenu::slotOpenFolderInTabs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addActions() {
        if (kbookmarkmenu_addactions_isbase) {
            kbookmarkmenu_addactions_isbase = false;
            KBookmarkMenu::addActions();
        } else if (kbookmarkmenu_addactions_callback != nullptr) {
            kbookmarkmenu_addactions_callback();
        } else {
            KBookmarkMenu::addActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void fillBookmarks() {
        if (kbookmarkmenu_fillbookmarks_isbase) {
            kbookmarkmenu_fillbookmarks_isbase = false;
            KBookmarkMenu::fillBookmarks();
        } else if (kbookmarkmenu_fillbookmarks_callback != nullptr) {
            kbookmarkmenu_fillbookmarks_callback();
        } else {
            KBookmarkMenu::fillBookmarks();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addAddBookmark() {
        if (kbookmarkmenu_addaddbookmark_isbase) {
            kbookmarkmenu_addaddbookmark_isbase = false;
            KBookmarkMenu::addAddBookmark();
        } else if (kbookmarkmenu_addaddbookmark_callback != nullptr) {
            kbookmarkmenu_addaddbookmark_callback();
        } else {
            KBookmarkMenu::addAddBookmark();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addAddBookmarksList() {
        if (kbookmarkmenu_addaddbookmarkslist_isbase) {
            kbookmarkmenu_addaddbookmarkslist_isbase = false;
            KBookmarkMenu::addAddBookmarksList();
        } else if (kbookmarkmenu_addaddbookmarkslist_callback != nullptr) {
            kbookmarkmenu_addaddbookmarkslist_callback();
        } else {
            KBookmarkMenu::addAddBookmarksList();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addEditBookmarks() {
        if (kbookmarkmenu_addeditbookmarks_isbase) {
            kbookmarkmenu_addeditbookmarks_isbase = false;
            KBookmarkMenu::addEditBookmarks();
        } else if (kbookmarkmenu_addeditbookmarks_callback != nullptr) {
            kbookmarkmenu_addeditbookmarks_callback();
        } else {
            KBookmarkMenu::addEditBookmarks();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addNewFolder() {
        if (kbookmarkmenu_addnewfolder_isbase) {
            kbookmarkmenu_addnewfolder_isbase = false;
            KBookmarkMenu::addNewFolder();
        } else if (kbookmarkmenu_addnewfolder_callback != nullptr) {
            kbookmarkmenu_addnewfolder_callback();
        } else {
            KBookmarkMenu::addNewFolder();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addOpenInTabs() {
        if (kbookmarkmenu_addopenintabs_isbase) {
            kbookmarkmenu_addopenintabs_isbase = false;
            KBookmarkMenu::addOpenInTabs();
        } else if (kbookmarkmenu_addopenintabs_callback != nullptr) {
            kbookmarkmenu_addopenintabs_callback();
        } else {
            KBookmarkMenu::addOpenInTabs();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isRoot() const {
        if (kbookmarkmenu_isroot_isbase) {
            kbookmarkmenu_isroot_isbase = false;
            return KBookmarkMenu::isRoot();
        } else if (kbookmarkmenu_isroot_callback != nullptr) {
            bool callback_ret = kbookmarkmenu_isroot_callback();
            return callback_ret;
        } else {
            return KBookmarkMenu::isRoot();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isDirty() const {
        if (kbookmarkmenu_isdirty_isbase) {
            kbookmarkmenu_isdirty_isbase = false;
            return KBookmarkMenu::isDirty();
        } else if (kbookmarkmenu_isdirty_callback != nullptr) {
            bool callback_ret = kbookmarkmenu_isdirty_callback();
            return callback_ret;
        } else {
            return KBookmarkMenu::isDirty();
        }
    }

    // Virtual method for C ABI access and custom callback
    QString parentAddress() const {
        if (kbookmarkmenu_parentaddress_isbase) {
            kbookmarkmenu_parentaddress_isbase = false;
            return KBookmarkMenu::parentAddress();
        } else if (kbookmarkmenu_parentaddress_callback != nullptr) {
            const char* callback_ret = kbookmarkmenu_parentaddress_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KBookmarkMenu::parentAddress();
        }
    }

    // Virtual method for C ABI access and custom callback
    KBookmarkManager* manager() const {
        if (kbookmarkmenu_manager_isbase) {
            kbookmarkmenu_manager_isbase = false;
            return KBookmarkMenu::manager();
        } else if (kbookmarkmenu_manager_callback != nullptr) {
            KBookmarkManager* callback_ret = kbookmarkmenu_manager_callback();
            return callback_ret;
        } else {
            return KBookmarkMenu::manager();
        }
    }

    // Virtual method for C ABI access and custom callback
    KBookmarkOwner* owner() const {
        if (kbookmarkmenu_owner_isbase) {
            kbookmarkmenu_owner_isbase = false;
            return KBookmarkMenu::owner();
        } else if (kbookmarkmenu_owner_callback != nullptr) {
            KBookmarkOwner* callback_ret = kbookmarkmenu_owner_callback();
            return callback_ret;
        } else {
            return KBookmarkMenu::owner();
        }
    }

    // Virtual method for C ABI access and custom callback
    QMenu* parentMenu() const {
        if (kbookmarkmenu_parentmenu_isbase) {
            kbookmarkmenu_parentmenu_isbase = false;
            return KBookmarkMenu::parentMenu();
        } else if (kbookmarkmenu_parentmenu_callback != nullptr) {
            QMenu* callback_ret = kbookmarkmenu_parentmenu_callback();
            return callback_ret;
        } else {
            return KBookmarkMenu::parentMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkmenu_sender_isbase) {
            kbookmarkmenu_sender_isbase = false;
            return KBookmarkMenu::sender();
        } else if (kbookmarkmenu_sender_callback != nullptr) {
            QObject* callback_ret = kbookmarkmenu_sender_callback();
            return callback_ret;
        } else {
            return KBookmarkMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkmenu_sendersignalindex_isbase) {
            kbookmarkmenu_sendersignalindex_isbase = false;
            return KBookmarkMenu::senderSignalIndex();
        } else if (kbookmarkmenu_sendersignalindex_callback != nullptr) {
            int callback_ret = kbookmarkmenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkmenu_receivers_isbase) {
            kbookmarkmenu_receivers_isbase = false;
            return KBookmarkMenu::receivers(signal);
        } else if (kbookmarkmenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbookmarkmenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkmenu_issignalconnected_isbase) {
            kbookmarkmenu_issignalconnected_isbase = false;
            return KBookmarkMenu::isSignalConnected(signal);
        } else if (kbookmarkmenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbookmarkmenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KBookmarkMenu_Clear(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseClear(KBookmarkMenu* self);
    friend void KBookmarkMenu_Refill(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseRefill(KBookmarkMenu* self);
    friend QAction* KBookmarkMenu_ActionForBookmark(KBookmarkMenu* self, const KBookmark* bm);
    friend QAction* KBookmarkMenu_QBaseActionForBookmark(KBookmarkMenu* self, const KBookmark* bm);
    friend QMenu* KBookmarkMenu_ContextMenu(KBookmarkMenu* self, QAction* action);
    friend QMenu* KBookmarkMenu_QBaseContextMenu(KBookmarkMenu* self, QAction* action);
    friend void KBookmarkMenu_TimerEvent(KBookmarkMenu* self, QTimerEvent* event);
    friend void KBookmarkMenu_QBaseTimerEvent(KBookmarkMenu* self, QTimerEvent* event);
    friend void KBookmarkMenu_ChildEvent(KBookmarkMenu* self, QChildEvent* event);
    friend void KBookmarkMenu_QBaseChildEvent(KBookmarkMenu* self, QChildEvent* event);
    friend void KBookmarkMenu_CustomEvent(KBookmarkMenu* self, QEvent* event);
    friend void KBookmarkMenu_QBaseCustomEvent(KBookmarkMenu* self, QEvent* event);
    friend void KBookmarkMenu_ConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
    friend void KBookmarkMenu_QBaseConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
    friend void KBookmarkMenu_DisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
    friend void KBookmarkMenu_QBaseDisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
    friend void KBookmarkMenu_SlotAboutToShow(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseSlotAboutToShow(KBookmarkMenu* self);
    friend void KBookmarkMenu_SlotAddBookmarksList(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseSlotAddBookmarksList(KBookmarkMenu* self);
    friend void KBookmarkMenu_SlotAddBookmark(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseSlotAddBookmark(KBookmarkMenu* self);
    friend void KBookmarkMenu_SlotNewFolder(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseSlotNewFolder(KBookmarkMenu* self);
    friend void KBookmarkMenu_SlotOpenFolderInTabs(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseSlotOpenFolderInTabs(KBookmarkMenu* self);
    friend void KBookmarkMenu_AddActions(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseAddActions(KBookmarkMenu* self);
    friend void KBookmarkMenu_FillBookmarks(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseFillBookmarks(KBookmarkMenu* self);
    friend void KBookmarkMenu_AddAddBookmark(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseAddAddBookmark(KBookmarkMenu* self);
    friend void KBookmarkMenu_AddAddBookmarksList(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseAddAddBookmarksList(KBookmarkMenu* self);
    friend void KBookmarkMenu_AddEditBookmarks(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseAddEditBookmarks(KBookmarkMenu* self);
    friend void KBookmarkMenu_AddNewFolder(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseAddNewFolder(KBookmarkMenu* self);
    friend void KBookmarkMenu_AddOpenInTabs(KBookmarkMenu* self);
    friend void KBookmarkMenu_QBaseAddOpenInTabs(KBookmarkMenu* self);
    friend bool KBookmarkMenu_IsRoot(const KBookmarkMenu* self);
    friend bool KBookmarkMenu_QBaseIsRoot(const KBookmarkMenu* self);
    friend bool KBookmarkMenu_IsDirty(const KBookmarkMenu* self);
    friend bool KBookmarkMenu_QBaseIsDirty(const KBookmarkMenu* self);
    friend libqt_string KBookmarkMenu_ParentAddress(const KBookmarkMenu* self);
    friend libqt_string KBookmarkMenu_QBaseParentAddress(const KBookmarkMenu* self);
    friend KBookmarkManager* KBookmarkMenu_Manager(const KBookmarkMenu* self);
    friend KBookmarkManager* KBookmarkMenu_QBaseManager(const KBookmarkMenu* self);
    friend KBookmarkOwner* KBookmarkMenu_Owner(const KBookmarkMenu* self);
    friend KBookmarkOwner* KBookmarkMenu_QBaseOwner(const KBookmarkMenu* self);
    friend QMenu* KBookmarkMenu_ParentMenu(const KBookmarkMenu* self);
    friend QMenu* KBookmarkMenu_QBaseParentMenu(const KBookmarkMenu* self);
    friend QObject* KBookmarkMenu_Sender(const KBookmarkMenu* self);
    friend QObject* KBookmarkMenu_QBaseSender(const KBookmarkMenu* self);
    friend int KBookmarkMenu_SenderSignalIndex(const KBookmarkMenu* self);
    friend int KBookmarkMenu_QBaseSenderSignalIndex(const KBookmarkMenu* self);
    friend int KBookmarkMenu_Receivers(const KBookmarkMenu* self, const char* signal);
    friend int KBookmarkMenu_QBaseReceivers(const KBookmarkMenu* self, const char* signal);
    friend bool KBookmarkMenu_IsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal);
    friend bool KBookmarkMenu_QBaseIsSignalConnected(const KBookmarkMenu* self, const QMetaMethod* signal);
};

#endif
