#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCOLUMNRESIZER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCOLUMNRESIZER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColumnResizer
class VirtualKColumnResizer final : public KColumnResizer {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColumnResizer_MetaObject_Callback = QMetaObject* (*)(const KColumnResizer*);
    using KColumnResizer_Metacast_Callback = void* (*)(KColumnResizer*, const char*);
    using KColumnResizer_Metacall_Callback = int (*)(KColumnResizer*, int, int, void**);
    using KColumnResizer_EventFilter_Callback = bool (*)(KColumnResizer*, QObject*, QEvent*);
    using KColumnResizer_Event_Callback = bool (*)(KColumnResizer*, QEvent*);
    using KColumnResizer_TimerEvent_Callback = void (*)(KColumnResizer*, QTimerEvent*);
    using KColumnResizer_ChildEvent_Callback = void (*)(KColumnResizer*, QChildEvent*);
    using KColumnResizer_CustomEvent_Callback = void (*)(KColumnResizer*, QEvent*);
    using KColumnResizer_ConnectNotify_Callback = void (*)(KColumnResizer*, QMetaMethod*);
    using KColumnResizer_DisconnectNotify_Callback = void (*)(KColumnResizer*, QMetaMethod*);
    using KColumnResizer::isSignalConnected;
    using KColumnResizer::receivers;
    using KColumnResizer::sender;
    using KColumnResizer::senderSignalIndex;

    // Instance callback storage
    KColumnResizer_MetaObject_Callback kcolumnresizer_metaobject_callback = nullptr;
    KColumnResizer_Metacast_Callback kcolumnresizer_metacast_callback = nullptr;
    KColumnResizer_Metacall_Callback kcolumnresizer_metacall_callback = nullptr;
    KColumnResizer_EventFilter_Callback kcolumnresizer_eventfilter_callback = nullptr;
    KColumnResizer_Event_Callback kcolumnresizer_event_callback = nullptr;
    KColumnResizer_TimerEvent_Callback kcolumnresizer_timerevent_callback = nullptr;
    KColumnResizer_ChildEvent_Callback kcolumnresizer_childevent_callback = nullptr;
    KColumnResizer_CustomEvent_Callback kcolumnresizer_customevent_callback = nullptr;
    KColumnResizer_ConnectNotify_Callback kcolumnresizer_connectnotify_callback = nullptr;
    KColumnResizer_DisconnectNotify_Callback kcolumnresizer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColumnResizer {
        using KColumnResizer::childEvent;
        using KColumnResizer::connectNotify;
        using KColumnResizer::customEvent;
        using KColumnResizer::disconnectNotify;
        using KColumnResizer::eventFilter;
        using KColumnResizer::timerEvent;
    };

    VirtualKColumnResizer() : KColumnResizer() {};
    VirtualKColumnResizer(QObject* parent) : KColumnResizer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolumnresizer_metaobject_callback) {
            QMetaObject* callback_ret = kcolumnresizer_metaobject_callback(this);
            return callback_ret;
        }
        return KColumnResizer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolumnresizer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolumnresizer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColumnResizer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolumnresizer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolumnresizer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColumnResizer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* event) override {
        if (kcolumnresizer_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = event;
            bool callback_ret = kcolumnresizer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColumnResizer::eventFilter(param1, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolumnresizer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcolumnresizer_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColumnResizer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolumnresizer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcolumnresizer_timerevent_callback(this, cbval1);
            return;
        }
        KColumnResizer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolumnresizer_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolumnresizer_childevent_callback(this, cbval1);
            return;
        }
        KColumnResizer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolumnresizer_customevent_callback) {
            QEvent* cbval1 = event;
            kcolumnresizer_customevent_callback(this, cbval1);
            return;
        }
        KColumnResizer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolumnresizer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolumnresizer_connectnotify_callback(this, cbval1);
            return;
        }
        KColumnResizer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolumnresizer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolumnresizer_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColumnResizer::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KColumnResizer_SuperEventFilter(KColumnResizer* self, QObject* param1, QEvent* event);
    friend void KColumnResizer_SuperTimerEvent(KColumnResizer* self, QTimerEvent* event);
    friend void KColumnResizer_SuperChildEvent(KColumnResizer* self, QChildEvent* event);
    friend void KColumnResizer_SuperCustomEvent(KColumnResizer* self, QEvent* event);
    friend void KColumnResizer_SuperConnectNotify(KColumnResizer* self, const QMetaMethod* signal);
    friend void KColumnResizer_SuperDisconnectNotify(KColumnResizer* self, const QMetaMethod* signal);
};

#endif
