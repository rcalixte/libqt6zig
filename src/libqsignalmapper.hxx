#pragma once
#ifndef SRCC_LIBVIRTUALQSIGNALMAPPER_H
#define SRCC_LIBVIRTUALQSIGNALMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSignalMapper so that we can call protected methods
class VirtualQSignalMapper final : public QSignalMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQSignalMapper = true;

    // Virtual class public types (including callbacks)
    using QSignalMapper_Metacall_Callback = int (*)(QSignalMapper*, int, int, void**);
    using QSignalMapper_Event_Callback = bool (*)(QSignalMapper*, QEvent*);
    using QSignalMapper_EventFilter_Callback = bool (*)(QSignalMapper*, QObject*, QEvent*);
    using QSignalMapper_TimerEvent_Callback = void (*)(QSignalMapper*, QTimerEvent*);
    using QSignalMapper_ChildEvent_Callback = void (*)(QSignalMapper*, QChildEvent*);
    using QSignalMapper_CustomEvent_Callback = void (*)(QSignalMapper*, QEvent*);
    using QSignalMapper_ConnectNotify_Callback = void (*)(QSignalMapper*, QMetaMethod*);
    using QSignalMapper_DisconnectNotify_Callback = void (*)(QSignalMapper*, QMetaMethod*);
    using QSignalMapper_Sender_Callback = QObject* (*)();
    using QSignalMapper_SenderSignalIndex_Callback = int (*)();
    using QSignalMapper_Receivers_Callback = int (*)(const QSignalMapper*, const char*);
    using QSignalMapper_IsSignalConnected_Callback = bool (*)(const QSignalMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSignalMapper_Metacall_Callback qsignalmapper_metacall_callback = nullptr;
    QSignalMapper_Event_Callback qsignalmapper_event_callback = nullptr;
    QSignalMapper_EventFilter_Callback qsignalmapper_eventfilter_callback = nullptr;
    QSignalMapper_TimerEvent_Callback qsignalmapper_timerevent_callback = nullptr;
    QSignalMapper_ChildEvent_Callback qsignalmapper_childevent_callback = nullptr;
    QSignalMapper_CustomEvent_Callback qsignalmapper_customevent_callback = nullptr;
    QSignalMapper_ConnectNotify_Callback qsignalmapper_connectnotify_callback = nullptr;
    QSignalMapper_DisconnectNotify_Callback qsignalmapper_disconnectnotify_callback = nullptr;
    QSignalMapper_Sender_Callback qsignalmapper_sender_callback = nullptr;
    QSignalMapper_SenderSignalIndex_Callback qsignalmapper_sendersignalindex_callback = nullptr;
    QSignalMapper_Receivers_Callback qsignalmapper_receivers_callback = nullptr;
    QSignalMapper_IsSignalConnected_Callback qsignalmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsignalmapper_metacall_isbase = false;
    mutable bool qsignalmapper_event_isbase = false;
    mutable bool qsignalmapper_eventfilter_isbase = false;
    mutable bool qsignalmapper_timerevent_isbase = false;
    mutable bool qsignalmapper_childevent_isbase = false;
    mutable bool qsignalmapper_customevent_isbase = false;
    mutable bool qsignalmapper_connectnotify_isbase = false;
    mutable bool qsignalmapper_disconnectnotify_isbase = false;
    mutable bool qsignalmapper_sender_isbase = false;
    mutable bool qsignalmapper_sendersignalindex_isbase = false;
    mutable bool qsignalmapper_receivers_isbase = false;
    mutable bool qsignalmapper_issignalconnected_isbase = false;

  public:
    VirtualQSignalMapper() : QSignalMapper(){};
    VirtualQSignalMapper(QObject* parent) : QSignalMapper(parent){};

    ~VirtualQSignalMapper() {
        qsignalmapper_metacall_callback = nullptr;
        qsignalmapper_event_callback = nullptr;
        qsignalmapper_eventfilter_callback = nullptr;
        qsignalmapper_timerevent_callback = nullptr;
        qsignalmapper_childevent_callback = nullptr;
        qsignalmapper_customevent_callback = nullptr;
        qsignalmapper_connectnotify_callback = nullptr;
        qsignalmapper_disconnectnotify_callback = nullptr;
        qsignalmapper_sender_callback = nullptr;
        qsignalmapper_sendersignalindex_callback = nullptr;
        qsignalmapper_receivers_callback = nullptr;
        qsignalmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSignalMapper_Metacall_Callback(QSignalMapper_Metacall_Callback cb) { qsignalmapper_metacall_callback = cb; }
    inline void setQSignalMapper_Event_Callback(QSignalMapper_Event_Callback cb) { qsignalmapper_event_callback = cb; }
    inline void setQSignalMapper_EventFilter_Callback(QSignalMapper_EventFilter_Callback cb) { qsignalmapper_eventfilter_callback = cb; }
    inline void setQSignalMapper_TimerEvent_Callback(QSignalMapper_TimerEvent_Callback cb) { qsignalmapper_timerevent_callback = cb; }
    inline void setQSignalMapper_ChildEvent_Callback(QSignalMapper_ChildEvent_Callback cb) { qsignalmapper_childevent_callback = cb; }
    inline void setQSignalMapper_CustomEvent_Callback(QSignalMapper_CustomEvent_Callback cb) { qsignalmapper_customevent_callback = cb; }
    inline void setQSignalMapper_ConnectNotify_Callback(QSignalMapper_ConnectNotify_Callback cb) { qsignalmapper_connectnotify_callback = cb; }
    inline void setQSignalMapper_DisconnectNotify_Callback(QSignalMapper_DisconnectNotify_Callback cb) { qsignalmapper_disconnectnotify_callback = cb; }
    inline void setQSignalMapper_Sender_Callback(QSignalMapper_Sender_Callback cb) { qsignalmapper_sender_callback = cb; }
    inline void setQSignalMapper_SenderSignalIndex_Callback(QSignalMapper_SenderSignalIndex_Callback cb) { qsignalmapper_sendersignalindex_callback = cb; }
    inline void setQSignalMapper_Receivers_Callback(QSignalMapper_Receivers_Callback cb) { qsignalmapper_receivers_callback = cb; }
    inline void setQSignalMapper_IsSignalConnected_Callback(QSignalMapper_IsSignalConnected_Callback cb) { qsignalmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSignalMapper_Metacall_IsBase(bool value) const { qsignalmapper_metacall_isbase = value; }
    inline void setQSignalMapper_Event_IsBase(bool value) const { qsignalmapper_event_isbase = value; }
    inline void setQSignalMapper_EventFilter_IsBase(bool value) const { qsignalmapper_eventfilter_isbase = value; }
    inline void setQSignalMapper_TimerEvent_IsBase(bool value) const { qsignalmapper_timerevent_isbase = value; }
    inline void setQSignalMapper_ChildEvent_IsBase(bool value) const { qsignalmapper_childevent_isbase = value; }
    inline void setQSignalMapper_CustomEvent_IsBase(bool value) const { qsignalmapper_customevent_isbase = value; }
    inline void setQSignalMapper_ConnectNotify_IsBase(bool value) const { qsignalmapper_connectnotify_isbase = value; }
    inline void setQSignalMapper_DisconnectNotify_IsBase(bool value) const { qsignalmapper_disconnectnotify_isbase = value; }
    inline void setQSignalMapper_Sender_IsBase(bool value) const { qsignalmapper_sender_isbase = value; }
    inline void setQSignalMapper_SenderSignalIndex_IsBase(bool value) const { qsignalmapper_sendersignalindex_isbase = value; }
    inline void setQSignalMapper_Receivers_IsBase(bool value) const { qsignalmapper_receivers_isbase = value; }
    inline void setQSignalMapper_IsSignalConnected_IsBase(bool value) const { qsignalmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsignalmapper_metacall_isbase) {
            qsignalmapper_metacall_isbase = false;
            return QSignalMapper::qt_metacall(param1, param2, param3);
        } else if (qsignalmapper_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsignalmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSignalMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsignalmapper_event_isbase) {
            qsignalmapper_event_isbase = false;
            return QSignalMapper::event(event);
        } else if (qsignalmapper_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsignalmapper_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSignalMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsignalmapper_eventfilter_isbase) {
            qsignalmapper_eventfilter_isbase = false;
            return QSignalMapper::eventFilter(watched, event);
        } else if (qsignalmapper_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsignalmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSignalMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsignalmapper_timerevent_isbase) {
            qsignalmapper_timerevent_isbase = false;
            QSignalMapper::timerEvent(event);
        } else if (qsignalmapper_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsignalmapper_timerevent_callback(this, cbval1);
        } else {
            QSignalMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsignalmapper_childevent_isbase) {
            qsignalmapper_childevent_isbase = false;
            QSignalMapper::childEvent(event);
        } else if (qsignalmapper_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsignalmapper_childevent_callback(this, cbval1);
        } else {
            QSignalMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsignalmapper_customevent_isbase) {
            qsignalmapper_customevent_isbase = false;
            QSignalMapper::customEvent(event);
        } else if (qsignalmapper_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsignalmapper_customevent_callback(this, cbval1);
        } else {
            QSignalMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsignalmapper_connectnotify_isbase) {
            qsignalmapper_connectnotify_isbase = false;
            QSignalMapper::connectNotify(signal);
        } else if (qsignalmapper_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsignalmapper_connectnotify_callback(this, cbval1);
        } else {
            QSignalMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsignalmapper_disconnectnotify_isbase) {
            qsignalmapper_disconnectnotify_isbase = false;
            QSignalMapper::disconnectNotify(signal);
        } else if (qsignalmapper_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsignalmapper_disconnectnotify_callback(this, cbval1);
        } else {
            QSignalMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsignalmapper_sender_isbase) {
            qsignalmapper_sender_isbase = false;
            return QSignalMapper::sender();
        } else if (qsignalmapper_sender_callback != nullptr) {
            QObject* callback_ret = qsignalmapper_sender_callback();
            return callback_ret;
        } else {
            return QSignalMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsignalmapper_sendersignalindex_isbase) {
            qsignalmapper_sendersignalindex_isbase = false;
            return QSignalMapper::senderSignalIndex();
        } else if (qsignalmapper_sendersignalindex_callback != nullptr) {
            int callback_ret = qsignalmapper_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSignalMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsignalmapper_receivers_isbase) {
            qsignalmapper_receivers_isbase = false;
            return QSignalMapper::receivers(signal);
        } else if (qsignalmapper_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsignalmapper_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSignalMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsignalmapper_issignalconnected_isbase) {
            qsignalmapper_issignalconnected_isbase = false;
            return QSignalMapper::isSignalConnected(signal);
        } else if (qsignalmapper_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsignalmapper_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSignalMapper::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSignalMapper_TimerEvent(QSignalMapper* self, QTimerEvent* event);
    friend void QSignalMapper_QBaseTimerEvent(QSignalMapper* self, QTimerEvent* event);
    friend void QSignalMapper_ChildEvent(QSignalMapper* self, QChildEvent* event);
    friend void QSignalMapper_QBaseChildEvent(QSignalMapper* self, QChildEvent* event);
    friend void QSignalMapper_CustomEvent(QSignalMapper* self, QEvent* event);
    friend void QSignalMapper_QBaseCustomEvent(QSignalMapper* self, QEvent* event);
    friend void QSignalMapper_ConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_QBaseConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_DisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_QBaseDisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend QObject* QSignalMapper_Sender(const QSignalMapper* self);
    friend QObject* QSignalMapper_QBaseSender(const QSignalMapper* self);
    friend int QSignalMapper_SenderSignalIndex(const QSignalMapper* self);
    friend int QSignalMapper_QBaseSenderSignalIndex(const QSignalMapper* self);
    friend int QSignalMapper_Receivers(const QSignalMapper* self, const char* signal);
    friend int QSignalMapper_QBaseReceivers(const QSignalMapper* self, const char* signal);
    friend bool QSignalMapper_IsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal);
    friend bool QSignalMapper_QBaseIsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal);
};

#endif
