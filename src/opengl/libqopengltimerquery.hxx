#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLTIMERQUERY_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLTIMERQUERY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLTimerQuery so that we can call protected methods
class VirtualQOpenGLTimerQuery final : public QOpenGLTimerQuery {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLTimerQuery = true;

    // Virtual class public types (including callbacks)
    using QOpenGLTimerQuery_Metacall_Callback = int (*)(QOpenGLTimerQuery*, int, int, void**);
    using QOpenGLTimerQuery_Event_Callback = bool (*)(QOpenGLTimerQuery*, QEvent*);
    using QOpenGLTimerQuery_EventFilter_Callback = bool (*)(QOpenGLTimerQuery*, QObject*, QEvent*);
    using QOpenGLTimerQuery_TimerEvent_Callback = void (*)(QOpenGLTimerQuery*, QTimerEvent*);
    using QOpenGLTimerQuery_ChildEvent_Callback = void (*)(QOpenGLTimerQuery*, QChildEvent*);
    using QOpenGLTimerQuery_CustomEvent_Callback = void (*)(QOpenGLTimerQuery*, QEvent*);
    using QOpenGLTimerQuery_ConnectNotify_Callback = void (*)(QOpenGLTimerQuery*, QMetaMethod*);
    using QOpenGLTimerQuery_DisconnectNotify_Callback = void (*)(QOpenGLTimerQuery*, QMetaMethod*);
    using QOpenGLTimerQuery_Sender_Callback = QObject* (*)();
    using QOpenGLTimerQuery_SenderSignalIndex_Callback = int (*)();
    using QOpenGLTimerQuery_Receivers_Callback = int (*)(const QOpenGLTimerQuery*, const char*);
    using QOpenGLTimerQuery_IsSignalConnected_Callback = bool (*)(const QOpenGLTimerQuery*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLTimerQuery_Metacall_Callback qopengltimerquery_metacall_callback = nullptr;
    QOpenGLTimerQuery_Event_Callback qopengltimerquery_event_callback = nullptr;
    QOpenGLTimerQuery_EventFilter_Callback qopengltimerquery_eventfilter_callback = nullptr;
    QOpenGLTimerQuery_TimerEvent_Callback qopengltimerquery_timerevent_callback = nullptr;
    QOpenGLTimerQuery_ChildEvent_Callback qopengltimerquery_childevent_callback = nullptr;
    QOpenGLTimerQuery_CustomEvent_Callback qopengltimerquery_customevent_callback = nullptr;
    QOpenGLTimerQuery_ConnectNotify_Callback qopengltimerquery_connectnotify_callback = nullptr;
    QOpenGLTimerQuery_DisconnectNotify_Callback qopengltimerquery_disconnectnotify_callback = nullptr;
    QOpenGLTimerQuery_Sender_Callback qopengltimerquery_sender_callback = nullptr;
    QOpenGLTimerQuery_SenderSignalIndex_Callback qopengltimerquery_sendersignalindex_callback = nullptr;
    QOpenGLTimerQuery_Receivers_Callback qopengltimerquery_receivers_callback = nullptr;
    QOpenGLTimerQuery_IsSignalConnected_Callback qopengltimerquery_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopengltimerquery_metacall_isbase = false;
    mutable bool qopengltimerquery_event_isbase = false;
    mutable bool qopengltimerquery_eventfilter_isbase = false;
    mutable bool qopengltimerquery_timerevent_isbase = false;
    mutable bool qopengltimerquery_childevent_isbase = false;
    mutable bool qopengltimerquery_customevent_isbase = false;
    mutable bool qopengltimerquery_connectnotify_isbase = false;
    mutable bool qopengltimerquery_disconnectnotify_isbase = false;
    mutable bool qopengltimerquery_sender_isbase = false;
    mutable bool qopengltimerquery_sendersignalindex_isbase = false;
    mutable bool qopengltimerquery_receivers_isbase = false;
    mutable bool qopengltimerquery_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLTimerQuery() : QOpenGLTimerQuery() {};
    VirtualQOpenGLTimerQuery(QObject* parent) : QOpenGLTimerQuery(parent) {};

    ~VirtualQOpenGLTimerQuery() {
        qopengltimerquery_metacall_callback = nullptr;
        qopengltimerquery_event_callback = nullptr;
        qopengltimerquery_eventfilter_callback = nullptr;
        qopengltimerquery_timerevent_callback = nullptr;
        qopengltimerquery_childevent_callback = nullptr;
        qopengltimerquery_customevent_callback = nullptr;
        qopengltimerquery_connectnotify_callback = nullptr;
        qopengltimerquery_disconnectnotify_callback = nullptr;
        qopengltimerquery_sender_callback = nullptr;
        qopengltimerquery_sendersignalindex_callback = nullptr;
        qopengltimerquery_receivers_callback = nullptr;
        qopengltimerquery_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLTimerQuery_Metacall_Callback(QOpenGLTimerQuery_Metacall_Callback cb) { qopengltimerquery_metacall_callback = cb; }
    inline void setQOpenGLTimerQuery_Event_Callback(QOpenGLTimerQuery_Event_Callback cb) { qopengltimerquery_event_callback = cb; }
    inline void setQOpenGLTimerQuery_EventFilter_Callback(QOpenGLTimerQuery_EventFilter_Callback cb) { qopengltimerquery_eventfilter_callback = cb; }
    inline void setQOpenGLTimerQuery_TimerEvent_Callback(QOpenGLTimerQuery_TimerEvent_Callback cb) { qopengltimerquery_timerevent_callback = cb; }
    inline void setQOpenGLTimerQuery_ChildEvent_Callback(QOpenGLTimerQuery_ChildEvent_Callback cb) { qopengltimerquery_childevent_callback = cb; }
    inline void setQOpenGLTimerQuery_CustomEvent_Callback(QOpenGLTimerQuery_CustomEvent_Callback cb) { qopengltimerquery_customevent_callback = cb; }
    inline void setQOpenGLTimerQuery_ConnectNotify_Callback(QOpenGLTimerQuery_ConnectNotify_Callback cb) { qopengltimerquery_connectnotify_callback = cb; }
    inline void setQOpenGLTimerQuery_DisconnectNotify_Callback(QOpenGLTimerQuery_DisconnectNotify_Callback cb) { qopengltimerquery_disconnectnotify_callback = cb; }
    inline void setQOpenGLTimerQuery_Sender_Callback(QOpenGLTimerQuery_Sender_Callback cb) { qopengltimerquery_sender_callback = cb; }
    inline void setQOpenGLTimerQuery_SenderSignalIndex_Callback(QOpenGLTimerQuery_SenderSignalIndex_Callback cb) { qopengltimerquery_sendersignalindex_callback = cb; }
    inline void setQOpenGLTimerQuery_Receivers_Callback(QOpenGLTimerQuery_Receivers_Callback cb) { qopengltimerquery_receivers_callback = cb; }
    inline void setQOpenGLTimerQuery_IsSignalConnected_Callback(QOpenGLTimerQuery_IsSignalConnected_Callback cb) { qopengltimerquery_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLTimerQuery_Metacall_IsBase(bool value) const { qopengltimerquery_metacall_isbase = value; }
    inline void setQOpenGLTimerQuery_Event_IsBase(bool value) const { qopengltimerquery_event_isbase = value; }
    inline void setQOpenGLTimerQuery_EventFilter_IsBase(bool value) const { qopengltimerquery_eventfilter_isbase = value; }
    inline void setQOpenGLTimerQuery_TimerEvent_IsBase(bool value) const { qopengltimerquery_timerevent_isbase = value; }
    inline void setQOpenGLTimerQuery_ChildEvent_IsBase(bool value) const { qopengltimerquery_childevent_isbase = value; }
    inline void setQOpenGLTimerQuery_CustomEvent_IsBase(bool value) const { qopengltimerquery_customevent_isbase = value; }
    inline void setQOpenGLTimerQuery_ConnectNotify_IsBase(bool value) const { qopengltimerquery_connectnotify_isbase = value; }
    inline void setQOpenGLTimerQuery_DisconnectNotify_IsBase(bool value) const { qopengltimerquery_disconnectnotify_isbase = value; }
    inline void setQOpenGLTimerQuery_Sender_IsBase(bool value) const { qopengltimerquery_sender_isbase = value; }
    inline void setQOpenGLTimerQuery_SenderSignalIndex_IsBase(bool value) const { qopengltimerquery_sendersignalindex_isbase = value; }
    inline void setQOpenGLTimerQuery_Receivers_IsBase(bool value) const { qopengltimerquery_receivers_isbase = value; }
    inline void setQOpenGLTimerQuery_IsSignalConnected_IsBase(bool value) const { qopengltimerquery_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopengltimerquery_metacall_isbase) {
            qopengltimerquery_metacall_isbase = false;
            return QOpenGLTimerQuery::qt_metacall(param1, param2, param3);
        } else if (qopengltimerquery_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopengltimerquery_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLTimerQuery::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopengltimerquery_event_isbase) {
            qopengltimerquery_event_isbase = false;
            return QOpenGLTimerQuery::event(event);
        } else if (qopengltimerquery_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopengltimerquery_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLTimerQuery::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopengltimerquery_eventfilter_isbase) {
            qopengltimerquery_eventfilter_isbase = false;
            return QOpenGLTimerQuery::eventFilter(watched, event);
        } else if (qopengltimerquery_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopengltimerquery_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLTimerQuery::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopengltimerquery_timerevent_isbase) {
            qopengltimerquery_timerevent_isbase = false;
            QOpenGLTimerQuery::timerEvent(event);
        } else if (qopengltimerquery_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopengltimerquery_timerevent_callback(this, cbval1);
        } else {
            QOpenGLTimerQuery::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopengltimerquery_childevent_isbase) {
            qopengltimerquery_childevent_isbase = false;
            QOpenGLTimerQuery::childEvent(event);
        } else if (qopengltimerquery_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopengltimerquery_childevent_callback(this, cbval1);
        } else {
            QOpenGLTimerQuery::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopengltimerquery_customevent_isbase) {
            qopengltimerquery_customevent_isbase = false;
            QOpenGLTimerQuery::customEvent(event);
        } else if (qopengltimerquery_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopengltimerquery_customevent_callback(this, cbval1);
        } else {
            QOpenGLTimerQuery::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopengltimerquery_connectnotify_isbase) {
            qopengltimerquery_connectnotify_isbase = false;
            QOpenGLTimerQuery::connectNotify(signal);
        } else if (qopengltimerquery_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopengltimerquery_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLTimerQuery::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopengltimerquery_disconnectnotify_isbase) {
            qopengltimerquery_disconnectnotify_isbase = false;
            QOpenGLTimerQuery::disconnectNotify(signal);
        } else if (qopengltimerquery_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopengltimerquery_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLTimerQuery::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopengltimerquery_sender_isbase) {
            qopengltimerquery_sender_isbase = false;
            return QOpenGLTimerQuery::sender();
        } else if (qopengltimerquery_sender_callback != nullptr) {
            QObject* callback_ret = qopengltimerquery_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLTimerQuery::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopengltimerquery_sendersignalindex_isbase) {
            qopengltimerquery_sendersignalindex_isbase = false;
            return QOpenGLTimerQuery::senderSignalIndex();
        } else if (qopengltimerquery_sendersignalindex_callback != nullptr) {
            int callback_ret = qopengltimerquery_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLTimerQuery::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopengltimerquery_receivers_isbase) {
            qopengltimerquery_receivers_isbase = false;
            return QOpenGLTimerQuery::receivers(signal);
        } else if (qopengltimerquery_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopengltimerquery_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLTimerQuery::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopengltimerquery_issignalconnected_isbase) {
            qopengltimerquery_issignalconnected_isbase = false;
            return QOpenGLTimerQuery::isSignalConnected(signal);
        } else if (qopengltimerquery_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopengltimerquery_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLTimerQuery::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLTimerQuery_TimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
    friend void QOpenGLTimerQuery_QBaseTimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
    friend void QOpenGLTimerQuery_ChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
    friend void QOpenGLTimerQuery_QBaseChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
    friend void QOpenGLTimerQuery_CustomEvent(QOpenGLTimerQuery* self, QEvent* event);
    friend void QOpenGLTimerQuery_QBaseCustomEvent(QOpenGLTimerQuery* self, QEvent* event);
    friend void QOpenGLTimerQuery_ConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
    friend void QOpenGLTimerQuery_QBaseConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
    friend void QOpenGLTimerQuery_DisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
    friend void QOpenGLTimerQuery_QBaseDisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
    friend QObject* QOpenGLTimerQuery_Sender(const QOpenGLTimerQuery* self);
    friend QObject* QOpenGLTimerQuery_QBaseSender(const QOpenGLTimerQuery* self);
    friend int QOpenGLTimerQuery_SenderSignalIndex(const QOpenGLTimerQuery* self);
    friend int QOpenGLTimerQuery_QBaseSenderSignalIndex(const QOpenGLTimerQuery* self);
    friend int QOpenGLTimerQuery_Receivers(const QOpenGLTimerQuery* self, const char* signal);
    friend int QOpenGLTimerQuery_QBaseReceivers(const QOpenGLTimerQuery* self, const char* signal);
    friend bool QOpenGLTimerQuery_IsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal);
    friend bool QOpenGLTimerQuery_QBaseIsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal);
};

// This class is a subclass of QOpenGLTimeMonitor so that we can call protected methods
class VirtualQOpenGLTimeMonitor final : public QOpenGLTimeMonitor {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLTimeMonitor = true;

    // Virtual class public types (including callbacks)
    using QOpenGLTimeMonitor_Metacall_Callback = int (*)(QOpenGLTimeMonitor*, int, int, void**);
    using QOpenGLTimeMonitor_Event_Callback = bool (*)(QOpenGLTimeMonitor*, QEvent*);
    using QOpenGLTimeMonitor_EventFilter_Callback = bool (*)(QOpenGLTimeMonitor*, QObject*, QEvent*);
    using QOpenGLTimeMonitor_TimerEvent_Callback = void (*)(QOpenGLTimeMonitor*, QTimerEvent*);
    using QOpenGLTimeMonitor_ChildEvent_Callback = void (*)(QOpenGLTimeMonitor*, QChildEvent*);
    using QOpenGLTimeMonitor_CustomEvent_Callback = void (*)(QOpenGLTimeMonitor*, QEvent*);
    using QOpenGLTimeMonitor_ConnectNotify_Callback = void (*)(QOpenGLTimeMonitor*, QMetaMethod*);
    using QOpenGLTimeMonitor_DisconnectNotify_Callback = void (*)(QOpenGLTimeMonitor*, QMetaMethod*);
    using QOpenGLTimeMonitor_Sender_Callback = QObject* (*)();
    using QOpenGLTimeMonitor_SenderSignalIndex_Callback = int (*)();
    using QOpenGLTimeMonitor_Receivers_Callback = int (*)(const QOpenGLTimeMonitor*, const char*);
    using QOpenGLTimeMonitor_IsSignalConnected_Callback = bool (*)(const QOpenGLTimeMonitor*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLTimeMonitor_Metacall_Callback qopengltimemonitor_metacall_callback = nullptr;
    QOpenGLTimeMonitor_Event_Callback qopengltimemonitor_event_callback = nullptr;
    QOpenGLTimeMonitor_EventFilter_Callback qopengltimemonitor_eventfilter_callback = nullptr;
    QOpenGLTimeMonitor_TimerEvent_Callback qopengltimemonitor_timerevent_callback = nullptr;
    QOpenGLTimeMonitor_ChildEvent_Callback qopengltimemonitor_childevent_callback = nullptr;
    QOpenGLTimeMonitor_CustomEvent_Callback qopengltimemonitor_customevent_callback = nullptr;
    QOpenGLTimeMonitor_ConnectNotify_Callback qopengltimemonitor_connectnotify_callback = nullptr;
    QOpenGLTimeMonitor_DisconnectNotify_Callback qopengltimemonitor_disconnectnotify_callback = nullptr;
    QOpenGLTimeMonitor_Sender_Callback qopengltimemonitor_sender_callback = nullptr;
    QOpenGLTimeMonitor_SenderSignalIndex_Callback qopengltimemonitor_sendersignalindex_callback = nullptr;
    QOpenGLTimeMonitor_Receivers_Callback qopengltimemonitor_receivers_callback = nullptr;
    QOpenGLTimeMonitor_IsSignalConnected_Callback qopengltimemonitor_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopengltimemonitor_metacall_isbase = false;
    mutable bool qopengltimemonitor_event_isbase = false;
    mutable bool qopengltimemonitor_eventfilter_isbase = false;
    mutable bool qopengltimemonitor_timerevent_isbase = false;
    mutable bool qopengltimemonitor_childevent_isbase = false;
    mutable bool qopengltimemonitor_customevent_isbase = false;
    mutable bool qopengltimemonitor_connectnotify_isbase = false;
    mutable bool qopengltimemonitor_disconnectnotify_isbase = false;
    mutable bool qopengltimemonitor_sender_isbase = false;
    mutable bool qopengltimemonitor_sendersignalindex_isbase = false;
    mutable bool qopengltimemonitor_receivers_isbase = false;
    mutable bool qopengltimemonitor_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLTimeMonitor() : QOpenGLTimeMonitor() {};
    VirtualQOpenGLTimeMonitor(QObject* parent) : QOpenGLTimeMonitor(parent) {};

    ~VirtualQOpenGLTimeMonitor() {
        qopengltimemonitor_metacall_callback = nullptr;
        qopengltimemonitor_event_callback = nullptr;
        qopengltimemonitor_eventfilter_callback = nullptr;
        qopengltimemonitor_timerevent_callback = nullptr;
        qopengltimemonitor_childevent_callback = nullptr;
        qopengltimemonitor_customevent_callback = nullptr;
        qopengltimemonitor_connectnotify_callback = nullptr;
        qopengltimemonitor_disconnectnotify_callback = nullptr;
        qopengltimemonitor_sender_callback = nullptr;
        qopengltimemonitor_sendersignalindex_callback = nullptr;
        qopengltimemonitor_receivers_callback = nullptr;
        qopengltimemonitor_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLTimeMonitor_Metacall_Callback(QOpenGLTimeMonitor_Metacall_Callback cb) { qopengltimemonitor_metacall_callback = cb; }
    inline void setQOpenGLTimeMonitor_Event_Callback(QOpenGLTimeMonitor_Event_Callback cb) { qopengltimemonitor_event_callback = cb; }
    inline void setQOpenGLTimeMonitor_EventFilter_Callback(QOpenGLTimeMonitor_EventFilter_Callback cb) { qopengltimemonitor_eventfilter_callback = cb; }
    inline void setQOpenGLTimeMonitor_TimerEvent_Callback(QOpenGLTimeMonitor_TimerEvent_Callback cb) { qopengltimemonitor_timerevent_callback = cb; }
    inline void setQOpenGLTimeMonitor_ChildEvent_Callback(QOpenGLTimeMonitor_ChildEvent_Callback cb) { qopengltimemonitor_childevent_callback = cb; }
    inline void setQOpenGLTimeMonitor_CustomEvent_Callback(QOpenGLTimeMonitor_CustomEvent_Callback cb) { qopengltimemonitor_customevent_callback = cb; }
    inline void setQOpenGLTimeMonitor_ConnectNotify_Callback(QOpenGLTimeMonitor_ConnectNotify_Callback cb) { qopengltimemonitor_connectnotify_callback = cb; }
    inline void setQOpenGLTimeMonitor_DisconnectNotify_Callback(QOpenGLTimeMonitor_DisconnectNotify_Callback cb) { qopengltimemonitor_disconnectnotify_callback = cb; }
    inline void setQOpenGLTimeMonitor_Sender_Callback(QOpenGLTimeMonitor_Sender_Callback cb) { qopengltimemonitor_sender_callback = cb; }
    inline void setQOpenGLTimeMonitor_SenderSignalIndex_Callback(QOpenGLTimeMonitor_SenderSignalIndex_Callback cb) { qopengltimemonitor_sendersignalindex_callback = cb; }
    inline void setQOpenGLTimeMonitor_Receivers_Callback(QOpenGLTimeMonitor_Receivers_Callback cb) { qopengltimemonitor_receivers_callback = cb; }
    inline void setQOpenGLTimeMonitor_IsSignalConnected_Callback(QOpenGLTimeMonitor_IsSignalConnected_Callback cb) { qopengltimemonitor_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLTimeMonitor_Metacall_IsBase(bool value) const { qopengltimemonitor_metacall_isbase = value; }
    inline void setQOpenGLTimeMonitor_Event_IsBase(bool value) const { qopengltimemonitor_event_isbase = value; }
    inline void setQOpenGLTimeMonitor_EventFilter_IsBase(bool value) const { qopengltimemonitor_eventfilter_isbase = value; }
    inline void setQOpenGLTimeMonitor_TimerEvent_IsBase(bool value) const { qopengltimemonitor_timerevent_isbase = value; }
    inline void setQOpenGLTimeMonitor_ChildEvent_IsBase(bool value) const { qopengltimemonitor_childevent_isbase = value; }
    inline void setQOpenGLTimeMonitor_CustomEvent_IsBase(bool value) const { qopengltimemonitor_customevent_isbase = value; }
    inline void setQOpenGLTimeMonitor_ConnectNotify_IsBase(bool value) const { qopengltimemonitor_connectnotify_isbase = value; }
    inline void setQOpenGLTimeMonitor_DisconnectNotify_IsBase(bool value) const { qopengltimemonitor_disconnectnotify_isbase = value; }
    inline void setQOpenGLTimeMonitor_Sender_IsBase(bool value) const { qopengltimemonitor_sender_isbase = value; }
    inline void setQOpenGLTimeMonitor_SenderSignalIndex_IsBase(bool value) const { qopengltimemonitor_sendersignalindex_isbase = value; }
    inline void setQOpenGLTimeMonitor_Receivers_IsBase(bool value) const { qopengltimemonitor_receivers_isbase = value; }
    inline void setQOpenGLTimeMonitor_IsSignalConnected_IsBase(bool value) const { qopengltimemonitor_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopengltimemonitor_metacall_isbase) {
            qopengltimemonitor_metacall_isbase = false;
            return QOpenGLTimeMonitor::qt_metacall(param1, param2, param3);
        } else if (qopengltimemonitor_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopengltimemonitor_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLTimeMonitor::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopengltimemonitor_event_isbase) {
            qopengltimemonitor_event_isbase = false;
            return QOpenGLTimeMonitor::event(event);
        } else if (qopengltimemonitor_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopengltimemonitor_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLTimeMonitor::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopengltimemonitor_eventfilter_isbase) {
            qopengltimemonitor_eventfilter_isbase = false;
            return QOpenGLTimeMonitor::eventFilter(watched, event);
        } else if (qopengltimemonitor_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopengltimemonitor_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLTimeMonitor::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopengltimemonitor_timerevent_isbase) {
            qopengltimemonitor_timerevent_isbase = false;
            QOpenGLTimeMonitor::timerEvent(event);
        } else if (qopengltimemonitor_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopengltimemonitor_timerevent_callback(this, cbval1);
        } else {
            QOpenGLTimeMonitor::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopengltimemonitor_childevent_isbase) {
            qopengltimemonitor_childevent_isbase = false;
            QOpenGLTimeMonitor::childEvent(event);
        } else if (qopengltimemonitor_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopengltimemonitor_childevent_callback(this, cbval1);
        } else {
            QOpenGLTimeMonitor::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopengltimemonitor_customevent_isbase) {
            qopengltimemonitor_customevent_isbase = false;
            QOpenGLTimeMonitor::customEvent(event);
        } else if (qopengltimemonitor_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopengltimemonitor_customevent_callback(this, cbval1);
        } else {
            QOpenGLTimeMonitor::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopengltimemonitor_connectnotify_isbase) {
            qopengltimemonitor_connectnotify_isbase = false;
            QOpenGLTimeMonitor::connectNotify(signal);
        } else if (qopengltimemonitor_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopengltimemonitor_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLTimeMonitor::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopengltimemonitor_disconnectnotify_isbase) {
            qopengltimemonitor_disconnectnotify_isbase = false;
            QOpenGLTimeMonitor::disconnectNotify(signal);
        } else if (qopengltimemonitor_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopengltimemonitor_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLTimeMonitor::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopengltimemonitor_sender_isbase) {
            qopengltimemonitor_sender_isbase = false;
            return QOpenGLTimeMonitor::sender();
        } else if (qopengltimemonitor_sender_callback != nullptr) {
            QObject* callback_ret = qopengltimemonitor_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLTimeMonitor::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopengltimemonitor_sendersignalindex_isbase) {
            qopengltimemonitor_sendersignalindex_isbase = false;
            return QOpenGLTimeMonitor::senderSignalIndex();
        } else if (qopengltimemonitor_sendersignalindex_callback != nullptr) {
            int callback_ret = qopengltimemonitor_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLTimeMonitor::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopengltimemonitor_receivers_isbase) {
            qopengltimemonitor_receivers_isbase = false;
            return QOpenGLTimeMonitor::receivers(signal);
        } else if (qopengltimemonitor_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopengltimemonitor_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLTimeMonitor::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopengltimemonitor_issignalconnected_isbase) {
            qopengltimemonitor_issignalconnected_isbase = false;
            return QOpenGLTimeMonitor::isSignalConnected(signal);
        } else if (qopengltimemonitor_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopengltimemonitor_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLTimeMonitor::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLTimeMonitor_TimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
    friend void QOpenGLTimeMonitor_QBaseTimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
    friend void QOpenGLTimeMonitor_ChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
    friend void QOpenGLTimeMonitor_QBaseChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
    friend void QOpenGLTimeMonitor_CustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
    friend void QOpenGLTimeMonitor_QBaseCustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
    friend void QOpenGLTimeMonitor_ConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
    friend void QOpenGLTimeMonitor_QBaseConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
    friend void QOpenGLTimeMonitor_DisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
    friend void QOpenGLTimeMonitor_QBaseDisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
    friend QObject* QOpenGLTimeMonitor_Sender(const QOpenGLTimeMonitor* self);
    friend QObject* QOpenGLTimeMonitor_QBaseSender(const QOpenGLTimeMonitor* self);
    friend int QOpenGLTimeMonitor_SenderSignalIndex(const QOpenGLTimeMonitor* self);
    friend int QOpenGLTimeMonitor_QBaseSenderSignalIndex(const QOpenGLTimeMonitor* self);
    friend int QOpenGLTimeMonitor_Receivers(const QOpenGLTimeMonitor* self, const char* signal);
    friend int QOpenGLTimeMonitor_QBaseReceivers(const QOpenGLTimeMonitor* self, const char* signal);
    friend bool QOpenGLTimeMonitor_IsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal);
    friend bool QOpenGLTimeMonitor_QBaseIsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal);
};

#endif
