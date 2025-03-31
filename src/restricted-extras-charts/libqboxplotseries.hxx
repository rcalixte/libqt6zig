#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXPLOTSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXPLOTSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxPlotSeries so that we can call protected methods
class VirtualQBoxPlotSeries : public QBoxPlotSeries {

  public:
    // Virtual class public types (including callbacks)
    using QBoxPlotSeries_Metacall_Callback = int (*)(QBoxPlotSeries*, QMetaObject::Call, int, void**);
    using QBoxPlotSeries_Type_Callback = QAbstractSeries::SeriesType (*)();
    using QBoxPlotSeries_Event_Callback = bool (*)(QBoxPlotSeries*, QEvent*);
    using QBoxPlotSeries_EventFilter_Callback = bool (*)(QBoxPlotSeries*, QObject*, QEvent*);
    using QBoxPlotSeries_TimerEvent_Callback = void (*)(QBoxPlotSeries*, QTimerEvent*);
    using QBoxPlotSeries_ChildEvent_Callback = void (*)(QBoxPlotSeries*, QChildEvent*);
    using QBoxPlotSeries_CustomEvent_Callback = void (*)(QBoxPlotSeries*, QEvent*);
    using QBoxPlotSeries_ConnectNotify_Callback = void (*)(QBoxPlotSeries*, const QMetaMethod&);
    using QBoxPlotSeries_DisconnectNotify_Callback = void (*)(QBoxPlotSeries*, const QMetaMethod&);
    using QBoxPlotSeries_Sender_Callback = QObject* (*)();
    using QBoxPlotSeries_SenderSignalIndex_Callback = int (*)();
    using QBoxPlotSeries_Receivers_Callback = int (*)(const QBoxPlotSeries*, const char*);
    using QBoxPlotSeries_IsSignalConnected_Callback = bool (*)(const QBoxPlotSeries*, const QMetaMethod&);

  protected:
    // Instance callback storage
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
    VirtualQBoxPlotSeries() : QBoxPlotSeries(){};
    VirtualQBoxPlotSeries(QObject* parent) : QBoxPlotSeries(parent){};

    ~VirtualQBoxPlotSeries() {
        qboxplotseries_metacall_callback = nullptr;
        qboxplotseries_type_callback = nullptr;
        qboxplotseries_event_callback = nullptr;
        qboxplotseries_eventfilter_callback = nullptr;
        qboxplotseries_timerevent_callback = nullptr;
        qboxplotseries_childevent_callback = nullptr;
        qboxplotseries_customevent_callback = nullptr;
        qboxplotseries_connectnotify_callback = nullptr;
        qboxplotseries_disconnectnotify_callback = nullptr;
        qboxplotseries_sender_callback = nullptr;
        qboxplotseries_sendersignalindex_callback = nullptr;
        qboxplotseries_receivers_callback = nullptr;
        qboxplotseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQBoxPlotSeries_Metacall_Callback(QBoxPlotSeries_Metacall_Callback cb) { qboxplotseries_metacall_callback = cb; }
    void setQBoxPlotSeries_Type_Callback(QBoxPlotSeries_Type_Callback cb) { qboxplotseries_type_callback = cb; }
    void setQBoxPlotSeries_Event_Callback(QBoxPlotSeries_Event_Callback cb) { qboxplotseries_event_callback = cb; }
    void setQBoxPlotSeries_EventFilter_Callback(QBoxPlotSeries_EventFilter_Callback cb) { qboxplotseries_eventfilter_callback = cb; }
    void setQBoxPlotSeries_TimerEvent_Callback(QBoxPlotSeries_TimerEvent_Callback cb) { qboxplotseries_timerevent_callback = cb; }
    void setQBoxPlotSeries_ChildEvent_Callback(QBoxPlotSeries_ChildEvent_Callback cb) { qboxplotseries_childevent_callback = cb; }
    void setQBoxPlotSeries_CustomEvent_Callback(QBoxPlotSeries_CustomEvent_Callback cb) { qboxplotseries_customevent_callback = cb; }
    void setQBoxPlotSeries_ConnectNotify_Callback(QBoxPlotSeries_ConnectNotify_Callback cb) { qboxplotseries_connectnotify_callback = cb; }
    void setQBoxPlotSeries_DisconnectNotify_Callback(QBoxPlotSeries_DisconnectNotify_Callback cb) { qboxplotseries_disconnectnotify_callback = cb; }
    void setQBoxPlotSeries_Sender_Callback(QBoxPlotSeries_Sender_Callback cb) { qboxplotseries_sender_callback = cb; }
    void setQBoxPlotSeries_SenderSignalIndex_Callback(QBoxPlotSeries_SenderSignalIndex_Callback cb) { qboxplotseries_sendersignalindex_callback = cb; }
    void setQBoxPlotSeries_Receivers_Callback(QBoxPlotSeries_Receivers_Callback cb) { qboxplotseries_receivers_callback = cb; }
    void setQBoxPlotSeries_IsSignalConnected_Callback(QBoxPlotSeries_IsSignalConnected_Callback cb) { qboxplotseries_issignalconnected_callback = cb; }

    // Base flag setters
    void setQBoxPlotSeries_Metacall_IsBase(bool value) const { qboxplotseries_metacall_isbase = value; }
    void setQBoxPlotSeries_Type_IsBase(bool value) const { qboxplotseries_type_isbase = value; }
    void setQBoxPlotSeries_Event_IsBase(bool value) const { qboxplotseries_event_isbase = value; }
    void setQBoxPlotSeries_EventFilter_IsBase(bool value) const { qboxplotseries_eventfilter_isbase = value; }
    void setQBoxPlotSeries_TimerEvent_IsBase(bool value) const { qboxplotseries_timerevent_isbase = value; }
    void setQBoxPlotSeries_ChildEvent_IsBase(bool value) const { qboxplotseries_childevent_isbase = value; }
    void setQBoxPlotSeries_CustomEvent_IsBase(bool value) const { qboxplotseries_customevent_isbase = value; }
    void setQBoxPlotSeries_ConnectNotify_IsBase(bool value) const { qboxplotseries_connectnotify_isbase = value; }
    void setQBoxPlotSeries_DisconnectNotify_IsBase(bool value) const { qboxplotseries_disconnectnotify_isbase = value; }
    void setQBoxPlotSeries_Sender_IsBase(bool value) const { qboxplotseries_sender_isbase = value; }
    void setQBoxPlotSeries_SenderSignalIndex_IsBase(bool value) const { qboxplotseries_sendersignalindex_isbase = value; }
    void setQBoxPlotSeries_Receivers_IsBase(bool value) const { qboxplotseries_receivers_isbase = value; }
    void setQBoxPlotSeries_IsSignalConnected_IsBase(bool value) const { qboxplotseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxplotseries_metacall_isbase) {
            qboxplotseries_metacall_isbase = false;
            return QBoxPlotSeries::qt_metacall(param1, param2, param3);
        } else if (qboxplotseries_metacall_callback != nullptr) {
            return qboxplotseries_metacall_callback(this, param1, param2, param3);
        } else {
            return QBoxPlotSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qboxplotseries_type_isbase) {
            qboxplotseries_type_isbase = false;
            return QBoxPlotSeries::type();
        } else if (qboxplotseries_type_callback != nullptr) {
            return qboxplotseries_type_callback();
        } else {
            return QBoxPlotSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxplotseries_event_isbase) {
            qboxplotseries_event_isbase = false;
            return QBoxPlotSeries::event(event);
        } else if (qboxplotseries_event_callback != nullptr) {
            return qboxplotseries_event_callback(this, event);
        } else {
            return QBoxPlotSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxplotseries_eventfilter_isbase) {
            qboxplotseries_eventfilter_isbase = false;
            return QBoxPlotSeries::eventFilter(watched, event);
        } else if (qboxplotseries_eventfilter_callback != nullptr) {
            return qboxplotseries_eventfilter_callback(this, watched, event);
        } else {
            return QBoxPlotSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxplotseries_timerevent_isbase) {
            qboxplotseries_timerevent_isbase = false;
            QBoxPlotSeries::timerEvent(event);
        } else if (qboxplotseries_timerevent_callback != nullptr) {
            qboxplotseries_timerevent_callback(this, event);
        } else {
            QBoxPlotSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxplotseries_childevent_isbase) {
            qboxplotseries_childevent_isbase = false;
            QBoxPlotSeries::childEvent(event);
        } else if (qboxplotseries_childevent_callback != nullptr) {
            qboxplotseries_childevent_callback(this, event);
        } else {
            QBoxPlotSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxplotseries_customevent_isbase) {
            qboxplotseries_customevent_isbase = false;
            QBoxPlotSeries::customEvent(event);
        } else if (qboxplotseries_customevent_callback != nullptr) {
            qboxplotseries_customevent_callback(this, event);
        } else {
            QBoxPlotSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxplotseries_connectnotify_isbase) {
            qboxplotseries_connectnotify_isbase = false;
            QBoxPlotSeries::connectNotify(signal);
        } else if (qboxplotseries_connectnotify_callback != nullptr) {
            qboxplotseries_connectnotify_callback(this, signal);
        } else {
            QBoxPlotSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxplotseries_disconnectnotify_isbase) {
            qboxplotseries_disconnectnotify_isbase = false;
            QBoxPlotSeries::disconnectNotify(signal);
        } else if (qboxplotseries_disconnectnotify_callback != nullptr) {
            qboxplotseries_disconnectnotify_callback(this, signal);
        } else {
            QBoxPlotSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qboxplotseries_sender_isbase) {
            qboxplotseries_sender_isbase = false;
            return QBoxPlotSeries::sender();
        } else if (qboxplotseries_sender_callback != nullptr) {
            return qboxplotseries_sender_callback();
        } else {
            return QBoxPlotSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qboxplotseries_sendersignalindex_isbase) {
            qboxplotseries_sendersignalindex_isbase = false;
            return QBoxPlotSeries::senderSignalIndex();
        } else if (qboxplotseries_sendersignalindex_callback != nullptr) {
            return qboxplotseries_sendersignalindex_callback();
        } else {
            return QBoxPlotSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qboxplotseries_receivers_isbase) {
            qboxplotseries_receivers_isbase = false;
            return QBoxPlotSeries::receivers(signal);
        } else if (qboxplotseries_receivers_callback != nullptr) {
            return qboxplotseries_receivers_callback(this, signal);
        } else {
            return QBoxPlotSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qboxplotseries_issignalconnected_isbase) {
            qboxplotseries_issignalconnected_isbase = false;
            return QBoxPlotSeries::isSignalConnected(signal);
        } else if (qboxplotseries_issignalconnected_callback != nullptr) {
            return qboxplotseries_issignalconnected_callback(this, signal);
        } else {
            return QBoxPlotSeries::isSignalConnected(signal);
        }
    }
};

#endif
