#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQHORIZONTALPERCENTBARSERIES_H
#define SRC_CHARTSC_LIBVIRTUALQHORIZONTALPERCENTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalPercentBarSeries so that we can call protected methods
class VirtualQHorizontalPercentBarSeries : public QHorizontalPercentBarSeries {

  public:
    // Virtual class public types (including callbacks)
    using QHorizontalPercentBarSeries_Metacall_Callback = int (*)(QHorizontalPercentBarSeries*, QMetaObject::Call, int, void**);
    using QHorizontalPercentBarSeries_Type_Callback = QAbstractSeries::SeriesType (*)();
    using QHorizontalPercentBarSeries_Event_Callback = bool (*)(QHorizontalPercentBarSeries*, QEvent*);
    using QHorizontalPercentBarSeries_EventFilter_Callback = bool (*)(QHorizontalPercentBarSeries*, QObject*, QEvent*);
    using QHorizontalPercentBarSeries_TimerEvent_Callback = void (*)(QHorizontalPercentBarSeries*, QTimerEvent*);
    using QHorizontalPercentBarSeries_ChildEvent_Callback = void (*)(QHorizontalPercentBarSeries*, QChildEvent*);
    using QHorizontalPercentBarSeries_CustomEvent_Callback = void (*)(QHorizontalPercentBarSeries*, QEvent*);
    using QHorizontalPercentBarSeries_ConnectNotify_Callback = void (*)(QHorizontalPercentBarSeries*, const QMetaMethod&);
    using QHorizontalPercentBarSeries_DisconnectNotify_Callback = void (*)(QHorizontalPercentBarSeries*, const QMetaMethod&);
    using QHorizontalPercentBarSeries_Sender_Callback = QObject* (*)();
    using QHorizontalPercentBarSeries_SenderSignalIndex_Callback = int (*)();
    using QHorizontalPercentBarSeries_Receivers_Callback = int (*)(const QHorizontalPercentBarSeries*, const char*);
    using QHorizontalPercentBarSeries_IsSignalConnected_Callback = bool (*)(const QHorizontalPercentBarSeries*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QHorizontalPercentBarSeries_Metacall_Callback qhorizontalpercentbarseries_metacall_callback = nullptr;
    QHorizontalPercentBarSeries_Type_Callback qhorizontalpercentbarseries_type_callback = nullptr;
    QHorizontalPercentBarSeries_Event_Callback qhorizontalpercentbarseries_event_callback = nullptr;
    QHorizontalPercentBarSeries_EventFilter_Callback qhorizontalpercentbarseries_eventfilter_callback = nullptr;
    QHorizontalPercentBarSeries_TimerEvent_Callback qhorizontalpercentbarseries_timerevent_callback = nullptr;
    QHorizontalPercentBarSeries_ChildEvent_Callback qhorizontalpercentbarseries_childevent_callback = nullptr;
    QHorizontalPercentBarSeries_CustomEvent_Callback qhorizontalpercentbarseries_customevent_callback = nullptr;
    QHorizontalPercentBarSeries_ConnectNotify_Callback qhorizontalpercentbarseries_connectnotify_callback = nullptr;
    QHorizontalPercentBarSeries_DisconnectNotify_Callback qhorizontalpercentbarseries_disconnectnotify_callback = nullptr;
    QHorizontalPercentBarSeries_Sender_Callback qhorizontalpercentbarseries_sender_callback = nullptr;
    QHorizontalPercentBarSeries_SenderSignalIndex_Callback qhorizontalpercentbarseries_sendersignalindex_callback = nullptr;
    QHorizontalPercentBarSeries_Receivers_Callback qhorizontalpercentbarseries_receivers_callback = nullptr;
    QHorizontalPercentBarSeries_IsSignalConnected_Callback qhorizontalpercentbarseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhorizontalpercentbarseries_metacall_isbase = false;
    mutable bool qhorizontalpercentbarseries_type_isbase = false;
    mutable bool qhorizontalpercentbarseries_event_isbase = false;
    mutable bool qhorizontalpercentbarseries_eventfilter_isbase = false;
    mutable bool qhorizontalpercentbarseries_timerevent_isbase = false;
    mutable bool qhorizontalpercentbarseries_childevent_isbase = false;
    mutable bool qhorizontalpercentbarseries_customevent_isbase = false;
    mutable bool qhorizontalpercentbarseries_connectnotify_isbase = false;
    mutable bool qhorizontalpercentbarseries_disconnectnotify_isbase = false;
    mutable bool qhorizontalpercentbarseries_sender_isbase = false;
    mutable bool qhorizontalpercentbarseries_sendersignalindex_isbase = false;
    mutable bool qhorizontalpercentbarseries_receivers_isbase = false;
    mutable bool qhorizontalpercentbarseries_issignalconnected_isbase = false;

  public:
    VirtualQHorizontalPercentBarSeries() : QHorizontalPercentBarSeries(){};
    VirtualQHorizontalPercentBarSeries(QObject* parent) : QHorizontalPercentBarSeries(parent){};

    ~VirtualQHorizontalPercentBarSeries() {
        qhorizontalpercentbarseries_metacall_callback = nullptr;
        qhorizontalpercentbarseries_type_callback = nullptr;
        qhorizontalpercentbarseries_event_callback = nullptr;
        qhorizontalpercentbarseries_eventfilter_callback = nullptr;
        qhorizontalpercentbarseries_timerevent_callback = nullptr;
        qhorizontalpercentbarseries_childevent_callback = nullptr;
        qhorizontalpercentbarseries_customevent_callback = nullptr;
        qhorizontalpercentbarseries_connectnotify_callback = nullptr;
        qhorizontalpercentbarseries_disconnectnotify_callback = nullptr;
        qhorizontalpercentbarseries_sender_callback = nullptr;
        qhorizontalpercentbarseries_sendersignalindex_callback = nullptr;
        qhorizontalpercentbarseries_receivers_callback = nullptr;
        qhorizontalpercentbarseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQHorizontalPercentBarSeries_Metacall_Callback(QHorizontalPercentBarSeries_Metacall_Callback cb) { qhorizontalpercentbarseries_metacall_callback = cb; }
    void setQHorizontalPercentBarSeries_Type_Callback(QHorizontalPercentBarSeries_Type_Callback cb) { qhorizontalpercentbarseries_type_callback = cb; }
    void setQHorizontalPercentBarSeries_Event_Callback(QHorizontalPercentBarSeries_Event_Callback cb) { qhorizontalpercentbarseries_event_callback = cb; }
    void setQHorizontalPercentBarSeries_EventFilter_Callback(QHorizontalPercentBarSeries_EventFilter_Callback cb) { qhorizontalpercentbarseries_eventfilter_callback = cb; }
    void setQHorizontalPercentBarSeries_TimerEvent_Callback(QHorizontalPercentBarSeries_TimerEvent_Callback cb) { qhorizontalpercentbarseries_timerevent_callback = cb; }
    void setQHorizontalPercentBarSeries_ChildEvent_Callback(QHorizontalPercentBarSeries_ChildEvent_Callback cb) { qhorizontalpercentbarseries_childevent_callback = cb; }
    void setQHorizontalPercentBarSeries_CustomEvent_Callback(QHorizontalPercentBarSeries_CustomEvent_Callback cb) { qhorizontalpercentbarseries_customevent_callback = cb; }
    void setQHorizontalPercentBarSeries_ConnectNotify_Callback(QHorizontalPercentBarSeries_ConnectNotify_Callback cb) { qhorizontalpercentbarseries_connectnotify_callback = cb; }
    void setQHorizontalPercentBarSeries_DisconnectNotify_Callback(QHorizontalPercentBarSeries_DisconnectNotify_Callback cb) { qhorizontalpercentbarseries_disconnectnotify_callback = cb; }
    void setQHorizontalPercentBarSeries_Sender_Callback(QHorizontalPercentBarSeries_Sender_Callback cb) { qhorizontalpercentbarseries_sender_callback = cb; }
    void setQHorizontalPercentBarSeries_SenderSignalIndex_Callback(QHorizontalPercentBarSeries_SenderSignalIndex_Callback cb) { qhorizontalpercentbarseries_sendersignalindex_callback = cb; }
    void setQHorizontalPercentBarSeries_Receivers_Callback(QHorizontalPercentBarSeries_Receivers_Callback cb) { qhorizontalpercentbarseries_receivers_callback = cb; }
    void setQHorizontalPercentBarSeries_IsSignalConnected_Callback(QHorizontalPercentBarSeries_IsSignalConnected_Callback cb) { qhorizontalpercentbarseries_issignalconnected_callback = cb; }

    // Base flag setters
    void setQHorizontalPercentBarSeries_Metacall_IsBase(bool value) const { qhorizontalpercentbarseries_metacall_isbase = value; }
    void setQHorizontalPercentBarSeries_Type_IsBase(bool value) const { qhorizontalpercentbarseries_type_isbase = value; }
    void setQHorizontalPercentBarSeries_Event_IsBase(bool value) const { qhorizontalpercentbarseries_event_isbase = value; }
    void setQHorizontalPercentBarSeries_EventFilter_IsBase(bool value) const { qhorizontalpercentbarseries_eventfilter_isbase = value; }
    void setQHorizontalPercentBarSeries_TimerEvent_IsBase(bool value) const { qhorizontalpercentbarseries_timerevent_isbase = value; }
    void setQHorizontalPercentBarSeries_ChildEvent_IsBase(bool value) const { qhorizontalpercentbarseries_childevent_isbase = value; }
    void setQHorizontalPercentBarSeries_CustomEvent_IsBase(bool value) const { qhorizontalpercentbarseries_customevent_isbase = value; }
    void setQHorizontalPercentBarSeries_ConnectNotify_IsBase(bool value) const { qhorizontalpercentbarseries_connectnotify_isbase = value; }
    void setQHorizontalPercentBarSeries_DisconnectNotify_IsBase(bool value) const { qhorizontalpercentbarseries_disconnectnotify_isbase = value; }
    void setQHorizontalPercentBarSeries_Sender_IsBase(bool value) const { qhorizontalpercentbarseries_sender_isbase = value; }
    void setQHorizontalPercentBarSeries_SenderSignalIndex_IsBase(bool value) const { qhorizontalpercentbarseries_sendersignalindex_isbase = value; }
    void setQHorizontalPercentBarSeries_Receivers_IsBase(bool value) const { qhorizontalpercentbarseries_receivers_isbase = value; }
    void setQHorizontalPercentBarSeries_IsSignalConnected_IsBase(bool value) const { qhorizontalpercentbarseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalpercentbarseries_metacall_isbase) {
            qhorizontalpercentbarseries_metacall_isbase = false;
            return QHorizontalPercentBarSeries::qt_metacall(param1, param2, param3);
        } else if (qhorizontalpercentbarseries_metacall_callback != nullptr) {
            return qhorizontalpercentbarseries_metacall_callback(this, param1, param2, param3);
        } else {
            return QHorizontalPercentBarSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalpercentbarseries_type_isbase) {
            qhorizontalpercentbarseries_type_isbase = false;
            return QHorizontalPercentBarSeries::type();
        } else if (qhorizontalpercentbarseries_type_callback != nullptr) {
            return qhorizontalpercentbarseries_type_callback();
        } else {
            return QHorizontalPercentBarSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalpercentbarseries_event_isbase) {
            qhorizontalpercentbarseries_event_isbase = false;
            return QHorizontalPercentBarSeries::event(event);
        } else if (qhorizontalpercentbarseries_event_callback != nullptr) {
            return qhorizontalpercentbarseries_event_callback(this, event);
        } else {
            return QHorizontalPercentBarSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalpercentbarseries_eventfilter_isbase) {
            qhorizontalpercentbarseries_eventfilter_isbase = false;
            return QHorizontalPercentBarSeries::eventFilter(watched, event);
        } else if (qhorizontalpercentbarseries_eventfilter_callback != nullptr) {
            return qhorizontalpercentbarseries_eventfilter_callback(this, watched, event);
        } else {
            return QHorizontalPercentBarSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalpercentbarseries_timerevent_isbase) {
            qhorizontalpercentbarseries_timerevent_isbase = false;
            QHorizontalPercentBarSeries::timerEvent(event);
        } else if (qhorizontalpercentbarseries_timerevent_callback != nullptr) {
            qhorizontalpercentbarseries_timerevent_callback(this, event);
        } else {
            QHorizontalPercentBarSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalpercentbarseries_childevent_isbase) {
            qhorizontalpercentbarseries_childevent_isbase = false;
            QHorizontalPercentBarSeries::childEvent(event);
        } else if (qhorizontalpercentbarseries_childevent_callback != nullptr) {
            qhorizontalpercentbarseries_childevent_callback(this, event);
        } else {
            QHorizontalPercentBarSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalpercentbarseries_customevent_isbase) {
            qhorizontalpercentbarseries_customevent_isbase = false;
            QHorizontalPercentBarSeries::customEvent(event);
        } else if (qhorizontalpercentbarseries_customevent_callback != nullptr) {
            qhorizontalpercentbarseries_customevent_callback(this, event);
        } else {
            QHorizontalPercentBarSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalpercentbarseries_connectnotify_isbase) {
            qhorizontalpercentbarseries_connectnotify_isbase = false;
            QHorizontalPercentBarSeries::connectNotify(signal);
        } else if (qhorizontalpercentbarseries_connectnotify_callback != nullptr) {
            qhorizontalpercentbarseries_connectnotify_callback(this, signal);
        } else {
            QHorizontalPercentBarSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalpercentbarseries_disconnectnotify_isbase) {
            qhorizontalpercentbarseries_disconnectnotify_isbase = false;
            QHorizontalPercentBarSeries::disconnectNotify(signal);
        } else if (qhorizontalpercentbarseries_disconnectnotify_callback != nullptr) {
            qhorizontalpercentbarseries_disconnectnotify_callback(this, signal);
        } else {
            QHorizontalPercentBarSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhorizontalpercentbarseries_sender_isbase) {
            qhorizontalpercentbarseries_sender_isbase = false;
            return QHorizontalPercentBarSeries::sender();
        } else if (qhorizontalpercentbarseries_sender_callback != nullptr) {
            return qhorizontalpercentbarseries_sender_callback();
        } else {
            return QHorizontalPercentBarSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhorizontalpercentbarseries_sendersignalindex_isbase) {
            qhorizontalpercentbarseries_sendersignalindex_isbase = false;
            return QHorizontalPercentBarSeries::senderSignalIndex();
        } else if (qhorizontalpercentbarseries_sendersignalindex_callback != nullptr) {
            return qhorizontalpercentbarseries_sendersignalindex_callback();
        } else {
            return QHorizontalPercentBarSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhorizontalpercentbarseries_receivers_isbase) {
            qhorizontalpercentbarseries_receivers_isbase = false;
            return QHorizontalPercentBarSeries::receivers(signal);
        } else if (qhorizontalpercentbarseries_receivers_callback != nullptr) {
            return qhorizontalpercentbarseries_receivers_callback(this, signal);
        } else {
            return QHorizontalPercentBarSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhorizontalpercentbarseries_issignalconnected_isbase) {
            qhorizontalpercentbarseries_issignalconnected_isbase = false;
            return QHorizontalPercentBarSeries::isSignalConnected(signal);
        } else if (qhorizontalpercentbarseries_issignalconnected_callback != nullptr) {
            return qhorizontalpercentbarseries_issignalconnected_callback(this, signal);
        } else {
            return QHorizontalPercentBarSeries::isSignalConnected(signal);
        }
    }
};

#endif
