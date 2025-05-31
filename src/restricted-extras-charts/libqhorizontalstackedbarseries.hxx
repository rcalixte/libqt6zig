#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHORIZONTALSTACKEDBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHORIZONTALSTACKEDBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalStackedBarSeries so that we can call protected methods
class VirtualQHorizontalStackedBarSeries final : public QHorizontalStackedBarSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQHorizontalStackedBarSeries = true;

    // Virtual class public types (including callbacks)
    using QHorizontalStackedBarSeries_Metacall_Callback = int (*)(QHorizontalStackedBarSeries*, int, int, void**);
    using QHorizontalStackedBarSeries_Type_Callback = int (*)();
    using QHorizontalStackedBarSeries_Event_Callback = bool (*)(QHorizontalStackedBarSeries*, QEvent*);
    using QHorizontalStackedBarSeries_EventFilter_Callback = bool (*)(QHorizontalStackedBarSeries*, QObject*, QEvent*);
    using QHorizontalStackedBarSeries_TimerEvent_Callback = void (*)(QHorizontalStackedBarSeries*, QTimerEvent*);
    using QHorizontalStackedBarSeries_ChildEvent_Callback = void (*)(QHorizontalStackedBarSeries*, QChildEvent*);
    using QHorizontalStackedBarSeries_CustomEvent_Callback = void (*)(QHorizontalStackedBarSeries*, QEvent*);
    using QHorizontalStackedBarSeries_ConnectNotify_Callback = void (*)(QHorizontalStackedBarSeries*, QMetaMethod*);
    using QHorizontalStackedBarSeries_DisconnectNotify_Callback = void (*)(QHorizontalStackedBarSeries*, QMetaMethod*);
    using QHorizontalStackedBarSeries_Sender_Callback = QObject* (*)();
    using QHorizontalStackedBarSeries_SenderSignalIndex_Callback = int (*)();
    using QHorizontalStackedBarSeries_Receivers_Callback = int (*)(const QHorizontalStackedBarSeries*, const char*);
    using QHorizontalStackedBarSeries_IsSignalConnected_Callback = bool (*)(const QHorizontalStackedBarSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHorizontalStackedBarSeries_Metacall_Callback qhorizontalstackedbarseries_metacall_callback = nullptr;
    QHorizontalStackedBarSeries_Type_Callback qhorizontalstackedbarseries_type_callback = nullptr;
    QHorizontalStackedBarSeries_Event_Callback qhorizontalstackedbarseries_event_callback = nullptr;
    QHorizontalStackedBarSeries_EventFilter_Callback qhorizontalstackedbarseries_eventfilter_callback = nullptr;
    QHorizontalStackedBarSeries_TimerEvent_Callback qhorizontalstackedbarseries_timerevent_callback = nullptr;
    QHorizontalStackedBarSeries_ChildEvent_Callback qhorizontalstackedbarseries_childevent_callback = nullptr;
    QHorizontalStackedBarSeries_CustomEvent_Callback qhorizontalstackedbarseries_customevent_callback = nullptr;
    QHorizontalStackedBarSeries_ConnectNotify_Callback qhorizontalstackedbarseries_connectnotify_callback = nullptr;
    QHorizontalStackedBarSeries_DisconnectNotify_Callback qhorizontalstackedbarseries_disconnectnotify_callback = nullptr;
    QHorizontalStackedBarSeries_Sender_Callback qhorizontalstackedbarseries_sender_callback = nullptr;
    QHorizontalStackedBarSeries_SenderSignalIndex_Callback qhorizontalstackedbarseries_sendersignalindex_callback = nullptr;
    QHorizontalStackedBarSeries_Receivers_Callback qhorizontalstackedbarseries_receivers_callback = nullptr;
    QHorizontalStackedBarSeries_IsSignalConnected_Callback qhorizontalstackedbarseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhorizontalstackedbarseries_metacall_isbase = false;
    mutable bool qhorizontalstackedbarseries_type_isbase = false;
    mutable bool qhorizontalstackedbarseries_event_isbase = false;
    mutable bool qhorizontalstackedbarseries_eventfilter_isbase = false;
    mutable bool qhorizontalstackedbarseries_timerevent_isbase = false;
    mutable bool qhorizontalstackedbarseries_childevent_isbase = false;
    mutable bool qhorizontalstackedbarseries_customevent_isbase = false;
    mutable bool qhorizontalstackedbarseries_connectnotify_isbase = false;
    mutable bool qhorizontalstackedbarseries_disconnectnotify_isbase = false;
    mutable bool qhorizontalstackedbarseries_sender_isbase = false;
    mutable bool qhorizontalstackedbarseries_sendersignalindex_isbase = false;
    mutable bool qhorizontalstackedbarseries_receivers_isbase = false;
    mutable bool qhorizontalstackedbarseries_issignalconnected_isbase = false;

  public:
    VirtualQHorizontalStackedBarSeries() : QHorizontalStackedBarSeries(){};
    VirtualQHorizontalStackedBarSeries(QObject* parent) : QHorizontalStackedBarSeries(parent){};

    ~VirtualQHorizontalStackedBarSeries() {
        qhorizontalstackedbarseries_metacall_callback = nullptr;
        qhorizontalstackedbarseries_type_callback = nullptr;
        qhorizontalstackedbarseries_event_callback = nullptr;
        qhorizontalstackedbarseries_eventfilter_callback = nullptr;
        qhorizontalstackedbarseries_timerevent_callback = nullptr;
        qhorizontalstackedbarseries_childevent_callback = nullptr;
        qhorizontalstackedbarseries_customevent_callback = nullptr;
        qhorizontalstackedbarseries_connectnotify_callback = nullptr;
        qhorizontalstackedbarseries_disconnectnotify_callback = nullptr;
        qhorizontalstackedbarseries_sender_callback = nullptr;
        qhorizontalstackedbarseries_sendersignalindex_callback = nullptr;
        qhorizontalstackedbarseries_receivers_callback = nullptr;
        qhorizontalstackedbarseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQHorizontalStackedBarSeries_Metacall_Callback(QHorizontalStackedBarSeries_Metacall_Callback cb) { qhorizontalstackedbarseries_metacall_callback = cb; }
    inline void setQHorizontalStackedBarSeries_Type_Callback(QHorizontalStackedBarSeries_Type_Callback cb) { qhorizontalstackedbarseries_type_callback = cb; }
    inline void setQHorizontalStackedBarSeries_Event_Callback(QHorizontalStackedBarSeries_Event_Callback cb) { qhorizontalstackedbarseries_event_callback = cb; }
    inline void setQHorizontalStackedBarSeries_EventFilter_Callback(QHorizontalStackedBarSeries_EventFilter_Callback cb) { qhorizontalstackedbarseries_eventfilter_callback = cb; }
    inline void setQHorizontalStackedBarSeries_TimerEvent_Callback(QHorizontalStackedBarSeries_TimerEvent_Callback cb) { qhorizontalstackedbarseries_timerevent_callback = cb; }
    inline void setQHorizontalStackedBarSeries_ChildEvent_Callback(QHorizontalStackedBarSeries_ChildEvent_Callback cb) { qhorizontalstackedbarseries_childevent_callback = cb; }
    inline void setQHorizontalStackedBarSeries_CustomEvent_Callback(QHorizontalStackedBarSeries_CustomEvent_Callback cb) { qhorizontalstackedbarseries_customevent_callback = cb; }
    inline void setQHorizontalStackedBarSeries_ConnectNotify_Callback(QHorizontalStackedBarSeries_ConnectNotify_Callback cb) { qhorizontalstackedbarseries_connectnotify_callback = cb; }
    inline void setQHorizontalStackedBarSeries_DisconnectNotify_Callback(QHorizontalStackedBarSeries_DisconnectNotify_Callback cb) { qhorizontalstackedbarseries_disconnectnotify_callback = cb; }
    inline void setQHorizontalStackedBarSeries_Sender_Callback(QHorizontalStackedBarSeries_Sender_Callback cb) { qhorizontalstackedbarseries_sender_callback = cb; }
    inline void setQHorizontalStackedBarSeries_SenderSignalIndex_Callback(QHorizontalStackedBarSeries_SenderSignalIndex_Callback cb) { qhorizontalstackedbarseries_sendersignalindex_callback = cb; }
    inline void setQHorizontalStackedBarSeries_Receivers_Callback(QHorizontalStackedBarSeries_Receivers_Callback cb) { qhorizontalstackedbarseries_receivers_callback = cb; }
    inline void setQHorizontalStackedBarSeries_IsSignalConnected_Callback(QHorizontalStackedBarSeries_IsSignalConnected_Callback cb) { qhorizontalstackedbarseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHorizontalStackedBarSeries_Metacall_IsBase(bool value) const { qhorizontalstackedbarseries_metacall_isbase = value; }
    inline void setQHorizontalStackedBarSeries_Type_IsBase(bool value) const { qhorizontalstackedbarseries_type_isbase = value; }
    inline void setQHorizontalStackedBarSeries_Event_IsBase(bool value) const { qhorizontalstackedbarseries_event_isbase = value; }
    inline void setQHorizontalStackedBarSeries_EventFilter_IsBase(bool value) const { qhorizontalstackedbarseries_eventfilter_isbase = value; }
    inline void setQHorizontalStackedBarSeries_TimerEvent_IsBase(bool value) const { qhorizontalstackedbarseries_timerevent_isbase = value; }
    inline void setQHorizontalStackedBarSeries_ChildEvent_IsBase(bool value) const { qhorizontalstackedbarseries_childevent_isbase = value; }
    inline void setQHorizontalStackedBarSeries_CustomEvent_IsBase(bool value) const { qhorizontalstackedbarseries_customevent_isbase = value; }
    inline void setQHorizontalStackedBarSeries_ConnectNotify_IsBase(bool value) const { qhorizontalstackedbarseries_connectnotify_isbase = value; }
    inline void setQHorizontalStackedBarSeries_DisconnectNotify_IsBase(bool value) const { qhorizontalstackedbarseries_disconnectnotify_isbase = value; }
    inline void setQHorizontalStackedBarSeries_Sender_IsBase(bool value) const { qhorizontalstackedbarseries_sender_isbase = value; }
    inline void setQHorizontalStackedBarSeries_SenderSignalIndex_IsBase(bool value) const { qhorizontalstackedbarseries_sendersignalindex_isbase = value; }
    inline void setQHorizontalStackedBarSeries_Receivers_IsBase(bool value) const { qhorizontalstackedbarseries_receivers_isbase = value; }
    inline void setQHorizontalStackedBarSeries_IsSignalConnected_IsBase(bool value) const { qhorizontalstackedbarseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalstackedbarseries_metacall_isbase) {
            qhorizontalstackedbarseries_metacall_isbase = false;
            return QHorizontalStackedBarSeries::qt_metacall(param1, param2, param3);
        } else if (qhorizontalstackedbarseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qhorizontalstackedbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QHorizontalStackedBarSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalstackedbarseries_type_isbase) {
            qhorizontalstackedbarseries_type_isbase = false;
            return QHorizontalStackedBarSeries::type();
        } else if (qhorizontalstackedbarseries_type_callback != nullptr) {
            int callback_ret = qhorizontalstackedbarseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QHorizontalStackedBarSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalstackedbarseries_event_isbase) {
            qhorizontalstackedbarseries_event_isbase = false;
            return QHorizontalStackedBarSeries::event(event);
        } else if (qhorizontalstackedbarseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qhorizontalstackedbarseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHorizontalStackedBarSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalstackedbarseries_eventfilter_isbase) {
            qhorizontalstackedbarseries_eventfilter_isbase = false;
            return QHorizontalStackedBarSeries::eventFilter(watched, event);
        } else if (qhorizontalstackedbarseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qhorizontalstackedbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QHorizontalStackedBarSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalstackedbarseries_timerevent_isbase) {
            qhorizontalstackedbarseries_timerevent_isbase = false;
            QHorizontalStackedBarSeries::timerEvent(event);
        } else if (qhorizontalstackedbarseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qhorizontalstackedbarseries_timerevent_callback(this, cbval1);
        } else {
            QHorizontalStackedBarSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalstackedbarseries_childevent_isbase) {
            qhorizontalstackedbarseries_childevent_isbase = false;
            QHorizontalStackedBarSeries::childEvent(event);
        } else if (qhorizontalstackedbarseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qhorizontalstackedbarseries_childevent_callback(this, cbval1);
        } else {
            QHorizontalStackedBarSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalstackedbarseries_customevent_isbase) {
            qhorizontalstackedbarseries_customevent_isbase = false;
            QHorizontalStackedBarSeries::customEvent(event);
        } else if (qhorizontalstackedbarseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qhorizontalstackedbarseries_customevent_callback(this, cbval1);
        } else {
            QHorizontalStackedBarSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalstackedbarseries_connectnotify_isbase) {
            qhorizontalstackedbarseries_connectnotify_isbase = false;
            QHorizontalStackedBarSeries::connectNotify(signal);
        } else if (qhorizontalstackedbarseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhorizontalstackedbarseries_connectnotify_callback(this, cbval1);
        } else {
            QHorizontalStackedBarSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalstackedbarseries_disconnectnotify_isbase) {
            qhorizontalstackedbarseries_disconnectnotify_isbase = false;
            QHorizontalStackedBarSeries::disconnectNotify(signal);
        } else if (qhorizontalstackedbarseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhorizontalstackedbarseries_disconnectnotify_callback(this, cbval1);
        } else {
            QHorizontalStackedBarSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhorizontalstackedbarseries_sender_isbase) {
            qhorizontalstackedbarseries_sender_isbase = false;
            return QHorizontalStackedBarSeries::sender();
        } else if (qhorizontalstackedbarseries_sender_callback != nullptr) {
            QObject* callback_ret = qhorizontalstackedbarseries_sender_callback();
            return callback_ret;
        } else {
            return QHorizontalStackedBarSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhorizontalstackedbarseries_sendersignalindex_isbase) {
            qhorizontalstackedbarseries_sendersignalindex_isbase = false;
            return QHorizontalStackedBarSeries::senderSignalIndex();
        } else if (qhorizontalstackedbarseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qhorizontalstackedbarseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHorizontalStackedBarSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhorizontalstackedbarseries_receivers_isbase) {
            qhorizontalstackedbarseries_receivers_isbase = false;
            return QHorizontalStackedBarSeries::receivers(signal);
        } else if (qhorizontalstackedbarseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qhorizontalstackedbarseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHorizontalStackedBarSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhorizontalstackedbarseries_issignalconnected_isbase) {
            qhorizontalstackedbarseries_issignalconnected_isbase = false;
            return QHorizontalStackedBarSeries::isSignalConnected(signal);
        } else if (qhorizontalstackedbarseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qhorizontalstackedbarseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHorizontalStackedBarSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QHorizontalStackedBarSeries_TimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event);
    friend void QHorizontalStackedBarSeries_QBaseTimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event);
    friend void QHorizontalStackedBarSeries_ChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event);
    friend void QHorizontalStackedBarSeries_QBaseChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event);
    friend void QHorizontalStackedBarSeries_CustomEvent(QHorizontalStackedBarSeries* self, QEvent* event);
    friend void QHorizontalStackedBarSeries_QBaseCustomEvent(QHorizontalStackedBarSeries* self, QEvent* event);
    friend void QHorizontalStackedBarSeries_ConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalStackedBarSeries_QBaseConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalStackedBarSeries_DisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalStackedBarSeries_QBaseDisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
    friend QObject* QHorizontalStackedBarSeries_Sender(const QHorizontalStackedBarSeries* self);
    friend QObject* QHorizontalStackedBarSeries_QBaseSender(const QHorizontalStackedBarSeries* self);
    friend int QHorizontalStackedBarSeries_SenderSignalIndex(const QHorizontalStackedBarSeries* self);
    friend int QHorizontalStackedBarSeries_QBaseSenderSignalIndex(const QHorizontalStackedBarSeries* self);
    friend int QHorizontalStackedBarSeries_Receivers(const QHorizontalStackedBarSeries* self, const char* signal);
    friend int QHorizontalStackedBarSeries_QBaseReceivers(const QHorizontalStackedBarSeries* self, const char* signal);
    friend bool QHorizontalStackedBarSeries_IsSignalConnected(const QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
    friend bool QHorizontalStackedBarSeries_QBaseIsSignalConnected(const QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
};

#endif
