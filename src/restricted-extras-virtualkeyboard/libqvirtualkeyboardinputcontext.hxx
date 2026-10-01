#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardInputContext
class VirtualQVirtualKeyboardInputContext final : public QVirtualKeyboardInputContext {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVirtualKeyboardInputContext_MetaObject_Callback = QMetaObject* (*)(const QVirtualKeyboardInputContext*);
    using QVirtualKeyboardInputContext_Metacast_Callback = void* (*)(QVirtualKeyboardInputContext*, const char*);
    using QVirtualKeyboardInputContext_Metacall_Callback = int (*)(QVirtualKeyboardInputContext*, int, int, void**);
    using QVirtualKeyboardInputContext_Event_Callback = bool (*)(QVirtualKeyboardInputContext*, QEvent*);
    using QVirtualKeyboardInputContext_EventFilter_Callback = bool (*)(QVirtualKeyboardInputContext*, QObject*, QEvent*);
    using QVirtualKeyboardInputContext_TimerEvent_Callback = void (*)(QVirtualKeyboardInputContext*, QTimerEvent*);
    using QVirtualKeyboardInputContext_ChildEvent_Callback = void (*)(QVirtualKeyboardInputContext*, QChildEvent*);
    using QVirtualKeyboardInputContext_CustomEvent_Callback = void (*)(QVirtualKeyboardInputContext*, QEvent*);
    using QVirtualKeyboardInputContext_ConnectNotify_Callback = void (*)(QVirtualKeyboardInputContext*, QMetaMethod*);
    using QVirtualKeyboardInputContext_DisconnectNotify_Callback = void (*)(QVirtualKeyboardInputContext*, QMetaMethod*);
    using QVirtualKeyboardInputContext::isSignalConnected;
    using QVirtualKeyboardInputContext::receivers;
    using QVirtualKeyboardInputContext::sender;
    using QVirtualKeyboardInputContext::senderSignalIndex;

    // Instance callback storage
    QVirtualKeyboardInputContext_MetaObject_Callback qvirtualkeyboardinputcontext_metaobject_callback = nullptr;
    QVirtualKeyboardInputContext_Metacast_Callback qvirtualkeyboardinputcontext_metacast_callback = nullptr;
    QVirtualKeyboardInputContext_Metacall_Callback qvirtualkeyboardinputcontext_metacall_callback = nullptr;
    QVirtualKeyboardInputContext_Event_Callback qvirtualkeyboardinputcontext_event_callback = nullptr;
    QVirtualKeyboardInputContext_EventFilter_Callback qvirtualkeyboardinputcontext_eventfilter_callback = nullptr;
    QVirtualKeyboardInputContext_TimerEvent_Callback qvirtualkeyboardinputcontext_timerevent_callback = nullptr;
    QVirtualKeyboardInputContext_ChildEvent_Callback qvirtualkeyboardinputcontext_childevent_callback = nullptr;
    QVirtualKeyboardInputContext_CustomEvent_Callback qvirtualkeyboardinputcontext_customevent_callback = nullptr;
    QVirtualKeyboardInputContext_ConnectNotify_Callback qvirtualkeyboardinputcontext_connectnotify_callback = nullptr;
    QVirtualKeyboardInputContext_DisconnectNotify_Callback qvirtualkeyboardinputcontext_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVirtualKeyboardInputContext {
        using QVirtualKeyboardInputContext::childEvent;
        using QVirtualKeyboardInputContext::connectNotify;
        using QVirtualKeyboardInputContext::customEvent;
        using QVirtualKeyboardInputContext::disconnectNotify;
        using QVirtualKeyboardInputContext::timerEvent;
    };

    VirtualQVirtualKeyboardInputContext() : QVirtualKeyboardInputContext() {};
    VirtualQVirtualKeyboardInputContext(QObject* parent) : QVirtualKeyboardInputContext(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardinputcontext_metaobject_callback) {
            QMetaObject* callback_ret = qvirtualkeyboardinputcontext_metaobject_callback(this);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardinputcontext_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvirtualkeyboardinputcontext_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardinputcontext_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvirtualkeyboardinputcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardInputContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardinputcontext_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvirtualkeyboardinputcontext_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardinputcontext_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvirtualkeyboardinputcontext_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardinputcontext_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvirtualkeyboardinputcontext_timerevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardinputcontext_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvirtualkeyboardinputcontext_childevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardinputcontext_customevent_callback) {
            QEvent* cbval1 = event;
            qvirtualkeyboardinputcontext_customevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardinputcontext_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardinputcontext_connectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardinputcontext_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardinputcontext_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardInputContext_SuperTimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event);
    friend void QVirtualKeyboardInputContext_SuperChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event);
    friend void QVirtualKeyboardInputContext_SuperCustomEvent(QVirtualKeyboardInputContext* self, QEvent* event);
    friend void QVirtualKeyboardInputContext_SuperConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardInputContext_SuperDisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
};

#endif
