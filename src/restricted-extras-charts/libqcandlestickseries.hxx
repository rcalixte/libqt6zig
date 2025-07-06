#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickSeries so that we can call protected methods
class VirtualQCandlestickSeries final : public QCandlestickSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQCandlestickSeries = true;

    // Virtual class public types (including callbacks)
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

    ~VirtualQCandlestickSeries() {
        qcandlestickseries_metacall_callback = nullptr;
        qcandlestickseries_type_callback = nullptr;
        qcandlestickseries_event_callback = nullptr;
        qcandlestickseries_eventfilter_callback = nullptr;
        qcandlestickseries_timerevent_callback = nullptr;
        qcandlestickseries_childevent_callback = nullptr;
        qcandlestickseries_customevent_callback = nullptr;
        qcandlestickseries_connectnotify_callback = nullptr;
        qcandlestickseries_disconnectnotify_callback = nullptr;
        qcandlestickseries_sender_callback = nullptr;
        qcandlestickseries_sendersignalindex_callback = nullptr;
        qcandlestickseries_receivers_callback = nullptr;
        qcandlestickseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickseries_metacall_isbase) {
            qcandlestickseries_metacall_isbase = false;
            return QCandlestickSeries::qt_metacall(param1, param2, param3);
        } else if (qcandlestickseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcandlestickseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qcandlestickseries_type_isbase) {
            qcandlestickseries_type_isbase = false;
            return QCandlestickSeries::type();
        } else if (qcandlestickseries_type_callback != nullptr) {
            int callback_ret = qcandlestickseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QCandlestickSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickseries_event_isbase) {
            qcandlestickseries_event_isbase = false;
            return QCandlestickSeries::event(event);
        } else if (qcandlestickseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcandlestickseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCandlestickSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickseries_eventfilter_isbase) {
            qcandlestickseries_eventfilter_isbase = false;
            return QCandlestickSeries::eventFilter(watched, event);
        } else if (qcandlestickseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcandlestickseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCandlestickSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickseries_timerevent_isbase) {
            qcandlestickseries_timerevent_isbase = false;
            QCandlestickSeries::timerEvent(event);
        } else if (qcandlestickseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcandlestickseries_timerevent_callback(this, cbval1);
        } else {
            QCandlestickSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickseries_childevent_isbase) {
            qcandlestickseries_childevent_isbase = false;
            QCandlestickSeries::childEvent(event);
        } else if (qcandlestickseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcandlestickseries_childevent_callback(this, cbval1);
        } else {
            QCandlestickSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickseries_customevent_isbase) {
            qcandlestickseries_customevent_isbase = false;
            QCandlestickSeries::customEvent(event);
        } else if (qcandlestickseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcandlestickseries_customevent_callback(this, cbval1);
        } else {
            QCandlestickSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickseries_connectnotify_isbase) {
            qcandlestickseries_connectnotify_isbase = false;
            QCandlestickSeries::connectNotify(signal);
        } else if (qcandlestickseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcandlestickseries_connectnotify_callback(this, cbval1);
        } else {
            QCandlestickSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickseries_disconnectnotify_isbase) {
            qcandlestickseries_disconnectnotify_isbase = false;
            QCandlestickSeries::disconnectNotify(signal);
        } else if (qcandlestickseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcandlestickseries_disconnectnotify_callback(this, cbval1);
        } else {
            QCandlestickSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcandlestickseries_sender_isbase) {
            qcandlestickseries_sender_isbase = false;
            return QCandlestickSeries::sender();
        } else if (qcandlestickseries_sender_callback != nullptr) {
            QObject* callback_ret = qcandlestickseries_sender_callback();
            return callback_ret;
        } else {
            return QCandlestickSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcandlestickseries_sendersignalindex_isbase) {
            qcandlestickseries_sendersignalindex_isbase = false;
            return QCandlestickSeries::senderSignalIndex();
        } else if (qcandlestickseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qcandlestickseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcandlestickseries_receivers_isbase) {
            qcandlestickseries_receivers_isbase = false;
            return QCandlestickSeries::receivers(signal);
        } else if (qcandlestickseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcandlestickseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcandlestickseries_issignalconnected_isbase) {
            qcandlestickseries_issignalconnected_isbase = false;
            return QCandlestickSeries::isSignalConnected(signal);
        } else if (qcandlestickseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcandlestickseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCandlestickSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QCandlestickSeries_TimerEvent(QCandlestickSeries* self, QTimerEvent* event);
    friend void QCandlestickSeries_QBaseTimerEvent(QCandlestickSeries* self, QTimerEvent* event);
    friend void QCandlestickSeries_ChildEvent(QCandlestickSeries* self, QChildEvent* event);
    friend void QCandlestickSeries_QBaseChildEvent(QCandlestickSeries* self, QChildEvent* event);
    friend void QCandlestickSeries_CustomEvent(QCandlestickSeries* self, QEvent* event);
    friend void QCandlestickSeries_QBaseCustomEvent(QCandlestickSeries* self, QEvent* event);
    friend void QCandlestickSeries_ConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_QBaseConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_DisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_QBaseDisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend QObject* QCandlestickSeries_Sender(const QCandlestickSeries* self);
    friend QObject* QCandlestickSeries_QBaseSender(const QCandlestickSeries* self);
    friend int QCandlestickSeries_SenderSignalIndex(const QCandlestickSeries* self);
    friend int QCandlestickSeries_QBaseSenderSignalIndex(const QCandlestickSeries* self);
    friend int QCandlestickSeries_Receivers(const QCandlestickSeries* self, const char* signal);
    friend int QCandlestickSeries_QBaseReceivers(const QCandlestickSeries* self, const char* signal);
    friend bool QCandlestickSeries_IsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal);
    friend bool QCandlestickSeries_QBaseIsSignalConnected(const QCandlestickSeries* self, const QMetaMethod* signal);
};

#endif
