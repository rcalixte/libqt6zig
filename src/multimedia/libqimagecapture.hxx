#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQIMAGECAPTURE_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QImageCapture so that we can call protected methods
class VirtualQImageCapture final : public QImageCapture {

  public:
    // Virtual class boolean flag
    bool isVirtualQImageCapture = true;

    // Virtual class public types (including callbacks)
    using QImageCapture_Metacall_Callback = int (*)(QImageCapture*, int, int, void**);
    using QImageCapture_Event_Callback = bool (*)(QImageCapture*, QEvent*);
    using QImageCapture_EventFilter_Callback = bool (*)(QImageCapture*, QObject*, QEvent*);
    using QImageCapture_TimerEvent_Callback = void (*)(QImageCapture*, QTimerEvent*);
    using QImageCapture_ChildEvent_Callback = void (*)(QImageCapture*, QChildEvent*);
    using QImageCapture_CustomEvent_Callback = void (*)(QImageCapture*, QEvent*);
    using QImageCapture_ConnectNotify_Callback = void (*)(QImageCapture*, QMetaMethod*);
    using QImageCapture_DisconnectNotify_Callback = void (*)(QImageCapture*, QMetaMethod*);
    using QImageCapture_Sender_Callback = QObject* (*)();
    using QImageCapture_SenderSignalIndex_Callback = int (*)();
    using QImageCapture_Receivers_Callback = int (*)(const QImageCapture*, const char*);
    using QImageCapture_IsSignalConnected_Callback = bool (*)(const QImageCapture*, QMetaMethod*);

  protected:
    // Instance callback storage
    QImageCapture_Metacall_Callback qimagecapture_metacall_callback = nullptr;
    QImageCapture_Event_Callback qimagecapture_event_callback = nullptr;
    QImageCapture_EventFilter_Callback qimagecapture_eventfilter_callback = nullptr;
    QImageCapture_TimerEvent_Callback qimagecapture_timerevent_callback = nullptr;
    QImageCapture_ChildEvent_Callback qimagecapture_childevent_callback = nullptr;
    QImageCapture_CustomEvent_Callback qimagecapture_customevent_callback = nullptr;
    QImageCapture_ConnectNotify_Callback qimagecapture_connectnotify_callback = nullptr;
    QImageCapture_DisconnectNotify_Callback qimagecapture_disconnectnotify_callback = nullptr;
    QImageCapture_Sender_Callback qimagecapture_sender_callback = nullptr;
    QImageCapture_SenderSignalIndex_Callback qimagecapture_sendersignalindex_callback = nullptr;
    QImageCapture_Receivers_Callback qimagecapture_receivers_callback = nullptr;
    QImageCapture_IsSignalConnected_Callback qimagecapture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qimagecapture_metacall_isbase = false;
    mutable bool qimagecapture_event_isbase = false;
    mutable bool qimagecapture_eventfilter_isbase = false;
    mutable bool qimagecapture_timerevent_isbase = false;
    mutable bool qimagecapture_childevent_isbase = false;
    mutable bool qimagecapture_customevent_isbase = false;
    mutable bool qimagecapture_connectnotify_isbase = false;
    mutable bool qimagecapture_disconnectnotify_isbase = false;
    mutable bool qimagecapture_sender_isbase = false;
    mutable bool qimagecapture_sendersignalindex_isbase = false;
    mutable bool qimagecapture_receivers_isbase = false;
    mutable bool qimagecapture_issignalconnected_isbase = false;

  public:
    VirtualQImageCapture() : QImageCapture() {};
    VirtualQImageCapture(QObject* parent) : QImageCapture(parent) {};

    ~VirtualQImageCapture() {
        qimagecapture_metacall_callback = nullptr;
        qimagecapture_event_callback = nullptr;
        qimagecapture_eventfilter_callback = nullptr;
        qimagecapture_timerevent_callback = nullptr;
        qimagecapture_childevent_callback = nullptr;
        qimagecapture_customevent_callback = nullptr;
        qimagecapture_connectnotify_callback = nullptr;
        qimagecapture_disconnectnotify_callback = nullptr;
        qimagecapture_sender_callback = nullptr;
        qimagecapture_sendersignalindex_callback = nullptr;
        qimagecapture_receivers_callback = nullptr;
        qimagecapture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQImageCapture_Metacall_Callback(QImageCapture_Metacall_Callback cb) { qimagecapture_metacall_callback = cb; }
    inline void setQImageCapture_Event_Callback(QImageCapture_Event_Callback cb) { qimagecapture_event_callback = cb; }
    inline void setQImageCapture_EventFilter_Callback(QImageCapture_EventFilter_Callback cb) { qimagecapture_eventfilter_callback = cb; }
    inline void setQImageCapture_TimerEvent_Callback(QImageCapture_TimerEvent_Callback cb) { qimagecapture_timerevent_callback = cb; }
    inline void setQImageCapture_ChildEvent_Callback(QImageCapture_ChildEvent_Callback cb) { qimagecapture_childevent_callback = cb; }
    inline void setQImageCapture_CustomEvent_Callback(QImageCapture_CustomEvent_Callback cb) { qimagecapture_customevent_callback = cb; }
    inline void setQImageCapture_ConnectNotify_Callback(QImageCapture_ConnectNotify_Callback cb) { qimagecapture_connectnotify_callback = cb; }
    inline void setQImageCapture_DisconnectNotify_Callback(QImageCapture_DisconnectNotify_Callback cb) { qimagecapture_disconnectnotify_callback = cb; }
    inline void setQImageCapture_Sender_Callback(QImageCapture_Sender_Callback cb) { qimagecapture_sender_callback = cb; }
    inline void setQImageCapture_SenderSignalIndex_Callback(QImageCapture_SenderSignalIndex_Callback cb) { qimagecapture_sendersignalindex_callback = cb; }
    inline void setQImageCapture_Receivers_Callback(QImageCapture_Receivers_Callback cb) { qimagecapture_receivers_callback = cb; }
    inline void setQImageCapture_IsSignalConnected_Callback(QImageCapture_IsSignalConnected_Callback cb) { qimagecapture_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQImageCapture_Metacall_IsBase(bool value) const { qimagecapture_metacall_isbase = value; }
    inline void setQImageCapture_Event_IsBase(bool value) const { qimagecapture_event_isbase = value; }
    inline void setQImageCapture_EventFilter_IsBase(bool value) const { qimagecapture_eventfilter_isbase = value; }
    inline void setQImageCapture_TimerEvent_IsBase(bool value) const { qimagecapture_timerevent_isbase = value; }
    inline void setQImageCapture_ChildEvent_IsBase(bool value) const { qimagecapture_childevent_isbase = value; }
    inline void setQImageCapture_CustomEvent_IsBase(bool value) const { qimagecapture_customevent_isbase = value; }
    inline void setQImageCapture_ConnectNotify_IsBase(bool value) const { qimagecapture_connectnotify_isbase = value; }
    inline void setQImageCapture_DisconnectNotify_IsBase(bool value) const { qimagecapture_disconnectnotify_isbase = value; }
    inline void setQImageCapture_Sender_IsBase(bool value) const { qimagecapture_sender_isbase = value; }
    inline void setQImageCapture_SenderSignalIndex_IsBase(bool value) const { qimagecapture_sendersignalindex_isbase = value; }
    inline void setQImageCapture_Receivers_IsBase(bool value) const { qimagecapture_receivers_isbase = value; }
    inline void setQImageCapture_IsSignalConnected_IsBase(bool value) const { qimagecapture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qimagecapture_metacall_isbase) {
            qimagecapture_metacall_isbase = false;
            return QImageCapture::qt_metacall(param1, param2, param3);
        } else if (qimagecapture_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qimagecapture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QImageCapture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qimagecapture_event_isbase) {
            qimagecapture_event_isbase = false;
            return QImageCapture::event(event);
        } else if (qimagecapture_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qimagecapture_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QImageCapture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qimagecapture_eventfilter_isbase) {
            qimagecapture_eventfilter_isbase = false;
            return QImageCapture::eventFilter(watched, event);
        } else if (qimagecapture_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qimagecapture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QImageCapture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qimagecapture_timerevent_isbase) {
            qimagecapture_timerevent_isbase = false;
            QImageCapture::timerEvent(event);
        } else if (qimagecapture_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qimagecapture_timerevent_callback(this, cbval1);
        } else {
            QImageCapture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qimagecapture_childevent_isbase) {
            qimagecapture_childevent_isbase = false;
            QImageCapture::childEvent(event);
        } else if (qimagecapture_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qimagecapture_childevent_callback(this, cbval1);
        } else {
            QImageCapture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qimagecapture_customevent_isbase) {
            qimagecapture_customevent_isbase = false;
            QImageCapture::customEvent(event);
        } else if (qimagecapture_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qimagecapture_customevent_callback(this, cbval1);
        } else {
            QImageCapture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qimagecapture_connectnotify_isbase) {
            qimagecapture_connectnotify_isbase = false;
            QImageCapture::connectNotify(signal);
        } else if (qimagecapture_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qimagecapture_connectnotify_callback(this, cbval1);
        } else {
            QImageCapture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qimagecapture_disconnectnotify_isbase) {
            qimagecapture_disconnectnotify_isbase = false;
            QImageCapture::disconnectNotify(signal);
        } else if (qimagecapture_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qimagecapture_disconnectnotify_callback(this, cbval1);
        } else {
            QImageCapture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qimagecapture_sender_isbase) {
            qimagecapture_sender_isbase = false;
            return QImageCapture::sender();
        } else if (qimagecapture_sender_callback != nullptr) {
            QObject* callback_ret = qimagecapture_sender_callback();
            return callback_ret;
        } else {
            return QImageCapture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qimagecapture_sendersignalindex_isbase) {
            qimagecapture_sendersignalindex_isbase = false;
            return QImageCapture::senderSignalIndex();
        } else if (qimagecapture_sendersignalindex_callback != nullptr) {
            int callback_ret = qimagecapture_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QImageCapture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qimagecapture_receivers_isbase) {
            qimagecapture_receivers_isbase = false;
            return QImageCapture::receivers(signal);
        } else if (qimagecapture_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qimagecapture_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QImageCapture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qimagecapture_issignalconnected_isbase) {
            qimagecapture_issignalconnected_isbase = false;
            return QImageCapture::isSignalConnected(signal);
        } else if (qimagecapture_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qimagecapture_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QImageCapture::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QImageCapture_TimerEvent(QImageCapture* self, QTimerEvent* event);
    friend void QImageCapture_QBaseTimerEvent(QImageCapture* self, QTimerEvent* event);
    friend void QImageCapture_ChildEvent(QImageCapture* self, QChildEvent* event);
    friend void QImageCapture_QBaseChildEvent(QImageCapture* self, QChildEvent* event);
    friend void QImageCapture_CustomEvent(QImageCapture* self, QEvent* event);
    friend void QImageCapture_QBaseCustomEvent(QImageCapture* self, QEvent* event);
    friend void QImageCapture_ConnectNotify(QImageCapture* self, const QMetaMethod* signal);
    friend void QImageCapture_QBaseConnectNotify(QImageCapture* self, const QMetaMethod* signal);
    friend void QImageCapture_DisconnectNotify(QImageCapture* self, const QMetaMethod* signal);
    friend void QImageCapture_QBaseDisconnectNotify(QImageCapture* self, const QMetaMethod* signal);
    friend QObject* QImageCapture_Sender(const QImageCapture* self);
    friend QObject* QImageCapture_QBaseSender(const QImageCapture* self);
    friend int QImageCapture_SenderSignalIndex(const QImageCapture* self);
    friend int QImageCapture_QBaseSenderSignalIndex(const QImageCapture* self);
    friend int QImageCapture_Receivers(const QImageCapture* self, const char* signal);
    friend int QImageCapture_QBaseReceivers(const QImageCapture* self, const char* signal);
    friend bool QImageCapture_IsSignalConnected(const QImageCapture* self, const QMetaMethod* signal);
    friend bool QImageCapture_QBaseIsSignalConnected(const QImageCapture* self, const QMetaMethod* signal);
};

#endif
