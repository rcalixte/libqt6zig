#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKACTIONCATEGORY_HXX
#define EXTRAS_KXMLGUI_LIBKACTIONCATEGORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionCategory
class VirtualKActionCategory final : public KActionCategory {
  public:
    // Virtual class public types (including callbacks and access types)
    using KActionCategory_MetaObject_Callback = QMetaObject* (*)(const KActionCategory*);
    using KActionCategory_Metacast_Callback = void* (*)(KActionCategory*, const char*);
    using KActionCategory_Metacall_Callback = int (*)(KActionCategory*, int, int, void**);
    using KActionCategory_Event_Callback = bool (*)(KActionCategory*, QEvent*);
    using KActionCategory_EventFilter_Callback = bool (*)(KActionCategory*, QObject*, QEvent*);
    using KActionCategory_TimerEvent_Callback = void (*)(KActionCategory*, QTimerEvent*);
    using KActionCategory_ChildEvent_Callback = void (*)(KActionCategory*, QChildEvent*);
    using KActionCategory_CustomEvent_Callback = void (*)(KActionCategory*, QEvent*);
    using KActionCategory_ConnectNotify_Callback = void (*)(KActionCategory*, QMetaMethod*);
    using KActionCategory_DisconnectNotify_Callback = void (*)(KActionCategory*, QMetaMethod*);
    using KActionCategory::isSignalConnected;
    using KActionCategory::receivers;
    using KActionCategory::sender;
    using KActionCategory::senderSignalIndex;

    // Instance callback storage
    KActionCategory_MetaObject_Callback kactioncategory_metaobject_callback = nullptr;
    KActionCategory_Metacast_Callback kactioncategory_metacast_callback = nullptr;
    KActionCategory_Metacall_Callback kactioncategory_metacall_callback = nullptr;
    KActionCategory_Event_Callback kactioncategory_event_callback = nullptr;
    KActionCategory_EventFilter_Callback kactioncategory_eventfilter_callback = nullptr;
    KActionCategory_TimerEvent_Callback kactioncategory_timerevent_callback = nullptr;
    KActionCategory_ChildEvent_Callback kactioncategory_childevent_callback = nullptr;
    KActionCategory_CustomEvent_Callback kactioncategory_customevent_callback = nullptr;
    KActionCategory_ConnectNotify_Callback kactioncategory_connectnotify_callback = nullptr;
    KActionCategory_DisconnectNotify_Callback kactioncategory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KActionCategory {
        using KActionCategory::childEvent;
        using KActionCategory::connectNotify;
        using KActionCategory::customEvent;
        using KActionCategory::disconnectNotify;
        using KActionCategory::timerEvent;
    };

    VirtualKActionCategory(const QString& text) : KActionCategory(text) {};
    VirtualKActionCategory(const QString& text, KActionCollection* parent) : KActionCategory(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactioncategory_metaobject_callback) {
            QMetaObject* callback_ret = kactioncategory_metaobject_callback(this);
            return callback_ret;
        }
        return KActionCategory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactioncategory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kactioncategory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KActionCategory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactioncategory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kactioncategory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionCategory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactioncategory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kactioncategory_event_callback(this, cbval1);
            return callback_ret;
        }
        return KActionCategory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kactioncategory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kactioncategory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionCategory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactioncategory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kactioncategory_timerevent_callback(this, cbval1);
            return;
        }
        KActionCategory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactioncategory_childevent_callback) {
            QChildEvent* cbval1 = event;
            kactioncategory_childevent_callback(this, cbval1);
            return;
        }
        KActionCategory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactioncategory_customevent_callback) {
            QEvent* cbval1 = event;
            kactioncategory_customevent_callback(this, cbval1);
            return;
        }
        KActionCategory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactioncategory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactioncategory_connectnotify_callback(this, cbval1);
            return;
        }
        KActionCategory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactioncategory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactioncategory_disconnectnotify_callback(this, cbval1);
            return;
        }
        KActionCategory::disconnectNotify(signal);
    }

    // Friend functions
    friend void KActionCategory_SuperTimerEvent(KActionCategory* self, QTimerEvent* event);
    friend void KActionCategory_SuperChildEvent(KActionCategory* self, QChildEvent* event);
    friend void KActionCategory_SuperCustomEvent(KActionCategory* self, QEvent* event);
    friend void KActionCategory_SuperConnectNotify(KActionCategory* self, const QMetaMethod* signal);
    friend void KActionCategory_SuperDisconnectNotify(KActionCategory* self, const QMetaMethod* signal);
};

#endif
