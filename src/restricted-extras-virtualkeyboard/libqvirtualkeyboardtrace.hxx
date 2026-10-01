#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardTrace
class VirtualQVirtualKeyboardTrace final : public QVirtualKeyboardTrace {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVirtualKeyboardTrace_MetaObject_Callback = QMetaObject* (*)(const QVirtualKeyboardTrace*);
    using QVirtualKeyboardTrace_Metacast_Callback = void* (*)(QVirtualKeyboardTrace*, const char*);
    using QVirtualKeyboardTrace_Metacall_Callback = int (*)(QVirtualKeyboardTrace*, int, int, void**);
    using QVirtualKeyboardTrace_TimerEvent_Callback = void (*)(QVirtualKeyboardTrace*, QTimerEvent*);
    using QVirtualKeyboardTrace_Event_Callback = bool (*)(QVirtualKeyboardTrace*, QEvent*);
    using QVirtualKeyboardTrace_EventFilter_Callback = bool (*)(QVirtualKeyboardTrace*, QObject*, QEvent*);
    using QVirtualKeyboardTrace_ChildEvent_Callback = void (*)(QVirtualKeyboardTrace*, QChildEvent*);
    using QVirtualKeyboardTrace_CustomEvent_Callback = void (*)(QVirtualKeyboardTrace*, QEvent*);
    using QVirtualKeyboardTrace_ConnectNotify_Callback = void (*)(QVirtualKeyboardTrace*, QMetaMethod*);
    using QVirtualKeyboardTrace_DisconnectNotify_Callback = void (*)(QVirtualKeyboardTrace*, QMetaMethod*);
    using QVirtualKeyboardTrace::isSignalConnected;
    using QVirtualKeyboardTrace::receivers;
    using QVirtualKeyboardTrace::sender;
    using QVirtualKeyboardTrace::senderSignalIndex;

    // Instance callback storage
    QVirtualKeyboardTrace_MetaObject_Callback qvirtualkeyboardtrace_metaobject_callback = nullptr;
    QVirtualKeyboardTrace_Metacast_Callback qvirtualkeyboardtrace_metacast_callback = nullptr;
    QVirtualKeyboardTrace_Metacall_Callback qvirtualkeyboardtrace_metacall_callback = nullptr;
    QVirtualKeyboardTrace_TimerEvent_Callback qvirtualkeyboardtrace_timerevent_callback = nullptr;
    QVirtualKeyboardTrace_Event_Callback qvirtualkeyboardtrace_event_callback = nullptr;
    QVirtualKeyboardTrace_EventFilter_Callback qvirtualkeyboardtrace_eventfilter_callback = nullptr;
    QVirtualKeyboardTrace_ChildEvent_Callback qvirtualkeyboardtrace_childevent_callback = nullptr;
    QVirtualKeyboardTrace_CustomEvent_Callback qvirtualkeyboardtrace_customevent_callback = nullptr;
    QVirtualKeyboardTrace_ConnectNotify_Callback qvirtualkeyboardtrace_connectnotify_callback = nullptr;
    QVirtualKeyboardTrace_DisconnectNotify_Callback qvirtualkeyboardtrace_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVirtualKeyboardTrace {
        using QVirtualKeyboardTrace::childEvent;
        using QVirtualKeyboardTrace::connectNotify;
        using QVirtualKeyboardTrace::customEvent;
        using QVirtualKeyboardTrace::disconnectNotify;
        using QVirtualKeyboardTrace::timerEvent;
    };

    VirtualQVirtualKeyboardTrace() : QVirtualKeyboardTrace() {};
    VirtualQVirtualKeyboardTrace(QObject* parent) : QVirtualKeyboardTrace(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardtrace_metaobject_callback) {
            QMetaObject* callback_ret = qvirtualkeyboardtrace_metaobject_callback(this);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardtrace_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvirtualkeyboardtrace_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardtrace_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvirtualkeyboardtrace_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardTrace::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardtrace_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvirtualkeyboardtrace_timerevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardtrace_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvirtualkeyboardtrace_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardtrace_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvirtualkeyboardtrace_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardtrace_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvirtualkeyboardtrace_childevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardtrace_customevent_callback) {
            QEvent* cbval1 = event;
            qvirtualkeyboardtrace_customevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardtrace_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardtrace_connectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardtrace_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardtrace_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardTrace_SuperTimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event);
    friend void QVirtualKeyboardTrace_SuperChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event);
    friend void QVirtualKeyboardTrace_SuperCustomEvent(QVirtualKeyboardTrace* self, QEvent* event);
    friend void QVirtualKeyboardTrace_SuperConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardTrace_SuperDisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
};

#endif
