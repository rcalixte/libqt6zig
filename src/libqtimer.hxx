#pragma once
#ifndef SRCC_LIBVIRTUALQTIMER_H
#define SRCC_LIBVIRTUALQTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTimer so that we can call protected methods
class VirtualQTimer final : public QTimer {

  public:
    // Virtual class boolean flag
    bool isVirtualQTimer = true;

    // Virtual class public types (including callbacks)
    using QTimer_Metacall_Callback = int (*)(QTimer*, int, int, void**);
    using QTimer_TimerEvent_Callback = void (*)(QTimer*, QTimerEvent*);
    using QTimer_Event_Callback = bool (*)(QTimer*, QEvent*);
    using QTimer_EventFilter_Callback = bool (*)(QTimer*, QObject*, QEvent*);
    using QTimer_ChildEvent_Callback = void (*)(QTimer*, QChildEvent*);
    using QTimer_CustomEvent_Callback = void (*)(QTimer*, QEvent*);
    using QTimer_ConnectNotify_Callback = void (*)(QTimer*, QMetaMethod*);
    using QTimer_DisconnectNotify_Callback = void (*)(QTimer*, QMetaMethod*);
    using QTimer_Sender_Callback = QObject* (*)();
    using QTimer_SenderSignalIndex_Callback = int (*)();
    using QTimer_Receivers_Callback = int (*)(const QTimer*, const char*);
    using QTimer_IsSignalConnected_Callback = bool (*)(const QTimer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTimer_Metacall_Callback qtimer_metacall_callback = nullptr;
    QTimer_TimerEvent_Callback qtimer_timerevent_callback = nullptr;
    QTimer_Event_Callback qtimer_event_callback = nullptr;
    QTimer_EventFilter_Callback qtimer_eventfilter_callback = nullptr;
    QTimer_ChildEvent_Callback qtimer_childevent_callback = nullptr;
    QTimer_CustomEvent_Callback qtimer_customevent_callback = nullptr;
    QTimer_ConnectNotify_Callback qtimer_connectnotify_callback = nullptr;
    QTimer_DisconnectNotify_Callback qtimer_disconnectnotify_callback = nullptr;
    QTimer_Sender_Callback qtimer_sender_callback = nullptr;
    QTimer_SenderSignalIndex_Callback qtimer_sendersignalindex_callback = nullptr;
    QTimer_Receivers_Callback qtimer_receivers_callback = nullptr;
    QTimer_IsSignalConnected_Callback qtimer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtimer_metacall_isbase = false;
    mutable bool qtimer_timerevent_isbase = false;
    mutable bool qtimer_event_isbase = false;
    mutable bool qtimer_eventfilter_isbase = false;
    mutable bool qtimer_childevent_isbase = false;
    mutable bool qtimer_customevent_isbase = false;
    mutable bool qtimer_connectnotify_isbase = false;
    mutable bool qtimer_disconnectnotify_isbase = false;
    mutable bool qtimer_sender_isbase = false;
    mutable bool qtimer_sendersignalindex_isbase = false;
    mutable bool qtimer_receivers_isbase = false;
    mutable bool qtimer_issignalconnected_isbase = false;

  public:
    VirtualQTimer() : QTimer(){};
    VirtualQTimer(QObject* parent) : QTimer(parent){};

    ~VirtualQTimer() {
        qtimer_metacall_callback = nullptr;
        qtimer_timerevent_callback = nullptr;
        qtimer_event_callback = nullptr;
        qtimer_eventfilter_callback = nullptr;
        qtimer_childevent_callback = nullptr;
        qtimer_customevent_callback = nullptr;
        qtimer_connectnotify_callback = nullptr;
        qtimer_disconnectnotify_callback = nullptr;
        qtimer_sender_callback = nullptr;
        qtimer_sendersignalindex_callback = nullptr;
        qtimer_receivers_callback = nullptr;
        qtimer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTimer_Metacall_Callback(QTimer_Metacall_Callback cb) { qtimer_metacall_callback = cb; }
    inline void setQTimer_TimerEvent_Callback(QTimer_TimerEvent_Callback cb) { qtimer_timerevent_callback = cb; }
    inline void setQTimer_Event_Callback(QTimer_Event_Callback cb) { qtimer_event_callback = cb; }
    inline void setQTimer_EventFilter_Callback(QTimer_EventFilter_Callback cb) { qtimer_eventfilter_callback = cb; }
    inline void setQTimer_ChildEvent_Callback(QTimer_ChildEvent_Callback cb) { qtimer_childevent_callback = cb; }
    inline void setQTimer_CustomEvent_Callback(QTimer_CustomEvent_Callback cb) { qtimer_customevent_callback = cb; }
    inline void setQTimer_ConnectNotify_Callback(QTimer_ConnectNotify_Callback cb) { qtimer_connectnotify_callback = cb; }
    inline void setQTimer_DisconnectNotify_Callback(QTimer_DisconnectNotify_Callback cb) { qtimer_disconnectnotify_callback = cb; }
    inline void setQTimer_Sender_Callback(QTimer_Sender_Callback cb) { qtimer_sender_callback = cb; }
    inline void setQTimer_SenderSignalIndex_Callback(QTimer_SenderSignalIndex_Callback cb) { qtimer_sendersignalindex_callback = cb; }
    inline void setQTimer_Receivers_Callback(QTimer_Receivers_Callback cb) { qtimer_receivers_callback = cb; }
    inline void setQTimer_IsSignalConnected_Callback(QTimer_IsSignalConnected_Callback cb) { qtimer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTimer_Metacall_IsBase(bool value) const { qtimer_metacall_isbase = value; }
    inline void setQTimer_TimerEvent_IsBase(bool value) const { qtimer_timerevent_isbase = value; }
    inline void setQTimer_Event_IsBase(bool value) const { qtimer_event_isbase = value; }
    inline void setQTimer_EventFilter_IsBase(bool value) const { qtimer_eventfilter_isbase = value; }
    inline void setQTimer_ChildEvent_IsBase(bool value) const { qtimer_childevent_isbase = value; }
    inline void setQTimer_CustomEvent_IsBase(bool value) const { qtimer_customevent_isbase = value; }
    inline void setQTimer_ConnectNotify_IsBase(bool value) const { qtimer_connectnotify_isbase = value; }
    inline void setQTimer_DisconnectNotify_IsBase(bool value) const { qtimer_disconnectnotify_isbase = value; }
    inline void setQTimer_Sender_IsBase(bool value) const { qtimer_sender_isbase = value; }
    inline void setQTimer_SenderSignalIndex_IsBase(bool value) const { qtimer_sendersignalindex_isbase = value; }
    inline void setQTimer_Receivers_IsBase(bool value) const { qtimer_receivers_isbase = value; }
    inline void setQTimer_IsSignalConnected_IsBase(bool value) const { qtimer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimer_metacall_isbase) {
            qtimer_metacall_isbase = false;
            return QTimer::qt_metacall(param1, param2, param3);
        } else if (qtimer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtimer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTimer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qtimer_timerevent_isbase) {
            qtimer_timerevent_isbase = false;
            QTimer::timerEvent(param1);
        } else if (qtimer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            qtimer_timerevent_callback(this, cbval1);
        } else {
            QTimer::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimer_event_isbase) {
            qtimer_event_isbase = false;
            return QTimer::event(event);
        } else if (qtimer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtimer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTimer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimer_eventfilter_isbase) {
            qtimer_eventfilter_isbase = false;
            return QTimer::eventFilter(watched, event);
        } else if (qtimer_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtimer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTimer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimer_childevent_isbase) {
            qtimer_childevent_isbase = false;
            QTimer::childEvent(event);
        } else if (qtimer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtimer_childevent_callback(this, cbval1);
        } else {
            QTimer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimer_customevent_isbase) {
            qtimer_customevent_isbase = false;
            QTimer::customEvent(event);
        } else if (qtimer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtimer_customevent_callback(this, cbval1);
        } else {
            QTimer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimer_connectnotify_isbase) {
            qtimer_connectnotify_isbase = false;
            QTimer::connectNotify(signal);
        } else if (qtimer_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtimer_connectnotify_callback(this, cbval1);
        } else {
            QTimer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimer_disconnectnotify_isbase) {
            qtimer_disconnectnotify_isbase = false;
            QTimer::disconnectNotify(signal);
        } else if (qtimer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtimer_disconnectnotify_callback(this, cbval1);
        } else {
            QTimer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtimer_sender_isbase) {
            qtimer_sender_isbase = false;
            return QTimer::sender();
        } else if (qtimer_sender_callback != nullptr) {
            QObject* callback_ret = qtimer_sender_callback();
            return callback_ret;
        } else {
            return QTimer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtimer_sendersignalindex_isbase) {
            qtimer_sendersignalindex_isbase = false;
            return QTimer::senderSignalIndex();
        } else if (qtimer_sendersignalindex_callback != nullptr) {
            int callback_ret = qtimer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTimer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtimer_receivers_isbase) {
            qtimer_receivers_isbase = false;
            return QTimer::receivers(signal);
        } else if (qtimer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtimer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTimer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtimer_issignalconnected_isbase) {
            qtimer_issignalconnected_isbase = false;
            return QTimer::isSignalConnected(signal);
        } else if (qtimer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtimer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTimer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTimer_TimerEvent(QTimer* self, QTimerEvent* param1);
    friend void QTimer_QBaseTimerEvent(QTimer* self, QTimerEvent* param1);
    friend void QTimer_ChildEvent(QTimer* self, QChildEvent* event);
    friend void QTimer_QBaseChildEvent(QTimer* self, QChildEvent* event);
    friend void QTimer_CustomEvent(QTimer* self, QEvent* event);
    friend void QTimer_QBaseCustomEvent(QTimer* self, QEvent* event);
    friend void QTimer_ConnectNotify(QTimer* self, const QMetaMethod* signal);
    friend void QTimer_QBaseConnectNotify(QTimer* self, const QMetaMethod* signal);
    friend void QTimer_DisconnectNotify(QTimer* self, const QMetaMethod* signal);
    friend void QTimer_QBaseDisconnectNotify(QTimer* self, const QMetaMethod* signal);
    friend QObject* QTimer_Sender(const QTimer* self);
    friend QObject* QTimer_QBaseSender(const QTimer* self);
    friend int QTimer_SenderSignalIndex(const QTimer* self);
    friend int QTimer_QBaseSenderSignalIndex(const QTimer* self);
    friend int QTimer_Receivers(const QTimer* self, const char* signal);
    friend int QTimer_QBaseReceivers(const QTimer* self, const char* signal);
    friend bool QTimer_IsSignalConnected(const QTimer* self, const QMetaMethod* signal);
    friend bool QTimer_QBaseIsSignalConnected(const QTimer* self, const QMetaMethod* signal);
};

#endif
