#pragma once
#ifndef EXTRAS_KIO_LIBKCOREURLNAVIGATOR_HXX
#define EXTRAS_KIO_LIBKCOREURLNAVIGATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCoreUrlNavigator
class VirtualKCoreUrlNavigator final : public KCoreUrlNavigator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreUrlNavigator_MetaObject_Callback = QMetaObject* (*)(const KCoreUrlNavigator*);
    using KCoreUrlNavigator_Metacast_Callback = void* (*)(KCoreUrlNavigator*, const char*);
    using KCoreUrlNavigator_Metacall_Callback = int (*)(KCoreUrlNavigator*, int, int, void**);
    using KCoreUrlNavigator_Event_Callback = bool (*)(KCoreUrlNavigator*, QEvent*);
    using KCoreUrlNavigator_EventFilter_Callback = bool (*)(KCoreUrlNavigator*, QObject*, QEvent*);
    using KCoreUrlNavigator_TimerEvent_Callback = void (*)(KCoreUrlNavigator*, QTimerEvent*);
    using KCoreUrlNavigator_ChildEvent_Callback = void (*)(KCoreUrlNavigator*, QChildEvent*);
    using KCoreUrlNavigator_CustomEvent_Callback = void (*)(KCoreUrlNavigator*, QEvent*);
    using KCoreUrlNavigator_ConnectNotify_Callback = void (*)(KCoreUrlNavigator*, QMetaMethod*);
    using KCoreUrlNavigator_DisconnectNotify_Callback = void (*)(KCoreUrlNavigator*, QMetaMethod*);
    using KCoreUrlNavigator::isSignalConnected;
    using KCoreUrlNavigator::receivers;
    using KCoreUrlNavigator::sender;
    using KCoreUrlNavigator::senderSignalIndex;

    // Instance callback storage
    KCoreUrlNavigator_MetaObject_Callback kcoreurlnavigator_metaobject_callback = nullptr;
    KCoreUrlNavigator_Metacast_Callback kcoreurlnavigator_metacast_callback = nullptr;
    KCoreUrlNavigator_Metacall_Callback kcoreurlnavigator_metacall_callback = nullptr;
    KCoreUrlNavigator_Event_Callback kcoreurlnavigator_event_callback = nullptr;
    KCoreUrlNavigator_EventFilter_Callback kcoreurlnavigator_eventfilter_callback = nullptr;
    KCoreUrlNavigator_TimerEvent_Callback kcoreurlnavigator_timerevent_callback = nullptr;
    KCoreUrlNavigator_ChildEvent_Callback kcoreurlnavigator_childevent_callback = nullptr;
    KCoreUrlNavigator_CustomEvent_Callback kcoreurlnavigator_customevent_callback = nullptr;
    KCoreUrlNavigator_ConnectNotify_Callback kcoreurlnavigator_connectnotify_callback = nullptr;
    KCoreUrlNavigator_DisconnectNotify_Callback kcoreurlnavigator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCoreUrlNavigator {
        using KCoreUrlNavigator::childEvent;
        using KCoreUrlNavigator::connectNotify;
        using KCoreUrlNavigator::customEvent;
        using KCoreUrlNavigator::disconnectNotify;
        using KCoreUrlNavigator::timerEvent;
    };

    VirtualKCoreUrlNavigator() : KCoreUrlNavigator() {};
    VirtualKCoreUrlNavigator(const QUrl& url) : KCoreUrlNavigator(url) {};
    VirtualKCoreUrlNavigator(const QUrl& url, QObject* parent) : KCoreUrlNavigator(url, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcoreurlnavigator_metaobject_callback) {
            QMetaObject* callback_ret = kcoreurlnavigator_metaobject_callback(this);
            return callback_ret;
        }
        return KCoreUrlNavigator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcoreurlnavigator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcoreurlnavigator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreUrlNavigator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoreurlnavigator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcoreurlnavigator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCoreUrlNavigator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoreurlnavigator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcoreurlnavigator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreUrlNavigator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoreurlnavigator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcoreurlnavigator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCoreUrlNavigator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoreurlnavigator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcoreurlnavigator_timerevent_callback(this, cbval1);
            return;
        }
        KCoreUrlNavigator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoreurlnavigator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcoreurlnavigator_childevent_callback(this, cbval1);
            return;
        }
        KCoreUrlNavigator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoreurlnavigator_customevent_callback) {
            QEvent* cbval1 = event;
            kcoreurlnavigator_customevent_callback(this, cbval1);
            return;
        }
        KCoreUrlNavigator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoreurlnavigator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcoreurlnavigator_connectnotify_callback(this, cbval1);
            return;
        }
        KCoreUrlNavigator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoreurlnavigator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcoreurlnavigator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCoreUrlNavigator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCoreUrlNavigator_SuperTimerEvent(KCoreUrlNavigator* self, QTimerEvent* event);
    friend void KCoreUrlNavigator_SuperChildEvent(KCoreUrlNavigator* self, QChildEvent* event);
    friend void KCoreUrlNavigator_SuperCustomEvent(KCoreUrlNavigator* self, QEvent* event);
    friend void KCoreUrlNavigator_SuperConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
    friend void KCoreUrlNavigator_SuperDisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal);
};

#endif
