#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarSeries so that we can call protected methods
class VirtualQBarSeries final : public QBarSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQBarSeries = true;

    // Virtual class public types (including callbacks)
    using QBarSeries_Metacall_Callback = int (*)(QBarSeries*, int, int, void**);
    using QBarSeries_Type_Callback = int (*)();
    using QBarSeries_Event_Callback = bool (*)(QBarSeries*, QEvent*);
    using QBarSeries_EventFilter_Callback = bool (*)(QBarSeries*, QObject*, QEvent*);
    using QBarSeries_TimerEvent_Callback = void (*)(QBarSeries*, QTimerEvent*);
    using QBarSeries_ChildEvent_Callback = void (*)(QBarSeries*, QChildEvent*);
    using QBarSeries_CustomEvent_Callback = void (*)(QBarSeries*, QEvent*);
    using QBarSeries_ConnectNotify_Callback = void (*)(QBarSeries*, QMetaMethod*);
    using QBarSeries_DisconnectNotify_Callback = void (*)(QBarSeries*, QMetaMethod*);
    using QBarSeries_Sender_Callback = QObject* (*)();
    using QBarSeries_SenderSignalIndex_Callback = int (*)();
    using QBarSeries_Receivers_Callback = int (*)(const QBarSeries*, const char*);
    using QBarSeries_IsSignalConnected_Callback = bool (*)(const QBarSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBarSeries_Metacall_Callback qbarseries_metacall_callback = nullptr;
    QBarSeries_Type_Callback qbarseries_type_callback = nullptr;
    QBarSeries_Event_Callback qbarseries_event_callback = nullptr;
    QBarSeries_EventFilter_Callback qbarseries_eventfilter_callback = nullptr;
    QBarSeries_TimerEvent_Callback qbarseries_timerevent_callback = nullptr;
    QBarSeries_ChildEvent_Callback qbarseries_childevent_callback = nullptr;
    QBarSeries_CustomEvent_Callback qbarseries_customevent_callback = nullptr;
    QBarSeries_ConnectNotify_Callback qbarseries_connectnotify_callback = nullptr;
    QBarSeries_DisconnectNotify_Callback qbarseries_disconnectnotify_callback = nullptr;
    QBarSeries_Sender_Callback qbarseries_sender_callback = nullptr;
    QBarSeries_SenderSignalIndex_Callback qbarseries_sendersignalindex_callback = nullptr;
    QBarSeries_Receivers_Callback qbarseries_receivers_callback = nullptr;
    QBarSeries_IsSignalConnected_Callback qbarseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbarseries_metacall_isbase = false;
    mutable bool qbarseries_type_isbase = false;
    mutable bool qbarseries_event_isbase = false;
    mutable bool qbarseries_eventfilter_isbase = false;
    mutable bool qbarseries_timerevent_isbase = false;
    mutable bool qbarseries_childevent_isbase = false;
    mutable bool qbarseries_customevent_isbase = false;
    mutable bool qbarseries_connectnotify_isbase = false;
    mutable bool qbarseries_disconnectnotify_isbase = false;
    mutable bool qbarseries_sender_isbase = false;
    mutable bool qbarseries_sendersignalindex_isbase = false;
    mutable bool qbarseries_receivers_isbase = false;
    mutable bool qbarseries_issignalconnected_isbase = false;

  public:
    VirtualQBarSeries() : QBarSeries() {};
    VirtualQBarSeries(QObject* parent) : QBarSeries(parent) {};

    ~VirtualQBarSeries() {
        qbarseries_metacall_callback = nullptr;
        qbarseries_type_callback = nullptr;
        qbarseries_event_callback = nullptr;
        qbarseries_eventfilter_callback = nullptr;
        qbarseries_timerevent_callback = nullptr;
        qbarseries_childevent_callback = nullptr;
        qbarseries_customevent_callback = nullptr;
        qbarseries_connectnotify_callback = nullptr;
        qbarseries_disconnectnotify_callback = nullptr;
        qbarseries_sender_callback = nullptr;
        qbarseries_sendersignalindex_callback = nullptr;
        qbarseries_receivers_callback = nullptr;
        qbarseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQBarSeries_Metacall_Callback(QBarSeries_Metacall_Callback cb) { qbarseries_metacall_callback = cb; }
    inline void setQBarSeries_Type_Callback(QBarSeries_Type_Callback cb) { qbarseries_type_callback = cb; }
    inline void setQBarSeries_Event_Callback(QBarSeries_Event_Callback cb) { qbarseries_event_callback = cb; }
    inline void setQBarSeries_EventFilter_Callback(QBarSeries_EventFilter_Callback cb) { qbarseries_eventfilter_callback = cb; }
    inline void setQBarSeries_TimerEvent_Callback(QBarSeries_TimerEvent_Callback cb) { qbarseries_timerevent_callback = cb; }
    inline void setQBarSeries_ChildEvent_Callback(QBarSeries_ChildEvent_Callback cb) { qbarseries_childevent_callback = cb; }
    inline void setQBarSeries_CustomEvent_Callback(QBarSeries_CustomEvent_Callback cb) { qbarseries_customevent_callback = cb; }
    inline void setQBarSeries_ConnectNotify_Callback(QBarSeries_ConnectNotify_Callback cb) { qbarseries_connectnotify_callback = cb; }
    inline void setQBarSeries_DisconnectNotify_Callback(QBarSeries_DisconnectNotify_Callback cb) { qbarseries_disconnectnotify_callback = cb; }
    inline void setQBarSeries_Sender_Callback(QBarSeries_Sender_Callback cb) { qbarseries_sender_callback = cb; }
    inline void setQBarSeries_SenderSignalIndex_Callback(QBarSeries_SenderSignalIndex_Callback cb) { qbarseries_sendersignalindex_callback = cb; }
    inline void setQBarSeries_Receivers_Callback(QBarSeries_Receivers_Callback cb) { qbarseries_receivers_callback = cb; }
    inline void setQBarSeries_IsSignalConnected_Callback(QBarSeries_IsSignalConnected_Callback cb) { qbarseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBarSeries_Metacall_IsBase(bool value) const { qbarseries_metacall_isbase = value; }
    inline void setQBarSeries_Type_IsBase(bool value) const { qbarseries_type_isbase = value; }
    inline void setQBarSeries_Event_IsBase(bool value) const { qbarseries_event_isbase = value; }
    inline void setQBarSeries_EventFilter_IsBase(bool value) const { qbarseries_eventfilter_isbase = value; }
    inline void setQBarSeries_TimerEvent_IsBase(bool value) const { qbarseries_timerevent_isbase = value; }
    inline void setQBarSeries_ChildEvent_IsBase(bool value) const { qbarseries_childevent_isbase = value; }
    inline void setQBarSeries_CustomEvent_IsBase(bool value) const { qbarseries_customevent_isbase = value; }
    inline void setQBarSeries_ConnectNotify_IsBase(bool value) const { qbarseries_connectnotify_isbase = value; }
    inline void setQBarSeries_DisconnectNotify_IsBase(bool value) const { qbarseries_disconnectnotify_isbase = value; }
    inline void setQBarSeries_Sender_IsBase(bool value) const { qbarseries_sender_isbase = value; }
    inline void setQBarSeries_SenderSignalIndex_IsBase(bool value) const { qbarseries_sendersignalindex_isbase = value; }
    inline void setQBarSeries_Receivers_IsBase(bool value) const { qbarseries_receivers_isbase = value; }
    inline void setQBarSeries_IsSignalConnected_IsBase(bool value) const { qbarseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarseries_metacall_isbase) {
            qbarseries_metacall_isbase = false;
            return QBarSeries::qt_metacall(param1, param2, param3);
        } else if (qbarseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QBarSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qbarseries_type_isbase) {
            qbarseries_type_isbase = false;
            return QBarSeries::type();
        } else if (qbarseries_type_callback != nullptr) {
            int callback_ret = qbarseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QBarSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarseries_event_isbase) {
            qbarseries_event_isbase = false;
            return QBarSeries::event(event);
        } else if (qbarseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qbarseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBarSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarseries_eventfilter_isbase) {
            qbarseries_eventfilter_isbase = false;
            return QBarSeries::eventFilter(watched, event);
        } else if (qbarseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QBarSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarseries_timerevent_isbase) {
            qbarseries_timerevent_isbase = false;
            QBarSeries::timerEvent(event);
        } else if (qbarseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qbarseries_timerevent_callback(this, cbval1);
        } else {
            QBarSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarseries_childevent_isbase) {
            qbarseries_childevent_isbase = false;
            QBarSeries::childEvent(event);
        } else if (qbarseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qbarseries_childevent_callback(this, cbval1);
        } else {
            QBarSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarseries_customevent_isbase) {
            qbarseries_customevent_isbase = false;
            QBarSeries::customEvent(event);
        } else if (qbarseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qbarseries_customevent_callback(this, cbval1);
        } else {
            QBarSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarseries_connectnotify_isbase) {
            qbarseries_connectnotify_isbase = false;
            QBarSeries::connectNotify(signal);
        } else if (qbarseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qbarseries_connectnotify_callback(this, cbval1);
        } else {
            QBarSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarseries_disconnectnotify_isbase) {
            qbarseries_disconnectnotify_isbase = false;
            QBarSeries::disconnectNotify(signal);
        } else if (qbarseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qbarseries_disconnectnotify_callback(this, cbval1);
        } else {
            QBarSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbarseries_sender_isbase) {
            qbarseries_sender_isbase = false;
            return QBarSeries::sender();
        } else if (qbarseries_sender_callback != nullptr) {
            QObject* callback_ret = qbarseries_sender_callback();
            return callback_ret;
        } else {
            return QBarSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbarseries_sendersignalindex_isbase) {
            qbarseries_sendersignalindex_isbase = false;
            return QBarSeries::senderSignalIndex();
        } else if (qbarseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qbarseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QBarSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbarseries_receivers_isbase) {
            qbarseries_receivers_isbase = false;
            return QBarSeries::receivers(signal);
        } else if (qbarseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qbarseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBarSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbarseries_issignalconnected_isbase) {
            qbarseries_issignalconnected_isbase = false;
            return QBarSeries::isSignalConnected(signal);
        } else if (qbarseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qbarseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBarSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QBarSeries_TimerEvent(QBarSeries* self, QTimerEvent* event);
    friend void QBarSeries_QBaseTimerEvent(QBarSeries* self, QTimerEvent* event);
    friend void QBarSeries_ChildEvent(QBarSeries* self, QChildEvent* event);
    friend void QBarSeries_QBaseChildEvent(QBarSeries* self, QChildEvent* event);
    friend void QBarSeries_CustomEvent(QBarSeries* self, QEvent* event);
    friend void QBarSeries_QBaseCustomEvent(QBarSeries* self, QEvent* event);
    friend void QBarSeries_ConnectNotify(QBarSeries* self, const QMetaMethod* signal);
    friend void QBarSeries_QBaseConnectNotify(QBarSeries* self, const QMetaMethod* signal);
    friend void QBarSeries_DisconnectNotify(QBarSeries* self, const QMetaMethod* signal);
    friend void QBarSeries_QBaseDisconnectNotify(QBarSeries* self, const QMetaMethod* signal);
    friend QObject* QBarSeries_Sender(const QBarSeries* self);
    friend QObject* QBarSeries_QBaseSender(const QBarSeries* self);
    friend int QBarSeries_SenderSignalIndex(const QBarSeries* self);
    friend int QBarSeries_QBaseSenderSignalIndex(const QBarSeries* self);
    friend int QBarSeries_Receivers(const QBarSeries* self, const char* signal);
    friend int QBarSeries_QBaseReceivers(const QBarSeries* self, const char* signal);
    friend bool QBarSeries_IsSignalConnected(const QBarSeries* self, const QMetaMethod* signal);
    friend bool QBarSeries_QBaseIsSignalConnected(const QBarSeries* self, const QMetaMethod* signal);
};

#endif
