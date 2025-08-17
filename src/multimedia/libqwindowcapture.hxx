#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQWINDOWCAPTURE_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQWINDOWCAPTURE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWindowCapture so that we can call protected methods
class VirtualQWindowCapture final : public QWindowCapture {

  public:
    // Virtual class boolean flag
    bool isVirtualQWindowCapture = true;

    // Virtual class public types (including callbacks)
    using QWindowCapture_Metacall_Callback = int (*)(QWindowCapture*, int, int, void**);
    using QWindowCapture_Event_Callback = bool (*)(QWindowCapture*, QEvent*);
    using QWindowCapture_EventFilter_Callback = bool (*)(QWindowCapture*, QObject*, QEvent*);
    using QWindowCapture_TimerEvent_Callback = void (*)(QWindowCapture*, QTimerEvent*);
    using QWindowCapture_ChildEvent_Callback = void (*)(QWindowCapture*, QChildEvent*);
    using QWindowCapture_CustomEvent_Callback = void (*)(QWindowCapture*, QEvent*);
    using QWindowCapture_ConnectNotify_Callback = void (*)(QWindowCapture*, QMetaMethod*);
    using QWindowCapture_DisconnectNotify_Callback = void (*)(QWindowCapture*, QMetaMethod*);
    using QWindowCapture_Sender_Callback = QObject* (*)();
    using QWindowCapture_SenderSignalIndex_Callback = int (*)();
    using QWindowCapture_Receivers_Callback = int (*)(const QWindowCapture*, const char*);
    using QWindowCapture_IsSignalConnected_Callback = bool (*)(const QWindowCapture*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWindowCapture_Metacall_Callback qwindowcapture_metacall_callback = nullptr;
    QWindowCapture_Event_Callback qwindowcapture_event_callback = nullptr;
    QWindowCapture_EventFilter_Callback qwindowcapture_eventfilter_callback = nullptr;
    QWindowCapture_TimerEvent_Callback qwindowcapture_timerevent_callback = nullptr;
    QWindowCapture_ChildEvent_Callback qwindowcapture_childevent_callback = nullptr;
    QWindowCapture_CustomEvent_Callback qwindowcapture_customevent_callback = nullptr;
    QWindowCapture_ConnectNotify_Callback qwindowcapture_connectnotify_callback = nullptr;
    QWindowCapture_DisconnectNotify_Callback qwindowcapture_disconnectnotify_callback = nullptr;
    QWindowCapture_Sender_Callback qwindowcapture_sender_callback = nullptr;
    QWindowCapture_SenderSignalIndex_Callback qwindowcapture_sendersignalindex_callback = nullptr;
    QWindowCapture_Receivers_Callback qwindowcapture_receivers_callback = nullptr;
    QWindowCapture_IsSignalConnected_Callback qwindowcapture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwindowcapture_metacall_isbase = false;
    mutable bool qwindowcapture_event_isbase = false;
    mutable bool qwindowcapture_eventfilter_isbase = false;
    mutable bool qwindowcapture_timerevent_isbase = false;
    mutable bool qwindowcapture_childevent_isbase = false;
    mutable bool qwindowcapture_customevent_isbase = false;
    mutable bool qwindowcapture_connectnotify_isbase = false;
    mutable bool qwindowcapture_disconnectnotify_isbase = false;
    mutable bool qwindowcapture_sender_isbase = false;
    mutable bool qwindowcapture_sendersignalindex_isbase = false;
    mutable bool qwindowcapture_receivers_isbase = false;
    mutable bool qwindowcapture_issignalconnected_isbase = false;

  public:
    VirtualQWindowCapture() : QWindowCapture() {};
    VirtualQWindowCapture(QObject* parent) : QWindowCapture(parent) {};

    ~VirtualQWindowCapture() {
        qwindowcapture_metacall_callback = nullptr;
        qwindowcapture_event_callback = nullptr;
        qwindowcapture_eventfilter_callback = nullptr;
        qwindowcapture_timerevent_callback = nullptr;
        qwindowcapture_childevent_callback = nullptr;
        qwindowcapture_customevent_callback = nullptr;
        qwindowcapture_connectnotify_callback = nullptr;
        qwindowcapture_disconnectnotify_callback = nullptr;
        qwindowcapture_sender_callback = nullptr;
        qwindowcapture_sendersignalindex_callback = nullptr;
        qwindowcapture_receivers_callback = nullptr;
        qwindowcapture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQWindowCapture_Metacall_Callback(QWindowCapture_Metacall_Callback cb) { qwindowcapture_metacall_callback = cb; }
    inline void setQWindowCapture_Event_Callback(QWindowCapture_Event_Callback cb) { qwindowcapture_event_callback = cb; }
    inline void setQWindowCapture_EventFilter_Callback(QWindowCapture_EventFilter_Callback cb) { qwindowcapture_eventfilter_callback = cb; }
    inline void setQWindowCapture_TimerEvent_Callback(QWindowCapture_TimerEvent_Callback cb) { qwindowcapture_timerevent_callback = cb; }
    inline void setQWindowCapture_ChildEvent_Callback(QWindowCapture_ChildEvent_Callback cb) { qwindowcapture_childevent_callback = cb; }
    inline void setQWindowCapture_CustomEvent_Callback(QWindowCapture_CustomEvent_Callback cb) { qwindowcapture_customevent_callback = cb; }
    inline void setQWindowCapture_ConnectNotify_Callback(QWindowCapture_ConnectNotify_Callback cb) { qwindowcapture_connectnotify_callback = cb; }
    inline void setQWindowCapture_DisconnectNotify_Callback(QWindowCapture_DisconnectNotify_Callback cb) { qwindowcapture_disconnectnotify_callback = cb; }
    inline void setQWindowCapture_Sender_Callback(QWindowCapture_Sender_Callback cb) { qwindowcapture_sender_callback = cb; }
    inline void setQWindowCapture_SenderSignalIndex_Callback(QWindowCapture_SenderSignalIndex_Callback cb) { qwindowcapture_sendersignalindex_callback = cb; }
    inline void setQWindowCapture_Receivers_Callback(QWindowCapture_Receivers_Callback cb) { qwindowcapture_receivers_callback = cb; }
    inline void setQWindowCapture_IsSignalConnected_Callback(QWindowCapture_IsSignalConnected_Callback cb) { qwindowcapture_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWindowCapture_Metacall_IsBase(bool value) const { qwindowcapture_metacall_isbase = value; }
    inline void setQWindowCapture_Event_IsBase(bool value) const { qwindowcapture_event_isbase = value; }
    inline void setQWindowCapture_EventFilter_IsBase(bool value) const { qwindowcapture_eventfilter_isbase = value; }
    inline void setQWindowCapture_TimerEvent_IsBase(bool value) const { qwindowcapture_timerevent_isbase = value; }
    inline void setQWindowCapture_ChildEvent_IsBase(bool value) const { qwindowcapture_childevent_isbase = value; }
    inline void setQWindowCapture_CustomEvent_IsBase(bool value) const { qwindowcapture_customevent_isbase = value; }
    inline void setQWindowCapture_ConnectNotify_IsBase(bool value) const { qwindowcapture_connectnotify_isbase = value; }
    inline void setQWindowCapture_DisconnectNotify_IsBase(bool value) const { qwindowcapture_disconnectnotify_isbase = value; }
    inline void setQWindowCapture_Sender_IsBase(bool value) const { qwindowcapture_sender_isbase = value; }
    inline void setQWindowCapture_SenderSignalIndex_IsBase(bool value) const { qwindowcapture_sendersignalindex_isbase = value; }
    inline void setQWindowCapture_Receivers_IsBase(bool value) const { qwindowcapture_receivers_isbase = value; }
    inline void setQWindowCapture_IsSignalConnected_IsBase(bool value) const { qwindowcapture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwindowcapture_metacall_isbase) {
            qwindowcapture_metacall_isbase = false;
            return QWindowCapture::qt_metacall(param1, param2, param3);
        } else if (qwindowcapture_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qwindowcapture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QWindowCapture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwindowcapture_event_isbase) {
            qwindowcapture_event_isbase = false;
            return QWindowCapture::event(event);
        } else if (qwindowcapture_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qwindowcapture_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWindowCapture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwindowcapture_eventfilter_isbase) {
            qwindowcapture_eventfilter_isbase = false;
            return QWindowCapture::eventFilter(watched, event);
        } else if (qwindowcapture_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qwindowcapture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWindowCapture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwindowcapture_timerevent_isbase) {
            qwindowcapture_timerevent_isbase = false;
            QWindowCapture::timerEvent(event);
        } else if (qwindowcapture_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qwindowcapture_timerevent_callback(this, cbval1);
        } else {
            QWindowCapture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwindowcapture_childevent_isbase) {
            qwindowcapture_childevent_isbase = false;
            QWindowCapture::childEvent(event);
        } else if (qwindowcapture_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qwindowcapture_childevent_callback(this, cbval1);
        } else {
            QWindowCapture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwindowcapture_customevent_isbase) {
            qwindowcapture_customevent_isbase = false;
            QWindowCapture::customEvent(event);
        } else if (qwindowcapture_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qwindowcapture_customevent_callback(this, cbval1);
        } else {
            QWindowCapture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwindowcapture_connectnotify_isbase) {
            qwindowcapture_connectnotify_isbase = false;
            QWindowCapture::connectNotify(signal);
        } else if (qwindowcapture_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwindowcapture_connectnotify_callback(this, cbval1);
        } else {
            QWindowCapture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwindowcapture_disconnectnotify_isbase) {
            qwindowcapture_disconnectnotify_isbase = false;
            QWindowCapture::disconnectNotify(signal);
        } else if (qwindowcapture_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwindowcapture_disconnectnotify_callback(this, cbval1);
        } else {
            QWindowCapture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwindowcapture_sender_isbase) {
            qwindowcapture_sender_isbase = false;
            return QWindowCapture::sender();
        } else if (qwindowcapture_sender_callback != nullptr) {
            QObject* callback_ret = qwindowcapture_sender_callback();
            return callback_ret;
        } else {
            return QWindowCapture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwindowcapture_sendersignalindex_isbase) {
            qwindowcapture_sendersignalindex_isbase = false;
            return QWindowCapture::senderSignalIndex();
        } else if (qwindowcapture_sendersignalindex_callback != nullptr) {
            int callback_ret = qwindowcapture_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QWindowCapture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwindowcapture_receivers_isbase) {
            qwindowcapture_receivers_isbase = false;
            return QWindowCapture::receivers(signal);
        } else if (qwindowcapture_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qwindowcapture_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWindowCapture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwindowcapture_issignalconnected_isbase) {
            qwindowcapture_issignalconnected_isbase = false;
            return QWindowCapture::isSignalConnected(signal);
        } else if (qwindowcapture_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qwindowcapture_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWindowCapture::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QWindowCapture_TimerEvent(QWindowCapture* self, QTimerEvent* event);
    friend void QWindowCapture_QBaseTimerEvent(QWindowCapture* self, QTimerEvent* event);
    friend void QWindowCapture_ChildEvent(QWindowCapture* self, QChildEvent* event);
    friend void QWindowCapture_QBaseChildEvent(QWindowCapture* self, QChildEvent* event);
    friend void QWindowCapture_CustomEvent(QWindowCapture* self, QEvent* event);
    friend void QWindowCapture_QBaseCustomEvent(QWindowCapture* self, QEvent* event);
    friend void QWindowCapture_ConnectNotify(QWindowCapture* self, const QMetaMethod* signal);
    friend void QWindowCapture_QBaseConnectNotify(QWindowCapture* self, const QMetaMethod* signal);
    friend void QWindowCapture_DisconnectNotify(QWindowCapture* self, const QMetaMethod* signal);
    friend void QWindowCapture_QBaseDisconnectNotify(QWindowCapture* self, const QMetaMethod* signal);
    friend QObject* QWindowCapture_Sender(const QWindowCapture* self);
    friend QObject* QWindowCapture_QBaseSender(const QWindowCapture* self);
    friend int QWindowCapture_SenderSignalIndex(const QWindowCapture* self);
    friend int QWindowCapture_QBaseSenderSignalIndex(const QWindowCapture* self);
    friend int QWindowCapture_Receivers(const QWindowCapture* self, const char* signal);
    friend int QWindowCapture_QBaseReceivers(const QWindowCapture* self, const char* signal);
    friend bool QWindowCapture_IsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal);
    friend bool QWindowCapture_QBaseIsSignalConnected(const QWindowCapture* self, const QMetaMethod* signal);
};

#endif
