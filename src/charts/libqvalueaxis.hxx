#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQVALUEAXIS_H
#define SRC_CHARTSC_LIBVIRTUALQVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QValueAxis so that we can call protected methods
class VirtualQValueAxis : public QValueAxis {

  public:
    // Virtual class public types (including callbacks)
    using QValueAxis_Metacall_Callback = int (*)(QValueAxis*, QMetaObject::Call, int, void**);
    using QValueAxis_Type_Callback = QAbstractAxis::AxisType (*)();
    using QValueAxis_Event_Callback = bool (*)(QValueAxis*, QEvent*);
    using QValueAxis_EventFilter_Callback = bool (*)(QValueAxis*, QObject*, QEvent*);
    using QValueAxis_TimerEvent_Callback = void (*)(QValueAxis*, QTimerEvent*);
    using QValueAxis_ChildEvent_Callback = void (*)(QValueAxis*, QChildEvent*);
    using QValueAxis_CustomEvent_Callback = void (*)(QValueAxis*, QEvent*);
    using QValueAxis_ConnectNotify_Callback = void (*)(QValueAxis*, const QMetaMethod&);
    using QValueAxis_DisconnectNotify_Callback = void (*)(QValueAxis*, const QMetaMethod&);
    using QValueAxis_Sender_Callback = QObject* (*)();
    using QValueAxis_SenderSignalIndex_Callback = int (*)();
    using QValueAxis_Receivers_Callback = int (*)(const QValueAxis*, const char*);
    using QValueAxis_IsSignalConnected_Callback = bool (*)(const QValueAxis*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QValueAxis_Metacall_Callback qvalueaxis_metacall_callback = nullptr;
    QValueAxis_Type_Callback qvalueaxis_type_callback = nullptr;
    QValueAxis_Event_Callback qvalueaxis_event_callback = nullptr;
    QValueAxis_EventFilter_Callback qvalueaxis_eventfilter_callback = nullptr;
    QValueAxis_TimerEvent_Callback qvalueaxis_timerevent_callback = nullptr;
    QValueAxis_ChildEvent_Callback qvalueaxis_childevent_callback = nullptr;
    QValueAxis_CustomEvent_Callback qvalueaxis_customevent_callback = nullptr;
    QValueAxis_ConnectNotify_Callback qvalueaxis_connectnotify_callback = nullptr;
    QValueAxis_DisconnectNotify_Callback qvalueaxis_disconnectnotify_callback = nullptr;
    QValueAxis_Sender_Callback qvalueaxis_sender_callback = nullptr;
    QValueAxis_SenderSignalIndex_Callback qvalueaxis_sendersignalindex_callback = nullptr;
    QValueAxis_Receivers_Callback qvalueaxis_receivers_callback = nullptr;
    QValueAxis_IsSignalConnected_Callback qvalueaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvalueaxis_metacall_isbase = false;
    mutable bool qvalueaxis_type_isbase = false;
    mutable bool qvalueaxis_event_isbase = false;
    mutable bool qvalueaxis_eventfilter_isbase = false;
    mutable bool qvalueaxis_timerevent_isbase = false;
    mutable bool qvalueaxis_childevent_isbase = false;
    mutable bool qvalueaxis_customevent_isbase = false;
    mutable bool qvalueaxis_connectnotify_isbase = false;
    mutable bool qvalueaxis_disconnectnotify_isbase = false;
    mutable bool qvalueaxis_sender_isbase = false;
    mutable bool qvalueaxis_sendersignalindex_isbase = false;
    mutable bool qvalueaxis_receivers_isbase = false;
    mutable bool qvalueaxis_issignalconnected_isbase = false;

  public:
    VirtualQValueAxis() : QValueAxis(){};
    VirtualQValueAxis(QObject* parent) : QValueAxis(parent){};

    ~VirtualQValueAxis() {
        qvalueaxis_metacall_callback = nullptr;
        qvalueaxis_type_callback = nullptr;
        qvalueaxis_event_callback = nullptr;
        qvalueaxis_eventfilter_callback = nullptr;
        qvalueaxis_timerevent_callback = nullptr;
        qvalueaxis_childevent_callback = nullptr;
        qvalueaxis_customevent_callback = nullptr;
        qvalueaxis_connectnotify_callback = nullptr;
        qvalueaxis_disconnectnotify_callback = nullptr;
        qvalueaxis_sender_callback = nullptr;
        qvalueaxis_sendersignalindex_callback = nullptr;
        qvalueaxis_receivers_callback = nullptr;
        qvalueaxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQValueAxis_Metacall_Callback(QValueAxis_Metacall_Callback cb) { qvalueaxis_metacall_callback = cb; }
    void setQValueAxis_Type_Callback(QValueAxis_Type_Callback cb) { qvalueaxis_type_callback = cb; }
    void setQValueAxis_Event_Callback(QValueAxis_Event_Callback cb) { qvalueaxis_event_callback = cb; }
    void setQValueAxis_EventFilter_Callback(QValueAxis_EventFilter_Callback cb) { qvalueaxis_eventfilter_callback = cb; }
    void setQValueAxis_TimerEvent_Callback(QValueAxis_TimerEvent_Callback cb) { qvalueaxis_timerevent_callback = cb; }
    void setQValueAxis_ChildEvent_Callback(QValueAxis_ChildEvent_Callback cb) { qvalueaxis_childevent_callback = cb; }
    void setQValueAxis_CustomEvent_Callback(QValueAxis_CustomEvent_Callback cb) { qvalueaxis_customevent_callback = cb; }
    void setQValueAxis_ConnectNotify_Callback(QValueAxis_ConnectNotify_Callback cb) { qvalueaxis_connectnotify_callback = cb; }
    void setQValueAxis_DisconnectNotify_Callback(QValueAxis_DisconnectNotify_Callback cb) { qvalueaxis_disconnectnotify_callback = cb; }
    void setQValueAxis_Sender_Callback(QValueAxis_Sender_Callback cb) { qvalueaxis_sender_callback = cb; }
    void setQValueAxis_SenderSignalIndex_Callback(QValueAxis_SenderSignalIndex_Callback cb) { qvalueaxis_sendersignalindex_callback = cb; }
    void setQValueAxis_Receivers_Callback(QValueAxis_Receivers_Callback cb) { qvalueaxis_receivers_callback = cb; }
    void setQValueAxis_IsSignalConnected_Callback(QValueAxis_IsSignalConnected_Callback cb) { qvalueaxis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQValueAxis_Metacall_IsBase(bool value) const { qvalueaxis_metacall_isbase = value; }
    void setQValueAxis_Type_IsBase(bool value) const { qvalueaxis_type_isbase = value; }
    void setQValueAxis_Event_IsBase(bool value) const { qvalueaxis_event_isbase = value; }
    void setQValueAxis_EventFilter_IsBase(bool value) const { qvalueaxis_eventfilter_isbase = value; }
    void setQValueAxis_TimerEvent_IsBase(bool value) const { qvalueaxis_timerevent_isbase = value; }
    void setQValueAxis_ChildEvent_IsBase(bool value) const { qvalueaxis_childevent_isbase = value; }
    void setQValueAxis_CustomEvent_IsBase(bool value) const { qvalueaxis_customevent_isbase = value; }
    void setQValueAxis_ConnectNotify_IsBase(bool value) const { qvalueaxis_connectnotify_isbase = value; }
    void setQValueAxis_DisconnectNotify_IsBase(bool value) const { qvalueaxis_disconnectnotify_isbase = value; }
    void setQValueAxis_Sender_IsBase(bool value) const { qvalueaxis_sender_isbase = value; }
    void setQValueAxis_SenderSignalIndex_IsBase(bool value) const { qvalueaxis_sendersignalindex_isbase = value; }
    void setQValueAxis_Receivers_IsBase(bool value) const { qvalueaxis_receivers_isbase = value; }
    void setQValueAxis_IsSignalConnected_IsBase(bool value) const { qvalueaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalueaxis_metacall_isbase) {
            qvalueaxis_metacall_isbase = false;
            return QValueAxis::qt_metacall(param1, param2, param3);
        } else if (qvalueaxis_metacall_callback != nullptr) {
            return qvalueaxis_metacall_callback(this, param1, param2, param3);
        } else {
            return QValueAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qvalueaxis_type_isbase) {
            qvalueaxis_type_isbase = false;
            return QValueAxis::type();
        } else if (qvalueaxis_type_callback != nullptr) {
            return qvalueaxis_type_callback();
        } else {
            return QValueAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalueaxis_event_isbase) {
            qvalueaxis_event_isbase = false;
            return QValueAxis::event(event);
        } else if (qvalueaxis_event_callback != nullptr) {
            return qvalueaxis_event_callback(this, event);
        } else {
            return QValueAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalueaxis_eventfilter_isbase) {
            qvalueaxis_eventfilter_isbase = false;
            return QValueAxis::eventFilter(watched, event);
        } else if (qvalueaxis_eventfilter_callback != nullptr) {
            return qvalueaxis_eventfilter_callback(this, watched, event);
        } else {
            return QValueAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalueaxis_timerevent_isbase) {
            qvalueaxis_timerevent_isbase = false;
            QValueAxis::timerEvent(event);
        } else if (qvalueaxis_timerevent_callback != nullptr) {
            qvalueaxis_timerevent_callback(this, event);
        } else {
            QValueAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalueaxis_childevent_isbase) {
            qvalueaxis_childevent_isbase = false;
            QValueAxis::childEvent(event);
        } else if (qvalueaxis_childevent_callback != nullptr) {
            qvalueaxis_childevent_callback(this, event);
        } else {
            QValueAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalueaxis_customevent_isbase) {
            qvalueaxis_customevent_isbase = false;
            QValueAxis::customEvent(event);
        } else if (qvalueaxis_customevent_callback != nullptr) {
            qvalueaxis_customevent_callback(this, event);
        } else {
            QValueAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalueaxis_connectnotify_isbase) {
            qvalueaxis_connectnotify_isbase = false;
            QValueAxis::connectNotify(signal);
        } else if (qvalueaxis_connectnotify_callback != nullptr) {
            qvalueaxis_connectnotify_callback(this, signal);
        } else {
            QValueAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalueaxis_disconnectnotify_isbase) {
            qvalueaxis_disconnectnotify_isbase = false;
            QValueAxis::disconnectNotify(signal);
        } else if (qvalueaxis_disconnectnotify_callback != nullptr) {
            qvalueaxis_disconnectnotify_callback(this, signal);
        } else {
            QValueAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvalueaxis_sender_isbase) {
            qvalueaxis_sender_isbase = false;
            return QValueAxis::sender();
        } else if (qvalueaxis_sender_callback != nullptr) {
            return qvalueaxis_sender_callback();
        } else {
            return QValueAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvalueaxis_sendersignalindex_isbase) {
            qvalueaxis_sendersignalindex_isbase = false;
            return QValueAxis::senderSignalIndex();
        } else if (qvalueaxis_sendersignalindex_callback != nullptr) {
            return qvalueaxis_sendersignalindex_callback();
        } else {
            return QValueAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvalueaxis_receivers_isbase) {
            qvalueaxis_receivers_isbase = false;
            return QValueAxis::receivers(signal);
        } else if (qvalueaxis_receivers_callback != nullptr) {
            return qvalueaxis_receivers_callback(this, signal);
        } else {
            return QValueAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvalueaxis_issignalconnected_isbase) {
            qvalueaxis_issignalconnected_isbase = false;
            return QValueAxis::isSignalConnected(signal);
        } else if (qvalueaxis_issignalconnected_callback != nullptr) {
            return qvalueaxis_issignalconnected_callback(this, signal);
        } else {
            return QValueAxis::isSignalConnected(signal);
        }
    }
};

#endif
