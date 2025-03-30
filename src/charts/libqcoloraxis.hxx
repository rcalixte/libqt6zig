#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQCOLORAXIS_H
#define SRC_CHARTSC_LIBVIRTUALQCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QColorAxis so that we can call protected methods
class VirtualQColorAxis : public QColorAxis {

  public:
    // Virtual class public types (including callbacks)
    using QColorAxis_Metacall_Callback = int (*)(QColorAxis*, QMetaObject::Call, int, void**);
    using QColorAxis_Type_Callback = QAbstractAxis::AxisType (*)();
    using QColorAxis_Event_Callback = bool (*)(QColorAxis*, QEvent*);
    using QColorAxis_EventFilter_Callback = bool (*)(QColorAxis*, QObject*, QEvent*);
    using QColorAxis_TimerEvent_Callback = void (*)(QColorAxis*, QTimerEvent*);
    using QColorAxis_ChildEvent_Callback = void (*)(QColorAxis*, QChildEvent*);
    using QColorAxis_CustomEvent_Callback = void (*)(QColorAxis*, QEvent*);
    using QColorAxis_ConnectNotify_Callback = void (*)(QColorAxis*, const QMetaMethod&);
    using QColorAxis_DisconnectNotify_Callback = void (*)(QColorAxis*, const QMetaMethod&);
    using QColorAxis_Sender_Callback = QObject* (*)();
    using QColorAxis_SenderSignalIndex_Callback = int (*)();
    using QColorAxis_Receivers_Callback = int (*)(const QColorAxis*, const char*);
    using QColorAxis_IsSignalConnected_Callback = bool (*)(const QColorAxis*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QColorAxis_Metacall_Callback qcoloraxis_metacall_callback = nullptr;
    QColorAxis_Type_Callback qcoloraxis_type_callback = nullptr;
    QColorAxis_Event_Callback qcoloraxis_event_callback = nullptr;
    QColorAxis_EventFilter_Callback qcoloraxis_eventfilter_callback = nullptr;
    QColorAxis_TimerEvent_Callback qcoloraxis_timerevent_callback = nullptr;
    QColorAxis_ChildEvent_Callback qcoloraxis_childevent_callback = nullptr;
    QColorAxis_CustomEvent_Callback qcoloraxis_customevent_callback = nullptr;
    QColorAxis_ConnectNotify_Callback qcoloraxis_connectnotify_callback = nullptr;
    QColorAxis_DisconnectNotify_Callback qcoloraxis_disconnectnotify_callback = nullptr;
    QColorAxis_Sender_Callback qcoloraxis_sender_callback = nullptr;
    QColorAxis_SenderSignalIndex_Callback qcoloraxis_sendersignalindex_callback = nullptr;
    QColorAxis_Receivers_Callback qcoloraxis_receivers_callback = nullptr;
    QColorAxis_IsSignalConnected_Callback qcoloraxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcoloraxis_metacall_isbase = false;
    mutable bool qcoloraxis_type_isbase = false;
    mutable bool qcoloraxis_event_isbase = false;
    mutable bool qcoloraxis_eventfilter_isbase = false;
    mutable bool qcoloraxis_timerevent_isbase = false;
    mutable bool qcoloraxis_childevent_isbase = false;
    mutable bool qcoloraxis_customevent_isbase = false;
    mutable bool qcoloraxis_connectnotify_isbase = false;
    mutable bool qcoloraxis_disconnectnotify_isbase = false;
    mutable bool qcoloraxis_sender_isbase = false;
    mutable bool qcoloraxis_sendersignalindex_isbase = false;
    mutable bool qcoloraxis_receivers_isbase = false;
    mutable bool qcoloraxis_issignalconnected_isbase = false;

  public:
    VirtualQColorAxis() : QColorAxis(){};
    VirtualQColorAxis(QObject* parent) : QColorAxis(parent){};

    ~VirtualQColorAxis() {
        qcoloraxis_metacall_callback = nullptr;
        qcoloraxis_type_callback = nullptr;
        qcoloraxis_event_callback = nullptr;
        qcoloraxis_eventfilter_callback = nullptr;
        qcoloraxis_timerevent_callback = nullptr;
        qcoloraxis_childevent_callback = nullptr;
        qcoloraxis_customevent_callback = nullptr;
        qcoloraxis_connectnotify_callback = nullptr;
        qcoloraxis_disconnectnotify_callback = nullptr;
        qcoloraxis_sender_callback = nullptr;
        qcoloraxis_sendersignalindex_callback = nullptr;
        qcoloraxis_receivers_callback = nullptr;
        qcoloraxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQColorAxis_Metacall_Callback(QColorAxis_Metacall_Callback cb) { qcoloraxis_metacall_callback = cb; }
    void setQColorAxis_Type_Callback(QColorAxis_Type_Callback cb) { qcoloraxis_type_callback = cb; }
    void setQColorAxis_Event_Callback(QColorAxis_Event_Callback cb) { qcoloraxis_event_callback = cb; }
    void setQColorAxis_EventFilter_Callback(QColorAxis_EventFilter_Callback cb) { qcoloraxis_eventfilter_callback = cb; }
    void setQColorAxis_TimerEvent_Callback(QColorAxis_TimerEvent_Callback cb) { qcoloraxis_timerevent_callback = cb; }
    void setQColorAxis_ChildEvent_Callback(QColorAxis_ChildEvent_Callback cb) { qcoloraxis_childevent_callback = cb; }
    void setQColorAxis_CustomEvent_Callback(QColorAxis_CustomEvent_Callback cb) { qcoloraxis_customevent_callback = cb; }
    void setQColorAxis_ConnectNotify_Callback(QColorAxis_ConnectNotify_Callback cb) { qcoloraxis_connectnotify_callback = cb; }
    void setQColorAxis_DisconnectNotify_Callback(QColorAxis_DisconnectNotify_Callback cb) { qcoloraxis_disconnectnotify_callback = cb; }
    void setQColorAxis_Sender_Callback(QColorAxis_Sender_Callback cb) { qcoloraxis_sender_callback = cb; }
    void setQColorAxis_SenderSignalIndex_Callback(QColorAxis_SenderSignalIndex_Callback cb) { qcoloraxis_sendersignalindex_callback = cb; }
    void setQColorAxis_Receivers_Callback(QColorAxis_Receivers_Callback cb) { qcoloraxis_receivers_callback = cb; }
    void setQColorAxis_IsSignalConnected_Callback(QColorAxis_IsSignalConnected_Callback cb) { qcoloraxis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQColorAxis_Metacall_IsBase(bool value) const { qcoloraxis_metacall_isbase = value; }
    void setQColorAxis_Type_IsBase(bool value) const { qcoloraxis_type_isbase = value; }
    void setQColorAxis_Event_IsBase(bool value) const { qcoloraxis_event_isbase = value; }
    void setQColorAxis_EventFilter_IsBase(bool value) const { qcoloraxis_eventfilter_isbase = value; }
    void setQColorAxis_TimerEvent_IsBase(bool value) const { qcoloraxis_timerevent_isbase = value; }
    void setQColorAxis_ChildEvent_IsBase(bool value) const { qcoloraxis_childevent_isbase = value; }
    void setQColorAxis_CustomEvent_IsBase(bool value) const { qcoloraxis_customevent_isbase = value; }
    void setQColorAxis_ConnectNotify_IsBase(bool value) const { qcoloraxis_connectnotify_isbase = value; }
    void setQColorAxis_DisconnectNotify_IsBase(bool value) const { qcoloraxis_disconnectnotify_isbase = value; }
    void setQColorAxis_Sender_IsBase(bool value) const { qcoloraxis_sender_isbase = value; }
    void setQColorAxis_SenderSignalIndex_IsBase(bool value) const { qcoloraxis_sendersignalindex_isbase = value; }
    void setQColorAxis_Receivers_IsBase(bool value) const { qcoloraxis_receivers_isbase = value; }
    void setQColorAxis_IsSignalConnected_IsBase(bool value) const { qcoloraxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcoloraxis_metacall_isbase) {
            qcoloraxis_metacall_isbase = false;
            return QColorAxis::qt_metacall(param1, param2, param3);
        } else if (qcoloraxis_metacall_callback != nullptr) {
            return qcoloraxis_metacall_callback(this, param1, param2, param3);
        } else {
            return QColorAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qcoloraxis_type_isbase) {
            qcoloraxis_type_isbase = false;
            return QColorAxis::type();
        } else if (qcoloraxis_type_callback != nullptr) {
            return qcoloraxis_type_callback();
        } else {
            return QColorAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcoloraxis_event_isbase) {
            qcoloraxis_event_isbase = false;
            return QColorAxis::event(event);
        } else if (qcoloraxis_event_callback != nullptr) {
            return qcoloraxis_event_callback(this, event);
        } else {
            return QColorAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcoloraxis_eventfilter_isbase) {
            qcoloraxis_eventfilter_isbase = false;
            return QColorAxis::eventFilter(watched, event);
        } else if (qcoloraxis_eventfilter_callback != nullptr) {
            return qcoloraxis_eventfilter_callback(this, watched, event);
        } else {
            return QColorAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcoloraxis_timerevent_isbase) {
            qcoloraxis_timerevent_isbase = false;
            QColorAxis::timerEvent(event);
        } else if (qcoloraxis_timerevent_callback != nullptr) {
            qcoloraxis_timerevent_callback(this, event);
        } else {
            QColorAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcoloraxis_childevent_isbase) {
            qcoloraxis_childevent_isbase = false;
            QColorAxis::childEvent(event);
        } else if (qcoloraxis_childevent_callback != nullptr) {
            qcoloraxis_childevent_callback(this, event);
        } else {
            QColorAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcoloraxis_customevent_isbase) {
            qcoloraxis_customevent_isbase = false;
            QColorAxis::customEvent(event);
        } else if (qcoloraxis_customevent_callback != nullptr) {
            qcoloraxis_customevent_callback(this, event);
        } else {
            QColorAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcoloraxis_connectnotify_isbase) {
            qcoloraxis_connectnotify_isbase = false;
            QColorAxis::connectNotify(signal);
        } else if (qcoloraxis_connectnotify_callback != nullptr) {
            qcoloraxis_connectnotify_callback(this, signal);
        } else {
            QColorAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcoloraxis_disconnectnotify_isbase) {
            qcoloraxis_disconnectnotify_isbase = false;
            QColorAxis::disconnectNotify(signal);
        } else if (qcoloraxis_disconnectnotify_callback != nullptr) {
            qcoloraxis_disconnectnotify_callback(this, signal);
        } else {
            QColorAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcoloraxis_sender_isbase) {
            qcoloraxis_sender_isbase = false;
            return QColorAxis::sender();
        } else if (qcoloraxis_sender_callback != nullptr) {
            return qcoloraxis_sender_callback();
        } else {
            return QColorAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcoloraxis_sendersignalindex_isbase) {
            qcoloraxis_sendersignalindex_isbase = false;
            return QColorAxis::senderSignalIndex();
        } else if (qcoloraxis_sendersignalindex_callback != nullptr) {
            return qcoloraxis_sendersignalindex_callback();
        } else {
            return QColorAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcoloraxis_receivers_isbase) {
            qcoloraxis_receivers_isbase = false;
            return QColorAxis::receivers(signal);
        } else if (qcoloraxis_receivers_callback != nullptr) {
            return qcoloraxis_receivers_callback(this, signal);
        } else {
            return QColorAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcoloraxis_issignalconnected_isbase) {
            qcoloraxis_issignalconnected_isbase = false;
            return QColorAxis::isSignalConnected(signal);
        } else if (qcoloraxis_issignalconnected_callback != nullptr) {
            return qcoloraxis_issignalconnected_callback(this, signal);
        } else {
            return QColorAxis::isSignalConnected(signal);
        }
    }
};

#endif
