#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDINPUTCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardInputContext so that we can call protected methods
class VirtualQVirtualKeyboardInputContext final : public QVirtualKeyboardInputContext {

  public:
    // Virtual class boolean flag
    bool isVirtualQVirtualKeyboardInputContext = true;

    // Virtual class public types (including callbacks)
    using QVirtualKeyboardInputContext_MetaObject_Callback = QMetaObject* (*)();
    using QVirtualKeyboardInputContext_Metacast_Callback = void* (*)(QVirtualKeyboardInputContext*, const char*);
    using QVirtualKeyboardInputContext_Metacall_Callback = int (*)(QVirtualKeyboardInputContext*, int, int, void**);
    using QVirtualKeyboardInputContext_Event_Callback = bool (*)(QVirtualKeyboardInputContext*, QEvent*);
    using QVirtualKeyboardInputContext_EventFilter_Callback = bool (*)(QVirtualKeyboardInputContext*, QObject*, QEvent*);
    using QVirtualKeyboardInputContext_TimerEvent_Callback = void (*)(QVirtualKeyboardInputContext*, QTimerEvent*);
    using QVirtualKeyboardInputContext_ChildEvent_Callback = void (*)(QVirtualKeyboardInputContext*, QChildEvent*);
    using QVirtualKeyboardInputContext_CustomEvent_Callback = void (*)(QVirtualKeyboardInputContext*, QEvent*);
    using QVirtualKeyboardInputContext_ConnectNotify_Callback = void (*)(QVirtualKeyboardInputContext*, QMetaMethod*);
    using QVirtualKeyboardInputContext_DisconnectNotify_Callback = void (*)(QVirtualKeyboardInputContext*, QMetaMethod*);
    using QVirtualKeyboardInputContext_Sender_Callback = QObject* (*)();
    using QVirtualKeyboardInputContext_SenderSignalIndex_Callback = int (*)();
    using QVirtualKeyboardInputContext_Receivers_Callback = int (*)(const QVirtualKeyboardInputContext*, const char*);
    using QVirtualKeyboardInputContext_IsSignalConnected_Callback = bool (*)(const QVirtualKeyboardInputContext*, QMetaMethod*);

  protected:
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
    QVirtualKeyboardInputContext_Sender_Callback qvirtualkeyboardinputcontext_sender_callback = nullptr;
    QVirtualKeyboardInputContext_SenderSignalIndex_Callback qvirtualkeyboardinputcontext_sendersignalindex_callback = nullptr;
    QVirtualKeyboardInputContext_Receivers_Callback qvirtualkeyboardinputcontext_receivers_callback = nullptr;
    QVirtualKeyboardInputContext_IsSignalConnected_Callback qvirtualkeyboardinputcontext_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvirtualkeyboardinputcontext_metaobject_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_metacast_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_metacall_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_event_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_eventfilter_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_timerevent_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_childevent_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_customevent_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_connectnotify_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_disconnectnotify_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_sender_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_sendersignalindex_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_receivers_isbase = false;
    mutable bool qvirtualkeyboardinputcontext_issignalconnected_isbase = false;

  public:
    VirtualQVirtualKeyboardInputContext() : QVirtualKeyboardInputContext() {};
    VirtualQVirtualKeyboardInputContext(QObject* parent) : QVirtualKeyboardInputContext(parent) {};

    // Callback setters
    inline void setQVirtualKeyboardInputContext_MetaObject_Callback(QVirtualKeyboardInputContext_MetaObject_Callback cb) { qvirtualkeyboardinputcontext_metaobject_callback = cb; }
    inline void setQVirtualKeyboardInputContext_Metacast_Callback(QVirtualKeyboardInputContext_Metacast_Callback cb) { qvirtualkeyboardinputcontext_metacast_callback = cb; }
    inline void setQVirtualKeyboardInputContext_Metacall_Callback(QVirtualKeyboardInputContext_Metacall_Callback cb) { qvirtualkeyboardinputcontext_metacall_callback = cb; }
    inline void setQVirtualKeyboardInputContext_Event_Callback(QVirtualKeyboardInputContext_Event_Callback cb) { qvirtualkeyboardinputcontext_event_callback = cb; }
    inline void setQVirtualKeyboardInputContext_EventFilter_Callback(QVirtualKeyboardInputContext_EventFilter_Callback cb) { qvirtualkeyboardinputcontext_eventfilter_callback = cb; }
    inline void setQVirtualKeyboardInputContext_TimerEvent_Callback(QVirtualKeyboardInputContext_TimerEvent_Callback cb) { qvirtualkeyboardinputcontext_timerevent_callback = cb; }
    inline void setQVirtualKeyboardInputContext_ChildEvent_Callback(QVirtualKeyboardInputContext_ChildEvent_Callback cb) { qvirtualkeyboardinputcontext_childevent_callback = cb; }
    inline void setQVirtualKeyboardInputContext_CustomEvent_Callback(QVirtualKeyboardInputContext_CustomEvent_Callback cb) { qvirtualkeyboardinputcontext_customevent_callback = cb; }
    inline void setQVirtualKeyboardInputContext_ConnectNotify_Callback(QVirtualKeyboardInputContext_ConnectNotify_Callback cb) { qvirtualkeyboardinputcontext_connectnotify_callback = cb; }
    inline void setQVirtualKeyboardInputContext_DisconnectNotify_Callback(QVirtualKeyboardInputContext_DisconnectNotify_Callback cb) { qvirtualkeyboardinputcontext_disconnectnotify_callback = cb; }
    inline void setQVirtualKeyboardInputContext_Sender_Callback(QVirtualKeyboardInputContext_Sender_Callback cb) { qvirtualkeyboardinputcontext_sender_callback = cb; }
    inline void setQVirtualKeyboardInputContext_SenderSignalIndex_Callback(QVirtualKeyboardInputContext_SenderSignalIndex_Callback cb) { qvirtualkeyboardinputcontext_sendersignalindex_callback = cb; }
    inline void setQVirtualKeyboardInputContext_Receivers_Callback(QVirtualKeyboardInputContext_Receivers_Callback cb) { qvirtualkeyboardinputcontext_receivers_callback = cb; }
    inline void setQVirtualKeyboardInputContext_IsSignalConnected_Callback(QVirtualKeyboardInputContext_IsSignalConnected_Callback cb) { qvirtualkeyboardinputcontext_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVirtualKeyboardInputContext_MetaObject_IsBase(bool value) const { qvirtualkeyboardinputcontext_metaobject_isbase = value; }
    inline void setQVirtualKeyboardInputContext_Metacast_IsBase(bool value) const { qvirtualkeyboardinputcontext_metacast_isbase = value; }
    inline void setQVirtualKeyboardInputContext_Metacall_IsBase(bool value) const { qvirtualkeyboardinputcontext_metacall_isbase = value; }
    inline void setQVirtualKeyboardInputContext_Event_IsBase(bool value) const { qvirtualkeyboardinputcontext_event_isbase = value; }
    inline void setQVirtualKeyboardInputContext_EventFilter_IsBase(bool value) const { qvirtualkeyboardinputcontext_eventfilter_isbase = value; }
    inline void setQVirtualKeyboardInputContext_TimerEvent_IsBase(bool value) const { qvirtualkeyboardinputcontext_timerevent_isbase = value; }
    inline void setQVirtualKeyboardInputContext_ChildEvent_IsBase(bool value) const { qvirtualkeyboardinputcontext_childevent_isbase = value; }
    inline void setQVirtualKeyboardInputContext_CustomEvent_IsBase(bool value) const { qvirtualkeyboardinputcontext_customevent_isbase = value; }
    inline void setQVirtualKeyboardInputContext_ConnectNotify_IsBase(bool value) const { qvirtualkeyboardinputcontext_connectnotify_isbase = value; }
    inline void setQVirtualKeyboardInputContext_DisconnectNotify_IsBase(bool value) const { qvirtualkeyboardinputcontext_disconnectnotify_isbase = value; }
    inline void setQVirtualKeyboardInputContext_Sender_IsBase(bool value) const { qvirtualkeyboardinputcontext_sender_isbase = value; }
    inline void setQVirtualKeyboardInputContext_SenderSignalIndex_IsBase(bool value) const { qvirtualkeyboardinputcontext_sendersignalindex_isbase = value; }
    inline void setQVirtualKeyboardInputContext_Receivers_IsBase(bool value) const { qvirtualkeyboardinputcontext_receivers_isbase = value; }
    inline void setQVirtualKeyboardInputContext_IsSignalConnected_IsBase(bool value) const { qvirtualkeyboardinputcontext_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardinputcontext_metaobject_isbase) {
            qvirtualkeyboardinputcontext_metaobject_isbase = false;
            return QVirtualKeyboardInputContext::metaObject();
        }
        auto metaobject_cb = qvirtualkeyboardinputcontext_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardinputcontext_metacast_isbase) {
            qvirtualkeyboardinputcontext_metacast_isbase = false;
            return QVirtualKeyboardInputContext::qt_metacast(param1);
        }
        auto metacast_cb = qvirtualkeyboardinputcontext_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardinputcontext_metacall_isbase) {
            qvirtualkeyboardinputcontext_metacall_isbase = false;
            return QVirtualKeyboardInputContext::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvirtualkeyboardinputcontext_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardInputContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardinputcontext_event_isbase) {
            qvirtualkeyboardinputcontext_event_isbase = false;
            return QVirtualKeyboardInputContext::event(event);
        }
        auto event_cb = qvirtualkeyboardinputcontext_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardinputcontext_eventfilter_isbase) {
            qvirtualkeyboardinputcontext_eventfilter_isbase = false;
            return QVirtualKeyboardInputContext::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvirtualkeyboardinputcontext_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardinputcontext_timerevent_isbase) {
            qvirtualkeyboardinputcontext_timerevent_isbase = false;
            QVirtualKeyboardInputContext::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvirtualkeyboardinputcontext_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardinputcontext_childevent_isbase) {
            qvirtualkeyboardinputcontext_childevent_isbase = false;
            QVirtualKeyboardInputContext::childEvent(event);
            return;
        }
        auto childevent_cb = qvirtualkeyboardinputcontext_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardinputcontext_customevent_isbase) {
            qvirtualkeyboardinputcontext_customevent_isbase = false;
            QVirtualKeyboardInputContext::customEvent(event);
            return;
        }
        auto customevent_cb = qvirtualkeyboardinputcontext_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardinputcontext_connectnotify_isbase) {
            qvirtualkeyboardinputcontext_connectnotify_isbase = false;
            QVirtualKeyboardInputContext::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvirtualkeyboardinputcontext_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardinputcontext_disconnectnotify_isbase) {
            qvirtualkeyboardinputcontext_disconnectnotify_isbase = false;
            QVirtualKeyboardInputContext::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvirtualkeyboardinputcontext_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardInputContext::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvirtualkeyboardinputcontext_sender_isbase) {
            qvirtualkeyboardinputcontext_sender_isbase = false;
            return QVirtualKeyboardInputContext::sender();
        }
        auto sender_cb = qvirtualkeyboardinputcontext_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvirtualkeyboardinputcontext_sendersignalindex_isbase) {
            qvirtualkeyboardinputcontext_sendersignalindex_isbase = false;
            return QVirtualKeyboardInputContext::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvirtualkeyboardinputcontext_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardInputContext::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvirtualkeyboardinputcontext_receivers_isbase) {
            qvirtualkeyboardinputcontext_receivers_isbase = false;
            return QVirtualKeyboardInputContext::receivers(signal);
        }
        auto receivers_cb = qvirtualkeyboardinputcontext_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardInputContext::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvirtualkeyboardinputcontext_issignalconnected_isbase) {
            qvirtualkeyboardinputcontext_issignalconnected_isbase = false;
            return QVirtualKeyboardInputContext::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvirtualkeyboardinputcontext_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardInputContext::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardInputContext_TimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event);
    friend void QVirtualKeyboardInputContext_SuperTimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event);
    friend void QVirtualKeyboardInputContext_ChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event);
    friend void QVirtualKeyboardInputContext_SuperChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event);
    friend void QVirtualKeyboardInputContext_CustomEvent(QVirtualKeyboardInputContext* self, QEvent* event);
    friend void QVirtualKeyboardInputContext_SuperCustomEvent(QVirtualKeyboardInputContext* self, QEvent* event);
    friend void QVirtualKeyboardInputContext_ConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardInputContext_SuperConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardInputContext_DisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardInputContext_SuperDisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
    friend QObject* QVirtualKeyboardInputContext_Sender(const QVirtualKeyboardInputContext* self);
    friend QObject* QVirtualKeyboardInputContext_SuperSender(const QVirtualKeyboardInputContext* self);
    friend int QVirtualKeyboardInputContext_SenderSignalIndex(const QVirtualKeyboardInputContext* self);
    friend int QVirtualKeyboardInputContext_SuperSenderSignalIndex(const QVirtualKeyboardInputContext* self);
    friend int QVirtualKeyboardInputContext_Receivers(const QVirtualKeyboardInputContext* self, const char* signal);
    friend int QVirtualKeyboardInputContext_SuperReceivers(const QVirtualKeyboardInputContext* self, const char* signal);
    friend bool QVirtualKeyboardInputContext_IsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
    friend bool QVirtualKeyboardInputContext_SuperIsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal);
};

#endif
