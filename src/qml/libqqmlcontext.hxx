#pragma once
#ifndef QML_LIBQQMLCONTEXT_HXX
#define QML_LIBQQMLCONTEXT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlContext so that we can call protected methods
class VirtualQQmlContext final : public QQmlContext {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlContext = true;

    // Virtual class public types (including callbacks)
    using QQmlContext_MetaObject_Callback = QMetaObject* (*)();
    using QQmlContext_Metacast_Callback = void* (*)(QQmlContext*, const char*);
    using QQmlContext_Metacall_Callback = int (*)(QQmlContext*, int, int, void**);
    using QQmlContext_Event_Callback = bool (*)(QQmlContext*, QEvent*);
    using QQmlContext_EventFilter_Callback = bool (*)(QQmlContext*, QObject*, QEvent*);
    using QQmlContext_TimerEvent_Callback = void (*)(QQmlContext*, QTimerEvent*);
    using QQmlContext_ChildEvent_Callback = void (*)(QQmlContext*, QChildEvent*);
    using QQmlContext_CustomEvent_Callback = void (*)(QQmlContext*, QEvent*);
    using QQmlContext_ConnectNotify_Callback = void (*)(QQmlContext*, QMetaMethod*);
    using QQmlContext_DisconnectNotify_Callback = void (*)(QQmlContext*, QMetaMethod*);
    using QQmlContext_Sender_Callback = QObject* (*)();
    using QQmlContext_SenderSignalIndex_Callback = int (*)();
    using QQmlContext_Receivers_Callback = int (*)(const QQmlContext*, const char*);
    using QQmlContext_IsSignalConnected_Callback = bool (*)(const QQmlContext*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlContext_MetaObject_Callback qqmlcontext_metaobject_callback = nullptr;
    QQmlContext_Metacast_Callback qqmlcontext_metacast_callback = nullptr;
    QQmlContext_Metacall_Callback qqmlcontext_metacall_callback = nullptr;
    QQmlContext_Event_Callback qqmlcontext_event_callback = nullptr;
    QQmlContext_EventFilter_Callback qqmlcontext_eventfilter_callback = nullptr;
    QQmlContext_TimerEvent_Callback qqmlcontext_timerevent_callback = nullptr;
    QQmlContext_ChildEvent_Callback qqmlcontext_childevent_callback = nullptr;
    QQmlContext_CustomEvent_Callback qqmlcontext_customevent_callback = nullptr;
    QQmlContext_ConnectNotify_Callback qqmlcontext_connectnotify_callback = nullptr;
    QQmlContext_DisconnectNotify_Callback qqmlcontext_disconnectnotify_callback = nullptr;
    QQmlContext_Sender_Callback qqmlcontext_sender_callback = nullptr;
    QQmlContext_SenderSignalIndex_Callback qqmlcontext_sendersignalindex_callback = nullptr;
    QQmlContext_Receivers_Callback qqmlcontext_receivers_callback = nullptr;
    QQmlContext_IsSignalConnected_Callback qqmlcontext_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlcontext_metaobject_isbase = false;
    mutable bool qqmlcontext_metacast_isbase = false;
    mutable bool qqmlcontext_metacall_isbase = false;
    mutable bool qqmlcontext_event_isbase = false;
    mutable bool qqmlcontext_eventfilter_isbase = false;
    mutable bool qqmlcontext_timerevent_isbase = false;
    mutable bool qqmlcontext_childevent_isbase = false;
    mutable bool qqmlcontext_customevent_isbase = false;
    mutable bool qqmlcontext_connectnotify_isbase = false;
    mutable bool qqmlcontext_disconnectnotify_isbase = false;
    mutable bool qqmlcontext_sender_isbase = false;
    mutable bool qqmlcontext_sendersignalindex_isbase = false;
    mutable bool qqmlcontext_receivers_isbase = false;
    mutable bool qqmlcontext_issignalconnected_isbase = false;

  public:
    VirtualQQmlContext(QQmlEngine* parent) : QQmlContext(parent) {};
    VirtualQQmlContext(QQmlContext* parent) : QQmlContext(parent) {};
    VirtualQQmlContext(QQmlEngine* parent, QObject* objParent) : QQmlContext(parent, objParent) {};
    VirtualQQmlContext(QQmlContext* parent, QObject* objParent) : QQmlContext(parent, objParent) {};

    // Callback setters
    inline void setQQmlContext_MetaObject_Callback(QQmlContext_MetaObject_Callback cb) { qqmlcontext_metaobject_callback = cb; }
    inline void setQQmlContext_Metacast_Callback(QQmlContext_Metacast_Callback cb) { qqmlcontext_metacast_callback = cb; }
    inline void setQQmlContext_Metacall_Callback(QQmlContext_Metacall_Callback cb) { qqmlcontext_metacall_callback = cb; }
    inline void setQQmlContext_Event_Callback(QQmlContext_Event_Callback cb) { qqmlcontext_event_callback = cb; }
    inline void setQQmlContext_EventFilter_Callback(QQmlContext_EventFilter_Callback cb) { qqmlcontext_eventfilter_callback = cb; }
    inline void setQQmlContext_TimerEvent_Callback(QQmlContext_TimerEvent_Callback cb) { qqmlcontext_timerevent_callback = cb; }
    inline void setQQmlContext_ChildEvent_Callback(QQmlContext_ChildEvent_Callback cb) { qqmlcontext_childevent_callback = cb; }
    inline void setQQmlContext_CustomEvent_Callback(QQmlContext_CustomEvent_Callback cb) { qqmlcontext_customevent_callback = cb; }
    inline void setQQmlContext_ConnectNotify_Callback(QQmlContext_ConnectNotify_Callback cb) { qqmlcontext_connectnotify_callback = cb; }
    inline void setQQmlContext_DisconnectNotify_Callback(QQmlContext_DisconnectNotify_Callback cb) { qqmlcontext_disconnectnotify_callback = cb; }
    inline void setQQmlContext_Sender_Callback(QQmlContext_Sender_Callback cb) { qqmlcontext_sender_callback = cb; }
    inline void setQQmlContext_SenderSignalIndex_Callback(QQmlContext_SenderSignalIndex_Callback cb) { qqmlcontext_sendersignalindex_callback = cb; }
    inline void setQQmlContext_Receivers_Callback(QQmlContext_Receivers_Callback cb) { qqmlcontext_receivers_callback = cb; }
    inline void setQQmlContext_IsSignalConnected_Callback(QQmlContext_IsSignalConnected_Callback cb) { qqmlcontext_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlContext_MetaObject_IsBase(bool value) const { qqmlcontext_metaobject_isbase = value; }
    inline void setQQmlContext_Metacast_IsBase(bool value) const { qqmlcontext_metacast_isbase = value; }
    inline void setQQmlContext_Metacall_IsBase(bool value) const { qqmlcontext_metacall_isbase = value; }
    inline void setQQmlContext_Event_IsBase(bool value) const { qqmlcontext_event_isbase = value; }
    inline void setQQmlContext_EventFilter_IsBase(bool value) const { qqmlcontext_eventfilter_isbase = value; }
    inline void setQQmlContext_TimerEvent_IsBase(bool value) const { qqmlcontext_timerevent_isbase = value; }
    inline void setQQmlContext_ChildEvent_IsBase(bool value) const { qqmlcontext_childevent_isbase = value; }
    inline void setQQmlContext_CustomEvent_IsBase(bool value) const { qqmlcontext_customevent_isbase = value; }
    inline void setQQmlContext_ConnectNotify_IsBase(bool value) const { qqmlcontext_connectnotify_isbase = value; }
    inline void setQQmlContext_DisconnectNotify_IsBase(bool value) const { qqmlcontext_disconnectnotify_isbase = value; }
    inline void setQQmlContext_Sender_IsBase(bool value) const { qqmlcontext_sender_isbase = value; }
    inline void setQQmlContext_SenderSignalIndex_IsBase(bool value) const { qqmlcontext_sendersignalindex_isbase = value; }
    inline void setQQmlContext_Receivers_IsBase(bool value) const { qqmlcontext_receivers_isbase = value; }
    inline void setQQmlContext_IsSignalConnected_IsBase(bool value) const { qqmlcontext_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlcontext_metaobject_isbase) {
            qqmlcontext_metaobject_isbase = false;
            return QQmlContext::metaObject();
        }
        auto metaobject_cb = qqmlcontext_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlContext::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlcontext_metacast_isbase) {
            qqmlcontext_metacast_isbase = false;
            return QQmlContext::qt_metacast(param1);
        }
        auto metacast_cb = qqmlcontext_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlContext::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlcontext_metacall_isbase) {
            qqmlcontext_metacall_isbase = false;
            return QQmlContext::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlcontext_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlContext::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlcontext_event_isbase) {
            qqmlcontext_event_isbase = false;
            return QQmlContext::event(event);
        }
        auto event_cb = qqmlcontext_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlContext::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlcontext_eventfilter_isbase) {
            qqmlcontext_eventfilter_isbase = false;
            return QQmlContext::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlcontext_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlContext::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlcontext_timerevent_isbase) {
            qqmlcontext_timerevent_isbase = false;
            QQmlContext::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlcontext_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlContext::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlcontext_childevent_isbase) {
            qqmlcontext_childevent_isbase = false;
            QQmlContext::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlcontext_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlContext::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlcontext_customevent_isbase) {
            qqmlcontext_customevent_isbase = false;
            QQmlContext::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlcontext_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlContext::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlcontext_connectnotify_isbase) {
            qqmlcontext_connectnotify_isbase = false;
            QQmlContext::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlcontext_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlContext::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlcontext_disconnectnotify_isbase) {
            qqmlcontext_disconnectnotify_isbase = false;
            QQmlContext::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlcontext_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlContext::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlcontext_sender_isbase) {
            qqmlcontext_sender_isbase = false;
            return QQmlContext::sender();
        }
        auto sender_cb = qqmlcontext_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlContext::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlcontext_sendersignalindex_isbase) {
            qqmlcontext_sendersignalindex_isbase = false;
            return QQmlContext::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlcontext_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlContext::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlcontext_receivers_isbase) {
            qqmlcontext_receivers_isbase = false;
            return QQmlContext::receivers(signal);
        }
        auto receivers_cb = qqmlcontext_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlContext::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlcontext_issignalconnected_isbase) {
            qqmlcontext_issignalconnected_isbase = false;
            return QQmlContext::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlcontext_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlContext::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlContext_TimerEvent(QQmlContext* self, QTimerEvent* event);
    friend void QQmlContext_SuperTimerEvent(QQmlContext* self, QTimerEvent* event);
    friend void QQmlContext_ChildEvent(QQmlContext* self, QChildEvent* event);
    friend void QQmlContext_SuperChildEvent(QQmlContext* self, QChildEvent* event);
    friend void QQmlContext_CustomEvent(QQmlContext* self, QEvent* event);
    friend void QQmlContext_SuperCustomEvent(QQmlContext* self, QEvent* event);
    friend void QQmlContext_ConnectNotify(QQmlContext* self, const QMetaMethod* signal);
    friend void QQmlContext_SuperConnectNotify(QQmlContext* self, const QMetaMethod* signal);
    friend void QQmlContext_DisconnectNotify(QQmlContext* self, const QMetaMethod* signal);
    friend void QQmlContext_SuperDisconnectNotify(QQmlContext* self, const QMetaMethod* signal);
    friend QObject* QQmlContext_Sender(const QQmlContext* self);
    friend QObject* QQmlContext_SuperSender(const QQmlContext* self);
    friend int QQmlContext_SenderSignalIndex(const QQmlContext* self);
    friend int QQmlContext_SuperSenderSignalIndex(const QQmlContext* self);
    friend int QQmlContext_Receivers(const QQmlContext* self, const char* signal);
    friend int QQmlContext_SuperReceivers(const QQmlContext* self, const char* signal);
    friend bool QQmlContext_IsSignalConnected(const QQmlContext* self, const QMetaMethod* signal);
    friend bool QQmlContext_SuperIsSignalConnected(const QQmlContext* self, const QMetaMethod* signal);
};

#endif
