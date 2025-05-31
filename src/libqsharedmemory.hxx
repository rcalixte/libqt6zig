#pragma once
#ifndef SRCC_LIBVIRTUALQSHAREDMEMORY_H
#define SRCC_LIBVIRTUALQSHAREDMEMORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSharedMemory so that we can call protected methods
class VirtualQSharedMemory final : public QSharedMemory {

  public:
    // Virtual class boolean flag
    bool isVirtualQSharedMemory = true;

    // Virtual class public types (including callbacks)
    using QSharedMemory_Metacall_Callback = int (*)(QSharedMemory*, int, int, void**);
    using QSharedMemory_Event_Callback = bool (*)(QSharedMemory*, QEvent*);
    using QSharedMemory_EventFilter_Callback = bool (*)(QSharedMemory*, QObject*, QEvent*);
    using QSharedMemory_TimerEvent_Callback = void (*)(QSharedMemory*, QTimerEvent*);
    using QSharedMemory_ChildEvent_Callback = void (*)(QSharedMemory*, QChildEvent*);
    using QSharedMemory_CustomEvent_Callback = void (*)(QSharedMemory*, QEvent*);
    using QSharedMemory_ConnectNotify_Callback = void (*)(QSharedMemory*, QMetaMethod*);
    using QSharedMemory_DisconnectNotify_Callback = void (*)(QSharedMemory*, QMetaMethod*);
    using QSharedMemory_Sender_Callback = QObject* (*)();
    using QSharedMemory_SenderSignalIndex_Callback = int (*)();
    using QSharedMemory_Receivers_Callback = int (*)(const QSharedMemory*, const char*);
    using QSharedMemory_IsSignalConnected_Callback = bool (*)(const QSharedMemory*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSharedMemory_Metacall_Callback qsharedmemory_metacall_callback = nullptr;
    QSharedMemory_Event_Callback qsharedmemory_event_callback = nullptr;
    QSharedMemory_EventFilter_Callback qsharedmemory_eventfilter_callback = nullptr;
    QSharedMemory_TimerEvent_Callback qsharedmemory_timerevent_callback = nullptr;
    QSharedMemory_ChildEvent_Callback qsharedmemory_childevent_callback = nullptr;
    QSharedMemory_CustomEvent_Callback qsharedmemory_customevent_callback = nullptr;
    QSharedMemory_ConnectNotify_Callback qsharedmemory_connectnotify_callback = nullptr;
    QSharedMemory_DisconnectNotify_Callback qsharedmemory_disconnectnotify_callback = nullptr;
    QSharedMemory_Sender_Callback qsharedmemory_sender_callback = nullptr;
    QSharedMemory_SenderSignalIndex_Callback qsharedmemory_sendersignalindex_callback = nullptr;
    QSharedMemory_Receivers_Callback qsharedmemory_receivers_callback = nullptr;
    QSharedMemory_IsSignalConnected_Callback qsharedmemory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsharedmemory_metacall_isbase = false;
    mutable bool qsharedmemory_event_isbase = false;
    mutable bool qsharedmemory_eventfilter_isbase = false;
    mutable bool qsharedmemory_timerevent_isbase = false;
    mutable bool qsharedmemory_childevent_isbase = false;
    mutable bool qsharedmemory_customevent_isbase = false;
    mutable bool qsharedmemory_connectnotify_isbase = false;
    mutable bool qsharedmemory_disconnectnotify_isbase = false;
    mutable bool qsharedmemory_sender_isbase = false;
    mutable bool qsharedmemory_sendersignalindex_isbase = false;
    mutable bool qsharedmemory_receivers_isbase = false;
    mutable bool qsharedmemory_issignalconnected_isbase = false;

  public:
    VirtualQSharedMemory() : QSharedMemory(){};
    VirtualQSharedMemory(const QString& key) : QSharedMemory(key){};
    VirtualQSharedMemory(QObject* parent) : QSharedMemory(parent){};
    VirtualQSharedMemory(const QString& key, QObject* parent) : QSharedMemory(key, parent){};

    ~VirtualQSharedMemory() {
        qsharedmemory_metacall_callback = nullptr;
        qsharedmemory_event_callback = nullptr;
        qsharedmemory_eventfilter_callback = nullptr;
        qsharedmemory_timerevent_callback = nullptr;
        qsharedmemory_childevent_callback = nullptr;
        qsharedmemory_customevent_callback = nullptr;
        qsharedmemory_connectnotify_callback = nullptr;
        qsharedmemory_disconnectnotify_callback = nullptr;
        qsharedmemory_sender_callback = nullptr;
        qsharedmemory_sendersignalindex_callback = nullptr;
        qsharedmemory_receivers_callback = nullptr;
        qsharedmemory_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSharedMemory_Metacall_Callback(QSharedMemory_Metacall_Callback cb) { qsharedmemory_metacall_callback = cb; }
    inline void setQSharedMemory_Event_Callback(QSharedMemory_Event_Callback cb) { qsharedmemory_event_callback = cb; }
    inline void setQSharedMemory_EventFilter_Callback(QSharedMemory_EventFilter_Callback cb) { qsharedmemory_eventfilter_callback = cb; }
    inline void setQSharedMemory_TimerEvent_Callback(QSharedMemory_TimerEvent_Callback cb) { qsharedmemory_timerevent_callback = cb; }
    inline void setQSharedMemory_ChildEvent_Callback(QSharedMemory_ChildEvent_Callback cb) { qsharedmemory_childevent_callback = cb; }
    inline void setQSharedMemory_CustomEvent_Callback(QSharedMemory_CustomEvent_Callback cb) { qsharedmemory_customevent_callback = cb; }
    inline void setQSharedMemory_ConnectNotify_Callback(QSharedMemory_ConnectNotify_Callback cb) { qsharedmemory_connectnotify_callback = cb; }
    inline void setQSharedMemory_DisconnectNotify_Callback(QSharedMemory_DisconnectNotify_Callback cb) { qsharedmemory_disconnectnotify_callback = cb; }
    inline void setQSharedMemory_Sender_Callback(QSharedMemory_Sender_Callback cb) { qsharedmemory_sender_callback = cb; }
    inline void setQSharedMemory_SenderSignalIndex_Callback(QSharedMemory_SenderSignalIndex_Callback cb) { qsharedmemory_sendersignalindex_callback = cb; }
    inline void setQSharedMemory_Receivers_Callback(QSharedMemory_Receivers_Callback cb) { qsharedmemory_receivers_callback = cb; }
    inline void setQSharedMemory_IsSignalConnected_Callback(QSharedMemory_IsSignalConnected_Callback cb) { qsharedmemory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSharedMemory_Metacall_IsBase(bool value) const { qsharedmemory_metacall_isbase = value; }
    inline void setQSharedMemory_Event_IsBase(bool value) const { qsharedmemory_event_isbase = value; }
    inline void setQSharedMemory_EventFilter_IsBase(bool value) const { qsharedmemory_eventfilter_isbase = value; }
    inline void setQSharedMemory_TimerEvent_IsBase(bool value) const { qsharedmemory_timerevent_isbase = value; }
    inline void setQSharedMemory_ChildEvent_IsBase(bool value) const { qsharedmemory_childevent_isbase = value; }
    inline void setQSharedMemory_CustomEvent_IsBase(bool value) const { qsharedmemory_customevent_isbase = value; }
    inline void setQSharedMemory_ConnectNotify_IsBase(bool value) const { qsharedmemory_connectnotify_isbase = value; }
    inline void setQSharedMemory_DisconnectNotify_IsBase(bool value) const { qsharedmemory_disconnectnotify_isbase = value; }
    inline void setQSharedMemory_Sender_IsBase(bool value) const { qsharedmemory_sender_isbase = value; }
    inline void setQSharedMemory_SenderSignalIndex_IsBase(bool value) const { qsharedmemory_sendersignalindex_isbase = value; }
    inline void setQSharedMemory_Receivers_IsBase(bool value) const { qsharedmemory_receivers_isbase = value; }
    inline void setQSharedMemory_IsSignalConnected_IsBase(bool value) const { qsharedmemory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsharedmemory_metacall_isbase) {
            qsharedmemory_metacall_isbase = false;
            return QSharedMemory::qt_metacall(param1, param2, param3);
        } else if (qsharedmemory_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsharedmemory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSharedMemory::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsharedmemory_event_isbase) {
            qsharedmemory_event_isbase = false;
            return QSharedMemory::event(event);
        } else if (qsharedmemory_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsharedmemory_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSharedMemory::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsharedmemory_eventfilter_isbase) {
            qsharedmemory_eventfilter_isbase = false;
            return QSharedMemory::eventFilter(watched, event);
        } else if (qsharedmemory_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsharedmemory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSharedMemory::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsharedmemory_timerevent_isbase) {
            qsharedmemory_timerevent_isbase = false;
            QSharedMemory::timerEvent(event);
        } else if (qsharedmemory_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsharedmemory_timerevent_callback(this, cbval1);
        } else {
            QSharedMemory::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsharedmemory_childevent_isbase) {
            qsharedmemory_childevent_isbase = false;
            QSharedMemory::childEvent(event);
        } else if (qsharedmemory_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsharedmemory_childevent_callback(this, cbval1);
        } else {
            QSharedMemory::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsharedmemory_customevent_isbase) {
            qsharedmemory_customevent_isbase = false;
            QSharedMemory::customEvent(event);
        } else if (qsharedmemory_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsharedmemory_customevent_callback(this, cbval1);
        } else {
            QSharedMemory::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsharedmemory_connectnotify_isbase) {
            qsharedmemory_connectnotify_isbase = false;
            QSharedMemory::connectNotify(signal);
        } else if (qsharedmemory_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsharedmemory_connectnotify_callback(this, cbval1);
        } else {
            QSharedMemory::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsharedmemory_disconnectnotify_isbase) {
            qsharedmemory_disconnectnotify_isbase = false;
            QSharedMemory::disconnectNotify(signal);
        } else if (qsharedmemory_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsharedmemory_disconnectnotify_callback(this, cbval1);
        } else {
            QSharedMemory::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsharedmemory_sender_isbase) {
            qsharedmemory_sender_isbase = false;
            return QSharedMemory::sender();
        } else if (qsharedmemory_sender_callback != nullptr) {
            QObject* callback_ret = qsharedmemory_sender_callback();
            return callback_ret;
        } else {
            return QSharedMemory::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsharedmemory_sendersignalindex_isbase) {
            qsharedmemory_sendersignalindex_isbase = false;
            return QSharedMemory::senderSignalIndex();
        } else if (qsharedmemory_sendersignalindex_callback != nullptr) {
            int callback_ret = qsharedmemory_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSharedMemory::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsharedmemory_receivers_isbase) {
            qsharedmemory_receivers_isbase = false;
            return QSharedMemory::receivers(signal);
        } else if (qsharedmemory_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsharedmemory_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSharedMemory::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsharedmemory_issignalconnected_isbase) {
            qsharedmemory_issignalconnected_isbase = false;
            return QSharedMemory::isSignalConnected(signal);
        } else if (qsharedmemory_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsharedmemory_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSharedMemory::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSharedMemory_TimerEvent(QSharedMemory* self, QTimerEvent* event);
    friend void QSharedMemory_QBaseTimerEvent(QSharedMemory* self, QTimerEvent* event);
    friend void QSharedMemory_ChildEvent(QSharedMemory* self, QChildEvent* event);
    friend void QSharedMemory_QBaseChildEvent(QSharedMemory* self, QChildEvent* event);
    friend void QSharedMemory_CustomEvent(QSharedMemory* self, QEvent* event);
    friend void QSharedMemory_QBaseCustomEvent(QSharedMemory* self, QEvent* event);
    friend void QSharedMemory_ConnectNotify(QSharedMemory* self, const QMetaMethod* signal);
    friend void QSharedMemory_QBaseConnectNotify(QSharedMemory* self, const QMetaMethod* signal);
    friend void QSharedMemory_DisconnectNotify(QSharedMemory* self, const QMetaMethod* signal);
    friend void QSharedMemory_QBaseDisconnectNotify(QSharedMemory* self, const QMetaMethod* signal);
    friend QObject* QSharedMemory_Sender(const QSharedMemory* self);
    friend QObject* QSharedMemory_QBaseSender(const QSharedMemory* self);
    friend int QSharedMemory_SenderSignalIndex(const QSharedMemory* self);
    friend int QSharedMemory_QBaseSenderSignalIndex(const QSharedMemory* self);
    friend int QSharedMemory_Receivers(const QSharedMemory* self, const char* signal);
    friend int QSharedMemory_QBaseReceivers(const QSharedMemory* self, const char* signal);
    friend bool QSharedMemory_IsSignalConnected(const QSharedMemory* self, const QMetaMethod* signal);
    friend bool QSharedMemory_QBaseIsSignalConnected(const QSharedMemory* self, const QMetaMethod* signal);
};

#endif
