#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQAREASERIES_H
#define SRC_CHARTSC_LIBVIRTUALQAREASERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAreaSeries so that we can call protected methods
class VirtualQAreaSeries : public QAreaSeries {

  public:
    // Virtual class public types (including callbacks)
    using QAreaSeries_Metacall_Callback = int (*)(QAreaSeries*, QMetaObject::Call, int, void**);
    using QAreaSeries_Type_Callback = QAbstractSeries::SeriesType (*)();
    using QAreaSeries_Event_Callback = bool (*)(QAreaSeries*, QEvent*);
    using QAreaSeries_EventFilter_Callback = bool (*)(QAreaSeries*, QObject*, QEvent*);
    using QAreaSeries_TimerEvent_Callback = void (*)(QAreaSeries*, QTimerEvent*);
    using QAreaSeries_ChildEvent_Callback = void (*)(QAreaSeries*, QChildEvent*);
    using QAreaSeries_CustomEvent_Callback = void (*)(QAreaSeries*, QEvent*);
    using QAreaSeries_ConnectNotify_Callback = void (*)(QAreaSeries*, const QMetaMethod&);
    using QAreaSeries_DisconnectNotify_Callback = void (*)(QAreaSeries*, const QMetaMethod&);
    using QAreaSeries_Sender_Callback = QObject* (*)();
    using QAreaSeries_SenderSignalIndex_Callback = int (*)();
    using QAreaSeries_Receivers_Callback = int (*)(const QAreaSeries*, const char*);
    using QAreaSeries_IsSignalConnected_Callback = bool (*)(const QAreaSeries*, const QMetaMethod&);

  protected:
    // Instance callback storage
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
    VirtualQAreaSeries() : QAreaSeries(){};
    VirtualQAreaSeries(QLineSeries* upperSeries) : QAreaSeries(upperSeries){};
    VirtualQAreaSeries(QObject* parent) : QAreaSeries(parent){};
    VirtualQAreaSeries(QLineSeries* upperSeries, QLineSeries* lowerSeries) : QAreaSeries(upperSeries, lowerSeries){};

    ~VirtualQAreaSeries() {
        qareaseries_metacall_callback = nullptr;
        qareaseries_type_callback = nullptr;
        qareaseries_event_callback = nullptr;
        qareaseries_eventfilter_callback = nullptr;
        qareaseries_timerevent_callback = nullptr;
        qareaseries_childevent_callback = nullptr;
        qareaseries_customevent_callback = nullptr;
        qareaseries_connectnotify_callback = nullptr;
        qareaseries_disconnectnotify_callback = nullptr;
        qareaseries_sender_callback = nullptr;
        qareaseries_sendersignalindex_callback = nullptr;
        qareaseries_receivers_callback = nullptr;
        qareaseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAreaSeries_Metacall_Callback(QAreaSeries_Metacall_Callback cb) { qareaseries_metacall_callback = cb; }
    void setQAreaSeries_Type_Callback(QAreaSeries_Type_Callback cb) { qareaseries_type_callback = cb; }
    void setQAreaSeries_Event_Callback(QAreaSeries_Event_Callback cb) { qareaseries_event_callback = cb; }
    void setQAreaSeries_EventFilter_Callback(QAreaSeries_EventFilter_Callback cb) { qareaseries_eventfilter_callback = cb; }
    void setQAreaSeries_TimerEvent_Callback(QAreaSeries_TimerEvent_Callback cb) { qareaseries_timerevent_callback = cb; }
    void setQAreaSeries_ChildEvent_Callback(QAreaSeries_ChildEvent_Callback cb) { qareaseries_childevent_callback = cb; }
    void setQAreaSeries_CustomEvent_Callback(QAreaSeries_CustomEvent_Callback cb) { qareaseries_customevent_callback = cb; }
    void setQAreaSeries_ConnectNotify_Callback(QAreaSeries_ConnectNotify_Callback cb) { qareaseries_connectnotify_callback = cb; }
    void setQAreaSeries_DisconnectNotify_Callback(QAreaSeries_DisconnectNotify_Callback cb) { qareaseries_disconnectnotify_callback = cb; }
    void setQAreaSeries_Sender_Callback(QAreaSeries_Sender_Callback cb) { qareaseries_sender_callback = cb; }
    void setQAreaSeries_SenderSignalIndex_Callback(QAreaSeries_SenderSignalIndex_Callback cb) { qareaseries_sendersignalindex_callback = cb; }
    void setQAreaSeries_Receivers_Callback(QAreaSeries_Receivers_Callback cb) { qareaseries_receivers_callback = cb; }
    void setQAreaSeries_IsSignalConnected_Callback(QAreaSeries_IsSignalConnected_Callback cb) { qareaseries_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAreaSeries_Metacall_IsBase(bool value) const { qareaseries_metacall_isbase = value; }
    void setQAreaSeries_Type_IsBase(bool value) const { qareaseries_type_isbase = value; }
    void setQAreaSeries_Event_IsBase(bool value) const { qareaseries_event_isbase = value; }
    void setQAreaSeries_EventFilter_IsBase(bool value) const { qareaseries_eventfilter_isbase = value; }
    void setQAreaSeries_TimerEvent_IsBase(bool value) const { qareaseries_timerevent_isbase = value; }
    void setQAreaSeries_ChildEvent_IsBase(bool value) const { qareaseries_childevent_isbase = value; }
    void setQAreaSeries_CustomEvent_IsBase(bool value) const { qareaseries_customevent_isbase = value; }
    void setQAreaSeries_ConnectNotify_IsBase(bool value) const { qareaseries_connectnotify_isbase = value; }
    void setQAreaSeries_DisconnectNotify_IsBase(bool value) const { qareaseries_disconnectnotify_isbase = value; }
    void setQAreaSeries_Sender_IsBase(bool value) const { qareaseries_sender_isbase = value; }
    void setQAreaSeries_SenderSignalIndex_IsBase(bool value) const { qareaseries_sendersignalindex_isbase = value; }
    void setQAreaSeries_Receivers_IsBase(bool value) const { qareaseries_receivers_isbase = value; }
    void setQAreaSeries_IsSignalConnected_IsBase(bool value) const { qareaseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qareaseries_metacall_isbase) {
            qareaseries_metacall_isbase = false;
            return QAreaSeries::qt_metacall(param1, param2, param3);
        } else if (qareaseries_metacall_callback != nullptr) {
            return qareaseries_metacall_callback(this, param1, param2, param3);
        } else {
            return QAreaSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qareaseries_type_isbase) {
            qareaseries_type_isbase = false;
            return QAreaSeries::type();
        } else if (qareaseries_type_callback != nullptr) {
            return qareaseries_type_callback();
        } else {
            return QAreaSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qareaseries_event_isbase) {
            qareaseries_event_isbase = false;
            return QAreaSeries::event(event);
        } else if (qareaseries_event_callback != nullptr) {
            return qareaseries_event_callback(this, event);
        } else {
            return QAreaSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qareaseries_eventfilter_isbase) {
            qareaseries_eventfilter_isbase = false;
            return QAreaSeries::eventFilter(watched, event);
        } else if (qareaseries_eventfilter_callback != nullptr) {
            return qareaseries_eventfilter_callback(this, watched, event);
        } else {
            return QAreaSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qareaseries_timerevent_isbase) {
            qareaseries_timerevent_isbase = false;
            QAreaSeries::timerEvent(event);
        } else if (qareaseries_timerevent_callback != nullptr) {
            qareaseries_timerevent_callback(this, event);
        } else {
            QAreaSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qareaseries_childevent_isbase) {
            qareaseries_childevent_isbase = false;
            QAreaSeries::childEvent(event);
        } else if (qareaseries_childevent_callback != nullptr) {
            qareaseries_childevent_callback(this, event);
        } else {
            QAreaSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qareaseries_customevent_isbase) {
            qareaseries_customevent_isbase = false;
            QAreaSeries::customEvent(event);
        } else if (qareaseries_customevent_callback != nullptr) {
            qareaseries_customevent_callback(this, event);
        } else {
            QAreaSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qareaseries_connectnotify_isbase) {
            qareaseries_connectnotify_isbase = false;
            QAreaSeries::connectNotify(signal);
        } else if (qareaseries_connectnotify_callback != nullptr) {
            qareaseries_connectnotify_callback(this, signal);
        } else {
            QAreaSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qareaseries_disconnectnotify_isbase) {
            qareaseries_disconnectnotify_isbase = false;
            QAreaSeries::disconnectNotify(signal);
        } else if (qareaseries_disconnectnotify_callback != nullptr) {
            qareaseries_disconnectnotify_callback(this, signal);
        } else {
            QAreaSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qareaseries_sender_isbase) {
            qareaseries_sender_isbase = false;
            return QAreaSeries::sender();
        } else if (qareaseries_sender_callback != nullptr) {
            return qareaseries_sender_callback();
        } else {
            return QAreaSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qareaseries_sendersignalindex_isbase) {
            qareaseries_sendersignalindex_isbase = false;
            return QAreaSeries::senderSignalIndex();
        } else if (qareaseries_sendersignalindex_callback != nullptr) {
            return qareaseries_sendersignalindex_callback();
        } else {
            return QAreaSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qareaseries_receivers_isbase) {
            qareaseries_receivers_isbase = false;
            return QAreaSeries::receivers(signal);
        } else if (qareaseries_receivers_callback != nullptr) {
            return qareaseries_receivers_callback(this, signal);
        } else {
            return QAreaSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qareaseries_issignalconnected_isbase) {
            qareaseries_issignalconnected_isbase = false;
            return QAreaSeries::isSignalConnected(signal);
        } else if (qareaseries_issignalconnected_callback != nullptr) {
            return qareaseries_issignalconnected_callback(this, signal);
        } else {
            return QAreaSeries::isSignalConnected(signal);
        }
    }
};

#endif
