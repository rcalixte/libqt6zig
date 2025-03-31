#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQLOGVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQLOGVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLogValueAxis so that we can call protected methods
class VirtualQLogValueAxis : public QLogValueAxis {

  public:
    // Virtual class public types (including callbacks)
    using QLogValueAxis_Metacall_Callback = int (*)(QLogValueAxis*, QMetaObject::Call, int, void**);
    using QLogValueAxis_Type_Callback = QAbstractAxis::AxisType (*)();
    using QLogValueAxis_Event_Callback = bool (*)(QLogValueAxis*, QEvent*);
    using QLogValueAxis_EventFilter_Callback = bool (*)(QLogValueAxis*, QObject*, QEvent*);
    using QLogValueAxis_TimerEvent_Callback = void (*)(QLogValueAxis*, QTimerEvent*);
    using QLogValueAxis_ChildEvent_Callback = void (*)(QLogValueAxis*, QChildEvent*);
    using QLogValueAxis_CustomEvent_Callback = void (*)(QLogValueAxis*, QEvent*);
    using QLogValueAxis_ConnectNotify_Callback = void (*)(QLogValueAxis*, const QMetaMethod&);
    using QLogValueAxis_DisconnectNotify_Callback = void (*)(QLogValueAxis*, const QMetaMethod&);
    using QLogValueAxis_Sender_Callback = QObject* (*)();
    using QLogValueAxis_SenderSignalIndex_Callback = int (*)();
    using QLogValueAxis_Receivers_Callback = int (*)(const QLogValueAxis*, const char*);
    using QLogValueAxis_IsSignalConnected_Callback = bool (*)(const QLogValueAxis*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QLogValueAxis_Metacall_Callback qlogvalueaxis_metacall_callback = nullptr;
    QLogValueAxis_Type_Callback qlogvalueaxis_type_callback = nullptr;
    QLogValueAxis_Event_Callback qlogvalueaxis_event_callback = nullptr;
    QLogValueAxis_EventFilter_Callback qlogvalueaxis_eventfilter_callback = nullptr;
    QLogValueAxis_TimerEvent_Callback qlogvalueaxis_timerevent_callback = nullptr;
    QLogValueAxis_ChildEvent_Callback qlogvalueaxis_childevent_callback = nullptr;
    QLogValueAxis_CustomEvent_Callback qlogvalueaxis_customevent_callback = nullptr;
    QLogValueAxis_ConnectNotify_Callback qlogvalueaxis_connectnotify_callback = nullptr;
    QLogValueAxis_DisconnectNotify_Callback qlogvalueaxis_disconnectnotify_callback = nullptr;
    QLogValueAxis_Sender_Callback qlogvalueaxis_sender_callback = nullptr;
    QLogValueAxis_SenderSignalIndex_Callback qlogvalueaxis_sendersignalindex_callback = nullptr;
    QLogValueAxis_Receivers_Callback qlogvalueaxis_receivers_callback = nullptr;
    QLogValueAxis_IsSignalConnected_Callback qlogvalueaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlogvalueaxis_metacall_isbase = false;
    mutable bool qlogvalueaxis_type_isbase = false;
    mutable bool qlogvalueaxis_event_isbase = false;
    mutable bool qlogvalueaxis_eventfilter_isbase = false;
    mutable bool qlogvalueaxis_timerevent_isbase = false;
    mutable bool qlogvalueaxis_childevent_isbase = false;
    mutable bool qlogvalueaxis_customevent_isbase = false;
    mutable bool qlogvalueaxis_connectnotify_isbase = false;
    mutable bool qlogvalueaxis_disconnectnotify_isbase = false;
    mutable bool qlogvalueaxis_sender_isbase = false;
    mutable bool qlogvalueaxis_sendersignalindex_isbase = false;
    mutable bool qlogvalueaxis_receivers_isbase = false;
    mutable bool qlogvalueaxis_issignalconnected_isbase = false;

  public:
    VirtualQLogValueAxis() : QLogValueAxis(){};
    VirtualQLogValueAxis(QObject* parent) : QLogValueAxis(parent){};

    ~VirtualQLogValueAxis() {
        qlogvalueaxis_metacall_callback = nullptr;
        qlogvalueaxis_type_callback = nullptr;
        qlogvalueaxis_event_callback = nullptr;
        qlogvalueaxis_eventfilter_callback = nullptr;
        qlogvalueaxis_timerevent_callback = nullptr;
        qlogvalueaxis_childevent_callback = nullptr;
        qlogvalueaxis_customevent_callback = nullptr;
        qlogvalueaxis_connectnotify_callback = nullptr;
        qlogvalueaxis_disconnectnotify_callback = nullptr;
        qlogvalueaxis_sender_callback = nullptr;
        qlogvalueaxis_sendersignalindex_callback = nullptr;
        qlogvalueaxis_receivers_callback = nullptr;
        qlogvalueaxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQLogValueAxis_Metacall_Callback(QLogValueAxis_Metacall_Callback cb) { qlogvalueaxis_metacall_callback = cb; }
    void setQLogValueAxis_Type_Callback(QLogValueAxis_Type_Callback cb) { qlogvalueaxis_type_callback = cb; }
    void setQLogValueAxis_Event_Callback(QLogValueAxis_Event_Callback cb) { qlogvalueaxis_event_callback = cb; }
    void setQLogValueAxis_EventFilter_Callback(QLogValueAxis_EventFilter_Callback cb) { qlogvalueaxis_eventfilter_callback = cb; }
    void setQLogValueAxis_TimerEvent_Callback(QLogValueAxis_TimerEvent_Callback cb) { qlogvalueaxis_timerevent_callback = cb; }
    void setQLogValueAxis_ChildEvent_Callback(QLogValueAxis_ChildEvent_Callback cb) { qlogvalueaxis_childevent_callback = cb; }
    void setQLogValueAxis_CustomEvent_Callback(QLogValueAxis_CustomEvent_Callback cb) { qlogvalueaxis_customevent_callback = cb; }
    void setQLogValueAxis_ConnectNotify_Callback(QLogValueAxis_ConnectNotify_Callback cb) { qlogvalueaxis_connectnotify_callback = cb; }
    void setQLogValueAxis_DisconnectNotify_Callback(QLogValueAxis_DisconnectNotify_Callback cb) { qlogvalueaxis_disconnectnotify_callback = cb; }
    void setQLogValueAxis_Sender_Callback(QLogValueAxis_Sender_Callback cb) { qlogvalueaxis_sender_callback = cb; }
    void setQLogValueAxis_SenderSignalIndex_Callback(QLogValueAxis_SenderSignalIndex_Callback cb) { qlogvalueaxis_sendersignalindex_callback = cb; }
    void setQLogValueAxis_Receivers_Callback(QLogValueAxis_Receivers_Callback cb) { qlogvalueaxis_receivers_callback = cb; }
    void setQLogValueAxis_IsSignalConnected_Callback(QLogValueAxis_IsSignalConnected_Callback cb) { qlogvalueaxis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQLogValueAxis_Metacall_IsBase(bool value) const { qlogvalueaxis_metacall_isbase = value; }
    void setQLogValueAxis_Type_IsBase(bool value) const { qlogvalueaxis_type_isbase = value; }
    void setQLogValueAxis_Event_IsBase(bool value) const { qlogvalueaxis_event_isbase = value; }
    void setQLogValueAxis_EventFilter_IsBase(bool value) const { qlogvalueaxis_eventfilter_isbase = value; }
    void setQLogValueAxis_TimerEvent_IsBase(bool value) const { qlogvalueaxis_timerevent_isbase = value; }
    void setQLogValueAxis_ChildEvent_IsBase(bool value) const { qlogvalueaxis_childevent_isbase = value; }
    void setQLogValueAxis_CustomEvent_IsBase(bool value) const { qlogvalueaxis_customevent_isbase = value; }
    void setQLogValueAxis_ConnectNotify_IsBase(bool value) const { qlogvalueaxis_connectnotify_isbase = value; }
    void setQLogValueAxis_DisconnectNotify_IsBase(bool value) const { qlogvalueaxis_disconnectnotify_isbase = value; }
    void setQLogValueAxis_Sender_IsBase(bool value) const { qlogvalueaxis_sender_isbase = value; }
    void setQLogValueAxis_SenderSignalIndex_IsBase(bool value) const { qlogvalueaxis_sendersignalindex_isbase = value; }
    void setQLogValueAxis_Receivers_IsBase(bool value) const { qlogvalueaxis_receivers_isbase = value; }
    void setQLogValueAxis_IsSignalConnected_IsBase(bool value) const { qlogvalueaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlogvalueaxis_metacall_isbase) {
            qlogvalueaxis_metacall_isbase = false;
            return QLogValueAxis::qt_metacall(param1, param2, param3);
        } else if (qlogvalueaxis_metacall_callback != nullptr) {
            return qlogvalueaxis_metacall_callback(this, param1, param2, param3);
        } else {
            return QLogValueAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qlogvalueaxis_type_isbase) {
            qlogvalueaxis_type_isbase = false;
            return QLogValueAxis::type();
        } else if (qlogvalueaxis_type_callback != nullptr) {
            return qlogvalueaxis_type_callback();
        } else {
            return QLogValueAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlogvalueaxis_event_isbase) {
            qlogvalueaxis_event_isbase = false;
            return QLogValueAxis::event(event);
        } else if (qlogvalueaxis_event_callback != nullptr) {
            return qlogvalueaxis_event_callback(this, event);
        } else {
            return QLogValueAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlogvalueaxis_eventfilter_isbase) {
            qlogvalueaxis_eventfilter_isbase = false;
            return QLogValueAxis::eventFilter(watched, event);
        } else if (qlogvalueaxis_eventfilter_callback != nullptr) {
            return qlogvalueaxis_eventfilter_callback(this, watched, event);
        } else {
            return QLogValueAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlogvalueaxis_timerevent_isbase) {
            qlogvalueaxis_timerevent_isbase = false;
            QLogValueAxis::timerEvent(event);
        } else if (qlogvalueaxis_timerevent_callback != nullptr) {
            qlogvalueaxis_timerevent_callback(this, event);
        } else {
            QLogValueAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlogvalueaxis_childevent_isbase) {
            qlogvalueaxis_childevent_isbase = false;
            QLogValueAxis::childEvent(event);
        } else if (qlogvalueaxis_childevent_callback != nullptr) {
            qlogvalueaxis_childevent_callback(this, event);
        } else {
            QLogValueAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlogvalueaxis_customevent_isbase) {
            qlogvalueaxis_customevent_isbase = false;
            QLogValueAxis::customEvent(event);
        } else if (qlogvalueaxis_customevent_callback != nullptr) {
            qlogvalueaxis_customevent_callback(this, event);
        } else {
            QLogValueAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlogvalueaxis_connectnotify_isbase) {
            qlogvalueaxis_connectnotify_isbase = false;
            QLogValueAxis::connectNotify(signal);
        } else if (qlogvalueaxis_connectnotify_callback != nullptr) {
            qlogvalueaxis_connectnotify_callback(this, signal);
        } else {
            QLogValueAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlogvalueaxis_disconnectnotify_isbase) {
            qlogvalueaxis_disconnectnotify_isbase = false;
            QLogValueAxis::disconnectNotify(signal);
        } else if (qlogvalueaxis_disconnectnotify_callback != nullptr) {
            qlogvalueaxis_disconnectnotify_callback(this, signal);
        } else {
            QLogValueAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlogvalueaxis_sender_isbase) {
            qlogvalueaxis_sender_isbase = false;
            return QLogValueAxis::sender();
        } else if (qlogvalueaxis_sender_callback != nullptr) {
            return qlogvalueaxis_sender_callback();
        } else {
            return QLogValueAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlogvalueaxis_sendersignalindex_isbase) {
            qlogvalueaxis_sendersignalindex_isbase = false;
            return QLogValueAxis::senderSignalIndex();
        } else if (qlogvalueaxis_sendersignalindex_callback != nullptr) {
            return qlogvalueaxis_sendersignalindex_callback();
        } else {
            return QLogValueAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlogvalueaxis_receivers_isbase) {
            qlogvalueaxis_receivers_isbase = false;
            return QLogValueAxis::receivers(signal);
        } else if (qlogvalueaxis_receivers_callback != nullptr) {
            return qlogvalueaxis_receivers_callback(this, signal);
        } else {
            return QLogValueAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlogvalueaxis_issignalconnected_isbase) {
            qlogvalueaxis_issignalconnected_isbase = false;
            return QLogValueAxis::isSignalConnected(signal);
        } else if (qlogvalueaxis_issignalconnected_callback != nullptr) {
            return qlogvalueaxis_issignalconnected_callback(this, signal);
        } else {
            return QLogValueAxis::isSignalConnected(signal);
        }
    }
};

#endif
