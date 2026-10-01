#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKMANAGER_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkManager
class VirtualKBookmarkManager final : public KBookmarkManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkManager_MetaObject_Callback = QMetaObject* (*)(const KBookmarkManager*);
    using KBookmarkManager_Metacast_Callback = void* (*)(KBookmarkManager*, const char*);
    using KBookmarkManager_Metacall_Callback = int (*)(KBookmarkManager*, int, int, void**);
    using KBookmarkManager_Event_Callback = bool (*)(KBookmarkManager*, QEvent*);
    using KBookmarkManager_EventFilter_Callback = bool (*)(KBookmarkManager*, QObject*, QEvent*);
    using KBookmarkManager_TimerEvent_Callback = void (*)(KBookmarkManager*, QTimerEvent*);
    using KBookmarkManager_ChildEvent_Callback = void (*)(KBookmarkManager*, QChildEvent*);
    using KBookmarkManager_CustomEvent_Callback = void (*)(KBookmarkManager*, QEvent*);
    using KBookmarkManager_ConnectNotify_Callback = void (*)(KBookmarkManager*, QMetaMethod*);
    using KBookmarkManager_DisconnectNotify_Callback = void (*)(KBookmarkManager*, QMetaMethod*);
    using KBookmarkManager::isSignalConnected;
    using KBookmarkManager::receivers;
    using KBookmarkManager::sender;
    using KBookmarkManager::senderSignalIndex;

    // Instance callback storage
    KBookmarkManager_MetaObject_Callback kbookmarkmanager_metaobject_callback = nullptr;
    KBookmarkManager_Metacast_Callback kbookmarkmanager_metacast_callback = nullptr;
    KBookmarkManager_Metacall_Callback kbookmarkmanager_metacall_callback = nullptr;
    KBookmarkManager_Event_Callback kbookmarkmanager_event_callback = nullptr;
    KBookmarkManager_EventFilter_Callback kbookmarkmanager_eventfilter_callback = nullptr;
    KBookmarkManager_TimerEvent_Callback kbookmarkmanager_timerevent_callback = nullptr;
    KBookmarkManager_ChildEvent_Callback kbookmarkmanager_childevent_callback = nullptr;
    KBookmarkManager_CustomEvent_Callback kbookmarkmanager_customevent_callback = nullptr;
    KBookmarkManager_ConnectNotify_Callback kbookmarkmanager_connectnotify_callback = nullptr;
    KBookmarkManager_DisconnectNotify_Callback kbookmarkmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBookmarkManager {
        using KBookmarkManager::childEvent;
        using KBookmarkManager::connectNotify;
        using KBookmarkManager::customEvent;
        using KBookmarkManager::disconnectNotify;
        using KBookmarkManager::timerEvent;
    };

    VirtualKBookmarkManager(const QString& bookmarksFile) : KBookmarkManager(bookmarksFile) {};
    VirtualKBookmarkManager(const QString& bookmarksFile, QObject* parent) : KBookmarkManager(bookmarksFile, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkmanager_metaobject_callback) {
            QMetaObject* callback_ret = kbookmarkmanager_metaobject_callback(this);
            return callback_ret;
        }
        return KBookmarkManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbookmarkmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbookmarkmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbookmarkmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kbookmarkmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kbookmarkmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbookmarkmanager_timerevent_callback(this, cbval1);
            return;
        }
        KBookmarkManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbookmarkmanager_childevent_callback(this, cbval1);
            return;
        }
        KBookmarkManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkmanager_customevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkmanager_customevent_callback(this, cbval1);
            return;
        }
        KBookmarkManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkmanager_connectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBookmarkManager_SuperTimerEvent(KBookmarkManager* self, QTimerEvent* event);
    friend void KBookmarkManager_SuperChildEvent(KBookmarkManager* self, QChildEvent* event);
    friend void KBookmarkManager_SuperCustomEvent(KBookmarkManager* self, QEvent* event);
    friend void KBookmarkManager_SuperConnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
    friend void KBookmarkManager_SuperDisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
};

#endif
