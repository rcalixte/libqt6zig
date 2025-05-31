#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIACAPTURESESSION_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIACAPTURESESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaCaptureSession so that we can call protected methods
class VirtualQMediaCaptureSession final : public QMediaCaptureSession {

  public:
    // Virtual class boolean flag
    bool isVirtualQMediaCaptureSession = true;

    // Virtual class public types (including callbacks)
    using QMediaCaptureSession_Metacall_Callback = int (*)(QMediaCaptureSession*, int, int, void**);
    using QMediaCaptureSession_Event_Callback = bool (*)(QMediaCaptureSession*, QEvent*);
    using QMediaCaptureSession_EventFilter_Callback = bool (*)(QMediaCaptureSession*, QObject*, QEvent*);
    using QMediaCaptureSession_TimerEvent_Callback = void (*)(QMediaCaptureSession*, QTimerEvent*);
    using QMediaCaptureSession_ChildEvent_Callback = void (*)(QMediaCaptureSession*, QChildEvent*);
    using QMediaCaptureSession_CustomEvent_Callback = void (*)(QMediaCaptureSession*, QEvent*);
    using QMediaCaptureSession_ConnectNotify_Callback = void (*)(QMediaCaptureSession*, QMetaMethod*);
    using QMediaCaptureSession_DisconnectNotify_Callback = void (*)(QMediaCaptureSession*, QMetaMethod*);
    using QMediaCaptureSession_Sender_Callback = QObject* (*)();
    using QMediaCaptureSession_SenderSignalIndex_Callback = int (*)();
    using QMediaCaptureSession_Receivers_Callback = int (*)(const QMediaCaptureSession*, const char*);
    using QMediaCaptureSession_IsSignalConnected_Callback = bool (*)(const QMediaCaptureSession*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMediaCaptureSession_Metacall_Callback qmediacapturesession_metacall_callback = nullptr;
    QMediaCaptureSession_Event_Callback qmediacapturesession_event_callback = nullptr;
    QMediaCaptureSession_EventFilter_Callback qmediacapturesession_eventfilter_callback = nullptr;
    QMediaCaptureSession_TimerEvent_Callback qmediacapturesession_timerevent_callback = nullptr;
    QMediaCaptureSession_ChildEvent_Callback qmediacapturesession_childevent_callback = nullptr;
    QMediaCaptureSession_CustomEvent_Callback qmediacapturesession_customevent_callback = nullptr;
    QMediaCaptureSession_ConnectNotify_Callback qmediacapturesession_connectnotify_callback = nullptr;
    QMediaCaptureSession_DisconnectNotify_Callback qmediacapturesession_disconnectnotify_callback = nullptr;
    QMediaCaptureSession_Sender_Callback qmediacapturesession_sender_callback = nullptr;
    QMediaCaptureSession_SenderSignalIndex_Callback qmediacapturesession_sendersignalindex_callback = nullptr;
    QMediaCaptureSession_Receivers_Callback qmediacapturesession_receivers_callback = nullptr;
    QMediaCaptureSession_IsSignalConnected_Callback qmediacapturesession_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmediacapturesession_metacall_isbase = false;
    mutable bool qmediacapturesession_event_isbase = false;
    mutable bool qmediacapturesession_eventfilter_isbase = false;
    mutable bool qmediacapturesession_timerevent_isbase = false;
    mutable bool qmediacapturesession_childevent_isbase = false;
    mutable bool qmediacapturesession_customevent_isbase = false;
    mutable bool qmediacapturesession_connectnotify_isbase = false;
    mutable bool qmediacapturesession_disconnectnotify_isbase = false;
    mutable bool qmediacapturesession_sender_isbase = false;
    mutable bool qmediacapturesession_sendersignalindex_isbase = false;
    mutable bool qmediacapturesession_receivers_isbase = false;
    mutable bool qmediacapturesession_issignalconnected_isbase = false;

  public:
    VirtualQMediaCaptureSession() : QMediaCaptureSession(){};
    VirtualQMediaCaptureSession(QObject* parent) : QMediaCaptureSession(parent){};

    ~VirtualQMediaCaptureSession() {
        qmediacapturesession_metacall_callback = nullptr;
        qmediacapturesession_event_callback = nullptr;
        qmediacapturesession_eventfilter_callback = nullptr;
        qmediacapturesession_timerevent_callback = nullptr;
        qmediacapturesession_childevent_callback = nullptr;
        qmediacapturesession_customevent_callback = nullptr;
        qmediacapturesession_connectnotify_callback = nullptr;
        qmediacapturesession_disconnectnotify_callback = nullptr;
        qmediacapturesession_sender_callback = nullptr;
        qmediacapturesession_sendersignalindex_callback = nullptr;
        qmediacapturesession_receivers_callback = nullptr;
        qmediacapturesession_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQMediaCaptureSession_Metacall_Callback(QMediaCaptureSession_Metacall_Callback cb) { qmediacapturesession_metacall_callback = cb; }
    inline void setQMediaCaptureSession_Event_Callback(QMediaCaptureSession_Event_Callback cb) { qmediacapturesession_event_callback = cb; }
    inline void setQMediaCaptureSession_EventFilter_Callback(QMediaCaptureSession_EventFilter_Callback cb) { qmediacapturesession_eventfilter_callback = cb; }
    inline void setQMediaCaptureSession_TimerEvent_Callback(QMediaCaptureSession_TimerEvent_Callback cb) { qmediacapturesession_timerevent_callback = cb; }
    inline void setQMediaCaptureSession_ChildEvent_Callback(QMediaCaptureSession_ChildEvent_Callback cb) { qmediacapturesession_childevent_callback = cb; }
    inline void setQMediaCaptureSession_CustomEvent_Callback(QMediaCaptureSession_CustomEvent_Callback cb) { qmediacapturesession_customevent_callback = cb; }
    inline void setQMediaCaptureSession_ConnectNotify_Callback(QMediaCaptureSession_ConnectNotify_Callback cb) { qmediacapturesession_connectnotify_callback = cb; }
    inline void setQMediaCaptureSession_DisconnectNotify_Callback(QMediaCaptureSession_DisconnectNotify_Callback cb) { qmediacapturesession_disconnectnotify_callback = cb; }
    inline void setQMediaCaptureSession_Sender_Callback(QMediaCaptureSession_Sender_Callback cb) { qmediacapturesession_sender_callback = cb; }
    inline void setQMediaCaptureSession_SenderSignalIndex_Callback(QMediaCaptureSession_SenderSignalIndex_Callback cb) { qmediacapturesession_sendersignalindex_callback = cb; }
    inline void setQMediaCaptureSession_Receivers_Callback(QMediaCaptureSession_Receivers_Callback cb) { qmediacapturesession_receivers_callback = cb; }
    inline void setQMediaCaptureSession_IsSignalConnected_Callback(QMediaCaptureSession_IsSignalConnected_Callback cb) { qmediacapturesession_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMediaCaptureSession_Metacall_IsBase(bool value) const { qmediacapturesession_metacall_isbase = value; }
    inline void setQMediaCaptureSession_Event_IsBase(bool value) const { qmediacapturesession_event_isbase = value; }
    inline void setQMediaCaptureSession_EventFilter_IsBase(bool value) const { qmediacapturesession_eventfilter_isbase = value; }
    inline void setQMediaCaptureSession_TimerEvent_IsBase(bool value) const { qmediacapturesession_timerevent_isbase = value; }
    inline void setQMediaCaptureSession_ChildEvent_IsBase(bool value) const { qmediacapturesession_childevent_isbase = value; }
    inline void setQMediaCaptureSession_CustomEvent_IsBase(bool value) const { qmediacapturesession_customevent_isbase = value; }
    inline void setQMediaCaptureSession_ConnectNotify_IsBase(bool value) const { qmediacapturesession_connectnotify_isbase = value; }
    inline void setQMediaCaptureSession_DisconnectNotify_IsBase(bool value) const { qmediacapturesession_disconnectnotify_isbase = value; }
    inline void setQMediaCaptureSession_Sender_IsBase(bool value) const { qmediacapturesession_sender_isbase = value; }
    inline void setQMediaCaptureSession_SenderSignalIndex_IsBase(bool value) const { qmediacapturesession_sendersignalindex_isbase = value; }
    inline void setQMediaCaptureSession_Receivers_IsBase(bool value) const { qmediacapturesession_receivers_isbase = value; }
    inline void setQMediaCaptureSession_IsSignalConnected_IsBase(bool value) const { qmediacapturesession_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediacapturesession_metacall_isbase) {
            qmediacapturesession_metacall_isbase = false;
            return QMediaCaptureSession::qt_metacall(param1, param2, param3);
        } else if (qmediacapturesession_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmediacapturesession_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMediaCaptureSession::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediacapturesession_event_isbase) {
            qmediacapturesession_event_isbase = false;
            return QMediaCaptureSession::event(event);
        } else if (qmediacapturesession_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmediacapturesession_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMediaCaptureSession::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediacapturesession_eventfilter_isbase) {
            qmediacapturesession_eventfilter_isbase = false;
            return QMediaCaptureSession::eventFilter(watched, event);
        } else if (qmediacapturesession_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qmediacapturesession_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMediaCaptureSession::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediacapturesession_timerevent_isbase) {
            qmediacapturesession_timerevent_isbase = false;
            QMediaCaptureSession::timerEvent(event);
        } else if (qmediacapturesession_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qmediacapturesession_timerevent_callback(this, cbval1);
        } else {
            QMediaCaptureSession::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediacapturesession_childevent_isbase) {
            qmediacapturesession_childevent_isbase = false;
            QMediaCaptureSession::childEvent(event);
        } else if (qmediacapturesession_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmediacapturesession_childevent_callback(this, cbval1);
        } else {
            QMediaCaptureSession::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediacapturesession_customevent_isbase) {
            qmediacapturesession_customevent_isbase = false;
            QMediaCaptureSession::customEvent(event);
        } else if (qmediacapturesession_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmediacapturesession_customevent_callback(this, cbval1);
        } else {
            QMediaCaptureSession::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediacapturesession_connectnotify_isbase) {
            qmediacapturesession_connectnotify_isbase = false;
            QMediaCaptureSession::connectNotify(signal);
        } else if (qmediacapturesession_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmediacapturesession_connectnotify_callback(this, cbval1);
        } else {
            QMediaCaptureSession::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediacapturesession_disconnectnotify_isbase) {
            qmediacapturesession_disconnectnotify_isbase = false;
            QMediaCaptureSession::disconnectNotify(signal);
        } else if (qmediacapturesession_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmediacapturesession_disconnectnotify_callback(this, cbval1);
        } else {
            QMediaCaptureSession::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediacapturesession_sender_isbase) {
            qmediacapturesession_sender_isbase = false;
            return QMediaCaptureSession::sender();
        } else if (qmediacapturesession_sender_callback != nullptr) {
            QObject* callback_ret = qmediacapturesession_sender_callback();
            return callback_ret;
        } else {
            return QMediaCaptureSession::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediacapturesession_sendersignalindex_isbase) {
            qmediacapturesession_sendersignalindex_isbase = false;
            return QMediaCaptureSession::senderSignalIndex();
        } else if (qmediacapturesession_sendersignalindex_callback != nullptr) {
            int callback_ret = qmediacapturesession_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMediaCaptureSession::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediacapturesession_receivers_isbase) {
            qmediacapturesession_receivers_isbase = false;
            return QMediaCaptureSession::receivers(signal);
        } else if (qmediacapturesession_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmediacapturesession_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMediaCaptureSession::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediacapturesession_issignalconnected_isbase) {
            qmediacapturesession_issignalconnected_isbase = false;
            return QMediaCaptureSession::isSignalConnected(signal);
        } else if (qmediacapturesession_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmediacapturesession_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMediaCaptureSession::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QMediaCaptureSession_TimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
    friend void QMediaCaptureSession_QBaseTimerEvent(QMediaCaptureSession* self, QTimerEvent* event);
    friend void QMediaCaptureSession_ChildEvent(QMediaCaptureSession* self, QChildEvent* event);
    friend void QMediaCaptureSession_QBaseChildEvent(QMediaCaptureSession* self, QChildEvent* event);
    friend void QMediaCaptureSession_CustomEvent(QMediaCaptureSession* self, QEvent* event);
    friend void QMediaCaptureSession_QBaseCustomEvent(QMediaCaptureSession* self, QEvent* event);
    friend void QMediaCaptureSession_ConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
    friend void QMediaCaptureSession_QBaseConnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
    friend void QMediaCaptureSession_DisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
    friend void QMediaCaptureSession_QBaseDisconnectNotify(QMediaCaptureSession* self, const QMetaMethod* signal);
    friend QObject* QMediaCaptureSession_Sender(const QMediaCaptureSession* self);
    friend QObject* QMediaCaptureSession_QBaseSender(const QMediaCaptureSession* self);
    friend int QMediaCaptureSession_SenderSignalIndex(const QMediaCaptureSession* self);
    friend int QMediaCaptureSession_QBaseSenderSignalIndex(const QMediaCaptureSession* self);
    friend int QMediaCaptureSession_Receivers(const QMediaCaptureSession* self, const char* signal);
    friend int QMediaCaptureSession_QBaseReceivers(const QMediaCaptureSession* self, const char* signal);
    friend bool QMediaCaptureSession_IsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal);
    friend bool QMediaCaptureSession_QBaseIsSignalConnected(const QMediaCaptureSession* self, const QMetaMethod* signal);
};

#endif
