#pragma once
#ifndef SRCC_LIBVIRTUALQEVENTLOOP_H
#define SRCC_LIBVIRTUALQEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QEventLoop so that we can call protected methods
class VirtualQEventLoop final : public QEventLoop {

  public:
    // Virtual class boolean flag
    bool isVirtualQEventLoop = true;

    // Virtual class public types (including callbacks)
    using QEventLoop_Metacall_Callback = int (*)(QEventLoop*, int, int, void**);
    using QEventLoop_Event_Callback = bool (*)(QEventLoop*, QEvent*);
    using QEventLoop_EventFilter_Callback = bool (*)(QEventLoop*, QObject*, QEvent*);
    using QEventLoop_TimerEvent_Callback = void (*)(QEventLoop*, QTimerEvent*);
    using QEventLoop_ChildEvent_Callback = void (*)(QEventLoop*, QChildEvent*);
    using QEventLoop_CustomEvent_Callback = void (*)(QEventLoop*, QEvent*);
    using QEventLoop_ConnectNotify_Callback = void (*)(QEventLoop*, QMetaMethod*);
    using QEventLoop_DisconnectNotify_Callback = void (*)(QEventLoop*, QMetaMethod*);
    using QEventLoop_Sender_Callback = QObject* (*)();
    using QEventLoop_SenderSignalIndex_Callback = int (*)();
    using QEventLoop_Receivers_Callback = int (*)(const QEventLoop*, const char*);
    using QEventLoop_IsSignalConnected_Callback = bool (*)(const QEventLoop*, QMetaMethod*);

  protected:
    // Instance callback storage
    QEventLoop_Metacall_Callback qeventloop_metacall_callback = nullptr;
    QEventLoop_Event_Callback qeventloop_event_callback = nullptr;
    QEventLoop_EventFilter_Callback qeventloop_eventfilter_callback = nullptr;
    QEventLoop_TimerEvent_Callback qeventloop_timerevent_callback = nullptr;
    QEventLoop_ChildEvent_Callback qeventloop_childevent_callback = nullptr;
    QEventLoop_CustomEvent_Callback qeventloop_customevent_callback = nullptr;
    QEventLoop_ConnectNotify_Callback qeventloop_connectnotify_callback = nullptr;
    QEventLoop_DisconnectNotify_Callback qeventloop_disconnectnotify_callback = nullptr;
    QEventLoop_Sender_Callback qeventloop_sender_callback = nullptr;
    QEventLoop_SenderSignalIndex_Callback qeventloop_sendersignalindex_callback = nullptr;
    QEventLoop_Receivers_Callback qeventloop_receivers_callback = nullptr;
    QEventLoop_IsSignalConnected_Callback qeventloop_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qeventloop_metacall_isbase = false;
    mutable bool qeventloop_event_isbase = false;
    mutable bool qeventloop_eventfilter_isbase = false;
    mutable bool qeventloop_timerevent_isbase = false;
    mutable bool qeventloop_childevent_isbase = false;
    mutable bool qeventloop_customevent_isbase = false;
    mutable bool qeventloop_connectnotify_isbase = false;
    mutable bool qeventloop_disconnectnotify_isbase = false;
    mutable bool qeventloop_sender_isbase = false;
    mutable bool qeventloop_sendersignalindex_isbase = false;
    mutable bool qeventloop_receivers_isbase = false;
    mutable bool qeventloop_issignalconnected_isbase = false;

  public:
    VirtualQEventLoop() : QEventLoop(){};
    VirtualQEventLoop(QObject* parent) : QEventLoop(parent){};

    ~VirtualQEventLoop() {
        qeventloop_metacall_callback = nullptr;
        qeventloop_event_callback = nullptr;
        qeventloop_eventfilter_callback = nullptr;
        qeventloop_timerevent_callback = nullptr;
        qeventloop_childevent_callback = nullptr;
        qeventloop_customevent_callback = nullptr;
        qeventloop_connectnotify_callback = nullptr;
        qeventloop_disconnectnotify_callback = nullptr;
        qeventloop_sender_callback = nullptr;
        qeventloop_sendersignalindex_callback = nullptr;
        qeventloop_receivers_callback = nullptr;
        qeventloop_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQEventLoop_Metacall_Callback(QEventLoop_Metacall_Callback cb) { qeventloop_metacall_callback = cb; }
    inline void setQEventLoop_Event_Callback(QEventLoop_Event_Callback cb) { qeventloop_event_callback = cb; }
    inline void setQEventLoop_EventFilter_Callback(QEventLoop_EventFilter_Callback cb) { qeventloop_eventfilter_callback = cb; }
    inline void setQEventLoop_TimerEvent_Callback(QEventLoop_TimerEvent_Callback cb) { qeventloop_timerevent_callback = cb; }
    inline void setQEventLoop_ChildEvent_Callback(QEventLoop_ChildEvent_Callback cb) { qeventloop_childevent_callback = cb; }
    inline void setQEventLoop_CustomEvent_Callback(QEventLoop_CustomEvent_Callback cb) { qeventloop_customevent_callback = cb; }
    inline void setQEventLoop_ConnectNotify_Callback(QEventLoop_ConnectNotify_Callback cb) { qeventloop_connectnotify_callback = cb; }
    inline void setQEventLoop_DisconnectNotify_Callback(QEventLoop_DisconnectNotify_Callback cb) { qeventloop_disconnectnotify_callback = cb; }
    inline void setQEventLoop_Sender_Callback(QEventLoop_Sender_Callback cb) { qeventloop_sender_callback = cb; }
    inline void setQEventLoop_SenderSignalIndex_Callback(QEventLoop_SenderSignalIndex_Callback cb) { qeventloop_sendersignalindex_callback = cb; }
    inline void setQEventLoop_Receivers_Callback(QEventLoop_Receivers_Callback cb) { qeventloop_receivers_callback = cb; }
    inline void setQEventLoop_IsSignalConnected_Callback(QEventLoop_IsSignalConnected_Callback cb) { qeventloop_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQEventLoop_Metacall_IsBase(bool value) const { qeventloop_metacall_isbase = value; }
    inline void setQEventLoop_Event_IsBase(bool value) const { qeventloop_event_isbase = value; }
    inline void setQEventLoop_EventFilter_IsBase(bool value) const { qeventloop_eventfilter_isbase = value; }
    inline void setQEventLoop_TimerEvent_IsBase(bool value) const { qeventloop_timerevent_isbase = value; }
    inline void setQEventLoop_ChildEvent_IsBase(bool value) const { qeventloop_childevent_isbase = value; }
    inline void setQEventLoop_CustomEvent_IsBase(bool value) const { qeventloop_customevent_isbase = value; }
    inline void setQEventLoop_ConnectNotify_IsBase(bool value) const { qeventloop_connectnotify_isbase = value; }
    inline void setQEventLoop_DisconnectNotify_IsBase(bool value) const { qeventloop_disconnectnotify_isbase = value; }
    inline void setQEventLoop_Sender_IsBase(bool value) const { qeventloop_sender_isbase = value; }
    inline void setQEventLoop_SenderSignalIndex_IsBase(bool value) const { qeventloop_sendersignalindex_isbase = value; }
    inline void setQEventLoop_Receivers_IsBase(bool value) const { qeventloop_receivers_isbase = value; }
    inline void setQEventLoop_IsSignalConnected_IsBase(bool value) const { qeventloop_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qeventloop_metacall_isbase) {
            qeventloop_metacall_isbase = false;
            return QEventLoop::qt_metacall(param1, param2, param3);
        } else if (qeventloop_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qeventloop_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QEventLoop::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qeventloop_event_isbase) {
            qeventloop_event_isbase = false;
            return QEventLoop::event(event);
        } else if (qeventloop_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qeventloop_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QEventLoop::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qeventloop_eventfilter_isbase) {
            qeventloop_eventfilter_isbase = false;
            return QEventLoop::eventFilter(watched, event);
        } else if (qeventloop_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qeventloop_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QEventLoop::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qeventloop_timerevent_isbase) {
            qeventloop_timerevent_isbase = false;
            QEventLoop::timerEvent(event);
        } else if (qeventloop_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qeventloop_timerevent_callback(this, cbval1);
        } else {
            QEventLoop::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qeventloop_childevent_isbase) {
            qeventloop_childevent_isbase = false;
            QEventLoop::childEvent(event);
        } else if (qeventloop_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qeventloop_childevent_callback(this, cbval1);
        } else {
            QEventLoop::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qeventloop_customevent_isbase) {
            qeventloop_customevent_isbase = false;
            QEventLoop::customEvent(event);
        } else if (qeventloop_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qeventloop_customevent_callback(this, cbval1);
        } else {
            QEventLoop::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qeventloop_connectnotify_isbase) {
            qeventloop_connectnotify_isbase = false;
            QEventLoop::connectNotify(signal);
        } else if (qeventloop_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qeventloop_connectnotify_callback(this, cbval1);
        } else {
            QEventLoop::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qeventloop_disconnectnotify_isbase) {
            qeventloop_disconnectnotify_isbase = false;
            QEventLoop::disconnectNotify(signal);
        } else if (qeventloop_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qeventloop_disconnectnotify_callback(this, cbval1);
        } else {
            QEventLoop::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qeventloop_sender_isbase) {
            qeventloop_sender_isbase = false;
            return QEventLoop::sender();
        } else if (qeventloop_sender_callback != nullptr) {
            QObject* callback_ret = qeventloop_sender_callback();
            return callback_ret;
        } else {
            return QEventLoop::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qeventloop_sendersignalindex_isbase) {
            qeventloop_sendersignalindex_isbase = false;
            return QEventLoop::senderSignalIndex();
        } else if (qeventloop_sendersignalindex_callback != nullptr) {
            int callback_ret = qeventloop_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QEventLoop::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qeventloop_receivers_isbase) {
            qeventloop_receivers_isbase = false;
            return QEventLoop::receivers(signal);
        } else if (qeventloop_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qeventloop_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QEventLoop::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qeventloop_issignalconnected_isbase) {
            qeventloop_issignalconnected_isbase = false;
            return QEventLoop::isSignalConnected(signal);
        } else if (qeventloop_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qeventloop_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QEventLoop::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QEventLoop_TimerEvent(QEventLoop* self, QTimerEvent* event);
    friend void QEventLoop_QBaseTimerEvent(QEventLoop* self, QTimerEvent* event);
    friend void QEventLoop_ChildEvent(QEventLoop* self, QChildEvent* event);
    friend void QEventLoop_QBaseChildEvent(QEventLoop* self, QChildEvent* event);
    friend void QEventLoop_CustomEvent(QEventLoop* self, QEvent* event);
    friend void QEventLoop_QBaseCustomEvent(QEventLoop* self, QEvent* event);
    friend void QEventLoop_ConnectNotify(QEventLoop* self, const QMetaMethod* signal);
    friend void QEventLoop_QBaseConnectNotify(QEventLoop* self, const QMetaMethod* signal);
    friend void QEventLoop_DisconnectNotify(QEventLoop* self, const QMetaMethod* signal);
    friend void QEventLoop_QBaseDisconnectNotify(QEventLoop* self, const QMetaMethod* signal);
    friend QObject* QEventLoop_Sender(const QEventLoop* self);
    friend QObject* QEventLoop_QBaseSender(const QEventLoop* self);
    friend int QEventLoop_SenderSignalIndex(const QEventLoop* self);
    friend int QEventLoop_QBaseSenderSignalIndex(const QEventLoop* self);
    friend int QEventLoop_Receivers(const QEventLoop* self, const char* signal);
    friend int QEventLoop_QBaseReceivers(const QEventLoop* self, const char* signal);
    friend bool QEventLoop_IsSignalConnected(const QEventLoop* self, const QMetaMethod* signal);
    friend bool QEventLoop_QBaseIsSignalConnected(const QEventLoop* self, const QMetaMethod* signal);
};

#endif
