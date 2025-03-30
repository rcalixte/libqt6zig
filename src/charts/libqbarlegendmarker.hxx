#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQBARLEGENDMARKER_H
#define SRC_CHARTSC_LIBVIRTUALQBARLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarLegendMarker so that we can call protected methods
class VirtualQBarLegendMarker : public QBarLegendMarker {

  public:
    // Virtual class public types (including callbacks)
    using QBarLegendMarker_Metacall_Callback = int (*)(QBarLegendMarker*, QMetaObject::Call, int, void**);
    using QBarLegendMarker_Type_Callback = QLegendMarker::LegendMarkerType (*)();
    using QBarLegendMarker_Series_Callback = QAbstractBarSeries* (*)();
    using QBarLegendMarker_Event_Callback = bool (*)(QBarLegendMarker*, QEvent*);
    using QBarLegendMarker_EventFilter_Callback = bool (*)(QBarLegendMarker*, QObject*, QEvent*);
    using QBarLegendMarker_TimerEvent_Callback = void (*)(QBarLegendMarker*, QTimerEvent*);
    using QBarLegendMarker_ChildEvent_Callback = void (*)(QBarLegendMarker*, QChildEvent*);
    using QBarLegendMarker_CustomEvent_Callback = void (*)(QBarLegendMarker*, QEvent*);
    using QBarLegendMarker_ConnectNotify_Callback = void (*)(QBarLegendMarker*, const QMetaMethod&);
    using QBarLegendMarker_DisconnectNotify_Callback = void (*)(QBarLegendMarker*, const QMetaMethod&);
    using QBarLegendMarker_Sender_Callback = QObject* (*)();
    using QBarLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QBarLegendMarker_Receivers_Callback = int (*)(const QBarLegendMarker*, const char*);
    using QBarLegendMarker_IsSignalConnected_Callback = bool (*)(const QBarLegendMarker*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QBarLegendMarker_Metacall_Callback qbarlegendmarker_metacall_callback = nullptr;
    QBarLegendMarker_Type_Callback qbarlegendmarker_type_callback = nullptr;
    QBarLegendMarker_Series_Callback qbarlegendmarker_series_callback = nullptr;
    QBarLegendMarker_Event_Callback qbarlegendmarker_event_callback = nullptr;
    QBarLegendMarker_EventFilter_Callback qbarlegendmarker_eventfilter_callback = nullptr;
    QBarLegendMarker_TimerEvent_Callback qbarlegendmarker_timerevent_callback = nullptr;
    QBarLegendMarker_ChildEvent_Callback qbarlegendmarker_childevent_callback = nullptr;
    QBarLegendMarker_CustomEvent_Callback qbarlegendmarker_customevent_callback = nullptr;
    QBarLegendMarker_ConnectNotify_Callback qbarlegendmarker_connectnotify_callback = nullptr;
    QBarLegendMarker_DisconnectNotify_Callback qbarlegendmarker_disconnectnotify_callback = nullptr;
    QBarLegendMarker_Sender_Callback qbarlegendmarker_sender_callback = nullptr;
    QBarLegendMarker_SenderSignalIndex_Callback qbarlegendmarker_sendersignalindex_callback = nullptr;
    QBarLegendMarker_Receivers_Callback qbarlegendmarker_receivers_callback = nullptr;
    QBarLegendMarker_IsSignalConnected_Callback qbarlegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbarlegendmarker_metacall_isbase = false;
    mutable bool qbarlegendmarker_type_isbase = false;
    mutable bool qbarlegendmarker_series_isbase = false;
    mutable bool qbarlegendmarker_event_isbase = false;
    mutable bool qbarlegendmarker_eventfilter_isbase = false;
    mutable bool qbarlegendmarker_timerevent_isbase = false;
    mutable bool qbarlegendmarker_childevent_isbase = false;
    mutable bool qbarlegendmarker_customevent_isbase = false;
    mutable bool qbarlegendmarker_connectnotify_isbase = false;
    mutable bool qbarlegendmarker_disconnectnotify_isbase = false;
    mutable bool qbarlegendmarker_sender_isbase = false;
    mutable bool qbarlegendmarker_sendersignalindex_isbase = false;
    mutable bool qbarlegendmarker_receivers_isbase = false;
    mutable bool qbarlegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend) : QBarLegendMarker(series, barset, legend){};
    VirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent) : QBarLegendMarker(series, barset, legend, parent){};

    ~VirtualQBarLegendMarker() {
        qbarlegendmarker_metacall_callback = nullptr;
        qbarlegendmarker_type_callback = nullptr;
        qbarlegendmarker_series_callback = nullptr;
        qbarlegendmarker_event_callback = nullptr;
        qbarlegendmarker_eventfilter_callback = nullptr;
        qbarlegendmarker_timerevent_callback = nullptr;
        qbarlegendmarker_childevent_callback = nullptr;
        qbarlegendmarker_customevent_callback = nullptr;
        qbarlegendmarker_connectnotify_callback = nullptr;
        qbarlegendmarker_disconnectnotify_callback = nullptr;
        qbarlegendmarker_sender_callback = nullptr;
        qbarlegendmarker_sendersignalindex_callback = nullptr;
        qbarlegendmarker_receivers_callback = nullptr;
        qbarlegendmarker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQBarLegendMarker_Metacall_Callback(QBarLegendMarker_Metacall_Callback cb) { qbarlegendmarker_metacall_callback = cb; }
    void setQBarLegendMarker_Type_Callback(QBarLegendMarker_Type_Callback cb) { qbarlegendmarker_type_callback = cb; }
    void setQBarLegendMarker_Series_Callback(QBarLegendMarker_Series_Callback cb) { qbarlegendmarker_series_callback = cb; }
    void setQBarLegendMarker_Event_Callback(QBarLegendMarker_Event_Callback cb) { qbarlegendmarker_event_callback = cb; }
    void setQBarLegendMarker_EventFilter_Callback(QBarLegendMarker_EventFilter_Callback cb) { qbarlegendmarker_eventfilter_callback = cb; }
    void setQBarLegendMarker_TimerEvent_Callback(QBarLegendMarker_TimerEvent_Callback cb) { qbarlegendmarker_timerevent_callback = cb; }
    void setQBarLegendMarker_ChildEvent_Callback(QBarLegendMarker_ChildEvent_Callback cb) { qbarlegendmarker_childevent_callback = cb; }
    void setQBarLegendMarker_CustomEvent_Callback(QBarLegendMarker_CustomEvent_Callback cb) { qbarlegendmarker_customevent_callback = cb; }
    void setQBarLegendMarker_ConnectNotify_Callback(QBarLegendMarker_ConnectNotify_Callback cb) { qbarlegendmarker_connectnotify_callback = cb; }
    void setQBarLegendMarker_DisconnectNotify_Callback(QBarLegendMarker_DisconnectNotify_Callback cb) { qbarlegendmarker_disconnectnotify_callback = cb; }
    void setQBarLegendMarker_Sender_Callback(QBarLegendMarker_Sender_Callback cb) { qbarlegendmarker_sender_callback = cb; }
    void setQBarLegendMarker_SenderSignalIndex_Callback(QBarLegendMarker_SenderSignalIndex_Callback cb) { qbarlegendmarker_sendersignalindex_callback = cb; }
    void setQBarLegendMarker_Receivers_Callback(QBarLegendMarker_Receivers_Callback cb) { qbarlegendmarker_receivers_callback = cb; }
    void setQBarLegendMarker_IsSignalConnected_Callback(QBarLegendMarker_IsSignalConnected_Callback cb) { qbarlegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    void setQBarLegendMarker_Metacall_IsBase(bool value) const { qbarlegendmarker_metacall_isbase = value; }
    void setQBarLegendMarker_Type_IsBase(bool value) const { qbarlegendmarker_type_isbase = value; }
    void setQBarLegendMarker_Series_IsBase(bool value) const { qbarlegendmarker_series_isbase = value; }
    void setQBarLegendMarker_Event_IsBase(bool value) const { qbarlegendmarker_event_isbase = value; }
    void setQBarLegendMarker_EventFilter_IsBase(bool value) const { qbarlegendmarker_eventfilter_isbase = value; }
    void setQBarLegendMarker_TimerEvent_IsBase(bool value) const { qbarlegendmarker_timerevent_isbase = value; }
    void setQBarLegendMarker_ChildEvent_IsBase(bool value) const { qbarlegendmarker_childevent_isbase = value; }
    void setQBarLegendMarker_CustomEvent_IsBase(bool value) const { qbarlegendmarker_customevent_isbase = value; }
    void setQBarLegendMarker_ConnectNotify_IsBase(bool value) const { qbarlegendmarker_connectnotify_isbase = value; }
    void setQBarLegendMarker_DisconnectNotify_IsBase(bool value) const { qbarlegendmarker_disconnectnotify_isbase = value; }
    void setQBarLegendMarker_Sender_IsBase(bool value) const { qbarlegendmarker_sender_isbase = value; }
    void setQBarLegendMarker_SenderSignalIndex_IsBase(bool value) const { qbarlegendmarker_sendersignalindex_isbase = value; }
    void setQBarLegendMarker_Receivers_IsBase(bool value) const { qbarlegendmarker_receivers_isbase = value; }
    void setQBarLegendMarker_IsSignalConnected_IsBase(bool value) const { qbarlegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarlegendmarker_metacall_isbase) {
            qbarlegendmarker_metacall_isbase = false;
            return QBarLegendMarker::qt_metacall(param1, param2, param3);
        } else if (qbarlegendmarker_metacall_callback != nullptr) {
            return qbarlegendmarker_metacall_callback(this, param1, param2, param3);
        } else {
            return QBarLegendMarker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qbarlegendmarker_type_isbase) {
            qbarlegendmarker_type_isbase = false;
            return QBarLegendMarker::type();
        } else if (qbarlegendmarker_type_callback != nullptr) {
            return qbarlegendmarker_type_callback();
        } else {
            return QBarLegendMarker::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractBarSeries* series() override {
        if (qbarlegendmarker_series_isbase) {
            qbarlegendmarker_series_isbase = false;
            return QBarLegendMarker::series();
        } else if (qbarlegendmarker_series_callback != nullptr) {
            return qbarlegendmarker_series_callback();
        } else {
            return QBarLegendMarker::series();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarlegendmarker_event_isbase) {
            qbarlegendmarker_event_isbase = false;
            return QBarLegendMarker::event(event);
        } else if (qbarlegendmarker_event_callback != nullptr) {
            return qbarlegendmarker_event_callback(this, event);
        } else {
            return QBarLegendMarker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarlegendmarker_eventfilter_isbase) {
            qbarlegendmarker_eventfilter_isbase = false;
            return QBarLegendMarker::eventFilter(watched, event);
        } else if (qbarlegendmarker_eventfilter_callback != nullptr) {
            return qbarlegendmarker_eventfilter_callback(this, watched, event);
        } else {
            return QBarLegendMarker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarlegendmarker_timerevent_isbase) {
            qbarlegendmarker_timerevent_isbase = false;
            QBarLegendMarker::timerEvent(event);
        } else if (qbarlegendmarker_timerevent_callback != nullptr) {
            qbarlegendmarker_timerevent_callback(this, event);
        } else {
            QBarLegendMarker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarlegendmarker_childevent_isbase) {
            qbarlegendmarker_childevent_isbase = false;
            QBarLegendMarker::childEvent(event);
        } else if (qbarlegendmarker_childevent_callback != nullptr) {
            qbarlegendmarker_childevent_callback(this, event);
        } else {
            QBarLegendMarker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarlegendmarker_customevent_isbase) {
            qbarlegendmarker_customevent_isbase = false;
            QBarLegendMarker::customEvent(event);
        } else if (qbarlegendmarker_customevent_callback != nullptr) {
            qbarlegendmarker_customevent_callback(this, event);
        } else {
            QBarLegendMarker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarlegendmarker_connectnotify_isbase) {
            qbarlegendmarker_connectnotify_isbase = false;
            QBarLegendMarker::connectNotify(signal);
        } else if (qbarlegendmarker_connectnotify_callback != nullptr) {
            qbarlegendmarker_connectnotify_callback(this, signal);
        } else {
            QBarLegendMarker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarlegendmarker_disconnectnotify_isbase) {
            qbarlegendmarker_disconnectnotify_isbase = false;
            QBarLegendMarker::disconnectNotify(signal);
        } else if (qbarlegendmarker_disconnectnotify_callback != nullptr) {
            qbarlegendmarker_disconnectnotify_callback(this, signal);
        } else {
            QBarLegendMarker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbarlegendmarker_sender_isbase) {
            qbarlegendmarker_sender_isbase = false;
            return QBarLegendMarker::sender();
        } else if (qbarlegendmarker_sender_callback != nullptr) {
            return qbarlegendmarker_sender_callback();
        } else {
            return QBarLegendMarker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbarlegendmarker_sendersignalindex_isbase) {
            qbarlegendmarker_sendersignalindex_isbase = false;
            return QBarLegendMarker::senderSignalIndex();
        } else if (qbarlegendmarker_sendersignalindex_callback != nullptr) {
            return qbarlegendmarker_sendersignalindex_callback();
        } else {
            return QBarLegendMarker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbarlegendmarker_receivers_isbase) {
            qbarlegendmarker_receivers_isbase = false;
            return QBarLegendMarker::receivers(signal);
        } else if (qbarlegendmarker_receivers_callback != nullptr) {
            return qbarlegendmarker_receivers_callback(this, signal);
        } else {
            return QBarLegendMarker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbarlegendmarker_issignalconnected_isbase) {
            qbarlegendmarker_issignalconnected_isbase = false;
            return QBarLegendMarker::isSignalConnected(signal);
        } else if (qbarlegendmarker_issignalconnected_callback != nullptr) {
            return qbarlegendmarker_issignalconnected_callback(this, signal);
        } else {
            return QBarLegendMarker::isSignalConnected(signal);
        }
    }
};

#endif
