#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSPENDINGCALL_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSPENDINGCALL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusPendingCallWatcher so that we can call protected methods
class VirtualQDBusPendingCallWatcher final : public QDBusPendingCallWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualQDBusPendingCallWatcher = true;

    // Virtual class public types (including callbacks)
    using QDBusPendingCallWatcher_MetaObject_Callback = QMetaObject* (*)();
    using QDBusPendingCallWatcher_Metacast_Callback = void* (*)(QDBusPendingCallWatcher*, const char*);
    using QDBusPendingCallWatcher_Metacall_Callback = int (*)(QDBusPendingCallWatcher*, int, int, void**);
    using QDBusPendingCallWatcher_Event_Callback = bool (*)(QDBusPendingCallWatcher*, QEvent*);
    using QDBusPendingCallWatcher_EventFilter_Callback = bool (*)(QDBusPendingCallWatcher*, QObject*, QEvent*);
    using QDBusPendingCallWatcher_TimerEvent_Callback = void (*)(QDBusPendingCallWatcher*, QTimerEvent*);
    using QDBusPendingCallWatcher_ChildEvent_Callback = void (*)(QDBusPendingCallWatcher*, QChildEvent*);
    using QDBusPendingCallWatcher_CustomEvent_Callback = void (*)(QDBusPendingCallWatcher*, QEvent*);
    using QDBusPendingCallWatcher_ConnectNotify_Callback = void (*)(QDBusPendingCallWatcher*, QMetaMethod*);
    using QDBusPendingCallWatcher_DisconnectNotify_Callback = void (*)(QDBusPendingCallWatcher*, QMetaMethod*);
    using QDBusPendingCallWatcher_Sender_Callback = QObject* (*)();
    using QDBusPendingCallWatcher_SenderSignalIndex_Callback = int (*)();
    using QDBusPendingCallWatcher_Receivers_Callback = int (*)(const QDBusPendingCallWatcher*, const char*);
    using QDBusPendingCallWatcher_IsSignalConnected_Callback = bool (*)(const QDBusPendingCallWatcher*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDBusPendingCallWatcher_MetaObject_Callback qdbuspendingcallwatcher_metaobject_callback = nullptr;
    QDBusPendingCallWatcher_Metacast_Callback qdbuspendingcallwatcher_metacast_callback = nullptr;
    QDBusPendingCallWatcher_Metacall_Callback qdbuspendingcallwatcher_metacall_callback = nullptr;
    QDBusPendingCallWatcher_Event_Callback qdbuspendingcallwatcher_event_callback = nullptr;
    QDBusPendingCallWatcher_EventFilter_Callback qdbuspendingcallwatcher_eventfilter_callback = nullptr;
    QDBusPendingCallWatcher_TimerEvent_Callback qdbuspendingcallwatcher_timerevent_callback = nullptr;
    QDBusPendingCallWatcher_ChildEvent_Callback qdbuspendingcallwatcher_childevent_callback = nullptr;
    QDBusPendingCallWatcher_CustomEvent_Callback qdbuspendingcallwatcher_customevent_callback = nullptr;
    QDBusPendingCallWatcher_ConnectNotify_Callback qdbuspendingcallwatcher_connectnotify_callback = nullptr;
    QDBusPendingCallWatcher_DisconnectNotify_Callback qdbuspendingcallwatcher_disconnectnotify_callback = nullptr;
    QDBusPendingCallWatcher_Sender_Callback qdbuspendingcallwatcher_sender_callback = nullptr;
    QDBusPendingCallWatcher_SenderSignalIndex_Callback qdbuspendingcallwatcher_sendersignalindex_callback = nullptr;
    QDBusPendingCallWatcher_Receivers_Callback qdbuspendingcallwatcher_receivers_callback = nullptr;
    QDBusPendingCallWatcher_IsSignalConnected_Callback qdbuspendingcallwatcher_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdbuspendingcallwatcher_metaobject_isbase = false;
    mutable bool qdbuspendingcallwatcher_metacast_isbase = false;
    mutable bool qdbuspendingcallwatcher_metacall_isbase = false;
    mutable bool qdbuspendingcallwatcher_event_isbase = false;
    mutable bool qdbuspendingcallwatcher_eventfilter_isbase = false;
    mutable bool qdbuspendingcallwatcher_timerevent_isbase = false;
    mutable bool qdbuspendingcallwatcher_childevent_isbase = false;
    mutable bool qdbuspendingcallwatcher_customevent_isbase = false;
    mutable bool qdbuspendingcallwatcher_connectnotify_isbase = false;
    mutable bool qdbuspendingcallwatcher_disconnectnotify_isbase = false;
    mutable bool qdbuspendingcallwatcher_sender_isbase = false;
    mutable bool qdbuspendingcallwatcher_sendersignalindex_isbase = false;
    mutable bool qdbuspendingcallwatcher_receivers_isbase = false;
    mutable bool qdbuspendingcallwatcher_issignalconnected_isbase = false;

  public:
    VirtualQDBusPendingCallWatcher(const QDBusPendingCall& call) : QDBusPendingCallWatcher(call) {};
    VirtualQDBusPendingCallWatcher(const QDBusPendingCall& call, QObject* parent) : QDBusPendingCallWatcher(call, parent) {};

    // Callback setters
    inline void setQDBusPendingCallWatcher_MetaObject_Callback(QDBusPendingCallWatcher_MetaObject_Callback cb) { qdbuspendingcallwatcher_metaobject_callback = cb; }
    inline void setQDBusPendingCallWatcher_Metacast_Callback(QDBusPendingCallWatcher_Metacast_Callback cb) { qdbuspendingcallwatcher_metacast_callback = cb; }
    inline void setQDBusPendingCallWatcher_Metacall_Callback(QDBusPendingCallWatcher_Metacall_Callback cb) { qdbuspendingcallwatcher_metacall_callback = cb; }
    inline void setQDBusPendingCallWatcher_Event_Callback(QDBusPendingCallWatcher_Event_Callback cb) { qdbuspendingcallwatcher_event_callback = cb; }
    inline void setQDBusPendingCallWatcher_EventFilter_Callback(QDBusPendingCallWatcher_EventFilter_Callback cb) { qdbuspendingcallwatcher_eventfilter_callback = cb; }
    inline void setQDBusPendingCallWatcher_TimerEvent_Callback(QDBusPendingCallWatcher_TimerEvent_Callback cb) { qdbuspendingcallwatcher_timerevent_callback = cb; }
    inline void setQDBusPendingCallWatcher_ChildEvent_Callback(QDBusPendingCallWatcher_ChildEvent_Callback cb) { qdbuspendingcallwatcher_childevent_callback = cb; }
    inline void setQDBusPendingCallWatcher_CustomEvent_Callback(QDBusPendingCallWatcher_CustomEvent_Callback cb) { qdbuspendingcallwatcher_customevent_callback = cb; }
    inline void setQDBusPendingCallWatcher_ConnectNotify_Callback(QDBusPendingCallWatcher_ConnectNotify_Callback cb) { qdbuspendingcallwatcher_connectnotify_callback = cb; }
    inline void setQDBusPendingCallWatcher_DisconnectNotify_Callback(QDBusPendingCallWatcher_DisconnectNotify_Callback cb) { qdbuspendingcallwatcher_disconnectnotify_callback = cb; }
    inline void setQDBusPendingCallWatcher_Sender_Callback(QDBusPendingCallWatcher_Sender_Callback cb) { qdbuspendingcallwatcher_sender_callback = cb; }
    inline void setQDBusPendingCallWatcher_SenderSignalIndex_Callback(QDBusPendingCallWatcher_SenderSignalIndex_Callback cb) { qdbuspendingcallwatcher_sendersignalindex_callback = cb; }
    inline void setQDBusPendingCallWatcher_Receivers_Callback(QDBusPendingCallWatcher_Receivers_Callback cb) { qdbuspendingcallwatcher_receivers_callback = cb; }
    inline void setQDBusPendingCallWatcher_IsSignalConnected_Callback(QDBusPendingCallWatcher_IsSignalConnected_Callback cb) { qdbuspendingcallwatcher_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDBusPendingCallWatcher_MetaObject_IsBase(bool value) const { qdbuspendingcallwatcher_metaobject_isbase = value; }
    inline void setQDBusPendingCallWatcher_Metacast_IsBase(bool value) const { qdbuspendingcallwatcher_metacast_isbase = value; }
    inline void setQDBusPendingCallWatcher_Metacall_IsBase(bool value) const { qdbuspendingcallwatcher_metacall_isbase = value; }
    inline void setQDBusPendingCallWatcher_Event_IsBase(bool value) const { qdbuspendingcallwatcher_event_isbase = value; }
    inline void setQDBusPendingCallWatcher_EventFilter_IsBase(bool value) const { qdbuspendingcallwatcher_eventfilter_isbase = value; }
    inline void setQDBusPendingCallWatcher_TimerEvent_IsBase(bool value) const { qdbuspendingcallwatcher_timerevent_isbase = value; }
    inline void setQDBusPendingCallWatcher_ChildEvent_IsBase(bool value) const { qdbuspendingcallwatcher_childevent_isbase = value; }
    inline void setQDBusPendingCallWatcher_CustomEvent_IsBase(bool value) const { qdbuspendingcallwatcher_customevent_isbase = value; }
    inline void setQDBusPendingCallWatcher_ConnectNotify_IsBase(bool value) const { qdbuspendingcallwatcher_connectnotify_isbase = value; }
    inline void setQDBusPendingCallWatcher_DisconnectNotify_IsBase(bool value) const { qdbuspendingcallwatcher_disconnectnotify_isbase = value; }
    inline void setQDBusPendingCallWatcher_Sender_IsBase(bool value) const { qdbuspendingcallwatcher_sender_isbase = value; }
    inline void setQDBusPendingCallWatcher_SenderSignalIndex_IsBase(bool value) const { qdbuspendingcallwatcher_sendersignalindex_isbase = value; }
    inline void setQDBusPendingCallWatcher_Receivers_IsBase(bool value) const { qdbuspendingcallwatcher_receivers_isbase = value; }
    inline void setQDBusPendingCallWatcher_IsSignalConnected_IsBase(bool value) const { qdbuspendingcallwatcher_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbuspendingcallwatcher_metaobject_isbase) {
            qdbuspendingcallwatcher_metaobject_isbase = false;
            return QDBusPendingCallWatcher::metaObject();
        }
        auto metaobject_cb = qdbuspendingcallwatcher_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDBusPendingCallWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbuspendingcallwatcher_metacast_isbase) {
            qdbuspendingcallwatcher_metacast_isbase = false;
            return QDBusPendingCallWatcher::qt_metacast(param1);
        }
        auto metacast_cb = qdbuspendingcallwatcher_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbuspendingcallwatcher_metacall_isbase) {
            qdbuspendingcallwatcher_metacall_isbase = false;
            return QDBusPendingCallWatcher::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdbuspendingcallwatcher_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusPendingCallWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbuspendingcallwatcher_event_isbase) {
            qdbuspendingcallwatcher_event_isbase = false;
            return QDBusPendingCallWatcher::event(event);
        }
        auto event_cb = qdbuspendingcallwatcher_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbuspendingcallwatcher_eventfilter_isbase) {
            qdbuspendingcallwatcher_eventfilter_isbase = false;
            return QDBusPendingCallWatcher::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdbuspendingcallwatcher_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbuspendingcallwatcher_timerevent_isbase) {
            qdbuspendingcallwatcher_timerevent_isbase = false;
            QDBusPendingCallWatcher::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdbuspendingcallwatcher_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbuspendingcallwatcher_childevent_isbase) {
            qdbuspendingcallwatcher_childevent_isbase = false;
            QDBusPendingCallWatcher::childEvent(event);
            return;
        }
        auto childevent_cb = qdbuspendingcallwatcher_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbuspendingcallwatcher_customevent_isbase) {
            qdbuspendingcallwatcher_customevent_isbase = false;
            QDBusPendingCallWatcher::customEvent(event);
            return;
        }
        auto customevent_cb = qdbuspendingcallwatcher_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbuspendingcallwatcher_connectnotify_isbase) {
            qdbuspendingcallwatcher_connectnotify_isbase = false;
            QDBusPendingCallWatcher::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdbuspendingcallwatcher_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbuspendingcallwatcher_disconnectnotify_isbase) {
            qdbuspendingcallwatcher_disconnectnotify_isbase = false;
            QDBusPendingCallWatcher::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdbuspendingcallwatcher_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDBusPendingCallWatcher::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbuspendingcallwatcher_sender_isbase) {
            qdbuspendingcallwatcher_sender_isbase = false;
            return QDBusPendingCallWatcher::sender();
        }
        auto sender_cb = qdbuspendingcallwatcher_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDBusPendingCallWatcher::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbuspendingcallwatcher_sendersignalindex_isbase) {
            qdbuspendingcallwatcher_sendersignalindex_isbase = false;
            return QDBusPendingCallWatcher::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdbuspendingcallwatcher_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDBusPendingCallWatcher::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbuspendingcallwatcher_receivers_isbase) {
            qdbuspendingcallwatcher_receivers_isbase = false;
            return QDBusPendingCallWatcher::receivers(signal);
        }
        auto receivers_cb = qdbuspendingcallwatcher_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDBusPendingCallWatcher::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbuspendingcallwatcher_issignalconnected_isbase) {
            qdbuspendingcallwatcher_issignalconnected_isbase = false;
            return QDBusPendingCallWatcher::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdbuspendingcallwatcher_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusPendingCallWatcher::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDBusPendingCallWatcher_TimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
    friend void QDBusPendingCallWatcher_SuperTimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
    friend void QDBusPendingCallWatcher_ChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
    friend void QDBusPendingCallWatcher_SuperChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
    friend void QDBusPendingCallWatcher_CustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
    friend void QDBusPendingCallWatcher_SuperCustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
    friend void QDBusPendingCallWatcher_ConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_SuperConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_DisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_SuperDisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend QObject* QDBusPendingCallWatcher_Sender(const QDBusPendingCallWatcher* self);
    friend QObject* QDBusPendingCallWatcher_SuperSender(const QDBusPendingCallWatcher* self);
    friend int QDBusPendingCallWatcher_SenderSignalIndex(const QDBusPendingCallWatcher* self);
    friend int QDBusPendingCallWatcher_SuperSenderSignalIndex(const QDBusPendingCallWatcher* self);
    friend int QDBusPendingCallWatcher_Receivers(const QDBusPendingCallWatcher* self, const char* signal);
    friend int QDBusPendingCallWatcher_SuperReceivers(const QDBusPendingCallWatcher* self, const char* signal);
    friend bool QDBusPendingCallWatcher_IsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend bool QDBusPendingCallWatcher_SuperIsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal);
};

#endif
