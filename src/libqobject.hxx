#pragma once
#ifndef SRCC_LIBVIRTUALQOBJECT_H
#define SRCC_LIBVIRTUALQOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QObject so that we can call protected methods
class VirtualQObject final : public QObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQObject = true;

    // Virtual class public types (including callbacks)
    using QObject_Metacall_Callback = int (*)(QObject*, int, int, void**);
    using QObject_Event_Callback = bool (*)(QObject*, QEvent*);
    using QObject_EventFilter_Callback = bool (*)(QObject*, QObject*, QEvent*);
    using QObject_TimerEvent_Callback = void (*)(QObject*, QTimerEvent*);
    using QObject_ChildEvent_Callback = void (*)(QObject*, QChildEvent*);
    using QObject_CustomEvent_Callback = void (*)(QObject*, QEvent*);
    using QObject_ConnectNotify_Callback = void (*)(QObject*, QMetaMethod*);
    using QObject_DisconnectNotify_Callback = void (*)(QObject*, QMetaMethod*);
    using QObject_Sender_Callback = QObject* (*)();
    using QObject_SenderSignalIndex_Callback = int (*)();
    using QObject_Receivers_Callback = int (*)(const QObject*, const char*);
    using QObject_IsSignalConnected_Callback = bool (*)(const QObject*, QMetaMethod*);

  protected:
    // Instance callback storage
    QObject_Metacall_Callback qobject_metacall_callback = nullptr;
    QObject_Event_Callback qobject_event_callback = nullptr;
    QObject_EventFilter_Callback qobject_eventfilter_callback = nullptr;
    QObject_TimerEvent_Callback qobject_timerevent_callback = nullptr;
    QObject_ChildEvent_Callback qobject_childevent_callback = nullptr;
    QObject_CustomEvent_Callback qobject_customevent_callback = nullptr;
    QObject_ConnectNotify_Callback qobject_connectnotify_callback = nullptr;
    QObject_DisconnectNotify_Callback qobject_disconnectnotify_callback = nullptr;
    QObject_Sender_Callback qobject_sender_callback = nullptr;
    QObject_SenderSignalIndex_Callback qobject_sendersignalindex_callback = nullptr;
    QObject_Receivers_Callback qobject_receivers_callback = nullptr;
    QObject_IsSignalConnected_Callback qobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qobject_metacall_isbase = false;
    mutable bool qobject_event_isbase = false;
    mutable bool qobject_eventfilter_isbase = false;
    mutable bool qobject_timerevent_isbase = false;
    mutable bool qobject_childevent_isbase = false;
    mutable bool qobject_customevent_isbase = false;
    mutable bool qobject_connectnotify_isbase = false;
    mutable bool qobject_disconnectnotify_isbase = false;
    mutable bool qobject_sender_isbase = false;
    mutable bool qobject_sendersignalindex_isbase = false;
    mutable bool qobject_receivers_isbase = false;
    mutable bool qobject_issignalconnected_isbase = false;

  public:
    VirtualQObject() : QObject(){};
    VirtualQObject(QObject* parent) : QObject(parent){};

    ~VirtualQObject() {
        qobject_metacall_callback = nullptr;
        qobject_event_callback = nullptr;
        qobject_eventfilter_callback = nullptr;
        qobject_timerevent_callback = nullptr;
        qobject_childevent_callback = nullptr;
        qobject_customevent_callback = nullptr;
        qobject_connectnotify_callback = nullptr;
        qobject_disconnectnotify_callback = nullptr;
        qobject_sender_callback = nullptr;
        qobject_sendersignalindex_callback = nullptr;
        qobject_receivers_callback = nullptr;
        qobject_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQObject_Metacall_Callback(QObject_Metacall_Callback cb) { qobject_metacall_callback = cb; }
    inline void setQObject_Event_Callback(QObject_Event_Callback cb) { qobject_event_callback = cb; }
    inline void setQObject_EventFilter_Callback(QObject_EventFilter_Callback cb) { qobject_eventfilter_callback = cb; }
    inline void setQObject_TimerEvent_Callback(QObject_TimerEvent_Callback cb) { qobject_timerevent_callback = cb; }
    inline void setQObject_ChildEvent_Callback(QObject_ChildEvent_Callback cb) { qobject_childevent_callback = cb; }
    inline void setQObject_CustomEvent_Callback(QObject_CustomEvent_Callback cb) { qobject_customevent_callback = cb; }
    inline void setQObject_ConnectNotify_Callback(QObject_ConnectNotify_Callback cb) { qobject_connectnotify_callback = cb; }
    inline void setQObject_DisconnectNotify_Callback(QObject_DisconnectNotify_Callback cb) { qobject_disconnectnotify_callback = cb; }
    inline void setQObject_Sender_Callback(QObject_Sender_Callback cb) { qobject_sender_callback = cb; }
    inline void setQObject_SenderSignalIndex_Callback(QObject_SenderSignalIndex_Callback cb) { qobject_sendersignalindex_callback = cb; }
    inline void setQObject_Receivers_Callback(QObject_Receivers_Callback cb) { qobject_receivers_callback = cb; }
    inline void setQObject_IsSignalConnected_Callback(QObject_IsSignalConnected_Callback cb) { qobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQObject_Metacall_IsBase(bool value) const { qobject_metacall_isbase = value; }
    inline void setQObject_Event_IsBase(bool value) const { qobject_event_isbase = value; }
    inline void setQObject_EventFilter_IsBase(bool value) const { qobject_eventfilter_isbase = value; }
    inline void setQObject_TimerEvent_IsBase(bool value) const { qobject_timerevent_isbase = value; }
    inline void setQObject_ChildEvent_IsBase(bool value) const { qobject_childevent_isbase = value; }
    inline void setQObject_CustomEvent_IsBase(bool value) const { qobject_customevent_isbase = value; }
    inline void setQObject_ConnectNotify_IsBase(bool value) const { qobject_connectnotify_isbase = value; }
    inline void setQObject_DisconnectNotify_IsBase(bool value) const { qobject_disconnectnotify_isbase = value; }
    inline void setQObject_Sender_IsBase(bool value) const { qobject_sender_isbase = value; }
    inline void setQObject_SenderSignalIndex_IsBase(bool value) const { qobject_sendersignalindex_isbase = value; }
    inline void setQObject_Receivers_IsBase(bool value) const { qobject_receivers_isbase = value; }
    inline void setQObject_IsSignalConnected_IsBase(bool value) const { qobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qobject_metacall_isbase) {
            qobject_metacall_isbase = false;
            return QObject::qt_metacall(param1, param2, param3);
        } else if (qobject_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QObject::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qobject_event_isbase) {
            qobject_event_isbase = false;
            return QObject::event(event);
        } else if (qobject_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qobject_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QObject::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qobject_eventfilter_isbase) {
            qobject_eventfilter_isbase = false;
            return QObject::eventFilter(watched, event);
        } else if (qobject_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QObject::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qobject_timerevent_isbase) {
            qobject_timerevent_isbase = false;
            QObject::timerEvent(event);
        } else if (qobject_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qobject_timerevent_callback(this, cbval1);
        } else {
            QObject::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qobject_childevent_isbase) {
            qobject_childevent_isbase = false;
            QObject::childEvent(event);
        } else if (qobject_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qobject_childevent_callback(this, cbval1);
        } else {
            QObject::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qobject_customevent_isbase) {
            qobject_customevent_isbase = false;
            QObject::customEvent(event);
        } else if (qobject_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qobject_customevent_callback(this, cbval1);
        } else {
            QObject::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qobject_connectnotify_isbase) {
            qobject_connectnotify_isbase = false;
            QObject::connectNotify(signal);
        } else if (qobject_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qobject_connectnotify_callback(this, cbval1);
        } else {
            QObject::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qobject_disconnectnotify_isbase) {
            qobject_disconnectnotify_isbase = false;
            QObject::disconnectNotify(signal);
        } else if (qobject_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qobject_disconnectnotify_callback(this, cbval1);
        } else {
            QObject::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qobject_sender_isbase) {
            qobject_sender_isbase = false;
            return QObject::sender();
        } else if (qobject_sender_callback != nullptr) {
            QObject* callback_ret = qobject_sender_callback();
            return callback_ret;
        } else {
            return QObject::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qobject_sendersignalindex_isbase) {
            qobject_sendersignalindex_isbase = false;
            return QObject::senderSignalIndex();
        } else if (qobject_sendersignalindex_callback != nullptr) {
            int callback_ret = qobject_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QObject::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qobject_receivers_isbase) {
            qobject_receivers_isbase = false;
            return QObject::receivers(signal);
        } else if (qobject_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qobject_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QObject::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qobject_issignalconnected_isbase) {
            qobject_issignalconnected_isbase = false;
            return QObject::isSignalConnected(signal);
        } else if (qobject_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qobject_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QObject::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QObject_TimerEvent(QObject* self, QTimerEvent* event);
    friend void QObject_QBaseTimerEvent(QObject* self, QTimerEvent* event);
    friend void QObject_ChildEvent(QObject* self, QChildEvent* event);
    friend void QObject_QBaseChildEvent(QObject* self, QChildEvent* event);
    friend void QObject_CustomEvent(QObject* self, QEvent* event);
    friend void QObject_QBaseCustomEvent(QObject* self, QEvent* event);
    friend void QObject_ConnectNotify(QObject* self, const QMetaMethod* signal);
    friend void QObject_QBaseConnectNotify(QObject* self, const QMetaMethod* signal);
    friend void QObject_DisconnectNotify(QObject* self, const QMetaMethod* signal);
    friend void QObject_QBaseDisconnectNotify(QObject* self, const QMetaMethod* signal);
    friend QObject* QObject_Sender(const QObject* self);
    friend QObject* QObject_QBaseSender(const QObject* self);
    friend int QObject_SenderSignalIndex(const QObject* self);
    friend int QObject_QBaseSenderSignalIndex(const QObject* self);
    friend int QObject_Receivers(const QObject* self, const char* signal);
    friend int QObject_QBaseReceivers(const QObject* self, const char* signal);
    friend bool QObject_IsSignalConnected(const QObject* self, const QMetaMethod* signal);
    friend bool QObject_QBaseIsSignalConnected(const QObject* self, const QMetaMethod* signal);
};

#endif
