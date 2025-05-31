#pragma once
#ifndef SRC_WEBCHANNELC_LIBVIRTUALQQMLWEBCHANNEL_H
#define SRC_WEBCHANNELC_LIBVIRTUALQQMLWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlWebChannel so that we can call protected methods
class VirtualQQmlWebChannel final : public QQmlWebChannel {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlWebChannel = true;

    // Virtual class public types (including callbacks)
    using QQmlWebChannel_Metacall_Callback = int (*)(QQmlWebChannel*, int, int, void**);
    using QQmlWebChannel_Event_Callback = bool (*)(QQmlWebChannel*, QEvent*);
    using QQmlWebChannel_EventFilter_Callback = bool (*)(QQmlWebChannel*, QObject*, QEvent*);
    using QQmlWebChannel_TimerEvent_Callback = void (*)(QQmlWebChannel*, QTimerEvent*);
    using QQmlWebChannel_ChildEvent_Callback = void (*)(QQmlWebChannel*, QChildEvent*);
    using QQmlWebChannel_CustomEvent_Callback = void (*)(QQmlWebChannel*, QEvent*);
    using QQmlWebChannel_ConnectNotify_Callback = void (*)(QQmlWebChannel*, QMetaMethod*);
    using QQmlWebChannel_DisconnectNotify_Callback = void (*)(QQmlWebChannel*, QMetaMethod*);
    using QQmlWebChannel_Sender_Callback = QObject* (*)();
    using QQmlWebChannel_SenderSignalIndex_Callback = int (*)();
    using QQmlWebChannel_Receivers_Callback = int (*)(const QQmlWebChannel*, const char*);
    using QQmlWebChannel_IsSignalConnected_Callback = bool (*)(const QQmlWebChannel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlWebChannel_Metacall_Callback qqmlwebchannel_metacall_callback = nullptr;
    QQmlWebChannel_Event_Callback qqmlwebchannel_event_callback = nullptr;
    QQmlWebChannel_EventFilter_Callback qqmlwebchannel_eventfilter_callback = nullptr;
    QQmlWebChannel_TimerEvent_Callback qqmlwebchannel_timerevent_callback = nullptr;
    QQmlWebChannel_ChildEvent_Callback qqmlwebchannel_childevent_callback = nullptr;
    QQmlWebChannel_CustomEvent_Callback qqmlwebchannel_customevent_callback = nullptr;
    QQmlWebChannel_ConnectNotify_Callback qqmlwebchannel_connectnotify_callback = nullptr;
    QQmlWebChannel_DisconnectNotify_Callback qqmlwebchannel_disconnectnotify_callback = nullptr;
    QQmlWebChannel_Sender_Callback qqmlwebchannel_sender_callback = nullptr;
    QQmlWebChannel_SenderSignalIndex_Callback qqmlwebchannel_sendersignalindex_callback = nullptr;
    QQmlWebChannel_Receivers_Callback qqmlwebchannel_receivers_callback = nullptr;
    QQmlWebChannel_IsSignalConnected_Callback qqmlwebchannel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlwebchannel_metacall_isbase = false;
    mutable bool qqmlwebchannel_event_isbase = false;
    mutable bool qqmlwebchannel_eventfilter_isbase = false;
    mutable bool qqmlwebchannel_timerevent_isbase = false;
    mutable bool qqmlwebchannel_childevent_isbase = false;
    mutable bool qqmlwebchannel_customevent_isbase = false;
    mutable bool qqmlwebchannel_connectnotify_isbase = false;
    mutable bool qqmlwebchannel_disconnectnotify_isbase = false;
    mutable bool qqmlwebchannel_sender_isbase = false;
    mutable bool qqmlwebchannel_sendersignalindex_isbase = false;
    mutable bool qqmlwebchannel_receivers_isbase = false;
    mutable bool qqmlwebchannel_issignalconnected_isbase = false;

  public:
    VirtualQQmlWebChannel() : QQmlWebChannel(){};
    VirtualQQmlWebChannel(QObject* parent) : QQmlWebChannel(parent){};

    ~VirtualQQmlWebChannel() {
        qqmlwebchannel_metacall_callback = nullptr;
        qqmlwebchannel_event_callback = nullptr;
        qqmlwebchannel_eventfilter_callback = nullptr;
        qqmlwebchannel_timerevent_callback = nullptr;
        qqmlwebchannel_childevent_callback = nullptr;
        qqmlwebchannel_customevent_callback = nullptr;
        qqmlwebchannel_connectnotify_callback = nullptr;
        qqmlwebchannel_disconnectnotify_callback = nullptr;
        qqmlwebchannel_sender_callback = nullptr;
        qqmlwebchannel_sendersignalindex_callback = nullptr;
        qqmlwebchannel_receivers_callback = nullptr;
        qqmlwebchannel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQQmlWebChannel_Metacall_Callback(QQmlWebChannel_Metacall_Callback cb) { qqmlwebchannel_metacall_callback = cb; }
    inline void setQQmlWebChannel_Event_Callback(QQmlWebChannel_Event_Callback cb) { qqmlwebchannel_event_callback = cb; }
    inline void setQQmlWebChannel_EventFilter_Callback(QQmlWebChannel_EventFilter_Callback cb) { qqmlwebchannel_eventfilter_callback = cb; }
    inline void setQQmlWebChannel_TimerEvent_Callback(QQmlWebChannel_TimerEvent_Callback cb) { qqmlwebchannel_timerevent_callback = cb; }
    inline void setQQmlWebChannel_ChildEvent_Callback(QQmlWebChannel_ChildEvent_Callback cb) { qqmlwebchannel_childevent_callback = cb; }
    inline void setQQmlWebChannel_CustomEvent_Callback(QQmlWebChannel_CustomEvent_Callback cb) { qqmlwebchannel_customevent_callback = cb; }
    inline void setQQmlWebChannel_ConnectNotify_Callback(QQmlWebChannel_ConnectNotify_Callback cb) { qqmlwebchannel_connectnotify_callback = cb; }
    inline void setQQmlWebChannel_DisconnectNotify_Callback(QQmlWebChannel_DisconnectNotify_Callback cb) { qqmlwebchannel_disconnectnotify_callback = cb; }
    inline void setQQmlWebChannel_Sender_Callback(QQmlWebChannel_Sender_Callback cb) { qqmlwebchannel_sender_callback = cb; }
    inline void setQQmlWebChannel_SenderSignalIndex_Callback(QQmlWebChannel_SenderSignalIndex_Callback cb) { qqmlwebchannel_sendersignalindex_callback = cb; }
    inline void setQQmlWebChannel_Receivers_Callback(QQmlWebChannel_Receivers_Callback cb) { qqmlwebchannel_receivers_callback = cb; }
    inline void setQQmlWebChannel_IsSignalConnected_Callback(QQmlWebChannel_IsSignalConnected_Callback cb) { qqmlwebchannel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlWebChannel_Metacall_IsBase(bool value) const { qqmlwebchannel_metacall_isbase = value; }
    inline void setQQmlWebChannel_Event_IsBase(bool value) const { qqmlwebchannel_event_isbase = value; }
    inline void setQQmlWebChannel_EventFilter_IsBase(bool value) const { qqmlwebchannel_eventfilter_isbase = value; }
    inline void setQQmlWebChannel_TimerEvent_IsBase(bool value) const { qqmlwebchannel_timerevent_isbase = value; }
    inline void setQQmlWebChannel_ChildEvent_IsBase(bool value) const { qqmlwebchannel_childevent_isbase = value; }
    inline void setQQmlWebChannel_CustomEvent_IsBase(bool value) const { qqmlwebchannel_customevent_isbase = value; }
    inline void setQQmlWebChannel_ConnectNotify_IsBase(bool value) const { qqmlwebchannel_connectnotify_isbase = value; }
    inline void setQQmlWebChannel_DisconnectNotify_IsBase(bool value) const { qqmlwebchannel_disconnectnotify_isbase = value; }
    inline void setQQmlWebChannel_Sender_IsBase(bool value) const { qqmlwebchannel_sender_isbase = value; }
    inline void setQQmlWebChannel_SenderSignalIndex_IsBase(bool value) const { qqmlwebchannel_sendersignalindex_isbase = value; }
    inline void setQQmlWebChannel_Receivers_IsBase(bool value) const { qqmlwebchannel_receivers_isbase = value; }
    inline void setQQmlWebChannel_IsSignalConnected_IsBase(bool value) const { qqmlwebchannel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlwebchannel_metacall_isbase) {
            qqmlwebchannel_metacall_isbase = false;
            return QQmlWebChannel::qt_metacall(param1, param2, param3);
        } else if (qqmlwebchannel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qqmlwebchannel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QQmlWebChannel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlwebchannel_event_isbase) {
            qqmlwebchannel_event_isbase = false;
            return QQmlWebChannel::event(event);
        } else if (qqmlwebchannel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qqmlwebchannel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QQmlWebChannel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlwebchannel_eventfilter_isbase) {
            qqmlwebchannel_eventfilter_isbase = false;
            return QQmlWebChannel::eventFilter(watched, event);
        } else if (qqmlwebchannel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qqmlwebchannel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QQmlWebChannel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlwebchannel_timerevent_isbase) {
            qqmlwebchannel_timerevent_isbase = false;
            QQmlWebChannel::timerEvent(event);
        } else if (qqmlwebchannel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qqmlwebchannel_timerevent_callback(this, cbval1);
        } else {
            QQmlWebChannel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlwebchannel_childevent_isbase) {
            qqmlwebchannel_childevent_isbase = false;
            QQmlWebChannel::childEvent(event);
        } else if (qqmlwebchannel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qqmlwebchannel_childevent_callback(this, cbval1);
        } else {
            QQmlWebChannel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlwebchannel_customevent_isbase) {
            qqmlwebchannel_customevent_isbase = false;
            QQmlWebChannel::customEvent(event);
        } else if (qqmlwebchannel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qqmlwebchannel_customevent_callback(this, cbval1);
        } else {
            QQmlWebChannel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlwebchannel_connectnotify_isbase) {
            qqmlwebchannel_connectnotify_isbase = false;
            QQmlWebChannel::connectNotify(signal);
        } else if (qqmlwebchannel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qqmlwebchannel_connectnotify_callback(this, cbval1);
        } else {
            QQmlWebChannel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlwebchannel_disconnectnotify_isbase) {
            qqmlwebchannel_disconnectnotify_isbase = false;
            QQmlWebChannel::disconnectNotify(signal);
        } else if (qqmlwebchannel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qqmlwebchannel_disconnectnotify_callback(this, cbval1);
        } else {
            QQmlWebChannel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlwebchannel_sender_isbase) {
            qqmlwebchannel_sender_isbase = false;
            return QQmlWebChannel::sender();
        } else if (qqmlwebchannel_sender_callback != nullptr) {
            QObject* callback_ret = qqmlwebchannel_sender_callback();
            return callback_ret;
        } else {
            return QQmlWebChannel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlwebchannel_sendersignalindex_isbase) {
            qqmlwebchannel_sendersignalindex_isbase = false;
            return QQmlWebChannel::senderSignalIndex();
        } else if (qqmlwebchannel_sendersignalindex_callback != nullptr) {
            int callback_ret = qqmlwebchannel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QQmlWebChannel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlwebchannel_receivers_isbase) {
            qqmlwebchannel_receivers_isbase = false;
            return QQmlWebChannel::receivers(signal);
        } else if (qqmlwebchannel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qqmlwebchannel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QQmlWebChannel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlwebchannel_issignalconnected_isbase) {
            qqmlwebchannel_issignalconnected_isbase = false;
            return QQmlWebChannel::isSignalConnected(signal);
        } else if (qqmlwebchannel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qqmlwebchannel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QQmlWebChannel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QQmlWebChannel_TimerEvent(QQmlWebChannel* self, QTimerEvent* event);
    friend void QQmlWebChannel_QBaseTimerEvent(QQmlWebChannel* self, QTimerEvent* event);
    friend void QQmlWebChannel_ChildEvent(QQmlWebChannel* self, QChildEvent* event);
    friend void QQmlWebChannel_QBaseChildEvent(QQmlWebChannel* self, QChildEvent* event);
    friend void QQmlWebChannel_CustomEvent(QQmlWebChannel* self, QEvent* event);
    friend void QQmlWebChannel_QBaseCustomEvent(QQmlWebChannel* self, QEvent* event);
    friend void QQmlWebChannel_ConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
    friend void QQmlWebChannel_QBaseConnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
    friend void QQmlWebChannel_DisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
    friend void QQmlWebChannel_QBaseDisconnectNotify(QQmlWebChannel* self, const QMetaMethod* signal);
    friend QObject* QQmlWebChannel_Sender(const QQmlWebChannel* self);
    friend QObject* QQmlWebChannel_QBaseSender(const QQmlWebChannel* self);
    friend int QQmlWebChannel_SenderSignalIndex(const QQmlWebChannel* self);
    friend int QQmlWebChannel_QBaseSenderSignalIndex(const QQmlWebChannel* self);
    friend int QQmlWebChannel_Receivers(const QQmlWebChannel* self, const char* signal);
    friend int QQmlWebChannel_QBaseReceivers(const QQmlWebChannel* self, const char* signal);
    friend bool QQmlWebChannel_IsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal);
    friend bool QQmlWebChannel_QBaseIsSignalConnected(const QQmlWebChannel* self, const QMetaMethod* signal);
};

#endif
