#pragma once
#ifndef LIBQGUIAPPLICATION_HXX
#define LIBQGUIAPPLICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGuiApplication
class VirtualQGuiApplication final : public QGuiApplication {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGuiApplication_MetaObject_Callback = QMetaObject* (*)(const QGuiApplication*);
    using QGuiApplication_Metacast_Callback = void* (*)(QGuiApplication*, const char*);
    using QGuiApplication_Metacall_Callback = int (*)(QGuiApplication*, int, int, void**);
    using QGuiApplication_Notify_Callback = bool (*)(QGuiApplication*, QObject*, QEvent*);
    using QGuiApplication_Event_Callback = bool (*)(QGuiApplication*, QEvent*);
    using QGuiApplication_EventFilter_Callback = bool (*)(QGuiApplication*, QObject*, QEvent*);
    using QGuiApplication_TimerEvent_Callback = void (*)(QGuiApplication*, QTimerEvent*);
    using QGuiApplication_ChildEvent_Callback = void (*)(QGuiApplication*, QChildEvent*);
    using QGuiApplication_CustomEvent_Callback = void (*)(QGuiApplication*, QEvent*);
    using QGuiApplication_ConnectNotify_Callback = void (*)(QGuiApplication*, QMetaMethod*);
    using QGuiApplication_DisconnectNotify_Callback = void (*)(QGuiApplication*, QMetaMethod*);
    using QGuiApplication::isSignalConnected;
    using QGuiApplication::receivers;
    using QGuiApplication::resolveInterface;
    using QGuiApplication::sender;
    using QGuiApplication::senderSignalIndex;

    // Instance callback storage
    QGuiApplication_MetaObject_Callback qguiapplication_metaobject_callback = nullptr;
    QGuiApplication_Metacast_Callback qguiapplication_metacast_callback = nullptr;
    QGuiApplication_Metacall_Callback qguiapplication_metacall_callback = nullptr;
    QGuiApplication_Notify_Callback qguiapplication_notify_callback = nullptr;
    QGuiApplication_Event_Callback qguiapplication_event_callback = nullptr;
    QGuiApplication_EventFilter_Callback qguiapplication_eventfilter_callback = nullptr;
    QGuiApplication_TimerEvent_Callback qguiapplication_timerevent_callback = nullptr;
    QGuiApplication_ChildEvent_Callback qguiapplication_childevent_callback = nullptr;
    QGuiApplication_CustomEvent_Callback qguiapplication_customevent_callback = nullptr;
    QGuiApplication_ConnectNotify_Callback qguiapplication_connectnotify_callback = nullptr;
    QGuiApplication_DisconnectNotify_Callback qguiapplication_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGuiApplication {
        using QGuiApplication::childEvent;
        using QGuiApplication::connectNotify;
        using QGuiApplication::customEvent;
        using QGuiApplication::disconnectNotify;
        using QGuiApplication::event;
        using QGuiApplication::timerEvent;
    };

    VirtualQGuiApplication(int& argc, char** argv) : QGuiApplication(argc, argv) {};
    VirtualQGuiApplication(int& argc, char** argv, int param3) : QGuiApplication(argc, argv, param3) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qguiapplication_metaobject_callback) {
            QMetaObject* callback_ret = qguiapplication_metaobject_callback(this);
            return callback_ret;
        }
        return QGuiApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qguiapplication_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qguiapplication_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGuiApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qguiapplication_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qguiapplication_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGuiApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qguiapplication_notify_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qguiapplication_notify_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGuiApplication::notify(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qguiapplication_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qguiapplication_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGuiApplication::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qguiapplication_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qguiapplication_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGuiApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qguiapplication_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qguiapplication_timerevent_callback(this, cbval1);
            return;
        }
        QGuiApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qguiapplication_childevent_callback) {
            QChildEvent* cbval1 = event;
            qguiapplication_childevent_callback(this, cbval1);
            return;
        }
        QGuiApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qguiapplication_customevent_callback) {
            QEvent* cbval1 = event;
            qguiapplication_customevent_callback(this, cbval1);
            return;
        }
        QGuiApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qguiapplication_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qguiapplication_connectnotify_callback(this, cbval1);
            return;
        }
        QGuiApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qguiapplication_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qguiapplication_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGuiApplication::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QGuiApplication_SuperEvent(QGuiApplication* self, QEvent* param1);
    friend void QGuiApplication_SuperTimerEvent(QGuiApplication* self, QTimerEvent* event);
    friend void QGuiApplication_SuperChildEvent(QGuiApplication* self, QChildEvent* event);
    friend void QGuiApplication_SuperCustomEvent(QGuiApplication* self, QEvent* event);
    friend void QGuiApplication_SuperConnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_SuperDisconnectNotify(QGuiApplication* self, const QMetaMethod* signal);
};

#endif
