#pragma once
#ifndef SRC_WEBCHANNELC_LIBVIRTUALQWEBCHANNEL_H
#define SRC_WEBCHANNELC_LIBVIRTUALQWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebChannel so that we can call protected methods
class VirtualQWebChannel final : public QWebChannel {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebChannel = true;

    // Virtual class public types (including callbacks)
    using QWebChannel_Metacall_Callback = int (*)(QWebChannel*, int, int, void**);
    using QWebChannel_Event_Callback = bool (*)(QWebChannel*, QEvent*);
    using QWebChannel_EventFilter_Callback = bool (*)(QWebChannel*, QObject*, QEvent*);
    using QWebChannel_TimerEvent_Callback = void (*)(QWebChannel*, QTimerEvent*);
    using QWebChannel_ChildEvent_Callback = void (*)(QWebChannel*, QChildEvent*);
    using QWebChannel_CustomEvent_Callback = void (*)(QWebChannel*, QEvent*);
    using QWebChannel_ConnectNotify_Callback = void (*)(QWebChannel*, QMetaMethod*);
    using QWebChannel_DisconnectNotify_Callback = void (*)(QWebChannel*, QMetaMethod*);
    using QWebChannel_Sender_Callback = QObject* (*)();
    using QWebChannel_SenderSignalIndex_Callback = int (*)();
    using QWebChannel_Receivers_Callback = int (*)(const QWebChannel*, const char*);
    using QWebChannel_IsSignalConnected_Callback = bool (*)(const QWebChannel*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWebChannel_Metacall_Callback qwebchannel_metacall_callback = nullptr;
    QWebChannel_Event_Callback qwebchannel_event_callback = nullptr;
    QWebChannel_EventFilter_Callback qwebchannel_eventfilter_callback = nullptr;
    QWebChannel_TimerEvent_Callback qwebchannel_timerevent_callback = nullptr;
    QWebChannel_ChildEvent_Callback qwebchannel_childevent_callback = nullptr;
    QWebChannel_CustomEvent_Callback qwebchannel_customevent_callback = nullptr;
    QWebChannel_ConnectNotify_Callback qwebchannel_connectnotify_callback = nullptr;
    QWebChannel_DisconnectNotify_Callback qwebchannel_disconnectnotify_callback = nullptr;
    QWebChannel_Sender_Callback qwebchannel_sender_callback = nullptr;
    QWebChannel_SenderSignalIndex_Callback qwebchannel_sendersignalindex_callback = nullptr;
    QWebChannel_Receivers_Callback qwebchannel_receivers_callback = nullptr;
    QWebChannel_IsSignalConnected_Callback qwebchannel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebchannel_metacall_isbase = false;
    mutable bool qwebchannel_event_isbase = false;
    mutable bool qwebchannel_eventfilter_isbase = false;
    mutable bool qwebchannel_timerevent_isbase = false;
    mutable bool qwebchannel_childevent_isbase = false;
    mutable bool qwebchannel_customevent_isbase = false;
    mutable bool qwebchannel_connectnotify_isbase = false;
    mutable bool qwebchannel_disconnectnotify_isbase = false;
    mutable bool qwebchannel_sender_isbase = false;
    mutable bool qwebchannel_sendersignalindex_isbase = false;
    mutable bool qwebchannel_receivers_isbase = false;
    mutable bool qwebchannel_issignalconnected_isbase = false;

  public:
    VirtualQWebChannel() : QWebChannel() {};
    VirtualQWebChannel(QObject* parent) : QWebChannel(parent) {};

    ~VirtualQWebChannel() {
        qwebchannel_metacall_callback = nullptr;
        qwebchannel_event_callback = nullptr;
        qwebchannel_eventfilter_callback = nullptr;
        qwebchannel_timerevent_callback = nullptr;
        qwebchannel_childevent_callback = nullptr;
        qwebchannel_customevent_callback = nullptr;
        qwebchannel_connectnotify_callback = nullptr;
        qwebchannel_disconnectnotify_callback = nullptr;
        qwebchannel_sender_callback = nullptr;
        qwebchannel_sendersignalindex_callback = nullptr;
        qwebchannel_receivers_callback = nullptr;
        qwebchannel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQWebChannel_Metacall_Callback(QWebChannel_Metacall_Callback cb) { qwebchannel_metacall_callback = cb; }
    inline void setQWebChannel_Event_Callback(QWebChannel_Event_Callback cb) { qwebchannel_event_callback = cb; }
    inline void setQWebChannel_EventFilter_Callback(QWebChannel_EventFilter_Callback cb) { qwebchannel_eventfilter_callback = cb; }
    inline void setQWebChannel_TimerEvent_Callback(QWebChannel_TimerEvent_Callback cb) { qwebchannel_timerevent_callback = cb; }
    inline void setQWebChannel_ChildEvent_Callback(QWebChannel_ChildEvent_Callback cb) { qwebchannel_childevent_callback = cb; }
    inline void setQWebChannel_CustomEvent_Callback(QWebChannel_CustomEvent_Callback cb) { qwebchannel_customevent_callback = cb; }
    inline void setQWebChannel_ConnectNotify_Callback(QWebChannel_ConnectNotify_Callback cb) { qwebchannel_connectnotify_callback = cb; }
    inline void setQWebChannel_DisconnectNotify_Callback(QWebChannel_DisconnectNotify_Callback cb) { qwebchannel_disconnectnotify_callback = cb; }
    inline void setQWebChannel_Sender_Callback(QWebChannel_Sender_Callback cb) { qwebchannel_sender_callback = cb; }
    inline void setQWebChannel_SenderSignalIndex_Callback(QWebChannel_SenderSignalIndex_Callback cb) { qwebchannel_sendersignalindex_callback = cb; }
    inline void setQWebChannel_Receivers_Callback(QWebChannel_Receivers_Callback cb) { qwebchannel_receivers_callback = cb; }
    inline void setQWebChannel_IsSignalConnected_Callback(QWebChannel_IsSignalConnected_Callback cb) { qwebchannel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebChannel_Metacall_IsBase(bool value) const { qwebchannel_metacall_isbase = value; }
    inline void setQWebChannel_Event_IsBase(bool value) const { qwebchannel_event_isbase = value; }
    inline void setQWebChannel_EventFilter_IsBase(bool value) const { qwebchannel_eventfilter_isbase = value; }
    inline void setQWebChannel_TimerEvent_IsBase(bool value) const { qwebchannel_timerevent_isbase = value; }
    inline void setQWebChannel_ChildEvent_IsBase(bool value) const { qwebchannel_childevent_isbase = value; }
    inline void setQWebChannel_CustomEvent_IsBase(bool value) const { qwebchannel_customevent_isbase = value; }
    inline void setQWebChannel_ConnectNotify_IsBase(bool value) const { qwebchannel_connectnotify_isbase = value; }
    inline void setQWebChannel_DisconnectNotify_IsBase(bool value) const { qwebchannel_disconnectnotify_isbase = value; }
    inline void setQWebChannel_Sender_IsBase(bool value) const { qwebchannel_sender_isbase = value; }
    inline void setQWebChannel_SenderSignalIndex_IsBase(bool value) const { qwebchannel_sendersignalindex_isbase = value; }
    inline void setQWebChannel_Receivers_IsBase(bool value) const { qwebchannel_receivers_isbase = value; }
    inline void setQWebChannel_IsSignalConnected_IsBase(bool value) const { qwebchannel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebchannel_metacall_isbase) {
            qwebchannel_metacall_isbase = false;
            return QWebChannel::qt_metacall(param1, param2, param3);
        } else if (qwebchannel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qwebchannel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QWebChannel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebchannel_event_isbase) {
            qwebchannel_event_isbase = false;
            return QWebChannel::event(event);
        } else if (qwebchannel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qwebchannel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWebChannel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebchannel_eventfilter_isbase) {
            qwebchannel_eventfilter_isbase = false;
            return QWebChannel::eventFilter(watched, event);
        } else if (qwebchannel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qwebchannel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWebChannel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebchannel_timerevent_isbase) {
            qwebchannel_timerevent_isbase = false;
            QWebChannel::timerEvent(event);
        } else if (qwebchannel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qwebchannel_timerevent_callback(this, cbval1);
        } else {
            QWebChannel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebchannel_childevent_isbase) {
            qwebchannel_childevent_isbase = false;
            QWebChannel::childEvent(event);
        } else if (qwebchannel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qwebchannel_childevent_callback(this, cbval1);
        } else {
            QWebChannel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebchannel_customevent_isbase) {
            qwebchannel_customevent_isbase = false;
            QWebChannel::customEvent(event);
        } else if (qwebchannel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qwebchannel_customevent_callback(this, cbval1);
        } else {
            QWebChannel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebchannel_connectnotify_isbase) {
            qwebchannel_connectnotify_isbase = false;
            QWebChannel::connectNotify(signal);
        } else if (qwebchannel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwebchannel_connectnotify_callback(this, cbval1);
        } else {
            QWebChannel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebchannel_disconnectnotify_isbase) {
            qwebchannel_disconnectnotify_isbase = false;
            QWebChannel::disconnectNotify(signal);
        } else if (qwebchannel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwebchannel_disconnectnotify_callback(this, cbval1);
        } else {
            QWebChannel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebchannel_sender_isbase) {
            qwebchannel_sender_isbase = false;
            return QWebChannel::sender();
        } else if (qwebchannel_sender_callback != nullptr) {
            QObject* callback_ret = qwebchannel_sender_callback();
            return callback_ret;
        } else {
            return QWebChannel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebchannel_sendersignalindex_isbase) {
            qwebchannel_sendersignalindex_isbase = false;
            return QWebChannel::senderSignalIndex();
        } else if (qwebchannel_sendersignalindex_callback != nullptr) {
            int callback_ret = qwebchannel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QWebChannel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebchannel_receivers_isbase) {
            qwebchannel_receivers_isbase = false;
            return QWebChannel::receivers(signal);
        } else if (qwebchannel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qwebchannel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWebChannel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebchannel_issignalconnected_isbase) {
            qwebchannel_issignalconnected_isbase = false;
            return QWebChannel::isSignalConnected(signal);
        } else if (qwebchannel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qwebchannel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWebChannel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QWebChannel_TimerEvent(QWebChannel* self, QTimerEvent* event);
    friend void QWebChannel_QBaseTimerEvent(QWebChannel* self, QTimerEvent* event);
    friend void QWebChannel_ChildEvent(QWebChannel* self, QChildEvent* event);
    friend void QWebChannel_QBaseChildEvent(QWebChannel* self, QChildEvent* event);
    friend void QWebChannel_CustomEvent(QWebChannel* self, QEvent* event);
    friend void QWebChannel_QBaseCustomEvent(QWebChannel* self, QEvent* event);
    friend void QWebChannel_ConnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_QBaseConnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_DisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_QBaseDisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend QObject* QWebChannel_Sender(const QWebChannel* self);
    friend QObject* QWebChannel_QBaseSender(const QWebChannel* self);
    friend int QWebChannel_SenderSignalIndex(const QWebChannel* self);
    friend int QWebChannel_QBaseSenderSignalIndex(const QWebChannel* self);
    friend int QWebChannel_Receivers(const QWebChannel* self, const char* signal);
    friend int QWebChannel_QBaseReceivers(const QWebChannel* self, const char* signal);
    friend bool QWebChannel_IsSignalConnected(const QWebChannel* self, const QMetaMethod* signal);
    friend bool QWebChannel_QBaseIsSignalConnected(const QWebChannel* self, const QMetaMethod* signal);
};

#endif
