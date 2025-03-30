#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQAREALEGENDMARKER_H
#define SRC_CHARTSC_LIBVIRTUALQAREALEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAreaLegendMarker so that we can call protected methods
class VirtualQAreaLegendMarker : public QAreaLegendMarker {

  public:
    // Virtual class public types (including callbacks)
    using QAreaLegendMarker_Metacall_Callback = int (*)(QAreaLegendMarker*, QMetaObject::Call, int, void**);
    using QAreaLegendMarker_Type_Callback = QLegendMarker::LegendMarkerType (*)();
    using QAreaLegendMarker_Series_Callback = QAreaSeries* (*)();
    using QAreaLegendMarker_Event_Callback = bool (*)(QAreaLegendMarker*, QEvent*);
    using QAreaLegendMarker_EventFilter_Callback = bool (*)(QAreaLegendMarker*, QObject*, QEvent*);
    using QAreaLegendMarker_TimerEvent_Callback = void (*)(QAreaLegendMarker*, QTimerEvent*);
    using QAreaLegendMarker_ChildEvent_Callback = void (*)(QAreaLegendMarker*, QChildEvent*);
    using QAreaLegendMarker_CustomEvent_Callback = void (*)(QAreaLegendMarker*, QEvent*);
    using QAreaLegendMarker_ConnectNotify_Callback = void (*)(QAreaLegendMarker*, const QMetaMethod&);
    using QAreaLegendMarker_DisconnectNotify_Callback = void (*)(QAreaLegendMarker*, const QMetaMethod&);
    using QAreaLegendMarker_Sender_Callback = QObject* (*)();
    using QAreaLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QAreaLegendMarker_Receivers_Callback = int (*)(const QAreaLegendMarker*, const char*);
    using QAreaLegendMarker_IsSignalConnected_Callback = bool (*)(const QAreaLegendMarker*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAreaLegendMarker_Metacall_Callback qarealegendmarker_metacall_callback = nullptr;
    QAreaLegendMarker_Type_Callback qarealegendmarker_type_callback = nullptr;
    QAreaLegendMarker_Series_Callback qarealegendmarker_series_callback = nullptr;
    QAreaLegendMarker_Event_Callback qarealegendmarker_event_callback = nullptr;
    QAreaLegendMarker_EventFilter_Callback qarealegendmarker_eventfilter_callback = nullptr;
    QAreaLegendMarker_TimerEvent_Callback qarealegendmarker_timerevent_callback = nullptr;
    QAreaLegendMarker_ChildEvent_Callback qarealegendmarker_childevent_callback = nullptr;
    QAreaLegendMarker_CustomEvent_Callback qarealegendmarker_customevent_callback = nullptr;
    QAreaLegendMarker_ConnectNotify_Callback qarealegendmarker_connectnotify_callback = nullptr;
    QAreaLegendMarker_DisconnectNotify_Callback qarealegendmarker_disconnectnotify_callback = nullptr;
    QAreaLegendMarker_Sender_Callback qarealegendmarker_sender_callback = nullptr;
    QAreaLegendMarker_SenderSignalIndex_Callback qarealegendmarker_sendersignalindex_callback = nullptr;
    QAreaLegendMarker_Receivers_Callback qarealegendmarker_receivers_callback = nullptr;
    QAreaLegendMarker_IsSignalConnected_Callback qarealegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qarealegendmarker_metacall_isbase = false;
    mutable bool qarealegendmarker_type_isbase = false;
    mutable bool qarealegendmarker_series_isbase = false;
    mutable bool qarealegendmarker_event_isbase = false;
    mutable bool qarealegendmarker_eventfilter_isbase = false;
    mutable bool qarealegendmarker_timerevent_isbase = false;
    mutable bool qarealegendmarker_childevent_isbase = false;
    mutable bool qarealegendmarker_customevent_isbase = false;
    mutable bool qarealegendmarker_connectnotify_isbase = false;
    mutable bool qarealegendmarker_disconnectnotify_isbase = false;
    mutable bool qarealegendmarker_sender_isbase = false;
    mutable bool qarealegendmarker_sendersignalindex_isbase = false;
    mutable bool qarealegendmarker_receivers_isbase = false;
    mutable bool qarealegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend) : QAreaLegendMarker(series, legend){};
    VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend, QObject* parent) : QAreaLegendMarker(series, legend, parent){};

    ~VirtualQAreaLegendMarker() {
        qarealegendmarker_metacall_callback = nullptr;
        qarealegendmarker_type_callback = nullptr;
        qarealegendmarker_series_callback = nullptr;
        qarealegendmarker_event_callback = nullptr;
        qarealegendmarker_eventfilter_callback = nullptr;
        qarealegendmarker_timerevent_callback = nullptr;
        qarealegendmarker_childevent_callback = nullptr;
        qarealegendmarker_customevent_callback = nullptr;
        qarealegendmarker_connectnotify_callback = nullptr;
        qarealegendmarker_disconnectnotify_callback = nullptr;
        qarealegendmarker_sender_callback = nullptr;
        qarealegendmarker_sendersignalindex_callback = nullptr;
        qarealegendmarker_receivers_callback = nullptr;
        qarealegendmarker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAreaLegendMarker_Metacall_Callback(QAreaLegendMarker_Metacall_Callback cb) { qarealegendmarker_metacall_callback = cb; }
    void setQAreaLegendMarker_Type_Callback(QAreaLegendMarker_Type_Callback cb) { qarealegendmarker_type_callback = cb; }
    void setQAreaLegendMarker_Series_Callback(QAreaLegendMarker_Series_Callback cb) { qarealegendmarker_series_callback = cb; }
    void setQAreaLegendMarker_Event_Callback(QAreaLegendMarker_Event_Callback cb) { qarealegendmarker_event_callback = cb; }
    void setQAreaLegendMarker_EventFilter_Callback(QAreaLegendMarker_EventFilter_Callback cb) { qarealegendmarker_eventfilter_callback = cb; }
    void setQAreaLegendMarker_TimerEvent_Callback(QAreaLegendMarker_TimerEvent_Callback cb) { qarealegendmarker_timerevent_callback = cb; }
    void setQAreaLegendMarker_ChildEvent_Callback(QAreaLegendMarker_ChildEvent_Callback cb) { qarealegendmarker_childevent_callback = cb; }
    void setQAreaLegendMarker_CustomEvent_Callback(QAreaLegendMarker_CustomEvent_Callback cb) { qarealegendmarker_customevent_callback = cb; }
    void setQAreaLegendMarker_ConnectNotify_Callback(QAreaLegendMarker_ConnectNotify_Callback cb) { qarealegendmarker_connectnotify_callback = cb; }
    void setQAreaLegendMarker_DisconnectNotify_Callback(QAreaLegendMarker_DisconnectNotify_Callback cb) { qarealegendmarker_disconnectnotify_callback = cb; }
    void setQAreaLegendMarker_Sender_Callback(QAreaLegendMarker_Sender_Callback cb) { qarealegendmarker_sender_callback = cb; }
    void setQAreaLegendMarker_SenderSignalIndex_Callback(QAreaLegendMarker_SenderSignalIndex_Callback cb) { qarealegendmarker_sendersignalindex_callback = cb; }
    void setQAreaLegendMarker_Receivers_Callback(QAreaLegendMarker_Receivers_Callback cb) { qarealegendmarker_receivers_callback = cb; }
    void setQAreaLegendMarker_IsSignalConnected_Callback(QAreaLegendMarker_IsSignalConnected_Callback cb) { qarealegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAreaLegendMarker_Metacall_IsBase(bool value) const { qarealegendmarker_metacall_isbase = value; }
    void setQAreaLegendMarker_Type_IsBase(bool value) const { qarealegendmarker_type_isbase = value; }
    void setQAreaLegendMarker_Series_IsBase(bool value) const { qarealegendmarker_series_isbase = value; }
    void setQAreaLegendMarker_Event_IsBase(bool value) const { qarealegendmarker_event_isbase = value; }
    void setQAreaLegendMarker_EventFilter_IsBase(bool value) const { qarealegendmarker_eventfilter_isbase = value; }
    void setQAreaLegendMarker_TimerEvent_IsBase(bool value) const { qarealegendmarker_timerevent_isbase = value; }
    void setQAreaLegendMarker_ChildEvent_IsBase(bool value) const { qarealegendmarker_childevent_isbase = value; }
    void setQAreaLegendMarker_CustomEvent_IsBase(bool value) const { qarealegendmarker_customevent_isbase = value; }
    void setQAreaLegendMarker_ConnectNotify_IsBase(bool value) const { qarealegendmarker_connectnotify_isbase = value; }
    void setQAreaLegendMarker_DisconnectNotify_IsBase(bool value) const { qarealegendmarker_disconnectnotify_isbase = value; }
    void setQAreaLegendMarker_Sender_IsBase(bool value) const { qarealegendmarker_sender_isbase = value; }
    void setQAreaLegendMarker_SenderSignalIndex_IsBase(bool value) const { qarealegendmarker_sendersignalindex_isbase = value; }
    void setQAreaLegendMarker_Receivers_IsBase(bool value) const { qarealegendmarker_receivers_isbase = value; }
    void setQAreaLegendMarker_IsSignalConnected_IsBase(bool value) const { qarealegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qarealegendmarker_metacall_isbase) {
            qarealegendmarker_metacall_isbase = false;
            return QAreaLegendMarker::qt_metacall(param1, param2, param3);
        } else if (qarealegendmarker_metacall_callback != nullptr) {
            return qarealegendmarker_metacall_callback(this, param1, param2, param3);
        } else {
            return QAreaLegendMarker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qarealegendmarker_type_isbase) {
            qarealegendmarker_type_isbase = false;
            return QAreaLegendMarker::type();
        } else if (qarealegendmarker_type_callback != nullptr) {
            return qarealegendmarker_type_callback();
        } else {
            return QAreaLegendMarker::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAreaSeries* series() override {
        if (qarealegendmarker_series_isbase) {
            qarealegendmarker_series_isbase = false;
            return QAreaLegendMarker::series();
        } else if (qarealegendmarker_series_callback != nullptr) {
            return qarealegendmarker_series_callback();
        } else {
            return QAreaLegendMarker::series();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qarealegendmarker_event_isbase) {
            qarealegendmarker_event_isbase = false;
            return QAreaLegendMarker::event(event);
        } else if (qarealegendmarker_event_callback != nullptr) {
            return qarealegendmarker_event_callback(this, event);
        } else {
            return QAreaLegendMarker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qarealegendmarker_eventfilter_isbase) {
            qarealegendmarker_eventfilter_isbase = false;
            return QAreaLegendMarker::eventFilter(watched, event);
        } else if (qarealegendmarker_eventfilter_callback != nullptr) {
            return qarealegendmarker_eventfilter_callback(this, watched, event);
        } else {
            return QAreaLegendMarker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qarealegendmarker_timerevent_isbase) {
            qarealegendmarker_timerevent_isbase = false;
            QAreaLegendMarker::timerEvent(event);
        } else if (qarealegendmarker_timerevent_callback != nullptr) {
            qarealegendmarker_timerevent_callback(this, event);
        } else {
            QAreaLegendMarker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qarealegendmarker_childevent_isbase) {
            qarealegendmarker_childevent_isbase = false;
            QAreaLegendMarker::childEvent(event);
        } else if (qarealegendmarker_childevent_callback != nullptr) {
            qarealegendmarker_childevent_callback(this, event);
        } else {
            QAreaLegendMarker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qarealegendmarker_customevent_isbase) {
            qarealegendmarker_customevent_isbase = false;
            QAreaLegendMarker::customEvent(event);
        } else if (qarealegendmarker_customevent_callback != nullptr) {
            qarealegendmarker_customevent_callback(this, event);
        } else {
            QAreaLegendMarker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qarealegendmarker_connectnotify_isbase) {
            qarealegendmarker_connectnotify_isbase = false;
            QAreaLegendMarker::connectNotify(signal);
        } else if (qarealegendmarker_connectnotify_callback != nullptr) {
            qarealegendmarker_connectnotify_callback(this, signal);
        } else {
            QAreaLegendMarker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qarealegendmarker_disconnectnotify_isbase) {
            qarealegendmarker_disconnectnotify_isbase = false;
            QAreaLegendMarker::disconnectNotify(signal);
        } else if (qarealegendmarker_disconnectnotify_callback != nullptr) {
            qarealegendmarker_disconnectnotify_callback(this, signal);
        } else {
            QAreaLegendMarker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qarealegendmarker_sender_isbase) {
            qarealegendmarker_sender_isbase = false;
            return QAreaLegendMarker::sender();
        } else if (qarealegendmarker_sender_callback != nullptr) {
            return qarealegendmarker_sender_callback();
        } else {
            return QAreaLegendMarker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qarealegendmarker_sendersignalindex_isbase) {
            qarealegendmarker_sendersignalindex_isbase = false;
            return QAreaLegendMarker::senderSignalIndex();
        } else if (qarealegendmarker_sendersignalindex_callback != nullptr) {
            return qarealegendmarker_sendersignalindex_callback();
        } else {
            return QAreaLegendMarker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qarealegendmarker_receivers_isbase) {
            qarealegendmarker_receivers_isbase = false;
            return QAreaLegendMarker::receivers(signal);
        } else if (qarealegendmarker_receivers_callback != nullptr) {
            return qarealegendmarker_receivers_callback(this, signal);
        } else {
            return QAreaLegendMarker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qarealegendmarker_issignalconnected_isbase) {
            qarealegendmarker_issignalconnected_isbase = false;
            return QAreaLegendMarker::isSignalConnected(signal);
        } else if (qarealegendmarker_issignalconnected_callback != nullptr) {
            return qarealegendmarker_issignalconnected_callback(this, signal);
        } else {
            return QAreaLegendMarker::isSignalConnected(signal);
        }
    }
};

#endif
