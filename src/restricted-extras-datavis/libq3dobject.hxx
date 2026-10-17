#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DOBJECT_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DObject
class VirtualQ3DObject final : public Q3DObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DObject_MetaObject_Callback = QMetaObject* (*)(const Q3DObject*);
    using Q3DObject_Metacast_Callback = void* (*)(Q3DObject*, const char*);
    using Q3DObject_Metacall_Callback = int (*)(Q3DObject*, int, int, void**);
    using Q3DObject_CopyValuesFrom_Callback = void (*)(Q3DObject*, Q3DObject*);
    using Q3DObject_Event_Callback = bool (*)(Q3DObject*, QEvent*);
    using Q3DObject_EventFilter_Callback = bool (*)(Q3DObject*, QObject*, QEvent*);
    using Q3DObject_TimerEvent_Callback = void (*)(Q3DObject*, QTimerEvent*);
    using Q3DObject_ChildEvent_Callback = void (*)(Q3DObject*, QChildEvent*);
    using Q3DObject_CustomEvent_Callback = void (*)(Q3DObject*, QEvent*);
    using Q3DObject_ConnectNotify_Callback = void (*)(Q3DObject*, QMetaMethod*);
    using Q3DObject_DisconnectNotify_Callback = void (*)(Q3DObject*, QMetaMethod*);
    using Q3DObject::isDirty;
    using Q3DObject::isSignalConnected;
    using Q3DObject::receivers;
    using Q3DObject::sender;
    using Q3DObject::senderSignalIndex;
    using Q3DObject::setDirty;

    // Instance callback storage
    Q3DObject_MetaObject_Callback q3dobject_metaobject_callback = nullptr;
    Q3DObject_Metacast_Callback q3dobject_metacast_callback = nullptr;
    Q3DObject_Metacall_Callback q3dobject_metacall_callback = nullptr;
    Q3DObject_CopyValuesFrom_Callback q3dobject_copyvaluesfrom_callback = nullptr;
    Q3DObject_Event_Callback q3dobject_event_callback = nullptr;
    Q3DObject_EventFilter_Callback q3dobject_eventfilter_callback = nullptr;
    Q3DObject_TimerEvent_Callback q3dobject_timerevent_callback = nullptr;
    Q3DObject_ChildEvent_Callback q3dobject_childevent_callback = nullptr;
    Q3DObject_CustomEvent_Callback q3dobject_customevent_callback = nullptr;
    Q3DObject_ConnectNotify_Callback q3dobject_connectnotify_callback = nullptr;
    Q3DObject_DisconnectNotify_Callback q3dobject_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DObject {
        using Q3DObject::childEvent;
        using Q3DObject::connectNotify;
        using Q3DObject::customEvent;
        using Q3DObject::disconnectNotify;
        using Q3DObject::timerEvent;
    };

    VirtualQ3DObject() : Q3DObject() {};
    VirtualQ3DObject(QObject* parent) : Q3DObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dobject_metaobject_callback) {
            QMetaObject* callback_ret = q3dobject_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void copyValuesFrom(const Q3DObject& source) override {
        if (q3dobject_copyvaluesfrom_callback) {
            const Q3DObject& source_ret = source;
            // Cast returned reference into pointer
            Q3DObject* cbval1 = const_cast<Q3DObject*>(&source_ret);
            q3dobject_copyvaluesfrom_callback(this, cbval1);
            return;
        }
        Q3DObject::copyValuesFrom(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dobject_timerevent_callback(this, cbval1);
            return;
        }
        Q3DObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dobject_childevent_callback(this, cbval1);
            return;
        }
        Q3DObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dobject_customevent_callback) {
            QEvent* cbval1 = event;
            q3dobject_customevent_callback(this, cbval1);
            return;
        }
        Q3DObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dobject_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void Q3DObject_SuperTimerEvent(Q3DObject* self, QTimerEvent* event);
    friend void Q3DObject_SuperChildEvent(Q3DObject* self, QChildEvent* event);
    friend void Q3DObject_SuperCustomEvent(Q3DObject* self, QEvent* event);
    friend void Q3DObject_SuperConnectNotify(Q3DObject* self, const QMetaMethod* signal);
    friend void Q3DObject_SuperDisconnectNotify(Q3DObject* self, const QMetaMethod* signal);
};

#endif
