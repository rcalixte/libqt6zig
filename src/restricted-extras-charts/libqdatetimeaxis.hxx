#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQDATETIMEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQDATETIMEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDateTimeAxis so that we can call protected methods
class VirtualQDateTimeAxis final : public QDateTimeAxis {

  public:
    // Virtual class boolean flag
    bool isVirtualQDateTimeAxis = true;

    // Virtual class public types (including callbacks)
    using QDateTimeAxis_MetaObject_Callback = QMetaObject* (*)();
    using QDateTimeAxis_Metacast_Callback = void* (*)(QDateTimeAxis*, const char*);
    using QDateTimeAxis_Metacall_Callback = int (*)(QDateTimeAxis*, int, int, void**);
    using QDateTimeAxis_Type_Callback = int (*)();
    using QDateTimeAxis_Event_Callback = bool (*)(QDateTimeAxis*, QEvent*);
    using QDateTimeAxis_EventFilter_Callback = bool (*)(QDateTimeAxis*, QObject*, QEvent*);
    using QDateTimeAxis_TimerEvent_Callback = void (*)(QDateTimeAxis*, QTimerEvent*);
    using QDateTimeAxis_ChildEvent_Callback = void (*)(QDateTimeAxis*, QChildEvent*);
    using QDateTimeAxis_CustomEvent_Callback = void (*)(QDateTimeAxis*, QEvent*);
    using QDateTimeAxis_ConnectNotify_Callback = void (*)(QDateTimeAxis*, QMetaMethod*);
    using QDateTimeAxis_DisconnectNotify_Callback = void (*)(QDateTimeAxis*, QMetaMethod*);
    using QDateTimeAxis_Sender_Callback = QObject* (*)();
    using QDateTimeAxis_SenderSignalIndex_Callback = int (*)();
    using QDateTimeAxis_Receivers_Callback = int (*)(const QDateTimeAxis*, const char*);
    using QDateTimeAxis_IsSignalConnected_Callback = bool (*)(const QDateTimeAxis*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDateTimeAxis_MetaObject_Callback qdatetimeaxis_metaobject_callback = nullptr;
    QDateTimeAxis_Metacast_Callback qdatetimeaxis_metacast_callback = nullptr;
    QDateTimeAxis_Metacall_Callback qdatetimeaxis_metacall_callback = nullptr;
    QDateTimeAxis_Type_Callback qdatetimeaxis_type_callback = nullptr;
    QDateTimeAxis_Event_Callback qdatetimeaxis_event_callback = nullptr;
    QDateTimeAxis_EventFilter_Callback qdatetimeaxis_eventfilter_callback = nullptr;
    QDateTimeAxis_TimerEvent_Callback qdatetimeaxis_timerevent_callback = nullptr;
    QDateTimeAxis_ChildEvent_Callback qdatetimeaxis_childevent_callback = nullptr;
    QDateTimeAxis_CustomEvent_Callback qdatetimeaxis_customevent_callback = nullptr;
    QDateTimeAxis_ConnectNotify_Callback qdatetimeaxis_connectnotify_callback = nullptr;
    QDateTimeAxis_DisconnectNotify_Callback qdatetimeaxis_disconnectnotify_callback = nullptr;
    QDateTimeAxis_Sender_Callback qdatetimeaxis_sender_callback = nullptr;
    QDateTimeAxis_SenderSignalIndex_Callback qdatetimeaxis_sendersignalindex_callback = nullptr;
    QDateTimeAxis_Receivers_Callback qdatetimeaxis_receivers_callback = nullptr;
    QDateTimeAxis_IsSignalConnected_Callback qdatetimeaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdatetimeaxis_metaobject_isbase = false;
    mutable bool qdatetimeaxis_metacast_isbase = false;
    mutable bool qdatetimeaxis_metacall_isbase = false;
    mutable bool qdatetimeaxis_type_isbase = false;
    mutable bool qdatetimeaxis_event_isbase = false;
    mutable bool qdatetimeaxis_eventfilter_isbase = false;
    mutable bool qdatetimeaxis_timerevent_isbase = false;
    mutable bool qdatetimeaxis_childevent_isbase = false;
    mutable bool qdatetimeaxis_customevent_isbase = false;
    mutable bool qdatetimeaxis_connectnotify_isbase = false;
    mutable bool qdatetimeaxis_disconnectnotify_isbase = false;
    mutable bool qdatetimeaxis_sender_isbase = false;
    mutable bool qdatetimeaxis_sendersignalindex_isbase = false;
    mutable bool qdatetimeaxis_receivers_isbase = false;
    mutable bool qdatetimeaxis_issignalconnected_isbase = false;

  public:
    VirtualQDateTimeAxis() : QDateTimeAxis() {};
    VirtualQDateTimeAxis(QObject* parent) : QDateTimeAxis(parent) {};

    // Callback setters
    inline void setQDateTimeAxis_MetaObject_Callback(QDateTimeAxis_MetaObject_Callback cb) { qdatetimeaxis_metaobject_callback = cb; }
    inline void setQDateTimeAxis_Metacast_Callback(QDateTimeAxis_Metacast_Callback cb) { qdatetimeaxis_metacast_callback = cb; }
    inline void setQDateTimeAxis_Metacall_Callback(QDateTimeAxis_Metacall_Callback cb) { qdatetimeaxis_metacall_callback = cb; }
    inline void setQDateTimeAxis_Type_Callback(QDateTimeAxis_Type_Callback cb) { qdatetimeaxis_type_callback = cb; }
    inline void setQDateTimeAxis_Event_Callback(QDateTimeAxis_Event_Callback cb) { qdatetimeaxis_event_callback = cb; }
    inline void setQDateTimeAxis_EventFilter_Callback(QDateTimeAxis_EventFilter_Callback cb) { qdatetimeaxis_eventfilter_callback = cb; }
    inline void setQDateTimeAxis_TimerEvent_Callback(QDateTimeAxis_TimerEvent_Callback cb) { qdatetimeaxis_timerevent_callback = cb; }
    inline void setQDateTimeAxis_ChildEvent_Callback(QDateTimeAxis_ChildEvent_Callback cb) { qdatetimeaxis_childevent_callback = cb; }
    inline void setQDateTimeAxis_CustomEvent_Callback(QDateTimeAxis_CustomEvent_Callback cb) { qdatetimeaxis_customevent_callback = cb; }
    inline void setQDateTimeAxis_ConnectNotify_Callback(QDateTimeAxis_ConnectNotify_Callback cb) { qdatetimeaxis_connectnotify_callback = cb; }
    inline void setQDateTimeAxis_DisconnectNotify_Callback(QDateTimeAxis_DisconnectNotify_Callback cb) { qdatetimeaxis_disconnectnotify_callback = cb; }
    inline void setQDateTimeAxis_Sender_Callback(QDateTimeAxis_Sender_Callback cb) { qdatetimeaxis_sender_callback = cb; }
    inline void setQDateTimeAxis_SenderSignalIndex_Callback(QDateTimeAxis_SenderSignalIndex_Callback cb) { qdatetimeaxis_sendersignalindex_callback = cb; }
    inline void setQDateTimeAxis_Receivers_Callback(QDateTimeAxis_Receivers_Callback cb) { qdatetimeaxis_receivers_callback = cb; }
    inline void setQDateTimeAxis_IsSignalConnected_Callback(QDateTimeAxis_IsSignalConnected_Callback cb) { qdatetimeaxis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDateTimeAxis_MetaObject_IsBase(bool value) const { qdatetimeaxis_metaobject_isbase = value; }
    inline void setQDateTimeAxis_Metacast_IsBase(bool value) const { qdatetimeaxis_metacast_isbase = value; }
    inline void setQDateTimeAxis_Metacall_IsBase(bool value) const { qdatetimeaxis_metacall_isbase = value; }
    inline void setQDateTimeAxis_Type_IsBase(bool value) const { qdatetimeaxis_type_isbase = value; }
    inline void setQDateTimeAxis_Event_IsBase(bool value) const { qdatetimeaxis_event_isbase = value; }
    inline void setQDateTimeAxis_EventFilter_IsBase(bool value) const { qdatetimeaxis_eventfilter_isbase = value; }
    inline void setQDateTimeAxis_TimerEvent_IsBase(bool value) const { qdatetimeaxis_timerevent_isbase = value; }
    inline void setQDateTimeAxis_ChildEvent_IsBase(bool value) const { qdatetimeaxis_childevent_isbase = value; }
    inline void setQDateTimeAxis_CustomEvent_IsBase(bool value) const { qdatetimeaxis_customevent_isbase = value; }
    inline void setQDateTimeAxis_ConnectNotify_IsBase(bool value) const { qdatetimeaxis_connectnotify_isbase = value; }
    inline void setQDateTimeAxis_DisconnectNotify_IsBase(bool value) const { qdatetimeaxis_disconnectnotify_isbase = value; }
    inline void setQDateTimeAxis_Sender_IsBase(bool value) const { qdatetimeaxis_sender_isbase = value; }
    inline void setQDateTimeAxis_SenderSignalIndex_IsBase(bool value) const { qdatetimeaxis_sendersignalindex_isbase = value; }
    inline void setQDateTimeAxis_Receivers_IsBase(bool value) const { qdatetimeaxis_receivers_isbase = value; }
    inline void setQDateTimeAxis_IsSignalConnected_IsBase(bool value) const { qdatetimeaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdatetimeaxis_metaobject_isbase) {
            qdatetimeaxis_metaobject_isbase = false;
            return QDateTimeAxis::metaObject();
        }
        auto metaobject_cb = qdatetimeaxis_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDateTimeAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdatetimeaxis_metacast_isbase) {
            qdatetimeaxis_metacast_isbase = false;
            return QDateTimeAxis::qt_metacast(param1);
        }
        auto metacast_cb = qdatetimeaxis_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatetimeaxis_metacall_isbase) {
            qdatetimeaxis_metacall_isbase = false;
            return QDateTimeAxis::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdatetimeaxis_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qdatetimeaxis_type_isbase) {
            qdatetimeaxis_type_isbase = false;
            return QDateTimeAxis::type();
        }
        auto type_cb = qdatetimeaxis_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QDateTimeAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatetimeaxis_event_isbase) {
            qdatetimeaxis_event_isbase = false;
            return QDateTimeAxis::event(event);
        }
        auto event_cb = qdatetimeaxis_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatetimeaxis_eventfilter_isbase) {
            qdatetimeaxis_eventfilter_isbase = false;
            return QDateTimeAxis::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdatetimeaxis_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDateTimeAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatetimeaxis_timerevent_isbase) {
            qdatetimeaxis_timerevent_isbase = false;
            QDateTimeAxis::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdatetimeaxis_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDateTimeAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatetimeaxis_childevent_isbase) {
            qdatetimeaxis_childevent_isbase = false;
            QDateTimeAxis::childEvent(event);
            return;
        }
        auto childevent_cb = qdatetimeaxis_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDateTimeAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatetimeaxis_customevent_isbase) {
            qdatetimeaxis_customevent_isbase = false;
            QDateTimeAxis::customEvent(event);
            return;
        }
        auto customevent_cb = qdatetimeaxis_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDateTimeAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatetimeaxis_connectnotify_isbase) {
            qdatetimeaxis_connectnotify_isbase = false;
            QDateTimeAxis::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdatetimeaxis_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDateTimeAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatetimeaxis_disconnectnotify_isbase) {
            qdatetimeaxis_disconnectnotify_isbase = false;
            QDateTimeAxis::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdatetimeaxis_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDateTimeAxis::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdatetimeaxis_sender_isbase) {
            qdatetimeaxis_sender_isbase = false;
            return QDateTimeAxis::sender();
        }
        auto sender_cb = qdatetimeaxis_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDateTimeAxis::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdatetimeaxis_sendersignalindex_isbase) {
            qdatetimeaxis_sendersignalindex_isbase = false;
            return QDateTimeAxis::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdatetimeaxis_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDateTimeAxis::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdatetimeaxis_receivers_isbase) {
            qdatetimeaxis_receivers_isbase = false;
            return QDateTimeAxis::receivers(signal);
        }
        auto receivers_cb = qdatetimeaxis_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeAxis::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdatetimeaxis_issignalconnected_isbase) {
            qdatetimeaxis_issignalconnected_isbase = false;
            return QDateTimeAxis::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdatetimeaxis_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeAxis::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDateTimeAxis_TimerEvent(QDateTimeAxis* self, QTimerEvent* event);
    friend void QDateTimeAxis_SuperTimerEvent(QDateTimeAxis* self, QTimerEvent* event);
    friend void QDateTimeAxis_ChildEvent(QDateTimeAxis* self, QChildEvent* event);
    friend void QDateTimeAxis_SuperChildEvent(QDateTimeAxis* self, QChildEvent* event);
    friend void QDateTimeAxis_CustomEvent(QDateTimeAxis* self, QEvent* event);
    friend void QDateTimeAxis_SuperCustomEvent(QDateTimeAxis* self, QEvent* event);
    friend void QDateTimeAxis_ConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
    friend void QDateTimeAxis_SuperConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
    friend void QDateTimeAxis_DisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
    friend void QDateTimeAxis_SuperDisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
    friend QObject* QDateTimeAxis_Sender(const QDateTimeAxis* self);
    friend QObject* QDateTimeAxis_SuperSender(const QDateTimeAxis* self);
    friend int QDateTimeAxis_SenderSignalIndex(const QDateTimeAxis* self);
    friend int QDateTimeAxis_SuperSenderSignalIndex(const QDateTimeAxis* self);
    friend int QDateTimeAxis_Receivers(const QDateTimeAxis* self, const char* signal);
    friend int QDateTimeAxis_SuperReceivers(const QDateTimeAxis* self, const char* signal);
    friend bool QDateTimeAxis_IsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal);
    friend bool QDateTimeAxis_SuperIsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal);
};

#endif
