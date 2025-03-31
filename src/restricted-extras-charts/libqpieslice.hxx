#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPIESLICE_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPIESLICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieSlice so that we can call protected methods
class VirtualQPieSlice : public QPieSlice {

  public:
    // Virtual class public types (including callbacks)
    using QPieSlice_Metacall_Callback = int (*)(QPieSlice*, QMetaObject::Call, int, void**);
    using QPieSlice_Event_Callback = bool (*)(QPieSlice*, QEvent*);
    using QPieSlice_EventFilter_Callback = bool (*)(QPieSlice*, QObject*, QEvent*);
    using QPieSlice_TimerEvent_Callback = void (*)(QPieSlice*, QTimerEvent*);
    using QPieSlice_ChildEvent_Callback = void (*)(QPieSlice*, QChildEvent*);
    using QPieSlice_CustomEvent_Callback = void (*)(QPieSlice*, QEvent*);
    using QPieSlice_ConnectNotify_Callback = void (*)(QPieSlice*, const QMetaMethod&);
    using QPieSlice_DisconnectNotify_Callback = void (*)(QPieSlice*, const QMetaMethod&);
    using QPieSlice_Sender_Callback = QObject* (*)();
    using QPieSlice_SenderSignalIndex_Callback = int (*)();
    using QPieSlice_Receivers_Callback = int (*)(const QPieSlice*, const char*);
    using QPieSlice_IsSignalConnected_Callback = bool (*)(const QPieSlice*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPieSlice_Metacall_Callback qpieslice_metacall_callback = nullptr;
    QPieSlice_Event_Callback qpieslice_event_callback = nullptr;
    QPieSlice_EventFilter_Callback qpieslice_eventfilter_callback = nullptr;
    QPieSlice_TimerEvent_Callback qpieslice_timerevent_callback = nullptr;
    QPieSlice_ChildEvent_Callback qpieslice_childevent_callback = nullptr;
    QPieSlice_CustomEvent_Callback qpieslice_customevent_callback = nullptr;
    QPieSlice_ConnectNotify_Callback qpieslice_connectnotify_callback = nullptr;
    QPieSlice_DisconnectNotify_Callback qpieslice_disconnectnotify_callback = nullptr;
    QPieSlice_Sender_Callback qpieslice_sender_callback = nullptr;
    QPieSlice_SenderSignalIndex_Callback qpieslice_sendersignalindex_callback = nullptr;
    QPieSlice_Receivers_Callback qpieslice_receivers_callback = nullptr;
    QPieSlice_IsSignalConnected_Callback qpieslice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpieslice_metacall_isbase = false;
    mutable bool qpieslice_event_isbase = false;
    mutable bool qpieslice_eventfilter_isbase = false;
    mutable bool qpieslice_timerevent_isbase = false;
    mutable bool qpieslice_childevent_isbase = false;
    mutable bool qpieslice_customevent_isbase = false;
    mutable bool qpieslice_connectnotify_isbase = false;
    mutable bool qpieslice_disconnectnotify_isbase = false;
    mutable bool qpieslice_sender_isbase = false;
    mutable bool qpieslice_sendersignalindex_isbase = false;
    mutable bool qpieslice_receivers_isbase = false;
    mutable bool qpieslice_issignalconnected_isbase = false;

  public:
    VirtualQPieSlice() : QPieSlice(){};
    VirtualQPieSlice(QString label, qreal value) : QPieSlice(label, value){};
    VirtualQPieSlice(QObject* parent) : QPieSlice(parent){};
    VirtualQPieSlice(QString label, qreal value, QObject* parent) : QPieSlice(label, value, parent){};

    ~VirtualQPieSlice() {
        qpieslice_metacall_callback = nullptr;
        qpieslice_event_callback = nullptr;
        qpieslice_eventfilter_callback = nullptr;
        qpieslice_timerevent_callback = nullptr;
        qpieslice_childevent_callback = nullptr;
        qpieslice_customevent_callback = nullptr;
        qpieslice_connectnotify_callback = nullptr;
        qpieslice_disconnectnotify_callback = nullptr;
        qpieslice_sender_callback = nullptr;
        qpieslice_sendersignalindex_callback = nullptr;
        qpieslice_receivers_callback = nullptr;
        qpieslice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPieSlice_Metacall_Callback(QPieSlice_Metacall_Callback cb) { qpieslice_metacall_callback = cb; }
    void setQPieSlice_Event_Callback(QPieSlice_Event_Callback cb) { qpieslice_event_callback = cb; }
    void setQPieSlice_EventFilter_Callback(QPieSlice_EventFilter_Callback cb) { qpieslice_eventfilter_callback = cb; }
    void setQPieSlice_TimerEvent_Callback(QPieSlice_TimerEvent_Callback cb) { qpieslice_timerevent_callback = cb; }
    void setQPieSlice_ChildEvent_Callback(QPieSlice_ChildEvent_Callback cb) { qpieslice_childevent_callback = cb; }
    void setQPieSlice_CustomEvent_Callback(QPieSlice_CustomEvent_Callback cb) { qpieslice_customevent_callback = cb; }
    void setQPieSlice_ConnectNotify_Callback(QPieSlice_ConnectNotify_Callback cb) { qpieslice_connectnotify_callback = cb; }
    void setQPieSlice_DisconnectNotify_Callback(QPieSlice_DisconnectNotify_Callback cb) { qpieslice_disconnectnotify_callback = cb; }
    void setQPieSlice_Sender_Callback(QPieSlice_Sender_Callback cb) { qpieslice_sender_callback = cb; }
    void setQPieSlice_SenderSignalIndex_Callback(QPieSlice_SenderSignalIndex_Callback cb) { qpieslice_sendersignalindex_callback = cb; }
    void setQPieSlice_Receivers_Callback(QPieSlice_Receivers_Callback cb) { qpieslice_receivers_callback = cb; }
    void setQPieSlice_IsSignalConnected_Callback(QPieSlice_IsSignalConnected_Callback cb) { qpieslice_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPieSlice_Metacall_IsBase(bool value) const { qpieslice_metacall_isbase = value; }
    void setQPieSlice_Event_IsBase(bool value) const { qpieslice_event_isbase = value; }
    void setQPieSlice_EventFilter_IsBase(bool value) const { qpieslice_eventfilter_isbase = value; }
    void setQPieSlice_TimerEvent_IsBase(bool value) const { qpieslice_timerevent_isbase = value; }
    void setQPieSlice_ChildEvent_IsBase(bool value) const { qpieslice_childevent_isbase = value; }
    void setQPieSlice_CustomEvent_IsBase(bool value) const { qpieslice_customevent_isbase = value; }
    void setQPieSlice_ConnectNotify_IsBase(bool value) const { qpieslice_connectnotify_isbase = value; }
    void setQPieSlice_DisconnectNotify_IsBase(bool value) const { qpieslice_disconnectnotify_isbase = value; }
    void setQPieSlice_Sender_IsBase(bool value) const { qpieslice_sender_isbase = value; }
    void setQPieSlice_SenderSignalIndex_IsBase(bool value) const { qpieslice_sendersignalindex_isbase = value; }
    void setQPieSlice_Receivers_IsBase(bool value) const { qpieslice_receivers_isbase = value; }
    void setQPieSlice_IsSignalConnected_IsBase(bool value) const { qpieslice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpieslice_metacall_isbase) {
            qpieslice_metacall_isbase = false;
            return QPieSlice::qt_metacall(param1, param2, param3);
        } else if (qpieslice_metacall_callback != nullptr) {
            return qpieslice_metacall_callback(this, param1, param2, param3);
        } else {
            return QPieSlice::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpieslice_event_isbase) {
            qpieslice_event_isbase = false;
            return QPieSlice::event(event);
        } else if (qpieslice_event_callback != nullptr) {
            return qpieslice_event_callback(this, event);
        } else {
            return QPieSlice::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpieslice_eventfilter_isbase) {
            qpieslice_eventfilter_isbase = false;
            return QPieSlice::eventFilter(watched, event);
        } else if (qpieslice_eventfilter_callback != nullptr) {
            return qpieslice_eventfilter_callback(this, watched, event);
        } else {
            return QPieSlice::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpieslice_timerevent_isbase) {
            qpieslice_timerevent_isbase = false;
            QPieSlice::timerEvent(event);
        } else if (qpieslice_timerevent_callback != nullptr) {
            qpieslice_timerevent_callback(this, event);
        } else {
            QPieSlice::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpieslice_childevent_isbase) {
            qpieslice_childevent_isbase = false;
            QPieSlice::childEvent(event);
        } else if (qpieslice_childevent_callback != nullptr) {
            qpieslice_childevent_callback(this, event);
        } else {
            QPieSlice::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpieslice_customevent_isbase) {
            qpieslice_customevent_isbase = false;
            QPieSlice::customEvent(event);
        } else if (qpieslice_customevent_callback != nullptr) {
            qpieslice_customevent_callback(this, event);
        } else {
            QPieSlice::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpieslice_connectnotify_isbase) {
            qpieslice_connectnotify_isbase = false;
            QPieSlice::connectNotify(signal);
        } else if (qpieslice_connectnotify_callback != nullptr) {
            qpieslice_connectnotify_callback(this, signal);
        } else {
            QPieSlice::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpieslice_disconnectnotify_isbase) {
            qpieslice_disconnectnotify_isbase = false;
            QPieSlice::disconnectNotify(signal);
        } else if (qpieslice_disconnectnotify_callback != nullptr) {
            qpieslice_disconnectnotify_callback(this, signal);
        } else {
            QPieSlice::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpieslice_sender_isbase) {
            qpieslice_sender_isbase = false;
            return QPieSlice::sender();
        } else if (qpieslice_sender_callback != nullptr) {
            return qpieslice_sender_callback();
        } else {
            return QPieSlice::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpieslice_sendersignalindex_isbase) {
            qpieslice_sendersignalindex_isbase = false;
            return QPieSlice::senderSignalIndex();
        } else if (qpieslice_sendersignalindex_callback != nullptr) {
            return qpieslice_sendersignalindex_callback();
        } else {
            return QPieSlice::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpieslice_receivers_isbase) {
            qpieslice_receivers_isbase = false;
            return QPieSlice::receivers(signal);
        } else if (qpieslice_receivers_callback != nullptr) {
            return qpieslice_receivers_callback(this, signal);
        } else {
            return QPieSlice::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpieslice_issignalconnected_isbase) {
            qpieslice_issignalconnected_isbase = false;
            return QPieSlice::isSignalConnected(signal);
        } else if (qpieslice_issignalconnected_callback != nullptr) {
            return qpieslice_issignalconnected_callback(this, signal);
        } else {
            return QPieSlice::isSignalConnected(signal);
        }
    }
};

#endif
