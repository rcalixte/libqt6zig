#pragma once
#ifndef WEBENGINE_LIBQQUICKWEBENGINEPROFILE_HXX
#define WEBENGINE_LIBQQUICKWEBENGINEPROFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickWebEngineProfile
class VirtualQQuickWebEngineProfile final : public QQuickWebEngineProfile {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickWebEngineProfile_MetaObject_Callback = QMetaObject* (*)(const QQuickWebEngineProfile*);
    using QQuickWebEngineProfile_Metacast_Callback = void* (*)(QQuickWebEngineProfile*, const char*);
    using QQuickWebEngineProfile_Metacall_Callback = int (*)(QQuickWebEngineProfile*, int, int, void**);
    using QQuickWebEngineProfile_Event_Callback = bool (*)(QQuickWebEngineProfile*, QEvent*);
    using QQuickWebEngineProfile_EventFilter_Callback = bool (*)(QQuickWebEngineProfile*, QObject*, QEvent*);
    using QQuickWebEngineProfile_TimerEvent_Callback = void (*)(QQuickWebEngineProfile*, QTimerEvent*);
    using QQuickWebEngineProfile_ChildEvent_Callback = void (*)(QQuickWebEngineProfile*, QChildEvent*);
    using QQuickWebEngineProfile_CustomEvent_Callback = void (*)(QQuickWebEngineProfile*, QEvent*);
    using QQuickWebEngineProfile_ConnectNotify_Callback = void (*)(QQuickWebEngineProfile*, QMetaMethod*);
    using QQuickWebEngineProfile_DisconnectNotify_Callback = void (*)(QQuickWebEngineProfile*, QMetaMethod*);
    using QQuickWebEngineProfile::isSignalConnected;
    using QQuickWebEngineProfile::receivers;
    using QQuickWebEngineProfile::sender;
    using QQuickWebEngineProfile::senderSignalIndex;

    // Instance callback storage
    QQuickWebEngineProfile_MetaObject_Callback qquickwebengineprofile_metaobject_callback = nullptr;
    QQuickWebEngineProfile_Metacast_Callback qquickwebengineprofile_metacast_callback = nullptr;
    QQuickWebEngineProfile_Metacall_Callback qquickwebengineprofile_metacall_callback = nullptr;
    QQuickWebEngineProfile_Event_Callback qquickwebengineprofile_event_callback = nullptr;
    QQuickWebEngineProfile_EventFilter_Callback qquickwebengineprofile_eventfilter_callback = nullptr;
    QQuickWebEngineProfile_TimerEvent_Callback qquickwebengineprofile_timerevent_callback = nullptr;
    QQuickWebEngineProfile_ChildEvent_Callback qquickwebengineprofile_childevent_callback = nullptr;
    QQuickWebEngineProfile_CustomEvent_Callback qquickwebengineprofile_customevent_callback = nullptr;
    QQuickWebEngineProfile_ConnectNotify_Callback qquickwebengineprofile_connectnotify_callback = nullptr;
    QQuickWebEngineProfile_DisconnectNotify_Callback qquickwebengineprofile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickWebEngineProfile {
        using QQuickWebEngineProfile::childEvent;
        using QQuickWebEngineProfile::connectNotify;
        using QQuickWebEngineProfile::customEvent;
        using QQuickWebEngineProfile::disconnectNotify;
        using QQuickWebEngineProfile::timerEvent;
    };

    VirtualQQuickWebEngineProfile() : QQuickWebEngineProfile() {};
    VirtualQQuickWebEngineProfile(QObject* parent) : QQuickWebEngineProfile(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickwebengineprofile_metaobject_callback) {
            QMetaObject* callback_ret = qquickwebengineprofile_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickWebEngineProfile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickwebengineprofile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickwebengineprofile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWebEngineProfile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickwebengineprofile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickwebengineprofile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickWebEngineProfile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickwebengineprofile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquickwebengineprofile_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWebEngineProfile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickwebengineprofile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickwebengineprofile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWebEngineProfile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickwebengineprofile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickwebengineprofile_timerevent_callback(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickwebengineprofile_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickwebengineprofile_childevent_callback(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickwebengineprofile_customevent_callback) {
            QEvent* cbval1 = event;
            qquickwebengineprofile_customevent_callback(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickwebengineprofile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickwebengineprofile_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickwebengineprofile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickwebengineprofile_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickWebEngineProfile_SuperTimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event);
    friend void QQuickWebEngineProfile_SuperChildEvent(QQuickWebEngineProfile* self, QChildEvent* event);
    friend void QQuickWebEngineProfile_SuperCustomEvent(QQuickWebEngineProfile* self, QEvent* event);
    friend void QQuickWebEngineProfile_SuperConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
    friend void QQuickWebEngineProfile_SuperDisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
};

#endif
