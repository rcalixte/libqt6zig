#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEPROFILE_HXX
#define WEBENGINE_LIBQWEBENGINEPROFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineProfile
class VirtualQWebEngineProfile final : public QWebEngineProfile {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebEngineProfile_MetaObject_Callback = QMetaObject* (*)(const QWebEngineProfile*);
    using QWebEngineProfile_Metacast_Callback = void* (*)(QWebEngineProfile*, const char*);
    using QWebEngineProfile_Metacall_Callback = int (*)(QWebEngineProfile*, int, int, void**);
    using QWebEngineProfile_Event_Callback = bool (*)(QWebEngineProfile*, QEvent*);
    using QWebEngineProfile_EventFilter_Callback = bool (*)(QWebEngineProfile*, QObject*, QEvent*);
    using QWebEngineProfile_TimerEvent_Callback = void (*)(QWebEngineProfile*, QTimerEvent*);
    using QWebEngineProfile_ChildEvent_Callback = void (*)(QWebEngineProfile*, QChildEvent*);
    using QWebEngineProfile_CustomEvent_Callback = void (*)(QWebEngineProfile*, QEvent*);
    using QWebEngineProfile_ConnectNotify_Callback = void (*)(QWebEngineProfile*, QMetaMethod*);
    using QWebEngineProfile_DisconnectNotify_Callback = void (*)(QWebEngineProfile*, QMetaMethod*);
    using QWebEngineProfile::isSignalConnected;
    using QWebEngineProfile::receivers;
    using QWebEngineProfile::sender;
    using QWebEngineProfile::senderSignalIndex;

    // Instance callback storage
    QWebEngineProfile_MetaObject_Callback qwebengineprofile_metaobject_callback = nullptr;
    QWebEngineProfile_Metacast_Callback qwebengineprofile_metacast_callback = nullptr;
    QWebEngineProfile_Metacall_Callback qwebengineprofile_metacall_callback = nullptr;
    QWebEngineProfile_Event_Callback qwebengineprofile_event_callback = nullptr;
    QWebEngineProfile_EventFilter_Callback qwebengineprofile_eventfilter_callback = nullptr;
    QWebEngineProfile_TimerEvent_Callback qwebengineprofile_timerevent_callback = nullptr;
    QWebEngineProfile_ChildEvent_Callback qwebengineprofile_childevent_callback = nullptr;
    QWebEngineProfile_CustomEvent_Callback qwebengineprofile_customevent_callback = nullptr;
    QWebEngineProfile_ConnectNotify_Callback qwebengineprofile_connectnotify_callback = nullptr;
    QWebEngineProfile_DisconnectNotify_Callback qwebengineprofile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebEngineProfile {
        using QWebEngineProfile::childEvent;
        using QWebEngineProfile::connectNotify;
        using QWebEngineProfile::customEvent;
        using QWebEngineProfile::disconnectNotify;
        using QWebEngineProfile::timerEvent;
    };

    VirtualQWebEngineProfile() : QWebEngineProfile() {};
    VirtualQWebEngineProfile(const QString& name) : QWebEngineProfile(name) {};
    VirtualQWebEngineProfile(QObject* parent) : QWebEngineProfile(parent) {};
    VirtualQWebEngineProfile(const QString& name, QObject* parent) : QWebEngineProfile(name, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineprofile_metaobject_callback) {
            QMetaObject* callback_ret = qwebengineprofile_metaobject_callback(this);
            return callback_ret;
        }
        return QWebEngineProfile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineprofile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebengineprofile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineProfile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineprofile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebengineprofile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineProfile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineprofile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebengineprofile_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineProfile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineprofile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebengineprofile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineProfile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineprofile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebengineprofile_timerevent_callback(this, cbval1);
            return;
        }
        QWebEngineProfile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineprofile_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebengineprofile_childevent_callback(this, cbval1);
            return;
        }
        QWebEngineProfile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineprofile_customevent_callback) {
            QEvent* cbval1 = event;
            qwebengineprofile_customevent_callback(this, cbval1);
            return;
        }
        QWebEngineProfile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineprofile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineprofile_connectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineProfile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineprofile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineprofile_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineProfile::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebEngineProfile_SuperTimerEvent(QWebEngineProfile* self, QTimerEvent* event);
    friend void QWebEngineProfile_SuperChildEvent(QWebEngineProfile* self, QChildEvent* event);
    friend void QWebEngineProfile_SuperCustomEvent(QWebEngineProfile* self, QEvent* event);
    friend void QWebEngineProfile_SuperConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
    friend void QWebEngineProfile_SuperDisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
};

#endif
