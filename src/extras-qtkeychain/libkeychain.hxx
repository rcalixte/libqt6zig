#pragma once
#ifndef SRC_EXTRAS_QTKEYCHAINC_LIBVIRTUALKEYCHAIN_H
#define SRC_EXTRAS_QTKEYCHAINC_LIBVIRTUALKEYCHAIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QKeychain::ReadPasswordJob so that we can call protected methods
class VirtualQKeychainReadPasswordJob final : public QKeychain::ReadPasswordJob {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeychainReadPasswordJob = true;

    // Virtual class public types (including callbacks)
    using QKeychain__ReadPasswordJob_Metacall_Callback = int (*)(QKeychain__ReadPasswordJob*, int, int, void**);
    using QKeychain__ReadPasswordJob_Event_Callback = bool (*)(QKeychain__ReadPasswordJob*, QEvent*);
    using QKeychain__ReadPasswordJob_EventFilter_Callback = bool (*)(QKeychain__ReadPasswordJob*, QObject*, QEvent*);
    using QKeychain__ReadPasswordJob_TimerEvent_Callback = void (*)(QKeychain__ReadPasswordJob*, QTimerEvent*);
    using QKeychain__ReadPasswordJob_ChildEvent_Callback = void (*)(QKeychain__ReadPasswordJob*, QChildEvent*);
    using QKeychain__ReadPasswordJob_CustomEvent_Callback = void (*)(QKeychain__ReadPasswordJob*, QEvent*);
    using QKeychain__ReadPasswordJob_ConnectNotify_Callback = void (*)(QKeychain__ReadPasswordJob*, QMetaMethod*);
    using QKeychain__ReadPasswordJob_DisconnectNotify_Callback = void (*)(QKeychain__ReadPasswordJob*, QMetaMethod*);
    using QKeychain__ReadPasswordJob_DoStart_Callback = void (*)();
    using QKeychain__ReadPasswordJob_Sender_Callback = QObject* (*)();
    using QKeychain__ReadPasswordJob_SenderSignalIndex_Callback = int (*)();
    using QKeychain__ReadPasswordJob_Receivers_Callback = int (*)(const QKeychain__ReadPasswordJob*, const char*);
    using QKeychain__ReadPasswordJob_IsSignalConnected_Callback = bool (*)(const QKeychain__ReadPasswordJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    QKeychain__ReadPasswordJob_Metacall_Callback qkeychain__readpasswordjob_metacall_callback = nullptr;
    QKeychain__ReadPasswordJob_Event_Callback qkeychain__readpasswordjob_event_callback = nullptr;
    QKeychain__ReadPasswordJob_EventFilter_Callback qkeychain__readpasswordjob_eventfilter_callback = nullptr;
    QKeychain__ReadPasswordJob_TimerEvent_Callback qkeychain__readpasswordjob_timerevent_callback = nullptr;
    QKeychain__ReadPasswordJob_ChildEvent_Callback qkeychain__readpasswordjob_childevent_callback = nullptr;
    QKeychain__ReadPasswordJob_CustomEvent_Callback qkeychain__readpasswordjob_customevent_callback = nullptr;
    QKeychain__ReadPasswordJob_ConnectNotify_Callback qkeychain__readpasswordjob_connectnotify_callback = nullptr;
    QKeychain__ReadPasswordJob_DisconnectNotify_Callback qkeychain__readpasswordjob_disconnectnotify_callback = nullptr;
    QKeychain__ReadPasswordJob_DoStart_Callback qkeychain__readpasswordjob_dostart_callback = nullptr;
    QKeychain__ReadPasswordJob_Sender_Callback qkeychain__readpasswordjob_sender_callback = nullptr;
    QKeychain__ReadPasswordJob_SenderSignalIndex_Callback qkeychain__readpasswordjob_sendersignalindex_callback = nullptr;
    QKeychain__ReadPasswordJob_Receivers_Callback qkeychain__readpasswordjob_receivers_callback = nullptr;
    QKeychain__ReadPasswordJob_IsSignalConnected_Callback qkeychain__readpasswordjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qkeychain__readpasswordjob_metacall_isbase = false;
    mutable bool qkeychain__readpasswordjob_event_isbase = false;
    mutable bool qkeychain__readpasswordjob_eventfilter_isbase = false;
    mutable bool qkeychain__readpasswordjob_timerevent_isbase = false;
    mutable bool qkeychain__readpasswordjob_childevent_isbase = false;
    mutable bool qkeychain__readpasswordjob_customevent_isbase = false;
    mutable bool qkeychain__readpasswordjob_connectnotify_isbase = false;
    mutable bool qkeychain__readpasswordjob_disconnectnotify_isbase = false;
    mutable bool qkeychain__readpasswordjob_dostart_isbase = false;
    mutable bool qkeychain__readpasswordjob_sender_isbase = false;
    mutable bool qkeychain__readpasswordjob_sendersignalindex_isbase = false;
    mutable bool qkeychain__readpasswordjob_receivers_isbase = false;
    mutable bool qkeychain__readpasswordjob_issignalconnected_isbase = false;

  public:
    VirtualQKeychainReadPasswordJob(const QString& service) : QKeychain::ReadPasswordJob(service) {};
    VirtualQKeychainReadPasswordJob(const QString& service, QObject* parent) : QKeychain::ReadPasswordJob(service, parent) {};

    ~VirtualQKeychainReadPasswordJob() {
        qkeychain__readpasswordjob_metacall_callback = nullptr;
        qkeychain__readpasswordjob_event_callback = nullptr;
        qkeychain__readpasswordjob_eventfilter_callback = nullptr;
        qkeychain__readpasswordjob_timerevent_callback = nullptr;
        qkeychain__readpasswordjob_childevent_callback = nullptr;
        qkeychain__readpasswordjob_customevent_callback = nullptr;
        qkeychain__readpasswordjob_connectnotify_callback = nullptr;
        qkeychain__readpasswordjob_disconnectnotify_callback = nullptr;
        qkeychain__readpasswordjob_dostart_callback = nullptr;
        qkeychain__readpasswordjob_sender_callback = nullptr;
        qkeychain__readpasswordjob_sendersignalindex_callback = nullptr;
        qkeychain__readpasswordjob_receivers_callback = nullptr;
        qkeychain__readpasswordjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQKeychain__ReadPasswordJob_Metacall_Callback(QKeychain__ReadPasswordJob_Metacall_Callback cb) { qkeychain__readpasswordjob_metacall_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_Event_Callback(QKeychain__ReadPasswordJob_Event_Callback cb) { qkeychain__readpasswordjob_event_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_EventFilter_Callback(QKeychain__ReadPasswordJob_EventFilter_Callback cb) { qkeychain__readpasswordjob_eventfilter_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_TimerEvent_Callback(QKeychain__ReadPasswordJob_TimerEvent_Callback cb) { qkeychain__readpasswordjob_timerevent_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_ChildEvent_Callback(QKeychain__ReadPasswordJob_ChildEvent_Callback cb) { qkeychain__readpasswordjob_childevent_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_CustomEvent_Callback(QKeychain__ReadPasswordJob_CustomEvent_Callback cb) { qkeychain__readpasswordjob_customevent_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_ConnectNotify_Callback(QKeychain__ReadPasswordJob_ConnectNotify_Callback cb) { qkeychain__readpasswordjob_connectnotify_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_DisconnectNotify_Callback(QKeychain__ReadPasswordJob_DisconnectNotify_Callback cb) { qkeychain__readpasswordjob_disconnectnotify_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_DoStart_Callback(QKeychain__ReadPasswordJob_DoStart_Callback cb) { qkeychain__readpasswordjob_dostart_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_Sender_Callback(QKeychain__ReadPasswordJob_Sender_Callback cb) { qkeychain__readpasswordjob_sender_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_SenderSignalIndex_Callback(QKeychain__ReadPasswordJob_SenderSignalIndex_Callback cb) { qkeychain__readpasswordjob_sendersignalindex_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_Receivers_Callback(QKeychain__ReadPasswordJob_Receivers_Callback cb) { qkeychain__readpasswordjob_receivers_callback = cb; }
    inline void setQKeychain__ReadPasswordJob_IsSignalConnected_Callback(QKeychain__ReadPasswordJob_IsSignalConnected_Callback cb) { qkeychain__readpasswordjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQKeychain__ReadPasswordJob_Metacall_IsBase(bool value) const { qkeychain__readpasswordjob_metacall_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_Event_IsBase(bool value) const { qkeychain__readpasswordjob_event_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_EventFilter_IsBase(bool value) const { qkeychain__readpasswordjob_eventfilter_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_TimerEvent_IsBase(bool value) const { qkeychain__readpasswordjob_timerevent_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_ChildEvent_IsBase(bool value) const { qkeychain__readpasswordjob_childevent_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_CustomEvent_IsBase(bool value) const { qkeychain__readpasswordjob_customevent_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_ConnectNotify_IsBase(bool value) const { qkeychain__readpasswordjob_connectnotify_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_DisconnectNotify_IsBase(bool value) const { qkeychain__readpasswordjob_disconnectnotify_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_DoStart_IsBase(bool value) const { qkeychain__readpasswordjob_dostart_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_Sender_IsBase(bool value) const { qkeychain__readpasswordjob_sender_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_SenderSignalIndex_IsBase(bool value) const { qkeychain__readpasswordjob_sendersignalindex_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_Receivers_IsBase(bool value) const { qkeychain__readpasswordjob_receivers_isbase = value; }
    inline void setQKeychain__ReadPasswordJob_IsSignalConnected_IsBase(bool value) const { qkeychain__readpasswordjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeychain__readpasswordjob_metacall_isbase) {
            qkeychain__readpasswordjob_metacall_isbase = false;
            return QKeychain__ReadPasswordJob::qt_metacall(param1, param2, param3);
        } else if (qkeychain__readpasswordjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qkeychain__readpasswordjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__ReadPasswordJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qkeychain__readpasswordjob_event_isbase) {
            qkeychain__readpasswordjob_event_isbase = false;
            return QKeychain__ReadPasswordJob::event(event);
        } else if (qkeychain__readpasswordjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qkeychain__readpasswordjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeychain__ReadPasswordJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeychain__readpasswordjob_eventfilter_isbase) {
            qkeychain__readpasswordjob_eventfilter_isbase = false;
            return QKeychain__ReadPasswordJob::eventFilter(watched, event);
        } else if (qkeychain__readpasswordjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qkeychain__readpasswordjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QKeychain__ReadPasswordJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeychain__readpasswordjob_timerevent_isbase) {
            qkeychain__readpasswordjob_timerevent_isbase = false;
            QKeychain__ReadPasswordJob::timerEvent(event);
        } else if (qkeychain__readpasswordjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qkeychain__readpasswordjob_timerevent_callback(this, cbval1);
        } else {
            QKeychain__ReadPasswordJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeychain__readpasswordjob_childevent_isbase) {
            qkeychain__readpasswordjob_childevent_isbase = false;
            QKeychain__ReadPasswordJob::childEvent(event);
        } else if (qkeychain__readpasswordjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qkeychain__readpasswordjob_childevent_callback(this, cbval1);
        } else {
            QKeychain__ReadPasswordJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeychain__readpasswordjob_customevent_isbase) {
            qkeychain__readpasswordjob_customevent_isbase = false;
            QKeychain__ReadPasswordJob::customEvent(event);
        } else if (qkeychain__readpasswordjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qkeychain__readpasswordjob_customevent_callback(this, cbval1);
        } else {
            QKeychain__ReadPasswordJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeychain__readpasswordjob_connectnotify_isbase) {
            qkeychain__readpasswordjob_connectnotify_isbase = false;
            QKeychain__ReadPasswordJob::connectNotify(signal);
        } else if (qkeychain__readpasswordjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeychain__readpasswordjob_connectnotify_callback(this, cbval1);
        } else {
            QKeychain__ReadPasswordJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeychain__readpasswordjob_disconnectnotify_isbase) {
            qkeychain__readpasswordjob_disconnectnotify_isbase = false;
            QKeychain__ReadPasswordJob::disconnectNotify(signal);
        } else if (qkeychain__readpasswordjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeychain__readpasswordjob_disconnectnotify_callback(this, cbval1);
        } else {
            QKeychain__ReadPasswordJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void doStart() {
        if (qkeychain__readpasswordjob_dostart_isbase) {
            qkeychain__readpasswordjob_dostart_isbase = false;
            QKeychain__ReadPasswordJob::doStart();
        } else if (qkeychain__readpasswordjob_dostart_callback != nullptr) {
            qkeychain__readpasswordjob_dostart_callback();
        } else {
            QKeychain__ReadPasswordJob::doStart();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qkeychain__readpasswordjob_sender_isbase) {
            qkeychain__readpasswordjob_sender_isbase = false;
            return QKeychain__ReadPasswordJob::sender();
        } else if (qkeychain__readpasswordjob_sender_callback != nullptr) {
            QObject* callback_ret = qkeychain__readpasswordjob_sender_callback();
            return callback_ret;
        } else {
            return QKeychain__ReadPasswordJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qkeychain__readpasswordjob_sendersignalindex_isbase) {
            qkeychain__readpasswordjob_sendersignalindex_isbase = false;
            return QKeychain__ReadPasswordJob::senderSignalIndex();
        } else if (qkeychain__readpasswordjob_sendersignalindex_callback != nullptr) {
            int callback_ret = qkeychain__readpasswordjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__ReadPasswordJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qkeychain__readpasswordjob_receivers_isbase) {
            qkeychain__readpasswordjob_receivers_isbase = false;
            return QKeychain__ReadPasswordJob::receivers(signal);
        } else if (qkeychain__readpasswordjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qkeychain__readpasswordjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__ReadPasswordJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qkeychain__readpasswordjob_issignalconnected_isbase) {
            qkeychain__readpasswordjob_issignalconnected_isbase = false;
            return QKeychain__ReadPasswordJob::isSignalConnected(signal);
        } else if (qkeychain__readpasswordjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qkeychain__readpasswordjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeychain__ReadPasswordJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QKeychain__ReadPasswordJob_TimerEvent(QKeychain::ReadPasswordJob* self, QTimerEvent* event);
    friend void QKeychain__ReadPasswordJob_QBaseTimerEvent(QKeychain::ReadPasswordJob* self, QTimerEvent* event);
    friend void QKeychain__ReadPasswordJob_ChildEvent(QKeychain::ReadPasswordJob* self, QChildEvent* event);
    friend void QKeychain__ReadPasswordJob_QBaseChildEvent(QKeychain::ReadPasswordJob* self, QChildEvent* event);
    friend void QKeychain__ReadPasswordJob_CustomEvent(QKeychain::ReadPasswordJob* self, QEvent* event);
    friend void QKeychain__ReadPasswordJob_QBaseCustomEvent(QKeychain::ReadPasswordJob* self, QEvent* event);
    friend void QKeychain__ReadPasswordJob_ConnectNotify(QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__ReadPasswordJob_QBaseConnectNotify(QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__ReadPasswordJob_DisconnectNotify(QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__ReadPasswordJob_QBaseDisconnectNotify(QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__ReadPasswordJob_DoStart(QKeychain::ReadPasswordJob* self);
    friend void QKeychain__ReadPasswordJob_QBaseDoStart(QKeychain::ReadPasswordJob* self);
    friend QObject* QKeychain__ReadPasswordJob_Sender(const QKeychain::ReadPasswordJob* self);
    friend QObject* QKeychain__ReadPasswordJob_QBaseSender(const QKeychain::ReadPasswordJob* self);
    friend int QKeychain__ReadPasswordJob_SenderSignalIndex(const QKeychain::ReadPasswordJob* self);
    friend int QKeychain__ReadPasswordJob_QBaseSenderSignalIndex(const QKeychain::ReadPasswordJob* self);
    friend int QKeychain__ReadPasswordJob_Receivers(const QKeychain::ReadPasswordJob* self, const char* signal);
    friend int QKeychain__ReadPasswordJob_QBaseReceivers(const QKeychain::ReadPasswordJob* self, const char* signal);
    friend bool QKeychain__ReadPasswordJob_IsSignalConnected(const QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
    friend bool QKeychain__ReadPasswordJob_QBaseIsSignalConnected(const QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
};

// This class is a subclass of QKeychain::WritePasswordJob so that we can call protected methods
class VirtualQKeychainWritePasswordJob final : public QKeychain::WritePasswordJob {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeychainWritePasswordJob = true;

    // Virtual class public types (including callbacks)
    using QKeychain__WritePasswordJob_Metacall_Callback = int (*)(QKeychain__WritePasswordJob*, int, int, void**);
    using QKeychain__WritePasswordJob_Event_Callback = bool (*)(QKeychain__WritePasswordJob*, QEvent*);
    using QKeychain__WritePasswordJob_EventFilter_Callback = bool (*)(QKeychain__WritePasswordJob*, QObject*, QEvent*);
    using QKeychain__WritePasswordJob_TimerEvent_Callback = void (*)(QKeychain__WritePasswordJob*, QTimerEvent*);
    using QKeychain__WritePasswordJob_ChildEvent_Callback = void (*)(QKeychain__WritePasswordJob*, QChildEvent*);
    using QKeychain__WritePasswordJob_CustomEvent_Callback = void (*)(QKeychain__WritePasswordJob*, QEvent*);
    using QKeychain__WritePasswordJob_ConnectNotify_Callback = void (*)(QKeychain__WritePasswordJob*, QMetaMethod*);
    using QKeychain__WritePasswordJob_DisconnectNotify_Callback = void (*)(QKeychain__WritePasswordJob*, QMetaMethod*);
    using QKeychain__WritePasswordJob_DoStart_Callback = void (*)();
    using QKeychain__WritePasswordJob_Sender_Callback = QObject* (*)();
    using QKeychain__WritePasswordJob_SenderSignalIndex_Callback = int (*)();
    using QKeychain__WritePasswordJob_Receivers_Callback = int (*)(const QKeychain__WritePasswordJob*, const char*);
    using QKeychain__WritePasswordJob_IsSignalConnected_Callback = bool (*)(const QKeychain__WritePasswordJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    QKeychain__WritePasswordJob_Metacall_Callback qkeychain__writepasswordjob_metacall_callback = nullptr;
    QKeychain__WritePasswordJob_Event_Callback qkeychain__writepasswordjob_event_callback = nullptr;
    QKeychain__WritePasswordJob_EventFilter_Callback qkeychain__writepasswordjob_eventfilter_callback = nullptr;
    QKeychain__WritePasswordJob_TimerEvent_Callback qkeychain__writepasswordjob_timerevent_callback = nullptr;
    QKeychain__WritePasswordJob_ChildEvent_Callback qkeychain__writepasswordjob_childevent_callback = nullptr;
    QKeychain__WritePasswordJob_CustomEvent_Callback qkeychain__writepasswordjob_customevent_callback = nullptr;
    QKeychain__WritePasswordJob_ConnectNotify_Callback qkeychain__writepasswordjob_connectnotify_callback = nullptr;
    QKeychain__WritePasswordJob_DisconnectNotify_Callback qkeychain__writepasswordjob_disconnectnotify_callback = nullptr;
    QKeychain__WritePasswordJob_DoStart_Callback qkeychain__writepasswordjob_dostart_callback = nullptr;
    QKeychain__WritePasswordJob_Sender_Callback qkeychain__writepasswordjob_sender_callback = nullptr;
    QKeychain__WritePasswordJob_SenderSignalIndex_Callback qkeychain__writepasswordjob_sendersignalindex_callback = nullptr;
    QKeychain__WritePasswordJob_Receivers_Callback qkeychain__writepasswordjob_receivers_callback = nullptr;
    QKeychain__WritePasswordJob_IsSignalConnected_Callback qkeychain__writepasswordjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qkeychain__writepasswordjob_metacall_isbase = false;
    mutable bool qkeychain__writepasswordjob_event_isbase = false;
    mutable bool qkeychain__writepasswordjob_eventfilter_isbase = false;
    mutable bool qkeychain__writepasswordjob_timerevent_isbase = false;
    mutable bool qkeychain__writepasswordjob_childevent_isbase = false;
    mutable bool qkeychain__writepasswordjob_customevent_isbase = false;
    mutable bool qkeychain__writepasswordjob_connectnotify_isbase = false;
    mutable bool qkeychain__writepasswordjob_disconnectnotify_isbase = false;
    mutable bool qkeychain__writepasswordjob_dostart_isbase = false;
    mutable bool qkeychain__writepasswordjob_sender_isbase = false;
    mutable bool qkeychain__writepasswordjob_sendersignalindex_isbase = false;
    mutable bool qkeychain__writepasswordjob_receivers_isbase = false;
    mutable bool qkeychain__writepasswordjob_issignalconnected_isbase = false;

  public:
    VirtualQKeychainWritePasswordJob(const QString& service) : QKeychain::WritePasswordJob(service) {};
    VirtualQKeychainWritePasswordJob(const QString& service, QObject* parent) : QKeychain::WritePasswordJob(service, parent) {};

    ~VirtualQKeychainWritePasswordJob() {
        qkeychain__writepasswordjob_metacall_callback = nullptr;
        qkeychain__writepasswordjob_event_callback = nullptr;
        qkeychain__writepasswordjob_eventfilter_callback = nullptr;
        qkeychain__writepasswordjob_timerevent_callback = nullptr;
        qkeychain__writepasswordjob_childevent_callback = nullptr;
        qkeychain__writepasswordjob_customevent_callback = nullptr;
        qkeychain__writepasswordjob_connectnotify_callback = nullptr;
        qkeychain__writepasswordjob_disconnectnotify_callback = nullptr;
        qkeychain__writepasswordjob_dostart_callback = nullptr;
        qkeychain__writepasswordjob_sender_callback = nullptr;
        qkeychain__writepasswordjob_sendersignalindex_callback = nullptr;
        qkeychain__writepasswordjob_receivers_callback = nullptr;
        qkeychain__writepasswordjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQKeychain__WritePasswordJob_Metacall_Callback(QKeychain__WritePasswordJob_Metacall_Callback cb) { qkeychain__writepasswordjob_metacall_callback = cb; }
    inline void setQKeychain__WritePasswordJob_Event_Callback(QKeychain__WritePasswordJob_Event_Callback cb) { qkeychain__writepasswordjob_event_callback = cb; }
    inline void setQKeychain__WritePasswordJob_EventFilter_Callback(QKeychain__WritePasswordJob_EventFilter_Callback cb) { qkeychain__writepasswordjob_eventfilter_callback = cb; }
    inline void setQKeychain__WritePasswordJob_TimerEvent_Callback(QKeychain__WritePasswordJob_TimerEvent_Callback cb) { qkeychain__writepasswordjob_timerevent_callback = cb; }
    inline void setQKeychain__WritePasswordJob_ChildEvent_Callback(QKeychain__WritePasswordJob_ChildEvent_Callback cb) { qkeychain__writepasswordjob_childevent_callback = cb; }
    inline void setQKeychain__WritePasswordJob_CustomEvent_Callback(QKeychain__WritePasswordJob_CustomEvent_Callback cb) { qkeychain__writepasswordjob_customevent_callback = cb; }
    inline void setQKeychain__WritePasswordJob_ConnectNotify_Callback(QKeychain__WritePasswordJob_ConnectNotify_Callback cb) { qkeychain__writepasswordjob_connectnotify_callback = cb; }
    inline void setQKeychain__WritePasswordJob_DisconnectNotify_Callback(QKeychain__WritePasswordJob_DisconnectNotify_Callback cb) { qkeychain__writepasswordjob_disconnectnotify_callback = cb; }
    inline void setQKeychain__WritePasswordJob_DoStart_Callback(QKeychain__WritePasswordJob_DoStart_Callback cb) { qkeychain__writepasswordjob_dostart_callback = cb; }
    inline void setQKeychain__WritePasswordJob_Sender_Callback(QKeychain__WritePasswordJob_Sender_Callback cb) { qkeychain__writepasswordjob_sender_callback = cb; }
    inline void setQKeychain__WritePasswordJob_SenderSignalIndex_Callback(QKeychain__WritePasswordJob_SenderSignalIndex_Callback cb) { qkeychain__writepasswordjob_sendersignalindex_callback = cb; }
    inline void setQKeychain__WritePasswordJob_Receivers_Callback(QKeychain__WritePasswordJob_Receivers_Callback cb) { qkeychain__writepasswordjob_receivers_callback = cb; }
    inline void setQKeychain__WritePasswordJob_IsSignalConnected_Callback(QKeychain__WritePasswordJob_IsSignalConnected_Callback cb) { qkeychain__writepasswordjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQKeychain__WritePasswordJob_Metacall_IsBase(bool value) const { qkeychain__writepasswordjob_metacall_isbase = value; }
    inline void setQKeychain__WritePasswordJob_Event_IsBase(bool value) const { qkeychain__writepasswordjob_event_isbase = value; }
    inline void setQKeychain__WritePasswordJob_EventFilter_IsBase(bool value) const { qkeychain__writepasswordjob_eventfilter_isbase = value; }
    inline void setQKeychain__WritePasswordJob_TimerEvent_IsBase(bool value) const { qkeychain__writepasswordjob_timerevent_isbase = value; }
    inline void setQKeychain__WritePasswordJob_ChildEvent_IsBase(bool value) const { qkeychain__writepasswordjob_childevent_isbase = value; }
    inline void setQKeychain__WritePasswordJob_CustomEvent_IsBase(bool value) const { qkeychain__writepasswordjob_customevent_isbase = value; }
    inline void setQKeychain__WritePasswordJob_ConnectNotify_IsBase(bool value) const { qkeychain__writepasswordjob_connectnotify_isbase = value; }
    inline void setQKeychain__WritePasswordJob_DisconnectNotify_IsBase(bool value) const { qkeychain__writepasswordjob_disconnectnotify_isbase = value; }
    inline void setQKeychain__WritePasswordJob_DoStart_IsBase(bool value) const { qkeychain__writepasswordjob_dostart_isbase = value; }
    inline void setQKeychain__WritePasswordJob_Sender_IsBase(bool value) const { qkeychain__writepasswordjob_sender_isbase = value; }
    inline void setQKeychain__WritePasswordJob_SenderSignalIndex_IsBase(bool value) const { qkeychain__writepasswordjob_sendersignalindex_isbase = value; }
    inline void setQKeychain__WritePasswordJob_Receivers_IsBase(bool value) const { qkeychain__writepasswordjob_receivers_isbase = value; }
    inline void setQKeychain__WritePasswordJob_IsSignalConnected_IsBase(bool value) const { qkeychain__writepasswordjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeychain__writepasswordjob_metacall_isbase) {
            qkeychain__writepasswordjob_metacall_isbase = false;
            return QKeychain__WritePasswordJob::qt_metacall(param1, param2, param3);
        } else if (qkeychain__writepasswordjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qkeychain__writepasswordjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__WritePasswordJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qkeychain__writepasswordjob_event_isbase) {
            qkeychain__writepasswordjob_event_isbase = false;
            return QKeychain__WritePasswordJob::event(event);
        } else if (qkeychain__writepasswordjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qkeychain__writepasswordjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeychain__WritePasswordJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeychain__writepasswordjob_eventfilter_isbase) {
            qkeychain__writepasswordjob_eventfilter_isbase = false;
            return QKeychain__WritePasswordJob::eventFilter(watched, event);
        } else if (qkeychain__writepasswordjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qkeychain__writepasswordjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QKeychain__WritePasswordJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeychain__writepasswordjob_timerevent_isbase) {
            qkeychain__writepasswordjob_timerevent_isbase = false;
            QKeychain__WritePasswordJob::timerEvent(event);
        } else if (qkeychain__writepasswordjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qkeychain__writepasswordjob_timerevent_callback(this, cbval1);
        } else {
            QKeychain__WritePasswordJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeychain__writepasswordjob_childevent_isbase) {
            qkeychain__writepasswordjob_childevent_isbase = false;
            QKeychain__WritePasswordJob::childEvent(event);
        } else if (qkeychain__writepasswordjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qkeychain__writepasswordjob_childevent_callback(this, cbval1);
        } else {
            QKeychain__WritePasswordJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeychain__writepasswordjob_customevent_isbase) {
            qkeychain__writepasswordjob_customevent_isbase = false;
            QKeychain__WritePasswordJob::customEvent(event);
        } else if (qkeychain__writepasswordjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qkeychain__writepasswordjob_customevent_callback(this, cbval1);
        } else {
            QKeychain__WritePasswordJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeychain__writepasswordjob_connectnotify_isbase) {
            qkeychain__writepasswordjob_connectnotify_isbase = false;
            QKeychain__WritePasswordJob::connectNotify(signal);
        } else if (qkeychain__writepasswordjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeychain__writepasswordjob_connectnotify_callback(this, cbval1);
        } else {
            QKeychain__WritePasswordJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeychain__writepasswordjob_disconnectnotify_isbase) {
            qkeychain__writepasswordjob_disconnectnotify_isbase = false;
            QKeychain__WritePasswordJob::disconnectNotify(signal);
        } else if (qkeychain__writepasswordjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeychain__writepasswordjob_disconnectnotify_callback(this, cbval1);
        } else {
            QKeychain__WritePasswordJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void doStart() {
        if (qkeychain__writepasswordjob_dostart_isbase) {
            qkeychain__writepasswordjob_dostart_isbase = false;
            QKeychain__WritePasswordJob::doStart();
        } else if (qkeychain__writepasswordjob_dostart_callback != nullptr) {
            qkeychain__writepasswordjob_dostart_callback();
        } else {
            QKeychain__WritePasswordJob::doStart();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qkeychain__writepasswordjob_sender_isbase) {
            qkeychain__writepasswordjob_sender_isbase = false;
            return QKeychain__WritePasswordJob::sender();
        } else if (qkeychain__writepasswordjob_sender_callback != nullptr) {
            QObject* callback_ret = qkeychain__writepasswordjob_sender_callback();
            return callback_ret;
        } else {
            return QKeychain__WritePasswordJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qkeychain__writepasswordjob_sendersignalindex_isbase) {
            qkeychain__writepasswordjob_sendersignalindex_isbase = false;
            return QKeychain__WritePasswordJob::senderSignalIndex();
        } else if (qkeychain__writepasswordjob_sendersignalindex_callback != nullptr) {
            int callback_ret = qkeychain__writepasswordjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__WritePasswordJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qkeychain__writepasswordjob_receivers_isbase) {
            qkeychain__writepasswordjob_receivers_isbase = false;
            return QKeychain__WritePasswordJob::receivers(signal);
        } else if (qkeychain__writepasswordjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qkeychain__writepasswordjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__WritePasswordJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qkeychain__writepasswordjob_issignalconnected_isbase) {
            qkeychain__writepasswordjob_issignalconnected_isbase = false;
            return QKeychain__WritePasswordJob::isSignalConnected(signal);
        } else if (qkeychain__writepasswordjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qkeychain__writepasswordjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeychain__WritePasswordJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QKeychain__WritePasswordJob_TimerEvent(QKeychain::WritePasswordJob* self, QTimerEvent* event);
    friend void QKeychain__WritePasswordJob_QBaseTimerEvent(QKeychain::WritePasswordJob* self, QTimerEvent* event);
    friend void QKeychain__WritePasswordJob_ChildEvent(QKeychain::WritePasswordJob* self, QChildEvent* event);
    friend void QKeychain__WritePasswordJob_QBaseChildEvent(QKeychain::WritePasswordJob* self, QChildEvent* event);
    friend void QKeychain__WritePasswordJob_CustomEvent(QKeychain::WritePasswordJob* self, QEvent* event);
    friend void QKeychain__WritePasswordJob_QBaseCustomEvent(QKeychain::WritePasswordJob* self, QEvent* event);
    friend void QKeychain__WritePasswordJob_ConnectNotify(QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__WritePasswordJob_QBaseConnectNotify(QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__WritePasswordJob_DisconnectNotify(QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__WritePasswordJob_QBaseDisconnectNotify(QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__WritePasswordJob_DoStart(QKeychain::WritePasswordJob* self);
    friend void QKeychain__WritePasswordJob_QBaseDoStart(QKeychain::WritePasswordJob* self);
    friend QObject* QKeychain__WritePasswordJob_Sender(const QKeychain::WritePasswordJob* self);
    friend QObject* QKeychain__WritePasswordJob_QBaseSender(const QKeychain::WritePasswordJob* self);
    friend int QKeychain__WritePasswordJob_SenderSignalIndex(const QKeychain::WritePasswordJob* self);
    friend int QKeychain__WritePasswordJob_QBaseSenderSignalIndex(const QKeychain::WritePasswordJob* self);
    friend int QKeychain__WritePasswordJob_Receivers(const QKeychain::WritePasswordJob* self, const char* signal);
    friend int QKeychain__WritePasswordJob_QBaseReceivers(const QKeychain::WritePasswordJob* self, const char* signal);
    friend bool QKeychain__WritePasswordJob_IsSignalConnected(const QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
    friend bool QKeychain__WritePasswordJob_QBaseIsSignalConnected(const QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
};

// This class is a subclass of QKeychain::DeletePasswordJob so that we can call protected methods
class VirtualQKeychainDeletePasswordJob final : public QKeychain::DeletePasswordJob {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeychainDeletePasswordJob = true;

    // Virtual class public types (including callbacks)
    using QKeychain__DeletePasswordJob_Metacall_Callback = int (*)(QKeychain__DeletePasswordJob*, int, int, void**);
    using QKeychain__DeletePasswordJob_Event_Callback = bool (*)(QKeychain__DeletePasswordJob*, QEvent*);
    using QKeychain__DeletePasswordJob_EventFilter_Callback = bool (*)(QKeychain__DeletePasswordJob*, QObject*, QEvent*);
    using QKeychain__DeletePasswordJob_TimerEvent_Callback = void (*)(QKeychain__DeletePasswordJob*, QTimerEvent*);
    using QKeychain__DeletePasswordJob_ChildEvent_Callback = void (*)(QKeychain__DeletePasswordJob*, QChildEvent*);
    using QKeychain__DeletePasswordJob_CustomEvent_Callback = void (*)(QKeychain__DeletePasswordJob*, QEvent*);
    using QKeychain__DeletePasswordJob_ConnectNotify_Callback = void (*)(QKeychain__DeletePasswordJob*, QMetaMethod*);
    using QKeychain__DeletePasswordJob_DisconnectNotify_Callback = void (*)(QKeychain__DeletePasswordJob*, QMetaMethod*);
    using QKeychain__DeletePasswordJob_DoStart_Callback = void (*)();
    using QKeychain__DeletePasswordJob_Sender_Callback = QObject* (*)();
    using QKeychain__DeletePasswordJob_SenderSignalIndex_Callback = int (*)();
    using QKeychain__DeletePasswordJob_Receivers_Callback = int (*)(const QKeychain__DeletePasswordJob*, const char*);
    using QKeychain__DeletePasswordJob_IsSignalConnected_Callback = bool (*)(const QKeychain__DeletePasswordJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    QKeychain__DeletePasswordJob_Metacall_Callback qkeychain__deletepasswordjob_metacall_callback = nullptr;
    QKeychain__DeletePasswordJob_Event_Callback qkeychain__deletepasswordjob_event_callback = nullptr;
    QKeychain__DeletePasswordJob_EventFilter_Callback qkeychain__deletepasswordjob_eventfilter_callback = nullptr;
    QKeychain__DeletePasswordJob_TimerEvent_Callback qkeychain__deletepasswordjob_timerevent_callback = nullptr;
    QKeychain__DeletePasswordJob_ChildEvent_Callback qkeychain__deletepasswordjob_childevent_callback = nullptr;
    QKeychain__DeletePasswordJob_CustomEvent_Callback qkeychain__deletepasswordjob_customevent_callback = nullptr;
    QKeychain__DeletePasswordJob_ConnectNotify_Callback qkeychain__deletepasswordjob_connectnotify_callback = nullptr;
    QKeychain__DeletePasswordJob_DisconnectNotify_Callback qkeychain__deletepasswordjob_disconnectnotify_callback = nullptr;
    QKeychain__DeletePasswordJob_DoStart_Callback qkeychain__deletepasswordjob_dostart_callback = nullptr;
    QKeychain__DeletePasswordJob_Sender_Callback qkeychain__deletepasswordjob_sender_callback = nullptr;
    QKeychain__DeletePasswordJob_SenderSignalIndex_Callback qkeychain__deletepasswordjob_sendersignalindex_callback = nullptr;
    QKeychain__DeletePasswordJob_Receivers_Callback qkeychain__deletepasswordjob_receivers_callback = nullptr;
    QKeychain__DeletePasswordJob_IsSignalConnected_Callback qkeychain__deletepasswordjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qkeychain__deletepasswordjob_metacall_isbase = false;
    mutable bool qkeychain__deletepasswordjob_event_isbase = false;
    mutable bool qkeychain__deletepasswordjob_eventfilter_isbase = false;
    mutable bool qkeychain__deletepasswordjob_timerevent_isbase = false;
    mutable bool qkeychain__deletepasswordjob_childevent_isbase = false;
    mutable bool qkeychain__deletepasswordjob_customevent_isbase = false;
    mutable bool qkeychain__deletepasswordjob_connectnotify_isbase = false;
    mutable bool qkeychain__deletepasswordjob_disconnectnotify_isbase = false;
    mutable bool qkeychain__deletepasswordjob_dostart_isbase = false;
    mutable bool qkeychain__deletepasswordjob_sender_isbase = false;
    mutable bool qkeychain__deletepasswordjob_sendersignalindex_isbase = false;
    mutable bool qkeychain__deletepasswordjob_receivers_isbase = false;
    mutable bool qkeychain__deletepasswordjob_issignalconnected_isbase = false;

  public:
    VirtualQKeychainDeletePasswordJob(const QString& service) : QKeychain::DeletePasswordJob(service) {};
    VirtualQKeychainDeletePasswordJob(const QString& service, QObject* parent) : QKeychain::DeletePasswordJob(service, parent) {};

    ~VirtualQKeychainDeletePasswordJob() {
        qkeychain__deletepasswordjob_metacall_callback = nullptr;
        qkeychain__deletepasswordjob_event_callback = nullptr;
        qkeychain__deletepasswordjob_eventfilter_callback = nullptr;
        qkeychain__deletepasswordjob_timerevent_callback = nullptr;
        qkeychain__deletepasswordjob_childevent_callback = nullptr;
        qkeychain__deletepasswordjob_customevent_callback = nullptr;
        qkeychain__deletepasswordjob_connectnotify_callback = nullptr;
        qkeychain__deletepasswordjob_disconnectnotify_callback = nullptr;
        qkeychain__deletepasswordjob_dostart_callback = nullptr;
        qkeychain__deletepasswordjob_sender_callback = nullptr;
        qkeychain__deletepasswordjob_sendersignalindex_callback = nullptr;
        qkeychain__deletepasswordjob_receivers_callback = nullptr;
        qkeychain__deletepasswordjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQKeychain__DeletePasswordJob_Metacall_Callback(QKeychain__DeletePasswordJob_Metacall_Callback cb) { qkeychain__deletepasswordjob_metacall_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_Event_Callback(QKeychain__DeletePasswordJob_Event_Callback cb) { qkeychain__deletepasswordjob_event_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_EventFilter_Callback(QKeychain__DeletePasswordJob_EventFilter_Callback cb) { qkeychain__deletepasswordjob_eventfilter_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_TimerEvent_Callback(QKeychain__DeletePasswordJob_TimerEvent_Callback cb) { qkeychain__deletepasswordjob_timerevent_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_ChildEvent_Callback(QKeychain__DeletePasswordJob_ChildEvent_Callback cb) { qkeychain__deletepasswordjob_childevent_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_CustomEvent_Callback(QKeychain__DeletePasswordJob_CustomEvent_Callback cb) { qkeychain__deletepasswordjob_customevent_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_ConnectNotify_Callback(QKeychain__DeletePasswordJob_ConnectNotify_Callback cb) { qkeychain__deletepasswordjob_connectnotify_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_DisconnectNotify_Callback(QKeychain__DeletePasswordJob_DisconnectNotify_Callback cb) { qkeychain__deletepasswordjob_disconnectnotify_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_DoStart_Callback(QKeychain__DeletePasswordJob_DoStart_Callback cb) { qkeychain__deletepasswordjob_dostart_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_Sender_Callback(QKeychain__DeletePasswordJob_Sender_Callback cb) { qkeychain__deletepasswordjob_sender_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_SenderSignalIndex_Callback(QKeychain__DeletePasswordJob_SenderSignalIndex_Callback cb) { qkeychain__deletepasswordjob_sendersignalindex_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_Receivers_Callback(QKeychain__DeletePasswordJob_Receivers_Callback cb) { qkeychain__deletepasswordjob_receivers_callback = cb; }
    inline void setQKeychain__DeletePasswordJob_IsSignalConnected_Callback(QKeychain__DeletePasswordJob_IsSignalConnected_Callback cb) { qkeychain__deletepasswordjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQKeychain__DeletePasswordJob_Metacall_IsBase(bool value) const { qkeychain__deletepasswordjob_metacall_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_Event_IsBase(bool value) const { qkeychain__deletepasswordjob_event_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_EventFilter_IsBase(bool value) const { qkeychain__deletepasswordjob_eventfilter_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_TimerEvent_IsBase(bool value) const { qkeychain__deletepasswordjob_timerevent_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_ChildEvent_IsBase(bool value) const { qkeychain__deletepasswordjob_childevent_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_CustomEvent_IsBase(bool value) const { qkeychain__deletepasswordjob_customevent_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_ConnectNotify_IsBase(bool value) const { qkeychain__deletepasswordjob_connectnotify_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_DisconnectNotify_IsBase(bool value) const { qkeychain__deletepasswordjob_disconnectnotify_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_DoStart_IsBase(bool value) const { qkeychain__deletepasswordjob_dostart_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_Sender_IsBase(bool value) const { qkeychain__deletepasswordjob_sender_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_SenderSignalIndex_IsBase(bool value) const { qkeychain__deletepasswordjob_sendersignalindex_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_Receivers_IsBase(bool value) const { qkeychain__deletepasswordjob_receivers_isbase = value; }
    inline void setQKeychain__DeletePasswordJob_IsSignalConnected_IsBase(bool value) const { qkeychain__deletepasswordjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeychain__deletepasswordjob_metacall_isbase) {
            qkeychain__deletepasswordjob_metacall_isbase = false;
            return QKeychain__DeletePasswordJob::qt_metacall(param1, param2, param3);
        } else if (qkeychain__deletepasswordjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qkeychain__deletepasswordjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__DeletePasswordJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qkeychain__deletepasswordjob_event_isbase) {
            qkeychain__deletepasswordjob_event_isbase = false;
            return QKeychain__DeletePasswordJob::event(event);
        } else if (qkeychain__deletepasswordjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qkeychain__deletepasswordjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeychain__DeletePasswordJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeychain__deletepasswordjob_eventfilter_isbase) {
            qkeychain__deletepasswordjob_eventfilter_isbase = false;
            return QKeychain__DeletePasswordJob::eventFilter(watched, event);
        } else if (qkeychain__deletepasswordjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qkeychain__deletepasswordjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QKeychain__DeletePasswordJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeychain__deletepasswordjob_timerevent_isbase) {
            qkeychain__deletepasswordjob_timerevent_isbase = false;
            QKeychain__DeletePasswordJob::timerEvent(event);
        } else if (qkeychain__deletepasswordjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qkeychain__deletepasswordjob_timerevent_callback(this, cbval1);
        } else {
            QKeychain__DeletePasswordJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeychain__deletepasswordjob_childevent_isbase) {
            qkeychain__deletepasswordjob_childevent_isbase = false;
            QKeychain__DeletePasswordJob::childEvent(event);
        } else if (qkeychain__deletepasswordjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qkeychain__deletepasswordjob_childevent_callback(this, cbval1);
        } else {
            QKeychain__DeletePasswordJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeychain__deletepasswordjob_customevent_isbase) {
            qkeychain__deletepasswordjob_customevent_isbase = false;
            QKeychain__DeletePasswordJob::customEvent(event);
        } else if (qkeychain__deletepasswordjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qkeychain__deletepasswordjob_customevent_callback(this, cbval1);
        } else {
            QKeychain__DeletePasswordJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeychain__deletepasswordjob_connectnotify_isbase) {
            qkeychain__deletepasswordjob_connectnotify_isbase = false;
            QKeychain__DeletePasswordJob::connectNotify(signal);
        } else if (qkeychain__deletepasswordjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeychain__deletepasswordjob_connectnotify_callback(this, cbval1);
        } else {
            QKeychain__DeletePasswordJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeychain__deletepasswordjob_disconnectnotify_isbase) {
            qkeychain__deletepasswordjob_disconnectnotify_isbase = false;
            QKeychain__DeletePasswordJob::disconnectNotify(signal);
        } else if (qkeychain__deletepasswordjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeychain__deletepasswordjob_disconnectnotify_callback(this, cbval1);
        } else {
            QKeychain__DeletePasswordJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void doStart() {
        if (qkeychain__deletepasswordjob_dostart_isbase) {
            qkeychain__deletepasswordjob_dostart_isbase = false;
            QKeychain__DeletePasswordJob::doStart();
        } else if (qkeychain__deletepasswordjob_dostart_callback != nullptr) {
            qkeychain__deletepasswordjob_dostart_callback();
        } else {
            QKeychain__DeletePasswordJob::doStart();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qkeychain__deletepasswordjob_sender_isbase) {
            qkeychain__deletepasswordjob_sender_isbase = false;
            return QKeychain__DeletePasswordJob::sender();
        } else if (qkeychain__deletepasswordjob_sender_callback != nullptr) {
            QObject* callback_ret = qkeychain__deletepasswordjob_sender_callback();
            return callback_ret;
        } else {
            return QKeychain__DeletePasswordJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qkeychain__deletepasswordjob_sendersignalindex_isbase) {
            qkeychain__deletepasswordjob_sendersignalindex_isbase = false;
            return QKeychain__DeletePasswordJob::senderSignalIndex();
        } else if (qkeychain__deletepasswordjob_sendersignalindex_callback != nullptr) {
            int callback_ret = qkeychain__deletepasswordjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__DeletePasswordJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qkeychain__deletepasswordjob_receivers_isbase) {
            qkeychain__deletepasswordjob_receivers_isbase = false;
            return QKeychain__DeletePasswordJob::receivers(signal);
        } else if (qkeychain__deletepasswordjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qkeychain__deletepasswordjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QKeychain__DeletePasswordJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qkeychain__deletepasswordjob_issignalconnected_isbase) {
            qkeychain__deletepasswordjob_issignalconnected_isbase = false;
            return QKeychain__DeletePasswordJob::isSignalConnected(signal);
        } else if (qkeychain__deletepasswordjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qkeychain__deletepasswordjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeychain__DeletePasswordJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QKeychain__DeletePasswordJob_TimerEvent(QKeychain::DeletePasswordJob* self, QTimerEvent* event);
    friend void QKeychain__DeletePasswordJob_QBaseTimerEvent(QKeychain::DeletePasswordJob* self, QTimerEvent* event);
    friend void QKeychain__DeletePasswordJob_ChildEvent(QKeychain::DeletePasswordJob* self, QChildEvent* event);
    friend void QKeychain__DeletePasswordJob_QBaseChildEvent(QKeychain::DeletePasswordJob* self, QChildEvent* event);
    friend void QKeychain__DeletePasswordJob_CustomEvent(QKeychain::DeletePasswordJob* self, QEvent* event);
    friend void QKeychain__DeletePasswordJob_QBaseCustomEvent(QKeychain::DeletePasswordJob* self, QEvent* event);
    friend void QKeychain__DeletePasswordJob_ConnectNotify(QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__DeletePasswordJob_QBaseConnectNotify(QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__DeletePasswordJob_DisconnectNotify(QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__DeletePasswordJob_QBaseDisconnectNotify(QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__DeletePasswordJob_DoStart(QKeychain::DeletePasswordJob* self);
    friend void QKeychain__DeletePasswordJob_QBaseDoStart(QKeychain::DeletePasswordJob* self);
    friend QObject* QKeychain__DeletePasswordJob_Sender(const QKeychain::DeletePasswordJob* self);
    friend QObject* QKeychain__DeletePasswordJob_QBaseSender(const QKeychain::DeletePasswordJob* self);
    friend int QKeychain__DeletePasswordJob_SenderSignalIndex(const QKeychain::DeletePasswordJob* self);
    friend int QKeychain__DeletePasswordJob_QBaseSenderSignalIndex(const QKeychain::DeletePasswordJob* self);
    friend int QKeychain__DeletePasswordJob_Receivers(const QKeychain::DeletePasswordJob* self, const char* signal);
    friend int QKeychain__DeletePasswordJob_QBaseReceivers(const QKeychain::DeletePasswordJob* self, const char* signal);
    friend bool QKeychain__DeletePasswordJob_IsSignalConnected(const QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
    friend bool QKeychain__DeletePasswordJob_QBaseIsSignalConnected(const QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
};

#endif
