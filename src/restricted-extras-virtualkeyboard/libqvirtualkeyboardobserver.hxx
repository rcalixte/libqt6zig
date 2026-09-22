#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardObserver so that we can call protected methods
class VirtualQVirtualKeyboardObserver final : public QVirtualKeyboardObserver {

  public:
    // Virtual class boolean flag
    bool isVirtualQVirtualKeyboardObserver = true;

    // Virtual class public types (including callbacks)
    using QVirtualKeyboardObserver_MetaObject_Callback = QMetaObject* (*)();
    using QVirtualKeyboardObserver_Metacast_Callback = void* (*)(QVirtualKeyboardObserver*, const char*);
    using QVirtualKeyboardObserver_Metacall_Callback = int (*)(QVirtualKeyboardObserver*, int, int, void**);
    using QVirtualKeyboardObserver_Event_Callback = bool (*)(QVirtualKeyboardObserver*, QEvent*);
    using QVirtualKeyboardObserver_EventFilter_Callback = bool (*)(QVirtualKeyboardObserver*, QObject*, QEvent*);
    using QVirtualKeyboardObserver_TimerEvent_Callback = void (*)(QVirtualKeyboardObserver*, QTimerEvent*);
    using QVirtualKeyboardObserver_ChildEvent_Callback = void (*)(QVirtualKeyboardObserver*, QChildEvent*);
    using QVirtualKeyboardObserver_CustomEvent_Callback = void (*)(QVirtualKeyboardObserver*, QEvent*);
    using QVirtualKeyboardObserver_ConnectNotify_Callback = void (*)(QVirtualKeyboardObserver*, QMetaMethod*);
    using QVirtualKeyboardObserver_DisconnectNotify_Callback = void (*)(QVirtualKeyboardObserver*, QMetaMethod*);
    using QVirtualKeyboardObserver_Sender_Callback = QObject* (*)();
    using QVirtualKeyboardObserver_SenderSignalIndex_Callback = int (*)();
    using QVirtualKeyboardObserver_Receivers_Callback = int (*)(const QVirtualKeyboardObserver*, const char*);
    using QVirtualKeyboardObserver_IsSignalConnected_Callback = bool (*)(const QVirtualKeyboardObserver*, QMetaMethod*);

  protected:
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
    QVirtualKeyboardObserver_Sender_Callback qvirtualkeyboardobserver_sender_callback = nullptr;
    QVirtualKeyboardObserver_SenderSignalIndex_Callback qvirtualkeyboardobserver_sendersignalindex_callback = nullptr;
    QVirtualKeyboardObserver_Receivers_Callback qvirtualkeyboardobserver_receivers_callback = nullptr;
    QVirtualKeyboardObserver_IsSignalConnected_Callback qvirtualkeyboardobserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvirtualkeyboardobserver_metaobject_isbase = false;
    mutable bool qvirtualkeyboardobserver_metacast_isbase = false;
    mutable bool qvirtualkeyboardobserver_metacall_isbase = false;
    mutable bool qvirtualkeyboardobserver_event_isbase = false;
    mutable bool qvirtualkeyboardobserver_eventfilter_isbase = false;
    mutable bool qvirtualkeyboardobserver_timerevent_isbase = false;
    mutable bool qvirtualkeyboardobserver_childevent_isbase = false;
    mutable bool qvirtualkeyboardobserver_customevent_isbase = false;
    mutable bool qvirtualkeyboardobserver_connectnotify_isbase = false;
    mutable bool qvirtualkeyboardobserver_disconnectnotify_isbase = false;
    mutable bool qvirtualkeyboardobserver_sender_isbase = false;
    mutable bool qvirtualkeyboardobserver_sendersignalindex_isbase = false;
    mutable bool qvirtualkeyboardobserver_receivers_isbase = false;
    mutable bool qvirtualkeyboardobserver_issignalconnected_isbase = false;

  public:
    VirtualQVirtualKeyboardObserver() : QVirtualKeyboardObserver() {};
    VirtualQVirtualKeyboardObserver(QObject* parent) : QVirtualKeyboardObserver(parent) {};

    // Callback setters
    inline void setQVirtualKeyboardObserver_MetaObject_Callback(QVirtualKeyboardObserver_MetaObject_Callback cb) { qvirtualkeyboardobserver_metaobject_callback = cb; }
    inline void setQVirtualKeyboardObserver_Metacast_Callback(QVirtualKeyboardObserver_Metacast_Callback cb) { qvirtualkeyboardobserver_metacast_callback = cb; }
    inline void setQVirtualKeyboardObserver_Metacall_Callback(QVirtualKeyboardObserver_Metacall_Callback cb) { qvirtualkeyboardobserver_metacall_callback = cb; }
    inline void setQVirtualKeyboardObserver_Event_Callback(QVirtualKeyboardObserver_Event_Callback cb) { qvirtualkeyboardobserver_event_callback = cb; }
    inline void setQVirtualKeyboardObserver_EventFilter_Callback(QVirtualKeyboardObserver_EventFilter_Callback cb) { qvirtualkeyboardobserver_eventfilter_callback = cb; }
    inline void setQVirtualKeyboardObserver_TimerEvent_Callback(QVirtualKeyboardObserver_TimerEvent_Callback cb) { qvirtualkeyboardobserver_timerevent_callback = cb; }
    inline void setQVirtualKeyboardObserver_ChildEvent_Callback(QVirtualKeyboardObserver_ChildEvent_Callback cb) { qvirtualkeyboardobserver_childevent_callback = cb; }
    inline void setQVirtualKeyboardObserver_CustomEvent_Callback(QVirtualKeyboardObserver_CustomEvent_Callback cb) { qvirtualkeyboardobserver_customevent_callback = cb; }
    inline void setQVirtualKeyboardObserver_ConnectNotify_Callback(QVirtualKeyboardObserver_ConnectNotify_Callback cb) { qvirtualkeyboardobserver_connectnotify_callback = cb; }
    inline void setQVirtualKeyboardObserver_DisconnectNotify_Callback(QVirtualKeyboardObserver_DisconnectNotify_Callback cb) { qvirtualkeyboardobserver_disconnectnotify_callback = cb; }
    inline void setQVirtualKeyboardObserver_Sender_Callback(QVirtualKeyboardObserver_Sender_Callback cb) { qvirtualkeyboardobserver_sender_callback = cb; }
    inline void setQVirtualKeyboardObserver_SenderSignalIndex_Callback(QVirtualKeyboardObserver_SenderSignalIndex_Callback cb) { qvirtualkeyboardobserver_sendersignalindex_callback = cb; }
    inline void setQVirtualKeyboardObserver_Receivers_Callback(QVirtualKeyboardObserver_Receivers_Callback cb) { qvirtualkeyboardobserver_receivers_callback = cb; }
    inline void setQVirtualKeyboardObserver_IsSignalConnected_Callback(QVirtualKeyboardObserver_IsSignalConnected_Callback cb) { qvirtualkeyboardobserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVirtualKeyboardObserver_MetaObject_IsBase(bool value) const { qvirtualkeyboardobserver_metaobject_isbase = value; }
    inline void setQVirtualKeyboardObserver_Metacast_IsBase(bool value) const { qvirtualkeyboardobserver_metacast_isbase = value; }
    inline void setQVirtualKeyboardObserver_Metacall_IsBase(bool value) const { qvirtualkeyboardobserver_metacall_isbase = value; }
    inline void setQVirtualKeyboardObserver_Event_IsBase(bool value) const { qvirtualkeyboardobserver_event_isbase = value; }
    inline void setQVirtualKeyboardObserver_EventFilter_IsBase(bool value) const { qvirtualkeyboardobserver_eventfilter_isbase = value; }
    inline void setQVirtualKeyboardObserver_TimerEvent_IsBase(bool value) const { qvirtualkeyboardobserver_timerevent_isbase = value; }
    inline void setQVirtualKeyboardObserver_ChildEvent_IsBase(bool value) const { qvirtualkeyboardobserver_childevent_isbase = value; }
    inline void setQVirtualKeyboardObserver_CustomEvent_IsBase(bool value) const { qvirtualkeyboardobserver_customevent_isbase = value; }
    inline void setQVirtualKeyboardObserver_ConnectNotify_IsBase(bool value) const { qvirtualkeyboardobserver_connectnotify_isbase = value; }
    inline void setQVirtualKeyboardObserver_DisconnectNotify_IsBase(bool value) const { qvirtualkeyboardobserver_disconnectnotify_isbase = value; }
    inline void setQVirtualKeyboardObserver_Sender_IsBase(bool value) const { qvirtualkeyboardobserver_sender_isbase = value; }
    inline void setQVirtualKeyboardObserver_SenderSignalIndex_IsBase(bool value) const { qvirtualkeyboardobserver_sendersignalindex_isbase = value; }
    inline void setQVirtualKeyboardObserver_Receivers_IsBase(bool value) const { qvirtualkeyboardobserver_receivers_isbase = value; }
    inline void setQVirtualKeyboardObserver_IsSignalConnected_IsBase(bool value) const { qvirtualkeyboardobserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardobserver_metaobject_isbase) {
            qvirtualkeyboardobserver_metaobject_isbase = false;
            return QVirtualKeyboardObserver::metaObject();
        }
        auto metaobject_cb = qvirtualkeyboardobserver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVirtualKeyboardObserver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardobserver_metacast_isbase) {
            qvirtualkeyboardobserver_metacast_isbase = false;
            return QVirtualKeyboardObserver::qt_metacast(param1);
        }
        auto metacast_cb = qvirtualkeyboardobserver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardobserver_metacall_isbase) {
            qvirtualkeyboardobserver_metacall_isbase = false;
            return QVirtualKeyboardObserver::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvirtualkeyboardobserver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardObserver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardobserver_event_isbase) {
            qvirtualkeyboardobserver_event_isbase = false;
            return QVirtualKeyboardObserver::event(event);
        }
        auto event_cb = qvirtualkeyboardobserver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardobserver_eventfilter_isbase) {
            qvirtualkeyboardobserver_eventfilter_isbase = false;
            return QVirtualKeyboardObserver::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvirtualkeyboardobserver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardobserver_timerevent_isbase) {
            qvirtualkeyboardobserver_timerevent_isbase = false;
            QVirtualKeyboardObserver::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvirtualkeyboardobserver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardobserver_childevent_isbase) {
            qvirtualkeyboardobserver_childevent_isbase = false;
            QVirtualKeyboardObserver::childEvent(event);
            return;
        }
        auto childevent_cb = qvirtualkeyboardobserver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardobserver_customevent_isbase) {
            qvirtualkeyboardobserver_customevent_isbase = false;
            QVirtualKeyboardObserver::customEvent(event);
            return;
        }
        auto customevent_cb = qvirtualkeyboardobserver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardobserver_connectnotify_isbase) {
            qvirtualkeyboardobserver_connectnotify_isbase = false;
            QVirtualKeyboardObserver::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvirtualkeyboardobserver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardobserver_disconnectnotify_isbase) {
            qvirtualkeyboardobserver_disconnectnotify_isbase = false;
            QVirtualKeyboardObserver::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvirtualkeyboardobserver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardObserver::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvirtualkeyboardobserver_sender_isbase) {
            qvirtualkeyboardobserver_sender_isbase = false;
            return QVirtualKeyboardObserver::sender();
        }
        auto sender_cb = qvirtualkeyboardobserver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVirtualKeyboardObserver::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvirtualkeyboardobserver_sendersignalindex_isbase) {
            qvirtualkeyboardobserver_sendersignalindex_isbase = false;
            return QVirtualKeyboardObserver::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvirtualkeyboardobserver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardObserver::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvirtualkeyboardobserver_receivers_isbase) {
            qvirtualkeyboardobserver_receivers_isbase = false;
            return QVirtualKeyboardObserver::receivers(signal);
        }
        auto receivers_cb = qvirtualkeyboardobserver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardObserver::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvirtualkeyboardobserver_issignalconnected_isbase) {
            qvirtualkeyboardobserver_issignalconnected_isbase = false;
            return QVirtualKeyboardObserver::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvirtualkeyboardobserver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardObserver::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardObserver_TimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event);
    friend void QVirtualKeyboardObserver_SuperTimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event);
    friend void QVirtualKeyboardObserver_ChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event);
    friend void QVirtualKeyboardObserver_SuperChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event);
    friend void QVirtualKeyboardObserver_CustomEvent(QVirtualKeyboardObserver* self, QEvent* event);
    friend void QVirtualKeyboardObserver_SuperCustomEvent(QVirtualKeyboardObserver* self, QEvent* event);
    friend void QVirtualKeyboardObserver_ConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardObserver_SuperConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardObserver_DisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardObserver_SuperDisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal);
    friend QObject* QVirtualKeyboardObserver_Sender(const QVirtualKeyboardObserver* self);
    friend QObject* QVirtualKeyboardObserver_SuperSender(const QVirtualKeyboardObserver* self);
    friend int QVirtualKeyboardObserver_SenderSignalIndex(const QVirtualKeyboardObserver* self);
    friend int QVirtualKeyboardObserver_SuperSenderSignalIndex(const QVirtualKeyboardObserver* self);
    friend int QVirtualKeyboardObserver_Receivers(const QVirtualKeyboardObserver* self, const char* signal);
    friend int QVirtualKeyboardObserver_SuperReceivers(const QVirtualKeyboardObserver* self, const char* signal);
    friend bool QVirtualKeyboardObserver_IsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal);
    friend bool QVirtualKeyboardObserver_SuperIsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal);
};

#endif
