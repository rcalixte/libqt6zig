#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCATEGORYAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCATEGORYAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCategoryAxis so that we can call protected methods
class VirtualQCategoryAxis : public QCategoryAxis {

  public:
    // Virtual class public types (including callbacks)
    using QCategoryAxis_Metacall_Callback = int (*)(QCategoryAxis*, QMetaObject::Call, int, void**);
    using QCategoryAxis_Type_Callback = QAbstractAxis::AxisType (*)();
    using QCategoryAxis_Event_Callback = bool (*)(QCategoryAxis*, QEvent*);
    using QCategoryAxis_EventFilter_Callback = bool (*)(QCategoryAxis*, QObject*, QEvent*);
    using QCategoryAxis_TimerEvent_Callback = void (*)(QCategoryAxis*, QTimerEvent*);
    using QCategoryAxis_ChildEvent_Callback = void (*)(QCategoryAxis*, QChildEvent*);
    using QCategoryAxis_CustomEvent_Callback = void (*)(QCategoryAxis*, QEvent*);
    using QCategoryAxis_ConnectNotify_Callback = void (*)(QCategoryAxis*, const QMetaMethod&);
    using QCategoryAxis_DisconnectNotify_Callback = void (*)(QCategoryAxis*, const QMetaMethod&);
    using QCategoryAxis_Sender_Callback = QObject* (*)();
    using QCategoryAxis_SenderSignalIndex_Callback = int (*)();
    using QCategoryAxis_Receivers_Callback = int (*)(const QCategoryAxis*, const char*);
    using QCategoryAxis_IsSignalConnected_Callback = bool (*)(const QCategoryAxis*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCategoryAxis_Metacall_Callback qcategoryaxis_metacall_callback = nullptr;
    QCategoryAxis_Type_Callback qcategoryaxis_type_callback = nullptr;
    QCategoryAxis_Event_Callback qcategoryaxis_event_callback = nullptr;
    QCategoryAxis_EventFilter_Callback qcategoryaxis_eventfilter_callback = nullptr;
    QCategoryAxis_TimerEvent_Callback qcategoryaxis_timerevent_callback = nullptr;
    QCategoryAxis_ChildEvent_Callback qcategoryaxis_childevent_callback = nullptr;
    QCategoryAxis_CustomEvent_Callback qcategoryaxis_customevent_callback = nullptr;
    QCategoryAxis_ConnectNotify_Callback qcategoryaxis_connectnotify_callback = nullptr;
    QCategoryAxis_DisconnectNotify_Callback qcategoryaxis_disconnectnotify_callback = nullptr;
    QCategoryAxis_Sender_Callback qcategoryaxis_sender_callback = nullptr;
    QCategoryAxis_SenderSignalIndex_Callback qcategoryaxis_sendersignalindex_callback = nullptr;
    QCategoryAxis_Receivers_Callback qcategoryaxis_receivers_callback = nullptr;
    QCategoryAxis_IsSignalConnected_Callback qcategoryaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcategoryaxis_metacall_isbase = false;
    mutable bool qcategoryaxis_type_isbase = false;
    mutable bool qcategoryaxis_event_isbase = false;
    mutable bool qcategoryaxis_eventfilter_isbase = false;
    mutable bool qcategoryaxis_timerevent_isbase = false;
    mutable bool qcategoryaxis_childevent_isbase = false;
    mutable bool qcategoryaxis_customevent_isbase = false;
    mutable bool qcategoryaxis_connectnotify_isbase = false;
    mutable bool qcategoryaxis_disconnectnotify_isbase = false;
    mutable bool qcategoryaxis_sender_isbase = false;
    mutable bool qcategoryaxis_sendersignalindex_isbase = false;
    mutable bool qcategoryaxis_receivers_isbase = false;
    mutable bool qcategoryaxis_issignalconnected_isbase = false;

  public:
    VirtualQCategoryAxis() : QCategoryAxis(){};
    VirtualQCategoryAxis(QObject* parent) : QCategoryAxis(parent){};

    ~VirtualQCategoryAxis() {
        qcategoryaxis_metacall_callback = nullptr;
        qcategoryaxis_type_callback = nullptr;
        qcategoryaxis_event_callback = nullptr;
        qcategoryaxis_eventfilter_callback = nullptr;
        qcategoryaxis_timerevent_callback = nullptr;
        qcategoryaxis_childevent_callback = nullptr;
        qcategoryaxis_customevent_callback = nullptr;
        qcategoryaxis_connectnotify_callback = nullptr;
        qcategoryaxis_disconnectnotify_callback = nullptr;
        qcategoryaxis_sender_callback = nullptr;
        qcategoryaxis_sendersignalindex_callback = nullptr;
        qcategoryaxis_receivers_callback = nullptr;
        qcategoryaxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCategoryAxis_Metacall_Callback(QCategoryAxis_Metacall_Callback cb) { qcategoryaxis_metacall_callback = cb; }
    void setQCategoryAxis_Type_Callback(QCategoryAxis_Type_Callback cb) { qcategoryaxis_type_callback = cb; }
    void setQCategoryAxis_Event_Callback(QCategoryAxis_Event_Callback cb) { qcategoryaxis_event_callback = cb; }
    void setQCategoryAxis_EventFilter_Callback(QCategoryAxis_EventFilter_Callback cb) { qcategoryaxis_eventfilter_callback = cb; }
    void setQCategoryAxis_TimerEvent_Callback(QCategoryAxis_TimerEvent_Callback cb) { qcategoryaxis_timerevent_callback = cb; }
    void setQCategoryAxis_ChildEvent_Callback(QCategoryAxis_ChildEvent_Callback cb) { qcategoryaxis_childevent_callback = cb; }
    void setQCategoryAxis_CustomEvent_Callback(QCategoryAxis_CustomEvent_Callback cb) { qcategoryaxis_customevent_callback = cb; }
    void setQCategoryAxis_ConnectNotify_Callback(QCategoryAxis_ConnectNotify_Callback cb) { qcategoryaxis_connectnotify_callback = cb; }
    void setQCategoryAxis_DisconnectNotify_Callback(QCategoryAxis_DisconnectNotify_Callback cb) { qcategoryaxis_disconnectnotify_callback = cb; }
    void setQCategoryAxis_Sender_Callback(QCategoryAxis_Sender_Callback cb) { qcategoryaxis_sender_callback = cb; }
    void setQCategoryAxis_SenderSignalIndex_Callback(QCategoryAxis_SenderSignalIndex_Callback cb) { qcategoryaxis_sendersignalindex_callback = cb; }
    void setQCategoryAxis_Receivers_Callback(QCategoryAxis_Receivers_Callback cb) { qcategoryaxis_receivers_callback = cb; }
    void setQCategoryAxis_IsSignalConnected_Callback(QCategoryAxis_IsSignalConnected_Callback cb) { qcategoryaxis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCategoryAxis_Metacall_IsBase(bool value) const { qcategoryaxis_metacall_isbase = value; }
    void setQCategoryAxis_Type_IsBase(bool value) const { qcategoryaxis_type_isbase = value; }
    void setQCategoryAxis_Event_IsBase(bool value) const { qcategoryaxis_event_isbase = value; }
    void setQCategoryAxis_EventFilter_IsBase(bool value) const { qcategoryaxis_eventfilter_isbase = value; }
    void setQCategoryAxis_TimerEvent_IsBase(bool value) const { qcategoryaxis_timerevent_isbase = value; }
    void setQCategoryAxis_ChildEvent_IsBase(bool value) const { qcategoryaxis_childevent_isbase = value; }
    void setQCategoryAxis_CustomEvent_IsBase(bool value) const { qcategoryaxis_customevent_isbase = value; }
    void setQCategoryAxis_ConnectNotify_IsBase(bool value) const { qcategoryaxis_connectnotify_isbase = value; }
    void setQCategoryAxis_DisconnectNotify_IsBase(bool value) const { qcategoryaxis_disconnectnotify_isbase = value; }
    void setQCategoryAxis_Sender_IsBase(bool value) const { qcategoryaxis_sender_isbase = value; }
    void setQCategoryAxis_SenderSignalIndex_IsBase(bool value) const { qcategoryaxis_sendersignalindex_isbase = value; }
    void setQCategoryAxis_Receivers_IsBase(bool value) const { qcategoryaxis_receivers_isbase = value; }
    void setQCategoryAxis_IsSignalConnected_IsBase(bool value) const { qcategoryaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcategoryaxis_metacall_isbase) {
            qcategoryaxis_metacall_isbase = false;
            return QCategoryAxis::qt_metacall(param1, param2, param3);
        } else if (qcategoryaxis_metacall_callback != nullptr) {
            return qcategoryaxis_metacall_callback(this, param1, param2, param3);
        } else {
            return QCategoryAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qcategoryaxis_type_isbase) {
            qcategoryaxis_type_isbase = false;
            return QCategoryAxis::type();
        } else if (qcategoryaxis_type_callback != nullptr) {
            return qcategoryaxis_type_callback();
        } else {
            return QCategoryAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcategoryaxis_event_isbase) {
            qcategoryaxis_event_isbase = false;
            return QCategoryAxis::event(event);
        } else if (qcategoryaxis_event_callback != nullptr) {
            return qcategoryaxis_event_callback(this, event);
        } else {
            return QCategoryAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcategoryaxis_eventfilter_isbase) {
            qcategoryaxis_eventfilter_isbase = false;
            return QCategoryAxis::eventFilter(watched, event);
        } else if (qcategoryaxis_eventfilter_callback != nullptr) {
            return qcategoryaxis_eventfilter_callback(this, watched, event);
        } else {
            return QCategoryAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcategoryaxis_timerevent_isbase) {
            qcategoryaxis_timerevent_isbase = false;
            QCategoryAxis::timerEvent(event);
        } else if (qcategoryaxis_timerevent_callback != nullptr) {
            qcategoryaxis_timerevent_callback(this, event);
        } else {
            QCategoryAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcategoryaxis_childevent_isbase) {
            qcategoryaxis_childevent_isbase = false;
            QCategoryAxis::childEvent(event);
        } else if (qcategoryaxis_childevent_callback != nullptr) {
            qcategoryaxis_childevent_callback(this, event);
        } else {
            QCategoryAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcategoryaxis_customevent_isbase) {
            qcategoryaxis_customevent_isbase = false;
            QCategoryAxis::customEvent(event);
        } else if (qcategoryaxis_customevent_callback != nullptr) {
            qcategoryaxis_customevent_callback(this, event);
        } else {
            QCategoryAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcategoryaxis_connectnotify_isbase) {
            qcategoryaxis_connectnotify_isbase = false;
            QCategoryAxis::connectNotify(signal);
        } else if (qcategoryaxis_connectnotify_callback != nullptr) {
            qcategoryaxis_connectnotify_callback(this, signal);
        } else {
            QCategoryAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcategoryaxis_disconnectnotify_isbase) {
            qcategoryaxis_disconnectnotify_isbase = false;
            QCategoryAxis::disconnectNotify(signal);
        } else if (qcategoryaxis_disconnectnotify_callback != nullptr) {
            qcategoryaxis_disconnectnotify_callback(this, signal);
        } else {
            QCategoryAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcategoryaxis_sender_isbase) {
            qcategoryaxis_sender_isbase = false;
            return QCategoryAxis::sender();
        } else if (qcategoryaxis_sender_callback != nullptr) {
            return qcategoryaxis_sender_callback();
        } else {
            return QCategoryAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcategoryaxis_sendersignalindex_isbase) {
            qcategoryaxis_sendersignalindex_isbase = false;
            return QCategoryAxis::senderSignalIndex();
        } else if (qcategoryaxis_sendersignalindex_callback != nullptr) {
            return qcategoryaxis_sendersignalindex_callback();
        } else {
            return QCategoryAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcategoryaxis_receivers_isbase) {
            qcategoryaxis_receivers_isbase = false;
            return QCategoryAxis::receivers(signal);
        } else if (qcategoryaxis_receivers_callback != nullptr) {
            return qcategoryaxis_receivers_callback(this, signal);
        } else {
            return QCategoryAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcategoryaxis_issignalconnected_isbase) {
            qcategoryaxis_issignalconnected_isbase = false;
            return QCategoryAxis::isSignalConnected(signal);
        } else if (qcategoryaxis_issignalconnected_callback != nullptr) {
            return qcategoryaxis_issignalconnected_callback(this, signal);
        } else {
            return QCategoryAxis::isSignalConnected(signal);
        }
    }
};

#endif
