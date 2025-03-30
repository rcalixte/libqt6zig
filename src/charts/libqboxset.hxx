#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQBOXSET_H
#define SRC_CHARTSC_LIBVIRTUALQBOXSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxSet so that we can call protected methods
class VirtualQBoxSet : public QBoxSet {

  public:
    // Virtual class public types (including callbacks)
    using QBoxSet_Metacall_Callback = int (*)(QBoxSet*, QMetaObject::Call, int, void**);
    using QBoxSet_Event_Callback = bool (*)(QBoxSet*, QEvent*);
    using QBoxSet_EventFilter_Callback = bool (*)(QBoxSet*, QObject*, QEvent*);
    using QBoxSet_TimerEvent_Callback = void (*)(QBoxSet*, QTimerEvent*);
    using QBoxSet_ChildEvent_Callback = void (*)(QBoxSet*, QChildEvent*);
    using QBoxSet_CustomEvent_Callback = void (*)(QBoxSet*, QEvent*);
    using QBoxSet_ConnectNotify_Callback = void (*)(QBoxSet*, const QMetaMethod&);
    using QBoxSet_DisconnectNotify_Callback = void (*)(QBoxSet*, const QMetaMethod&);
    using QBoxSet_Sender_Callback = QObject* (*)();
    using QBoxSet_SenderSignalIndex_Callback = int (*)();
    using QBoxSet_Receivers_Callback = int (*)(const QBoxSet*, const char*);
    using QBoxSet_IsSignalConnected_Callback = bool (*)(const QBoxSet*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QBoxSet_Metacall_Callback qboxset_metacall_callback = nullptr;
    QBoxSet_Event_Callback qboxset_event_callback = nullptr;
    QBoxSet_EventFilter_Callback qboxset_eventfilter_callback = nullptr;
    QBoxSet_TimerEvent_Callback qboxset_timerevent_callback = nullptr;
    QBoxSet_ChildEvent_Callback qboxset_childevent_callback = nullptr;
    QBoxSet_CustomEvent_Callback qboxset_customevent_callback = nullptr;
    QBoxSet_ConnectNotify_Callback qboxset_connectnotify_callback = nullptr;
    QBoxSet_DisconnectNotify_Callback qboxset_disconnectnotify_callback = nullptr;
    QBoxSet_Sender_Callback qboxset_sender_callback = nullptr;
    QBoxSet_SenderSignalIndex_Callback qboxset_sendersignalindex_callback = nullptr;
    QBoxSet_Receivers_Callback qboxset_receivers_callback = nullptr;
    QBoxSet_IsSignalConnected_Callback qboxset_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qboxset_metacall_isbase = false;
    mutable bool qboxset_event_isbase = false;
    mutable bool qboxset_eventfilter_isbase = false;
    mutable bool qboxset_timerevent_isbase = false;
    mutable bool qboxset_childevent_isbase = false;
    mutable bool qboxset_customevent_isbase = false;
    mutable bool qboxset_connectnotify_isbase = false;
    mutable bool qboxset_disconnectnotify_isbase = false;
    mutable bool qboxset_sender_isbase = false;
    mutable bool qboxset_sendersignalindex_isbase = false;
    mutable bool qboxset_receivers_isbase = false;
    mutable bool qboxset_issignalconnected_isbase = false;

  public:
    VirtualQBoxSet() : QBoxSet(){};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue) : QBoxSet(le, lq, m, uq, ue){};
    VirtualQBoxSet(const QString label) : QBoxSet(label){};
    VirtualQBoxSet(const QString label, QObject* parent) : QBoxSet(label, parent){};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label) : QBoxSet(le, lq, m, uq, ue, label){};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label, QObject* parent) : QBoxSet(le, lq, m, uq, ue, label, parent){};

    ~VirtualQBoxSet() {
        qboxset_metacall_callback = nullptr;
        qboxset_event_callback = nullptr;
        qboxset_eventfilter_callback = nullptr;
        qboxset_timerevent_callback = nullptr;
        qboxset_childevent_callback = nullptr;
        qboxset_customevent_callback = nullptr;
        qboxset_connectnotify_callback = nullptr;
        qboxset_disconnectnotify_callback = nullptr;
        qboxset_sender_callback = nullptr;
        qboxset_sendersignalindex_callback = nullptr;
        qboxset_receivers_callback = nullptr;
        qboxset_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQBoxSet_Metacall_Callback(QBoxSet_Metacall_Callback cb) { qboxset_metacall_callback = cb; }
    void setQBoxSet_Event_Callback(QBoxSet_Event_Callback cb) { qboxset_event_callback = cb; }
    void setQBoxSet_EventFilter_Callback(QBoxSet_EventFilter_Callback cb) { qboxset_eventfilter_callback = cb; }
    void setQBoxSet_TimerEvent_Callback(QBoxSet_TimerEvent_Callback cb) { qboxset_timerevent_callback = cb; }
    void setQBoxSet_ChildEvent_Callback(QBoxSet_ChildEvent_Callback cb) { qboxset_childevent_callback = cb; }
    void setQBoxSet_CustomEvent_Callback(QBoxSet_CustomEvent_Callback cb) { qboxset_customevent_callback = cb; }
    void setQBoxSet_ConnectNotify_Callback(QBoxSet_ConnectNotify_Callback cb) { qboxset_connectnotify_callback = cb; }
    void setQBoxSet_DisconnectNotify_Callback(QBoxSet_DisconnectNotify_Callback cb) { qboxset_disconnectnotify_callback = cb; }
    void setQBoxSet_Sender_Callback(QBoxSet_Sender_Callback cb) { qboxset_sender_callback = cb; }
    void setQBoxSet_SenderSignalIndex_Callback(QBoxSet_SenderSignalIndex_Callback cb) { qboxset_sendersignalindex_callback = cb; }
    void setQBoxSet_Receivers_Callback(QBoxSet_Receivers_Callback cb) { qboxset_receivers_callback = cb; }
    void setQBoxSet_IsSignalConnected_Callback(QBoxSet_IsSignalConnected_Callback cb) { qboxset_issignalconnected_callback = cb; }

    // Base flag setters
    void setQBoxSet_Metacall_IsBase(bool value) const { qboxset_metacall_isbase = value; }
    void setQBoxSet_Event_IsBase(bool value) const { qboxset_event_isbase = value; }
    void setQBoxSet_EventFilter_IsBase(bool value) const { qboxset_eventfilter_isbase = value; }
    void setQBoxSet_TimerEvent_IsBase(bool value) const { qboxset_timerevent_isbase = value; }
    void setQBoxSet_ChildEvent_IsBase(bool value) const { qboxset_childevent_isbase = value; }
    void setQBoxSet_CustomEvent_IsBase(bool value) const { qboxset_customevent_isbase = value; }
    void setQBoxSet_ConnectNotify_IsBase(bool value) const { qboxset_connectnotify_isbase = value; }
    void setQBoxSet_DisconnectNotify_IsBase(bool value) const { qboxset_disconnectnotify_isbase = value; }
    void setQBoxSet_Sender_IsBase(bool value) const { qboxset_sender_isbase = value; }
    void setQBoxSet_SenderSignalIndex_IsBase(bool value) const { qboxset_sendersignalindex_isbase = value; }
    void setQBoxSet_Receivers_IsBase(bool value) const { qboxset_receivers_isbase = value; }
    void setQBoxSet_IsSignalConnected_IsBase(bool value) const { qboxset_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxset_metacall_isbase) {
            qboxset_metacall_isbase = false;
            return QBoxSet::qt_metacall(param1, param2, param3);
        } else if (qboxset_metacall_callback != nullptr) {
            return qboxset_metacall_callback(this, param1, param2, param3);
        } else {
            return QBoxSet::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxset_event_isbase) {
            qboxset_event_isbase = false;
            return QBoxSet::event(event);
        } else if (qboxset_event_callback != nullptr) {
            return qboxset_event_callback(this, event);
        } else {
            return QBoxSet::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxset_eventfilter_isbase) {
            qboxset_eventfilter_isbase = false;
            return QBoxSet::eventFilter(watched, event);
        } else if (qboxset_eventfilter_callback != nullptr) {
            return qboxset_eventfilter_callback(this, watched, event);
        } else {
            return QBoxSet::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxset_timerevent_isbase) {
            qboxset_timerevent_isbase = false;
            QBoxSet::timerEvent(event);
        } else if (qboxset_timerevent_callback != nullptr) {
            qboxset_timerevent_callback(this, event);
        } else {
            QBoxSet::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxset_childevent_isbase) {
            qboxset_childevent_isbase = false;
            QBoxSet::childEvent(event);
        } else if (qboxset_childevent_callback != nullptr) {
            qboxset_childevent_callback(this, event);
        } else {
            QBoxSet::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxset_customevent_isbase) {
            qboxset_customevent_isbase = false;
            QBoxSet::customEvent(event);
        } else if (qboxset_customevent_callback != nullptr) {
            qboxset_customevent_callback(this, event);
        } else {
            QBoxSet::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxset_connectnotify_isbase) {
            qboxset_connectnotify_isbase = false;
            QBoxSet::connectNotify(signal);
        } else if (qboxset_connectnotify_callback != nullptr) {
            qboxset_connectnotify_callback(this, signal);
        } else {
            QBoxSet::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxset_disconnectnotify_isbase) {
            qboxset_disconnectnotify_isbase = false;
            QBoxSet::disconnectNotify(signal);
        } else if (qboxset_disconnectnotify_callback != nullptr) {
            qboxset_disconnectnotify_callback(this, signal);
        } else {
            QBoxSet::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qboxset_sender_isbase) {
            qboxset_sender_isbase = false;
            return QBoxSet::sender();
        } else if (qboxset_sender_callback != nullptr) {
            return qboxset_sender_callback();
        } else {
            return QBoxSet::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qboxset_sendersignalindex_isbase) {
            qboxset_sendersignalindex_isbase = false;
            return QBoxSet::senderSignalIndex();
        } else if (qboxset_sendersignalindex_callback != nullptr) {
            return qboxset_sendersignalindex_callback();
        } else {
            return QBoxSet::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qboxset_receivers_isbase) {
            qboxset_receivers_isbase = false;
            return QBoxSet::receivers(signal);
        } else if (qboxset_receivers_callback != nullptr) {
            return qboxset_receivers_callback(this, signal);
        } else {
            return QBoxSet::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qboxset_issignalconnected_isbase) {
            qboxset_issignalconnected_isbase = false;
            return QBoxSet::isSignalConnected(signal);
        } else if (qboxset_issignalconnected_callback != nullptr) {
            return qboxset_issignalconnected_callback(this, signal);
        } else {
            return QBoxSet::isSignalConnected(signal);
        }
    }
};

#endif
