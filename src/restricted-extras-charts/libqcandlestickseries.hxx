#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickSeries so that we can call protected methods
class VirtualQCandlestickSeries final : public QCandlestickSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQCandlestickSeries = true;

    // Virtual class public types (including callbacks)
    using QCandlestickSeries_MetaObject_Callback = QMetaObject* (*)();
    using QCandlestickSeries_Metacast_Callback = void* (*)(QCandlestickSeries*, const char*);
    using QCandlestickSeries_Metacall_Callback = int (*)(QCandlestickSeries*, int, int, void**);
    using QCandlestickSeries_Type_Callback = int (*)();
    using QCandlestickSeries_Event_Callback = bool (*)(QCandlestickSeries*, QEvent*);
    using QCandlestickSeries_EventFilter_Callback = bool (*)(QCandlestickSeries*, QObject*, QEvent*);
    using QCandlestickSeries_TimerEvent_Callback = void (*)(QCandlestickSeries*, QTimerEvent*);
    using QCandlestickSeries_ChildEvent_Callback = void (*)(QCandlestickSeries*, QChildEvent*);
    using QCandlestickSeries_CustomEvent_Callback = void (*)(QCandlestickSeries*, QEvent*);
    using QCandlestickSeries_ConnectNotify_Callback = void (*)(QCandlestickSeries*, QMetaMethod*);
    using QCandlestickSeries_DisconnectNotify_Callback = void (*)(QCandlestickSeries*, QMetaMethod*);
    using QCandlestickSeries_Sender_Callback = QObject* (*)();
    using QCandlestickSeries_SenderSignalIndex_Callback = int (*)();
    using QCandlestickSeries_Receivers_Callback = int (*)(const QCandlestickSeries*, const char*);
    using QCandlestickSeries_IsSignalConnected_Callback = bool (*)(const QCandlestickSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QCandlestickSeries_MetaObject_Callback qcandlestickseries_metaobject_callback = nullptr;
    QCandlestickSeries_Metacast_Callback qcandlestickseries_metacast_callback = nullptr;
    QCandlestickSeries_Metacall_Callback qcandlestickseries_metacall_callback = nullptr;
    QCandlestickSeries_Type_Callback qcandlestickseries_type_callback = nullptr;
    QCandlestickSeries_Event_Callback qcandlestickseries_event_callback = nullptr;
    QCandlestickSeries_EventFilter_Callback qcandlestickseries_eventfilter_callback = nullptr;
    QCandlestickSeries_TimerEvent_Callback qcandlestickseries_timerevent_callback = nullptr;
    QCandlestickSeries_ChildEvent_Callback qcandlestickseries_childevent_callback = nullptr;
    QCandlestickSeries_CustomEvent_Callback qcandlestickseries_customevent_callback = nullptr;
    QCandlestickSeries_ConnectNotify_Callback qcandlestickseries_connectnotify_callback = nullptr;
    QCandlestickSeries_DisconnectNotify_Callback qcandlestickseries_disconnectnotify_callback = nullptr;
    QCandlestickSeries_Sender_Callback qcandlestickseries_sender_callback = nullptr;
    QCandlestickSeries_SenderSignalIndex_Callback qcandlestickseries_sendersignalindex_callback = nullptr;
    QCandlestickSeries_Receivers_Callback qcandlestickseries_receivers_callback = nullptr;
    QCandlestickSeries_IsSignalConnected_Callback qcandlestickseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcandlestickseries_metaobject_isbase = false;
    mutable bool qcandlestickseries_metacast_isbase = false;
    mutable bool qcandlestickseries_metacall_isbase = false;
    mutable bool qcandlestickseries_type_isbase = false;
    mutable bool qcandlestickseries_event_isbase = false;
    mutable bool qcandlestickseries_eventfilter_isbase = false;
    mutable bool qcandlestickseries_timerevent_isbase = false;
    mutable bool qcandlestickseries_childevent_isbase = false;
    mutable bool qcandlestickseries_customevent_isbase = false;
    mutable bool qcandlestickseries_connectnotify_isbase = false;
    mutable bool qcandlestickseries_disconnectnotify_isbase = false;
    mutable bool qcandlestickseries_sender_isbase = false;
    mutable bool qcandlestickseries_sendersignalindex_isbase = false;
    mutable bool qcandlestickseries_receivers_isbase = false;
    mutable bool qcandlestickseries_issignalconnected_isbase = false;

  public:
    VirtualQCandlestickSeries() : QCandlestickSeries() {};
    VirtualQCandlestickSeries(QObject* parent) : QCandlestickSeries(parent) {};

    // Callback setters
    inline void setQCandlestickSeries_MetaObject_Callback(QCandlestickSeries_MetaObject_Callback cb) { qcandlestickseries_metaobject_callback = cb; }
    inline void setQCandlestickSeries_Metacast_Callback(QCandlestickSeries_Metacast_Callback cb) { qcandlestickseries_metacast_callback = cb; }
    inline void setQCandlestickSeries_Metacall_Callback(QCandlestickSeries_Metacall_Callback cb) { qcandlestickseries_metacall_callback = cb; }
    inline void setQCandlestickSeries_Type_Callback(QCandlestickSeries_Type_Callback cb) { qcandlestickseries_type_callback = cb; }
    inline void setQCandlestickSeries_Event_Callback(QCandlestickSeries_Event_Callback cb) { qcandlestickseries_event_callback = cb; }
    inline void setQCandlestickSeries_EventFilter_Callback(QCandlestickSeries_EventFilter_Callback cb) { qcandlestickseries_eventfilter_callback = cb; }
    inline void setQCandlestickSeries_TimerEvent_Callback(QCandlestickSeries_TimerEvent_Callback cb) { qcandlestickseries_timerevent_callback = cb; }
    inline void setQCandlestickSeries_ChildEvent_Callback(QCandlestickSeries_ChildEvent_Callback cb) { qcandlestickseries_childevent_callback = cb; }
    inline void setQCandlestickSeries_CustomEvent_Callback(QCandlestickSeries_CustomEvent_Callback cb) { qcandlestickseries_customevent_callback = cb; }
    inline void setQCandlestickSeries_ConnectNotify_Callback(QCandlestickSeries_ConnectNotify_Callback cb) { qcandlestickseries_connectnotify_callback = cb; }
    inline void setQCandlestickSeries_DisconnectNotify_Callback(QCandlestickSeries_DisconnectNotify_Callback cb) { qcandlestickseries_disconnectnotify_callback = cb; }
    inline void setQCandlestickSeries_Sender_Callback(QCandlestickSeries_Sender_Callback cb) { qcandlestickseries_sender_callback = cb; }
    inline void setQCandlestickSeries_SenderSignalIndex_Callback(QCandlestickSeries_SenderSignalIndex_Callback cb) { qcandlestickseries_sendersignalindex_callback = cb; }
    inline void setQCandlestickSeries_Receivers_Callback(QCandlestickSeries_Receivers_Callback cb) { qcandlestickseries_receivers_callback = cb; }
    inline void setQCandlestickSeries_IsSignalConnected_Callback(QCandlestickSeries_IsSignalConnected_Callback cb) { qcandlestickseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCandlestickSeries_MetaObject_IsBase(bool value) const { qcandlestickseries_metaobject_isbase = value; }
    inline void setQCandlestickSeries_Metacast_IsBase(bool value) const { qcandlestickseries_metacast_isbase = value; }
    inline void setQCandlestickSeries_Metacall_IsBase(bool value) const { qcandlestickseries_metacall_isbase = value; }
    inline void setQCandlestickSeries_Type_IsBase(bool value) const { qcandlestickseries_type_isbase = value; }
    inline void setQCandlestickSeries_Event_IsBase(bool value) const { qcandlestickseries_event_isbase = value; }
    inline void setQCandlestickSeries_EventFilter_IsBase(bool value) const { qcandlestickseries_eventfilter_isbase = value; }
    inline void setQCandlestickSeries_TimerEvent_IsBase(bool value) const { qcandlestickseries_timerevent_isbase = value; }
    inline void setQCandlestickSeries_ChildEvent_IsBase(bool value) const { qcandlestickseries_childevent_isbase = value; }
    inline void setQCandlestickSeries_CustomEvent_IsBase(bool value) const { qcandlestickseries_customevent_isbase = value; }
    inline void setQCandlestickSeries_ConnectNotify_IsBase(bool value) const { qcandlestickseries_connectnotify_isbase = value; }
    inline void setQCandlestickSeries_DisconnectNotify_IsBase(bool value) const { qcandlestickseries_disconnectnotify_isbase = value; }
    inline void setQCandlestickSeries_Sender_IsBase(bool value) const { qcandlestickseries_sender_isbase = value; }
    inline void setQCandlestickSeries_SenderSignalIndex_IsBase(bool value) const { qcandlestickseries_sendersignalindex_isbase = value; }
    inline void setQCandlestickSeries_Receivers_IsBase(bool value) const { qcandlestickseries_receivers_isbase = value; }
    inline void setQCandlestickSeries_IsSignalConnected_IsBase(bool value) const { qcandlestickseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcandlestickseries_metaobject_isbase) {
            qcandlestickseries_metaobject_isbase = false;
            return QCandlestickSeries::metaObject();
        }
        auto metaobject_cb = qcandlestickseries_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QCandlestickSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcandlestickseries_metacast_isbase) {
            qcandlestickseries_metacast_isbase = false;
            return QCandlestickSeries::qt_metacast(param1);
        }
        auto metacast_cb = qcandlestickseries_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickseries_metacall_isbase) {
            qcandlestickseries_metacall_isbase = false;
            return QCandlestickSeries::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qcandlestickseries_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qcandlestickseries_type_isbase) {
            qcandlestickseries_type_isbase = false;
            return QCandlestickSeries::type();
        }
        auto type_cb = qcandlestickseries_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QCandlestickSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickseries_event_isbase) {
            qcandlestickseries_event_isbase = false;
            return QCandlestickSeries::event(event);
        }
        auto event_cb = qcandlestickseries_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickseries_eventfilter_isbase) {
            qcandlestickseries_eventfilter_isbase = false;
            return QCandlestickSeries::eventFilter(watched, event);
        }
        auto eventfilter_cb = qcandlestickseries_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCandlestickSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickseries_timerevent_isbase) {
            qcandlestickseries_timerevent_isbase = false;
            QCandlestickSeries::timerEvent(event);
            return;
        }
        auto timerevent_cb = qcandlestickseries_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QCandlestickSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickseries_childevent_isbase) {
            qcandlestickseries_childevent_isbase = false;
            QCandlestickSeries::childEvent(event);
            return;
        }
        auto childevent_cb = qcandlestickseries_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QCandlestickSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickseries_customevent_isbase) {
            qcandlestickseries_customevent_isbase = false;
            QCandlestickSeries::customEvent(event);
            return;
        }
        auto customevent_cb = qcandlestickseries_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QCandlestickSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickseries_connectnotify_isbase) {
            qcandlestickseries_connectnotify_isbase = false;
            QCandlestickSeries::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qcandlestickseries_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QCandlestickSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickseries_disconnectnotify_isbase) {
            qcandlestickseries_disconnectnotify_isbase = false;
            QCandlestickSeries::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qcandlestickseries_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QCandlestickSeries::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcandlestickseries_sender_isbase) {
            qcandlestickseries_sender_isbase = false;
            return QCandlestickSeries::sender();
        }
        auto sender_cb = qcandlestickseries_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QCandlestickSeries::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcandlestickseries_sendersignalindex_isbase) {
            qcandlestickseries_sendersignalindex_isbase = false;
            return QCandlestickSeries::senderSignalIndex();
        }
        auto sendersignalindex_cb = qcandlestickseries_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QCandlestickSeries::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcandlestickseries_receivers_isbase) {
            qcandlestickseries_receivers_isbase = false;
            return QCandlestickSeries::receivers(signal);
        }
        auto receivers_cb = qcandlestickseries_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickSeries::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcandlestickseries_issignalconnected_isbase) {
            qcandlestickseries_issignalconnected_isbase = false;
            return QCandlestickSeries::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qcandlestickseries_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSeries::isSignalConnected(signal);
    }

    // Friend functions
    friend void QCandlestickSeries_TimerEvent(QCandlestickSeries* self, QTimerEvent* event);
    friend void QCandlestickSeries_SuperTimerEvent(QCandlestickSeries* self, QTimerEvent* event);
    friend void QCandlestickSeries_ChildEvent(QCandlestickSeries* self, QChildEvent* event);
    friend void QCandlestickSeries_SuperChildEvent(QCandlestickSeries* self, QChildEvent* event);
    friend void QCandlestickSeries_CustomEvent(QCandlestickSeries* self, QEvent* event);
    friend void QCandlestickSeries_SuperCustomEvent(QCandlestickSeries* self, QEvent* event);
    friend void QCandlestickSeries_ConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_SuperConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_DisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_SuperDisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend QObject* QCandlestickSeries_Sender(const QCandlestickSeries* self);
    friend QObject* QCandlestickSeries_SuperSender(const QCandlestickSeries* self);
    friend int QCandlestickSeries_SenderSignalIndex(const QCandlestickSeries* self);
    friend int QCandlestickSeries_SuperSenderSignalIndex(const QCandlestickSeries* self);
    friend int QCandlestickSeries_Receivers(const QCandlestickSeries* self, const char* signal);
    friend int QCandlestickSeries_SuperReceivers(const QCandlestickSeries* self, const char* signal);
    friend bool QCandlestickSeries_IsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal);
    friend bool QCandlestickSeries_SuperIsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal);
};

#endif
