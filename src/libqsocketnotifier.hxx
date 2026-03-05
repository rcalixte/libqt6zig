#pragma once
#ifndef SRCC_LIBVIRTUALQSOCKETNOTIFIER_H
#define SRCC_LIBVIRTUALQSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSocketNotifier so that we can call protected methods
class VirtualQSocketNotifier final : public QSocketNotifier {

  public:
    // Virtual class boolean flag
    bool isVirtualQSocketNotifier = true;

    // Virtual class public types (including callbacks)
    using QSocketNotifier_MetaObject_Callback = QMetaObject* (*)();
    using QSocketNotifier_Metacast_Callback = void* (*)(QSocketNotifier*, const char*);
    using QSocketNotifier_Metacall_Callback = int (*)(QSocketNotifier*, int, int, void**);
    using QSocketNotifier_Event_Callback = bool (*)(QSocketNotifier*, QEvent*);
    using QSocketNotifier_EventFilter_Callback = bool (*)(QSocketNotifier*, QObject*, QEvent*);
    using QSocketNotifier_TimerEvent_Callback = void (*)(QSocketNotifier*, QTimerEvent*);
    using QSocketNotifier_ChildEvent_Callback = void (*)(QSocketNotifier*, QChildEvent*);
    using QSocketNotifier_CustomEvent_Callback = void (*)(QSocketNotifier*, QEvent*);
    using QSocketNotifier_ConnectNotify_Callback = void (*)(QSocketNotifier*, QMetaMethod*);
    using QSocketNotifier_DisconnectNotify_Callback = void (*)(QSocketNotifier*, QMetaMethod*);
    using QSocketNotifier_Sender_Callback = QObject* (*)();
    using QSocketNotifier_SenderSignalIndex_Callback = int (*)();
    using QSocketNotifier_Receivers_Callback = int (*)(const QSocketNotifier*, const char*);
    using QSocketNotifier_IsSignalConnected_Callback = bool (*)(const QSocketNotifier*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSocketNotifier_MetaObject_Callback qsocketnotifier_metaobject_callback = nullptr;
    QSocketNotifier_Metacast_Callback qsocketnotifier_metacast_callback = nullptr;
    QSocketNotifier_Metacall_Callback qsocketnotifier_metacall_callback = nullptr;
    QSocketNotifier_Event_Callback qsocketnotifier_event_callback = nullptr;
    QSocketNotifier_EventFilter_Callback qsocketnotifier_eventfilter_callback = nullptr;
    QSocketNotifier_TimerEvent_Callback qsocketnotifier_timerevent_callback = nullptr;
    QSocketNotifier_ChildEvent_Callback qsocketnotifier_childevent_callback = nullptr;
    QSocketNotifier_CustomEvent_Callback qsocketnotifier_customevent_callback = nullptr;
    QSocketNotifier_ConnectNotify_Callback qsocketnotifier_connectnotify_callback = nullptr;
    QSocketNotifier_DisconnectNotify_Callback qsocketnotifier_disconnectnotify_callback = nullptr;
    QSocketNotifier_Sender_Callback qsocketnotifier_sender_callback = nullptr;
    QSocketNotifier_SenderSignalIndex_Callback qsocketnotifier_sendersignalindex_callback = nullptr;
    QSocketNotifier_Receivers_Callback qsocketnotifier_receivers_callback = nullptr;
    QSocketNotifier_IsSignalConnected_Callback qsocketnotifier_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsocketnotifier_metaobject_isbase = false;
    mutable bool qsocketnotifier_metacast_isbase = false;
    mutable bool qsocketnotifier_metacall_isbase = false;
    mutable bool qsocketnotifier_event_isbase = false;
    mutable bool qsocketnotifier_eventfilter_isbase = false;
    mutable bool qsocketnotifier_timerevent_isbase = false;
    mutable bool qsocketnotifier_childevent_isbase = false;
    mutable bool qsocketnotifier_customevent_isbase = false;
    mutable bool qsocketnotifier_connectnotify_isbase = false;
    mutable bool qsocketnotifier_disconnectnotify_isbase = false;
    mutable bool qsocketnotifier_sender_isbase = false;
    mutable bool qsocketnotifier_sendersignalindex_isbase = false;
    mutable bool qsocketnotifier_receivers_isbase = false;
    mutable bool qsocketnotifier_issignalconnected_isbase = false;

  public:
    VirtualQSocketNotifier(QSocketNotifier::Type param1) : QSocketNotifier(param1) {};
    VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2) : QSocketNotifier(socket, param2) {};
    VirtualQSocketNotifier(QSocketNotifier::Type param1, QObject* parent) : QSocketNotifier(param1, parent) {};
    VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2, QObject* parent) : QSocketNotifier(socket, param2, parent) {};

    // Callback setters
    inline void setQSocketNotifier_MetaObject_Callback(QSocketNotifier_MetaObject_Callback cb) { qsocketnotifier_metaobject_callback = cb; }
    inline void setQSocketNotifier_Metacast_Callback(QSocketNotifier_Metacast_Callback cb) { qsocketnotifier_metacast_callback = cb; }
    inline void setQSocketNotifier_Metacall_Callback(QSocketNotifier_Metacall_Callback cb) { qsocketnotifier_metacall_callback = cb; }
    inline void setQSocketNotifier_Event_Callback(QSocketNotifier_Event_Callback cb) { qsocketnotifier_event_callback = cb; }
    inline void setQSocketNotifier_EventFilter_Callback(QSocketNotifier_EventFilter_Callback cb) { qsocketnotifier_eventfilter_callback = cb; }
    inline void setQSocketNotifier_TimerEvent_Callback(QSocketNotifier_TimerEvent_Callback cb) { qsocketnotifier_timerevent_callback = cb; }
    inline void setQSocketNotifier_ChildEvent_Callback(QSocketNotifier_ChildEvent_Callback cb) { qsocketnotifier_childevent_callback = cb; }
    inline void setQSocketNotifier_CustomEvent_Callback(QSocketNotifier_CustomEvent_Callback cb) { qsocketnotifier_customevent_callback = cb; }
    inline void setQSocketNotifier_ConnectNotify_Callback(QSocketNotifier_ConnectNotify_Callback cb) { qsocketnotifier_connectnotify_callback = cb; }
    inline void setQSocketNotifier_DisconnectNotify_Callback(QSocketNotifier_DisconnectNotify_Callback cb) { qsocketnotifier_disconnectnotify_callback = cb; }
    inline void setQSocketNotifier_Sender_Callback(QSocketNotifier_Sender_Callback cb) { qsocketnotifier_sender_callback = cb; }
    inline void setQSocketNotifier_SenderSignalIndex_Callback(QSocketNotifier_SenderSignalIndex_Callback cb) { qsocketnotifier_sendersignalindex_callback = cb; }
    inline void setQSocketNotifier_Receivers_Callback(QSocketNotifier_Receivers_Callback cb) { qsocketnotifier_receivers_callback = cb; }
    inline void setQSocketNotifier_IsSignalConnected_Callback(QSocketNotifier_IsSignalConnected_Callback cb) { qsocketnotifier_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSocketNotifier_MetaObject_IsBase(bool value) const { qsocketnotifier_metaobject_isbase = value; }
    inline void setQSocketNotifier_Metacast_IsBase(bool value) const { qsocketnotifier_metacast_isbase = value; }
    inline void setQSocketNotifier_Metacall_IsBase(bool value) const { qsocketnotifier_metacall_isbase = value; }
    inline void setQSocketNotifier_Event_IsBase(bool value) const { qsocketnotifier_event_isbase = value; }
    inline void setQSocketNotifier_EventFilter_IsBase(bool value) const { qsocketnotifier_eventfilter_isbase = value; }
    inline void setQSocketNotifier_TimerEvent_IsBase(bool value) const { qsocketnotifier_timerevent_isbase = value; }
    inline void setQSocketNotifier_ChildEvent_IsBase(bool value) const { qsocketnotifier_childevent_isbase = value; }
    inline void setQSocketNotifier_CustomEvent_IsBase(bool value) const { qsocketnotifier_customevent_isbase = value; }
    inline void setQSocketNotifier_ConnectNotify_IsBase(bool value) const { qsocketnotifier_connectnotify_isbase = value; }
    inline void setQSocketNotifier_DisconnectNotify_IsBase(bool value) const { qsocketnotifier_disconnectnotify_isbase = value; }
    inline void setQSocketNotifier_Sender_IsBase(bool value) const { qsocketnotifier_sender_isbase = value; }
    inline void setQSocketNotifier_SenderSignalIndex_IsBase(bool value) const { qsocketnotifier_sendersignalindex_isbase = value; }
    inline void setQSocketNotifier_Receivers_IsBase(bool value) const { qsocketnotifier_receivers_isbase = value; }
    inline void setQSocketNotifier_IsSignalConnected_IsBase(bool value) const { qsocketnotifier_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsocketnotifier_metaobject_isbase) {
            qsocketnotifier_metaobject_isbase = false;
            return QSocketNotifier::metaObject();
        }
        auto metaobject_cb = qsocketnotifier_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSocketNotifier::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsocketnotifier_metacast_isbase) {
            qsocketnotifier_metacast_isbase = false;
            return QSocketNotifier::qt_metacast(param1);
        }
        auto metacast_cb = qsocketnotifier_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSocketNotifier::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsocketnotifier_metacall_isbase) {
            qsocketnotifier_metacall_isbase = false;
            return QSocketNotifier::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsocketnotifier_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSocketNotifier::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsocketnotifier_event_isbase) {
            qsocketnotifier_event_isbase = false;
            return QSocketNotifier::event(param1);
        }
        auto event_cb = qsocketnotifier_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSocketNotifier::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsocketnotifier_eventfilter_isbase) {
            qsocketnotifier_eventfilter_isbase = false;
            return QSocketNotifier::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsocketnotifier_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSocketNotifier::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsocketnotifier_timerevent_isbase) {
            qsocketnotifier_timerevent_isbase = false;
            QSocketNotifier::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsocketnotifier_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSocketNotifier::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsocketnotifier_childevent_isbase) {
            qsocketnotifier_childevent_isbase = false;
            QSocketNotifier::childEvent(event);
            return;
        }
        auto childevent_cb = qsocketnotifier_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSocketNotifier::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsocketnotifier_customevent_isbase) {
            qsocketnotifier_customevent_isbase = false;
            QSocketNotifier::customEvent(event);
            return;
        }
        auto customevent_cb = qsocketnotifier_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSocketNotifier::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsocketnotifier_connectnotify_isbase) {
            qsocketnotifier_connectnotify_isbase = false;
            QSocketNotifier::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsocketnotifier_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSocketNotifier::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsocketnotifier_disconnectnotify_isbase) {
            qsocketnotifier_disconnectnotify_isbase = false;
            QSocketNotifier::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsocketnotifier_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSocketNotifier::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsocketnotifier_sender_isbase) {
            qsocketnotifier_sender_isbase = false;
            return QSocketNotifier::sender();
        }
        auto sender_cb = qsocketnotifier_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSocketNotifier::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsocketnotifier_sendersignalindex_isbase) {
            qsocketnotifier_sendersignalindex_isbase = false;
            return QSocketNotifier::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsocketnotifier_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSocketNotifier::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsocketnotifier_receivers_isbase) {
            qsocketnotifier_receivers_isbase = false;
            return QSocketNotifier::receivers(signal);
        }
        auto receivers_cb = qsocketnotifier_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSocketNotifier::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsocketnotifier_issignalconnected_isbase) {
            qsocketnotifier_issignalconnected_isbase = false;
            return QSocketNotifier::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsocketnotifier_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSocketNotifier::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1);
    friend bool QSocketNotifier_SuperEvent(QSocketNotifier* self, QEvent* param1);
    friend void QSocketNotifier_TimerEvent(QSocketNotifier* self, QTimerEvent* event);
    friend void QSocketNotifier_SuperTimerEvent(QSocketNotifier* self, QTimerEvent* event);
    friend void QSocketNotifier_ChildEvent(QSocketNotifier* self, QChildEvent* event);
    friend void QSocketNotifier_SuperChildEvent(QSocketNotifier* self, QChildEvent* event);
    friend void QSocketNotifier_CustomEvent(QSocketNotifier* self, QEvent* event);
    friend void QSocketNotifier_SuperCustomEvent(QSocketNotifier* self, QEvent* event);
    friend void QSocketNotifier_ConnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
    friend void QSocketNotifier_SuperConnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
    friend void QSocketNotifier_DisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
    friend void QSocketNotifier_SuperDisconnectNotify(QSocketNotifier* self, const QMetaMethod* signal);
    friend QObject* QSocketNotifier_Sender(const QSocketNotifier* self);
    friend QObject* QSocketNotifier_SuperSender(const QSocketNotifier* self);
    friend int QSocketNotifier_SenderSignalIndex(const QSocketNotifier* self);
    friend int QSocketNotifier_SuperSenderSignalIndex(const QSocketNotifier* self);
    friend int QSocketNotifier_Receivers(const QSocketNotifier* self, const char* signal);
    friend int QSocketNotifier_SuperReceivers(const QSocketNotifier* self, const char* signal);
    friend bool QSocketNotifier_IsSignalConnected(const QSocketNotifier* self, const QMetaMethod* signal);
    friend bool QSocketNotifier_SuperIsSignalConnected(const QSocketNotifier* self, const QMetaMethod* signal);
};

#endif
