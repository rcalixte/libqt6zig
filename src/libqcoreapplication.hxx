#pragma once
#ifndef LIBQCOREAPPLICATION_HXX
#define LIBQCOREAPPLICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCoreApplication
class VirtualQCoreApplication final : public QCoreApplication {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCoreApplication_MetaObject_Callback = QMetaObject* (*)(const QCoreApplication*);
    using QCoreApplication_Metacast_Callback = void* (*)(QCoreApplication*, const char*);
    using QCoreApplication_Metacall_Callback = int (*)(QCoreApplication*, int, int, void**);
    using QCoreApplication_Notify_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
    using QCoreApplication_Event_Callback = bool (*)(QCoreApplication*, QEvent*);
    using QCoreApplication_EventFilter_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
    using QCoreApplication_TimerEvent_Callback = void (*)(QCoreApplication*, QTimerEvent*);
    using QCoreApplication_ChildEvent_Callback = void (*)(QCoreApplication*, QChildEvent*);
    using QCoreApplication_CustomEvent_Callback = void (*)(QCoreApplication*, QEvent*);
    using QCoreApplication_ConnectNotify_Callback = void (*)(QCoreApplication*, QMetaMethod*);
    using QCoreApplication_DisconnectNotify_Callback = void (*)(QCoreApplication*, QMetaMethod*);
    using QCoreApplication::isSignalConnected;
    using QCoreApplication::receivers;
    using QCoreApplication::resolveInterface;
    using QCoreApplication::sender;
    using QCoreApplication::senderSignalIndex;

    // Instance callback storage
    QCoreApplication_MetaObject_Callback qcoreapplication_metaobject_callback = nullptr;
    QCoreApplication_Metacast_Callback qcoreapplication_metacast_callback = nullptr;
    QCoreApplication_Metacall_Callback qcoreapplication_metacall_callback = nullptr;
    QCoreApplication_Notify_Callback qcoreapplication_notify_callback = nullptr;
    QCoreApplication_Event_Callback qcoreapplication_event_callback = nullptr;
    QCoreApplication_EventFilter_Callback qcoreapplication_eventfilter_callback = nullptr;
    QCoreApplication_TimerEvent_Callback qcoreapplication_timerevent_callback = nullptr;
    QCoreApplication_ChildEvent_Callback qcoreapplication_childevent_callback = nullptr;
    QCoreApplication_CustomEvent_Callback qcoreapplication_customevent_callback = nullptr;
    QCoreApplication_ConnectNotify_Callback qcoreapplication_connectnotify_callback = nullptr;
    QCoreApplication_DisconnectNotify_Callback qcoreapplication_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCoreApplication {
        using QCoreApplication::childEvent;
        using QCoreApplication::connectNotify;
        using QCoreApplication::customEvent;
        using QCoreApplication::disconnectNotify;
        using QCoreApplication::event;
        using QCoreApplication::timerEvent;
    };

    VirtualQCoreApplication(int& argc, char** argv) : QCoreApplication(argc, argv) {};
    VirtualQCoreApplication(int& argc, char** argv, int param3) : QCoreApplication(argc, argv, param3) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcoreapplication_metaobject_callback) {
            QMetaObject* callback_ret = qcoreapplication_metaobject_callback(this);
            return callback_ret;
        }
        return QCoreApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcoreapplication_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcoreapplication_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCoreApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcoreapplication_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcoreapplication_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCoreApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qcoreapplication_notify_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qcoreapplication_notify_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCoreApplication::notify(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qcoreapplication_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qcoreapplication_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCoreApplication::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcoreapplication_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcoreapplication_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCoreApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcoreapplication_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcoreapplication_timerevent_callback(this, cbval1);
            return;
        }
        QCoreApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcoreapplication_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcoreapplication_childevent_callback(this, cbval1);
            return;
        }
        QCoreApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcoreapplication_customevent_callback) {
            QEvent* cbval1 = event;
            qcoreapplication_customevent_callback(this, cbval1);
            return;
        }
        QCoreApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcoreapplication_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcoreapplication_connectnotify_callback(this, cbval1);
            return;
        }
        QCoreApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcoreapplication_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcoreapplication_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCoreApplication::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QCoreApplication_SuperEvent(QCoreApplication* self, QEvent* param1);
    friend void QCoreApplication_SuperTimerEvent(QCoreApplication* self, QTimerEvent* event);
    friend void QCoreApplication_SuperChildEvent(QCoreApplication* self, QChildEvent* event);
    friend void QCoreApplication_SuperCustomEvent(QCoreApplication* self, QEvent* event);
    friend void QCoreApplication_SuperConnectNotify(QCoreApplication* self, const QMetaMethod* signal);
    friend void QCoreApplication_SuperDisconnectNotify(QCoreApplication* self, const QMetaMethod* signal);
};

#endif
