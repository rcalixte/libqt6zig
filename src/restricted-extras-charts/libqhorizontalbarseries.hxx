#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHORIZONTALBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHORIZONTALBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalBarSeries so that we can call protected methods
class VirtualQHorizontalBarSeries final : public QHorizontalBarSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQHorizontalBarSeries = true;

    // Virtual class public types (including callbacks)
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

    ~VirtualQHorizontalBarSeries() {
        qhorizontalbarseries_metacall_callback = nullptr;
        qhorizontalbarseries_type_callback = nullptr;
        qhorizontalbarseries_event_callback = nullptr;
        qhorizontalbarseries_eventfilter_callback = nullptr;
        qhorizontalbarseries_timerevent_callback = nullptr;
        qhorizontalbarseries_childevent_callback = nullptr;
        qhorizontalbarseries_customevent_callback = nullptr;
        qhorizontalbarseries_connectnotify_callback = nullptr;
        qhorizontalbarseries_disconnectnotify_callback = nullptr;
        qhorizontalbarseries_sender_callback = nullptr;
        qhorizontalbarseries_sendersignalindex_callback = nullptr;
        qhorizontalbarseries_receivers_callback = nullptr;
        qhorizontalbarseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalbarseries_metacall_isbase) {
            qhorizontalbarseries_metacall_isbase = false;
            return QHorizontalBarSeries::qt_metacall(param1, param2, param3);
        } else if (qhorizontalbarseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qhorizontalbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QHorizontalBarSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalbarseries_type_isbase) {
            qhorizontalbarseries_type_isbase = false;
            return QHorizontalBarSeries::type();
        } else if (qhorizontalbarseries_type_callback != nullptr) {
            int callback_ret = qhorizontalbarseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QHorizontalBarSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalbarseries_event_isbase) {
            qhorizontalbarseries_event_isbase = false;
            return QHorizontalBarSeries::event(event);
        } else if (qhorizontalbarseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qhorizontalbarseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHorizontalBarSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalbarseries_eventfilter_isbase) {
            qhorizontalbarseries_eventfilter_isbase = false;
            return QHorizontalBarSeries::eventFilter(watched, event);
        } else if (qhorizontalbarseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qhorizontalbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QHorizontalBarSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalbarseries_timerevent_isbase) {
            qhorizontalbarseries_timerevent_isbase = false;
            QHorizontalBarSeries::timerEvent(event);
        } else if (qhorizontalbarseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qhorizontalbarseries_timerevent_callback(this, cbval1);
        } else {
            QHorizontalBarSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalbarseries_childevent_isbase) {
            qhorizontalbarseries_childevent_isbase = false;
            QHorizontalBarSeries::childEvent(event);
        } else if (qhorizontalbarseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qhorizontalbarseries_childevent_callback(this, cbval1);
        } else {
            QHorizontalBarSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalbarseries_customevent_isbase) {
            qhorizontalbarseries_customevent_isbase = false;
            QHorizontalBarSeries::customEvent(event);
        } else if (qhorizontalbarseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qhorizontalbarseries_customevent_callback(this, cbval1);
        } else {
            QHorizontalBarSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalbarseries_connectnotify_isbase) {
            qhorizontalbarseries_connectnotify_isbase = false;
            QHorizontalBarSeries::connectNotify(signal);
        } else if (qhorizontalbarseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhorizontalbarseries_connectnotify_callback(this, cbval1);
        } else {
            QHorizontalBarSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalbarseries_disconnectnotify_isbase) {
            qhorizontalbarseries_disconnectnotify_isbase = false;
            QHorizontalBarSeries::disconnectNotify(signal);
        } else if (qhorizontalbarseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhorizontalbarseries_disconnectnotify_callback(this, cbval1);
        } else {
            QHorizontalBarSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhorizontalbarseries_sender_isbase) {
            qhorizontalbarseries_sender_isbase = false;
            return QHorizontalBarSeries::sender();
        } else if (qhorizontalbarseries_sender_callback != nullptr) {
            QObject* callback_ret = qhorizontalbarseries_sender_callback();
            return callback_ret;
        } else {
            return QHorizontalBarSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhorizontalbarseries_sendersignalindex_isbase) {
            qhorizontalbarseries_sendersignalindex_isbase = false;
            return QHorizontalBarSeries::senderSignalIndex();
        } else if (qhorizontalbarseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qhorizontalbarseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHorizontalBarSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhorizontalbarseries_receivers_isbase) {
            qhorizontalbarseries_receivers_isbase = false;
            return QHorizontalBarSeries::receivers(signal);
        } else if (qhorizontalbarseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qhorizontalbarseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHorizontalBarSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhorizontalbarseries_issignalconnected_isbase) {
            qhorizontalbarseries_issignalconnected_isbase = false;
            return QHorizontalBarSeries::isSignalConnected(signal);
        } else if (qhorizontalbarseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qhorizontalbarseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHorizontalBarSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QHorizontalBarSeries_TimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
    friend void QHorizontalBarSeries_QBaseTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
    friend void QHorizontalBarSeries_ChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
    friend void QHorizontalBarSeries_QBaseChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
    friend void QHorizontalBarSeries_CustomEvent(QHorizontalBarSeries* self, QEvent* event);
    friend void QHorizontalBarSeries_QBaseCustomEvent(QHorizontalBarSeries* self, QEvent* event);
    friend void QHorizontalBarSeries_ConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_QBaseConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_DisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_QBaseDisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend QObject* QHorizontalBarSeries_Sender(const QHorizontalBarSeries* self);
    friend QObject* QHorizontalBarSeries_QBaseSender(const QHorizontalBarSeries* self);
    friend int QHorizontalBarSeries_SenderSignalIndex(const QHorizontalBarSeries* self);
    friend int QHorizontalBarSeries_QBaseSenderSignalIndex(const QHorizontalBarSeries* self);
    friend int QHorizontalBarSeries_Receivers(const QHorizontalBarSeries* self, const char* signal);
    friend int QHorizontalBarSeries_QBaseReceivers(const QHorizontalBarSeries* self, const char* signal);
    friend bool QHorizontalBarSeries_IsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend bool QHorizontalBarSeries_QBaseIsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal);
};

#endif
