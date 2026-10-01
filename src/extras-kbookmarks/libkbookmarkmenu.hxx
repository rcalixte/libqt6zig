#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKMENU_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkMenu
class VirtualKBookmarkMenu final : public KBookmarkMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkMenu_MetaObject_Callback = QMetaObject* (*)(const KBookmarkMenu*);
    using KBookmarkMenu_Metacast_Callback = void* (*)(KBookmarkMenu*, const char*);
    using KBookmarkMenu_Metacall_Callback = int (*)(KBookmarkMenu*, int, int, void**);
    using KBookmarkMenu_Clear_Callback = void (*)(KBookmarkMenu*);
    using KBookmarkMenu_Refill_Callback = void (*)(KBookmarkMenu*);
    using KBookmarkMenu_ActionForBookmark_Callback = QAction* (*)(KBookmarkMenu*, KBookmark*);
    using KBookmarkMenu_ContextMenu_Callback = QMenu* (*)(KBookmarkMenu*, QAction*);
    using KBookmarkMenu_Event_Callback = bool (*)(KBookmarkMenu*, QEvent*);
    using KBookmarkMenu_EventFilter_Callback = bool (*)(KBookmarkMenu*, QObject*, QEvent*);
    using KBookmarkMenu_TimerEvent_Callback = void (*)(KBookmarkMenu*, QTimerEvent*);
    using KBookmarkMenu_ChildEvent_Callback = void (*)(KBookmarkMenu*, QChildEvent*);
    using KBookmarkMenu_CustomEvent_Callback = void (*)(KBookmarkMenu*, QEvent*);
    using KBookmarkMenu_ConnectNotify_Callback = void (*)(KBookmarkMenu*, QMetaMethod*);
    using KBookmarkMenu_DisconnectNotify_Callback = void (*)(KBookmarkMenu*, QMetaMethod*);
    using KBookmarkMenu::addActions;
    using KBookmarkMenu::addAddBookmark;
    using KBookmarkMenu::addAddBookmarksList;
    using KBookmarkMenu::addEditBookmarks;
    using KBookmarkMenu::addNewFolder;
    using KBookmarkMenu::addOpenInTabs;
    using KBookmarkMenu::fillBookmarks;
    using KBookmarkMenu::isDirty;
    using KBookmarkMenu::isRoot;
    using KBookmarkMenu::isSignalConnected;
    using KBookmarkMenu::manager;
    using KBookmarkMenu::owner;
    using KBookmarkMenu::parentAddress;
    using KBookmarkMenu::parentMenu;
    using KBookmarkMenu::receivers;
    using KBookmarkMenu::sender;
    using KBookmarkMenu::senderSignalIndex;
    using KBookmarkMenu::slotAboutToShow;
    using KBookmarkMenu::slotAddBookmark;
    using KBookmarkMenu::slotAddBookmarksList;
    using KBookmarkMenu::slotNewFolder;
    using KBookmarkMenu::slotOpenFolderInTabs;

    // Instance callback storage
    KBookmarkMenu_MetaObject_Callback kbookmarkmenu_metaobject_callback = nullptr;
    KBookmarkMenu_Metacast_Callback kbookmarkmenu_metacast_callback = nullptr;
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

    // Access struct
    struct Base : KBookmarkMenu {
        using KBookmarkMenu::actionForBookmark;
        using KBookmarkMenu::childEvent;
        using KBookmarkMenu::clear;
        using KBookmarkMenu::connectNotify;
        using KBookmarkMenu::contextMenu;
        using KBookmarkMenu::customEvent;
        using KBookmarkMenu::disconnectNotify;
        using KBookmarkMenu::refill;
        using KBookmarkMenu::timerEvent;
    };

    VirtualKBookmarkMenu(KBookmarkManager* manager, KBookmarkOwner* owner, QMenu* parentMenu) : KBookmarkMenu(manager, owner, parentMenu) {};
    VirtualKBookmarkMenu(KBookmarkManager* mgr, KBookmarkOwner* owner, QMenu* parentMenu, const QString& parentAddress) : KBookmarkMenu(mgr, owner, parentMenu, parentAddress) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkmenu_metaobject_callback) {
            QMetaObject* callback_ret = kbookmarkmenu_metaobject_callback(this);
            return callback_ret;
        }
        return KBookmarkMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbookmarkmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbookmarkmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kbookmarkmenu_clear_callback) {
            kbookmarkmenu_clear_callback(this);
            return;
        }
        KBookmarkMenu::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void refill() override {
        if (kbookmarkmenu_refill_callback) {
            kbookmarkmenu_refill_callback(this);
            return;
        }
        KBookmarkMenu::refill();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* actionForBookmark(const KBookmark& bm) override {
        if (kbookmarkmenu_actionforbookmark_callback) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);
            QAction* callback_ret = kbookmarkmenu_actionforbookmark_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkMenu::actionForBookmark(bm);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* contextMenu(QAction* action) override {
        if (kbookmarkmenu_contextmenu_callback) {
            QAction* cbval1 = action;
            QMenu* callback_ret = kbookmarkmenu_contextmenu_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkMenu::contextMenu(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbookmarkmenu_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kbookmarkmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkMenu::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkmenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kbookmarkmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkmenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbookmarkmenu_timerevent_callback(this, cbval1);
            return;
        }
        KBookmarkMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbookmarkmenu_childevent_callback(this, cbval1);
            return;
        }
        KBookmarkMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkmenu_customevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkmenu_customevent_callback(this, cbval1);
            return;
        }
        KBookmarkMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkmenu_connectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBookmarkMenu_SuperClear(KBookmarkMenu* self);
    friend void KBookmarkMenu_SuperRefill(KBookmarkMenu* self);
    friend QAction* KBookmarkMenu_SuperActionForBookmark(KBookmarkMenu* self, const KBookmark* bm);
    friend QMenu* KBookmarkMenu_SuperContextMenu(KBookmarkMenu* self, QAction* action);
    friend void KBookmarkMenu_SuperTimerEvent(KBookmarkMenu* self, QTimerEvent* event);
    friend void KBookmarkMenu_SuperChildEvent(KBookmarkMenu* self, QChildEvent* event);
    friend void KBookmarkMenu_SuperCustomEvent(KBookmarkMenu* self, QEvent* event);
    friend void KBookmarkMenu_SuperConnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
    friend void KBookmarkMenu_SuperDisconnectNotify(KBookmarkMenu* self, const QMetaMethod* signal);
};

#endif
