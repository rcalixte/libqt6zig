#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DLIGHT_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DLIGHT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DLight
class VirtualQ3DLight final : public Q3DLight {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DLight_MetaObject_Callback = QMetaObject* (*)(const Q3DLight*);
    using Q3DLight_Metacast_Callback = void* (*)(Q3DLight*, const char*);
    using Q3DLight_Metacall_Callback = int (*)(Q3DLight*, int, int, void**);
    using Q3DLight_CopyValuesFrom_Callback = void (*)(Q3DLight*, Q3DObject*);
    using Q3DLight_Event_Callback = bool (*)(Q3DLight*, QEvent*);
    using Q3DLight_EventFilter_Callback = bool (*)(Q3DLight*, QObject*, QEvent*);
    using Q3DLight_TimerEvent_Callback = void (*)(Q3DLight*, QTimerEvent*);
    using Q3DLight_ChildEvent_Callback = void (*)(Q3DLight*, QChildEvent*);
    using Q3DLight_CustomEvent_Callback = void (*)(Q3DLight*, QEvent*);
    using Q3DLight_ConnectNotify_Callback = void (*)(Q3DLight*, QMetaMethod*);
    using Q3DLight_DisconnectNotify_Callback = void (*)(Q3DLight*, QMetaMethod*);
    using Q3DLight::isDirty;
    using Q3DLight::isSignalConnected;
    using Q3DLight::receivers;
    using Q3DLight::sender;
    using Q3DLight::senderSignalIndex;
    using Q3DLight::setDirty;

    // Instance callback storage
    Q3DLight_MetaObject_Callback q3dlight_metaobject_callback = nullptr;
    Q3DLight_Metacast_Callback q3dlight_metacast_callback = nullptr;
    Q3DLight_Metacall_Callback q3dlight_metacall_callback = nullptr;
    Q3DLight_CopyValuesFrom_Callback q3dlight_copyvaluesfrom_callback = nullptr;
    Q3DLight_Event_Callback q3dlight_event_callback = nullptr;
    Q3DLight_EventFilter_Callback q3dlight_eventfilter_callback = nullptr;
    Q3DLight_TimerEvent_Callback q3dlight_timerevent_callback = nullptr;
    Q3DLight_ChildEvent_Callback q3dlight_childevent_callback = nullptr;
    Q3DLight_CustomEvent_Callback q3dlight_customevent_callback = nullptr;
    Q3DLight_ConnectNotify_Callback q3dlight_connectnotify_callback = nullptr;
    Q3DLight_DisconnectNotify_Callback q3dlight_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DLight {
        using Q3DLight::childEvent;
        using Q3DLight::connectNotify;
        using Q3DLight::customEvent;
        using Q3DLight::disconnectNotify;
        using Q3DLight::timerEvent;
    };

    VirtualQ3DLight() : Q3DLight() {};
    VirtualQ3DLight(QObject* parent) : Q3DLight(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dlight_metaobject_callback) {
            QMetaObject* callback_ret = q3dlight_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DLight::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dlight_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dlight_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DLight::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dlight_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dlight_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DLight::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void copyValuesFrom(const Q3DObject& source) override {
        if (q3dlight_copyvaluesfrom_callback) {
            const Q3DObject& source_ret = source;
            // Cast returned reference into pointer
            Q3DObject* cbval1 = const_cast<Q3DObject*>(&source_ret);
            q3dlight_copyvaluesfrom_callback(this, cbval1);
            return;
        }
        Q3DLight::copyValuesFrom(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dlight_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dlight_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DLight::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dlight_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dlight_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DLight::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dlight_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dlight_timerevent_callback(this, cbval1);
            return;
        }
        Q3DLight::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dlight_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dlight_childevent_callback(this, cbval1);
            return;
        }
        Q3DLight::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dlight_customevent_callback) {
            QEvent* cbval1 = event;
            q3dlight_customevent_callback(this, cbval1);
            return;
        }
        Q3DLight::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dlight_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dlight_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DLight::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dlight_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dlight_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DLight::disconnectNotify(signal);
    }

    // Friend functions
    friend void Q3DLight_SuperTimerEvent(Q3DLight* self, QTimerEvent* event);
    friend void Q3DLight_SuperChildEvent(Q3DLight* self, QChildEvent* event);
    friend void Q3DLight_SuperCustomEvent(Q3DLight* self, QEvent* event);
    friend void Q3DLight_SuperConnectNotify(Q3DLight* self, const QMetaMethod* signal);
    friend void Q3DLight_SuperDisconnectNotify(Q3DLight* self, const QMetaMethod* signal);
};

#endif
