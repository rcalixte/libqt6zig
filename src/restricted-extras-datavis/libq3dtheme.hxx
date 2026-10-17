#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DTHEME_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DTHEME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DTheme
class VirtualQ3DTheme final : public Q3DTheme {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DTheme_MetaObject_Callback = QMetaObject* (*)(const Q3DTheme*);
    using Q3DTheme_Metacast_Callback = void* (*)(Q3DTheme*, const char*);
    using Q3DTheme_Metacall_Callback = int (*)(Q3DTheme*, int, int, void**);
    using Q3DTheme_Event_Callback = bool (*)(Q3DTheme*, QEvent*);
    using Q3DTheme_EventFilter_Callback = bool (*)(Q3DTheme*, QObject*, QEvent*);
    using Q3DTheme_TimerEvent_Callback = void (*)(Q3DTheme*, QTimerEvent*);
    using Q3DTheme_ChildEvent_Callback = void (*)(Q3DTheme*, QChildEvent*);
    using Q3DTheme_CustomEvent_Callback = void (*)(Q3DTheme*, QEvent*);
    using Q3DTheme_ConnectNotify_Callback = void (*)(Q3DTheme*, QMetaMethod*);
    using Q3DTheme_DisconnectNotify_Callback = void (*)(Q3DTheme*, QMetaMethod*);
    using Q3DTheme::isSignalConnected;
    using Q3DTheme::receivers;
    using Q3DTheme::sender;
    using Q3DTheme::senderSignalIndex;

    // Instance callback storage
    Q3DTheme_MetaObject_Callback q3dtheme_metaobject_callback = nullptr;
    Q3DTheme_Metacast_Callback q3dtheme_metacast_callback = nullptr;
    Q3DTheme_Metacall_Callback q3dtheme_metacall_callback = nullptr;
    Q3DTheme_Event_Callback q3dtheme_event_callback = nullptr;
    Q3DTheme_EventFilter_Callback q3dtheme_eventfilter_callback = nullptr;
    Q3DTheme_TimerEvent_Callback q3dtheme_timerevent_callback = nullptr;
    Q3DTheme_ChildEvent_Callback q3dtheme_childevent_callback = nullptr;
    Q3DTheme_CustomEvent_Callback q3dtheme_customevent_callback = nullptr;
    Q3DTheme_ConnectNotify_Callback q3dtheme_connectnotify_callback = nullptr;
    Q3DTheme_DisconnectNotify_Callback q3dtheme_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DTheme {
        using Q3DTheme::childEvent;
        using Q3DTheme::connectNotify;
        using Q3DTheme::customEvent;
        using Q3DTheme::disconnectNotify;
        using Q3DTheme::timerEvent;
    };

    VirtualQ3DTheme() : Q3DTheme() {};
    VirtualQ3DTheme(Q3DTheme::Theme themeType) : Q3DTheme(themeType) {};
    VirtualQ3DTheme(QObject* parent) : Q3DTheme(parent) {};
    VirtualQ3DTheme(Q3DTheme::Theme themeType, QObject* parent) : Q3DTheme(themeType, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dtheme_metaobject_callback) {
            QMetaObject* callback_ret = q3dtheme_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DTheme::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dtheme_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dtheme_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DTheme::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dtheme_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dtheme_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DTheme::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dtheme_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dtheme_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DTheme::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dtheme_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dtheme_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DTheme::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dtheme_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dtheme_timerevent_callback(this, cbval1);
            return;
        }
        Q3DTheme::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dtheme_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dtheme_childevent_callback(this, cbval1);
            return;
        }
        Q3DTheme::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dtheme_customevent_callback) {
            QEvent* cbval1 = event;
            q3dtheme_customevent_callback(this, cbval1);
            return;
        }
        Q3DTheme::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dtheme_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dtheme_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DTheme::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dtheme_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dtheme_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DTheme::disconnectNotify(signal);
    }

    // Friend functions
    friend void Q3DTheme_SuperTimerEvent(Q3DTheme* self, QTimerEvent* event);
    friend void Q3DTheme_SuperChildEvent(Q3DTheme* self, QChildEvent* event);
    friend void Q3DTheme_SuperCustomEvent(Q3DTheme* self, QEvent* event);
    friend void Q3DTheme_SuperConnectNotify(Q3DTheme* self, const QMetaMethod* signal);
    friend void Q3DTheme_SuperDisconnectNotify(Q3DTheme* self, const QMetaMethod* signal);
};

#endif
