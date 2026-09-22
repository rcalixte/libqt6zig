#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardTrace so that we can call protected methods
class VirtualQVirtualKeyboardTrace final : public QVirtualKeyboardTrace {

  public:
    // Virtual class boolean flag
    bool isVirtualQVirtualKeyboardTrace = true;

    // Virtual class public types (including callbacks)
    using QVirtualKeyboardTrace_MetaObject_Callback = QMetaObject* (*)();
    using QVirtualKeyboardTrace_Metacast_Callback = void* (*)(QVirtualKeyboardTrace*, const char*);
    using QVirtualKeyboardTrace_Metacall_Callback = int (*)(QVirtualKeyboardTrace*, int, int, void**);
    using QVirtualKeyboardTrace_TimerEvent_Callback = void (*)(QVirtualKeyboardTrace*, QTimerEvent*);
    using QVirtualKeyboardTrace_Event_Callback = bool (*)(QVirtualKeyboardTrace*, QEvent*);
    using QVirtualKeyboardTrace_EventFilter_Callback = bool (*)(QVirtualKeyboardTrace*, QObject*, QEvent*);
    using QVirtualKeyboardTrace_ChildEvent_Callback = void (*)(QVirtualKeyboardTrace*, QChildEvent*);
    using QVirtualKeyboardTrace_CustomEvent_Callback = void (*)(QVirtualKeyboardTrace*, QEvent*);
    using QVirtualKeyboardTrace_ConnectNotify_Callback = void (*)(QVirtualKeyboardTrace*, QMetaMethod*);
    using QVirtualKeyboardTrace_DisconnectNotify_Callback = void (*)(QVirtualKeyboardTrace*, QMetaMethod*);
    using QVirtualKeyboardTrace_Sender_Callback = QObject* (*)();
    using QVirtualKeyboardTrace_SenderSignalIndex_Callback = int (*)();
    using QVirtualKeyboardTrace_Receivers_Callback = int (*)(const QVirtualKeyboardTrace*, const char*);
    using QVirtualKeyboardTrace_IsSignalConnected_Callback = bool (*)(const QVirtualKeyboardTrace*, QMetaMethod*);

  protected:
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
    QVirtualKeyboardTrace_Sender_Callback qvirtualkeyboardtrace_sender_callback = nullptr;
    QVirtualKeyboardTrace_SenderSignalIndex_Callback qvirtualkeyboardtrace_sendersignalindex_callback = nullptr;
    QVirtualKeyboardTrace_Receivers_Callback qvirtualkeyboardtrace_receivers_callback = nullptr;
    QVirtualKeyboardTrace_IsSignalConnected_Callback qvirtualkeyboardtrace_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvirtualkeyboardtrace_metaobject_isbase = false;
    mutable bool qvirtualkeyboardtrace_metacast_isbase = false;
    mutable bool qvirtualkeyboardtrace_metacall_isbase = false;
    mutable bool qvirtualkeyboardtrace_timerevent_isbase = false;
    mutable bool qvirtualkeyboardtrace_event_isbase = false;
    mutable bool qvirtualkeyboardtrace_eventfilter_isbase = false;
    mutable bool qvirtualkeyboardtrace_childevent_isbase = false;
    mutable bool qvirtualkeyboardtrace_customevent_isbase = false;
    mutable bool qvirtualkeyboardtrace_connectnotify_isbase = false;
    mutable bool qvirtualkeyboardtrace_disconnectnotify_isbase = false;
    mutable bool qvirtualkeyboardtrace_sender_isbase = false;
    mutable bool qvirtualkeyboardtrace_sendersignalindex_isbase = false;
    mutable bool qvirtualkeyboardtrace_receivers_isbase = false;
    mutable bool qvirtualkeyboardtrace_issignalconnected_isbase = false;

  public:
    VirtualQVirtualKeyboardTrace() : QVirtualKeyboardTrace() {};
    VirtualQVirtualKeyboardTrace(QObject* parent) : QVirtualKeyboardTrace(parent) {};

    // Callback setters
    inline void setQVirtualKeyboardTrace_MetaObject_Callback(QVirtualKeyboardTrace_MetaObject_Callback cb) { qvirtualkeyboardtrace_metaobject_callback = cb; }
    inline void setQVirtualKeyboardTrace_Metacast_Callback(QVirtualKeyboardTrace_Metacast_Callback cb) { qvirtualkeyboardtrace_metacast_callback = cb; }
    inline void setQVirtualKeyboardTrace_Metacall_Callback(QVirtualKeyboardTrace_Metacall_Callback cb) { qvirtualkeyboardtrace_metacall_callback = cb; }
    inline void setQVirtualKeyboardTrace_TimerEvent_Callback(QVirtualKeyboardTrace_TimerEvent_Callback cb) { qvirtualkeyboardtrace_timerevent_callback = cb; }
    inline void setQVirtualKeyboardTrace_Event_Callback(QVirtualKeyboardTrace_Event_Callback cb) { qvirtualkeyboardtrace_event_callback = cb; }
    inline void setQVirtualKeyboardTrace_EventFilter_Callback(QVirtualKeyboardTrace_EventFilter_Callback cb) { qvirtualkeyboardtrace_eventfilter_callback = cb; }
    inline void setQVirtualKeyboardTrace_ChildEvent_Callback(QVirtualKeyboardTrace_ChildEvent_Callback cb) { qvirtualkeyboardtrace_childevent_callback = cb; }
    inline void setQVirtualKeyboardTrace_CustomEvent_Callback(QVirtualKeyboardTrace_CustomEvent_Callback cb) { qvirtualkeyboardtrace_customevent_callback = cb; }
    inline void setQVirtualKeyboardTrace_ConnectNotify_Callback(QVirtualKeyboardTrace_ConnectNotify_Callback cb) { qvirtualkeyboardtrace_connectnotify_callback = cb; }
    inline void setQVirtualKeyboardTrace_DisconnectNotify_Callback(QVirtualKeyboardTrace_DisconnectNotify_Callback cb) { qvirtualkeyboardtrace_disconnectnotify_callback = cb; }
    inline void setQVirtualKeyboardTrace_Sender_Callback(QVirtualKeyboardTrace_Sender_Callback cb) { qvirtualkeyboardtrace_sender_callback = cb; }
    inline void setQVirtualKeyboardTrace_SenderSignalIndex_Callback(QVirtualKeyboardTrace_SenderSignalIndex_Callback cb) { qvirtualkeyboardtrace_sendersignalindex_callback = cb; }
    inline void setQVirtualKeyboardTrace_Receivers_Callback(QVirtualKeyboardTrace_Receivers_Callback cb) { qvirtualkeyboardtrace_receivers_callback = cb; }
    inline void setQVirtualKeyboardTrace_IsSignalConnected_Callback(QVirtualKeyboardTrace_IsSignalConnected_Callback cb) { qvirtualkeyboardtrace_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVirtualKeyboardTrace_MetaObject_IsBase(bool value) const { qvirtualkeyboardtrace_metaobject_isbase = value; }
    inline void setQVirtualKeyboardTrace_Metacast_IsBase(bool value) const { qvirtualkeyboardtrace_metacast_isbase = value; }
    inline void setQVirtualKeyboardTrace_Metacall_IsBase(bool value) const { qvirtualkeyboardtrace_metacall_isbase = value; }
    inline void setQVirtualKeyboardTrace_TimerEvent_IsBase(bool value) const { qvirtualkeyboardtrace_timerevent_isbase = value; }
    inline void setQVirtualKeyboardTrace_Event_IsBase(bool value) const { qvirtualkeyboardtrace_event_isbase = value; }
    inline void setQVirtualKeyboardTrace_EventFilter_IsBase(bool value) const { qvirtualkeyboardtrace_eventfilter_isbase = value; }
    inline void setQVirtualKeyboardTrace_ChildEvent_IsBase(bool value) const { qvirtualkeyboardtrace_childevent_isbase = value; }
    inline void setQVirtualKeyboardTrace_CustomEvent_IsBase(bool value) const { qvirtualkeyboardtrace_customevent_isbase = value; }
    inline void setQVirtualKeyboardTrace_ConnectNotify_IsBase(bool value) const { qvirtualkeyboardtrace_connectnotify_isbase = value; }
    inline void setQVirtualKeyboardTrace_DisconnectNotify_IsBase(bool value) const { qvirtualkeyboardtrace_disconnectnotify_isbase = value; }
    inline void setQVirtualKeyboardTrace_Sender_IsBase(bool value) const { qvirtualkeyboardtrace_sender_isbase = value; }
    inline void setQVirtualKeyboardTrace_SenderSignalIndex_IsBase(bool value) const { qvirtualkeyboardtrace_sendersignalindex_isbase = value; }
    inline void setQVirtualKeyboardTrace_Receivers_IsBase(bool value) const { qvirtualkeyboardtrace_receivers_isbase = value; }
    inline void setQVirtualKeyboardTrace_IsSignalConnected_IsBase(bool value) const { qvirtualkeyboardtrace_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardtrace_metaobject_isbase) {
            qvirtualkeyboardtrace_metaobject_isbase = false;
            return QVirtualKeyboardTrace::metaObject();
        }
        auto metaobject_cb = qvirtualkeyboardtrace_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVirtualKeyboardTrace::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardtrace_metacast_isbase) {
            qvirtualkeyboardtrace_metacast_isbase = false;
            return QVirtualKeyboardTrace::qt_metacast(param1);
        }
        auto metacast_cb = qvirtualkeyboardtrace_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardtrace_metacall_isbase) {
            qvirtualkeyboardtrace_metacall_isbase = false;
            return QVirtualKeyboardTrace::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvirtualkeyboardtrace_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardTrace::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardtrace_timerevent_isbase) {
            qvirtualkeyboardtrace_timerevent_isbase = false;
            QVirtualKeyboardTrace::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvirtualkeyboardtrace_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardtrace_event_isbase) {
            qvirtualkeyboardtrace_event_isbase = false;
            return QVirtualKeyboardTrace::event(event);
        }
        auto event_cb = qvirtualkeyboardtrace_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardtrace_eventfilter_isbase) {
            qvirtualkeyboardtrace_eventfilter_isbase = false;
            return QVirtualKeyboardTrace::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvirtualkeyboardtrace_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardtrace_childevent_isbase) {
            qvirtualkeyboardtrace_childevent_isbase = false;
            QVirtualKeyboardTrace::childEvent(event);
            return;
        }
        auto childevent_cb = qvirtualkeyboardtrace_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardtrace_customevent_isbase) {
            qvirtualkeyboardtrace_customevent_isbase = false;
            QVirtualKeyboardTrace::customEvent(event);
            return;
        }
        auto customevent_cb = qvirtualkeyboardtrace_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardtrace_connectnotify_isbase) {
            qvirtualkeyboardtrace_connectnotify_isbase = false;
            QVirtualKeyboardTrace::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvirtualkeyboardtrace_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardtrace_disconnectnotify_isbase) {
            qvirtualkeyboardtrace_disconnectnotify_isbase = false;
            QVirtualKeyboardTrace::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvirtualkeyboardtrace_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardTrace::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvirtualkeyboardtrace_sender_isbase) {
            qvirtualkeyboardtrace_sender_isbase = false;
            return QVirtualKeyboardTrace::sender();
        }
        auto sender_cb = qvirtualkeyboardtrace_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVirtualKeyboardTrace::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvirtualkeyboardtrace_sendersignalindex_isbase) {
            qvirtualkeyboardtrace_sendersignalindex_isbase = false;
            return QVirtualKeyboardTrace::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvirtualkeyboardtrace_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardTrace::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvirtualkeyboardtrace_receivers_isbase) {
            qvirtualkeyboardtrace_receivers_isbase = false;
            return QVirtualKeyboardTrace::receivers(signal);
        }
        auto receivers_cb = qvirtualkeyboardtrace_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardTrace::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvirtualkeyboardtrace_issignalconnected_isbase) {
            qvirtualkeyboardtrace_issignalconnected_isbase = false;
            return QVirtualKeyboardTrace::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvirtualkeyboardtrace_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardTrace::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardTrace_TimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event);
    friend void QVirtualKeyboardTrace_SuperTimerEvent(QVirtualKeyboardTrace* self, QTimerEvent* event);
    friend void QVirtualKeyboardTrace_ChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event);
    friend void QVirtualKeyboardTrace_SuperChildEvent(QVirtualKeyboardTrace* self, QChildEvent* event);
    friend void QVirtualKeyboardTrace_CustomEvent(QVirtualKeyboardTrace* self, QEvent* event);
    friend void QVirtualKeyboardTrace_SuperCustomEvent(QVirtualKeyboardTrace* self, QEvent* event);
    friend void QVirtualKeyboardTrace_ConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardTrace_SuperConnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardTrace_DisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardTrace_SuperDisconnectNotify(QVirtualKeyboardTrace* self, const QMetaMethod* signal);
    friend QObject* QVirtualKeyboardTrace_Sender(const QVirtualKeyboardTrace* self);
    friend QObject* QVirtualKeyboardTrace_SuperSender(const QVirtualKeyboardTrace* self);
    friend int QVirtualKeyboardTrace_SenderSignalIndex(const QVirtualKeyboardTrace* self);
    friend int QVirtualKeyboardTrace_SuperSenderSignalIndex(const QVirtualKeyboardTrace* self);
    friend int QVirtualKeyboardTrace_Receivers(const QVirtualKeyboardTrace* self, const char* signal);
    friend int QVirtualKeyboardTrace_SuperReceivers(const QVirtualKeyboardTrace* self, const char* signal);
    friend bool QVirtualKeyboardTrace_IsSignalConnected(const QVirtualKeyboardTrace* self, const QMetaMethod* signal);
    friend bool QVirtualKeyboardTrace_SuperIsSignalConnected(const QVirtualKeyboardTrace* self, const QMetaMethod* signal);
};

#endif
