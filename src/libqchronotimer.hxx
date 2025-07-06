#pragma once
#ifndef SRCC_LIBVIRTUALQCHRONOTIMER_H
#define SRCC_LIBVIRTUALQCHRONOTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QChronoTimer so that we can call protected methods
class VirtualQChronoTimer final : public QChronoTimer {

  public:
    // Virtual class boolean flag
    bool isVirtualQChronoTimer = true;

    // Virtual class public types (including callbacks)
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
    VirtualQChronoTimer() : QChronoTimer() {};
    VirtualQChronoTimer(QObject* parent) : QChronoTimer(parent) {};

    ~VirtualQChronoTimer() {
        qchronotimer_metacall_callback = nullptr;
        qchronotimer_timerevent_callback = nullptr;
        qchronotimer_event_callback = nullptr;
        qchronotimer_eventfilter_callback = nullptr;
        qchronotimer_childevent_callback = nullptr;
        qchronotimer_customevent_callback = nullptr;
        qchronotimer_connectnotify_callback = nullptr;
        qchronotimer_disconnectnotify_callback = nullptr;
        qchronotimer_sender_callback = nullptr;
        qchronotimer_sendersignalindex_callback = nullptr;
        qchronotimer_receivers_callback = nullptr;
        qchronotimer_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchronotimer_metacall_isbase) {
            qchronotimer_metacall_isbase = false;
            return QChronoTimer::qt_metacall(param1, param2, param3);
        } else if (qchronotimer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qchronotimer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QChronoTimer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qchronotimer_timerevent_isbase) {
            qchronotimer_timerevent_isbase = false;
            QChronoTimer::timerEvent(param1);
        } else if (qchronotimer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            qchronotimer_timerevent_callback(this, cbval1);
        } else {
            QChronoTimer::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchronotimer_event_isbase) {
            qchronotimer_event_isbase = false;
            return QChronoTimer::event(event);
        } else if (qchronotimer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qchronotimer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChronoTimer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qchronotimer_eventfilter_isbase) {
            qchronotimer_eventfilter_isbase = false;
            return QChronoTimer::eventFilter(watched, event);
        } else if (qchronotimer_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qchronotimer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QChronoTimer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchronotimer_childevent_isbase) {
            qchronotimer_childevent_isbase = false;
            QChronoTimer::childEvent(event);
        } else if (qchronotimer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qchronotimer_childevent_callback(this, cbval1);
        } else {
            QChronoTimer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchronotimer_customevent_isbase) {
            qchronotimer_customevent_isbase = false;
            QChronoTimer::customEvent(event);
        } else if (qchronotimer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qchronotimer_customevent_callback(this, cbval1);
        } else {
            QChronoTimer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchronotimer_connectnotify_isbase) {
            qchronotimer_connectnotify_isbase = false;
            QChronoTimer::connectNotify(signal);
        } else if (qchronotimer_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qchronotimer_connectnotify_callback(this, cbval1);
        } else {
            QChronoTimer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchronotimer_disconnectnotify_isbase) {
            qchronotimer_disconnectnotify_isbase = false;
            QChronoTimer::disconnectNotify(signal);
        } else if (qchronotimer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qchronotimer_disconnectnotify_callback(this, cbval1);
        } else {
            QChronoTimer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qchronotimer_sender_isbase) {
            qchronotimer_sender_isbase = false;
            return QChronoTimer::sender();
        } else if (qchronotimer_sender_callback != nullptr) {
            QObject* callback_ret = qchronotimer_sender_callback();
            return callback_ret;
        } else {
            return QChronoTimer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qchronotimer_sendersignalindex_isbase) {
            qchronotimer_sendersignalindex_isbase = false;
            return QChronoTimer::senderSignalIndex();
        } else if (qchronotimer_sendersignalindex_callback != nullptr) {
            int callback_ret = qchronotimer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QChronoTimer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qchronotimer_receivers_isbase) {
            qchronotimer_receivers_isbase = false;
            return QChronoTimer::receivers(signal);
        } else if (qchronotimer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qchronotimer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QChronoTimer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qchronotimer_issignalconnected_isbase) {
            qchronotimer_issignalconnected_isbase = false;
            return QChronoTimer::isSignalConnected(signal);
        } else if (qchronotimer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qchronotimer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChronoTimer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QChronoTimer_TimerEvent(QChronoTimer* self, QTimerEvent* param1);
    friend void QChronoTimer_QBaseTimerEvent(QChronoTimer* self, QTimerEvent* param1);
    friend void QChronoTimer_ChildEvent(QChronoTimer* self, QChildEvent* event);
    friend void QChronoTimer_QBaseChildEvent(QChronoTimer* self, QChildEvent* event);
    friend void QChronoTimer_CustomEvent(QChronoTimer* self, QEvent* event);
    friend void QChronoTimer_QBaseCustomEvent(QChronoTimer* self, QEvent* event);
    friend void QChronoTimer_ConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_QBaseConnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_DisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend void QChronoTimer_QBaseDisconnectNotify(QChronoTimer* self, const QMetaMethod* signal);
    friend QObject* QChronoTimer_Sender(const QChronoTimer* self);
    friend QObject* QChronoTimer_QBaseSender(const QChronoTimer* self);
    friend int QChronoTimer_SenderSignalIndex(const QChronoTimer* self);
    friend int QChronoTimer_QBaseSenderSignalIndex(const QChronoTimer* self);
    friend int QChronoTimer_Receivers(const QChronoTimer* self, const char* signal);
    friend int QChronoTimer_QBaseReceivers(const QChronoTimer* self, const char* signal);
    friend bool QChronoTimer_IsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal);
    friend bool QChronoTimer_QBaseIsSignalConnected(const QChronoTimer* self, const QMetaMethod* signal);
};

#endif
