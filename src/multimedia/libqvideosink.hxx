#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQVIDEOSINK_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQVIDEOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVideoSink so that we can call protected methods
class VirtualQVideoSink final : public QVideoSink {

  public:
    // Virtual class boolean flag
    bool isVirtualQVideoSink = true;

    // Virtual class public types (including callbacks)
    using QVideoSink_Metacall_Callback = int (*)(QVideoSink*, int, int, void**);
    using QVideoSink_Event_Callback = bool (*)(QVideoSink*, QEvent*);
    using QVideoSink_EventFilter_Callback = bool (*)(QVideoSink*, QObject*, QEvent*);
    using QVideoSink_TimerEvent_Callback = void (*)(QVideoSink*, QTimerEvent*);
    using QVideoSink_ChildEvent_Callback = void (*)(QVideoSink*, QChildEvent*);
    using QVideoSink_CustomEvent_Callback = void (*)(QVideoSink*, QEvent*);
    using QVideoSink_ConnectNotify_Callback = void (*)(QVideoSink*, QMetaMethod*);
    using QVideoSink_DisconnectNotify_Callback = void (*)(QVideoSink*, QMetaMethod*);
    using QVideoSink_Sender_Callback = QObject* (*)();
    using QVideoSink_SenderSignalIndex_Callback = int (*)();
    using QVideoSink_Receivers_Callback = int (*)(const QVideoSink*, const char*);
    using QVideoSink_IsSignalConnected_Callback = bool (*)(const QVideoSink*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVideoSink_Metacall_Callback qvideosink_metacall_callback = nullptr;
    QVideoSink_Event_Callback qvideosink_event_callback = nullptr;
    QVideoSink_EventFilter_Callback qvideosink_eventfilter_callback = nullptr;
    QVideoSink_TimerEvent_Callback qvideosink_timerevent_callback = nullptr;
    QVideoSink_ChildEvent_Callback qvideosink_childevent_callback = nullptr;
    QVideoSink_CustomEvent_Callback qvideosink_customevent_callback = nullptr;
    QVideoSink_ConnectNotify_Callback qvideosink_connectnotify_callback = nullptr;
    QVideoSink_DisconnectNotify_Callback qvideosink_disconnectnotify_callback = nullptr;
    QVideoSink_Sender_Callback qvideosink_sender_callback = nullptr;
    QVideoSink_SenderSignalIndex_Callback qvideosink_sendersignalindex_callback = nullptr;
    QVideoSink_Receivers_Callback qvideosink_receivers_callback = nullptr;
    QVideoSink_IsSignalConnected_Callback qvideosink_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvideosink_metacall_isbase = false;
    mutable bool qvideosink_event_isbase = false;
    mutable bool qvideosink_eventfilter_isbase = false;
    mutable bool qvideosink_timerevent_isbase = false;
    mutable bool qvideosink_childevent_isbase = false;
    mutable bool qvideosink_customevent_isbase = false;
    mutable bool qvideosink_connectnotify_isbase = false;
    mutable bool qvideosink_disconnectnotify_isbase = false;
    mutable bool qvideosink_sender_isbase = false;
    mutable bool qvideosink_sendersignalindex_isbase = false;
    mutable bool qvideosink_receivers_isbase = false;
    mutable bool qvideosink_issignalconnected_isbase = false;

  public:
    VirtualQVideoSink() : QVideoSink() {};
    VirtualQVideoSink(QObject* parent) : QVideoSink(parent) {};

    ~VirtualQVideoSink() {
        qvideosink_metacall_callback = nullptr;
        qvideosink_event_callback = nullptr;
        qvideosink_eventfilter_callback = nullptr;
        qvideosink_timerevent_callback = nullptr;
        qvideosink_childevent_callback = nullptr;
        qvideosink_customevent_callback = nullptr;
        qvideosink_connectnotify_callback = nullptr;
        qvideosink_disconnectnotify_callback = nullptr;
        qvideosink_sender_callback = nullptr;
        qvideosink_sendersignalindex_callback = nullptr;
        qvideosink_receivers_callback = nullptr;
        qvideosink_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQVideoSink_Metacall_Callback(QVideoSink_Metacall_Callback cb) { qvideosink_metacall_callback = cb; }
    inline void setQVideoSink_Event_Callback(QVideoSink_Event_Callback cb) { qvideosink_event_callback = cb; }
    inline void setQVideoSink_EventFilter_Callback(QVideoSink_EventFilter_Callback cb) { qvideosink_eventfilter_callback = cb; }
    inline void setQVideoSink_TimerEvent_Callback(QVideoSink_TimerEvent_Callback cb) { qvideosink_timerevent_callback = cb; }
    inline void setQVideoSink_ChildEvent_Callback(QVideoSink_ChildEvent_Callback cb) { qvideosink_childevent_callback = cb; }
    inline void setQVideoSink_CustomEvent_Callback(QVideoSink_CustomEvent_Callback cb) { qvideosink_customevent_callback = cb; }
    inline void setQVideoSink_ConnectNotify_Callback(QVideoSink_ConnectNotify_Callback cb) { qvideosink_connectnotify_callback = cb; }
    inline void setQVideoSink_DisconnectNotify_Callback(QVideoSink_DisconnectNotify_Callback cb) { qvideosink_disconnectnotify_callback = cb; }
    inline void setQVideoSink_Sender_Callback(QVideoSink_Sender_Callback cb) { qvideosink_sender_callback = cb; }
    inline void setQVideoSink_SenderSignalIndex_Callback(QVideoSink_SenderSignalIndex_Callback cb) { qvideosink_sendersignalindex_callback = cb; }
    inline void setQVideoSink_Receivers_Callback(QVideoSink_Receivers_Callback cb) { qvideosink_receivers_callback = cb; }
    inline void setQVideoSink_IsSignalConnected_Callback(QVideoSink_IsSignalConnected_Callback cb) { qvideosink_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVideoSink_Metacall_IsBase(bool value) const { qvideosink_metacall_isbase = value; }
    inline void setQVideoSink_Event_IsBase(bool value) const { qvideosink_event_isbase = value; }
    inline void setQVideoSink_EventFilter_IsBase(bool value) const { qvideosink_eventfilter_isbase = value; }
    inline void setQVideoSink_TimerEvent_IsBase(bool value) const { qvideosink_timerevent_isbase = value; }
    inline void setQVideoSink_ChildEvent_IsBase(bool value) const { qvideosink_childevent_isbase = value; }
    inline void setQVideoSink_CustomEvent_IsBase(bool value) const { qvideosink_customevent_isbase = value; }
    inline void setQVideoSink_ConnectNotify_IsBase(bool value) const { qvideosink_connectnotify_isbase = value; }
    inline void setQVideoSink_DisconnectNotify_IsBase(bool value) const { qvideosink_disconnectnotify_isbase = value; }
    inline void setQVideoSink_Sender_IsBase(bool value) const { qvideosink_sender_isbase = value; }
    inline void setQVideoSink_SenderSignalIndex_IsBase(bool value) const { qvideosink_sendersignalindex_isbase = value; }
    inline void setQVideoSink_Receivers_IsBase(bool value) const { qvideosink_receivers_isbase = value; }
    inline void setQVideoSink_IsSignalConnected_IsBase(bool value) const { qvideosink_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvideosink_metacall_isbase) {
            qvideosink_metacall_isbase = false;
            return QVideoSink::qt_metacall(param1, param2, param3);
        } else if (qvideosink_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qvideosink_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QVideoSink::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvideosink_event_isbase) {
            qvideosink_event_isbase = false;
            return QVideoSink::event(event);
        } else if (qvideosink_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qvideosink_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVideoSink::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvideosink_eventfilter_isbase) {
            qvideosink_eventfilter_isbase = false;
            return QVideoSink::eventFilter(watched, event);
        } else if (qvideosink_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qvideosink_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QVideoSink::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvideosink_timerevent_isbase) {
            qvideosink_timerevent_isbase = false;
            QVideoSink::timerEvent(event);
        } else if (qvideosink_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qvideosink_timerevent_callback(this, cbval1);
        } else {
            QVideoSink::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvideosink_childevent_isbase) {
            qvideosink_childevent_isbase = false;
            QVideoSink::childEvent(event);
        } else if (qvideosink_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qvideosink_childevent_callback(this, cbval1);
        } else {
            QVideoSink::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvideosink_customevent_isbase) {
            qvideosink_customevent_isbase = false;
            QVideoSink::customEvent(event);
        } else if (qvideosink_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qvideosink_customevent_callback(this, cbval1);
        } else {
            QVideoSink::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvideosink_connectnotify_isbase) {
            qvideosink_connectnotify_isbase = false;
            QVideoSink::connectNotify(signal);
        } else if (qvideosink_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvideosink_connectnotify_callback(this, cbval1);
        } else {
            QVideoSink::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvideosink_disconnectnotify_isbase) {
            qvideosink_disconnectnotify_isbase = false;
            QVideoSink::disconnectNotify(signal);
        } else if (qvideosink_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvideosink_disconnectnotify_callback(this, cbval1);
        } else {
            QVideoSink::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvideosink_sender_isbase) {
            qvideosink_sender_isbase = false;
            return QVideoSink::sender();
        } else if (qvideosink_sender_callback != nullptr) {
            QObject* callback_ret = qvideosink_sender_callback();
            return callback_ret;
        } else {
            return QVideoSink::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvideosink_sendersignalindex_isbase) {
            qvideosink_sendersignalindex_isbase = false;
            return QVideoSink::senderSignalIndex();
        } else if (qvideosink_sendersignalindex_callback != nullptr) {
            int callback_ret = qvideosink_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVideoSink::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvideosink_receivers_isbase) {
            qvideosink_receivers_isbase = false;
            return QVideoSink::receivers(signal);
        } else if (qvideosink_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qvideosink_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVideoSink::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvideosink_issignalconnected_isbase) {
            qvideosink_issignalconnected_isbase = false;
            return QVideoSink::isSignalConnected(signal);
        } else if (qvideosink_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qvideosink_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVideoSink::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QVideoSink_TimerEvent(QVideoSink* self, QTimerEvent* event);
    friend void QVideoSink_QBaseTimerEvent(QVideoSink* self, QTimerEvent* event);
    friend void QVideoSink_ChildEvent(QVideoSink* self, QChildEvent* event);
    friend void QVideoSink_QBaseChildEvent(QVideoSink* self, QChildEvent* event);
    friend void QVideoSink_CustomEvent(QVideoSink* self, QEvent* event);
    friend void QVideoSink_QBaseCustomEvent(QVideoSink* self, QEvent* event);
    friend void QVideoSink_ConnectNotify(QVideoSink* self, const QMetaMethod* signal);
    friend void QVideoSink_QBaseConnectNotify(QVideoSink* self, const QMetaMethod* signal);
    friend void QVideoSink_DisconnectNotify(QVideoSink* self, const QMetaMethod* signal);
    friend void QVideoSink_QBaseDisconnectNotify(QVideoSink* self, const QMetaMethod* signal);
    friend QObject* QVideoSink_Sender(const QVideoSink* self);
    friend QObject* QVideoSink_QBaseSender(const QVideoSink* self);
    friend int QVideoSink_SenderSignalIndex(const QVideoSink* self);
    friend int QVideoSink_QBaseSenderSignalIndex(const QVideoSink* self);
    friend int QVideoSink_Receivers(const QVideoSink* self, const char* signal);
    friend int QVideoSink_QBaseReceivers(const QVideoSink* self, const char* signal);
    friend bool QVideoSink_IsSignalConnected(const QVideoSink* self, const QMetaMethod* signal);
    friend bool QVideoSink_QBaseIsSignalConnected(const QVideoSink* self, const QMetaMethod* signal);
};

#endif
