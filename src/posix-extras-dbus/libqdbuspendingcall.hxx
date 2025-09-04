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

    ~VirtualQDBusPendingCallWatcher() {
        qdbuspendingcallwatcher_metacall_callback = nullptr;
        qdbuspendingcallwatcher_event_callback = nullptr;
        qdbuspendingcallwatcher_eventfilter_callback = nullptr;
        qdbuspendingcallwatcher_timerevent_callback = nullptr;
        qdbuspendingcallwatcher_childevent_callback = nullptr;
        qdbuspendingcallwatcher_customevent_callback = nullptr;
        qdbuspendingcallwatcher_connectnotify_callback = nullptr;
        qdbuspendingcallwatcher_disconnectnotify_callback = nullptr;
        qdbuspendingcallwatcher_sender_callback = nullptr;
        qdbuspendingcallwatcher_sendersignalindex_callback = nullptr;
        qdbuspendingcallwatcher_receivers_callback = nullptr;
        qdbuspendingcallwatcher_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbuspendingcallwatcher_metacall_isbase) {
            qdbuspendingcallwatcher_metacall_isbase = false;
            return QDBusPendingCallWatcher::qt_metacall(param1, param2, param3);
        } else if (qdbuspendingcallwatcher_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdbuspendingcallwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusPendingCallWatcher::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbuspendingcallwatcher_event_isbase) {
            qdbuspendingcallwatcher_event_isbase = false;
            return QDBusPendingCallWatcher::event(event);
        } else if (qdbuspendingcallwatcher_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdbuspendingcallwatcher_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusPendingCallWatcher::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbuspendingcallwatcher_eventfilter_isbase) {
            qdbuspendingcallwatcher_eventfilter_isbase = false;
            return QDBusPendingCallWatcher::eventFilter(watched, event);
        } else if (qdbuspendingcallwatcher_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdbuspendingcallwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDBusPendingCallWatcher::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbuspendingcallwatcher_timerevent_isbase) {
            qdbuspendingcallwatcher_timerevent_isbase = false;
            QDBusPendingCallWatcher::timerEvent(event);
        } else if (qdbuspendingcallwatcher_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdbuspendingcallwatcher_timerevent_callback(this, cbval1);
        } else {
            QDBusPendingCallWatcher::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbuspendingcallwatcher_childevent_isbase) {
            qdbuspendingcallwatcher_childevent_isbase = false;
            QDBusPendingCallWatcher::childEvent(event);
        } else if (qdbuspendingcallwatcher_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdbuspendingcallwatcher_childevent_callback(this, cbval1);
        } else {
            QDBusPendingCallWatcher::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbuspendingcallwatcher_customevent_isbase) {
            qdbuspendingcallwatcher_customevent_isbase = false;
            QDBusPendingCallWatcher::customEvent(event);
        } else if (qdbuspendingcallwatcher_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdbuspendingcallwatcher_customevent_callback(this, cbval1);
        } else {
            QDBusPendingCallWatcher::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbuspendingcallwatcher_connectnotify_isbase) {
            qdbuspendingcallwatcher_connectnotify_isbase = false;
            QDBusPendingCallWatcher::connectNotify(signal);
        } else if (qdbuspendingcallwatcher_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbuspendingcallwatcher_connectnotify_callback(this, cbval1);
        } else {
            QDBusPendingCallWatcher::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbuspendingcallwatcher_disconnectnotify_isbase) {
            qdbuspendingcallwatcher_disconnectnotify_isbase = false;
            QDBusPendingCallWatcher::disconnectNotify(signal);
        } else if (qdbuspendingcallwatcher_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbuspendingcallwatcher_disconnectnotify_callback(this, cbval1);
        } else {
            QDBusPendingCallWatcher::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbuspendingcallwatcher_sender_isbase) {
            qdbuspendingcallwatcher_sender_isbase = false;
            return QDBusPendingCallWatcher::sender();
        } else if (qdbuspendingcallwatcher_sender_callback != nullptr) {
            QObject* callback_ret = qdbuspendingcallwatcher_sender_callback();
            return callback_ret;
        } else {
            return QDBusPendingCallWatcher::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbuspendingcallwatcher_sendersignalindex_isbase) {
            qdbuspendingcallwatcher_sendersignalindex_isbase = false;
            return QDBusPendingCallWatcher::senderSignalIndex();
        } else if (qdbuspendingcallwatcher_sendersignalindex_callback != nullptr) {
            int callback_ret = qdbuspendingcallwatcher_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDBusPendingCallWatcher::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbuspendingcallwatcher_receivers_isbase) {
            qdbuspendingcallwatcher_receivers_isbase = false;
            return QDBusPendingCallWatcher::receivers(signal);
        } else if (qdbuspendingcallwatcher_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdbuspendingcallwatcher_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusPendingCallWatcher::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbuspendingcallwatcher_issignalconnected_isbase) {
            qdbuspendingcallwatcher_issignalconnected_isbase = false;
            return QDBusPendingCallWatcher::isSignalConnected(signal);
        } else if (qdbuspendingcallwatcher_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdbuspendingcallwatcher_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusPendingCallWatcher::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDBusPendingCallWatcher_TimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
    friend void QDBusPendingCallWatcher_QBaseTimerEvent(QDBusPendingCallWatcher* self, QTimerEvent* event);
    friend void QDBusPendingCallWatcher_ChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
    friend void QDBusPendingCallWatcher_QBaseChildEvent(QDBusPendingCallWatcher* self, QChildEvent* event);
    friend void QDBusPendingCallWatcher_CustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
    friend void QDBusPendingCallWatcher_QBaseCustomEvent(QDBusPendingCallWatcher* self, QEvent* event);
    friend void QDBusPendingCallWatcher_ConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_QBaseConnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_DisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend void QDBusPendingCallWatcher_QBaseDisconnectNotify(QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend QObject* QDBusPendingCallWatcher_Sender(const QDBusPendingCallWatcher* self);
    friend QObject* QDBusPendingCallWatcher_QBaseSender(const QDBusPendingCallWatcher* self);
    friend int QDBusPendingCallWatcher_SenderSignalIndex(const QDBusPendingCallWatcher* self);
    friend int QDBusPendingCallWatcher_QBaseSenderSignalIndex(const QDBusPendingCallWatcher* self);
    friend int QDBusPendingCallWatcher_Receivers(const QDBusPendingCallWatcher* self, const char* signal);
    friend int QDBusPendingCallWatcher_QBaseReceivers(const QDBusPendingCallWatcher* self, const char* signal);
    friend bool QDBusPendingCallWatcher_IsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal);
    friend bool QDBusPendingCallWatcher_QBaseIsSignalConnected(const QDBusPendingCallWatcher* self, const QMetaMethod* signal);
};

#endif
