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

    ~VirtualQDBusServiceWatcher() {
        qdbusservicewatcher_metacall_callback = nullptr;
        qdbusservicewatcher_event_callback = nullptr;
        qdbusservicewatcher_eventfilter_callback = nullptr;
        qdbusservicewatcher_timerevent_callback = nullptr;
        qdbusservicewatcher_childevent_callback = nullptr;
        qdbusservicewatcher_customevent_callback = nullptr;
        qdbusservicewatcher_connectnotify_callback = nullptr;
        qdbusservicewatcher_disconnectnotify_callback = nullptr;
        qdbusservicewatcher_sender_callback = nullptr;
        qdbusservicewatcher_sendersignalindex_callback = nullptr;
        qdbusservicewatcher_receivers_callback = nullptr;
        qdbusservicewatcher_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusservicewatcher_metacall_isbase) {
            qdbusservicewatcher_metacall_isbase = false;
            return QDBusServiceWatcher::qt_metacall(param1, param2, param3);
        } else if (qdbusservicewatcher_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdbusservicewatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusServiceWatcher::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusservicewatcher_event_isbase) {
            qdbusservicewatcher_event_isbase = false;
            return QDBusServiceWatcher::event(event);
        } else if (qdbusservicewatcher_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdbusservicewatcher_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusServiceWatcher::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusservicewatcher_eventfilter_isbase) {
            qdbusservicewatcher_eventfilter_isbase = false;
            return QDBusServiceWatcher::eventFilter(watched, event);
        } else if (qdbusservicewatcher_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdbusservicewatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDBusServiceWatcher::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusservicewatcher_timerevent_isbase) {
            qdbusservicewatcher_timerevent_isbase = false;
            QDBusServiceWatcher::timerEvent(event);
        } else if (qdbusservicewatcher_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdbusservicewatcher_timerevent_callback(this, cbval1);
        } else {
            QDBusServiceWatcher::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusservicewatcher_childevent_isbase) {
            qdbusservicewatcher_childevent_isbase = false;
            QDBusServiceWatcher::childEvent(event);
        } else if (qdbusservicewatcher_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdbusservicewatcher_childevent_callback(this, cbval1);
        } else {
            QDBusServiceWatcher::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusservicewatcher_customevent_isbase) {
            qdbusservicewatcher_customevent_isbase = false;
            QDBusServiceWatcher::customEvent(event);
        } else if (qdbusservicewatcher_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdbusservicewatcher_customevent_callback(this, cbval1);
        } else {
            QDBusServiceWatcher::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusservicewatcher_connectnotify_isbase) {
            qdbusservicewatcher_connectnotify_isbase = false;
            QDBusServiceWatcher::connectNotify(signal);
        } else if (qdbusservicewatcher_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbusservicewatcher_connectnotify_callback(this, cbval1);
        } else {
            QDBusServiceWatcher::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusservicewatcher_disconnectnotify_isbase) {
            qdbusservicewatcher_disconnectnotify_isbase = false;
            QDBusServiceWatcher::disconnectNotify(signal);
        } else if (qdbusservicewatcher_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbusservicewatcher_disconnectnotify_callback(this, cbval1);
        } else {
            QDBusServiceWatcher::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbusservicewatcher_sender_isbase) {
            qdbusservicewatcher_sender_isbase = false;
            return QDBusServiceWatcher::sender();
        } else if (qdbusservicewatcher_sender_callback != nullptr) {
            QObject* callback_ret = qdbusservicewatcher_sender_callback();
            return callback_ret;
        } else {
            return QDBusServiceWatcher::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbusservicewatcher_sendersignalindex_isbase) {
            qdbusservicewatcher_sendersignalindex_isbase = false;
            return QDBusServiceWatcher::senderSignalIndex();
        } else if (qdbusservicewatcher_sendersignalindex_callback != nullptr) {
            int callback_ret = qdbusservicewatcher_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDBusServiceWatcher::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbusservicewatcher_receivers_isbase) {
            qdbusservicewatcher_receivers_isbase = false;
            return QDBusServiceWatcher::receivers(signal);
        } else if (qdbusservicewatcher_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdbusservicewatcher_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusServiceWatcher::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbusservicewatcher_issignalconnected_isbase) {
            qdbusservicewatcher_issignalconnected_isbase = false;
            return QDBusServiceWatcher::isSignalConnected(signal);
        } else if (qdbusservicewatcher_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdbusservicewatcher_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusServiceWatcher::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDBusServiceWatcher_TimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
    friend void QDBusServiceWatcher_QBaseTimerEvent(QDBusServiceWatcher* self, QTimerEvent* event);
    friend void QDBusServiceWatcher_ChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
    friend void QDBusServiceWatcher_QBaseChildEvent(QDBusServiceWatcher* self, QChildEvent* event);
    friend void QDBusServiceWatcher_CustomEvent(QDBusServiceWatcher* self, QEvent* event);
    friend void QDBusServiceWatcher_QBaseCustomEvent(QDBusServiceWatcher* self, QEvent* event);
    friend void QDBusServiceWatcher_ConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_QBaseConnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_DisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend void QDBusServiceWatcher_QBaseDisconnectNotify(QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend QObject* QDBusServiceWatcher_Sender(const QDBusServiceWatcher* self);
    friend QObject* QDBusServiceWatcher_QBaseSender(const QDBusServiceWatcher* self);
    friend int QDBusServiceWatcher_SenderSignalIndex(const QDBusServiceWatcher* self);
    friend int QDBusServiceWatcher_QBaseSenderSignalIndex(const QDBusServiceWatcher* self);
    friend int QDBusServiceWatcher_Receivers(const QDBusServiceWatcher* self, const char* signal);
    friend int QDBusServiceWatcher_QBaseReceivers(const QDBusServiceWatcher* self, const char* signal);
    friend bool QDBusServiceWatcher_IsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal);
    friend bool QDBusServiceWatcher_QBaseIsSignalConnected(const QDBusServiceWatcher* self, const QMetaMethod* signal);
};

#endif
