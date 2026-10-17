#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DCAMERA_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DCAMERA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DCamera
class VirtualQ3DCamera final : public Q3DCamera {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DCamera_MetaObject_Callback = QMetaObject* (*)(const Q3DCamera*);
    using Q3DCamera_Metacast_Callback = void* (*)(Q3DCamera*, const char*);
    using Q3DCamera_Metacall_Callback = int (*)(Q3DCamera*, int, int, void**);
    using Q3DCamera_CopyValuesFrom_Callback = void (*)(Q3DCamera*, Q3DObject*);
    using Q3DCamera_Event_Callback = bool (*)(Q3DCamera*, QEvent*);
    using Q3DCamera_EventFilter_Callback = bool (*)(Q3DCamera*, QObject*, QEvent*);
    using Q3DCamera_TimerEvent_Callback = void (*)(Q3DCamera*, QTimerEvent*);
    using Q3DCamera_ChildEvent_Callback = void (*)(Q3DCamera*, QChildEvent*);
    using Q3DCamera_CustomEvent_Callback = void (*)(Q3DCamera*, QEvent*);
    using Q3DCamera_ConnectNotify_Callback = void (*)(Q3DCamera*, QMetaMethod*);
    using Q3DCamera_DisconnectNotify_Callback = void (*)(Q3DCamera*, QMetaMethod*);
    using Q3DCamera::isDirty;
    using Q3DCamera::isSignalConnected;
    using Q3DCamera::receivers;
    using Q3DCamera::sender;
    using Q3DCamera::senderSignalIndex;
    using Q3DCamera::setDirty;

    // Instance callback storage
    Q3DCamera_MetaObject_Callback q3dcamera_metaobject_callback = nullptr;
    Q3DCamera_Metacast_Callback q3dcamera_metacast_callback = nullptr;
    Q3DCamera_Metacall_Callback q3dcamera_metacall_callback = nullptr;
    Q3DCamera_CopyValuesFrom_Callback q3dcamera_copyvaluesfrom_callback = nullptr;
    Q3DCamera_Event_Callback q3dcamera_event_callback = nullptr;
    Q3DCamera_EventFilter_Callback q3dcamera_eventfilter_callback = nullptr;
    Q3DCamera_TimerEvent_Callback q3dcamera_timerevent_callback = nullptr;
    Q3DCamera_ChildEvent_Callback q3dcamera_childevent_callback = nullptr;
    Q3DCamera_CustomEvent_Callback q3dcamera_customevent_callback = nullptr;
    Q3DCamera_ConnectNotify_Callback q3dcamera_connectnotify_callback = nullptr;
    Q3DCamera_DisconnectNotify_Callback q3dcamera_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DCamera {
        using Q3DCamera::childEvent;
        using Q3DCamera::connectNotify;
        using Q3DCamera::customEvent;
        using Q3DCamera::disconnectNotify;
        using Q3DCamera::timerEvent;
    };

    VirtualQ3DCamera() : Q3DCamera() {};
    VirtualQ3DCamera(QObject* parent) : Q3DCamera(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dcamera_metaobject_callback) {
            QMetaObject* callback_ret = q3dcamera_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DCamera::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dcamera_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dcamera_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DCamera::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dcamera_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dcamera_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DCamera::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void copyValuesFrom(const Q3DObject& source) override {
        if (q3dcamera_copyvaluesfrom_callback) {
            const Q3DObject& source_ret = source;
            // Cast returned reference into pointer
            Q3DObject* cbval1 = const_cast<Q3DObject*>(&source_ret);
            q3dcamera_copyvaluesfrom_callback(this, cbval1);
            return;
        }
        Q3DCamera::copyValuesFrom(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dcamera_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dcamera_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DCamera::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dcamera_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dcamera_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DCamera::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dcamera_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dcamera_timerevent_callback(this, cbval1);
            return;
        }
        Q3DCamera::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dcamera_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dcamera_childevent_callback(this, cbval1);
            return;
        }
        Q3DCamera::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dcamera_customevent_callback) {
            QEvent* cbval1 = event;
            q3dcamera_customevent_callback(this, cbval1);
            return;
        }
        Q3DCamera::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dcamera_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dcamera_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DCamera::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dcamera_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dcamera_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DCamera::disconnectNotify(signal);
    }

    // Friend functions
    friend void Q3DCamera_SuperTimerEvent(Q3DCamera* self, QTimerEvent* event);
    friend void Q3DCamera_SuperChildEvent(Q3DCamera* self, QChildEvent* event);
    friend void Q3DCamera_SuperCustomEvent(Q3DCamera* self, QEvent* event);
    friend void Q3DCamera_SuperConnectNotify(Q3DCamera* self, const QMetaMethod* signal);
    friend void Q3DCamera_SuperDisconnectNotify(Q3DCamera* self, const QMetaMethod* signal);
};

#endif
