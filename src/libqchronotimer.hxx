#pragma once
#ifndef SRCC_LIBVIRTUALQCHRONOTIMER_H
#define SRCC_LIBVIRTUALQCHRONOTIMER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QChronoTimer so that we can call protected methods
class VirtualQChronoTimer final : public QChronoTimer {

  public:
    // Virtual class boolean flag
    bool isVirtualQChronoTimer = true;

    // Virtual class public types (including callbacks)
    using QChronoTimer_MetaObject_Callback = QMetaObject* (*)();
    using QChronoTimer_Metacast_Callback = void* (*)(QChronoTimer*, const char*);
    using QChronoTimer_Metacall_Callback = int (*)(QChronoTimer*, int, int, void**);
    using QChronoTimer_TimerEvent_Callback = void (*)(QChronoTimer*, QTimerEvent*);
    using QChronoTimer_Event_Callback = bool (*)(QChronoTimer*, QEvent*);
    using QChronoTimer_EventFilter_Callback = bool (*)(QChronoTimer*, QObject*, QEvent*);
    using QChronoTimer_ChildEvent_Callback = void (*)(QChronoTimer*, QChildEvent*);
    using QChronoTimer_CustomEvent_Callback = void (*)(QChronoTimer*, QEvent*);
    using QChronoTimer_ConnectNotify_Callback = void (*)(QChronoTimer*, QMetaMethod*);
    using QChronoTimer_DisconnectNotify_Callback = void (*)(QChronoTimer*, QMetaMethod*);
    using QChronoTimer_Sender_Callback = QObject* (*)();
    using QChronoTimer_SenderSignalIndex_Callback = int (*)();
    using QChronoTimer_Receivers_Callback = int (*)(const QChronoTimer*, const char*);
    using QChronoTimer_IsSignalConnected_Callback = bool (*)(const QChronoTimer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QChronoTimer_MetaObject_Callback qchronotimer_metaobject_callback = nullptr;
    QChronoTimer_Metacast_Callback qchronotimer_metacast_callback = nullptr;
    QChronoTimer_Metacall_Callback qchronotimer_metacall_callback = nullptr;
    QChronoTimer_TimerEvent_Callback qchronotimer_timerevent_callback = nullptr;
    QChronoTimer_Event_Callback qchronotimer_event_callback = nullptr;
    QChronoTimer_EventFilter_Callback qchronotimer_eventfilter_callback = nullptr;
    QChronoTimer_ChildEvent_Callback qchronotimer_childevent_callback = nullptr;
    QChronoTimer_CustomEvent_Callback qchronotimer_customevent_callback = nullptr;
    QChronoTimer_ConnectNotify_Callback qchronotimer_connectnotify_callback = nullptr;
    QChronoTimer_DisconnectNotify_Callback qchronotimer_disconnectnotify_callback = nullptr;
    QChronoTimer_Sender_Callback qchronotimer_sender_callback = nullptr;
    QChronoTimer_SenderSignalIndex_Callback qchronotimer_sendersignalindex_callback = nullptr;
    QChronoTimer_Receivers_Callback qchronotimer_receivers_callback = nullptr;
    QChronoTimer_IsSignalConnected_Callback qchronotimer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qchronotimer_metaobject_isbase = false;
    mutable bool qchronotimer_metacast_isbase = false;
    mutable bool qchronotimer_metacall_isbase = false;
    mutable bool qchronotimer_timerevent_isbase = false;
    mutable bool qchronotimer_event_isbase = false;
    mutable bool qchronotimer_eventfilter_isbase = false;
    mutable bool qchronotimer_childevent_isbase = false;
    mutable bool qchronotimer_customevent_isbase = false;
    mutable bool qchronotimer_connectnotify_isbase = false;
    mutable bool qchronotimer_disconnectnotify_isbase = false;
    mutable bool qchronotimer_sender_isbase = false;
    mutable bool qchronotimer_sendersignalindex_isbase = false;
    mutable bool qchronotimer_receivers_isbase = false;
    mutable bool qchronotimer_issignalconnected_isbase = false;

  public:
    VirtualQChronoTimer(std::chrono::nanoseconds nsec) : QChronoTimer(nsec) {};
    VirtualQChronoTimer() : QChronoTimer() {};
    VirtualQChronoTimer(std::chrono::nanoseconds nsec, QObject* parent) : QChronoTimer(nsec, parent) {};
    VirtualQChronoTimer(QObject* parent) : QChronoTimer(parent) {};

    // Callback setters
    inline void setQChronoTimer_MetaObject_Callback(QChronoTimer_MetaObject_Callback cb) { qchronotimer_metaobject_callback = cb; }
    inline void setQChronoTimer_Metacast_Callback(QChronoTimer_Metacast_Callback cb) { qchronotimer_metacast_callback = cb; }
    inline void setQChronoTimer_Metacall_Callback(QChronoTimer_Metacall_Callback cb) { qchronotimer_metacall_callback = cb; }
    inline void setQChronoTimer_TimerEvent_Callback(QChronoTimer_TimerEvent_Callback cb) { qchronotimer_timerevent_callback = cb; }
    inline void setQChronoTimer_Event_Callback(QChronoTimer_Event_Callback cb) { qchronotimer_event_callback = cb; }
    inline void setQChronoTimer_EventFilter_Callback(QChronoTimer_EventFilter_Callback cb) { qchronotimer_eventfilter_callback = cb; }
    inline void setQChronoTimer_ChildEvent_Callback(QChronoTimer_ChildEvent_Callback cb) { qchronotimer_childevent_callback = cb; }
    inline void setQChronoTimer_CustomEvent_Callback(QChronoTimer_CustomEvent_Callback cb) { qchronotimer_customevent_callback = cb; }
    inline void setQChronoTimer_ConnectNotify_Callback(QChronoTimer_ConnectNotify_Callback cb) { qchronotimer_connectnotify_callback = cb; }
    inline void setQChronoTimer_DisconnectNotify_Callback(QChronoTimer_DisconnectNotify_Callback cb) { qchronotimer_disconnectnotify_callback = cb; }
    inline void setQChronoTimer_Sender_Callback(QChronoTimer_Sender_Callback cb) { qchronotimer_sender_callback = cb; }
    inline void setQChronoTimer_SenderSignalIndex_Callback(QChronoTimer_SenderSignalIndex_Callback cb) { qchronotimer_sendersignalindex_callback = cb; }
    inline void setQChronoTimer_Receivers_Callback(QChronoTimer_Receivers_Callback cb) { qchronotimer_receivers_callback = cb; }
    inline void setQChronoTimer_IsSignalConnected_Callback(QChronoTimer_IsSignalConnected_Callback cb) { qchronotimer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQChronoTimer_MetaObject_IsBase(bool value) const { qchronotimer_metaobject_isbase = value; }
    inline void setQChronoTimer_Metacast_IsBase(bool value) const { qchronotimer_metacast_isbase = value; }
    inline void setQChronoTimer_Metacall_IsBase(bool value) const { qchronotimer_metacall_isbase = value; }
    inline void setQChronoTimer_TimerEvent_IsBase(bool value) const { qchronotimer_timerevent_isbase = value; }
    inline void setQChronoTimer_Event_IsBase(bool value) const { qchronotimer_event_isbase = value; }
    inline void setQChronoTimer_EventFilter_IsBase(bool value) const { qchronotimer_eventfilter_isbase = value; }
    inline void setQChronoTimer_ChildEvent_IsBase(bool value) const { qchronotimer_childevent_isbase = value; }
    inline void setQChronoTimer_CustomEvent_IsBase(bool value) const { qchronotimer_customevent_isbase = value; }
    inline void setQChronoTimer_ConnectNotify_IsBase(bool value) const { qchronotimer_connectnotify_isbase = value; }
    inline void setQChronoTimer_DisconnectNotify_IsBase(bool value) const { qchronotimer_disconnectnotify_isbase = value; }
    inline void setQChronoTimer_Sender_IsBase(bool value) const { qchronotimer_sender_isbase = value; }
    inline void setQChronoTimer_SenderSignalIndex_IsBase(bool value) const { qchronotimer_sendersignalindex_isbase = value; }
    inline void setQChronoTimer_Receivers_IsBase(bool value) const { qchronotimer_receivers_isbase = value; }
    inline void setQChronoTimer_IsSignalConnected_IsBase(bool value) const { qchronotimer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qchronotimer_metaobject_isbase) {
            qchronotimer_metaobject_isbase = false;
            return QChronoTimer::metaObject();
        }
        auto metaobject_cb = qchronotimer_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QChronoTimer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qchronotimer_metacast_isbase) {
            qchronotimer_metacast_isbase = false;
            return QChronoTimer::qt_metacast(param1);
        }
        auto metacast_cb = qchronotimer_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QChronoTimer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchronotimer_metacall_isbase) {
            qchronotimer_metacall_isbase = false;
            return QChronoTimer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qchronotimer_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QChronoTimer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qchronotimer_timerevent_isbase) {
            qchronotimer_timerevent_isbase = false;
            QChronoTimer::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qchronotimer_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        QChronoTimer::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchronotimer_event_isbase) {
            qchronotimer_event_isbase = false;
            return QChronoTimer::event(event);
        }
        auto event_cb = qchronotimer_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QChronoTimer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qchronotimer_eventfilter_isbase) {
            qchronotimer_eventfilter_isbase = false;
            return QChronoTimer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qchronotimer_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QChronoTimer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchronotimer_childevent_isbase) {
            qchronotimer_childevent_isbase = false;
            QChronoTimer::childEvent(event);
            return;
        }
        auto childevent_cb = qchronotimer_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QChronoTimer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchronotimer_customevent_isbase) {
            qchronotimer_customevent_isbase = false;
            QChronoTimer::customEvent(event);
            return;
        }
        auto customevent_cb = qchronotimer_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QChronoTimer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchronotimer_connectnotify_isbase) {
            qchronotimer_connectnotify_isbase = false;
            QChronoTimer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qchronotimer_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QChronoTimer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchronotimer_disconnectnotify_isbase) {
            qchronotimer_disconnectnotify_isbase = false;
            QChronoTimer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qchronotimer_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QChronoTimer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qchronotimer_sender_isbase) {
            qchronotimer_sender_isbase = false;
            return QChronoTimer::sender();
        }
        auto sender_cb = qchronotimer_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QChronoTimer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qchronotimer_sendersignalindex_isbase) {
            qchronotimer_sendersignalindex_isbase = false;
            return QChronoTimer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qchronotimer_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QChronoTimer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qchronotimer_receivers_isbase) {
            qchronotimer_receivers_isbase = false;
            return QChronoTimer::receivers(signal);
        }
        auto receivers_cb = qchronotimer_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QChronoTimer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qchronotimer_issignalconnected_isbase) {
            qchronotimer_issignalconnected_isbase = false;
            return QChronoTimer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qchronotimer_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QChronoTimer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1);
    friend void QChronoTimer_SuperTimerEvent(QChronoTimer* self, QTimerEvent* param1);
    friend void QChronoTimer_ChildEvent(QChronoTimer* self, QChildEvent* event);
    friend void QChronoTimer_SuperChildEvent(QChronoTimer* self, QChildEvent* event);
    friend void QChronoTimer_CustomEvent(QChronoTimer* self, QEvent* event);
    friend void QChronoTimer_SuperCustomEvent(QChronoTimer* self, QEvent* event);
    friend void QChronoTimer_ConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_SuperConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_DisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_SuperDisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend QObject* QChronoTimer_Sender(const QChronoTimer* self);
    friend QObject* QChronoTimer_SuperSender(const QChronoTimer* self);
    friend int QChronoTimer_SenderSignalIndex(const QChronoTimer* self);
    friend int QChronoTimer_SuperSenderSignalIndex(const QChronoTimer* self);
    friend int QChronoTimer_Receivers(const QChronoTimer* self, const char* signal);
    friend int QChronoTimer_SuperReceivers(const QChronoTimer* self, const char* signal);
    friend bool QChronoTimer_IsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal);
    friend bool QChronoTimer_SuperIsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal);
};

#endif
