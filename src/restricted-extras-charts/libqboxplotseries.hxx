#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXPLOTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXPLOTSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxPlotSeries so that we can call protected methods
class VirtualQBoxPlotSeries final : public QBoxPlotSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQBoxPlotSeries = true;

    // Virtual class public types (including callbacks)
    using QBoxPlotSeries_MetaObject_Callback = QMetaObject* (*)();
    using QBoxPlotSeries_Metacast_Callback = void* (*)(QBoxPlotSeries*, const char*);
    using QBoxPlotSeries_Metacall_Callback = int (*)(QBoxPlotSeries*, int, int, void**);
    using QBoxPlotSeries_Type_Callback = int (*)();
    using QBoxPlotSeries_Event_Callback = bool (*)(QBoxPlotSeries*, QEvent*);
    using QBoxPlotSeries_EventFilter_Callback = bool (*)(QBoxPlotSeries*, QObject*, QEvent*);
    using QBoxPlotSeries_TimerEvent_Callback = void (*)(QBoxPlotSeries*, QTimerEvent*);
    using QBoxPlotSeries_ChildEvent_Callback = void (*)(QBoxPlotSeries*, QChildEvent*);
    using QBoxPlotSeries_CustomEvent_Callback = void (*)(QBoxPlotSeries*, QEvent*);
    using QBoxPlotSeries_ConnectNotify_Callback = void (*)(QBoxPlotSeries*, QMetaMethod*);
    using QBoxPlotSeries_DisconnectNotify_Callback = void (*)(QBoxPlotSeries*, QMetaMethod*);
    using QBoxPlotSeries_Sender_Callback = QObject* (*)();
    using QBoxPlotSeries_SenderSignalIndex_Callback = int (*)();
    using QBoxPlotSeries_Receivers_Callback = int (*)(const QBoxPlotSeries*, const char*);
    using QBoxPlotSeries_IsSignalConnected_Callback = bool (*)(const QBoxPlotSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBoxPlotSeries_MetaObject_Callback qboxplotseries_metaobject_callback = nullptr;
    QBoxPlotSeries_Metacast_Callback qboxplotseries_metacast_callback = nullptr;
    QBoxPlotSeries_Metacall_Callback qboxplotseries_metacall_callback = nullptr;
    QBoxPlotSeries_Type_Callback qboxplotseries_type_callback = nullptr;
    QBoxPlotSeries_Event_Callback qboxplotseries_event_callback = nullptr;
    QBoxPlotSeries_EventFilter_Callback qboxplotseries_eventfilter_callback = nullptr;
    QBoxPlotSeries_TimerEvent_Callback qboxplotseries_timerevent_callback = nullptr;
    QBoxPlotSeries_ChildEvent_Callback qboxplotseries_childevent_callback = nullptr;
    QBoxPlotSeries_CustomEvent_Callback qboxplotseries_customevent_callback = nullptr;
    QBoxPlotSeries_ConnectNotify_Callback qboxplotseries_connectnotify_callback = nullptr;
    QBoxPlotSeries_DisconnectNotify_Callback qboxplotseries_disconnectnotify_callback = nullptr;
    QBoxPlotSeries_Sender_Callback qboxplotseries_sender_callback = nullptr;
    QBoxPlotSeries_SenderSignalIndex_Callback qboxplotseries_sendersignalindex_callback = nullptr;
    QBoxPlotSeries_Receivers_Callback qboxplotseries_receivers_callback = nullptr;
    QBoxPlotSeries_IsSignalConnected_Callback qboxplotseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qboxplotseries_metaobject_isbase = false;
    mutable bool qboxplotseries_metacast_isbase = false;
    mutable bool qboxplotseries_metacall_isbase = false;
    mutable bool qboxplotseries_type_isbase = false;
    mutable bool qboxplotseries_event_isbase = false;
    mutable bool qboxplotseries_eventfilter_isbase = false;
    mutable bool qboxplotseries_timerevent_isbase = false;
    mutable bool qboxplotseries_childevent_isbase = false;
    mutable bool qboxplotseries_customevent_isbase = false;
    mutable bool qboxplotseries_connectnotify_isbase = false;
    mutable bool qboxplotseries_disconnectnotify_isbase = false;
    mutable bool qboxplotseries_sender_isbase = false;
    mutable bool qboxplotseries_sendersignalindex_isbase = false;
    mutable bool qboxplotseries_receivers_isbase = false;
    mutable bool qboxplotseries_issignalconnected_isbase = false;

  public:
    VirtualQBoxPlotSeries() : QBoxPlotSeries() {};
    VirtualQBoxPlotSeries(QObject* parent) : QBoxPlotSeries(parent) {};

    // Callback setters
    inline void setQBoxPlotSeries_MetaObject_Callback(QBoxPlotSeries_MetaObject_Callback cb) { qboxplotseries_metaobject_callback = cb; }
    inline void setQBoxPlotSeries_Metacast_Callback(QBoxPlotSeries_Metacast_Callback cb) { qboxplotseries_metacast_callback = cb; }
    inline void setQBoxPlotSeries_Metacall_Callback(QBoxPlotSeries_Metacall_Callback cb) { qboxplotseries_metacall_callback = cb; }
    inline void setQBoxPlotSeries_Type_Callback(QBoxPlotSeries_Type_Callback cb) { qboxplotseries_type_callback = cb; }
    inline void setQBoxPlotSeries_Event_Callback(QBoxPlotSeries_Event_Callback cb) { qboxplotseries_event_callback = cb; }
    inline void setQBoxPlotSeries_EventFilter_Callback(QBoxPlotSeries_EventFilter_Callback cb) { qboxplotseries_eventfilter_callback = cb; }
    inline void setQBoxPlotSeries_TimerEvent_Callback(QBoxPlotSeries_TimerEvent_Callback cb) { qboxplotseries_timerevent_callback = cb; }
    inline void setQBoxPlotSeries_ChildEvent_Callback(QBoxPlotSeries_ChildEvent_Callback cb) { qboxplotseries_childevent_callback = cb; }
    inline void setQBoxPlotSeries_CustomEvent_Callback(QBoxPlotSeries_CustomEvent_Callback cb) { qboxplotseries_customevent_callback = cb; }
    inline void setQBoxPlotSeries_ConnectNotify_Callback(QBoxPlotSeries_ConnectNotify_Callback cb) { qboxplotseries_connectnotify_callback = cb; }
    inline void setQBoxPlotSeries_DisconnectNotify_Callback(QBoxPlotSeries_DisconnectNotify_Callback cb) { qboxplotseries_disconnectnotify_callback = cb; }
    inline void setQBoxPlotSeries_Sender_Callback(QBoxPlotSeries_Sender_Callback cb) { qboxplotseries_sender_callback = cb; }
    inline void setQBoxPlotSeries_SenderSignalIndex_Callback(QBoxPlotSeries_SenderSignalIndex_Callback cb) { qboxplotseries_sendersignalindex_callback = cb; }
    inline void setQBoxPlotSeries_Receivers_Callback(QBoxPlotSeries_Receivers_Callback cb) { qboxplotseries_receivers_callback = cb; }
    inline void setQBoxPlotSeries_IsSignalConnected_Callback(QBoxPlotSeries_IsSignalConnected_Callback cb) { qboxplotseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBoxPlotSeries_MetaObject_IsBase(bool value) const { qboxplotseries_metaobject_isbase = value; }
    inline void setQBoxPlotSeries_Metacast_IsBase(bool value) const { qboxplotseries_metacast_isbase = value; }
    inline void setQBoxPlotSeries_Metacall_IsBase(bool value) const { qboxplotseries_metacall_isbase = value; }
    inline void setQBoxPlotSeries_Type_IsBase(bool value) const { qboxplotseries_type_isbase = value; }
    inline void setQBoxPlotSeries_Event_IsBase(bool value) const { qboxplotseries_event_isbase = value; }
    inline void setQBoxPlotSeries_EventFilter_IsBase(bool value) const { qboxplotseries_eventfilter_isbase = value; }
    inline void setQBoxPlotSeries_TimerEvent_IsBase(bool value) const { qboxplotseries_timerevent_isbase = value; }
    inline void setQBoxPlotSeries_ChildEvent_IsBase(bool value) const { qboxplotseries_childevent_isbase = value; }
    inline void setQBoxPlotSeries_CustomEvent_IsBase(bool value) const { qboxplotseries_customevent_isbase = value; }
    inline void setQBoxPlotSeries_ConnectNotify_IsBase(bool value) const { qboxplotseries_connectnotify_isbase = value; }
    inline void setQBoxPlotSeries_DisconnectNotify_IsBase(bool value) const { qboxplotseries_disconnectnotify_isbase = value; }
    inline void setQBoxPlotSeries_Sender_IsBase(bool value) const { qboxplotseries_sender_isbase = value; }
    inline void setQBoxPlotSeries_SenderSignalIndex_IsBase(bool value) const { qboxplotseries_sendersignalindex_isbase = value; }
    inline void setQBoxPlotSeries_Receivers_IsBase(bool value) const { qboxplotseries_receivers_isbase = value; }
    inline void setQBoxPlotSeries_IsSignalConnected_IsBase(bool value) const { qboxplotseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qboxplotseries_metaobject_isbase) {
            qboxplotseries_metaobject_isbase = false;
            return QBoxPlotSeries::metaObject();
        }
        auto metaobject_cb = qboxplotseries_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBoxPlotSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qboxplotseries_metacast_isbase) {
            qboxplotseries_metacast_isbase = false;
            return QBoxPlotSeries::qt_metacast(param1);
        }
        auto metacast_cb = qboxplotseries_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxplotseries_metacall_isbase) {
            qboxplotseries_metacall_isbase = false;
            return QBoxPlotSeries::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qboxplotseries_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBoxPlotSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qboxplotseries_type_isbase) {
            qboxplotseries_type_isbase = false;
            return QBoxPlotSeries::type();
        }
        auto type_cb = qboxplotseries_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QBoxPlotSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxplotseries_event_isbase) {
            qboxplotseries_event_isbase = false;
            return QBoxPlotSeries::event(event);
        }
        auto event_cb = qboxplotseries_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxplotseries_eventfilter_isbase) {
            qboxplotseries_eventfilter_isbase = false;
            return QBoxPlotSeries::eventFilter(watched, event);
        }
        auto eventfilter_cb = qboxplotseries_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBoxPlotSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxplotseries_timerevent_isbase) {
            qboxplotseries_timerevent_isbase = false;
            QBoxPlotSeries::timerEvent(event);
            return;
        }
        auto timerevent_cb = qboxplotseries_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBoxPlotSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxplotseries_childevent_isbase) {
            qboxplotseries_childevent_isbase = false;
            QBoxPlotSeries::childEvent(event);
            return;
        }
        auto childevent_cb = qboxplotseries_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBoxPlotSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxplotseries_customevent_isbase) {
            qboxplotseries_customevent_isbase = false;
            QBoxPlotSeries::customEvent(event);
            return;
        }
        auto customevent_cb = qboxplotseries_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBoxPlotSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxplotseries_connectnotify_isbase) {
            qboxplotseries_connectnotify_isbase = false;
            QBoxPlotSeries::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qboxplotseries_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBoxPlotSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxplotseries_disconnectnotify_isbase) {
            qboxplotseries_disconnectnotify_isbase = false;
            QBoxPlotSeries::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qboxplotseries_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBoxPlotSeries::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qboxplotseries_sender_isbase) {
            qboxplotseries_sender_isbase = false;
            return QBoxPlotSeries::sender();
        }
        auto sender_cb = qboxplotseries_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBoxPlotSeries::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qboxplotseries_sendersignalindex_isbase) {
            qboxplotseries_sendersignalindex_isbase = false;
            return QBoxPlotSeries::senderSignalIndex();
        }
        auto sendersignalindex_cb = qboxplotseries_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBoxPlotSeries::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qboxplotseries_receivers_isbase) {
            qboxplotseries_receivers_isbase = false;
            return QBoxPlotSeries::receivers(signal);
        }
        auto receivers_cb = qboxplotseries_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBoxPlotSeries::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qboxplotseries_issignalconnected_isbase) {
            qboxplotseries_issignalconnected_isbase = false;
            return QBoxPlotSeries::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qboxplotseries_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotSeries::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBoxPlotSeries_TimerEvent(QBoxPlotSeries* self, QTimerEvent* event);
    friend void QBoxPlotSeries_SuperTimerEvent(QBoxPlotSeries* self, QTimerEvent* event);
    friend void QBoxPlotSeries_ChildEvent(QBoxPlotSeries* self, QChildEvent* event);
    friend void QBoxPlotSeries_SuperChildEvent(QBoxPlotSeries* self, QChildEvent* event);
    friend void QBoxPlotSeries_CustomEvent(QBoxPlotSeries* self, QEvent* event);
    friend void QBoxPlotSeries_SuperCustomEvent(QBoxPlotSeries* self, QEvent* event);
    friend void QBoxPlotSeries_ConnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal);
    friend void QBoxPlotSeries_SuperConnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal);
    friend void QBoxPlotSeries_DisconnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal);
    friend void QBoxPlotSeries_SuperDisconnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal);
    friend QObject* QBoxPlotSeries_Sender(const QBoxPlotSeries* self);
    friend QObject* QBoxPlotSeries_SuperSender(const QBoxPlotSeries* self);
    friend int QBoxPlotSeries_SenderSignalIndex(const QBoxPlotSeries* self);
    friend int QBoxPlotSeries_SuperSenderSignalIndex(const QBoxPlotSeries* self);
    friend int QBoxPlotSeries_Receivers(const QBoxPlotSeries* self, const char* signal);
    friend int QBoxPlotSeries_SuperReceivers(const QBoxPlotSeries* self, const char* signal);
    friend bool QBoxPlotSeries_IsSignalConnected(const QBoxPlotSeries* self, const QMetaMethod* signal);
    friend bool QBoxPlotSeries_SuperIsSignalConnected(const QBoxPlotSeries* self, const QMetaMethod* signal);
};

#endif
