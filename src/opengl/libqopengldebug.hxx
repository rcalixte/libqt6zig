#pragma once
#ifndef OPENGL_LIBQOPENGLDEBUG_HXX
#define OPENGL_LIBQOPENGLDEBUG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLDebugLogger
class VirtualQOpenGLDebugLogger final : public QOpenGLDebugLogger {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLDebugLogger_MetaObject_Callback = QMetaObject* (*)(const QOpenGLDebugLogger*);
    using QOpenGLDebugLogger_Metacast_Callback = void* (*)(QOpenGLDebugLogger*, const char*);
    using QOpenGLDebugLogger_Metacall_Callback = int (*)(QOpenGLDebugLogger*, int, int, void**);
    using QOpenGLDebugLogger_Event_Callback = bool (*)(QOpenGLDebugLogger*, QEvent*);
    using QOpenGLDebugLogger_EventFilter_Callback = bool (*)(QOpenGLDebugLogger*, QObject*, QEvent*);
    using QOpenGLDebugLogger_TimerEvent_Callback = void (*)(QOpenGLDebugLogger*, QTimerEvent*);
    using QOpenGLDebugLogger_ChildEvent_Callback = void (*)(QOpenGLDebugLogger*, QChildEvent*);
    using QOpenGLDebugLogger_CustomEvent_Callback = void (*)(QOpenGLDebugLogger*, QEvent*);
    using QOpenGLDebugLogger_ConnectNotify_Callback = void (*)(QOpenGLDebugLogger*, QMetaMethod*);
    using QOpenGLDebugLogger_DisconnectNotify_Callback = void (*)(QOpenGLDebugLogger*, QMetaMethod*);
    using QOpenGLDebugLogger::isSignalConnected;
    using QOpenGLDebugLogger::receivers;
    using QOpenGLDebugLogger::sender;
    using QOpenGLDebugLogger::senderSignalIndex;

    // Instance callback storage
    QOpenGLDebugLogger_MetaObject_Callback qopengldebuglogger_metaobject_callback = nullptr;
    QOpenGLDebugLogger_Metacast_Callback qopengldebuglogger_metacast_callback = nullptr;
    QOpenGLDebugLogger_Metacall_Callback qopengldebuglogger_metacall_callback = nullptr;
    QOpenGLDebugLogger_Event_Callback qopengldebuglogger_event_callback = nullptr;
    QOpenGLDebugLogger_EventFilter_Callback qopengldebuglogger_eventfilter_callback = nullptr;
    QOpenGLDebugLogger_TimerEvent_Callback qopengldebuglogger_timerevent_callback = nullptr;
    QOpenGLDebugLogger_ChildEvent_Callback qopengldebuglogger_childevent_callback = nullptr;
    QOpenGLDebugLogger_CustomEvent_Callback qopengldebuglogger_customevent_callback = nullptr;
    QOpenGLDebugLogger_ConnectNotify_Callback qopengldebuglogger_connectnotify_callback = nullptr;
    QOpenGLDebugLogger_DisconnectNotify_Callback qopengldebuglogger_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLDebugLogger {
        using QOpenGLDebugLogger::childEvent;
        using QOpenGLDebugLogger::connectNotify;
        using QOpenGLDebugLogger::customEvent;
        using QOpenGLDebugLogger::disconnectNotify;
        using QOpenGLDebugLogger::timerEvent;
    };

    VirtualQOpenGLDebugLogger() : QOpenGLDebugLogger() {};
    VirtualQOpenGLDebugLogger(QObject* parent) : QOpenGLDebugLogger(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopengldebuglogger_metaobject_callback) {
            QMetaObject* callback_ret = qopengldebuglogger_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLDebugLogger::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopengldebuglogger_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopengldebuglogger_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLDebugLogger::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopengldebuglogger_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopengldebuglogger_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLDebugLogger::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopengldebuglogger_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopengldebuglogger_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLDebugLogger::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopengldebuglogger_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopengldebuglogger_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLDebugLogger::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopengldebuglogger_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopengldebuglogger_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLDebugLogger::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopengldebuglogger_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopengldebuglogger_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLDebugLogger::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopengldebuglogger_customevent_callback) {
            QEvent* cbval1 = event;
            qopengldebuglogger_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLDebugLogger::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopengldebuglogger_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopengldebuglogger_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLDebugLogger::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopengldebuglogger_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopengldebuglogger_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLDebugLogger::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLDebugLogger_SuperTimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event);
    friend void QOpenGLDebugLogger_SuperChildEvent(QOpenGLDebugLogger* self, QChildEvent* event);
    friend void QOpenGLDebugLogger_SuperCustomEvent(QOpenGLDebugLogger* self, QEvent* event);
    friend void QOpenGLDebugLogger_SuperConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
    friend void QOpenGLDebugLogger_SuperDisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
};

#endif
