#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIADEVICES_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIADEVICES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaDevices so that we can call protected methods
class VirtualQMediaDevices final : public QMediaDevices {

  public:
    // Virtual class boolean flag
    bool isVirtualQMediaDevices = true;

    // Virtual class public types (including callbacks)
    using QMediaDevices_Metacall_Callback = int (*)(QMediaDevices*, int, int, void**);
    using QMediaDevices_ConnectNotify_Callback = void (*)(QMediaDevices*, QMetaMethod*);
    using QMediaDevices_Event_Callback = bool (*)(QMediaDevices*, QEvent*);
    using QMediaDevices_EventFilter_Callback = bool (*)(QMediaDevices*, QObject*, QEvent*);
    using QMediaDevices_TimerEvent_Callback = void (*)(QMediaDevices*, QTimerEvent*);
    using QMediaDevices_ChildEvent_Callback = void (*)(QMediaDevices*, QChildEvent*);
    using QMediaDevices_CustomEvent_Callback = void (*)(QMediaDevices*, QEvent*);
    using QMediaDevices_DisconnectNotify_Callback = void (*)(QMediaDevices*, QMetaMethod*);
    using QMediaDevices_Sender_Callback = QObject* (*)();
    using QMediaDevices_SenderSignalIndex_Callback = int (*)();
    using QMediaDevices_Receivers_Callback = int (*)(const QMediaDevices*, const char*);
    using QMediaDevices_IsSignalConnected_Callback = bool (*)(const QMediaDevices*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMediaDevices_Metacall_Callback qmediadevices_metacall_callback = nullptr;
    QMediaDevices_ConnectNotify_Callback qmediadevices_connectnotify_callback = nullptr;
    QMediaDevices_Event_Callback qmediadevices_event_callback = nullptr;
    QMediaDevices_EventFilter_Callback qmediadevices_eventfilter_callback = nullptr;
    QMediaDevices_TimerEvent_Callback qmediadevices_timerevent_callback = nullptr;
    QMediaDevices_ChildEvent_Callback qmediadevices_childevent_callback = nullptr;
    QMediaDevices_CustomEvent_Callback qmediadevices_customevent_callback = nullptr;
    QMediaDevices_DisconnectNotify_Callback qmediadevices_disconnectnotify_callback = nullptr;
    QMediaDevices_Sender_Callback qmediadevices_sender_callback = nullptr;
    QMediaDevices_SenderSignalIndex_Callback qmediadevices_sendersignalindex_callback = nullptr;
    QMediaDevices_Receivers_Callback qmediadevices_receivers_callback = nullptr;
    QMediaDevices_IsSignalConnected_Callback qmediadevices_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmediadevices_metacall_isbase = false;
    mutable bool qmediadevices_connectnotify_isbase = false;
    mutable bool qmediadevices_event_isbase = false;
    mutable bool qmediadevices_eventfilter_isbase = false;
    mutable bool qmediadevices_timerevent_isbase = false;
    mutable bool qmediadevices_childevent_isbase = false;
    mutable bool qmediadevices_customevent_isbase = false;
    mutable bool qmediadevices_disconnectnotify_isbase = false;
    mutable bool qmediadevices_sender_isbase = false;
    mutable bool qmediadevices_sendersignalindex_isbase = false;
    mutable bool qmediadevices_receivers_isbase = false;
    mutable bool qmediadevices_issignalconnected_isbase = false;

  public:
    VirtualQMediaDevices() : QMediaDevices() {};
    VirtualQMediaDevices(QObject* parent) : QMediaDevices(parent) {};

    ~VirtualQMediaDevices() {
        qmediadevices_metacall_callback = nullptr;
        qmediadevices_connectnotify_callback = nullptr;
        qmediadevices_event_callback = nullptr;
        qmediadevices_eventfilter_callback = nullptr;
        qmediadevices_timerevent_callback = nullptr;
        qmediadevices_childevent_callback = nullptr;
        qmediadevices_customevent_callback = nullptr;
        qmediadevices_disconnectnotify_callback = nullptr;
        qmediadevices_sender_callback = nullptr;
        qmediadevices_sendersignalindex_callback = nullptr;
        qmediadevices_receivers_callback = nullptr;
        qmediadevices_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQMediaDevices_Metacall_Callback(QMediaDevices_Metacall_Callback cb) { qmediadevices_metacall_callback = cb; }
    inline void setQMediaDevices_ConnectNotify_Callback(QMediaDevices_ConnectNotify_Callback cb) { qmediadevices_connectnotify_callback = cb; }
    inline void setQMediaDevices_Event_Callback(QMediaDevices_Event_Callback cb) { qmediadevices_event_callback = cb; }
    inline void setQMediaDevices_EventFilter_Callback(QMediaDevices_EventFilter_Callback cb) { qmediadevices_eventfilter_callback = cb; }
    inline void setQMediaDevices_TimerEvent_Callback(QMediaDevices_TimerEvent_Callback cb) { qmediadevices_timerevent_callback = cb; }
    inline void setQMediaDevices_ChildEvent_Callback(QMediaDevices_ChildEvent_Callback cb) { qmediadevices_childevent_callback = cb; }
    inline void setQMediaDevices_CustomEvent_Callback(QMediaDevices_CustomEvent_Callback cb) { qmediadevices_customevent_callback = cb; }
    inline void setQMediaDevices_DisconnectNotify_Callback(QMediaDevices_DisconnectNotify_Callback cb) { qmediadevices_disconnectnotify_callback = cb; }
    inline void setQMediaDevices_Sender_Callback(QMediaDevices_Sender_Callback cb) { qmediadevices_sender_callback = cb; }
    inline void setQMediaDevices_SenderSignalIndex_Callback(QMediaDevices_SenderSignalIndex_Callback cb) { qmediadevices_sendersignalindex_callback = cb; }
    inline void setQMediaDevices_Receivers_Callback(QMediaDevices_Receivers_Callback cb) { qmediadevices_receivers_callback = cb; }
    inline void setQMediaDevices_IsSignalConnected_Callback(QMediaDevices_IsSignalConnected_Callback cb) { qmediadevices_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMediaDevices_Metacall_IsBase(bool value) const { qmediadevices_metacall_isbase = value; }
    inline void setQMediaDevices_ConnectNotify_IsBase(bool value) const { qmediadevices_connectnotify_isbase = value; }
    inline void setQMediaDevices_Event_IsBase(bool value) const { qmediadevices_event_isbase = value; }
    inline void setQMediaDevices_EventFilter_IsBase(bool value) const { qmediadevices_eventfilter_isbase = value; }
    inline void setQMediaDevices_TimerEvent_IsBase(bool value) const { qmediadevices_timerevent_isbase = value; }
    inline void setQMediaDevices_ChildEvent_IsBase(bool value) const { qmediadevices_childevent_isbase = value; }
    inline void setQMediaDevices_CustomEvent_IsBase(bool value) const { qmediadevices_customevent_isbase = value; }
    inline void setQMediaDevices_DisconnectNotify_IsBase(bool value) const { qmediadevices_disconnectnotify_isbase = value; }
    inline void setQMediaDevices_Sender_IsBase(bool value) const { qmediadevices_sender_isbase = value; }
    inline void setQMediaDevices_SenderSignalIndex_IsBase(bool value) const { qmediadevices_sendersignalindex_isbase = value; }
    inline void setQMediaDevices_Receivers_IsBase(bool value) const { qmediadevices_receivers_isbase = value; }
    inline void setQMediaDevices_IsSignalConnected_IsBase(bool value) const { qmediadevices_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediadevices_metacall_isbase) {
            qmediadevices_metacall_isbase = false;
            return QMediaDevices::qt_metacall(param1, param2, param3);
        } else if (qmediadevices_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmediadevices_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMediaDevices::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediadevices_connectnotify_isbase) {
            qmediadevices_connectnotify_isbase = false;
            QMediaDevices::connectNotify(signal);
        } else if (qmediadevices_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmediadevices_connectnotify_callback(this, cbval1);
        } else {
            QMediaDevices::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediadevices_event_isbase) {
            qmediadevices_event_isbase = false;
            return QMediaDevices::event(event);
        } else if (qmediadevices_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmediadevices_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMediaDevices::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediadevices_eventfilter_isbase) {
            qmediadevices_eventfilter_isbase = false;
            return QMediaDevices::eventFilter(watched, event);
        } else if (qmediadevices_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qmediadevices_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMediaDevices::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediadevices_timerevent_isbase) {
            qmediadevices_timerevent_isbase = false;
            QMediaDevices::timerEvent(event);
        } else if (qmediadevices_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qmediadevices_timerevent_callback(this, cbval1);
        } else {
            QMediaDevices::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediadevices_childevent_isbase) {
            qmediadevices_childevent_isbase = false;
            QMediaDevices::childEvent(event);
        } else if (qmediadevices_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmediadevices_childevent_callback(this, cbval1);
        } else {
            QMediaDevices::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediadevices_customevent_isbase) {
            qmediadevices_customevent_isbase = false;
            QMediaDevices::customEvent(event);
        } else if (qmediadevices_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmediadevices_customevent_callback(this, cbval1);
        } else {
            QMediaDevices::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediadevices_disconnectnotify_isbase) {
            qmediadevices_disconnectnotify_isbase = false;
            QMediaDevices::disconnectNotify(signal);
        } else if (qmediadevices_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmediadevices_disconnectnotify_callback(this, cbval1);
        } else {
            QMediaDevices::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediadevices_sender_isbase) {
            qmediadevices_sender_isbase = false;
            return QMediaDevices::sender();
        } else if (qmediadevices_sender_callback != nullptr) {
            QObject* callback_ret = qmediadevices_sender_callback();
            return callback_ret;
        } else {
            return QMediaDevices::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediadevices_sendersignalindex_isbase) {
            qmediadevices_sendersignalindex_isbase = false;
            return QMediaDevices::senderSignalIndex();
        } else if (qmediadevices_sendersignalindex_callback != nullptr) {
            int callback_ret = qmediadevices_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMediaDevices::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediadevices_receivers_isbase) {
            qmediadevices_receivers_isbase = false;
            return QMediaDevices::receivers(signal);
        } else if (qmediadevices_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmediadevices_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMediaDevices::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediadevices_issignalconnected_isbase) {
            qmediadevices_issignalconnected_isbase = false;
            return QMediaDevices::isSignalConnected(signal);
        } else if (qmediadevices_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmediadevices_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMediaDevices::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
    friend void QMediaDevices_QBaseConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
    friend void QMediaDevices_TimerEvent(QMediaDevices* self, QTimerEvent* event);
    friend void QMediaDevices_QBaseTimerEvent(QMediaDevices* self, QTimerEvent* event);
    friend void QMediaDevices_ChildEvent(QMediaDevices* self, QChildEvent* event);
    friend void QMediaDevices_QBaseChildEvent(QMediaDevices* self, QChildEvent* event);
    friend void QMediaDevices_CustomEvent(QMediaDevices* self, QEvent* event);
    friend void QMediaDevices_QBaseCustomEvent(QMediaDevices* self, QEvent* event);
    friend void QMediaDevices_DisconnectNotify(QMediaDevices* self, const QMetaMethod* signal);
    friend void QMediaDevices_QBaseDisconnectNotify(QMediaDevices* self, const QMetaMethod* signal);
    friend QObject* QMediaDevices_Sender(const QMediaDevices* self);
    friend QObject* QMediaDevices_QBaseSender(const QMediaDevices* self);
    friend int QMediaDevices_SenderSignalIndex(const QMediaDevices* self);
    friend int QMediaDevices_QBaseSenderSignalIndex(const QMediaDevices* self);
    friend int QMediaDevices_Receivers(const QMediaDevices* self, const char* signal);
    friend int QMediaDevices_QBaseReceivers(const QMediaDevices* self, const char* signal);
    friend bool QMediaDevices_IsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal);
    friend bool QMediaDevices_QBaseIsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal);
};

#endif
