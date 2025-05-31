#pragma once
#ifndef SRCC_LIBVIRTUALQOBJECTCLEANUPHANDLER_H
#define SRCC_LIBVIRTUALQOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QObjectCleanupHandler so that we can call protected methods
class VirtualQObjectCleanupHandler final : public QObjectCleanupHandler {

  public:
    // Virtual class boolean flag
    bool isVirtualQObjectCleanupHandler = true;

    // Virtual class public types (including callbacks)
    using QObjectCleanupHandler_Metacall_Callback = int (*)(QObjectCleanupHandler*, int, int, void**);
    using QObjectCleanupHandler_Event_Callback = bool (*)(QObjectCleanupHandler*, QEvent*);
    using QObjectCleanupHandler_EventFilter_Callback = bool (*)(QObjectCleanupHandler*, QObject*, QEvent*);
    using QObjectCleanupHandler_TimerEvent_Callback = void (*)(QObjectCleanupHandler*, QTimerEvent*);
    using QObjectCleanupHandler_ChildEvent_Callback = void (*)(QObjectCleanupHandler*, QChildEvent*);
    using QObjectCleanupHandler_CustomEvent_Callback = void (*)(QObjectCleanupHandler*, QEvent*);
    using QObjectCleanupHandler_ConnectNotify_Callback = void (*)(QObjectCleanupHandler*, QMetaMethod*);
    using QObjectCleanupHandler_DisconnectNotify_Callback = void (*)(QObjectCleanupHandler*, QMetaMethod*);
    using QObjectCleanupHandler_Sender_Callback = QObject* (*)();
    using QObjectCleanupHandler_SenderSignalIndex_Callback = int (*)();
    using QObjectCleanupHandler_Receivers_Callback = int (*)(const QObjectCleanupHandler*, const char*);
    using QObjectCleanupHandler_IsSignalConnected_Callback = bool (*)(const QObjectCleanupHandler*, QMetaMethod*);

  protected:
    // Instance callback storage
    QObjectCleanupHandler_Metacall_Callback qobjectcleanuphandler_metacall_callback = nullptr;
    QObjectCleanupHandler_Event_Callback qobjectcleanuphandler_event_callback = nullptr;
    QObjectCleanupHandler_EventFilter_Callback qobjectcleanuphandler_eventfilter_callback = nullptr;
    QObjectCleanupHandler_TimerEvent_Callback qobjectcleanuphandler_timerevent_callback = nullptr;
    QObjectCleanupHandler_ChildEvent_Callback qobjectcleanuphandler_childevent_callback = nullptr;
    QObjectCleanupHandler_CustomEvent_Callback qobjectcleanuphandler_customevent_callback = nullptr;
    QObjectCleanupHandler_ConnectNotify_Callback qobjectcleanuphandler_connectnotify_callback = nullptr;
    QObjectCleanupHandler_DisconnectNotify_Callback qobjectcleanuphandler_disconnectnotify_callback = nullptr;
    QObjectCleanupHandler_Sender_Callback qobjectcleanuphandler_sender_callback = nullptr;
    QObjectCleanupHandler_SenderSignalIndex_Callback qobjectcleanuphandler_sendersignalindex_callback = nullptr;
    QObjectCleanupHandler_Receivers_Callback qobjectcleanuphandler_receivers_callback = nullptr;
    QObjectCleanupHandler_IsSignalConnected_Callback qobjectcleanuphandler_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qobjectcleanuphandler_metacall_isbase = false;
    mutable bool qobjectcleanuphandler_event_isbase = false;
    mutable bool qobjectcleanuphandler_eventfilter_isbase = false;
    mutable bool qobjectcleanuphandler_timerevent_isbase = false;
    mutable bool qobjectcleanuphandler_childevent_isbase = false;
    mutable bool qobjectcleanuphandler_customevent_isbase = false;
    mutable bool qobjectcleanuphandler_connectnotify_isbase = false;
    mutable bool qobjectcleanuphandler_disconnectnotify_isbase = false;
    mutable bool qobjectcleanuphandler_sender_isbase = false;
    mutable bool qobjectcleanuphandler_sendersignalindex_isbase = false;
    mutable bool qobjectcleanuphandler_receivers_isbase = false;
    mutable bool qobjectcleanuphandler_issignalconnected_isbase = false;

  public:
    VirtualQObjectCleanupHandler() : QObjectCleanupHandler(){};

    ~VirtualQObjectCleanupHandler() {
        qobjectcleanuphandler_metacall_callback = nullptr;
        qobjectcleanuphandler_event_callback = nullptr;
        qobjectcleanuphandler_eventfilter_callback = nullptr;
        qobjectcleanuphandler_timerevent_callback = nullptr;
        qobjectcleanuphandler_childevent_callback = nullptr;
        qobjectcleanuphandler_customevent_callback = nullptr;
        qobjectcleanuphandler_connectnotify_callback = nullptr;
        qobjectcleanuphandler_disconnectnotify_callback = nullptr;
        qobjectcleanuphandler_sender_callback = nullptr;
        qobjectcleanuphandler_sendersignalindex_callback = nullptr;
        qobjectcleanuphandler_receivers_callback = nullptr;
        qobjectcleanuphandler_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQObjectCleanupHandler_Metacall_Callback(QObjectCleanupHandler_Metacall_Callback cb) { qobjectcleanuphandler_metacall_callback = cb; }
    inline void setQObjectCleanupHandler_Event_Callback(QObjectCleanupHandler_Event_Callback cb) { qobjectcleanuphandler_event_callback = cb; }
    inline void setQObjectCleanupHandler_EventFilter_Callback(QObjectCleanupHandler_EventFilter_Callback cb) { qobjectcleanuphandler_eventfilter_callback = cb; }
    inline void setQObjectCleanupHandler_TimerEvent_Callback(QObjectCleanupHandler_TimerEvent_Callback cb) { qobjectcleanuphandler_timerevent_callback = cb; }
    inline void setQObjectCleanupHandler_ChildEvent_Callback(QObjectCleanupHandler_ChildEvent_Callback cb) { qobjectcleanuphandler_childevent_callback = cb; }
    inline void setQObjectCleanupHandler_CustomEvent_Callback(QObjectCleanupHandler_CustomEvent_Callback cb) { qobjectcleanuphandler_customevent_callback = cb; }
    inline void setQObjectCleanupHandler_ConnectNotify_Callback(QObjectCleanupHandler_ConnectNotify_Callback cb) { qobjectcleanuphandler_connectnotify_callback = cb; }
    inline void setQObjectCleanupHandler_DisconnectNotify_Callback(QObjectCleanupHandler_DisconnectNotify_Callback cb) { qobjectcleanuphandler_disconnectnotify_callback = cb; }
    inline void setQObjectCleanupHandler_Sender_Callback(QObjectCleanupHandler_Sender_Callback cb) { qobjectcleanuphandler_sender_callback = cb; }
    inline void setQObjectCleanupHandler_SenderSignalIndex_Callback(QObjectCleanupHandler_SenderSignalIndex_Callback cb) { qobjectcleanuphandler_sendersignalindex_callback = cb; }
    inline void setQObjectCleanupHandler_Receivers_Callback(QObjectCleanupHandler_Receivers_Callback cb) { qobjectcleanuphandler_receivers_callback = cb; }
    inline void setQObjectCleanupHandler_IsSignalConnected_Callback(QObjectCleanupHandler_IsSignalConnected_Callback cb) { qobjectcleanuphandler_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQObjectCleanupHandler_Metacall_IsBase(bool value) const { qobjectcleanuphandler_metacall_isbase = value; }
    inline void setQObjectCleanupHandler_Event_IsBase(bool value) const { qobjectcleanuphandler_event_isbase = value; }
    inline void setQObjectCleanupHandler_EventFilter_IsBase(bool value) const { qobjectcleanuphandler_eventfilter_isbase = value; }
    inline void setQObjectCleanupHandler_TimerEvent_IsBase(bool value) const { qobjectcleanuphandler_timerevent_isbase = value; }
    inline void setQObjectCleanupHandler_ChildEvent_IsBase(bool value) const { qobjectcleanuphandler_childevent_isbase = value; }
    inline void setQObjectCleanupHandler_CustomEvent_IsBase(bool value) const { qobjectcleanuphandler_customevent_isbase = value; }
    inline void setQObjectCleanupHandler_ConnectNotify_IsBase(bool value) const { qobjectcleanuphandler_connectnotify_isbase = value; }
    inline void setQObjectCleanupHandler_DisconnectNotify_IsBase(bool value) const { qobjectcleanuphandler_disconnectnotify_isbase = value; }
    inline void setQObjectCleanupHandler_Sender_IsBase(bool value) const { qobjectcleanuphandler_sender_isbase = value; }
    inline void setQObjectCleanupHandler_SenderSignalIndex_IsBase(bool value) const { qobjectcleanuphandler_sendersignalindex_isbase = value; }
    inline void setQObjectCleanupHandler_Receivers_IsBase(bool value) const { qobjectcleanuphandler_receivers_isbase = value; }
    inline void setQObjectCleanupHandler_IsSignalConnected_IsBase(bool value) const { qobjectcleanuphandler_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qobjectcleanuphandler_metacall_isbase) {
            qobjectcleanuphandler_metacall_isbase = false;
            return QObjectCleanupHandler::qt_metacall(param1, param2, param3);
        } else if (qobjectcleanuphandler_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qobjectcleanuphandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QObjectCleanupHandler::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qobjectcleanuphandler_event_isbase) {
            qobjectcleanuphandler_event_isbase = false;
            return QObjectCleanupHandler::event(event);
        } else if (qobjectcleanuphandler_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qobjectcleanuphandler_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QObjectCleanupHandler::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qobjectcleanuphandler_eventfilter_isbase) {
            qobjectcleanuphandler_eventfilter_isbase = false;
            return QObjectCleanupHandler::eventFilter(watched, event);
        } else if (qobjectcleanuphandler_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qobjectcleanuphandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QObjectCleanupHandler::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qobjectcleanuphandler_timerevent_isbase) {
            qobjectcleanuphandler_timerevent_isbase = false;
            QObjectCleanupHandler::timerEvent(event);
        } else if (qobjectcleanuphandler_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qobjectcleanuphandler_timerevent_callback(this, cbval1);
        } else {
            QObjectCleanupHandler::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qobjectcleanuphandler_childevent_isbase) {
            qobjectcleanuphandler_childevent_isbase = false;
            QObjectCleanupHandler::childEvent(event);
        } else if (qobjectcleanuphandler_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qobjectcleanuphandler_childevent_callback(this, cbval1);
        } else {
            QObjectCleanupHandler::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qobjectcleanuphandler_customevent_isbase) {
            qobjectcleanuphandler_customevent_isbase = false;
            QObjectCleanupHandler::customEvent(event);
        } else if (qobjectcleanuphandler_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qobjectcleanuphandler_customevent_callback(this, cbval1);
        } else {
            QObjectCleanupHandler::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qobjectcleanuphandler_connectnotify_isbase) {
            qobjectcleanuphandler_connectnotify_isbase = false;
            QObjectCleanupHandler::connectNotify(signal);
        } else if (qobjectcleanuphandler_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qobjectcleanuphandler_connectnotify_callback(this, cbval1);
        } else {
            QObjectCleanupHandler::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qobjectcleanuphandler_disconnectnotify_isbase) {
            qobjectcleanuphandler_disconnectnotify_isbase = false;
            QObjectCleanupHandler::disconnectNotify(signal);
        } else if (qobjectcleanuphandler_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qobjectcleanuphandler_disconnectnotify_callback(this, cbval1);
        } else {
            QObjectCleanupHandler::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qobjectcleanuphandler_sender_isbase) {
            qobjectcleanuphandler_sender_isbase = false;
            return QObjectCleanupHandler::sender();
        } else if (qobjectcleanuphandler_sender_callback != nullptr) {
            QObject* callback_ret = qobjectcleanuphandler_sender_callback();
            return callback_ret;
        } else {
            return QObjectCleanupHandler::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qobjectcleanuphandler_sendersignalindex_isbase) {
            qobjectcleanuphandler_sendersignalindex_isbase = false;
            return QObjectCleanupHandler::senderSignalIndex();
        } else if (qobjectcleanuphandler_sendersignalindex_callback != nullptr) {
            int callback_ret = qobjectcleanuphandler_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QObjectCleanupHandler::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qobjectcleanuphandler_receivers_isbase) {
            qobjectcleanuphandler_receivers_isbase = false;
            return QObjectCleanupHandler::receivers(signal);
        } else if (qobjectcleanuphandler_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qobjectcleanuphandler_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QObjectCleanupHandler::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qobjectcleanuphandler_issignalconnected_isbase) {
            qobjectcleanuphandler_issignalconnected_isbase = false;
            return QObjectCleanupHandler::isSignalConnected(signal);
        } else if (qobjectcleanuphandler_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qobjectcleanuphandler_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QObjectCleanupHandler::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QObjectCleanupHandler_TimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
    friend void QObjectCleanupHandler_QBaseTimerEvent(QObjectCleanupHandler* self, QTimerEvent* event);
    friend void QObjectCleanupHandler_ChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
    friend void QObjectCleanupHandler_QBaseChildEvent(QObjectCleanupHandler* self, QChildEvent* event);
    friend void QObjectCleanupHandler_CustomEvent(QObjectCleanupHandler* self, QEvent* event);
    friend void QObjectCleanupHandler_QBaseCustomEvent(QObjectCleanupHandler* self, QEvent* event);
    friend void QObjectCleanupHandler_ConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
    friend void QObjectCleanupHandler_QBaseConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
    friend void QObjectCleanupHandler_DisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
    friend void QObjectCleanupHandler_QBaseDisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal);
    friend QObject* QObjectCleanupHandler_Sender(const QObjectCleanupHandler* self);
    friend QObject* QObjectCleanupHandler_QBaseSender(const QObjectCleanupHandler* self);
    friend int QObjectCleanupHandler_SenderSignalIndex(const QObjectCleanupHandler* self);
    friend int QObjectCleanupHandler_QBaseSenderSignalIndex(const QObjectCleanupHandler* self);
    friend int QObjectCleanupHandler_Receivers(const QObjectCleanupHandler* self, const char* signal);
    friend int QObjectCleanupHandler_QBaseReceivers(const QObjectCleanupHandler* self, const char* signal);
    friend bool QObjectCleanupHandler_IsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal);
    friend bool QObjectCleanupHandler_QBaseIsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal);
};

#endif
