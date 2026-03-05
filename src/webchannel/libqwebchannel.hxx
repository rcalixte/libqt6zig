#pragma once
#ifndef SRC_WEBCHANNELC_LIBVIRTUALQWEBCHANNEL_H
#define SRC_WEBCHANNELC_LIBVIRTUALQWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebChannel so that we can call protected methods
class VirtualQWebChannel final : public QWebChannel {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebChannel = true;

    // Virtual class public types (including callbacks)
    using QWebChannel_MetaObject_Callback = QMetaObject* (*)();
    using QWebChannel_Metacast_Callback = void* (*)(QWebChannel*, const char*);
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
    QWebChannel_MetaObject_Callback qwebchannel_metaobject_callback = nullptr;
    QWebChannel_Metacast_Callback qwebchannel_metacast_callback = nullptr;
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
    mutable bool qwebchannel_metaobject_isbase = false;
    mutable bool qwebchannel_metacast_isbase = false;
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

    // Callback setters
    inline void setQWebChannel_MetaObject_Callback(QWebChannel_MetaObject_Callback cb) { qwebchannel_metaobject_callback = cb; }
    inline void setQWebChannel_Metacast_Callback(QWebChannel_Metacast_Callback cb) { qwebchannel_metacast_callback = cb; }
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
    inline void setQWebChannel_MetaObject_IsBase(bool value) const { qwebchannel_metaobject_isbase = value; }
    inline void setQWebChannel_Metacast_IsBase(bool value) const { qwebchannel_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qwebchannel_metaobject_isbase) {
            qwebchannel_metaobject_isbase = false;
            return QWebChannel::metaObject();
        }
        auto metaobject_cb = qwebchannel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWebChannel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebchannel_metacast_isbase) {
            qwebchannel_metacast_isbase = false;
            return QWebChannel::qt_metacast(param1);
        }
        auto metacast_cb = qwebchannel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWebChannel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebchannel_metacall_isbase) {
            qwebchannel_metacall_isbase = false;
            return QWebChannel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwebchannel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebChannel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebchannel_event_isbase) {
            qwebchannel_event_isbase = false;
            return QWebChannel::event(event);
        }
        auto event_cb = qwebchannel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWebChannel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebchannel_eventfilter_isbase) {
            qwebchannel_eventfilter_isbase = false;
            return QWebChannel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwebchannel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebChannel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebchannel_timerevent_isbase) {
            qwebchannel_timerevent_isbase = false;
            QWebChannel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwebchannel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWebChannel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebchannel_childevent_isbase) {
            qwebchannel_childevent_isbase = false;
            QWebChannel::childEvent(event);
            return;
        }
        auto childevent_cb = qwebchannel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWebChannel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebchannel_customevent_isbase) {
            qwebchannel_customevent_isbase = false;
            QWebChannel::customEvent(event);
            return;
        }
        auto customevent_cb = qwebchannel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWebChannel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebchannel_connectnotify_isbase) {
            qwebchannel_connectnotify_isbase = false;
            QWebChannel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwebchannel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWebChannel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebchannel_disconnectnotify_isbase) {
            qwebchannel_disconnectnotify_isbase = false;
            QWebChannel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwebchannel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWebChannel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebchannel_sender_isbase) {
            qwebchannel_sender_isbase = false;
            return QWebChannel::sender();
        }
        auto sender_cb = qwebchannel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWebChannel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebchannel_sendersignalindex_isbase) {
            qwebchannel_sendersignalindex_isbase = false;
            return QWebChannel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwebchannel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWebChannel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebchannel_receivers_isbase) {
            qwebchannel_receivers_isbase = false;
            return QWebChannel::receivers(signal);
        }
        auto receivers_cb = qwebchannel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebChannel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebchannel_issignalconnected_isbase) {
            qwebchannel_issignalconnected_isbase = false;
            return QWebChannel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwebchannel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWebChannel::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWebChannel_TimerEvent(QWebChannel* self, QTimerEvent* event);
    friend void QWebChannel_SuperTimerEvent(QWebChannel* self, QTimerEvent* event);
    friend void QWebChannel_ChildEvent(QWebChannel* self, QChildEvent* event);
    friend void QWebChannel_SuperChildEvent(QWebChannel* self, QChildEvent* event);
    friend void QWebChannel_CustomEvent(QWebChannel* self, QEvent* event);
    friend void QWebChannel_SuperCustomEvent(QWebChannel* self, QEvent* event);
    friend void QWebChannel_ConnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_SuperConnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_DisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend void QWebChannel_SuperDisconnectNotify(QWebChannel* self, const QMetaMethod* signal);
    friend QObject* QWebChannel_Sender(const QWebChannel* self);
    friend QObject* QWebChannel_SuperSender(const QWebChannel* self);
    friend int QWebChannel_SenderSignalIndex(const QWebChannel* self);
    friend int QWebChannel_SuperSenderSignalIndex(const QWebChannel* self);
    friend int QWebChannel_Receivers(const QWebChannel* self, const char* signal);
    friend int QWebChannel_SuperReceivers(const QWebChannel* self, const char* signal);
    friend bool QWebChannel_IsSignalConnected(const QWebChannel* self, const QMetaMethod* signal);
    friend bool QWebChannel_SuperIsSignalConnected(const QWebChannel* self, const QMetaMethod* signal);
};

#endif
