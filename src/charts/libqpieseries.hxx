#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQPIESERIES_H
#define SRC_CHARTSC_LIBVIRTUALQPIESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieSeries so that we can call protected methods
class VirtualQPieSeries : public QPieSeries {

  public:
    // Virtual class public types (including callbacks)
    using QPieSeries_Metacall_Callback = int (*)(QPieSeries*, QMetaObject::Call, int, void**);
    using QPieSeries_Type_Callback = QAbstractSeries::SeriesType (*)();
    using QPieSeries_Event_Callback = bool (*)(QPieSeries*, QEvent*);
    using QPieSeries_EventFilter_Callback = bool (*)(QPieSeries*, QObject*, QEvent*);
    using QPieSeries_TimerEvent_Callback = void (*)(QPieSeries*, QTimerEvent*);
    using QPieSeries_ChildEvent_Callback = void (*)(QPieSeries*, QChildEvent*);
    using QPieSeries_CustomEvent_Callback = void (*)(QPieSeries*, QEvent*);
    using QPieSeries_ConnectNotify_Callback = void (*)(QPieSeries*, const QMetaMethod&);
    using QPieSeries_DisconnectNotify_Callback = void (*)(QPieSeries*, const QMetaMethod&);
    using QPieSeries_Sender_Callback = QObject* (*)();
    using QPieSeries_SenderSignalIndex_Callback = int (*)();
    using QPieSeries_Receivers_Callback = int (*)(const QPieSeries*, const char*);
    using QPieSeries_IsSignalConnected_Callback = bool (*)(const QPieSeries*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPieSeries_Metacall_Callback qpieseries_metacall_callback = nullptr;
    QPieSeries_Type_Callback qpieseries_type_callback = nullptr;
    QPieSeries_Event_Callback qpieseries_event_callback = nullptr;
    QPieSeries_EventFilter_Callback qpieseries_eventfilter_callback = nullptr;
    QPieSeries_TimerEvent_Callback qpieseries_timerevent_callback = nullptr;
    QPieSeries_ChildEvent_Callback qpieseries_childevent_callback = nullptr;
    QPieSeries_CustomEvent_Callback qpieseries_customevent_callback = nullptr;
    QPieSeries_ConnectNotify_Callback qpieseries_connectnotify_callback = nullptr;
    QPieSeries_DisconnectNotify_Callback qpieseries_disconnectnotify_callback = nullptr;
    QPieSeries_Sender_Callback qpieseries_sender_callback = nullptr;
    QPieSeries_SenderSignalIndex_Callback qpieseries_sendersignalindex_callback = nullptr;
    QPieSeries_Receivers_Callback qpieseries_receivers_callback = nullptr;
    QPieSeries_IsSignalConnected_Callback qpieseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpieseries_metacall_isbase = false;
    mutable bool qpieseries_type_isbase = false;
    mutable bool qpieseries_event_isbase = false;
    mutable bool qpieseries_eventfilter_isbase = false;
    mutable bool qpieseries_timerevent_isbase = false;
    mutable bool qpieseries_childevent_isbase = false;
    mutable bool qpieseries_customevent_isbase = false;
    mutable bool qpieseries_connectnotify_isbase = false;
    mutable bool qpieseries_disconnectnotify_isbase = false;
    mutable bool qpieseries_sender_isbase = false;
    mutable bool qpieseries_sendersignalindex_isbase = false;
    mutable bool qpieseries_receivers_isbase = false;
    mutable bool qpieseries_issignalconnected_isbase = false;

  public:
    VirtualQPieSeries() : QPieSeries(){};
    VirtualQPieSeries(QObject* parent) : QPieSeries(parent){};

    ~VirtualQPieSeries() {
        qpieseries_metacall_callback = nullptr;
        qpieseries_type_callback = nullptr;
        qpieseries_event_callback = nullptr;
        qpieseries_eventfilter_callback = nullptr;
        qpieseries_timerevent_callback = nullptr;
        qpieseries_childevent_callback = nullptr;
        qpieseries_customevent_callback = nullptr;
        qpieseries_connectnotify_callback = nullptr;
        qpieseries_disconnectnotify_callback = nullptr;
        qpieseries_sender_callback = nullptr;
        qpieseries_sendersignalindex_callback = nullptr;
        qpieseries_receivers_callback = nullptr;
        qpieseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPieSeries_Metacall_Callback(QPieSeries_Metacall_Callback cb) { qpieseries_metacall_callback = cb; }
    void setQPieSeries_Type_Callback(QPieSeries_Type_Callback cb) { qpieseries_type_callback = cb; }
    void setQPieSeries_Event_Callback(QPieSeries_Event_Callback cb) { qpieseries_event_callback = cb; }
    void setQPieSeries_EventFilter_Callback(QPieSeries_EventFilter_Callback cb) { qpieseries_eventfilter_callback = cb; }
    void setQPieSeries_TimerEvent_Callback(QPieSeries_TimerEvent_Callback cb) { qpieseries_timerevent_callback = cb; }
    void setQPieSeries_ChildEvent_Callback(QPieSeries_ChildEvent_Callback cb) { qpieseries_childevent_callback = cb; }
    void setQPieSeries_CustomEvent_Callback(QPieSeries_CustomEvent_Callback cb) { qpieseries_customevent_callback = cb; }
    void setQPieSeries_ConnectNotify_Callback(QPieSeries_ConnectNotify_Callback cb) { qpieseries_connectnotify_callback = cb; }
    void setQPieSeries_DisconnectNotify_Callback(QPieSeries_DisconnectNotify_Callback cb) { qpieseries_disconnectnotify_callback = cb; }
    void setQPieSeries_Sender_Callback(QPieSeries_Sender_Callback cb) { qpieseries_sender_callback = cb; }
    void setQPieSeries_SenderSignalIndex_Callback(QPieSeries_SenderSignalIndex_Callback cb) { qpieseries_sendersignalindex_callback = cb; }
    void setQPieSeries_Receivers_Callback(QPieSeries_Receivers_Callback cb) { qpieseries_receivers_callback = cb; }
    void setQPieSeries_IsSignalConnected_Callback(QPieSeries_IsSignalConnected_Callback cb) { qpieseries_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPieSeries_Metacall_IsBase(bool value) const { qpieseries_metacall_isbase = value; }
    void setQPieSeries_Type_IsBase(bool value) const { qpieseries_type_isbase = value; }
    void setQPieSeries_Event_IsBase(bool value) const { qpieseries_event_isbase = value; }
    void setQPieSeries_EventFilter_IsBase(bool value) const { qpieseries_eventfilter_isbase = value; }
    void setQPieSeries_TimerEvent_IsBase(bool value) const { qpieseries_timerevent_isbase = value; }
    void setQPieSeries_ChildEvent_IsBase(bool value) const { qpieseries_childevent_isbase = value; }
    void setQPieSeries_CustomEvent_IsBase(bool value) const { qpieseries_customevent_isbase = value; }
    void setQPieSeries_ConnectNotify_IsBase(bool value) const { qpieseries_connectnotify_isbase = value; }
    void setQPieSeries_DisconnectNotify_IsBase(bool value) const { qpieseries_disconnectnotify_isbase = value; }
    void setQPieSeries_Sender_IsBase(bool value) const { qpieseries_sender_isbase = value; }
    void setQPieSeries_SenderSignalIndex_IsBase(bool value) const { qpieseries_sendersignalindex_isbase = value; }
    void setQPieSeries_Receivers_IsBase(bool value) const { qpieseries_receivers_isbase = value; }
    void setQPieSeries_IsSignalConnected_IsBase(bool value) const { qpieseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpieseries_metacall_isbase) {
            qpieseries_metacall_isbase = false;
            return QPieSeries::qt_metacall(param1, param2, param3);
        } else if (qpieseries_metacall_callback != nullptr) {
            return qpieseries_metacall_callback(this, param1, param2, param3);
        } else {
            return QPieSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qpieseries_type_isbase) {
            qpieseries_type_isbase = false;
            return QPieSeries::type();
        } else if (qpieseries_type_callback != nullptr) {
            return qpieseries_type_callback();
        } else {
            return QPieSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpieseries_event_isbase) {
            qpieseries_event_isbase = false;
            return QPieSeries::event(event);
        } else if (qpieseries_event_callback != nullptr) {
            return qpieseries_event_callback(this, event);
        } else {
            return QPieSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpieseries_eventfilter_isbase) {
            qpieseries_eventfilter_isbase = false;
            return QPieSeries::eventFilter(watched, event);
        } else if (qpieseries_eventfilter_callback != nullptr) {
            return qpieseries_eventfilter_callback(this, watched, event);
        } else {
            return QPieSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpieseries_timerevent_isbase) {
            qpieseries_timerevent_isbase = false;
            QPieSeries::timerEvent(event);
        } else if (qpieseries_timerevent_callback != nullptr) {
            qpieseries_timerevent_callback(this, event);
        } else {
            QPieSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpieseries_childevent_isbase) {
            qpieseries_childevent_isbase = false;
            QPieSeries::childEvent(event);
        } else if (qpieseries_childevent_callback != nullptr) {
            qpieseries_childevent_callback(this, event);
        } else {
            QPieSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpieseries_customevent_isbase) {
            qpieseries_customevent_isbase = false;
            QPieSeries::customEvent(event);
        } else if (qpieseries_customevent_callback != nullptr) {
            qpieseries_customevent_callback(this, event);
        } else {
            QPieSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpieseries_connectnotify_isbase) {
            qpieseries_connectnotify_isbase = false;
            QPieSeries::connectNotify(signal);
        } else if (qpieseries_connectnotify_callback != nullptr) {
            qpieseries_connectnotify_callback(this, signal);
        } else {
            QPieSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpieseries_disconnectnotify_isbase) {
            qpieseries_disconnectnotify_isbase = false;
            QPieSeries::disconnectNotify(signal);
        } else if (qpieseries_disconnectnotify_callback != nullptr) {
            qpieseries_disconnectnotify_callback(this, signal);
        } else {
            QPieSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpieseries_sender_isbase) {
            qpieseries_sender_isbase = false;
            return QPieSeries::sender();
        } else if (qpieseries_sender_callback != nullptr) {
            return qpieseries_sender_callback();
        } else {
            return QPieSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpieseries_sendersignalindex_isbase) {
            qpieseries_sendersignalindex_isbase = false;
            return QPieSeries::senderSignalIndex();
        } else if (qpieseries_sendersignalindex_callback != nullptr) {
            return qpieseries_sendersignalindex_callback();
        } else {
            return QPieSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpieseries_receivers_isbase) {
            qpieseries_receivers_isbase = false;
            return QPieSeries::receivers(signal);
        } else if (qpieseries_receivers_callback != nullptr) {
            return qpieseries_receivers_callback(this, signal);
        } else {
            return QPieSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpieseries_issignalconnected_isbase) {
            qpieseries_issignalconnected_isbase = false;
            return QPieSeries::isSignalConnected(signal);
        } else if (qpieseries_issignalconnected_callback != nullptr) {
            return qpieseries_issignalconnected_callback(this, signal);
        } else {
            return QPieSeries::isSignalConnected(signal);
        }
    }
};

#endif
