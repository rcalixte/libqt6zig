#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_FORM_HXX
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_FORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Poppler::AsyncObject
class VirtualPopplerAsyncObject final : public Poppler::AsyncObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__AsyncObject_MetaObject_Callback = QMetaObject* (*)(const Poppler__AsyncObject*);
    using Poppler__AsyncObject_Metacast_Callback = void* (*)(Poppler__AsyncObject*, const char*);
    using Poppler__AsyncObject_Metacall_Callback = int (*)(Poppler__AsyncObject*, int, int, void**);
    using Poppler__AsyncObject_Event_Callback = bool (*)(Poppler__AsyncObject*, QEvent*);
    using Poppler__AsyncObject_EventFilter_Callback = bool (*)(Poppler__AsyncObject*, QObject*, QEvent*);
    using Poppler__AsyncObject_TimerEvent_Callback = void (*)(Poppler__AsyncObject*, QTimerEvent*);
    using Poppler__AsyncObject_ChildEvent_Callback = void (*)(Poppler__AsyncObject*, QChildEvent*);
    using Poppler__AsyncObject_CustomEvent_Callback = void (*)(Poppler__AsyncObject*, QEvent*);
    using Poppler__AsyncObject_ConnectNotify_Callback = void (*)(Poppler__AsyncObject*, QMetaMethod*);
    using Poppler__AsyncObject_DisconnectNotify_Callback = void (*)(Poppler__AsyncObject*, QMetaMethod*);
    using Poppler::AsyncObject::isSignalConnected;
    using Poppler::AsyncObject::receivers;
    using Poppler::AsyncObject::sender;
    using Poppler::AsyncObject::senderSignalIndex;

    // Instance callback storage
    Poppler__AsyncObject_MetaObject_Callback poppler__asyncobject_metaobject_callback = nullptr;
    Poppler__AsyncObject_Metacast_Callback poppler__asyncobject_metacast_callback = nullptr;
    Poppler__AsyncObject_Metacall_Callback poppler__asyncobject_metacall_callback = nullptr;
    Poppler__AsyncObject_Event_Callback poppler__asyncobject_event_callback = nullptr;
    Poppler__AsyncObject_EventFilter_Callback poppler__asyncobject_eventfilter_callback = nullptr;
    Poppler__AsyncObject_TimerEvent_Callback poppler__asyncobject_timerevent_callback = nullptr;
    Poppler__AsyncObject_ChildEvent_Callback poppler__asyncobject_childevent_callback = nullptr;
    Poppler__AsyncObject_CustomEvent_Callback poppler__asyncobject_customevent_callback = nullptr;
    Poppler__AsyncObject_ConnectNotify_Callback poppler__asyncobject_connectnotify_callback = nullptr;
    Poppler__AsyncObject_DisconnectNotify_Callback poppler__asyncobject_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Poppler::AsyncObject {
        using Poppler::AsyncObject::childEvent;
        using Poppler::AsyncObject::connectNotify;
        using Poppler::AsyncObject::customEvent;
        using Poppler::AsyncObject::disconnectNotify;
        using Poppler::AsyncObject::timerEvent;
    };

    VirtualPopplerAsyncObject() : Poppler::AsyncObject() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (poppler__asyncobject_metaobject_callback) {
            QMetaObject* callback_ret = poppler__asyncobject_metaobject_callback(this);
            return callback_ret;
        }
        return Poppler__AsyncObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (poppler__asyncobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = poppler__asyncobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Poppler__AsyncObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (poppler__asyncobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = poppler__asyncobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Poppler__AsyncObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (poppler__asyncobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = poppler__asyncobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return Poppler__AsyncObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (poppler__asyncobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = poppler__asyncobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Poppler__AsyncObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (poppler__asyncobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            poppler__asyncobject_timerevent_callback(this, cbval1);
            return;
        }
        Poppler__AsyncObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (poppler__asyncobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            poppler__asyncobject_childevent_callback(this, cbval1);
            return;
        }
        Poppler__AsyncObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (poppler__asyncobject_customevent_callback) {
            QEvent* cbval1 = event;
            poppler__asyncobject_customevent_callback(this, cbval1);
            return;
        }
        Poppler__AsyncObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (poppler__asyncobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            poppler__asyncobject_connectnotify_callback(this, cbval1);
            return;
        }
        Poppler__AsyncObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (poppler__asyncobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            poppler__asyncobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        Poppler__AsyncObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void Poppler__AsyncObject_SuperTimerEvent(Poppler::AsyncObject* self, QTimerEvent* event);
    friend void Poppler__AsyncObject_SuperChildEvent(Poppler::AsyncObject* self, QChildEvent* event);
    friend void Poppler__AsyncObject_SuperCustomEvent(Poppler::AsyncObject* self, QEvent* event);
    friend void Poppler__AsyncObject_SuperConnectNotify(Poppler::AsyncObject* self, const QMetaMethod* signal);
    friend void Poppler__AsyncObject_SuperDisconnectNotify(Poppler::AsyncObject* self, const QMetaMethod* signal);
};

#endif
