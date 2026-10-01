#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKACTION_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkAction
class VirtualKBookmarkAction final : public KBookmarkAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkAction_MetaObject_Callback = QMetaObject* (*)(const KBookmarkAction*);
    using KBookmarkAction_Metacast_Callback = void* (*)(KBookmarkAction*, const char*);
    using KBookmarkAction_Metacall_Callback = int (*)(KBookmarkAction*, int, int, void**);
    using KBookmarkAction_Event_Callback = bool (*)(KBookmarkAction*, QEvent*);
    using KBookmarkAction_EventFilter_Callback = bool (*)(KBookmarkAction*, QObject*, QEvent*);
    using KBookmarkAction_TimerEvent_Callback = void (*)(KBookmarkAction*, QTimerEvent*);
    using KBookmarkAction_ChildEvent_Callback = void (*)(KBookmarkAction*, QChildEvent*);
    using KBookmarkAction_CustomEvent_Callback = void (*)(KBookmarkAction*, QEvent*);
    using KBookmarkAction_ConnectNotify_Callback = void (*)(KBookmarkAction*, QMetaMethod*);
    using KBookmarkAction_DisconnectNotify_Callback = void (*)(KBookmarkAction*, QMetaMethod*);
    using KBookmarkAction::isSignalConnected;
    using KBookmarkAction::receivers;
    using KBookmarkAction::sender;
    using KBookmarkAction::senderSignalIndex;

    // Instance callback storage
    KBookmarkAction_MetaObject_Callback kbookmarkaction_metaobject_callback = nullptr;
    KBookmarkAction_Metacast_Callback kbookmarkaction_metacast_callback = nullptr;
    KBookmarkAction_Metacall_Callback kbookmarkaction_metacall_callback = nullptr;
    KBookmarkAction_Event_Callback kbookmarkaction_event_callback = nullptr;
    KBookmarkAction_EventFilter_Callback kbookmarkaction_eventfilter_callback = nullptr;
    KBookmarkAction_TimerEvent_Callback kbookmarkaction_timerevent_callback = nullptr;
    KBookmarkAction_ChildEvent_Callback kbookmarkaction_childevent_callback = nullptr;
    KBookmarkAction_CustomEvent_Callback kbookmarkaction_customevent_callback = nullptr;
    KBookmarkAction_ConnectNotify_Callback kbookmarkaction_connectnotify_callback = nullptr;
    KBookmarkAction_DisconnectNotify_Callback kbookmarkaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBookmarkAction {
        using KBookmarkAction::childEvent;
        using KBookmarkAction::connectNotify;
        using KBookmarkAction::customEvent;
        using KBookmarkAction::disconnectNotify;
        using KBookmarkAction::event;
        using KBookmarkAction::timerEvent;
    };

    VirtualKBookmarkAction(const KBookmark& bk, KBookmarkOwner* owner, QObject* parent) : KBookmarkAction(bk, owner, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkaction_metaobject_callback) {
            QMetaObject* callback_ret = kbookmarkaction_metaobject_callback(this);
            return callback_ret;
        }
        return KBookmarkAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbookmarkaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbookmarkaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kbookmarkaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kbookmarkaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbookmarkaction_timerevent_callback(this, cbval1);
            return;
        }
        KBookmarkAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbookmarkaction_childevent_callback(this, cbval1);
            return;
        }
        KBookmarkAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkaction_customevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkaction_customevent_callback(this, cbval1);
            return;
        }
        KBookmarkAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkaction_connectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KBookmarkAction_SuperEvent(KBookmarkAction* self, QEvent* param1);
    friend void KBookmarkAction_SuperTimerEvent(KBookmarkAction* self, QTimerEvent* event);
    friend void KBookmarkAction_SuperChildEvent(KBookmarkAction* self, QChildEvent* event);
    friend void KBookmarkAction_SuperCustomEvent(KBookmarkAction* self, QEvent* event);
    friend void KBookmarkAction_SuperConnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
    friend void KBookmarkAction_SuperDisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
};

#endif
