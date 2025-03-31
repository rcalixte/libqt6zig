#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarSet so that we can call protected methods
class VirtualQBarSet : public QBarSet {

  public:
    // Virtual class public types (including callbacks)
    using QBarSet_Metacall_Callback = int (*)(QBarSet*, QMetaObject::Call, int, void**);
    using QBarSet_Event_Callback = bool (*)(QBarSet*, QEvent*);
    using QBarSet_EventFilter_Callback = bool (*)(QBarSet*, QObject*, QEvent*);
    using QBarSet_TimerEvent_Callback = void (*)(QBarSet*, QTimerEvent*);
    using QBarSet_ChildEvent_Callback = void (*)(QBarSet*, QChildEvent*);
    using QBarSet_CustomEvent_Callback = void (*)(QBarSet*, QEvent*);
    using QBarSet_ConnectNotify_Callback = void (*)(QBarSet*, const QMetaMethod&);
    using QBarSet_DisconnectNotify_Callback = void (*)(QBarSet*, const QMetaMethod&);
    using QBarSet_Sender_Callback = QObject* (*)();
    using QBarSet_SenderSignalIndex_Callback = int (*)();
    using QBarSet_Receivers_Callback = int (*)(const QBarSet*, const char*);
    using QBarSet_IsSignalConnected_Callback = bool (*)(const QBarSet*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QBarSet_Metacall_Callback qbarset_metacall_callback = nullptr;
    QBarSet_Event_Callback qbarset_event_callback = nullptr;
    QBarSet_EventFilter_Callback qbarset_eventfilter_callback = nullptr;
    QBarSet_TimerEvent_Callback qbarset_timerevent_callback = nullptr;
    QBarSet_ChildEvent_Callback qbarset_childevent_callback = nullptr;
    QBarSet_CustomEvent_Callback qbarset_customevent_callback = nullptr;
    QBarSet_ConnectNotify_Callback qbarset_connectnotify_callback = nullptr;
    QBarSet_DisconnectNotify_Callback qbarset_disconnectnotify_callback = nullptr;
    QBarSet_Sender_Callback qbarset_sender_callback = nullptr;
    QBarSet_SenderSignalIndex_Callback qbarset_sendersignalindex_callback = nullptr;
    QBarSet_Receivers_Callback qbarset_receivers_callback = nullptr;
    QBarSet_IsSignalConnected_Callback qbarset_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbarset_metacall_isbase = false;
    mutable bool qbarset_event_isbase = false;
    mutable bool qbarset_eventfilter_isbase = false;
    mutable bool qbarset_timerevent_isbase = false;
    mutable bool qbarset_childevent_isbase = false;
    mutable bool qbarset_customevent_isbase = false;
    mutable bool qbarset_connectnotify_isbase = false;
    mutable bool qbarset_disconnectnotify_isbase = false;
    mutable bool qbarset_sender_isbase = false;
    mutable bool qbarset_sendersignalindex_isbase = false;
    mutable bool qbarset_receivers_isbase = false;
    mutable bool qbarset_issignalconnected_isbase = false;

  public:
    VirtualQBarSet(const QString label) : QBarSet(label){};
    VirtualQBarSet(const QString label, QObject* parent) : QBarSet(label, parent){};

    ~VirtualQBarSet() {
        qbarset_metacall_callback = nullptr;
        qbarset_event_callback = nullptr;
        qbarset_eventfilter_callback = nullptr;
        qbarset_timerevent_callback = nullptr;
        qbarset_childevent_callback = nullptr;
        qbarset_customevent_callback = nullptr;
        qbarset_connectnotify_callback = nullptr;
        qbarset_disconnectnotify_callback = nullptr;
        qbarset_sender_callback = nullptr;
        qbarset_sendersignalindex_callback = nullptr;
        qbarset_receivers_callback = nullptr;
        qbarset_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQBarSet_Metacall_Callback(QBarSet_Metacall_Callback cb) { qbarset_metacall_callback = cb; }
    void setQBarSet_Event_Callback(QBarSet_Event_Callback cb) { qbarset_event_callback = cb; }
    void setQBarSet_EventFilter_Callback(QBarSet_EventFilter_Callback cb) { qbarset_eventfilter_callback = cb; }
    void setQBarSet_TimerEvent_Callback(QBarSet_TimerEvent_Callback cb) { qbarset_timerevent_callback = cb; }
    void setQBarSet_ChildEvent_Callback(QBarSet_ChildEvent_Callback cb) { qbarset_childevent_callback = cb; }
    void setQBarSet_CustomEvent_Callback(QBarSet_CustomEvent_Callback cb) { qbarset_customevent_callback = cb; }
    void setQBarSet_ConnectNotify_Callback(QBarSet_ConnectNotify_Callback cb) { qbarset_connectnotify_callback = cb; }
    void setQBarSet_DisconnectNotify_Callback(QBarSet_DisconnectNotify_Callback cb) { qbarset_disconnectnotify_callback = cb; }
    void setQBarSet_Sender_Callback(QBarSet_Sender_Callback cb) { qbarset_sender_callback = cb; }
    void setQBarSet_SenderSignalIndex_Callback(QBarSet_SenderSignalIndex_Callback cb) { qbarset_sendersignalindex_callback = cb; }
    void setQBarSet_Receivers_Callback(QBarSet_Receivers_Callback cb) { qbarset_receivers_callback = cb; }
    void setQBarSet_IsSignalConnected_Callback(QBarSet_IsSignalConnected_Callback cb) { qbarset_issignalconnected_callback = cb; }

    // Base flag setters
    void setQBarSet_Metacall_IsBase(bool value) const { qbarset_metacall_isbase = value; }
    void setQBarSet_Event_IsBase(bool value) const { qbarset_event_isbase = value; }
    void setQBarSet_EventFilter_IsBase(bool value) const { qbarset_eventfilter_isbase = value; }
    void setQBarSet_TimerEvent_IsBase(bool value) const { qbarset_timerevent_isbase = value; }
    void setQBarSet_ChildEvent_IsBase(bool value) const { qbarset_childevent_isbase = value; }
    void setQBarSet_CustomEvent_IsBase(bool value) const { qbarset_customevent_isbase = value; }
    void setQBarSet_ConnectNotify_IsBase(bool value) const { qbarset_connectnotify_isbase = value; }
    void setQBarSet_DisconnectNotify_IsBase(bool value) const { qbarset_disconnectnotify_isbase = value; }
    void setQBarSet_Sender_IsBase(bool value) const { qbarset_sender_isbase = value; }
    void setQBarSet_SenderSignalIndex_IsBase(bool value) const { qbarset_sendersignalindex_isbase = value; }
    void setQBarSet_Receivers_IsBase(bool value) const { qbarset_receivers_isbase = value; }
    void setQBarSet_IsSignalConnected_IsBase(bool value) const { qbarset_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarset_metacall_isbase) {
            qbarset_metacall_isbase = false;
            return QBarSet::qt_metacall(param1, param2, param3);
        } else if (qbarset_metacall_callback != nullptr) {
            return qbarset_metacall_callback(this, param1, param2, param3);
        } else {
            return QBarSet::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarset_event_isbase) {
            qbarset_event_isbase = false;
            return QBarSet::event(event);
        } else if (qbarset_event_callback != nullptr) {
            return qbarset_event_callback(this, event);
        } else {
            return QBarSet::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarset_eventfilter_isbase) {
            qbarset_eventfilter_isbase = false;
            return QBarSet::eventFilter(watched, event);
        } else if (qbarset_eventfilter_callback != nullptr) {
            return qbarset_eventfilter_callback(this, watched, event);
        } else {
            return QBarSet::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarset_timerevent_isbase) {
            qbarset_timerevent_isbase = false;
            QBarSet::timerEvent(event);
        } else if (qbarset_timerevent_callback != nullptr) {
            qbarset_timerevent_callback(this, event);
        } else {
            QBarSet::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarset_childevent_isbase) {
            qbarset_childevent_isbase = false;
            QBarSet::childEvent(event);
        } else if (qbarset_childevent_callback != nullptr) {
            qbarset_childevent_callback(this, event);
        } else {
            QBarSet::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarset_customevent_isbase) {
            qbarset_customevent_isbase = false;
            QBarSet::customEvent(event);
        } else if (qbarset_customevent_callback != nullptr) {
            qbarset_customevent_callback(this, event);
        } else {
            QBarSet::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarset_connectnotify_isbase) {
            qbarset_connectnotify_isbase = false;
            QBarSet::connectNotify(signal);
        } else if (qbarset_connectnotify_callback != nullptr) {
            qbarset_connectnotify_callback(this, signal);
        } else {
            QBarSet::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarset_disconnectnotify_isbase) {
            qbarset_disconnectnotify_isbase = false;
            QBarSet::disconnectNotify(signal);
        } else if (qbarset_disconnectnotify_callback != nullptr) {
            qbarset_disconnectnotify_callback(this, signal);
        } else {
            QBarSet::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbarset_sender_isbase) {
            qbarset_sender_isbase = false;
            return QBarSet::sender();
        } else if (qbarset_sender_callback != nullptr) {
            return qbarset_sender_callback();
        } else {
            return QBarSet::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbarset_sendersignalindex_isbase) {
            qbarset_sendersignalindex_isbase = false;
            return QBarSet::senderSignalIndex();
        } else if (qbarset_sendersignalindex_callback != nullptr) {
            return qbarset_sendersignalindex_callback();
        } else {
            return QBarSet::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbarset_receivers_isbase) {
            qbarset_receivers_isbase = false;
            return QBarSet::receivers(signal);
        } else if (qbarset_receivers_callback != nullptr) {
            return qbarset_receivers_callback(this, signal);
        } else {
            return QBarSet::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbarset_issignalconnected_isbase) {
            qbarset_issignalconnected_isbase = false;
            return QBarSet::isSignalConnected(signal);
        } else if (qbarset_issignalconnected_callback != nullptr) {
            return qbarset_issignalconnected_callback(this, signal);
        } else {
            return QBarSet::isSignalConnected(signal);
        }
    }
};

#endif
