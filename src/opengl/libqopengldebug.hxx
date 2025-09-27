#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLDEBUG_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLDEBUG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLDebugLogger so that we can call protected methods
class VirtualQOpenGLDebugLogger final : public QOpenGLDebugLogger {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLDebugLogger = true;

    // Virtual class public types (including callbacks)
    using QOpenGLDebugLogger_Metacall_Callback = int (*)(QOpenGLDebugLogger*, int, int, void**);
    using QOpenGLDebugLogger_Event_Callback = bool (*)(QOpenGLDebugLogger*, QEvent*);
    using QOpenGLDebugLogger_EventFilter_Callback = bool (*)(QOpenGLDebugLogger*, QObject*, QEvent*);
    using QOpenGLDebugLogger_TimerEvent_Callback = void (*)(QOpenGLDebugLogger*, QTimerEvent*);
    using QOpenGLDebugLogger_ChildEvent_Callback = void (*)(QOpenGLDebugLogger*, QChildEvent*);
    using QOpenGLDebugLogger_CustomEvent_Callback = void (*)(QOpenGLDebugLogger*, QEvent*);
    using QOpenGLDebugLogger_ConnectNotify_Callback = void (*)(QOpenGLDebugLogger*, QMetaMethod*);
    using QOpenGLDebugLogger_DisconnectNotify_Callback = void (*)(QOpenGLDebugLogger*, QMetaMethod*);
    using QOpenGLDebugLogger_Sender_Callback = QObject* (*)();
    using QOpenGLDebugLogger_SenderSignalIndex_Callback = int (*)();
    using QOpenGLDebugLogger_Receivers_Callback = int (*)(const QOpenGLDebugLogger*, const char*);
    using QOpenGLDebugLogger_IsSignalConnected_Callback = bool (*)(const QOpenGLDebugLogger*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLDebugLogger_Metacall_Callback qopengldebuglogger_metacall_callback = nullptr;
    QOpenGLDebugLogger_Event_Callback qopengldebuglogger_event_callback = nullptr;
    QOpenGLDebugLogger_EventFilter_Callback qopengldebuglogger_eventfilter_callback = nullptr;
    QOpenGLDebugLogger_TimerEvent_Callback qopengldebuglogger_timerevent_callback = nullptr;
    QOpenGLDebugLogger_ChildEvent_Callback qopengldebuglogger_childevent_callback = nullptr;
    QOpenGLDebugLogger_CustomEvent_Callback qopengldebuglogger_customevent_callback = nullptr;
    QOpenGLDebugLogger_ConnectNotify_Callback qopengldebuglogger_connectnotify_callback = nullptr;
    QOpenGLDebugLogger_DisconnectNotify_Callback qopengldebuglogger_disconnectnotify_callback = nullptr;
    QOpenGLDebugLogger_Sender_Callback qopengldebuglogger_sender_callback = nullptr;
    QOpenGLDebugLogger_SenderSignalIndex_Callback qopengldebuglogger_sendersignalindex_callback = nullptr;
    QOpenGLDebugLogger_Receivers_Callback qopengldebuglogger_receivers_callback = nullptr;
    QOpenGLDebugLogger_IsSignalConnected_Callback qopengldebuglogger_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopengldebuglogger_metacall_isbase = false;
    mutable bool qopengldebuglogger_event_isbase = false;
    mutable bool qopengldebuglogger_eventfilter_isbase = false;
    mutable bool qopengldebuglogger_timerevent_isbase = false;
    mutable bool qopengldebuglogger_childevent_isbase = false;
    mutable bool qopengldebuglogger_customevent_isbase = false;
    mutable bool qopengldebuglogger_connectnotify_isbase = false;
    mutable bool qopengldebuglogger_disconnectnotify_isbase = false;
    mutable bool qopengldebuglogger_sender_isbase = false;
    mutable bool qopengldebuglogger_sendersignalindex_isbase = false;
    mutable bool qopengldebuglogger_receivers_isbase = false;
    mutable bool qopengldebuglogger_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLDebugLogger() : QOpenGLDebugLogger() {};
    VirtualQOpenGLDebugLogger(QObject* parent) : QOpenGLDebugLogger(parent) {};

    ~VirtualQOpenGLDebugLogger() {
        qopengldebuglogger_metacall_callback = nullptr;
        qopengldebuglogger_event_callback = nullptr;
        qopengldebuglogger_eventfilter_callback = nullptr;
        qopengldebuglogger_timerevent_callback = nullptr;
        qopengldebuglogger_childevent_callback = nullptr;
        qopengldebuglogger_customevent_callback = nullptr;
        qopengldebuglogger_connectnotify_callback = nullptr;
        qopengldebuglogger_disconnectnotify_callback = nullptr;
        qopengldebuglogger_sender_callback = nullptr;
        qopengldebuglogger_sendersignalindex_callback = nullptr;
        qopengldebuglogger_receivers_callback = nullptr;
        qopengldebuglogger_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLDebugLogger_Metacall_Callback(QOpenGLDebugLogger_Metacall_Callback cb) { qopengldebuglogger_metacall_callback = cb; }
    inline void setQOpenGLDebugLogger_Event_Callback(QOpenGLDebugLogger_Event_Callback cb) { qopengldebuglogger_event_callback = cb; }
    inline void setQOpenGLDebugLogger_EventFilter_Callback(QOpenGLDebugLogger_EventFilter_Callback cb) { qopengldebuglogger_eventfilter_callback = cb; }
    inline void setQOpenGLDebugLogger_TimerEvent_Callback(QOpenGLDebugLogger_TimerEvent_Callback cb) { qopengldebuglogger_timerevent_callback = cb; }
    inline void setQOpenGLDebugLogger_ChildEvent_Callback(QOpenGLDebugLogger_ChildEvent_Callback cb) { qopengldebuglogger_childevent_callback = cb; }
    inline void setQOpenGLDebugLogger_CustomEvent_Callback(QOpenGLDebugLogger_CustomEvent_Callback cb) { qopengldebuglogger_customevent_callback = cb; }
    inline void setQOpenGLDebugLogger_ConnectNotify_Callback(QOpenGLDebugLogger_ConnectNotify_Callback cb) { qopengldebuglogger_connectnotify_callback = cb; }
    inline void setQOpenGLDebugLogger_DisconnectNotify_Callback(QOpenGLDebugLogger_DisconnectNotify_Callback cb) { qopengldebuglogger_disconnectnotify_callback = cb; }
    inline void setQOpenGLDebugLogger_Sender_Callback(QOpenGLDebugLogger_Sender_Callback cb) { qopengldebuglogger_sender_callback = cb; }
    inline void setQOpenGLDebugLogger_SenderSignalIndex_Callback(QOpenGLDebugLogger_SenderSignalIndex_Callback cb) { qopengldebuglogger_sendersignalindex_callback = cb; }
    inline void setQOpenGLDebugLogger_Receivers_Callback(QOpenGLDebugLogger_Receivers_Callback cb) { qopengldebuglogger_receivers_callback = cb; }
    inline void setQOpenGLDebugLogger_IsSignalConnected_Callback(QOpenGLDebugLogger_IsSignalConnected_Callback cb) { qopengldebuglogger_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLDebugLogger_Metacall_IsBase(bool value) const { qopengldebuglogger_metacall_isbase = value; }
    inline void setQOpenGLDebugLogger_Event_IsBase(bool value) const { qopengldebuglogger_event_isbase = value; }
    inline void setQOpenGLDebugLogger_EventFilter_IsBase(bool value) const { qopengldebuglogger_eventfilter_isbase = value; }
    inline void setQOpenGLDebugLogger_TimerEvent_IsBase(bool value) const { qopengldebuglogger_timerevent_isbase = value; }
    inline void setQOpenGLDebugLogger_ChildEvent_IsBase(bool value) const { qopengldebuglogger_childevent_isbase = value; }
    inline void setQOpenGLDebugLogger_CustomEvent_IsBase(bool value) const { qopengldebuglogger_customevent_isbase = value; }
    inline void setQOpenGLDebugLogger_ConnectNotify_IsBase(bool value) const { qopengldebuglogger_connectnotify_isbase = value; }
    inline void setQOpenGLDebugLogger_DisconnectNotify_IsBase(bool value) const { qopengldebuglogger_disconnectnotify_isbase = value; }
    inline void setQOpenGLDebugLogger_Sender_IsBase(bool value) const { qopengldebuglogger_sender_isbase = value; }
    inline void setQOpenGLDebugLogger_SenderSignalIndex_IsBase(bool value) const { qopengldebuglogger_sendersignalindex_isbase = value; }
    inline void setQOpenGLDebugLogger_Receivers_IsBase(bool value) const { qopengldebuglogger_receivers_isbase = value; }
    inline void setQOpenGLDebugLogger_IsSignalConnected_IsBase(bool value) const { qopengldebuglogger_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopengldebuglogger_metacall_isbase) {
            qopengldebuglogger_metacall_isbase = false;
            return QOpenGLDebugLogger::qt_metacall(param1, param2, param3);
        } else if (qopengldebuglogger_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopengldebuglogger_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLDebugLogger::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopengldebuglogger_event_isbase) {
            qopengldebuglogger_event_isbase = false;
            return QOpenGLDebugLogger::event(event);
        } else if (qopengldebuglogger_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopengldebuglogger_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLDebugLogger::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopengldebuglogger_eventfilter_isbase) {
            qopengldebuglogger_eventfilter_isbase = false;
            return QOpenGLDebugLogger::eventFilter(watched, event);
        } else if (qopengldebuglogger_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopengldebuglogger_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLDebugLogger::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopengldebuglogger_timerevent_isbase) {
            qopengldebuglogger_timerevent_isbase = false;
            QOpenGLDebugLogger::timerEvent(event);
        } else if (qopengldebuglogger_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopengldebuglogger_timerevent_callback(this, cbval1);
        } else {
            QOpenGLDebugLogger::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopengldebuglogger_childevent_isbase) {
            qopengldebuglogger_childevent_isbase = false;
            QOpenGLDebugLogger::childEvent(event);
        } else if (qopengldebuglogger_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopengldebuglogger_childevent_callback(this, cbval1);
        } else {
            QOpenGLDebugLogger::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopengldebuglogger_customevent_isbase) {
            qopengldebuglogger_customevent_isbase = false;
            QOpenGLDebugLogger::customEvent(event);
        } else if (qopengldebuglogger_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopengldebuglogger_customevent_callback(this, cbval1);
        } else {
            QOpenGLDebugLogger::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopengldebuglogger_connectnotify_isbase) {
            qopengldebuglogger_connectnotify_isbase = false;
            QOpenGLDebugLogger::connectNotify(signal);
        } else if (qopengldebuglogger_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopengldebuglogger_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLDebugLogger::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopengldebuglogger_disconnectnotify_isbase) {
            qopengldebuglogger_disconnectnotify_isbase = false;
            QOpenGLDebugLogger::disconnectNotify(signal);
        } else if (qopengldebuglogger_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopengldebuglogger_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLDebugLogger::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopengldebuglogger_sender_isbase) {
            qopengldebuglogger_sender_isbase = false;
            return QOpenGLDebugLogger::sender();
        } else if (qopengldebuglogger_sender_callback != nullptr) {
            QObject* callback_ret = qopengldebuglogger_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLDebugLogger::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopengldebuglogger_sendersignalindex_isbase) {
            qopengldebuglogger_sendersignalindex_isbase = false;
            return QOpenGLDebugLogger::senderSignalIndex();
        } else if (qopengldebuglogger_sendersignalindex_callback != nullptr) {
            int callback_ret = qopengldebuglogger_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLDebugLogger::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopengldebuglogger_receivers_isbase) {
            qopengldebuglogger_receivers_isbase = false;
            return QOpenGLDebugLogger::receivers(signal);
        } else if (qopengldebuglogger_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopengldebuglogger_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLDebugLogger::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopengldebuglogger_issignalconnected_isbase) {
            qopengldebuglogger_issignalconnected_isbase = false;
            return QOpenGLDebugLogger::isSignalConnected(signal);
        } else if (qopengldebuglogger_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopengldebuglogger_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLDebugLogger::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLDebugLogger_TimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event);
    friend void QOpenGLDebugLogger_QBaseTimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event);
    friend void QOpenGLDebugLogger_ChildEvent(QOpenGLDebugLogger* self, QChildEvent* event);
    friend void QOpenGLDebugLogger_QBaseChildEvent(QOpenGLDebugLogger* self, QChildEvent* event);
    friend void QOpenGLDebugLogger_CustomEvent(QOpenGLDebugLogger* self, QEvent* event);
    friend void QOpenGLDebugLogger_QBaseCustomEvent(QOpenGLDebugLogger* self, QEvent* event);
    friend void QOpenGLDebugLogger_ConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
    friend void QOpenGLDebugLogger_QBaseConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
    friend void QOpenGLDebugLogger_DisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
    friend void QOpenGLDebugLogger_QBaseDisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal);
    friend QObject* QOpenGLDebugLogger_Sender(const QOpenGLDebugLogger* self);
    friend QObject* QOpenGLDebugLogger_QBaseSender(const QOpenGLDebugLogger* self);
    friend int QOpenGLDebugLogger_SenderSignalIndex(const QOpenGLDebugLogger* self);
    friend int QOpenGLDebugLogger_QBaseSenderSignalIndex(const QOpenGLDebugLogger* self);
    friend int QOpenGLDebugLogger_Receivers(const QOpenGLDebugLogger* self, const char* signal);
    friend int QOpenGLDebugLogger_QBaseReceivers(const QOpenGLDebugLogger* self, const char* signal);
    friend bool QOpenGLDebugLogger_IsSignalConnected(const QOpenGLDebugLogger* self, const QMetaMethod* signal);
    friend bool QOpenGLDebugLogger_QBaseIsSignalConnected(const QOpenGLDebugLogger* self, const QMetaMethod* signal);
};

#endif
