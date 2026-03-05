#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QValueAxis so that we can call protected methods
class VirtualQValueAxis final : public QValueAxis {

  public:
    // Virtual class boolean flag
    bool isVirtualQValueAxis = true;

    // Virtual class public types (including callbacks)
    using QValueAxis_MetaObject_Callback = QMetaObject* (*)();
    using QValueAxis_Metacast_Callback = void* (*)(QValueAxis*, const char*);
    using QValueAxis_Metacall_Callback = int (*)(QValueAxis*, int, int, void**);
    using QValueAxis_Type_Callback = int (*)();
    using QValueAxis_Event_Callback = bool (*)(QValueAxis*, QEvent*);
    using QValueAxis_EventFilter_Callback = bool (*)(QValueAxis*, QObject*, QEvent*);
    using QValueAxis_TimerEvent_Callback = void (*)(QValueAxis*, QTimerEvent*);
    using QValueAxis_ChildEvent_Callback = void (*)(QValueAxis*, QChildEvent*);
    using QValueAxis_CustomEvent_Callback = void (*)(QValueAxis*, QEvent*);
    using QValueAxis_ConnectNotify_Callback = void (*)(QValueAxis*, QMetaMethod*);
    using QValueAxis_DisconnectNotify_Callback = void (*)(QValueAxis*, QMetaMethod*);
    using QValueAxis_Sender_Callback = QObject* (*)();
    using QValueAxis_SenderSignalIndex_Callback = int (*)();
    using QValueAxis_Receivers_Callback = int (*)(const QValueAxis*, const char*);
    using QValueAxis_IsSignalConnected_Callback = bool (*)(const QValueAxis*, QMetaMethod*);

  protected:
    // Instance callback storage
    QValueAxis_MetaObject_Callback qvalueaxis_metaobject_callback = nullptr;
    QValueAxis_Metacast_Callback qvalueaxis_metacast_callback = nullptr;
    QValueAxis_Metacall_Callback qvalueaxis_metacall_callback = nullptr;
    QValueAxis_Type_Callback qvalueaxis_type_callback = nullptr;
    QValueAxis_Event_Callback qvalueaxis_event_callback = nullptr;
    QValueAxis_EventFilter_Callback qvalueaxis_eventfilter_callback = nullptr;
    QValueAxis_TimerEvent_Callback qvalueaxis_timerevent_callback = nullptr;
    QValueAxis_ChildEvent_Callback qvalueaxis_childevent_callback = nullptr;
    QValueAxis_CustomEvent_Callback qvalueaxis_customevent_callback = nullptr;
    QValueAxis_ConnectNotify_Callback qvalueaxis_connectnotify_callback = nullptr;
    QValueAxis_DisconnectNotify_Callback qvalueaxis_disconnectnotify_callback = nullptr;
    QValueAxis_Sender_Callback qvalueaxis_sender_callback = nullptr;
    QValueAxis_SenderSignalIndex_Callback qvalueaxis_sendersignalindex_callback = nullptr;
    QValueAxis_Receivers_Callback qvalueaxis_receivers_callback = nullptr;
    QValueAxis_IsSignalConnected_Callback qvalueaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvalueaxis_metaobject_isbase = false;
    mutable bool qvalueaxis_metacast_isbase = false;
    mutable bool qvalueaxis_metacall_isbase = false;
    mutable bool qvalueaxis_type_isbase = false;
    mutable bool qvalueaxis_event_isbase = false;
    mutable bool qvalueaxis_eventfilter_isbase = false;
    mutable bool qvalueaxis_timerevent_isbase = false;
    mutable bool qvalueaxis_childevent_isbase = false;
    mutable bool qvalueaxis_customevent_isbase = false;
    mutable bool qvalueaxis_connectnotify_isbase = false;
    mutable bool qvalueaxis_disconnectnotify_isbase = false;
    mutable bool qvalueaxis_sender_isbase = false;
    mutable bool qvalueaxis_sendersignalindex_isbase = false;
    mutable bool qvalueaxis_receivers_isbase = false;
    mutable bool qvalueaxis_issignalconnected_isbase = false;

  public:
    VirtualQValueAxis() : QValueAxis() {};
    VirtualQValueAxis(QObject* parent) : QValueAxis(parent) {};

    // Callback setters
    inline void setQValueAxis_MetaObject_Callback(QValueAxis_MetaObject_Callback cb) { qvalueaxis_metaobject_callback = cb; }
    inline void setQValueAxis_Metacast_Callback(QValueAxis_Metacast_Callback cb) { qvalueaxis_metacast_callback = cb; }
    inline void setQValueAxis_Metacall_Callback(QValueAxis_Metacall_Callback cb) { qvalueaxis_metacall_callback = cb; }
    inline void setQValueAxis_Type_Callback(QValueAxis_Type_Callback cb) { qvalueaxis_type_callback = cb; }
    inline void setQValueAxis_Event_Callback(QValueAxis_Event_Callback cb) { qvalueaxis_event_callback = cb; }
    inline void setQValueAxis_EventFilter_Callback(QValueAxis_EventFilter_Callback cb) { qvalueaxis_eventfilter_callback = cb; }
    inline void setQValueAxis_TimerEvent_Callback(QValueAxis_TimerEvent_Callback cb) { qvalueaxis_timerevent_callback = cb; }
    inline void setQValueAxis_ChildEvent_Callback(QValueAxis_ChildEvent_Callback cb) { qvalueaxis_childevent_callback = cb; }
    inline void setQValueAxis_CustomEvent_Callback(QValueAxis_CustomEvent_Callback cb) { qvalueaxis_customevent_callback = cb; }
    inline void setQValueAxis_ConnectNotify_Callback(QValueAxis_ConnectNotify_Callback cb) { qvalueaxis_connectnotify_callback = cb; }
    inline void setQValueAxis_DisconnectNotify_Callback(QValueAxis_DisconnectNotify_Callback cb) { qvalueaxis_disconnectnotify_callback = cb; }
    inline void setQValueAxis_Sender_Callback(QValueAxis_Sender_Callback cb) { qvalueaxis_sender_callback = cb; }
    inline void setQValueAxis_SenderSignalIndex_Callback(QValueAxis_SenderSignalIndex_Callback cb) { qvalueaxis_sendersignalindex_callback = cb; }
    inline void setQValueAxis_Receivers_Callback(QValueAxis_Receivers_Callback cb) { qvalueaxis_receivers_callback = cb; }
    inline void setQValueAxis_IsSignalConnected_Callback(QValueAxis_IsSignalConnected_Callback cb) { qvalueaxis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQValueAxis_MetaObject_IsBase(bool value) const { qvalueaxis_metaobject_isbase = value; }
    inline void setQValueAxis_Metacast_IsBase(bool value) const { qvalueaxis_metacast_isbase = value; }
    inline void setQValueAxis_Metacall_IsBase(bool value) const { qvalueaxis_metacall_isbase = value; }
    inline void setQValueAxis_Type_IsBase(bool value) const { qvalueaxis_type_isbase = value; }
    inline void setQValueAxis_Event_IsBase(bool value) const { qvalueaxis_event_isbase = value; }
    inline void setQValueAxis_EventFilter_IsBase(bool value) const { qvalueaxis_eventfilter_isbase = value; }
    inline void setQValueAxis_TimerEvent_IsBase(bool value) const { qvalueaxis_timerevent_isbase = value; }
    inline void setQValueAxis_ChildEvent_IsBase(bool value) const { qvalueaxis_childevent_isbase = value; }
    inline void setQValueAxis_CustomEvent_IsBase(bool value) const { qvalueaxis_customevent_isbase = value; }
    inline void setQValueAxis_ConnectNotify_IsBase(bool value) const { qvalueaxis_connectnotify_isbase = value; }
    inline void setQValueAxis_DisconnectNotify_IsBase(bool value) const { qvalueaxis_disconnectnotify_isbase = value; }
    inline void setQValueAxis_Sender_IsBase(bool value) const { qvalueaxis_sender_isbase = value; }
    inline void setQValueAxis_SenderSignalIndex_IsBase(bool value) const { qvalueaxis_sendersignalindex_isbase = value; }
    inline void setQValueAxis_Receivers_IsBase(bool value) const { qvalueaxis_receivers_isbase = value; }
    inline void setQValueAxis_IsSignalConnected_IsBase(bool value) const { qvalueaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvalueaxis_metaobject_isbase) {
            qvalueaxis_metaobject_isbase = false;
            return QValueAxis::metaObject();
        }
        auto metaobject_cb = qvalueaxis_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QValueAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvalueaxis_metacast_isbase) {
            qvalueaxis_metacast_isbase = false;
            return QValueAxis::qt_metacast(param1);
        }
        auto metacast_cb = qvalueaxis_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QValueAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalueaxis_metacall_isbase) {
            qvalueaxis_metacall_isbase = false;
            return QValueAxis::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvalueaxis_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QValueAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qvalueaxis_type_isbase) {
            qvalueaxis_type_isbase = false;
            return QValueAxis::type();
        }
        auto type_cb = qvalueaxis_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QValueAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalueaxis_event_isbase) {
            qvalueaxis_event_isbase = false;
            return QValueAxis::event(event);
        }
        auto event_cb = qvalueaxis_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QValueAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalueaxis_eventfilter_isbase) {
            qvalueaxis_eventfilter_isbase = false;
            return QValueAxis::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvalueaxis_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QValueAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalueaxis_timerevent_isbase) {
            qvalueaxis_timerevent_isbase = false;
            QValueAxis::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvalueaxis_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QValueAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalueaxis_childevent_isbase) {
            qvalueaxis_childevent_isbase = false;
            QValueAxis::childEvent(event);
            return;
        }
        auto childevent_cb = qvalueaxis_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QValueAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalueaxis_customevent_isbase) {
            qvalueaxis_customevent_isbase = false;
            QValueAxis::customEvent(event);
            return;
        }
        auto customevent_cb = qvalueaxis_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QValueAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalueaxis_connectnotify_isbase) {
            qvalueaxis_connectnotify_isbase = false;
            QValueAxis::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvalueaxis_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QValueAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalueaxis_disconnectnotify_isbase) {
            qvalueaxis_disconnectnotify_isbase = false;
            QValueAxis::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvalueaxis_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QValueAxis::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvalueaxis_sender_isbase) {
            qvalueaxis_sender_isbase = false;
            return QValueAxis::sender();
        }
        auto sender_cb = qvalueaxis_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QValueAxis::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvalueaxis_sendersignalindex_isbase) {
            qvalueaxis_sendersignalindex_isbase = false;
            return QValueAxis::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvalueaxis_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QValueAxis::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvalueaxis_receivers_isbase) {
            qvalueaxis_receivers_isbase = false;
            return QValueAxis::receivers(signal);
        }
        auto receivers_cb = qvalueaxis_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QValueAxis::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvalueaxis_issignalconnected_isbase) {
            qvalueaxis_issignalconnected_isbase = false;
            return QValueAxis::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvalueaxis_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QValueAxis::isSignalConnected(signal);
    }

    // Friend functions
    friend void QValueAxis_TimerEvent(QValueAxis* self, QTimerEvent* event);
    friend void QValueAxis_SuperTimerEvent(QValueAxis* self, QTimerEvent* event);
    friend void QValueAxis_ChildEvent(QValueAxis* self, QChildEvent* event);
    friend void QValueAxis_SuperChildEvent(QValueAxis* self, QChildEvent* event);
    friend void QValueAxis_CustomEvent(QValueAxis* self, QEvent* event);
    friend void QValueAxis_SuperCustomEvent(QValueAxis* self, QEvent* event);
    friend void QValueAxis_ConnectNotify(QValueAxis* self, const QMetaMethod* signal);
    friend void QValueAxis_SuperConnectNotify(QValueAxis* self, const QMetaMethod* signal);
    friend void QValueAxis_DisconnectNotify(QValueAxis* self, const QMetaMethod* signal);
    friend void QValueAxis_SuperDisconnectNotify(QValueAxis* self, const QMetaMethod* signal);
    friend QObject* QValueAxis_Sender(const QValueAxis* self);
    friend QObject* QValueAxis_SuperSender(const QValueAxis* self);
    friend int QValueAxis_SenderSignalIndex(const QValueAxis* self);
    friend int QValueAxis_SuperSenderSignalIndex(const QValueAxis* self);
    friend int QValueAxis_Receivers(const QValueAxis* self, const char* signal);
    friend int QValueAxis_SuperReceivers(const QValueAxis* self, const char* signal);
    friend bool QValueAxis_IsSignalConnected(const QValueAxis* self, const QMetaMethod* signal);
    friend bool QValueAxis_SuperIsSignalConnected(const QValueAxis* self, const QMetaMethod* signal);
};

#endif
