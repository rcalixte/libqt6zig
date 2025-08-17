#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQSCREENCAPTURE_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQSCREENCAPTURE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScreenCapture so that we can call protected methods
class VirtualQScreenCapture final : public QScreenCapture {

  public:
    // Virtual class boolean flag
    bool isVirtualQScreenCapture = true;

    // Virtual class public types (including callbacks)
    using QScreenCapture_Metacall_Callback = int (*)(QScreenCapture*, int, int, void**);
    using QScreenCapture_Event_Callback = bool (*)(QScreenCapture*, QEvent*);
    using QScreenCapture_EventFilter_Callback = bool (*)(QScreenCapture*, QObject*, QEvent*);
    using QScreenCapture_TimerEvent_Callback = void (*)(QScreenCapture*, QTimerEvent*);
    using QScreenCapture_ChildEvent_Callback = void (*)(QScreenCapture*, QChildEvent*);
    using QScreenCapture_CustomEvent_Callback = void (*)(QScreenCapture*, QEvent*);
    using QScreenCapture_ConnectNotify_Callback = void (*)(QScreenCapture*, QMetaMethod*);
    using QScreenCapture_DisconnectNotify_Callback = void (*)(QScreenCapture*, QMetaMethod*);
    using QScreenCapture_Sender_Callback = QObject* (*)();
    using QScreenCapture_SenderSignalIndex_Callback = int (*)();
    using QScreenCapture_Receivers_Callback = int (*)(const QScreenCapture*, const char*);
    using QScreenCapture_IsSignalConnected_Callback = bool (*)(const QScreenCapture*, QMetaMethod*);

  protected:
    // Instance callback storage
    QScreenCapture_Metacall_Callback qscreencapture_metacall_callback = nullptr;
    QScreenCapture_Event_Callback qscreencapture_event_callback = nullptr;
    QScreenCapture_EventFilter_Callback qscreencapture_eventfilter_callback = nullptr;
    QScreenCapture_TimerEvent_Callback qscreencapture_timerevent_callback = nullptr;
    QScreenCapture_ChildEvent_Callback qscreencapture_childevent_callback = nullptr;
    QScreenCapture_CustomEvent_Callback qscreencapture_customevent_callback = nullptr;
    QScreenCapture_ConnectNotify_Callback qscreencapture_connectnotify_callback = nullptr;
    QScreenCapture_DisconnectNotify_Callback qscreencapture_disconnectnotify_callback = nullptr;
    QScreenCapture_Sender_Callback qscreencapture_sender_callback = nullptr;
    QScreenCapture_SenderSignalIndex_Callback qscreencapture_sendersignalindex_callback = nullptr;
    QScreenCapture_Receivers_Callback qscreencapture_receivers_callback = nullptr;
    QScreenCapture_IsSignalConnected_Callback qscreencapture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscreencapture_metacall_isbase = false;
    mutable bool qscreencapture_event_isbase = false;
    mutable bool qscreencapture_eventfilter_isbase = false;
    mutable bool qscreencapture_timerevent_isbase = false;
    mutable bool qscreencapture_childevent_isbase = false;
    mutable bool qscreencapture_customevent_isbase = false;
    mutable bool qscreencapture_connectnotify_isbase = false;
    mutable bool qscreencapture_disconnectnotify_isbase = false;
    mutable bool qscreencapture_sender_isbase = false;
    mutable bool qscreencapture_sendersignalindex_isbase = false;
    mutable bool qscreencapture_receivers_isbase = false;
    mutable bool qscreencapture_issignalconnected_isbase = false;

  public:
    VirtualQScreenCapture() : QScreenCapture() {};
    VirtualQScreenCapture(QObject* parent) : QScreenCapture(parent) {};

    ~VirtualQScreenCapture() {
        qscreencapture_metacall_callback = nullptr;
        qscreencapture_event_callback = nullptr;
        qscreencapture_eventfilter_callback = nullptr;
        qscreencapture_timerevent_callback = nullptr;
        qscreencapture_childevent_callback = nullptr;
        qscreencapture_customevent_callback = nullptr;
        qscreencapture_connectnotify_callback = nullptr;
        qscreencapture_disconnectnotify_callback = nullptr;
        qscreencapture_sender_callback = nullptr;
        qscreencapture_sendersignalindex_callback = nullptr;
        qscreencapture_receivers_callback = nullptr;
        qscreencapture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQScreenCapture_Metacall_Callback(QScreenCapture_Metacall_Callback cb) { qscreencapture_metacall_callback = cb; }
    inline void setQScreenCapture_Event_Callback(QScreenCapture_Event_Callback cb) { qscreencapture_event_callback = cb; }
    inline void setQScreenCapture_EventFilter_Callback(QScreenCapture_EventFilter_Callback cb) { qscreencapture_eventfilter_callback = cb; }
    inline void setQScreenCapture_TimerEvent_Callback(QScreenCapture_TimerEvent_Callback cb) { qscreencapture_timerevent_callback = cb; }
    inline void setQScreenCapture_ChildEvent_Callback(QScreenCapture_ChildEvent_Callback cb) { qscreencapture_childevent_callback = cb; }
    inline void setQScreenCapture_CustomEvent_Callback(QScreenCapture_CustomEvent_Callback cb) { qscreencapture_customevent_callback = cb; }
    inline void setQScreenCapture_ConnectNotify_Callback(QScreenCapture_ConnectNotify_Callback cb) { qscreencapture_connectnotify_callback = cb; }
    inline void setQScreenCapture_DisconnectNotify_Callback(QScreenCapture_DisconnectNotify_Callback cb) { qscreencapture_disconnectnotify_callback = cb; }
    inline void setQScreenCapture_Sender_Callback(QScreenCapture_Sender_Callback cb) { qscreencapture_sender_callback = cb; }
    inline void setQScreenCapture_SenderSignalIndex_Callback(QScreenCapture_SenderSignalIndex_Callback cb) { qscreencapture_sendersignalindex_callback = cb; }
    inline void setQScreenCapture_Receivers_Callback(QScreenCapture_Receivers_Callback cb) { qscreencapture_receivers_callback = cb; }
    inline void setQScreenCapture_IsSignalConnected_Callback(QScreenCapture_IsSignalConnected_Callback cb) { qscreencapture_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQScreenCapture_Metacall_IsBase(bool value) const { qscreencapture_metacall_isbase = value; }
    inline void setQScreenCapture_Event_IsBase(bool value) const { qscreencapture_event_isbase = value; }
    inline void setQScreenCapture_EventFilter_IsBase(bool value) const { qscreencapture_eventfilter_isbase = value; }
    inline void setQScreenCapture_TimerEvent_IsBase(bool value) const { qscreencapture_timerevent_isbase = value; }
    inline void setQScreenCapture_ChildEvent_IsBase(bool value) const { qscreencapture_childevent_isbase = value; }
    inline void setQScreenCapture_CustomEvent_IsBase(bool value) const { qscreencapture_customevent_isbase = value; }
    inline void setQScreenCapture_ConnectNotify_IsBase(bool value) const { qscreencapture_connectnotify_isbase = value; }
    inline void setQScreenCapture_DisconnectNotify_IsBase(bool value) const { qscreencapture_disconnectnotify_isbase = value; }
    inline void setQScreenCapture_Sender_IsBase(bool value) const { qscreencapture_sender_isbase = value; }
    inline void setQScreenCapture_SenderSignalIndex_IsBase(bool value) const { qscreencapture_sendersignalindex_isbase = value; }
    inline void setQScreenCapture_Receivers_IsBase(bool value) const { qscreencapture_receivers_isbase = value; }
    inline void setQScreenCapture_IsSignalConnected_IsBase(bool value) const { qscreencapture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscreencapture_metacall_isbase) {
            qscreencapture_metacall_isbase = false;
            return QScreenCapture::qt_metacall(param1, param2, param3);
        } else if (qscreencapture_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscreencapture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QScreenCapture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscreencapture_event_isbase) {
            qscreencapture_event_isbase = false;
            return QScreenCapture::event(event);
        } else if (qscreencapture_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscreencapture_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScreenCapture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscreencapture_eventfilter_isbase) {
            qscreencapture_eventfilter_isbase = false;
            return QScreenCapture::eventFilter(watched, event);
        } else if (qscreencapture_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscreencapture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QScreenCapture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscreencapture_timerevent_isbase) {
            qscreencapture_timerevent_isbase = false;
            QScreenCapture::timerEvent(event);
        } else if (qscreencapture_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscreencapture_timerevent_callback(this, cbval1);
        } else {
            QScreenCapture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscreencapture_childevent_isbase) {
            qscreencapture_childevent_isbase = false;
            QScreenCapture::childEvent(event);
        } else if (qscreencapture_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscreencapture_childevent_callback(this, cbval1);
        } else {
            QScreenCapture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscreencapture_customevent_isbase) {
            qscreencapture_customevent_isbase = false;
            QScreenCapture::customEvent(event);
        } else if (qscreencapture_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscreencapture_customevent_callback(this, cbval1);
        } else {
            QScreenCapture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscreencapture_connectnotify_isbase) {
            qscreencapture_connectnotify_isbase = false;
            QScreenCapture::connectNotify(signal);
        } else if (qscreencapture_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscreencapture_connectnotify_callback(this, cbval1);
        } else {
            QScreenCapture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscreencapture_disconnectnotify_isbase) {
            qscreencapture_disconnectnotify_isbase = false;
            QScreenCapture::disconnectNotify(signal);
        } else if (qscreencapture_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscreencapture_disconnectnotify_callback(this, cbval1);
        } else {
            QScreenCapture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscreencapture_sender_isbase) {
            qscreencapture_sender_isbase = false;
            return QScreenCapture::sender();
        } else if (qscreencapture_sender_callback != nullptr) {
            QObject* callback_ret = qscreencapture_sender_callback();
            return callback_ret;
        } else {
            return QScreenCapture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscreencapture_sendersignalindex_isbase) {
            qscreencapture_sendersignalindex_isbase = false;
            return QScreenCapture::senderSignalIndex();
        } else if (qscreencapture_sendersignalindex_callback != nullptr) {
            int callback_ret = qscreencapture_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QScreenCapture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscreencapture_receivers_isbase) {
            qscreencapture_receivers_isbase = false;
            return QScreenCapture::receivers(signal);
        } else if (qscreencapture_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscreencapture_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QScreenCapture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscreencapture_issignalconnected_isbase) {
            qscreencapture_issignalconnected_isbase = false;
            return QScreenCapture::isSignalConnected(signal);
        } else if (qscreencapture_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscreencapture_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScreenCapture::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QScreenCapture_TimerEvent(QScreenCapture* self, QTimerEvent* event);
    friend void QScreenCapture_QBaseTimerEvent(QScreenCapture* self, QTimerEvent* event);
    friend void QScreenCapture_ChildEvent(QScreenCapture* self, QChildEvent* event);
    friend void QScreenCapture_QBaseChildEvent(QScreenCapture* self, QChildEvent* event);
    friend void QScreenCapture_CustomEvent(QScreenCapture* self, QEvent* event);
    friend void QScreenCapture_QBaseCustomEvent(QScreenCapture* self, QEvent* event);
    friend void QScreenCapture_ConnectNotify(QScreenCapture* self, const QMetaMethod* signal);
    friend void QScreenCapture_QBaseConnectNotify(QScreenCapture* self, const QMetaMethod* signal);
    friend void QScreenCapture_DisconnectNotify(QScreenCapture* self, const QMetaMethod* signal);
    friend void QScreenCapture_QBaseDisconnectNotify(QScreenCapture* self, const QMetaMethod* signal);
    friend QObject* QScreenCapture_Sender(const QScreenCapture* self);
    friend QObject* QScreenCapture_QBaseSender(const QScreenCapture* self);
    friend int QScreenCapture_SenderSignalIndex(const QScreenCapture* self);
    friend int QScreenCapture_QBaseSenderSignalIndex(const QScreenCapture* self);
    friend int QScreenCapture_Receivers(const QScreenCapture* self, const char* signal);
    friend int QScreenCapture_QBaseReceivers(const QScreenCapture* self, const char* signal);
    friend bool QScreenCapture_IsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal);
    friend bool QScreenCapture_QBaseIsSignalConnected(const QScreenCapture* self, const QMetaMethod* signal);
};

#endif
