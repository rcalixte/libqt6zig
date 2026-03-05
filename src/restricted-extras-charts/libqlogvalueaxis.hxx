#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQLOGVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQLOGVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLogValueAxis so that we can call protected methods
class VirtualQLogValueAxis final : public QLogValueAxis {

  public:
    // Virtual class boolean flag
    bool isVirtualQLogValueAxis = true;

    // Virtual class public types (including callbacks)
    using QLogValueAxis_MetaObject_Callback = QMetaObject* (*)();
    using QLogValueAxis_Metacast_Callback = void* (*)(QLogValueAxis*, const char*);
    using QLogValueAxis_Metacall_Callback = int (*)(QLogValueAxis*, int, int, void**);
    using QLogValueAxis_Type_Callback = int (*)();
    using QLogValueAxis_Event_Callback = bool (*)(QLogValueAxis*, QEvent*);
    using QLogValueAxis_EventFilter_Callback = bool (*)(QLogValueAxis*, QObject*, QEvent*);
    using QLogValueAxis_TimerEvent_Callback = void (*)(QLogValueAxis*, QTimerEvent*);
    using QLogValueAxis_ChildEvent_Callback = void (*)(QLogValueAxis*, QChildEvent*);
    using QLogValueAxis_CustomEvent_Callback = void (*)(QLogValueAxis*, QEvent*);
    using QLogValueAxis_ConnectNotify_Callback = void (*)(QLogValueAxis*, QMetaMethod*);
    using QLogValueAxis_DisconnectNotify_Callback = void (*)(QLogValueAxis*, QMetaMethod*);
    using QLogValueAxis_Sender_Callback = QObject* (*)();
    using QLogValueAxis_SenderSignalIndex_Callback = int (*)();
    using QLogValueAxis_Receivers_Callback = int (*)(const QLogValueAxis*, const char*);
    using QLogValueAxis_IsSignalConnected_Callback = bool (*)(const QLogValueAxis*, QMetaMethod*);

  protected:
    // Instance callback storage
    QLogValueAxis_MetaObject_Callback qlogvalueaxis_metaobject_callback = nullptr;
    QLogValueAxis_Metacast_Callback qlogvalueaxis_metacast_callback = nullptr;
    QLogValueAxis_Metacall_Callback qlogvalueaxis_metacall_callback = nullptr;
    QLogValueAxis_Type_Callback qlogvalueaxis_type_callback = nullptr;
    QLogValueAxis_Event_Callback qlogvalueaxis_event_callback = nullptr;
    QLogValueAxis_EventFilter_Callback qlogvalueaxis_eventfilter_callback = nullptr;
    QLogValueAxis_TimerEvent_Callback qlogvalueaxis_timerevent_callback = nullptr;
    QLogValueAxis_ChildEvent_Callback qlogvalueaxis_childevent_callback = nullptr;
    QLogValueAxis_CustomEvent_Callback qlogvalueaxis_customevent_callback = nullptr;
    QLogValueAxis_ConnectNotify_Callback qlogvalueaxis_connectnotify_callback = nullptr;
    QLogValueAxis_DisconnectNotify_Callback qlogvalueaxis_disconnectnotify_callback = nullptr;
    QLogValueAxis_Sender_Callback qlogvalueaxis_sender_callback = nullptr;
    QLogValueAxis_SenderSignalIndex_Callback qlogvalueaxis_sendersignalindex_callback = nullptr;
    QLogValueAxis_Receivers_Callback qlogvalueaxis_receivers_callback = nullptr;
    QLogValueAxis_IsSignalConnected_Callback qlogvalueaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlogvalueaxis_metaobject_isbase = false;
    mutable bool qlogvalueaxis_metacast_isbase = false;
    mutable bool qlogvalueaxis_metacall_isbase = false;
    mutable bool qlogvalueaxis_type_isbase = false;
    mutable bool qlogvalueaxis_event_isbase = false;
    mutable bool qlogvalueaxis_eventfilter_isbase = false;
    mutable bool qlogvalueaxis_timerevent_isbase = false;
    mutable bool qlogvalueaxis_childevent_isbase = false;
    mutable bool qlogvalueaxis_customevent_isbase = false;
    mutable bool qlogvalueaxis_connectnotify_isbase = false;
    mutable bool qlogvalueaxis_disconnectnotify_isbase = false;
    mutable bool qlogvalueaxis_sender_isbase = false;
    mutable bool qlogvalueaxis_sendersignalindex_isbase = false;
    mutable bool qlogvalueaxis_receivers_isbase = false;
    mutable bool qlogvalueaxis_issignalconnected_isbase = false;

  public:
    VirtualQLogValueAxis() : QLogValueAxis() {};
    VirtualQLogValueAxis(QObject* parent) : QLogValueAxis(parent) {};

    // Callback setters
    inline void setQLogValueAxis_MetaObject_Callback(QLogValueAxis_MetaObject_Callback cb) { qlogvalueaxis_metaobject_callback = cb; }
    inline void setQLogValueAxis_Metacast_Callback(QLogValueAxis_Metacast_Callback cb) { qlogvalueaxis_metacast_callback = cb; }
    inline void setQLogValueAxis_Metacall_Callback(QLogValueAxis_Metacall_Callback cb) { qlogvalueaxis_metacall_callback = cb; }
    inline void setQLogValueAxis_Type_Callback(QLogValueAxis_Type_Callback cb) { qlogvalueaxis_type_callback = cb; }
    inline void setQLogValueAxis_Event_Callback(QLogValueAxis_Event_Callback cb) { qlogvalueaxis_event_callback = cb; }
    inline void setQLogValueAxis_EventFilter_Callback(QLogValueAxis_EventFilter_Callback cb) { qlogvalueaxis_eventfilter_callback = cb; }
    inline void setQLogValueAxis_TimerEvent_Callback(QLogValueAxis_TimerEvent_Callback cb) { qlogvalueaxis_timerevent_callback = cb; }
    inline void setQLogValueAxis_ChildEvent_Callback(QLogValueAxis_ChildEvent_Callback cb) { qlogvalueaxis_childevent_callback = cb; }
    inline void setQLogValueAxis_CustomEvent_Callback(QLogValueAxis_CustomEvent_Callback cb) { qlogvalueaxis_customevent_callback = cb; }
    inline void setQLogValueAxis_ConnectNotify_Callback(QLogValueAxis_ConnectNotify_Callback cb) { qlogvalueaxis_connectnotify_callback = cb; }
    inline void setQLogValueAxis_DisconnectNotify_Callback(QLogValueAxis_DisconnectNotify_Callback cb) { qlogvalueaxis_disconnectnotify_callback = cb; }
    inline void setQLogValueAxis_Sender_Callback(QLogValueAxis_Sender_Callback cb) { qlogvalueaxis_sender_callback = cb; }
    inline void setQLogValueAxis_SenderSignalIndex_Callback(QLogValueAxis_SenderSignalIndex_Callback cb) { qlogvalueaxis_sendersignalindex_callback = cb; }
    inline void setQLogValueAxis_Receivers_Callback(QLogValueAxis_Receivers_Callback cb) { qlogvalueaxis_receivers_callback = cb; }
    inline void setQLogValueAxis_IsSignalConnected_Callback(QLogValueAxis_IsSignalConnected_Callback cb) { qlogvalueaxis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQLogValueAxis_MetaObject_IsBase(bool value) const { qlogvalueaxis_metaobject_isbase = value; }
    inline void setQLogValueAxis_Metacast_IsBase(bool value) const { qlogvalueaxis_metacast_isbase = value; }
    inline void setQLogValueAxis_Metacall_IsBase(bool value) const { qlogvalueaxis_metacall_isbase = value; }
    inline void setQLogValueAxis_Type_IsBase(bool value) const { qlogvalueaxis_type_isbase = value; }
    inline void setQLogValueAxis_Event_IsBase(bool value) const { qlogvalueaxis_event_isbase = value; }
    inline void setQLogValueAxis_EventFilter_IsBase(bool value) const { qlogvalueaxis_eventfilter_isbase = value; }
    inline void setQLogValueAxis_TimerEvent_IsBase(bool value) const { qlogvalueaxis_timerevent_isbase = value; }
    inline void setQLogValueAxis_ChildEvent_IsBase(bool value) const { qlogvalueaxis_childevent_isbase = value; }
    inline void setQLogValueAxis_CustomEvent_IsBase(bool value) const { qlogvalueaxis_customevent_isbase = value; }
    inline void setQLogValueAxis_ConnectNotify_IsBase(bool value) const { qlogvalueaxis_connectnotify_isbase = value; }
    inline void setQLogValueAxis_DisconnectNotify_IsBase(bool value) const { qlogvalueaxis_disconnectnotify_isbase = value; }
    inline void setQLogValueAxis_Sender_IsBase(bool value) const { qlogvalueaxis_sender_isbase = value; }
    inline void setQLogValueAxis_SenderSignalIndex_IsBase(bool value) const { qlogvalueaxis_sendersignalindex_isbase = value; }
    inline void setQLogValueAxis_Receivers_IsBase(bool value) const { qlogvalueaxis_receivers_isbase = value; }
    inline void setQLogValueAxis_IsSignalConnected_IsBase(bool value) const { qlogvalueaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlogvalueaxis_metaobject_isbase) {
            qlogvalueaxis_metaobject_isbase = false;
            return QLogValueAxis::metaObject();
        }
        auto metaobject_cb = qlogvalueaxis_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QLogValueAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlogvalueaxis_metacast_isbase) {
            qlogvalueaxis_metacast_isbase = false;
            return QLogValueAxis::qt_metacast(param1);
        }
        auto metacast_cb = qlogvalueaxis_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QLogValueAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlogvalueaxis_metacall_isbase) {
            qlogvalueaxis_metacall_isbase = false;
            return QLogValueAxis::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlogvalueaxis_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLogValueAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qlogvalueaxis_type_isbase) {
            qlogvalueaxis_type_isbase = false;
            return QLogValueAxis::type();
        }
        auto type_cb = qlogvalueaxis_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QLogValueAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlogvalueaxis_event_isbase) {
            qlogvalueaxis_event_isbase = false;
            return QLogValueAxis::event(event);
        }
        auto event_cb = qlogvalueaxis_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QLogValueAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlogvalueaxis_eventfilter_isbase) {
            qlogvalueaxis_eventfilter_isbase = false;
            return QLogValueAxis::eventFilter(watched, event);
        }
        auto eventfilter_cb = qlogvalueaxis_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLogValueAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlogvalueaxis_timerevent_isbase) {
            qlogvalueaxis_timerevent_isbase = false;
            QLogValueAxis::timerEvent(event);
            return;
        }
        auto timerevent_cb = qlogvalueaxis_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QLogValueAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlogvalueaxis_childevent_isbase) {
            qlogvalueaxis_childevent_isbase = false;
            QLogValueAxis::childEvent(event);
            return;
        }
        auto childevent_cb = qlogvalueaxis_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QLogValueAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlogvalueaxis_customevent_isbase) {
            qlogvalueaxis_customevent_isbase = false;
            QLogValueAxis::customEvent(event);
            return;
        }
        auto customevent_cb = qlogvalueaxis_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QLogValueAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlogvalueaxis_connectnotify_isbase) {
            qlogvalueaxis_connectnotify_isbase = false;
            QLogValueAxis::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlogvalueaxis_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QLogValueAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlogvalueaxis_disconnectnotify_isbase) {
            qlogvalueaxis_disconnectnotify_isbase = false;
            QLogValueAxis::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlogvalueaxis_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QLogValueAxis::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlogvalueaxis_sender_isbase) {
            qlogvalueaxis_sender_isbase = false;
            return QLogValueAxis::sender();
        }
        auto sender_cb = qlogvalueaxis_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QLogValueAxis::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlogvalueaxis_sendersignalindex_isbase) {
            qlogvalueaxis_sendersignalindex_isbase = false;
            return QLogValueAxis::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlogvalueaxis_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QLogValueAxis::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlogvalueaxis_receivers_isbase) {
            qlogvalueaxis_receivers_isbase = false;
            return QLogValueAxis::receivers(signal);
        }
        auto receivers_cb = qlogvalueaxis_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLogValueAxis::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlogvalueaxis_issignalconnected_isbase) {
            qlogvalueaxis_issignalconnected_isbase = false;
            return QLogValueAxis::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlogvalueaxis_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QLogValueAxis::isSignalConnected(signal);
    }

    // Friend functions
    friend void QLogValueAxis_TimerEvent(QLogValueAxis* self, QTimerEvent* event);
    friend void QLogValueAxis_SuperTimerEvent(QLogValueAxis* self, QTimerEvent* event);
    friend void QLogValueAxis_ChildEvent(QLogValueAxis* self, QChildEvent* event);
    friend void QLogValueAxis_SuperChildEvent(QLogValueAxis* self, QChildEvent* event);
    friend void QLogValueAxis_CustomEvent(QLogValueAxis* self, QEvent* event);
    friend void QLogValueAxis_SuperCustomEvent(QLogValueAxis* self, QEvent* event);
    friend void QLogValueAxis_ConnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
    friend void QLogValueAxis_SuperConnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
    friend void QLogValueAxis_DisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
    friend void QLogValueAxis_SuperDisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
    friend QObject* QLogValueAxis_Sender(const QLogValueAxis* self);
    friend QObject* QLogValueAxis_SuperSender(const QLogValueAxis* self);
    friend int QLogValueAxis_SenderSignalIndex(const QLogValueAxis* self);
    friend int QLogValueAxis_SuperSenderSignalIndex(const QLogValueAxis* self);
    friend int QLogValueAxis_Receivers(const QLogValueAxis* self, const char* signal);
    friend int QLogValueAxis_SuperReceivers(const QLogValueAxis* self, const char* signal);
    friend bool QLogValueAxis_IsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal);
    friend bool QLogValueAxis_SuperIsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal);
};

#endif
