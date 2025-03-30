#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQBARCATEGORYAXIS_H
#define SRC_CHARTSC_LIBVIRTUALQBARCATEGORYAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarCategoryAxis so that we can call protected methods
class VirtualQBarCategoryAxis : public QBarCategoryAxis {

  public:
    // Virtual class public types (including callbacks)
    using QBarCategoryAxis_Metacall_Callback = int (*)(QBarCategoryAxis*, QMetaObject::Call, int, void**);
    using QBarCategoryAxis_Type_Callback = QAbstractAxis::AxisType (*)();
    using QBarCategoryAxis_Event_Callback = bool (*)(QBarCategoryAxis*, QEvent*);
    using QBarCategoryAxis_EventFilter_Callback = bool (*)(QBarCategoryAxis*, QObject*, QEvent*);
    using QBarCategoryAxis_TimerEvent_Callback = void (*)(QBarCategoryAxis*, QTimerEvent*);
    using QBarCategoryAxis_ChildEvent_Callback = void (*)(QBarCategoryAxis*, QChildEvent*);
    using QBarCategoryAxis_CustomEvent_Callback = void (*)(QBarCategoryAxis*, QEvent*);
    using QBarCategoryAxis_ConnectNotify_Callback = void (*)(QBarCategoryAxis*, const QMetaMethod&);
    using QBarCategoryAxis_DisconnectNotify_Callback = void (*)(QBarCategoryAxis*, const QMetaMethod&);
    using QBarCategoryAxis_Sender_Callback = QObject* (*)();
    using QBarCategoryAxis_SenderSignalIndex_Callback = int (*)();
    using QBarCategoryAxis_Receivers_Callback = int (*)(const QBarCategoryAxis*, const char*);
    using QBarCategoryAxis_IsSignalConnected_Callback = bool (*)(const QBarCategoryAxis*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QBarCategoryAxis_Metacall_Callback qbarcategoryaxis_metacall_callback = nullptr;
    QBarCategoryAxis_Type_Callback qbarcategoryaxis_type_callback = nullptr;
    QBarCategoryAxis_Event_Callback qbarcategoryaxis_event_callback = nullptr;
    QBarCategoryAxis_EventFilter_Callback qbarcategoryaxis_eventfilter_callback = nullptr;
    QBarCategoryAxis_TimerEvent_Callback qbarcategoryaxis_timerevent_callback = nullptr;
    QBarCategoryAxis_ChildEvent_Callback qbarcategoryaxis_childevent_callback = nullptr;
    QBarCategoryAxis_CustomEvent_Callback qbarcategoryaxis_customevent_callback = nullptr;
    QBarCategoryAxis_ConnectNotify_Callback qbarcategoryaxis_connectnotify_callback = nullptr;
    QBarCategoryAxis_DisconnectNotify_Callback qbarcategoryaxis_disconnectnotify_callback = nullptr;
    QBarCategoryAxis_Sender_Callback qbarcategoryaxis_sender_callback = nullptr;
    QBarCategoryAxis_SenderSignalIndex_Callback qbarcategoryaxis_sendersignalindex_callback = nullptr;
    QBarCategoryAxis_Receivers_Callback qbarcategoryaxis_receivers_callback = nullptr;
    QBarCategoryAxis_IsSignalConnected_Callback qbarcategoryaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbarcategoryaxis_metacall_isbase = false;
    mutable bool qbarcategoryaxis_type_isbase = false;
    mutable bool qbarcategoryaxis_event_isbase = false;
    mutable bool qbarcategoryaxis_eventfilter_isbase = false;
    mutable bool qbarcategoryaxis_timerevent_isbase = false;
    mutable bool qbarcategoryaxis_childevent_isbase = false;
    mutable bool qbarcategoryaxis_customevent_isbase = false;
    mutable bool qbarcategoryaxis_connectnotify_isbase = false;
    mutable bool qbarcategoryaxis_disconnectnotify_isbase = false;
    mutable bool qbarcategoryaxis_sender_isbase = false;
    mutable bool qbarcategoryaxis_sendersignalindex_isbase = false;
    mutable bool qbarcategoryaxis_receivers_isbase = false;
    mutable bool qbarcategoryaxis_issignalconnected_isbase = false;

  public:
    VirtualQBarCategoryAxis() : QBarCategoryAxis(){};
    VirtualQBarCategoryAxis(QObject* parent) : QBarCategoryAxis(parent){};

    ~VirtualQBarCategoryAxis() {
        qbarcategoryaxis_metacall_callback = nullptr;
        qbarcategoryaxis_type_callback = nullptr;
        qbarcategoryaxis_event_callback = nullptr;
        qbarcategoryaxis_eventfilter_callback = nullptr;
        qbarcategoryaxis_timerevent_callback = nullptr;
        qbarcategoryaxis_childevent_callback = nullptr;
        qbarcategoryaxis_customevent_callback = nullptr;
        qbarcategoryaxis_connectnotify_callback = nullptr;
        qbarcategoryaxis_disconnectnotify_callback = nullptr;
        qbarcategoryaxis_sender_callback = nullptr;
        qbarcategoryaxis_sendersignalindex_callback = nullptr;
        qbarcategoryaxis_receivers_callback = nullptr;
        qbarcategoryaxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQBarCategoryAxis_Metacall_Callback(QBarCategoryAxis_Metacall_Callback cb) { qbarcategoryaxis_metacall_callback = cb; }
    void setQBarCategoryAxis_Type_Callback(QBarCategoryAxis_Type_Callback cb) { qbarcategoryaxis_type_callback = cb; }
    void setQBarCategoryAxis_Event_Callback(QBarCategoryAxis_Event_Callback cb) { qbarcategoryaxis_event_callback = cb; }
    void setQBarCategoryAxis_EventFilter_Callback(QBarCategoryAxis_EventFilter_Callback cb) { qbarcategoryaxis_eventfilter_callback = cb; }
    void setQBarCategoryAxis_TimerEvent_Callback(QBarCategoryAxis_TimerEvent_Callback cb) { qbarcategoryaxis_timerevent_callback = cb; }
    void setQBarCategoryAxis_ChildEvent_Callback(QBarCategoryAxis_ChildEvent_Callback cb) { qbarcategoryaxis_childevent_callback = cb; }
    void setQBarCategoryAxis_CustomEvent_Callback(QBarCategoryAxis_CustomEvent_Callback cb) { qbarcategoryaxis_customevent_callback = cb; }
    void setQBarCategoryAxis_ConnectNotify_Callback(QBarCategoryAxis_ConnectNotify_Callback cb) { qbarcategoryaxis_connectnotify_callback = cb; }
    void setQBarCategoryAxis_DisconnectNotify_Callback(QBarCategoryAxis_DisconnectNotify_Callback cb) { qbarcategoryaxis_disconnectnotify_callback = cb; }
    void setQBarCategoryAxis_Sender_Callback(QBarCategoryAxis_Sender_Callback cb) { qbarcategoryaxis_sender_callback = cb; }
    void setQBarCategoryAxis_SenderSignalIndex_Callback(QBarCategoryAxis_SenderSignalIndex_Callback cb) { qbarcategoryaxis_sendersignalindex_callback = cb; }
    void setQBarCategoryAxis_Receivers_Callback(QBarCategoryAxis_Receivers_Callback cb) { qbarcategoryaxis_receivers_callback = cb; }
    void setQBarCategoryAxis_IsSignalConnected_Callback(QBarCategoryAxis_IsSignalConnected_Callback cb) { qbarcategoryaxis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQBarCategoryAxis_Metacall_IsBase(bool value) const { qbarcategoryaxis_metacall_isbase = value; }
    void setQBarCategoryAxis_Type_IsBase(bool value) const { qbarcategoryaxis_type_isbase = value; }
    void setQBarCategoryAxis_Event_IsBase(bool value) const { qbarcategoryaxis_event_isbase = value; }
    void setQBarCategoryAxis_EventFilter_IsBase(bool value) const { qbarcategoryaxis_eventfilter_isbase = value; }
    void setQBarCategoryAxis_TimerEvent_IsBase(bool value) const { qbarcategoryaxis_timerevent_isbase = value; }
    void setQBarCategoryAxis_ChildEvent_IsBase(bool value) const { qbarcategoryaxis_childevent_isbase = value; }
    void setQBarCategoryAxis_CustomEvent_IsBase(bool value) const { qbarcategoryaxis_customevent_isbase = value; }
    void setQBarCategoryAxis_ConnectNotify_IsBase(bool value) const { qbarcategoryaxis_connectnotify_isbase = value; }
    void setQBarCategoryAxis_DisconnectNotify_IsBase(bool value) const { qbarcategoryaxis_disconnectnotify_isbase = value; }
    void setQBarCategoryAxis_Sender_IsBase(bool value) const { qbarcategoryaxis_sender_isbase = value; }
    void setQBarCategoryAxis_SenderSignalIndex_IsBase(bool value) const { qbarcategoryaxis_sendersignalindex_isbase = value; }
    void setQBarCategoryAxis_Receivers_IsBase(bool value) const { qbarcategoryaxis_receivers_isbase = value; }
    void setQBarCategoryAxis_IsSignalConnected_IsBase(bool value) const { qbarcategoryaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarcategoryaxis_metacall_isbase) {
            qbarcategoryaxis_metacall_isbase = false;
            return QBarCategoryAxis::qt_metacall(param1, param2, param3);
        } else if (qbarcategoryaxis_metacall_callback != nullptr) {
            return qbarcategoryaxis_metacall_callback(this, param1, param2, param3);
        } else {
            return QBarCategoryAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qbarcategoryaxis_type_isbase) {
            qbarcategoryaxis_type_isbase = false;
            return QBarCategoryAxis::type();
        } else if (qbarcategoryaxis_type_callback != nullptr) {
            return qbarcategoryaxis_type_callback();
        } else {
            return QBarCategoryAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarcategoryaxis_event_isbase) {
            qbarcategoryaxis_event_isbase = false;
            return QBarCategoryAxis::event(event);
        } else if (qbarcategoryaxis_event_callback != nullptr) {
            return qbarcategoryaxis_event_callback(this, event);
        } else {
            return QBarCategoryAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarcategoryaxis_eventfilter_isbase) {
            qbarcategoryaxis_eventfilter_isbase = false;
            return QBarCategoryAxis::eventFilter(watched, event);
        } else if (qbarcategoryaxis_eventfilter_callback != nullptr) {
            return qbarcategoryaxis_eventfilter_callback(this, watched, event);
        } else {
            return QBarCategoryAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarcategoryaxis_timerevent_isbase) {
            qbarcategoryaxis_timerevent_isbase = false;
            QBarCategoryAxis::timerEvent(event);
        } else if (qbarcategoryaxis_timerevent_callback != nullptr) {
            qbarcategoryaxis_timerevent_callback(this, event);
        } else {
            QBarCategoryAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarcategoryaxis_childevent_isbase) {
            qbarcategoryaxis_childevent_isbase = false;
            QBarCategoryAxis::childEvent(event);
        } else if (qbarcategoryaxis_childevent_callback != nullptr) {
            qbarcategoryaxis_childevent_callback(this, event);
        } else {
            QBarCategoryAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarcategoryaxis_customevent_isbase) {
            qbarcategoryaxis_customevent_isbase = false;
            QBarCategoryAxis::customEvent(event);
        } else if (qbarcategoryaxis_customevent_callback != nullptr) {
            qbarcategoryaxis_customevent_callback(this, event);
        } else {
            QBarCategoryAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarcategoryaxis_connectnotify_isbase) {
            qbarcategoryaxis_connectnotify_isbase = false;
            QBarCategoryAxis::connectNotify(signal);
        } else if (qbarcategoryaxis_connectnotify_callback != nullptr) {
            qbarcategoryaxis_connectnotify_callback(this, signal);
        } else {
            QBarCategoryAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarcategoryaxis_disconnectnotify_isbase) {
            qbarcategoryaxis_disconnectnotify_isbase = false;
            QBarCategoryAxis::disconnectNotify(signal);
        } else if (qbarcategoryaxis_disconnectnotify_callback != nullptr) {
            qbarcategoryaxis_disconnectnotify_callback(this, signal);
        } else {
            QBarCategoryAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbarcategoryaxis_sender_isbase) {
            qbarcategoryaxis_sender_isbase = false;
            return QBarCategoryAxis::sender();
        } else if (qbarcategoryaxis_sender_callback != nullptr) {
            return qbarcategoryaxis_sender_callback();
        } else {
            return QBarCategoryAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbarcategoryaxis_sendersignalindex_isbase) {
            qbarcategoryaxis_sendersignalindex_isbase = false;
            return QBarCategoryAxis::senderSignalIndex();
        } else if (qbarcategoryaxis_sendersignalindex_callback != nullptr) {
            return qbarcategoryaxis_sendersignalindex_callback();
        } else {
            return QBarCategoryAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbarcategoryaxis_receivers_isbase) {
            qbarcategoryaxis_receivers_isbase = false;
            return QBarCategoryAxis::receivers(signal);
        } else if (qbarcategoryaxis_receivers_callback != nullptr) {
            return qbarcategoryaxis_receivers_callback(this, signal);
        } else {
            return QBarCategoryAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbarcategoryaxis_issignalconnected_isbase) {
            qbarcategoryaxis_issignalconnected_isbase = false;
            return QBarCategoryAxis::isSignalConnected(signal);
        } else if (qbarcategoryaxis_issignalconnected_callback != nullptr) {
            return qbarcategoryaxis_issignalconnected_callback(this, signal);
        } else {
            return QBarCategoryAxis::isSignalConnected(signal);
        }
    }
};

#endif
