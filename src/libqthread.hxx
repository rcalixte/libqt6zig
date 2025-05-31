#pragma once
#ifndef SRCC_LIBVIRTUALQTHREAD_H
#define SRCC_LIBVIRTUALQTHREAD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QThread so that we can call protected methods
class VirtualQThread final : public QThread {

  public:
    // Virtual class boolean flag
    bool isVirtualQThread = true;

    // Virtual class public types (including callbacks)
    using QThread_Metacall_Callback = int (*)(QThread*, int, int, void**);
    using QThread_Event_Callback = bool (*)(QThread*, QEvent*);
    using QThread_Run_Callback = void (*)();
    using QThread_EventFilter_Callback = bool (*)(QThread*, QObject*, QEvent*);
    using QThread_TimerEvent_Callback = void (*)(QThread*, QTimerEvent*);
    using QThread_ChildEvent_Callback = void (*)(QThread*, QChildEvent*);
    using QThread_CustomEvent_Callback = void (*)(QThread*, QEvent*);
    using QThread_ConnectNotify_Callback = void (*)(QThread*, QMetaMethod*);
    using QThread_DisconnectNotify_Callback = void (*)(QThread*, QMetaMethod*);
    using QThread_Exec_Callback = int (*)();
    using QThread_Sender_Callback = QObject* (*)();
    using QThread_SenderSignalIndex_Callback = int (*)();
    using QThread_Receivers_Callback = int (*)(const QThread*, const char*);
    using QThread_IsSignalConnected_Callback = bool (*)(const QThread*, QMetaMethod*);

  protected:
    // Instance callback storage
    QThread_Metacall_Callback qthread_metacall_callback = nullptr;
    QThread_Event_Callback qthread_event_callback = nullptr;
    QThread_Run_Callback qthread_run_callback = nullptr;
    QThread_EventFilter_Callback qthread_eventfilter_callback = nullptr;
    QThread_TimerEvent_Callback qthread_timerevent_callback = nullptr;
    QThread_ChildEvent_Callback qthread_childevent_callback = nullptr;
    QThread_CustomEvent_Callback qthread_customevent_callback = nullptr;
    QThread_ConnectNotify_Callback qthread_connectnotify_callback = nullptr;
    QThread_DisconnectNotify_Callback qthread_disconnectnotify_callback = nullptr;
    QThread_Exec_Callback qthread_exec_callback = nullptr;
    QThread_Sender_Callback qthread_sender_callback = nullptr;
    QThread_SenderSignalIndex_Callback qthread_sendersignalindex_callback = nullptr;
    QThread_Receivers_Callback qthread_receivers_callback = nullptr;
    QThread_IsSignalConnected_Callback qthread_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qthread_metacall_isbase = false;
    mutable bool qthread_event_isbase = false;
    mutable bool qthread_run_isbase = false;
    mutable bool qthread_eventfilter_isbase = false;
    mutable bool qthread_timerevent_isbase = false;
    mutable bool qthread_childevent_isbase = false;
    mutable bool qthread_customevent_isbase = false;
    mutable bool qthread_connectnotify_isbase = false;
    mutable bool qthread_disconnectnotify_isbase = false;
    mutable bool qthread_exec_isbase = false;
    mutable bool qthread_sender_isbase = false;
    mutable bool qthread_sendersignalindex_isbase = false;
    mutable bool qthread_receivers_isbase = false;
    mutable bool qthread_issignalconnected_isbase = false;

  public:
    VirtualQThread() : QThread(){};
    VirtualQThread(QObject* parent) : QThread(parent){};

    ~VirtualQThread() {
        qthread_metacall_callback = nullptr;
        qthread_event_callback = nullptr;
        qthread_run_callback = nullptr;
        qthread_eventfilter_callback = nullptr;
        qthread_timerevent_callback = nullptr;
        qthread_childevent_callback = nullptr;
        qthread_customevent_callback = nullptr;
        qthread_connectnotify_callback = nullptr;
        qthread_disconnectnotify_callback = nullptr;
        qthread_exec_callback = nullptr;
        qthread_sender_callback = nullptr;
        qthread_sendersignalindex_callback = nullptr;
        qthread_receivers_callback = nullptr;
        qthread_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQThread_Metacall_Callback(QThread_Metacall_Callback cb) { qthread_metacall_callback = cb; }
    inline void setQThread_Event_Callback(QThread_Event_Callback cb) { qthread_event_callback = cb; }
    inline void setQThread_Run_Callback(QThread_Run_Callback cb) { qthread_run_callback = cb; }
    inline void setQThread_EventFilter_Callback(QThread_EventFilter_Callback cb) { qthread_eventfilter_callback = cb; }
    inline void setQThread_TimerEvent_Callback(QThread_TimerEvent_Callback cb) { qthread_timerevent_callback = cb; }
    inline void setQThread_ChildEvent_Callback(QThread_ChildEvent_Callback cb) { qthread_childevent_callback = cb; }
    inline void setQThread_CustomEvent_Callback(QThread_CustomEvent_Callback cb) { qthread_customevent_callback = cb; }
    inline void setQThread_ConnectNotify_Callback(QThread_ConnectNotify_Callback cb) { qthread_connectnotify_callback = cb; }
    inline void setQThread_DisconnectNotify_Callback(QThread_DisconnectNotify_Callback cb) { qthread_disconnectnotify_callback = cb; }
    inline void setQThread_Exec_Callback(QThread_Exec_Callback cb) { qthread_exec_callback = cb; }
    inline void setQThread_Sender_Callback(QThread_Sender_Callback cb) { qthread_sender_callback = cb; }
    inline void setQThread_SenderSignalIndex_Callback(QThread_SenderSignalIndex_Callback cb) { qthread_sendersignalindex_callback = cb; }
    inline void setQThread_Receivers_Callback(QThread_Receivers_Callback cb) { qthread_receivers_callback = cb; }
    inline void setQThread_IsSignalConnected_Callback(QThread_IsSignalConnected_Callback cb) { qthread_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQThread_Metacall_IsBase(bool value) const { qthread_metacall_isbase = value; }
    inline void setQThread_Event_IsBase(bool value) const { qthread_event_isbase = value; }
    inline void setQThread_Run_IsBase(bool value) const { qthread_run_isbase = value; }
    inline void setQThread_EventFilter_IsBase(bool value) const { qthread_eventfilter_isbase = value; }
    inline void setQThread_TimerEvent_IsBase(bool value) const { qthread_timerevent_isbase = value; }
    inline void setQThread_ChildEvent_IsBase(bool value) const { qthread_childevent_isbase = value; }
    inline void setQThread_CustomEvent_IsBase(bool value) const { qthread_customevent_isbase = value; }
    inline void setQThread_ConnectNotify_IsBase(bool value) const { qthread_connectnotify_isbase = value; }
    inline void setQThread_DisconnectNotify_IsBase(bool value) const { qthread_disconnectnotify_isbase = value; }
    inline void setQThread_Exec_IsBase(bool value) const { qthread_exec_isbase = value; }
    inline void setQThread_Sender_IsBase(bool value) const { qthread_sender_isbase = value; }
    inline void setQThread_SenderSignalIndex_IsBase(bool value) const { qthread_sendersignalindex_isbase = value; }
    inline void setQThread_Receivers_IsBase(bool value) const { qthread_receivers_isbase = value; }
    inline void setQThread_IsSignalConnected_IsBase(bool value) const { qthread_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qthread_metacall_isbase) {
            qthread_metacall_isbase = false;
            return QThread::qt_metacall(param1, param2, param3);
        } else if (qthread_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qthread_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QThread::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qthread_event_isbase) {
            qthread_event_isbase = false;
            return QThread::event(event);
        } else if (qthread_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qthread_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QThread::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void run() override {
        if (qthread_run_isbase) {
            qthread_run_isbase = false;
            QThread::run();
        } else if (qthread_run_callback != nullptr) {
            qthread_run_callback();
        } else {
            QThread::run();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qthread_eventfilter_isbase) {
            qthread_eventfilter_isbase = false;
            return QThread::eventFilter(watched, event);
        } else if (qthread_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qthread_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QThread::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qthread_timerevent_isbase) {
            qthread_timerevent_isbase = false;
            QThread::timerEvent(event);
        } else if (qthread_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qthread_timerevent_callback(this, cbval1);
        } else {
            QThread::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qthread_childevent_isbase) {
            qthread_childevent_isbase = false;
            QThread::childEvent(event);
        } else if (qthread_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qthread_childevent_callback(this, cbval1);
        } else {
            QThread::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qthread_customevent_isbase) {
            qthread_customevent_isbase = false;
            QThread::customEvent(event);
        } else if (qthread_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qthread_customevent_callback(this, cbval1);
        } else {
            QThread::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qthread_connectnotify_isbase) {
            qthread_connectnotify_isbase = false;
            QThread::connectNotify(signal);
        } else if (qthread_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qthread_connectnotify_callback(this, cbval1);
        } else {
            QThread::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qthread_disconnectnotify_isbase) {
            qthread_disconnectnotify_isbase = false;
            QThread::disconnectNotify(signal);
        } else if (qthread_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qthread_disconnectnotify_callback(this, cbval1);
        } else {
            QThread::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int exec() {
        if (qthread_exec_isbase) {
            qthread_exec_isbase = false;
            return QThread::exec();
        } else if (qthread_exec_callback != nullptr) {
            int callback_ret = qthread_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QThread::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qthread_sender_isbase) {
            qthread_sender_isbase = false;
            return QThread::sender();
        } else if (qthread_sender_callback != nullptr) {
            QObject* callback_ret = qthread_sender_callback();
            return callback_ret;
        } else {
            return QThread::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qthread_sendersignalindex_isbase) {
            qthread_sendersignalindex_isbase = false;
            return QThread::senderSignalIndex();
        } else if (qthread_sendersignalindex_callback != nullptr) {
            int callback_ret = qthread_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QThread::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qthread_receivers_isbase) {
            qthread_receivers_isbase = false;
            return QThread::receivers(signal);
        } else if (qthread_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qthread_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QThread::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qthread_issignalconnected_isbase) {
            qthread_issignalconnected_isbase = false;
            return QThread::isSignalConnected(signal);
        } else if (qthread_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qthread_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QThread::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QThread_Run(QThread* self);
    friend void QThread_QBaseRun(QThread* self);
    friend void QThread_TimerEvent(QThread* self, QTimerEvent* event);
    friend void QThread_QBaseTimerEvent(QThread* self, QTimerEvent* event);
    friend void QThread_ChildEvent(QThread* self, QChildEvent* event);
    friend void QThread_QBaseChildEvent(QThread* self, QChildEvent* event);
    friend void QThread_CustomEvent(QThread* self, QEvent* event);
    friend void QThread_QBaseCustomEvent(QThread* self, QEvent* event);
    friend void QThread_ConnectNotify(QThread* self, const QMetaMethod* signal);
    friend void QThread_QBaseConnectNotify(QThread* self, const QMetaMethod* signal);
    friend void QThread_DisconnectNotify(QThread* self, const QMetaMethod* signal);
    friend void QThread_QBaseDisconnectNotify(QThread* self, const QMetaMethod* signal);
    friend int QThread_Exec(QThread* self);
    friend int QThread_QBaseExec(QThread* self);
    friend QObject* QThread_Sender(const QThread* self);
    friend QObject* QThread_QBaseSender(const QThread* self);
    friend int QThread_SenderSignalIndex(const QThread* self);
    friend int QThread_QBaseSenderSignalIndex(const QThread* self);
    friend int QThread_Receivers(const QThread* self, const char* signal);
    friend int QThread_QBaseReceivers(const QThread* self, const char* signal);
    friend bool QThread_IsSignalConnected(const QThread* self, const QMetaMethod* signal);
    friend bool QThread_QBaseIsSignalConnected(const QThread* self, const QMetaMethod* signal);
};

#endif
