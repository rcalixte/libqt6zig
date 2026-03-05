#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQAREASERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQAREASERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAreaSeries so that we can call protected methods
class VirtualQAreaSeries final : public QAreaSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQAreaSeries = true;

    // Virtual class public types (including callbacks)
    using QAreaSeries_MetaObject_Callback = QMetaObject* (*)();
    using QAreaSeries_Metacast_Callback = void* (*)(QAreaSeries*, const char*);
    using QAreaSeries_Metacall_Callback = int (*)(QAreaSeries*, int, int, void**);
    using QAreaSeries_Type_Callback = int (*)();
    using QAreaSeries_Event_Callback = bool (*)(QAreaSeries*, QEvent*);
    using QAreaSeries_EventFilter_Callback = bool (*)(QAreaSeries*, QObject*, QEvent*);
    using QAreaSeries_TimerEvent_Callback = void (*)(QAreaSeries*, QTimerEvent*);
    using QAreaSeries_ChildEvent_Callback = void (*)(QAreaSeries*, QChildEvent*);
    using QAreaSeries_CustomEvent_Callback = void (*)(QAreaSeries*, QEvent*);
    using QAreaSeries_ConnectNotify_Callback = void (*)(QAreaSeries*, QMetaMethod*);
    using QAreaSeries_DisconnectNotify_Callback = void (*)(QAreaSeries*, QMetaMethod*);
    using QAreaSeries_Sender_Callback = QObject* (*)();
    using QAreaSeries_SenderSignalIndex_Callback = int (*)();
    using QAreaSeries_Receivers_Callback = int (*)(const QAreaSeries*, const char*);
    using QAreaSeries_IsSignalConnected_Callback = bool (*)(const QAreaSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAreaSeries_MetaObject_Callback qareaseries_metaobject_callback = nullptr;
    QAreaSeries_Metacast_Callback qareaseries_metacast_callback = nullptr;
    QAreaSeries_Metacall_Callback qareaseries_metacall_callback = nullptr;
    QAreaSeries_Type_Callback qareaseries_type_callback = nullptr;
    QAreaSeries_Event_Callback qareaseries_event_callback = nullptr;
    QAreaSeries_EventFilter_Callback qareaseries_eventfilter_callback = nullptr;
    QAreaSeries_TimerEvent_Callback qareaseries_timerevent_callback = nullptr;
    QAreaSeries_ChildEvent_Callback qareaseries_childevent_callback = nullptr;
    QAreaSeries_CustomEvent_Callback qareaseries_customevent_callback = nullptr;
    QAreaSeries_ConnectNotify_Callback qareaseries_connectnotify_callback = nullptr;
    QAreaSeries_DisconnectNotify_Callback qareaseries_disconnectnotify_callback = nullptr;
    QAreaSeries_Sender_Callback qareaseries_sender_callback = nullptr;
    QAreaSeries_SenderSignalIndex_Callback qareaseries_sendersignalindex_callback = nullptr;
    QAreaSeries_Receivers_Callback qareaseries_receivers_callback = nullptr;
    QAreaSeries_IsSignalConnected_Callback qareaseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qareaseries_metaobject_isbase = false;
    mutable bool qareaseries_metacast_isbase = false;
    mutable bool qareaseries_metacall_isbase = false;
    mutable bool qareaseries_type_isbase = false;
    mutable bool qareaseries_event_isbase = false;
    mutable bool qareaseries_eventfilter_isbase = false;
    mutable bool qareaseries_timerevent_isbase = false;
    mutable bool qareaseries_childevent_isbase = false;
    mutable bool qareaseries_customevent_isbase = false;
    mutable bool qareaseries_connectnotify_isbase = false;
    mutable bool qareaseries_disconnectnotify_isbase = false;
    mutable bool qareaseries_sender_isbase = false;
    mutable bool qareaseries_sendersignalindex_isbase = false;
    mutable bool qareaseries_receivers_isbase = false;
    mutable bool qareaseries_issignalconnected_isbase = false;

  public:
    VirtualQAreaSeries() : QAreaSeries() {};
    VirtualQAreaSeries(QLineSeries* upperSeries) : QAreaSeries(upperSeries) {};
    VirtualQAreaSeries(QObject* parent) : QAreaSeries(parent) {};
    VirtualQAreaSeries(QLineSeries* upperSeries, QLineSeries* lowerSeries) : QAreaSeries(upperSeries, lowerSeries) {};

    // Callback setters
    inline void setQAreaSeries_MetaObject_Callback(QAreaSeries_MetaObject_Callback cb) { qareaseries_metaobject_callback = cb; }
    inline void setQAreaSeries_Metacast_Callback(QAreaSeries_Metacast_Callback cb) { qareaseries_metacast_callback = cb; }
    inline void setQAreaSeries_Metacall_Callback(QAreaSeries_Metacall_Callback cb) { qareaseries_metacall_callback = cb; }
    inline void setQAreaSeries_Type_Callback(QAreaSeries_Type_Callback cb) { qareaseries_type_callback = cb; }
    inline void setQAreaSeries_Event_Callback(QAreaSeries_Event_Callback cb) { qareaseries_event_callback = cb; }
    inline void setQAreaSeries_EventFilter_Callback(QAreaSeries_EventFilter_Callback cb) { qareaseries_eventfilter_callback = cb; }
    inline void setQAreaSeries_TimerEvent_Callback(QAreaSeries_TimerEvent_Callback cb) { qareaseries_timerevent_callback = cb; }
    inline void setQAreaSeries_ChildEvent_Callback(QAreaSeries_ChildEvent_Callback cb) { qareaseries_childevent_callback = cb; }
    inline void setQAreaSeries_CustomEvent_Callback(QAreaSeries_CustomEvent_Callback cb) { qareaseries_customevent_callback = cb; }
    inline void setQAreaSeries_ConnectNotify_Callback(QAreaSeries_ConnectNotify_Callback cb) { qareaseries_connectnotify_callback = cb; }
    inline void setQAreaSeries_DisconnectNotify_Callback(QAreaSeries_DisconnectNotify_Callback cb) { qareaseries_disconnectnotify_callback = cb; }
    inline void setQAreaSeries_Sender_Callback(QAreaSeries_Sender_Callback cb) { qareaseries_sender_callback = cb; }
    inline void setQAreaSeries_SenderSignalIndex_Callback(QAreaSeries_SenderSignalIndex_Callback cb) { qareaseries_sendersignalindex_callback = cb; }
    inline void setQAreaSeries_Receivers_Callback(QAreaSeries_Receivers_Callback cb) { qareaseries_receivers_callback = cb; }
    inline void setQAreaSeries_IsSignalConnected_Callback(QAreaSeries_IsSignalConnected_Callback cb) { qareaseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAreaSeries_MetaObject_IsBase(bool value) const { qareaseries_metaobject_isbase = value; }
    inline void setQAreaSeries_Metacast_IsBase(bool value) const { qareaseries_metacast_isbase = value; }
    inline void setQAreaSeries_Metacall_IsBase(bool value) const { qareaseries_metacall_isbase = value; }
    inline void setQAreaSeries_Type_IsBase(bool value) const { qareaseries_type_isbase = value; }
    inline void setQAreaSeries_Event_IsBase(bool value) const { qareaseries_event_isbase = value; }
    inline void setQAreaSeries_EventFilter_IsBase(bool value) const { qareaseries_eventfilter_isbase = value; }
    inline void setQAreaSeries_TimerEvent_IsBase(bool value) const { qareaseries_timerevent_isbase = value; }
    inline void setQAreaSeries_ChildEvent_IsBase(bool value) const { qareaseries_childevent_isbase = value; }
    inline void setQAreaSeries_CustomEvent_IsBase(bool value) const { qareaseries_customevent_isbase = value; }
    inline void setQAreaSeries_ConnectNotify_IsBase(bool value) const { qareaseries_connectnotify_isbase = value; }
    inline void setQAreaSeries_DisconnectNotify_IsBase(bool value) const { qareaseries_disconnectnotify_isbase = value; }
    inline void setQAreaSeries_Sender_IsBase(bool value) const { qareaseries_sender_isbase = value; }
    inline void setQAreaSeries_SenderSignalIndex_IsBase(bool value) const { qareaseries_sendersignalindex_isbase = value; }
    inline void setQAreaSeries_Receivers_IsBase(bool value) const { qareaseries_receivers_isbase = value; }
    inline void setQAreaSeries_IsSignalConnected_IsBase(bool value) const { qareaseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qareaseries_metaobject_isbase) {
            qareaseries_metaobject_isbase = false;
            return QAreaSeries::metaObject();
        }
        auto metaobject_cb = qareaseries_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAreaSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qareaseries_metacast_isbase) {
            qareaseries_metacast_isbase = false;
            return QAreaSeries::qt_metacast(param1);
        }
        auto metacast_cb = qareaseries_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAreaSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qareaseries_metacall_isbase) {
            qareaseries_metacall_isbase = false;
            return QAreaSeries::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qareaseries_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAreaSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qareaseries_type_isbase) {
            qareaseries_type_isbase = false;
            return QAreaSeries::type();
        }
        auto type_cb = qareaseries_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QAreaSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qareaseries_event_isbase) {
            qareaseries_event_isbase = false;
            return QAreaSeries::event(event);
        }
        auto event_cb = qareaseries_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAreaSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qareaseries_eventfilter_isbase) {
            qareaseries_eventfilter_isbase = false;
            return QAreaSeries::eventFilter(watched, event);
        }
        auto eventfilter_cb = qareaseries_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAreaSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qareaseries_timerevent_isbase) {
            qareaseries_timerevent_isbase = false;
            QAreaSeries::timerEvent(event);
            return;
        }
        auto timerevent_cb = qareaseries_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAreaSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qareaseries_childevent_isbase) {
            qareaseries_childevent_isbase = false;
            QAreaSeries::childEvent(event);
            return;
        }
        auto childevent_cb = qareaseries_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAreaSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qareaseries_customevent_isbase) {
            qareaseries_customevent_isbase = false;
            QAreaSeries::customEvent(event);
            return;
        }
        auto customevent_cb = qareaseries_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAreaSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qareaseries_connectnotify_isbase) {
            qareaseries_connectnotify_isbase = false;
            QAreaSeries::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qareaseries_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAreaSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qareaseries_disconnectnotify_isbase) {
            qareaseries_disconnectnotify_isbase = false;
            QAreaSeries::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qareaseries_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAreaSeries::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qareaseries_sender_isbase) {
            qareaseries_sender_isbase = false;
            return QAreaSeries::sender();
        }
        auto sender_cb = qareaseries_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAreaSeries::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qareaseries_sendersignalindex_isbase) {
            qareaseries_sendersignalindex_isbase = false;
            return QAreaSeries::senderSignalIndex();
        }
        auto sendersignalindex_cb = qareaseries_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAreaSeries::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qareaseries_receivers_isbase) {
            qareaseries_receivers_isbase = false;
            return QAreaSeries::receivers(signal);
        }
        auto receivers_cb = qareaseries_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAreaSeries::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qareaseries_issignalconnected_isbase) {
            qareaseries_issignalconnected_isbase = false;
            return QAreaSeries::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qareaseries_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAreaSeries::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAreaSeries_TimerEvent(QAreaSeries* self, QTimerEvent* event);
    friend void QAreaSeries_SuperTimerEvent(QAreaSeries* self, QTimerEvent* event);
    friend void QAreaSeries_ChildEvent(QAreaSeries* self, QChildEvent* event);
    friend void QAreaSeries_SuperChildEvent(QAreaSeries* self, QChildEvent* event);
    friend void QAreaSeries_CustomEvent(QAreaSeries* self, QEvent* event);
    friend void QAreaSeries_SuperCustomEvent(QAreaSeries* self, QEvent* event);
    friend void QAreaSeries_ConnectNotify(QAreaSeries* self, const QMetaMethod* signal);
    friend void QAreaSeries_SuperConnectNotify(QAreaSeries* self, const QMetaMethod* signal);
    friend void QAreaSeries_DisconnectNotify(QAreaSeries* self, const QMetaMethod* signal);
    friend void QAreaSeries_SuperDisconnectNotify(QAreaSeries* self, const QMetaMethod* signal);
    friend QObject* QAreaSeries_Sender(const QAreaSeries* self);
    friend QObject* QAreaSeries_SuperSender(const QAreaSeries* self);
    friend int QAreaSeries_SenderSignalIndex(const QAreaSeries* self);
    friend int QAreaSeries_SuperSenderSignalIndex(const QAreaSeries* self);
    friend int QAreaSeries_Receivers(const QAreaSeries* self, const char* signal);
    friend int QAreaSeries_SuperReceivers(const QAreaSeries* self, const char* signal);
    friend bool QAreaSeries_IsSignalConnected(const QAreaSeries* self, const QMetaMethod* signal);
    friend bool QAreaSeries_SuperIsSignalConnected(const QAreaSeries* self, const QMetaMethod* signal);
};

#endif
