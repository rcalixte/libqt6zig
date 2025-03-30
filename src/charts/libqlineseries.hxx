#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQLINESERIES_H
#define SRC_CHARTSC_LIBVIRTUALQLINESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLineSeries so that we can call protected methods
class VirtualQLineSeries : public QLineSeries {

  public:
    // Virtual class public types (including callbacks)
    using QLineSeries_Metacall_Callback = int (*)(QLineSeries*, QMetaObject::Call, int, void**);
    using QLineSeries_Type_Callback = QAbstractSeries::SeriesType (*)();
    using QLineSeries_SetPen_Callback = void (*)(QLineSeries*, const QPen&);
    using QLineSeries_SetBrush_Callback = void (*)(QLineSeries*, const QBrush&);
    using QLineSeries_SetColor_Callback = void (*)(QLineSeries*, const QColor&);
    using QLineSeries_Color_Callback = QColor (*)();
    using QLineSeries_Event_Callback = bool (*)(QLineSeries*, QEvent*);
    using QLineSeries_EventFilter_Callback = bool (*)(QLineSeries*, QObject*, QEvent*);
    using QLineSeries_TimerEvent_Callback = void (*)(QLineSeries*, QTimerEvent*);
    using QLineSeries_ChildEvent_Callback = void (*)(QLineSeries*, QChildEvent*);
    using QLineSeries_CustomEvent_Callback = void (*)(QLineSeries*, QEvent*);
    using QLineSeries_ConnectNotify_Callback = void (*)(QLineSeries*, const QMetaMethod&);
    using QLineSeries_DisconnectNotify_Callback = void (*)(QLineSeries*, const QMetaMethod&);
    using QLineSeries_Sender_Callback = QObject* (*)();
    using QLineSeries_SenderSignalIndex_Callback = int (*)();
    using QLineSeries_Receivers_Callback = int (*)(const QLineSeries*, const char*);
    using QLineSeries_IsSignalConnected_Callback = bool (*)(const QLineSeries*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QLineSeries_Metacall_Callback qlineseries_metacall_callback = nullptr;
    QLineSeries_Type_Callback qlineseries_type_callback = nullptr;
    QLineSeries_SetPen_Callback qlineseries_setpen_callback = nullptr;
    QLineSeries_SetBrush_Callback qlineseries_setbrush_callback = nullptr;
    QLineSeries_SetColor_Callback qlineseries_setcolor_callback = nullptr;
    QLineSeries_Color_Callback qlineseries_color_callback = nullptr;
    QLineSeries_Event_Callback qlineseries_event_callback = nullptr;
    QLineSeries_EventFilter_Callback qlineseries_eventfilter_callback = nullptr;
    QLineSeries_TimerEvent_Callback qlineseries_timerevent_callback = nullptr;
    QLineSeries_ChildEvent_Callback qlineseries_childevent_callback = nullptr;
    QLineSeries_CustomEvent_Callback qlineseries_customevent_callback = nullptr;
    QLineSeries_ConnectNotify_Callback qlineseries_connectnotify_callback = nullptr;
    QLineSeries_DisconnectNotify_Callback qlineseries_disconnectnotify_callback = nullptr;
    QLineSeries_Sender_Callback qlineseries_sender_callback = nullptr;
    QLineSeries_SenderSignalIndex_Callback qlineseries_sendersignalindex_callback = nullptr;
    QLineSeries_Receivers_Callback qlineseries_receivers_callback = nullptr;
    QLineSeries_IsSignalConnected_Callback qlineseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlineseries_metacall_isbase = false;
    mutable bool qlineseries_type_isbase = false;
    mutable bool qlineseries_setpen_isbase = false;
    mutable bool qlineseries_setbrush_isbase = false;
    mutable bool qlineseries_setcolor_isbase = false;
    mutable bool qlineseries_color_isbase = false;
    mutable bool qlineseries_event_isbase = false;
    mutable bool qlineseries_eventfilter_isbase = false;
    mutable bool qlineseries_timerevent_isbase = false;
    mutable bool qlineseries_childevent_isbase = false;
    mutable bool qlineseries_customevent_isbase = false;
    mutable bool qlineseries_connectnotify_isbase = false;
    mutable bool qlineseries_disconnectnotify_isbase = false;
    mutable bool qlineseries_sender_isbase = false;
    mutable bool qlineseries_sendersignalindex_isbase = false;
    mutable bool qlineseries_receivers_isbase = false;
    mutable bool qlineseries_issignalconnected_isbase = false;

  public:
    VirtualQLineSeries() : QLineSeries(){};
    VirtualQLineSeries(QObject* parent) : QLineSeries(parent){};

    ~VirtualQLineSeries() {
        qlineseries_metacall_callback = nullptr;
        qlineseries_type_callback = nullptr;
        qlineseries_setpen_callback = nullptr;
        qlineseries_setbrush_callback = nullptr;
        qlineseries_setcolor_callback = nullptr;
        qlineseries_color_callback = nullptr;
        qlineseries_event_callback = nullptr;
        qlineseries_eventfilter_callback = nullptr;
        qlineseries_timerevent_callback = nullptr;
        qlineseries_childevent_callback = nullptr;
        qlineseries_customevent_callback = nullptr;
        qlineseries_connectnotify_callback = nullptr;
        qlineseries_disconnectnotify_callback = nullptr;
        qlineseries_sender_callback = nullptr;
        qlineseries_sendersignalindex_callback = nullptr;
        qlineseries_receivers_callback = nullptr;
        qlineseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQLineSeries_Metacall_Callback(QLineSeries_Metacall_Callback cb) { qlineseries_metacall_callback = cb; }
    void setQLineSeries_Type_Callback(QLineSeries_Type_Callback cb) { qlineseries_type_callback = cb; }
    void setQLineSeries_SetPen_Callback(QLineSeries_SetPen_Callback cb) { qlineseries_setpen_callback = cb; }
    void setQLineSeries_SetBrush_Callback(QLineSeries_SetBrush_Callback cb) { qlineseries_setbrush_callback = cb; }
    void setQLineSeries_SetColor_Callback(QLineSeries_SetColor_Callback cb) { qlineseries_setcolor_callback = cb; }
    void setQLineSeries_Color_Callback(QLineSeries_Color_Callback cb) { qlineseries_color_callback = cb; }
    void setQLineSeries_Event_Callback(QLineSeries_Event_Callback cb) { qlineseries_event_callback = cb; }
    void setQLineSeries_EventFilter_Callback(QLineSeries_EventFilter_Callback cb) { qlineseries_eventfilter_callback = cb; }
    void setQLineSeries_TimerEvent_Callback(QLineSeries_TimerEvent_Callback cb) { qlineseries_timerevent_callback = cb; }
    void setQLineSeries_ChildEvent_Callback(QLineSeries_ChildEvent_Callback cb) { qlineseries_childevent_callback = cb; }
    void setQLineSeries_CustomEvent_Callback(QLineSeries_CustomEvent_Callback cb) { qlineseries_customevent_callback = cb; }
    void setQLineSeries_ConnectNotify_Callback(QLineSeries_ConnectNotify_Callback cb) { qlineseries_connectnotify_callback = cb; }
    void setQLineSeries_DisconnectNotify_Callback(QLineSeries_DisconnectNotify_Callback cb) { qlineseries_disconnectnotify_callback = cb; }
    void setQLineSeries_Sender_Callback(QLineSeries_Sender_Callback cb) { qlineseries_sender_callback = cb; }
    void setQLineSeries_SenderSignalIndex_Callback(QLineSeries_SenderSignalIndex_Callback cb) { qlineseries_sendersignalindex_callback = cb; }
    void setQLineSeries_Receivers_Callback(QLineSeries_Receivers_Callback cb) { qlineseries_receivers_callback = cb; }
    void setQLineSeries_IsSignalConnected_Callback(QLineSeries_IsSignalConnected_Callback cb) { qlineseries_issignalconnected_callback = cb; }

    // Base flag setters
    void setQLineSeries_Metacall_IsBase(bool value) const { qlineseries_metacall_isbase = value; }
    void setQLineSeries_Type_IsBase(bool value) const { qlineseries_type_isbase = value; }
    void setQLineSeries_SetPen_IsBase(bool value) const { qlineseries_setpen_isbase = value; }
    void setQLineSeries_SetBrush_IsBase(bool value) const { qlineseries_setbrush_isbase = value; }
    void setQLineSeries_SetColor_IsBase(bool value) const { qlineseries_setcolor_isbase = value; }
    void setQLineSeries_Color_IsBase(bool value) const { qlineseries_color_isbase = value; }
    void setQLineSeries_Event_IsBase(bool value) const { qlineseries_event_isbase = value; }
    void setQLineSeries_EventFilter_IsBase(bool value) const { qlineseries_eventfilter_isbase = value; }
    void setQLineSeries_TimerEvent_IsBase(bool value) const { qlineseries_timerevent_isbase = value; }
    void setQLineSeries_ChildEvent_IsBase(bool value) const { qlineseries_childevent_isbase = value; }
    void setQLineSeries_CustomEvent_IsBase(bool value) const { qlineseries_customevent_isbase = value; }
    void setQLineSeries_ConnectNotify_IsBase(bool value) const { qlineseries_connectnotify_isbase = value; }
    void setQLineSeries_DisconnectNotify_IsBase(bool value) const { qlineseries_disconnectnotify_isbase = value; }
    void setQLineSeries_Sender_IsBase(bool value) const { qlineseries_sender_isbase = value; }
    void setQLineSeries_SenderSignalIndex_IsBase(bool value) const { qlineseries_sendersignalindex_isbase = value; }
    void setQLineSeries_Receivers_IsBase(bool value) const { qlineseries_receivers_isbase = value; }
    void setQLineSeries_IsSignalConnected_IsBase(bool value) const { qlineseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlineseries_metacall_isbase) {
            qlineseries_metacall_isbase = false;
            return QLineSeries::qt_metacall(param1, param2, param3);
        } else if (qlineseries_metacall_callback != nullptr) {
            return qlineseries_metacall_callback(this, param1, param2, param3);
        } else {
            return QLineSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qlineseries_type_isbase) {
            qlineseries_type_isbase = false;
            return QLineSeries::type();
        } else if (qlineseries_type_callback != nullptr) {
            return qlineseries_type_callback();
        } else {
            return QLineSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qlineseries_setpen_isbase) {
            qlineseries_setpen_isbase = false;
            QLineSeries::setPen(pen);
        } else if (qlineseries_setpen_callback != nullptr) {
            qlineseries_setpen_callback(this, pen);
        } else {
            QLineSeries::setPen(pen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qlineseries_setbrush_isbase) {
            qlineseries_setbrush_isbase = false;
            QLineSeries::setBrush(brush);
        } else if (qlineseries_setbrush_callback != nullptr) {
            qlineseries_setbrush_callback(this, brush);
        } else {
            QLineSeries::setBrush(brush);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qlineseries_setcolor_isbase) {
            qlineseries_setcolor_isbase = false;
            QLineSeries::setColor(color);
        } else if (qlineseries_setcolor_callback != nullptr) {
            qlineseries_setcolor_callback(this, color);
        } else {
            QLineSeries::setColor(color);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qlineseries_color_isbase) {
            qlineseries_color_isbase = false;
            return QLineSeries::color();
        } else if (qlineseries_color_callback != nullptr) {
            return qlineseries_color_callback();
        } else {
            return QLineSeries::color();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlineseries_event_isbase) {
            qlineseries_event_isbase = false;
            return QLineSeries::event(event);
        } else if (qlineseries_event_callback != nullptr) {
            return qlineseries_event_callback(this, event);
        } else {
            return QLineSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlineseries_eventfilter_isbase) {
            qlineseries_eventfilter_isbase = false;
            return QLineSeries::eventFilter(watched, event);
        } else if (qlineseries_eventfilter_callback != nullptr) {
            return qlineseries_eventfilter_callback(this, watched, event);
        } else {
            return QLineSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlineseries_timerevent_isbase) {
            qlineseries_timerevent_isbase = false;
            QLineSeries::timerEvent(event);
        } else if (qlineseries_timerevent_callback != nullptr) {
            qlineseries_timerevent_callback(this, event);
        } else {
            QLineSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlineseries_childevent_isbase) {
            qlineseries_childevent_isbase = false;
            QLineSeries::childEvent(event);
        } else if (qlineseries_childevent_callback != nullptr) {
            qlineseries_childevent_callback(this, event);
        } else {
            QLineSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlineseries_customevent_isbase) {
            qlineseries_customevent_isbase = false;
            QLineSeries::customEvent(event);
        } else if (qlineseries_customevent_callback != nullptr) {
            qlineseries_customevent_callback(this, event);
        } else {
            QLineSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlineseries_connectnotify_isbase) {
            qlineseries_connectnotify_isbase = false;
            QLineSeries::connectNotify(signal);
        } else if (qlineseries_connectnotify_callback != nullptr) {
            qlineseries_connectnotify_callback(this, signal);
        } else {
            QLineSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlineseries_disconnectnotify_isbase) {
            qlineseries_disconnectnotify_isbase = false;
            QLineSeries::disconnectNotify(signal);
        } else if (qlineseries_disconnectnotify_callback != nullptr) {
            qlineseries_disconnectnotify_callback(this, signal);
        } else {
            QLineSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlineseries_sender_isbase) {
            qlineseries_sender_isbase = false;
            return QLineSeries::sender();
        } else if (qlineseries_sender_callback != nullptr) {
            return qlineseries_sender_callback();
        } else {
            return QLineSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlineseries_sendersignalindex_isbase) {
            qlineseries_sendersignalindex_isbase = false;
            return QLineSeries::senderSignalIndex();
        } else if (qlineseries_sendersignalindex_callback != nullptr) {
            return qlineseries_sendersignalindex_callback();
        } else {
            return QLineSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlineseries_receivers_isbase) {
            qlineseries_receivers_isbase = false;
            return QLineSeries::receivers(signal);
        } else if (qlineseries_receivers_callback != nullptr) {
            return qlineseries_receivers_callback(this, signal);
        } else {
            return QLineSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlineseries_issignalconnected_isbase) {
            qlineseries_issignalconnected_isbase = false;
            return QLineSeries::isSignalConnected(signal);
        } else if (qlineseries_issignalconnected_callback != nullptr) {
            return qlineseries_issignalconnected_callback(this, signal);
        } else {
            return QLineSeries::isSignalConnected(signal);
        }
    }
};

#endif
