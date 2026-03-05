#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSSERVICEWATCHER_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSSERVICEWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusServiceWatcher so that we can call protected methods
class VirtualQDBusServiceWatcher final : public QDBusServiceWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualQDBusServiceWatcher = true;

    // Virtual class public types (including callbacks)
    using QDBusServiceWatcher_MetaObject_Callback = QMetaObject* (*)();
    using QDBusServiceWatcher_Metacast_Callback = void* (*)(QDBusServiceWatcher*, const char*);
    using QDBusServiceWatcher_Metacall_Callback = int (*)(QDBusServiceWatcher*, int, int, void**);
    using QDBusServiceWatcher_Event_Callback = bool (*)(QDBusServiceWatcher*, QEvent*);
    using QDBusServiceWatcher_EventFilter_Callback = bool (*)(QDBusServiceWatcher*, QObject*, QEvent*);
    using QDBusServiceWatcher_TimerEvent_Callback = void (*)(QDBusServiceWatcher*, QTimerEvent*);
    using QDBusServiceWatcher_ChildEvent_Callback = void (*)(QDBusServiceWatcher*, QChildEvent*);
    using QDBusServiceWatcher_CustomEvent_Callback = void (*)(QDBusServiceWatcher*, QEvent*);
    using QDBusServiceWatcher_ConnectNotify_Callback = void (*)(QDBusServiceWatcher*, QMetaMethod*);
    using QDBusServiceWatcher_DisconnectNotify_Callback = void (*)(QDBusServiceWatcher*, QMetaMethod*);
    using QDBusServiceWatcher_Sender_Callback = QObject* (*)();
    using QDBusServiceWatcher_SenderSignalIndex_Callback = int (*)();
    using QDBusServiceWatcher_Receivers_Callback = int (*)(const QDBusServiceWatcher*, const char*);
    using QDBusServiceWatcher_IsSignalConnected_Callback = bool (*)(const QDBusServiceWatcher*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDBusServiceWatcher_MetaObject_Callback qdbusservicewatcher_metaobject_callback = nullptr;
    QDBusServiceWatcher_Metacast_Callback qdbusservicewatcher_metacast_callback = nullptr;
    QDBusServiceWatcher_Metacall_Callback qdbusservicewatcher_metacall_callback = nullptr;
    QDBusServiceWatcher_Event_Callback qdbusservicewatcher_event_callback = nullptr;
    QDBusServiceWatcher_EventFilter_Callback qdbusservicewatcher_eventfilter_callback = nullptr;
    QDBusServiceWatcher_TimerEvent_Callback qdbusservicewatcher_timerevent_callback = nullptr;
    QDBusServiceWatcher_ChildEvent_Callback qdbusservicewatcher_childevent_callback = nullptr;
    QDBusServiceWatcher_CustomEvent_Callback qdbusservicewatcher_customevent_callback = nullptr;
    QDBusServiceWatcher_ConnectNotify_Callback qdbusservicewatcher_connectnotify_callback = nullptr;
    QDBusServiceWatcher_DisconnectNotify_Callback qdbusservicewatcher_disconnectnotify_callback = nullptr;
    QDBusServiceWatcher_Sender_Callback qdbusservicewatcher_sender_callback = nullptr;
    QDBusServiceWatcher_SenderSignalIndex_Callback qdbusservicewatcher_sendersignalindex_callback = nullptr;
    QDBusServiceWatcher_Receivers_Callback qdbusservicewatcher_receivers_callback = nullptr;
    QDBusServiceWatcher_IsSignalConnected_Callback qdbusservicewatcher_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdbusservicewatcher_metaobject_isbase = false;
    mutable bool qdbusservicewatcher_metacast_isbase = false;
    mutable bool qdbusservicewatcher_metacall_isbase = false;
    mutable bool qdbusservicewatcher_event_isbase = false;
    mutable bool qdbusservicewatcher_eventfilter_isbase = false;
    mutable bool qdbusservicewatcher_timerevent_isbase = false;
    mutable bool qdbusservicewatcher_childevent_isbase = false;
    mutable bool qdbusservicewatcher_customevent_isbase = false;
    mutable bool qdbusservicewatcher_connectnotify_isbase = false;
    mutable bool qdbusservicewatcher_disconnectnotify_isbase = false;
    mutable bool qdbusservicewatcher_sender_isbase = false;
    mutable bool qdbusservicewatcher_sendersignalindex_isbase = false;
    mutable bool qdbusservicewatcher_receivers_isbase = false;
    mutable bool qdbusservicewatcher_issignalconnected_isbase = false;

  public:
    VirtualQDBusServiceWatcher() : QDBusServiceWatcher() {};
    VirtualQDBusServiceWatcher(const QString& service, const QDBusConnection& connection) : QDBusServiceWatcher(service, connection) {};
    VirtualQDBusServiceWatcher(QObject* parent) : QDBusServiceWatcher(parent) {};
    VirtualQDBusServiceWatcher(const QString& service, const QDBusConnection& connection, QDBusServiceWatcher::WatchMode watchMode) : QDBusServiceWatcher(service, connection, watchMode) {};
    VirtualQDBusServiceWatcher(const QString& service, const QDBusConnection& connection, QDBusServiceWatcher::WatchMode watchMode, QObject* parent) : QDBusServiceWatcher(service, connection, watchMode, parent) {};

    // Callback setters
    inline void setQDBusServiceWatcher_MetaObject_Callback(QDBusServiceWatcher_MetaObject_Callback cb) { qdbusservicewatcher_metaobject_callback = cb; }
    inline void setQDBusServiceWatcher_Metacast_Callback(QDBusServiceWatcher_Metacast_Callback cb) { qdbusservicewatcher_metacast_callback = cb; }
    inline void setQDBusServiceWatcher_Metacall_Callback(QDBusServiceWatcher_Metacall_Callback cb) { qdbusservicewatcher_metacall_callback = cb; }
    inline void setQDBusServiceWatcher_Event_Callback(QDBusServiceWatcher_Event_Callback cb) { qdbusservicewatcher_event_callback = cb; }
    inline void setQDBusServiceWatcher_EventFilter_Callback(QDBusServiceWatcher_EventFilter_Callback cb) { qdbusservicewatcher_eventfilter_callback = cb; }
    inline void setQDBusServiceWatcher_TimerEvent_Callback(QDBusServiceWatcher_TimerEvent_Callback cb) { qdbusservicewatcher_timerevent_callback = cb; }
    inline void setQDBusServiceWatcher_ChildEvent_Callback(QDBusServiceWatcher_ChildEvent_Callback cb) { qdbusservicewatcher_childevent_callback = cb; }
    inline void setQDBusServiceWatcher_CustomEvent_Callback(QDBusServiceWatcher_CustomEvent_Callback cb) { qdbusservicewatcher_customevent_callback = cb; }
    inline void setQDBusServiceWatcher_ConnectNotify_Callback(QDBusServiceWatcher_ConnectNotify_Callback cb) { qdbusservicewatcher_connectnotify_callback = cb; }
    inline void setQDBusServiceWatcher_DisconnectNotify_Callback(QDBusServiceWatcher_DisconnectNotify_Callback cb) { qdbusservicewatcher_disconnectnotify_callback = cb; }
    inline void setQDBusServiceWatcher_Sender_Callback(QDBusServiceWatcher_Sender_Callback cb) { qdbusservicewatcher_sender_callback = cb; }
    inline void setQDBusServiceWatcher_SenderSignalIndex_Callback(QDBusServiceWatcher_SenderSignalIndex_Callback cb) { qdbusservicewatcher_sendersignalindex_callback = cb; }
    inline void setQDBusServiceWatcher_Receivers_Callback(QDBusServiceWatcher_Receivers_Callback cb) { qdbusservicewatcher_receivers_callback = cb; }
    inline void setQDBusServiceWatcher_IsSignalConnected_Callback(QDBusServiceWatcher_IsSignalConnected_Callback cb) { qdbusservicewatcher_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDBusServiceWatcher_MetaObject_IsBase(bool value) const { qdbusservicewatcher_metaobject_isbase = value; }
    inline void setQDBusServiceWatcher_Metacast_IsBase(bool value) const { qdbusservicewatcher_metacast_isbase = value; }
    inline void setQDBusServiceWatcher_Metacall_IsBase(bool value) const { qdbusservicewatcher_metacall_isbase = value; }
    inline void setQDBusServiceWatcher_Event_IsBase(bool value) const { qdbusservicewatcher_event_isbase = value; }
    inline void setQDBusServiceWatcher_EventFilter_IsBase(bool value) const { qdbusservicewatcher_eventfilter_isbase = value; }
    inline void setQDBusServiceWatcher_TimerEvent_IsBase(bool value) const { qdbusservicewatcher_timerevent_isbase = value; }
    inline void setQDBusServiceWatcher_ChildEvent_IsBase(bool value) const { qdbusservicewatcher_childevent_isbase = value; }
    inline void setQDBusServiceWatcher_CustomEvent_IsBase(bool value) const { qdbusservicewatcher_customevent_isbase = value; }
    inline void setQDBusServiceWatcher_ConnectNotify_IsBase(bool value) const { qdbusservicewatcher_connectnotify_isbase = value; }
    inline void setQDBusServiceWatcher_DisconnectNotify_IsBase(bool value) const { qdbusservicewatcher_disconnectnotify_isbase = value; }
    inline void setQDBusServiceWatcher_Sender_IsBase(bool value) const { qdbusservicewatcher_sender_isbase = value; }
    inline void setQDBusServiceWatcher_SenderSignalIndex_IsBase(bool value) const { qdbusservicewatcher_sendersignalindex_isbase = value; }
    inline void setQDBusServiceWatcher_Receivers_IsBase(bool value) const { qdbusservicewatcher_receivers_isbase = value; }
    inline void setQDBusServiceWatcher_IsSignalConnected_IsBase(bool value) const { qdbusservicewatcher_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdbusservicewatcher_metaobject_isbase) {
            qdbusservicewatcher_metaobject_isbase = false;
            return QDBusServiceWatcher::metaObject();
        }
        auto metaobject_cb = qdbusservicewatcher_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDBusServiceWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdbusservicewatcher_metacast_isbase) {
            qdbusservicewatcher_metacast_isbase = false;
            return QDBusServiceWatcher::qt_metacast(param1);
        }
        auto metacast_cb = qdbusservicewatcher_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusServiceWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusservicewatcher_metacall_isbase) {
            qdbusservicewatcher_metacall_isbase = false;
            return QDBusServiceWatcher::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdbusservicewatcher_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDBusServiceWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusservicewatcher_event_isbase) {
            qdbusservicewatcher_event_isbase = false;
            return QDBusServiceWatcher::event(event);
        }
        auto event_cb = qdbusservicewatcher_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusServiceWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusservicewatcher_eventfilter_isbase) {
            qdbusservicewatcher_eventfilter_isbase = false;
            return QDBusServiceWatcher::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdbusservicewatcher_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDBusServiceWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusservicewatcher_timerevent_isbase) {
            qdbusservicewatcher_timerevent_isbase = false;
            QDBusServiceWatcher::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdbusservicewatcher_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDBusServiceWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusservicewatcher_childevent_isbase) {
            qdbusservicewatcher_childevent_isbase = false;
            QDBusServiceWatcher::childEvent(event);
            return;
        }
        auto childevent_cb = qdbusservicewatcher_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDBusServiceWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusservicewatcher_customevent_isbase) {
            qdbusservicewatcher_customevent_isbase = false;
            QDBusServiceWatcher::customEvent(event);
            return;
        }
        auto customevent_cb = qdbusservicewatcher_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDBusServiceWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusservicewatcher_connectnotify_isbase) {
            qdbusservicewatcher_connectnotify_isbase = false;
            QDBusServiceWatcher::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdbusservicewatcher_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDBusServiceWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusservicewatcher_disconnectnotify_isbase) {
            qdbusservicewatcher_disconnectnotify_isbase = false;
            QDBusServiceWatcher::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdbusservicewatcher_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDBusServiceWatcher::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbusservicewatcher_sender_isbase) {
            qdbusservicewatcher_sender_isbase = false;
            return QDBusServiceWatcher::sender();
        }
        auto sender_cb = qdbusservicewatcher_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDBusServiceWatcher::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbusservicewatcher_sendersignalindex_isbase) {
            qdbusservicewatcher_sendersignalindex_isbase = false;
            return QDBusServiceWatcher::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdbusservicewatcher_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDBusServiceWatcher::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbusservicewatcher_receivers_isbase) {
            qdbusservicewatcher_receivers_isbase = false;
            return QDBusServiceWatcher::receivers(signal);
        }
        auto receivers_cb = qdbusservicewatcher_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDBusServiceWatcher::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbusservicewatcher_issignalconnected_isbase) {
            qdbusservicewatcher_issignalconnected_isbase = false;
            return QDBusServiceWatcher::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdbusservicewatcher_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDBusServiceWatcher::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDBusServiceWatcher_TimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
    friend void QDBusServiceWatcher_SuperTimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
    friend void QDBusServiceWatcher_ChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
    friend void QDBusServiceWatcher_SuperChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
    friend void QDBusServiceWatcher_CustomEvent(QDBusServiceWatcher* self, QEvent* event);
    friend void QDBusServiceWatcher_SuperCustomEvent(QDBusServiceWatcher* self, QEvent* event);
    friend void QDBusServiceWatcher_ConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_SuperConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_DisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_SuperDisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend QObject* QDBusServiceWatcher_Sender(const QDBusServiceWatcher* self);
    friend QObject* QDBusServiceWatcher_SuperSender(const QDBusServiceWatcher* self);
    friend int QDBusServiceWatcher_SenderSignalIndex(const QDBusServiceWatcher* self);
    friend int QDBusServiceWatcher_SuperSenderSignalIndex(const QDBusServiceWatcher* self);
    friend int QDBusServiceWatcher_Receivers(const QDBusServiceWatcher* self, const char* signal);
    friend int QDBusServiceWatcher_SuperReceivers(const QDBusServiceWatcher* self, const char* signal);
    friend bool QDBusServiceWatcher_IsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend bool QDBusServiceWatcher_SuperIsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal);
};

#endif
