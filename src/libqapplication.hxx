#pragma once
#ifndef LIBQAPPLICATION_HXX
#define LIBQAPPLICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QApplication
class VirtualQApplication final : public QApplication {
  public:
    // Virtual class public types (including callbacks and access types)
    using QApplication_MetaObject_Callback = QMetaObject* (*)(const QApplication*);
    using QApplication_Metacast_Callback = void* (*)(QApplication*, const char*);
    using QApplication_Metacall_Callback = int (*)(QApplication*, int, int, void**);
    using QApplication_Notify_Callback = bool (*)(QApplication*, QObject*, QEvent*);
    using QApplication_Event_Callback = bool (*)(QApplication*, QEvent*);
    using QApplication_EventFilter_Callback = bool (*)(QApplication*, QObject*, QEvent*);
    using QApplication_TimerEvent_Callback = void (*)(QApplication*, QTimerEvent*);
    using QApplication_ChildEvent_Callback = void (*)(QApplication*, QChildEvent*);
    using QApplication_CustomEvent_Callback = void (*)(QApplication*, QEvent*);
    using QApplication_ConnectNotify_Callback = void (*)(QApplication*, QMetaMethod*);
    using QApplication_DisconnectNotify_Callback = void (*)(QApplication*, QMetaMethod*);
    using QApplication::isSignalConnected;
    using QApplication::receivers;
    using QApplication::resolveInterface;
    using QApplication::sender;
    using QApplication::senderSignalIndex;

    // Instance callback storage
    QApplication_MetaObject_Callback qapplication_metaobject_callback = nullptr;
    QApplication_Metacast_Callback qapplication_metacast_callback = nullptr;
    QApplication_Metacall_Callback qapplication_metacall_callback = nullptr;
    QApplication_Notify_Callback qapplication_notify_callback = nullptr;
    QApplication_Event_Callback qapplication_event_callback = nullptr;
    QApplication_EventFilter_Callback qapplication_eventfilter_callback = nullptr;
    QApplication_TimerEvent_Callback qapplication_timerevent_callback = nullptr;
    QApplication_ChildEvent_Callback qapplication_childevent_callback = nullptr;
    QApplication_CustomEvent_Callback qapplication_customevent_callback = nullptr;
    QApplication_ConnectNotify_Callback qapplication_connectnotify_callback = nullptr;
    QApplication_DisconnectNotify_Callback qapplication_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QApplication {
        using QApplication::childEvent;
        using QApplication::connectNotify;
        using QApplication::customEvent;
        using QApplication::disconnectNotify;
        using QApplication::event;
        using QApplication::timerEvent;
    };

    VirtualQApplication(int& argc, char** argv) : QApplication(argc, argv) {};
    VirtualQApplication(int& argc, char** argv, int param3) : QApplication(argc, argv, param3) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qapplication_metaobject_callback) {
            QMetaObject* callback_ret = qapplication_metaobject_callback(this);
            return callback_ret;
        }
        return QApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qapplication_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qapplication_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qapplication_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qapplication_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qapplication_notify_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qapplication_notify_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QApplication::notify(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qapplication_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qapplication_event_callback(this, cbval1);
            return callback_ret;
        }
        return QApplication::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qapplication_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qapplication_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qapplication_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qapplication_timerevent_callback(this, cbval1);
            return;
        }
        QApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qapplication_childevent_callback) {
            QChildEvent* cbval1 = event;
            qapplication_childevent_callback(this, cbval1);
            return;
        }
        QApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qapplication_customevent_callback) {
            QEvent* cbval1 = event;
            qapplication_customevent_callback(this, cbval1);
            return;
        }
        QApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qapplication_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qapplication_connectnotify_callback(this, cbval1);
            return;
        }
        QApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qapplication_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qapplication_disconnectnotify_callback(this, cbval1);
            return;
        }
        QApplication::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QApplication_SuperEvent(QApplication* self, QEvent* param1);
    friend void QApplication_SuperTimerEvent(QApplication* self, QTimerEvent* event);
    friend void QApplication_SuperChildEvent(QApplication* self, QChildEvent* event);
    friend void QApplication_SuperCustomEvent(QApplication* self, QEvent* event);
    friend void QApplication_SuperConnectNotify(QApplication* self, const QMetaMethod* signal);
    friend void QApplication_SuperDisconnectNotify(QApplication* self, const QMetaMethod* signal);
};

#endif
