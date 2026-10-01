#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardObserver
class VirtualQVirtualKeyboardObserver final : public QVirtualKeyboardObserver {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVirtualKeyboardObserver_MetaObject_Callback = QMetaObject* (*)(const QVirtualKeyboardObserver*);
    using QVirtualKeyboardObserver_Metacast_Callback = void* (*)(QVirtualKeyboardObserver*, const char*);
    using QVirtualKeyboardObserver_Metacall_Callback = int (*)(QVirtualKeyboardObserver*, int, int, void**);
    using QVirtualKeyboardObserver_Event_Callback = bool (*)(QVirtualKeyboardObserver*, QEvent*);
    using QVirtualKeyboardObserver_EventFilter_Callback = bool (*)(QVirtualKeyboardObserver*, QObject*, QEvent*);
    using QVirtualKeyboardObserver_TimerEvent_Callback = void (*)(QVirtualKeyboardObserver*, QTimerEvent*);
    using QVirtualKeyboardObserver_ChildEvent_Callback = void (*)(QVirtualKeyboardObserver*, QChildEvent*);
    using QVirtualKeyboardObserver_CustomEvent_Callback = void (*)(QVirtualKeyboardObserver*, QEvent*);
    using QVirtualKeyboardObserver_ConnectNotify_Callback = void (*)(QVirtualKeyboardObserver*, QMetaMethod*);
    using QVirtualKeyboardObserver_DisconnectNotify_Callback = void (*)(QVirtualKeyboardObserver*, QMetaMethod*);
    using QVirtualKeyboardObserver::isSignalConnected;
    using QVirtualKeyboardObserver::receivers;
    using QVirtualKeyboardObserver::sender;
    using QVirtualKeyboardObserver::senderSignalIndex;

    // Instance callback storage
    QVirtualKeyboardObserver_MetaObject_Callback qvirtualkeyboardobserver_metaobject_callback = nullptr;
    QVirtualKeyboardObserver_Metacast_Callback qvirtualkeyboardobserver_metacast_callback = nullptr;
    QVirtualKeyboardObserver_Metacall_Callback qvirtualkeyboardobserver_metacall_callback = nullptr;
    QVirtualKeyboardObserver_Event_Callback qvirtualkeyboardobserver_event_callback = nullptr;
    QVirtualKeyboardObserver_EventFilter_Callback qvirtualkeyboardobserver_eventfilter_callback = nullptr;
    QVirtualKeyboardObserver_TimerEvent_Callback qvirtualkeyboardobserver_timerevent_callback = nullptr;
    QVirtualKeyboardObserver_ChildEvent_Callback qvirtualkeyboardobserver_childevent_callback = nullptr;
    QVirtualKeyboardObserver_CustomEvent_Callback qvirtualkeyboardobserver_customevent_callback = nullptr;
    QVirtualKeyboardObserver_ConnectNotify_Callback qvirtualkeyboardobserver_connectnotify_callback = nullptr;
    QVirtualKeyboardObserver_DisconnectNotify_Callback qvirtualkeyboardobserver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVirtualKeyboardObserver {
        using QVirtualKeyboardObserver::childEvent;
        using QVirtualKeyboardObserver::connectNotify;
        using QVirtualKeyboardObserver::customEvent;
        using QVirtualKeyboardObserver::disconnectNotify;
        using QVirtualKeyboardObserver::timerEvent;
    };

    VirtualQVirtualKeyboardObserver() : QVirtualKeyboardObserver() {};
    VirtualQVirtualKeyboardObserver(QObject* parent) : QVirtualKeyboardObserver(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardobserver_metaobject_callback) {
            QMetaObject* callback_ret = qvirtualkeyboardobserver_metaobject_callback(this);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardobserver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvirtualkeyboardobserver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardobserver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvirtualkeyboardobserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardObserver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardobserver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvirtualkeyboardobserver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardobserver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvirtualkeyboardobserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardobserver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvirtualkeyboardobserver_timerevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardobserver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvirtualkeyboardobserver_childevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardobserver_customevent_callback) {
            QEvent* cbval1 = event;
            qvirtualkeyboardobserver_customevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardobserver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardobserver_connectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardobserver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardobserver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardObserver_SuperTimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event);
    friend void QVirtualKeyboardObserver_SuperChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event);
    friend void QVirtualKeyboardObserver_SuperCustomEvent(QVirtualKeyboardObserver* self, QEvent* event);
    friend void QVirtualKeyboardObserver_SuperConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardObserver_SuperDisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
};

#endif
