#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHORIZONTALBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHORIZONTALBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalBarSeries so that we can call protected methods
class VirtualQHorizontalBarSeries final : public QHorizontalBarSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQHorizontalBarSeries = true;

    // Virtual class public types (including callbacks)
    using QHorizontalBarSeries_MetaObject_Callback = QMetaObject* (*)();
    using QHorizontalBarSeries_Metacast_Callback = void* (*)(QHorizontalBarSeries*, const char*);
    using QHorizontalBarSeries_Metacall_Callback = int (*)(QHorizontalBarSeries*, int, int, void**);
    using QHorizontalBarSeries_Type_Callback = int (*)();
    using QHorizontalBarSeries_Event_Callback = bool (*)(QHorizontalBarSeries*, QEvent*);
    using QHorizontalBarSeries_EventFilter_Callback = bool (*)(QHorizontalBarSeries*, QObject*, QEvent*);
    using QHorizontalBarSeries_TimerEvent_Callback = void (*)(QHorizontalBarSeries*, QTimerEvent*);
    using QHorizontalBarSeries_ChildEvent_Callback = void (*)(QHorizontalBarSeries*, QChildEvent*);
    using QHorizontalBarSeries_CustomEvent_Callback = void (*)(QHorizontalBarSeries*, QEvent*);
    using QHorizontalBarSeries_ConnectNotify_Callback = void (*)(QHorizontalBarSeries*, QMetaMethod*);
    using QHorizontalBarSeries_DisconnectNotify_Callback = void (*)(QHorizontalBarSeries*, QMetaMethod*);
    using QHorizontalBarSeries_Sender_Callback = QObject* (*)();
    using QHorizontalBarSeries_SenderSignalIndex_Callback = int (*)();
    using QHorizontalBarSeries_Receivers_Callback = int (*)(const QHorizontalBarSeries*, const char*);
    using QHorizontalBarSeries_IsSignalConnected_Callback = bool (*)(const QHorizontalBarSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHorizontalBarSeries_MetaObject_Callback qhorizontalbarseries_metaobject_callback = nullptr;
    QHorizontalBarSeries_Metacast_Callback qhorizontalbarseries_metacast_callback = nullptr;
    QHorizontalBarSeries_Metacall_Callback qhorizontalbarseries_metacall_callback = nullptr;
    QHorizontalBarSeries_Type_Callback qhorizontalbarseries_type_callback = nullptr;
    QHorizontalBarSeries_Event_Callback qhorizontalbarseries_event_callback = nullptr;
    QHorizontalBarSeries_EventFilter_Callback qhorizontalbarseries_eventfilter_callback = nullptr;
    QHorizontalBarSeries_TimerEvent_Callback qhorizontalbarseries_timerevent_callback = nullptr;
    QHorizontalBarSeries_ChildEvent_Callback qhorizontalbarseries_childevent_callback = nullptr;
    QHorizontalBarSeries_CustomEvent_Callback qhorizontalbarseries_customevent_callback = nullptr;
    QHorizontalBarSeries_ConnectNotify_Callback qhorizontalbarseries_connectnotify_callback = nullptr;
    QHorizontalBarSeries_DisconnectNotify_Callback qhorizontalbarseries_disconnectnotify_callback = nullptr;
    QHorizontalBarSeries_Sender_Callback qhorizontalbarseries_sender_callback = nullptr;
    QHorizontalBarSeries_SenderSignalIndex_Callback qhorizontalbarseries_sendersignalindex_callback = nullptr;
    QHorizontalBarSeries_Receivers_Callback qhorizontalbarseries_receivers_callback = nullptr;
    QHorizontalBarSeries_IsSignalConnected_Callback qhorizontalbarseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhorizontalbarseries_metaobject_isbase = false;
    mutable bool qhorizontalbarseries_metacast_isbase = false;
    mutable bool qhorizontalbarseries_metacall_isbase = false;
    mutable bool qhorizontalbarseries_type_isbase = false;
    mutable bool qhorizontalbarseries_event_isbase = false;
    mutable bool qhorizontalbarseries_eventfilter_isbase = false;
    mutable bool qhorizontalbarseries_timerevent_isbase = false;
    mutable bool qhorizontalbarseries_childevent_isbase = false;
    mutable bool qhorizontalbarseries_customevent_isbase = false;
    mutable bool qhorizontalbarseries_connectnotify_isbase = false;
    mutable bool qhorizontalbarseries_disconnectnotify_isbase = false;
    mutable bool qhorizontalbarseries_sender_isbase = false;
    mutable bool qhorizontalbarseries_sendersignalindex_isbase = false;
    mutable bool qhorizontalbarseries_receivers_isbase = false;
    mutable bool qhorizontalbarseries_issignalconnected_isbase = false;

  public:
    VirtualQHorizontalBarSeries() : QHorizontalBarSeries() {};
    VirtualQHorizontalBarSeries(QObject* parent) : QHorizontalBarSeries(parent) {};

    // Callback setters
    inline void setQHorizontalBarSeries_MetaObject_Callback(QHorizontalBarSeries_MetaObject_Callback cb) { qhorizontalbarseries_metaobject_callback = cb; }
    inline void setQHorizontalBarSeries_Metacast_Callback(QHorizontalBarSeries_Metacast_Callback cb) { qhorizontalbarseries_metacast_callback = cb; }
    inline void setQHorizontalBarSeries_Metacall_Callback(QHorizontalBarSeries_Metacall_Callback cb) { qhorizontalbarseries_metacall_callback = cb; }
    inline void setQHorizontalBarSeries_Type_Callback(QHorizontalBarSeries_Type_Callback cb) { qhorizontalbarseries_type_callback = cb; }
    inline void setQHorizontalBarSeries_Event_Callback(QHorizontalBarSeries_Event_Callback cb) { qhorizontalbarseries_event_callback = cb; }
    inline void setQHorizontalBarSeries_EventFilter_Callback(QHorizontalBarSeries_EventFilter_Callback cb) { qhorizontalbarseries_eventfilter_callback = cb; }
    inline void setQHorizontalBarSeries_TimerEvent_Callback(QHorizontalBarSeries_TimerEvent_Callback cb) { qhorizontalbarseries_timerevent_callback = cb; }
    inline void setQHorizontalBarSeries_ChildEvent_Callback(QHorizontalBarSeries_ChildEvent_Callback cb) { qhorizontalbarseries_childevent_callback = cb; }
    inline void setQHorizontalBarSeries_CustomEvent_Callback(QHorizontalBarSeries_CustomEvent_Callback cb) { qhorizontalbarseries_customevent_callback = cb; }
    inline void setQHorizontalBarSeries_ConnectNotify_Callback(QHorizontalBarSeries_ConnectNotify_Callback cb) { qhorizontalbarseries_connectnotify_callback = cb; }
    inline void setQHorizontalBarSeries_DisconnectNotify_Callback(QHorizontalBarSeries_DisconnectNotify_Callback cb) { qhorizontalbarseries_disconnectnotify_callback = cb; }
    inline void setQHorizontalBarSeries_Sender_Callback(QHorizontalBarSeries_Sender_Callback cb) { qhorizontalbarseries_sender_callback = cb; }
    inline void setQHorizontalBarSeries_SenderSignalIndex_Callback(QHorizontalBarSeries_SenderSignalIndex_Callback cb) { qhorizontalbarseries_sendersignalindex_callback = cb; }
    inline void setQHorizontalBarSeries_Receivers_Callback(QHorizontalBarSeries_Receivers_Callback cb) { qhorizontalbarseries_receivers_callback = cb; }
    inline void setQHorizontalBarSeries_IsSignalConnected_Callback(QHorizontalBarSeries_IsSignalConnected_Callback cb) { qhorizontalbarseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHorizontalBarSeries_MetaObject_IsBase(bool value) const { qhorizontalbarseries_metaobject_isbase = value; }
    inline void setQHorizontalBarSeries_Metacast_IsBase(bool value) const { qhorizontalbarseries_metacast_isbase = value; }
    inline void setQHorizontalBarSeries_Metacall_IsBase(bool value) const { qhorizontalbarseries_metacall_isbase = value; }
    inline void setQHorizontalBarSeries_Type_IsBase(bool value) const { qhorizontalbarseries_type_isbase = value; }
    inline void setQHorizontalBarSeries_Event_IsBase(bool value) const { qhorizontalbarseries_event_isbase = value; }
    inline void setQHorizontalBarSeries_EventFilter_IsBase(bool value) const { qhorizontalbarseries_eventfilter_isbase = value; }
    inline void setQHorizontalBarSeries_TimerEvent_IsBase(bool value) const { qhorizontalbarseries_timerevent_isbase = value; }
    inline void setQHorizontalBarSeries_ChildEvent_IsBase(bool value) const { qhorizontalbarseries_childevent_isbase = value; }
    inline void setQHorizontalBarSeries_CustomEvent_IsBase(bool value) const { qhorizontalbarseries_customevent_isbase = value; }
    inline void setQHorizontalBarSeries_ConnectNotify_IsBase(bool value) const { qhorizontalbarseries_connectnotify_isbase = value; }
    inline void setQHorizontalBarSeries_DisconnectNotify_IsBase(bool value) const { qhorizontalbarseries_disconnectnotify_isbase = value; }
    inline void setQHorizontalBarSeries_Sender_IsBase(bool value) const { qhorizontalbarseries_sender_isbase = value; }
    inline void setQHorizontalBarSeries_SenderSignalIndex_IsBase(bool value) const { qhorizontalbarseries_sendersignalindex_isbase = value; }
    inline void setQHorizontalBarSeries_Receivers_IsBase(bool value) const { qhorizontalbarseries_receivers_isbase = value; }
    inline void setQHorizontalBarSeries_IsSignalConnected_IsBase(bool value) const { qhorizontalbarseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhorizontalbarseries_metaobject_isbase) {
            qhorizontalbarseries_metaobject_isbase = false;
            return QHorizontalBarSeries::metaObject();
        }
        auto metaobject_cb = qhorizontalbarseries_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QHorizontalBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhorizontalbarseries_metacast_isbase) {
            qhorizontalbarseries_metacast_isbase = false;
            return QHorizontalBarSeries::qt_metacast(param1);
        }
        auto metacast_cb = qhorizontalbarseries_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QHorizontalBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalbarseries_metacall_isbase) {
            qhorizontalbarseries_metacall_isbase = false;
            return QHorizontalBarSeries::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qhorizontalbarseries_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHorizontalBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalbarseries_type_isbase) {
            qhorizontalbarseries_type_isbase = false;
            return QHorizontalBarSeries::type();
        }
        auto type_cb = qhorizontalbarseries_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QHorizontalBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalbarseries_event_isbase) {
            qhorizontalbarseries_event_isbase = false;
            return QHorizontalBarSeries::event(event);
        }
        auto event_cb = qhorizontalbarseries_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QHorizontalBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalbarseries_eventfilter_isbase) {
            qhorizontalbarseries_eventfilter_isbase = false;
            return QHorizontalBarSeries::eventFilter(watched, event);
        }
        auto eventfilter_cb = qhorizontalbarseries_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHorizontalBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalbarseries_timerevent_isbase) {
            qhorizontalbarseries_timerevent_isbase = false;
            QHorizontalBarSeries::timerEvent(event);
            return;
        }
        auto timerevent_cb = qhorizontalbarseries_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QHorizontalBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalbarseries_childevent_isbase) {
            qhorizontalbarseries_childevent_isbase = false;
            QHorizontalBarSeries::childEvent(event);
            return;
        }
        auto childevent_cb = qhorizontalbarseries_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QHorizontalBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalbarseries_customevent_isbase) {
            qhorizontalbarseries_customevent_isbase = false;
            QHorizontalBarSeries::customEvent(event);
            return;
        }
        auto customevent_cb = qhorizontalbarseries_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QHorizontalBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalbarseries_connectnotify_isbase) {
            qhorizontalbarseries_connectnotify_isbase = false;
            QHorizontalBarSeries::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qhorizontalbarseries_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QHorizontalBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalbarseries_disconnectnotify_isbase) {
            qhorizontalbarseries_disconnectnotify_isbase = false;
            QHorizontalBarSeries::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qhorizontalbarseries_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QHorizontalBarSeries::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhorizontalbarseries_sender_isbase) {
            qhorizontalbarseries_sender_isbase = false;
            return QHorizontalBarSeries::sender();
        }
        auto sender_cb = qhorizontalbarseries_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QHorizontalBarSeries::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhorizontalbarseries_sendersignalindex_isbase) {
            qhorizontalbarseries_sendersignalindex_isbase = false;
            return QHorizontalBarSeries::senderSignalIndex();
        }
        auto sendersignalindex_cb = qhorizontalbarseries_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QHorizontalBarSeries::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhorizontalbarseries_receivers_isbase) {
            qhorizontalbarseries_receivers_isbase = false;
            return QHorizontalBarSeries::receivers(signal);
        }
        auto receivers_cb = qhorizontalbarseries_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHorizontalBarSeries::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhorizontalbarseries_issignalconnected_isbase) {
            qhorizontalbarseries_issignalconnected_isbase = false;
            return QHorizontalBarSeries::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qhorizontalbarseries_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QHorizontalBarSeries::isSignalConnected(signal);
    }

    // Friend functions
    friend void QHorizontalBarSeries_TimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
    friend void QHorizontalBarSeries_SuperTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
    friend void QHorizontalBarSeries_ChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
    friend void QHorizontalBarSeries_SuperChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
    friend void QHorizontalBarSeries_CustomEvent(QHorizontalBarSeries* self, QEvent* event);
    friend void QHorizontalBarSeries_SuperCustomEvent(QHorizontalBarSeries* self, QEvent* event);
    friend void QHorizontalBarSeries_ConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_SuperConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_DisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_SuperDisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend QObject* QHorizontalBarSeries_Sender(const QHorizontalBarSeries* self);
    friend QObject* QHorizontalBarSeries_SuperSender(const QHorizontalBarSeries* self);
    friend int QHorizontalBarSeries_SenderSignalIndex(const QHorizontalBarSeries* self);
    friend int QHorizontalBarSeries_SuperSenderSignalIndex(const QHorizontalBarSeries* self);
    friend int QHorizontalBarSeries_Receivers(const QHorizontalBarSeries* self, const char* signal);
    friend int QHorizontalBarSeries_SuperReceivers(const QHorizontalBarSeries* self, const char* signal);
    friend bool QHorizontalBarSeries_IsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend bool QHorizontalBarSeries_SuperIsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal);
};

#endif
