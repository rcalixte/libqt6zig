#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXPLOTLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXPLOTLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxPlotLegendMarker so that we can call protected methods
class VirtualQBoxPlotLegendMarker : public QBoxPlotLegendMarker {

  public:
    // Virtual class public types (including callbacks)
    using QBoxPlotLegendMarker_Metacall_Callback = int (*)(QBoxPlotLegendMarker*, QMetaObject::Call, int, void**);
    using QBoxPlotLegendMarker_Type_Callback = QLegendMarker::LegendMarkerType (*)();
    using QBoxPlotLegendMarker_Series_Callback = QBoxPlotSeries* (*)();
    using QBoxPlotLegendMarker_Event_Callback = bool (*)(QBoxPlotLegendMarker*, QEvent*);
    using QBoxPlotLegendMarker_EventFilter_Callback = bool (*)(QBoxPlotLegendMarker*, QObject*, QEvent*);
    using QBoxPlotLegendMarker_TimerEvent_Callback = void (*)(QBoxPlotLegendMarker*, QTimerEvent*);
    using QBoxPlotLegendMarker_ChildEvent_Callback = void (*)(QBoxPlotLegendMarker*, QChildEvent*);
    using QBoxPlotLegendMarker_CustomEvent_Callback = void (*)(QBoxPlotLegendMarker*, QEvent*);
    using QBoxPlotLegendMarker_ConnectNotify_Callback = void (*)(QBoxPlotLegendMarker*, const QMetaMethod&);
    using QBoxPlotLegendMarker_DisconnectNotify_Callback = void (*)(QBoxPlotLegendMarker*, const QMetaMethod&);
    using QBoxPlotLegendMarker_Sender_Callback = QObject* (*)();
    using QBoxPlotLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QBoxPlotLegendMarker_Receivers_Callback = int (*)(const QBoxPlotLegendMarker*, const char*);
    using QBoxPlotLegendMarker_IsSignalConnected_Callback = bool (*)(const QBoxPlotLegendMarker*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QBoxPlotLegendMarker_Metacall_Callback qboxplotlegendmarker_metacall_callback = nullptr;
    QBoxPlotLegendMarker_Type_Callback qboxplotlegendmarker_type_callback = nullptr;
    QBoxPlotLegendMarker_Series_Callback qboxplotlegendmarker_series_callback = nullptr;
    QBoxPlotLegendMarker_Event_Callback qboxplotlegendmarker_event_callback = nullptr;
    QBoxPlotLegendMarker_EventFilter_Callback qboxplotlegendmarker_eventfilter_callback = nullptr;
    QBoxPlotLegendMarker_TimerEvent_Callback qboxplotlegendmarker_timerevent_callback = nullptr;
    QBoxPlotLegendMarker_ChildEvent_Callback qboxplotlegendmarker_childevent_callback = nullptr;
    QBoxPlotLegendMarker_CustomEvent_Callback qboxplotlegendmarker_customevent_callback = nullptr;
    QBoxPlotLegendMarker_ConnectNotify_Callback qboxplotlegendmarker_connectnotify_callback = nullptr;
    QBoxPlotLegendMarker_DisconnectNotify_Callback qboxplotlegendmarker_disconnectnotify_callback = nullptr;
    QBoxPlotLegendMarker_Sender_Callback qboxplotlegendmarker_sender_callback = nullptr;
    QBoxPlotLegendMarker_SenderSignalIndex_Callback qboxplotlegendmarker_sendersignalindex_callback = nullptr;
    QBoxPlotLegendMarker_Receivers_Callback qboxplotlegendmarker_receivers_callback = nullptr;
    QBoxPlotLegendMarker_IsSignalConnected_Callback qboxplotlegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qboxplotlegendmarker_metacall_isbase = false;
    mutable bool qboxplotlegendmarker_type_isbase = false;
    mutable bool qboxplotlegendmarker_series_isbase = false;
    mutable bool qboxplotlegendmarker_event_isbase = false;
    mutable bool qboxplotlegendmarker_eventfilter_isbase = false;
    mutable bool qboxplotlegendmarker_timerevent_isbase = false;
    mutable bool qboxplotlegendmarker_childevent_isbase = false;
    mutable bool qboxplotlegendmarker_customevent_isbase = false;
    mutable bool qboxplotlegendmarker_connectnotify_isbase = false;
    mutable bool qboxplotlegendmarker_disconnectnotify_isbase = false;
    mutable bool qboxplotlegendmarker_sender_isbase = false;
    mutable bool qboxplotlegendmarker_sendersignalindex_isbase = false;
    mutable bool qboxplotlegendmarker_receivers_isbase = false;
    mutable bool qboxplotlegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend) : QBoxPlotLegendMarker(series, legend){};
    VirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend, QObject* parent) : QBoxPlotLegendMarker(series, legend, parent){};

    ~VirtualQBoxPlotLegendMarker() {
        qboxplotlegendmarker_metacall_callback = nullptr;
        qboxplotlegendmarker_type_callback = nullptr;
        qboxplotlegendmarker_series_callback = nullptr;
        qboxplotlegendmarker_event_callback = nullptr;
        qboxplotlegendmarker_eventfilter_callback = nullptr;
        qboxplotlegendmarker_timerevent_callback = nullptr;
        qboxplotlegendmarker_childevent_callback = nullptr;
        qboxplotlegendmarker_customevent_callback = nullptr;
        qboxplotlegendmarker_connectnotify_callback = nullptr;
        qboxplotlegendmarker_disconnectnotify_callback = nullptr;
        qboxplotlegendmarker_sender_callback = nullptr;
        qboxplotlegendmarker_sendersignalindex_callback = nullptr;
        qboxplotlegendmarker_receivers_callback = nullptr;
        qboxplotlegendmarker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQBoxPlotLegendMarker_Metacall_Callback(QBoxPlotLegendMarker_Metacall_Callback cb) { qboxplotlegendmarker_metacall_callback = cb; }
    void setQBoxPlotLegendMarker_Type_Callback(QBoxPlotLegendMarker_Type_Callback cb) { qboxplotlegendmarker_type_callback = cb; }
    void setQBoxPlotLegendMarker_Series_Callback(QBoxPlotLegendMarker_Series_Callback cb) { qboxplotlegendmarker_series_callback = cb; }
    void setQBoxPlotLegendMarker_Event_Callback(QBoxPlotLegendMarker_Event_Callback cb) { qboxplotlegendmarker_event_callback = cb; }
    void setQBoxPlotLegendMarker_EventFilter_Callback(QBoxPlotLegendMarker_EventFilter_Callback cb) { qboxplotlegendmarker_eventfilter_callback = cb; }
    void setQBoxPlotLegendMarker_TimerEvent_Callback(QBoxPlotLegendMarker_TimerEvent_Callback cb) { qboxplotlegendmarker_timerevent_callback = cb; }
    void setQBoxPlotLegendMarker_ChildEvent_Callback(QBoxPlotLegendMarker_ChildEvent_Callback cb) { qboxplotlegendmarker_childevent_callback = cb; }
    void setQBoxPlotLegendMarker_CustomEvent_Callback(QBoxPlotLegendMarker_CustomEvent_Callback cb) { qboxplotlegendmarker_customevent_callback = cb; }
    void setQBoxPlotLegendMarker_ConnectNotify_Callback(QBoxPlotLegendMarker_ConnectNotify_Callback cb) { qboxplotlegendmarker_connectnotify_callback = cb; }
    void setQBoxPlotLegendMarker_DisconnectNotify_Callback(QBoxPlotLegendMarker_DisconnectNotify_Callback cb) { qboxplotlegendmarker_disconnectnotify_callback = cb; }
    void setQBoxPlotLegendMarker_Sender_Callback(QBoxPlotLegendMarker_Sender_Callback cb) { qboxplotlegendmarker_sender_callback = cb; }
    void setQBoxPlotLegendMarker_SenderSignalIndex_Callback(QBoxPlotLegendMarker_SenderSignalIndex_Callback cb) { qboxplotlegendmarker_sendersignalindex_callback = cb; }
    void setQBoxPlotLegendMarker_Receivers_Callback(QBoxPlotLegendMarker_Receivers_Callback cb) { qboxplotlegendmarker_receivers_callback = cb; }
    void setQBoxPlotLegendMarker_IsSignalConnected_Callback(QBoxPlotLegendMarker_IsSignalConnected_Callback cb) { qboxplotlegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    void setQBoxPlotLegendMarker_Metacall_IsBase(bool value) const { qboxplotlegendmarker_metacall_isbase = value; }
    void setQBoxPlotLegendMarker_Type_IsBase(bool value) const { qboxplotlegendmarker_type_isbase = value; }
    void setQBoxPlotLegendMarker_Series_IsBase(bool value) const { qboxplotlegendmarker_series_isbase = value; }
    void setQBoxPlotLegendMarker_Event_IsBase(bool value) const { qboxplotlegendmarker_event_isbase = value; }
    void setQBoxPlotLegendMarker_EventFilter_IsBase(bool value) const { qboxplotlegendmarker_eventfilter_isbase = value; }
    void setQBoxPlotLegendMarker_TimerEvent_IsBase(bool value) const { qboxplotlegendmarker_timerevent_isbase = value; }
    void setQBoxPlotLegendMarker_ChildEvent_IsBase(bool value) const { qboxplotlegendmarker_childevent_isbase = value; }
    void setQBoxPlotLegendMarker_CustomEvent_IsBase(bool value) const { qboxplotlegendmarker_customevent_isbase = value; }
    void setQBoxPlotLegendMarker_ConnectNotify_IsBase(bool value) const { qboxplotlegendmarker_connectnotify_isbase = value; }
    void setQBoxPlotLegendMarker_DisconnectNotify_IsBase(bool value) const { qboxplotlegendmarker_disconnectnotify_isbase = value; }
    void setQBoxPlotLegendMarker_Sender_IsBase(bool value) const { qboxplotlegendmarker_sender_isbase = value; }
    void setQBoxPlotLegendMarker_SenderSignalIndex_IsBase(bool value) const { qboxplotlegendmarker_sendersignalindex_isbase = value; }
    void setQBoxPlotLegendMarker_Receivers_IsBase(bool value) const { qboxplotlegendmarker_receivers_isbase = value; }
    void setQBoxPlotLegendMarker_IsSignalConnected_IsBase(bool value) const { qboxplotlegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxplotlegendmarker_metacall_isbase) {
            qboxplotlegendmarker_metacall_isbase = false;
            return QBoxPlotLegendMarker::qt_metacall(param1, param2, param3);
        } else if (qboxplotlegendmarker_metacall_callback != nullptr) {
            return qboxplotlegendmarker_metacall_callback(this, param1, param2, param3);
        } else {
            return QBoxPlotLegendMarker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qboxplotlegendmarker_type_isbase) {
            qboxplotlegendmarker_type_isbase = false;
            return QBoxPlotLegendMarker::type();
        } else if (qboxplotlegendmarker_type_callback != nullptr) {
            return qboxplotlegendmarker_type_callback();
        } else {
            return QBoxPlotLegendMarker::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QBoxPlotSeries* series() override {
        if (qboxplotlegendmarker_series_isbase) {
            qboxplotlegendmarker_series_isbase = false;
            return QBoxPlotLegendMarker::series();
        } else if (qboxplotlegendmarker_series_callback != nullptr) {
            return qboxplotlegendmarker_series_callback();
        } else {
            return QBoxPlotLegendMarker::series();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxplotlegendmarker_event_isbase) {
            qboxplotlegendmarker_event_isbase = false;
            return QBoxPlotLegendMarker::event(event);
        } else if (qboxplotlegendmarker_event_callback != nullptr) {
            return qboxplotlegendmarker_event_callback(this, event);
        } else {
            return QBoxPlotLegendMarker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxplotlegendmarker_eventfilter_isbase) {
            qboxplotlegendmarker_eventfilter_isbase = false;
            return QBoxPlotLegendMarker::eventFilter(watched, event);
        } else if (qboxplotlegendmarker_eventfilter_callback != nullptr) {
            return qboxplotlegendmarker_eventfilter_callback(this, watched, event);
        } else {
            return QBoxPlotLegendMarker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxplotlegendmarker_timerevent_isbase) {
            qboxplotlegendmarker_timerevent_isbase = false;
            QBoxPlotLegendMarker::timerEvent(event);
        } else if (qboxplotlegendmarker_timerevent_callback != nullptr) {
            qboxplotlegendmarker_timerevent_callback(this, event);
        } else {
            QBoxPlotLegendMarker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxplotlegendmarker_childevent_isbase) {
            qboxplotlegendmarker_childevent_isbase = false;
            QBoxPlotLegendMarker::childEvent(event);
        } else if (qboxplotlegendmarker_childevent_callback != nullptr) {
            qboxplotlegendmarker_childevent_callback(this, event);
        } else {
            QBoxPlotLegendMarker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxplotlegendmarker_customevent_isbase) {
            qboxplotlegendmarker_customevent_isbase = false;
            QBoxPlotLegendMarker::customEvent(event);
        } else if (qboxplotlegendmarker_customevent_callback != nullptr) {
            qboxplotlegendmarker_customevent_callback(this, event);
        } else {
            QBoxPlotLegendMarker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxplotlegendmarker_connectnotify_isbase) {
            qboxplotlegendmarker_connectnotify_isbase = false;
            QBoxPlotLegendMarker::connectNotify(signal);
        } else if (qboxplotlegendmarker_connectnotify_callback != nullptr) {
            qboxplotlegendmarker_connectnotify_callback(this, signal);
        } else {
            QBoxPlotLegendMarker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxplotlegendmarker_disconnectnotify_isbase) {
            qboxplotlegendmarker_disconnectnotify_isbase = false;
            QBoxPlotLegendMarker::disconnectNotify(signal);
        } else if (qboxplotlegendmarker_disconnectnotify_callback != nullptr) {
            qboxplotlegendmarker_disconnectnotify_callback(this, signal);
        } else {
            QBoxPlotLegendMarker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qboxplotlegendmarker_sender_isbase) {
            qboxplotlegendmarker_sender_isbase = false;
            return QBoxPlotLegendMarker::sender();
        } else if (qboxplotlegendmarker_sender_callback != nullptr) {
            return qboxplotlegendmarker_sender_callback();
        } else {
            return QBoxPlotLegendMarker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qboxplotlegendmarker_sendersignalindex_isbase) {
            qboxplotlegendmarker_sendersignalindex_isbase = false;
            return QBoxPlotLegendMarker::senderSignalIndex();
        } else if (qboxplotlegendmarker_sendersignalindex_callback != nullptr) {
            return qboxplotlegendmarker_sendersignalindex_callback();
        } else {
            return QBoxPlotLegendMarker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qboxplotlegendmarker_receivers_isbase) {
            qboxplotlegendmarker_receivers_isbase = false;
            return QBoxPlotLegendMarker::receivers(signal);
        } else if (qboxplotlegendmarker_receivers_callback != nullptr) {
            return qboxplotlegendmarker_receivers_callback(this, signal);
        } else {
            return QBoxPlotLegendMarker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qboxplotlegendmarker_issignalconnected_isbase) {
            qboxplotlegendmarker_issignalconnected_isbase = false;
            return QBoxPlotLegendMarker::isSignalConnected(signal);
        } else if (qboxplotlegendmarker_issignalconnected_callback != nullptr) {
            return qboxplotlegendmarker_issignalconnected_callback(this, signal);
        } else {
            return QBoxPlotLegendMarker::isSignalConnected(signal);
        }
    }
};

#endif
