#pragma once
#ifndef SRCC_LIBVIRTUALQSIGNALMAPPER_H
#define SRCC_LIBVIRTUALQSIGNALMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSignalMapper so that we can call protected methods
class VirtualQSignalMapper final : public QSignalMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQSignalMapper = true;

    // Virtual class public types (including callbacks)
    using QSignalMapper_MetaObject_Callback = QMetaObject* (*)();
    using QSignalMapper_Metacast_Callback = void* (*)(QSignalMapper*, const char*);
    using QSignalMapper_Metacall_Callback = int (*)(QSignalMapper*, int, int, void**);
    using QSignalMapper_Event_Callback = bool (*)(QSignalMapper*, QEvent*);
    using QSignalMapper_EventFilter_Callback = bool (*)(QSignalMapper*, QObject*, QEvent*);
    using QSignalMapper_TimerEvent_Callback = void (*)(QSignalMapper*, QTimerEvent*);
    using QSignalMapper_ChildEvent_Callback = void (*)(QSignalMapper*, QChildEvent*);
    using QSignalMapper_CustomEvent_Callback = void (*)(QSignalMapper*, QEvent*);
    using QSignalMapper_ConnectNotify_Callback = void (*)(QSignalMapper*, QMetaMethod*);
    using QSignalMapper_DisconnectNotify_Callback = void (*)(QSignalMapper*, QMetaMethod*);
    using QSignalMapper_Sender_Callback = QObject* (*)();
    using QSignalMapper_SenderSignalIndex_Callback = int (*)();
    using QSignalMapper_Receivers_Callback = int (*)(const QSignalMapper*, const char*);
    using QSignalMapper_IsSignalConnected_Callback = bool (*)(const QSignalMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSignalMapper_MetaObject_Callback qsignalmapper_metaobject_callback = nullptr;
    QSignalMapper_Metacast_Callback qsignalmapper_metacast_callback = nullptr;
    QSignalMapper_Metacall_Callback qsignalmapper_metacall_callback = nullptr;
    QSignalMapper_Event_Callback qsignalmapper_event_callback = nullptr;
    QSignalMapper_EventFilter_Callback qsignalmapper_eventfilter_callback = nullptr;
    QSignalMapper_TimerEvent_Callback qsignalmapper_timerevent_callback = nullptr;
    QSignalMapper_ChildEvent_Callback qsignalmapper_childevent_callback = nullptr;
    QSignalMapper_CustomEvent_Callback qsignalmapper_customevent_callback = nullptr;
    QSignalMapper_ConnectNotify_Callback qsignalmapper_connectnotify_callback = nullptr;
    QSignalMapper_DisconnectNotify_Callback qsignalmapper_disconnectnotify_callback = nullptr;
    QSignalMapper_Sender_Callback qsignalmapper_sender_callback = nullptr;
    QSignalMapper_SenderSignalIndex_Callback qsignalmapper_sendersignalindex_callback = nullptr;
    QSignalMapper_Receivers_Callback qsignalmapper_receivers_callback = nullptr;
    QSignalMapper_IsSignalConnected_Callback qsignalmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsignalmapper_metaobject_isbase = false;
    mutable bool qsignalmapper_metacast_isbase = false;
    mutable bool qsignalmapper_metacall_isbase = false;
    mutable bool qsignalmapper_event_isbase = false;
    mutable bool qsignalmapper_eventfilter_isbase = false;
    mutable bool qsignalmapper_timerevent_isbase = false;
    mutable bool qsignalmapper_childevent_isbase = false;
    mutable bool qsignalmapper_customevent_isbase = false;
    mutable bool qsignalmapper_connectnotify_isbase = false;
    mutable bool qsignalmapper_disconnectnotify_isbase = false;
    mutable bool qsignalmapper_sender_isbase = false;
    mutable bool qsignalmapper_sendersignalindex_isbase = false;
    mutable bool qsignalmapper_receivers_isbase = false;
    mutable bool qsignalmapper_issignalconnected_isbase = false;

  public:
    VirtualQSignalMapper() : QSignalMapper() {};
    VirtualQSignalMapper(QObject* parent) : QSignalMapper(parent) {};

    // Callback setters
    inline void setQSignalMapper_MetaObject_Callback(QSignalMapper_MetaObject_Callback cb) { qsignalmapper_metaobject_callback = cb; }
    inline void setQSignalMapper_Metacast_Callback(QSignalMapper_Metacast_Callback cb) { qsignalmapper_metacast_callback = cb; }
    inline void setQSignalMapper_Metacall_Callback(QSignalMapper_Metacall_Callback cb) { qsignalmapper_metacall_callback = cb; }
    inline void setQSignalMapper_Event_Callback(QSignalMapper_Event_Callback cb) { qsignalmapper_event_callback = cb; }
    inline void setQSignalMapper_EventFilter_Callback(QSignalMapper_EventFilter_Callback cb) { qsignalmapper_eventfilter_callback = cb; }
    inline void setQSignalMapper_TimerEvent_Callback(QSignalMapper_TimerEvent_Callback cb) { qsignalmapper_timerevent_callback = cb; }
    inline void setQSignalMapper_ChildEvent_Callback(QSignalMapper_ChildEvent_Callback cb) { qsignalmapper_childevent_callback = cb; }
    inline void setQSignalMapper_CustomEvent_Callback(QSignalMapper_CustomEvent_Callback cb) { qsignalmapper_customevent_callback = cb; }
    inline void setQSignalMapper_ConnectNotify_Callback(QSignalMapper_ConnectNotify_Callback cb) { qsignalmapper_connectnotify_callback = cb; }
    inline void setQSignalMapper_DisconnectNotify_Callback(QSignalMapper_DisconnectNotify_Callback cb) { qsignalmapper_disconnectnotify_callback = cb; }
    inline void setQSignalMapper_Sender_Callback(QSignalMapper_Sender_Callback cb) { qsignalmapper_sender_callback = cb; }
    inline void setQSignalMapper_SenderSignalIndex_Callback(QSignalMapper_SenderSignalIndex_Callback cb) { qsignalmapper_sendersignalindex_callback = cb; }
    inline void setQSignalMapper_Receivers_Callback(QSignalMapper_Receivers_Callback cb) { qsignalmapper_receivers_callback = cb; }
    inline void setQSignalMapper_IsSignalConnected_Callback(QSignalMapper_IsSignalConnected_Callback cb) { qsignalmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSignalMapper_MetaObject_IsBase(bool value) const { qsignalmapper_metaobject_isbase = value; }
    inline void setQSignalMapper_Metacast_IsBase(bool value) const { qsignalmapper_metacast_isbase = value; }
    inline void setQSignalMapper_Metacall_IsBase(bool value) const { qsignalmapper_metacall_isbase = value; }
    inline void setQSignalMapper_Event_IsBase(bool value) const { qsignalmapper_event_isbase = value; }
    inline void setQSignalMapper_EventFilter_IsBase(bool value) const { qsignalmapper_eventfilter_isbase = value; }
    inline void setQSignalMapper_TimerEvent_IsBase(bool value) const { qsignalmapper_timerevent_isbase = value; }
    inline void setQSignalMapper_ChildEvent_IsBase(bool value) const { qsignalmapper_childevent_isbase = value; }
    inline void setQSignalMapper_CustomEvent_IsBase(bool value) const { qsignalmapper_customevent_isbase = value; }
    inline void setQSignalMapper_ConnectNotify_IsBase(bool value) const { qsignalmapper_connectnotify_isbase = value; }
    inline void setQSignalMapper_DisconnectNotify_IsBase(bool value) const { qsignalmapper_disconnectnotify_isbase = value; }
    inline void setQSignalMapper_Sender_IsBase(bool value) const { qsignalmapper_sender_isbase = value; }
    inline void setQSignalMapper_SenderSignalIndex_IsBase(bool value) const { qsignalmapper_sendersignalindex_isbase = value; }
    inline void setQSignalMapper_Receivers_IsBase(bool value) const { qsignalmapper_receivers_isbase = value; }
    inline void setQSignalMapper_IsSignalConnected_IsBase(bool value) const { qsignalmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsignalmapper_metaobject_isbase) {
            qsignalmapper_metaobject_isbase = false;
            return QSignalMapper::metaObject();
        }
        auto metaobject_cb = qsignalmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSignalMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsignalmapper_metacast_isbase) {
            qsignalmapper_metacast_isbase = false;
            return QSignalMapper::qt_metacast(param1);
        }
        auto metacast_cb = qsignalmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsignalmapper_metacall_isbase) {
            qsignalmapper_metacall_isbase = false;
            return QSignalMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsignalmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSignalMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsignalmapper_event_isbase) {
            qsignalmapper_event_isbase = false;
            return QSignalMapper::event(event);
        }
        auto event_cb = qsignalmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsignalmapper_eventfilter_isbase) {
            qsignalmapper_eventfilter_isbase = false;
            return QSignalMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsignalmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSignalMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsignalmapper_timerevent_isbase) {
            qsignalmapper_timerevent_isbase = false;
            QSignalMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsignalmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSignalMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsignalmapper_childevent_isbase) {
            qsignalmapper_childevent_isbase = false;
            QSignalMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qsignalmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSignalMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsignalmapper_customevent_isbase) {
            qsignalmapper_customevent_isbase = false;
            QSignalMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qsignalmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSignalMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsignalmapper_connectnotify_isbase) {
            qsignalmapper_connectnotify_isbase = false;
            QSignalMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsignalmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSignalMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsignalmapper_disconnectnotify_isbase) {
            qsignalmapper_disconnectnotify_isbase = false;
            QSignalMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsignalmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSignalMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsignalmapper_sender_isbase) {
            qsignalmapper_sender_isbase = false;
            return QSignalMapper::sender();
        }
        auto sender_cb = qsignalmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSignalMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsignalmapper_sendersignalindex_isbase) {
            qsignalmapper_sendersignalindex_isbase = false;
            return QSignalMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsignalmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSignalMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsignalmapper_receivers_isbase) {
            qsignalmapper_receivers_isbase = false;
            return QSignalMapper::receivers(signal);
        }
        auto receivers_cb = qsignalmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSignalMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsignalmapper_issignalconnected_isbase) {
            qsignalmapper_issignalconnected_isbase = false;
            return QSignalMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsignalmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QSignalMapper_TimerEvent(QSignalMapper* self, QTimerEvent* event);
    friend void QSignalMapper_SuperTimerEvent(QSignalMapper* self, QTimerEvent* event);
    friend void QSignalMapper_ChildEvent(QSignalMapper* self, QChildEvent* event);
    friend void QSignalMapper_SuperChildEvent(QSignalMapper* self, QChildEvent* event);
    friend void QSignalMapper_CustomEvent(QSignalMapper* self, QEvent* event);
    friend void QSignalMapper_SuperCustomEvent(QSignalMapper* self, QEvent* event);
    friend void QSignalMapper_ConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_SuperConnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_DisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend void QSignalMapper_SuperDisconnectNotify(QSignalMapper* self, const QMetaMethod* signal);
    friend QObject* QSignalMapper_Sender(const QSignalMapper* self);
    friend QObject* QSignalMapper_SuperSender(const QSignalMapper* self);
    friend int QSignalMapper_SenderSignalIndex(const QSignalMapper* self);
    friend int QSignalMapper_SuperSenderSignalIndex(const QSignalMapper* self);
    friend int QSignalMapper_Receivers(const QSignalMapper* self, const char* signal);
    friend int QSignalMapper_SuperReceivers(const QSignalMapper* self, const char* signal);
    friend bool QSignalMapper_IsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal);
    friend bool QSignalMapper_SuperIsSignalConnected(const QSignalMapper* self, const QMetaMethod* signal);
};

#endif
