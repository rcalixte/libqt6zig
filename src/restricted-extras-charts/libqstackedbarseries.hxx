#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSTACKEDBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSTACKEDBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QStackedBarSeries so that we can call protected methods
class VirtualQStackedBarSeries final : public QStackedBarSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQStackedBarSeries = true;

    // Virtual class public types (including callbacks)
    using QStackedBarSeries_Metacall_Callback = int (*)(QStackedBarSeries*, int, int, void**);
    using QStackedBarSeries_Type_Callback = int (*)();
    using QStackedBarSeries_Event_Callback = bool (*)(QStackedBarSeries*, QEvent*);
    using QStackedBarSeries_EventFilter_Callback = bool (*)(QStackedBarSeries*, QObject*, QEvent*);
    using QStackedBarSeries_TimerEvent_Callback = void (*)(QStackedBarSeries*, QTimerEvent*);
    using QStackedBarSeries_ChildEvent_Callback = void (*)(QStackedBarSeries*, QChildEvent*);
    using QStackedBarSeries_CustomEvent_Callback = void (*)(QStackedBarSeries*, QEvent*);
    using QStackedBarSeries_ConnectNotify_Callback = void (*)(QStackedBarSeries*, QMetaMethod*);
    using QStackedBarSeries_DisconnectNotify_Callback = void (*)(QStackedBarSeries*, QMetaMethod*);
    using QStackedBarSeries_Sender_Callback = QObject* (*)();
    using QStackedBarSeries_SenderSignalIndex_Callback = int (*)();
    using QStackedBarSeries_Receivers_Callback = int (*)(const QStackedBarSeries*, const char*);
    using QStackedBarSeries_IsSignalConnected_Callback = bool (*)(const QStackedBarSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStackedBarSeries_Metacall_Callback qstackedbarseries_metacall_callback = nullptr;
    QStackedBarSeries_Type_Callback qstackedbarseries_type_callback = nullptr;
    QStackedBarSeries_Event_Callback qstackedbarseries_event_callback = nullptr;
    QStackedBarSeries_EventFilter_Callback qstackedbarseries_eventfilter_callback = nullptr;
    QStackedBarSeries_TimerEvent_Callback qstackedbarseries_timerevent_callback = nullptr;
    QStackedBarSeries_ChildEvent_Callback qstackedbarseries_childevent_callback = nullptr;
    QStackedBarSeries_CustomEvent_Callback qstackedbarseries_customevent_callback = nullptr;
    QStackedBarSeries_ConnectNotify_Callback qstackedbarseries_connectnotify_callback = nullptr;
    QStackedBarSeries_DisconnectNotify_Callback qstackedbarseries_disconnectnotify_callback = nullptr;
    QStackedBarSeries_Sender_Callback qstackedbarseries_sender_callback = nullptr;
    QStackedBarSeries_SenderSignalIndex_Callback qstackedbarseries_sendersignalindex_callback = nullptr;
    QStackedBarSeries_Receivers_Callback qstackedbarseries_receivers_callback = nullptr;
    QStackedBarSeries_IsSignalConnected_Callback qstackedbarseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstackedbarseries_metacall_isbase = false;
    mutable bool qstackedbarseries_type_isbase = false;
    mutable bool qstackedbarseries_event_isbase = false;
    mutable bool qstackedbarseries_eventfilter_isbase = false;
    mutable bool qstackedbarseries_timerevent_isbase = false;
    mutable bool qstackedbarseries_childevent_isbase = false;
    mutable bool qstackedbarseries_customevent_isbase = false;
    mutable bool qstackedbarseries_connectnotify_isbase = false;
    mutable bool qstackedbarseries_disconnectnotify_isbase = false;
    mutable bool qstackedbarseries_sender_isbase = false;
    mutable bool qstackedbarseries_sendersignalindex_isbase = false;
    mutable bool qstackedbarseries_receivers_isbase = false;
    mutable bool qstackedbarseries_issignalconnected_isbase = false;

  public:
    VirtualQStackedBarSeries() : QStackedBarSeries() {};
    VirtualQStackedBarSeries(QObject* parent) : QStackedBarSeries(parent) {};

    ~VirtualQStackedBarSeries() {
        qstackedbarseries_metacall_callback = nullptr;
        qstackedbarseries_type_callback = nullptr;
        qstackedbarseries_event_callback = nullptr;
        qstackedbarseries_eventfilter_callback = nullptr;
        qstackedbarseries_timerevent_callback = nullptr;
        qstackedbarseries_childevent_callback = nullptr;
        qstackedbarseries_customevent_callback = nullptr;
        qstackedbarseries_connectnotify_callback = nullptr;
        qstackedbarseries_disconnectnotify_callback = nullptr;
        qstackedbarseries_sender_callback = nullptr;
        qstackedbarseries_sendersignalindex_callback = nullptr;
        qstackedbarseries_receivers_callback = nullptr;
        qstackedbarseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQStackedBarSeries_Metacall_Callback(QStackedBarSeries_Metacall_Callback cb) { qstackedbarseries_metacall_callback = cb; }
    inline void setQStackedBarSeries_Type_Callback(QStackedBarSeries_Type_Callback cb) { qstackedbarseries_type_callback = cb; }
    inline void setQStackedBarSeries_Event_Callback(QStackedBarSeries_Event_Callback cb) { qstackedbarseries_event_callback = cb; }
    inline void setQStackedBarSeries_EventFilter_Callback(QStackedBarSeries_EventFilter_Callback cb) { qstackedbarseries_eventfilter_callback = cb; }
    inline void setQStackedBarSeries_TimerEvent_Callback(QStackedBarSeries_TimerEvent_Callback cb) { qstackedbarseries_timerevent_callback = cb; }
    inline void setQStackedBarSeries_ChildEvent_Callback(QStackedBarSeries_ChildEvent_Callback cb) { qstackedbarseries_childevent_callback = cb; }
    inline void setQStackedBarSeries_CustomEvent_Callback(QStackedBarSeries_CustomEvent_Callback cb) { qstackedbarseries_customevent_callback = cb; }
    inline void setQStackedBarSeries_ConnectNotify_Callback(QStackedBarSeries_ConnectNotify_Callback cb) { qstackedbarseries_connectnotify_callback = cb; }
    inline void setQStackedBarSeries_DisconnectNotify_Callback(QStackedBarSeries_DisconnectNotify_Callback cb) { qstackedbarseries_disconnectnotify_callback = cb; }
    inline void setQStackedBarSeries_Sender_Callback(QStackedBarSeries_Sender_Callback cb) { qstackedbarseries_sender_callback = cb; }
    inline void setQStackedBarSeries_SenderSignalIndex_Callback(QStackedBarSeries_SenderSignalIndex_Callback cb) { qstackedbarseries_sendersignalindex_callback = cb; }
    inline void setQStackedBarSeries_Receivers_Callback(QStackedBarSeries_Receivers_Callback cb) { qstackedbarseries_receivers_callback = cb; }
    inline void setQStackedBarSeries_IsSignalConnected_Callback(QStackedBarSeries_IsSignalConnected_Callback cb) { qstackedbarseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStackedBarSeries_Metacall_IsBase(bool value) const { qstackedbarseries_metacall_isbase = value; }
    inline void setQStackedBarSeries_Type_IsBase(bool value) const { qstackedbarseries_type_isbase = value; }
    inline void setQStackedBarSeries_Event_IsBase(bool value) const { qstackedbarseries_event_isbase = value; }
    inline void setQStackedBarSeries_EventFilter_IsBase(bool value) const { qstackedbarseries_eventfilter_isbase = value; }
    inline void setQStackedBarSeries_TimerEvent_IsBase(bool value) const { qstackedbarseries_timerevent_isbase = value; }
    inline void setQStackedBarSeries_ChildEvent_IsBase(bool value) const { qstackedbarseries_childevent_isbase = value; }
    inline void setQStackedBarSeries_CustomEvent_IsBase(bool value) const { qstackedbarseries_customevent_isbase = value; }
    inline void setQStackedBarSeries_ConnectNotify_IsBase(bool value) const { qstackedbarseries_connectnotify_isbase = value; }
    inline void setQStackedBarSeries_DisconnectNotify_IsBase(bool value) const { qstackedbarseries_disconnectnotify_isbase = value; }
    inline void setQStackedBarSeries_Sender_IsBase(bool value) const { qstackedbarseries_sender_isbase = value; }
    inline void setQStackedBarSeries_SenderSignalIndex_IsBase(bool value) const { qstackedbarseries_sendersignalindex_isbase = value; }
    inline void setQStackedBarSeries_Receivers_IsBase(bool value) const { qstackedbarseries_receivers_isbase = value; }
    inline void setQStackedBarSeries_IsSignalConnected_IsBase(bool value) const { qstackedbarseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedbarseries_metacall_isbase) {
            qstackedbarseries_metacall_isbase = false;
            return QStackedBarSeries::qt_metacall(param1, param2, param3);
        } else if (qstackedbarseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qstackedbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedBarSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qstackedbarseries_type_isbase) {
            qstackedbarseries_type_isbase = false;
            return QStackedBarSeries::type();
        } else if (qstackedbarseries_type_callback != nullptr) {
            int callback_ret = qstackedbarseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QStackedBarSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstackedbarseries_event_isbase) {
            qstackedbarseries_event_isbase = false;
            return QStackedBarSeries::event(event);
        } else if (qstackedbarseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qstackedbarseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedBarSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedbarseries_eventfilter_isbase) {
            qstackedbarseries_eventfilter_isbase = false;
            return QStackedBarSeries::eventFilter(watched, event);
        } else if (qstackedbarseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qstackedbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStackedBarSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedbarseries_timerevent_isbase) {
            qstackedbarseries_timerevent_isbase = false;
            QStackedBarSeries::timerEvent(event);
        } else if (qstackedbarseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qstackedbarseries_timerevent_callback(this, cbval1);
        } else {
            QStackedBarSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstackedbarseries_childevent_isbase) {
            qstackedbarseries_childevent_isbase = false;
            QStackedBarSeries::childEvent(event);
        } else if (qstackedbarseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qstackedbarseries_childevent_callback(this, cbval1);
        } else {
            QStackedBarSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedbarseries_customevent_isbase) {
            qstackedbarseries_customevent_isbase = false;
            QStackedBarSeries::customEvent(event);
        } else if (qstackedbarseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstackedbarseries_customevent_callback(this, cbval1);
        } else {
            QStackedBarSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedbarseries_connectnotify_isbase) {
            qstackedbarseries_connectnotify_isbase = false;
            QStackedBarSeries::connectNotify(signal);
        } else if (qstackedbarseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstackedbarseries_connectnotify_callback(this, cbval1);
        } else {
            QStackedBarSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedbarseries_disconnectnotify_isbase) {
            qstackedbarseries_disconnectnotify_isbase = false;
            QStackedBarSeries::disconnectNotify(signal);
        } else if (qstackedbarseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstackedbarseries_disconnectnotify_callback(this, cbval1);
        } else {
            QStackedBarSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstackedbarseries_sender_isbase) {
            qstackedbarseries_sender_isbase = false;
            return QStackedBarSeries::sender();
        } else if (qstackedbarseries_sender_callback != nullptr) {
            QObject* callback_ret = qstackedbarseries_sender_callback();
            return callback_ret;
        } else {
            return QStackedBarSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstackedbarseries_sendersignalindex_isbase) {
            qstackedbarseries_sendersignalindex_isbase = false;
            return QStackedBarSeries::senderSignalIndex();
        } else if (qstackedbarseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qstackedbarseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStackedBarSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstackedbarseries_receivers_isbase) {
            qstackedbarseries_receivers_isbase = false;
            return QStackedBarSeries::receivers(signal);
        } else if (qstackedbarseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qstackedbarseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStackedBarSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstackedbarseries_issignalconnected_isbase) {
            qstackedbarseries_issignalconnected_isbase = false;
            return QStackedBarSeries::isSignalConnected(signal);
        } else if (qstackedbarseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qstackedbarseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStackedBarSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QStackedBarSeries_TimerEvent(QStackedBarSeries* self, QTimerEvent* event);
    friend void QStackedBarSeries_QBaseTimerEvent(QStackedBarSeries* self, QTimerEvent* event);
    friend void QStackedBarSeries_ChildEvent(QStackedBarSeries* self, QChildEvent* event);
    friend void QStackedBarSeries_QBaseChildEvent(QStackedBarSeries* self, QChildEvent* event);
    friend void QStackedBarSeries_CustomEvent(QStackedBarSeries* self, QEvent* event);
    friend void QStackedBarSeries_QBaseCustomEvent(QStackedBarSeries* self, QEvent* event);
    friend void QStackedBarSeries_ConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal);
    friend void QStackedBarSeries_QBaseConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal);
    friend void QStackedBarSeries_DisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal);
    friend void QStackedBarSeries_QBaseDisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal);
    friend QObject* QStackedBarSeries_Sender(const QStackedBarSeries* self);
    friend QObject* QStackedBarSeries_QBaseSender(const QStackedBarSeries* self);
    friend int QStackedBarSeries_SenderSignalIndex(const QStackedBarSeries* self);
    friend int QStackedBarSeries_QBaseSenderSignalIndex(const QStackedBarSeries* self);
    friend int QStackedBarSeries_Receivers(const QStackedBarSeries* self, const char* signal);
    friend int QStackedBarSeries_QBaseReceivers(const QStackedBarSeries* self, const char* signal);
    friend bool QStackedBarSeries_IsSignalConnected(const QStackedBarSeries* self, const QMetaMethod* signal);
    friend bool QStackedBarSeries_QBaseIsSignalConnected(const QStackedBarSeries* self, const QMetaMethod* signal);
};

#endif
