#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQCANDLESTICKMODELMAPPER_H
#define SRC_CHARTSC_LIBVIRTUALQCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickModelMapper so that we can call protected methods
class VirtualQCandlestickModelMapper : public QCandlestickModelMapper {

  public:
    // Virtual class public types (including callbacks)
    using QCandlestickModelMapper_Metacall_Callback = int (*)(QCandlestickModelMapper*, QMetaObject::Call, int, void**);
    using QCandlestickModelMapper_Orientation_Callback = Qt::Orientation (*)();
    using QCandlestickModelMapper_Event_Callback = bool (*)(QCandlestickModelMapper*, QEvent*);
    using QCandlestickModelMapper_EventFilter_Callback = bool (*)(QCandlestickModelMapper*, QObject*, QEvent*);
    using QCandlestickModelMapper_TimerEvent_Callback = void (*)(QCandlestickModelMapper*, QTimerEvent*);
    using QCandlestickModelMapper_ChildEvent_Callback = void (*)(QCandlestickModelMapper*, QChildEvent*);
    using QCandlestickModelMapper_CustomEvent_Callback = void (*)(QCandlestickModelMapper*, QEvent*);
    using QCandlestickModelMapper_ConnectNotify_Callback = void (*)(QCandlestickModelMapper*, const QMetaMethod&);
    using QCandlestickModelMapper_DisconnectNotify_Callback = void (*)(QCandlestickModelMapper*, const QMetaMethod&);
    using QCandlestickModelMapper_SetTimestamp_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_Timestamp_Callback = int (*)();
    using QCandlestickModelMapper_SetOpen_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_Open_Callback = int (*)();
    using QCandlestickModelMapper_SetHigh_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_High_Callback = int (*)();
    using QCandlestickModelMapper_SetLow_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_Low_Callback = int (*)();
    using QCandlestickModelMapper_SetClose_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_Close_Callback = int (*)();
    using QCandlestickModelMapper_SetFirstSetSection_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_FirstSetSection_Callback = int (*)();
    using QCandlestickModelMapper_SetLastSetSection_Callback = void (*)(QCandlestickModelMapper*, int);
    using QCandlestickModelMapper_LastSetSection_Callback = int (*)();
    using QCandlestickModelMapper_Sender_Callback = QObject* (*)();
    using QCandlestickModelMapper_SenderSignalIndex_Callback = int (*)();
    using QCandlestickModelMapper_Receivers_Callback = int (*)(const QCandlestickModelMapper*, const char*);
    using QCandlestickModelMapper_IsSignalConnected_Callback = bool (*)(const QCandlestickModelMapper*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCandlestickModelMapper_Metacall_Callback qcandlestickmodelmapper_metacall_callback = nullptr;
    QCandlestickModelMapper_Orientation_Callback qcandlestickmodelmapper_orientation_callback = nullptr;
    QCandlestickModelMapper_Event_Callback qcandlestickmodelmapper_event_callback = nullptr;
    QCandlestickModelMapper_EventFilter_Callback qcandlestickmodelmapper_eventfilter_callback = nullptr;
    QCandlestickModelMapper_TimerEvent_Callback qcandlestickmodelmapper_timerevent_callback = nullptr;
    QCandlestickModelMapper_ChildEvent_Callback qcandlestickmodelmapper_childevent_callback = nullptr;
    QCandlestickModelMapper_CustomEvent_Callback qcandlestickmodelmapper_customevent_callback = nullptr;
    QCandlestickModelMapper_ConnectNotify_Callback qcandlestickmodelmapper_connectnotify_callback = nullptr;
    QCandlestickModelMapper_DisconnectNotify_Callback qcandlestickmodelmapper_disconnectnotify_callback = nullptr;
    QCandlestickModelMapper_SetTimestamp_Callback qcandlestickmodelmapper_settimestamp_callback = nullptr;
    QCandlestickModelMapper_Timestamp_Callback qcandlestickmodelmapper_timestamp_callback = nullptr;
    QCandlestickModelMapper_SetOpen_Callback qcandlestickmodelmapper_setopen_callback = nullptr;
    QCandlestickModelMapper_Open_Callback qcandlestickmodelmapper_open_callback = nullptr;
    QCandlestickModelMapper_SetHigh_Callback qcandlestickmodelmapper_sethigh_callback = nullptr;
    QCandlestickModelMapper_High_Callback qcandlestickmodelmapper_high_callback = nullptr;
    QCandlestickModelMapper_SetLow_Callback qcandlestickmodelmapper_setlow_callback = nullptr;
    QCandlestickModelMapper_Low_Callback qcandlestickmodelmapper_low_callback = nullptr;
    QCandlestickModelMapper_SetClose_Callback qcandlestickmodelmapper_setclose_callback = nullptr;
    QCandlestickModelMapper_Close_Callback qcandlestickmodelmapper_close_callback = nullptr;
    QCandlestickModelMapper_SetFirstSetSection_Callback qcandlestickmodelmapper_setfirstsetsection_callback = nullptr;
    QCandlestickModelMapper_FirstSetSection_Callback qcandlestickmodelmapper_firstsetsection_callback = nullptr;
    QCandlestickModelMapper_SetLastSetSection_Callback qcandlestickmodelmapper_setlastsetsection_callback = nullptr;
    QCandlestickModelMapper_LastSetSection_Callback qcandlestickmodelmapper_lastsetsection_callback = nullptr;
    QCandlestickModelMapper_Sender_Callback qcandlestickmodelmapper_sender_callback = nullptr;
    QCandlestickModelMapper_SenderSignalIndex_Callback qcandlestickmodelmapper_sendersignalindex_callback = nullptr;
    QCandlestickModelMapper_Receivers_Callback qcandlestickmodelmapper_receivers_callback = nullptr;
    QCandlestickModelMapper_IsSignalConnected_Callback qcandlestickmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcandlestickmodelmapper_metacall_isbase = false;
    mutable bool qcandlestickmodelmapper_orientation_isbase = false;
    mutable bool qcandlestickmodelmapper_event_isbase = false;
    mutable bool qcandlestickmodelmapper_eventfilter_isbase = false;
    mutable bool qcandlestickmodelmapper_timerevent_isbase = false;
    mutable bool qcandlestickmodelmapper_childevent_isbase = false;
    mutable bool qcandlestickmodelmapper_customevent_isbase = false;
    mutable bool qcandlestickmodelmapper_connectnotify_isbase = false;
    mutable bool qcandlestickmodelmapper_disconnectnotify_isbase = false;
    mutable bool qcandlestickmodelmapper_settimestamp_isbase = false;
    mutable bool qcandlestickmodelmapper_timestamp_isbase = false;
    mutable bool qcandlestickmodelmapper_setopen_isbase = false;
    mutable bool qcandlestickmodelmapper_open_isbase = false;
    mutable bool qcandlestickmodelmapper_sethigh_isbase = false;
    mutable bool qcandlestickmodelmapper_high_isbase = false;
    mutable bool qcandlestickmodelmapper_setlow_isbase = false;
    mutable bool qcandlestickmodelmapper_low_isbase = false;
    mutable bool qcandlestickmodelmapper_setclose_isbase = false;
    mutable bool qcandlestickmodelmapper_close_isbase = false;
    mutable bool qcandlestickmodelmapper_setfirstsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_firstsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_setlastsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_lastsetsection_isbase = false;
    mutable bool qcandlestickmodelmapper_sender_isbase = false;
    mutable bool qcandlestickmodelmapper_sendersignalindex_isbase = false;
    mutable bool qcandlestickmodelmapper_receivers_isbase = false;
    mutable bool qcandlestickmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQCandlestickModelMapper() : QCandlestickModelMapper(){};
    VirtualQCandlestickModelMapper(QObject* parent) : QCandlestickModelMapper(parent){};

    ~VirtualQCandlestickModelMapper() {
        qcandlestickmodelmapper_metacall_callback = nullptr;
        qcandlestickmodelmapper_orientation_callback = nullptr;
        qcandlestickmodelmapper_event_callback = nullptr;
        qcandlestickmodelmapper_eventfilter_callback = nullptr;
        qcandlestickmodelmapper_timerevent_callback = nullptr;
        qcandlestickmodelmapper_childevent_callback = nullptr;
        qcandlestickmodelmapper_customevent_callback = nullptr;
        qcandlestickmodelmapper_connectnotify_callback = nullptr;
        qcandlestickmodelmapper_disconnectnotify_callback = nullptr;
        qcandlestickmodelmapper_settimestamp_callback = nullptr;
        qcandlestickmodelmapper_timestamp_callback = nullptr;
        qcandlestickmodelmapper_setopen_callback = nullptr;
        qcandlestickmodelmapper_open_callback = nullptr;
        qcandlestickmodelmapper_sethigh_callback = nullptr;
        qcandlestickmodelmapper_high_callback = nullptr;
        qcandlestickmodelmapper_setlow_callback = nullptr;
        qcandlestickmodelmapper_low_callback = nullptr;
        qcandlestickmodelmapper_setclose_callback = nullptr;
        qcandlestickmodelmapper_close_callback = nullptr;
        qcandlestickmodelmapper_setfirstsetsection_callback = nullptr;
        qcandlestickmodelmapper_firstsetsection_callback = nullptr;
        qcandlestickmodelmapper_setlastsetsection_callback = nullptr;
        qcandlestickmodelmapper_lastsetsection_callback = nullptr;
        qcandlestickmodelmapper_sender_callback = nullptr;
        qcandlestickmodelmapper_sendersignalindex_callback = nullptr;
        qcandlestickmodelmapper_receivers_callback = nullptr;
        qcandlestickmodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCandlestickModelMapper_Metacall_Callback(QCandlestickModelMapper_Metacall_Callback cb) { qcandlestickmodelmapper_metacall_callback = cb; }
    void setQCandlestickModelMapper_Orientation_Callback(QCandlestickModelMapper_Orientation_Callback cb) { qcandlestickmodelmapper_orientation_callback = cb; }
    void setQCandlestickModelMapper_Event_Callback(QCandlestickModelMapper_Event_Callback cb) { qcandlestickmodelmapper_event_callback = cb; }
    void setQCandlestickModelMapper_EventFilter_Callback(QCandlestickModelMapper_EventFilter_Callback cb) { qcandlestickmodelmapper_eventfilter_callback = cb; }
    void setQCandlestickModelMapper_TimerEvent_Callback(QCandlestickModelMapper_TimerEvent_Callback cb) { qcandlestickmodelmapper_timerevent_callback = cb; }
    void setQCandlestickModelMapper_ChildEvent_Callback(QCandlestickModelMapper_ChildEvent_Callback cb) { qcandlestickmodelmapper_childevent_callback = cb; }
    void setQCandlestickModelMapper_CustomEvent_Callback(QCandlestickModelMapper_CustomEvent_Callback cb) { qcandlestickmodelmapper_customevent_callback = cb; }
    void setQCandlestickModelMapper_ConnectNotify_Callback(QCandlestickModelMapper_ConnectNotify_Callback cb) { qcandlestickmodelmapper_connectnotify_callback = cb; }
    void setQCandlestickModelMapper_DisconnectNotify_Callback(QCandlestickModelMapper_DisconnectNotify_Callback cb) { qcandlestickmodelmapper_disconnectnotify_callback = cb; }
    void setQCandlestickModelMapper_SetTimestamp_Callback(QCandlestickModelMapper_SetTimestamp_Callback cb) { qcandlestickmodelmapper_settimestamp_callback = cb; }
    void setQCandlestickModelMapper_Timestamp_Callback(QCandlestickModelMapper_Timestamp_Callback cb) { qcandlestickmodelmapper_timestamp_callback = cb; }
    void setQCandlestickModelMapper_SetOpen_Callback(QCandlestickModelMapper_SetOpen_Callback cb) { qcandlestickmodelmapper_setopen_callback = cb; }
    void setQCandlestickModelMapper_Open_Callback(QCandlestickModelMapper_Open_Callback cb) { qcandlestickmodelmapper_open_callback = cb; }
    void setQCandlestickModelMapper_SetHigh_Callback(QCandlestickModelMapper_SetHigh_Callback cb) { qcandlestickmodelmapper_sethigh_callback = cb; }
    void setQCandlestickModelMapper_High_Callback(QCandlestickModelMapper_High_Callback cb) { qcandlestickmodelmapper_high_callback = cb; }
    void setQCandlestickModelMapper_SetLow_Callback(QCandlestickModelMapper_SetLow_Callback cb) { qcandlestickmodelmapper_setlow_callback = cb; }
    void setQCandlestickModelMapper_Low_Callback(QCandlestickModelMapper_Low_Callback cb) { qcandlestickmodelmapper_low_callback = cb; }
    void setQCandlestickModelMapper_SetClose_Callback(QCandlestickModelMapper_SetClose_Callback cb) { qcandlestickmodelmapper_setclose_callback = cb; }
    void setQCandlestickModelMapper_Close_Callback(QCandlestickModelMapper_Close_Callback cb) { qcandlestickmodelmapper_close_callback = cb; }
    void setQCandlestickModelMapper_SetFirstSetSection_Callback(QCandlestickModelMapper_SetFirstSetSection_Callback cb) { qcandlestickmodelmapper_setfirstsetsection_callback = cb; }
    void setQCandlestickModelMapper_FirstSetSection_Callback(QCandlestickModelMapper_FirstSetSection_Callback cb) { qcandlestickmodelmapper_firstsetsection_callback = cb; }
    void setQCandlestickModelMapper_SetLastSetSection_Callback(QCandlestickModelMapper_SetLastSetSection_Callback cb) { qcandlestickmodelmapper_setlastsetsection_callback = cb; }
    void setQCandlestickModelMapper_LastSetSection_Callback(QCandlestickModelMapper_LastSetSection_Callback cb) { qcandlestickmodelmapper_lastsetsection_callback = cb; }
    void setQCandlestickModelMapper_Sender_Callback(QCandlestickModelMapper_Sender_Callback cb) { qcandlestickmodelmapper_sender_callback = cb; }
    void setQCandlestickModelMapper_SenderSignalIndex_Callback(QCandlestickModelMapper_SenderSignalIndex_Callback cb) { qcandlestickmodelmapper_sendersignalindex_callback = cb; }
    void setQCandlestickModelMapper_Receivers_Callback(QCandlestickModelMapper_Receivers_Callback cb) { qcandlestickmodelmapper_receivers_callback = cb; }
    void setQCandlestickModelMapper_IsSignalConnected_Callback(QCandlestickModelMapper_IsSignalConnected_Callback cb) { qcandlestickmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCandlestickModelMapper_Metacall_IsBase(bool value) const { qcandlestickmodelmapper_metacall_isbase = value; }
    void setQCandlestickModelMapper_Orientation_IsBase(bool value) const { qcandlestickmodelmapper_orientation_isbase = value; }
    void setQCandlestickModelMapper_Event_IsBase(bool value) const { qcandlestickmodelmapper_event_isbase = value; }
    void setQCandlestickModelMapper_EventFilter_IsBase(bool value) const { qcandlestickmodelmapper_eventfilter_isbase = value; }
    void setQCandlestickModelMapper_TimerEvent_IsBase(bool value) const { qcandlestickmodelmapper_timerevent_isbase = value; }
    void setQCandlestickModelMapper_ChildEvent_IsBase(bool value) const { qcandlestickmodelmapper_childevent_isbase = value; }
    void setQCandlestickModelMapper_CustomEvent_IsBase(bool value) const { qcandlestickmodelmapper_customevent_isbase = value; }
    void setQCandlestickModelMapper_ConnectNotify_IsBase(bool value) const { qcandlestickmodelmapper_connectnotify_isbase = value; }
    void setQCandlestickModelMapper_DisconnectNotify_IsBase(bool value) const { qcandlestickmodelmapper_disconnectnotify_isbase = value; }
    void setQCandlestickModelMapper_SetTimestamp_IsBase(bool value) const { qcandlestickmodelmapper_settimestamp_isbase = value; }
    void setQCandlestickModelMapper_Timestamp_IsBase(bool value) const { qcandlestickmodelmapper_timestamp_isbase = value; }
    void setQCandlestickModelMapper_SetOpen_IsBase(bool value) const { qcandlestickmodelmapper_setopen_isbase = value; }
    void setQCandlestickModelMapper_Open_IsBase(bool value) const { qcandlestickmodelmapper_open_isbase = value; }
    void setQCandlestickModelMapper_SetHigh_IsBase(bool value) const { qcandlestickmodelmapper_sethigh_isbase = value; }
    void setQCandlestickModelMapper_High_IsBase(bool value) const { qcandlestickmodelmapper_high_isbase = value; }
    void setQCandlestickModelMapper_SetLow_IsBase(bool value) const { qcandlestickmodelmapper_setlow_isbase = value; }
    void setQCandlestickModelMapper_Low_IsBase(bool value) const { qcandlestickmodelmapper_low_isbase = value; }
    void setQCandlestickModelMapper_SetClose_IsBase(bool value) const { qcandlestickmodelmapper_setclose_isbase = value; }
    void setQCandlestickModelMapper_Close_IsBase(bool value) const { qcandlestickmodelmapper_close_isbase = value; }
    void setQCandlestickModelMapper_SetFirstSetSection_IsBase(bool value) const { qcandlestickmodelmapper_setfirstsetsection_isbase = value; }
    void setQCandlestickModelMapper_FirstSetSection_IsBase(bool value) const { qcandlestickmodelmapper_firstsetsection_isbase = value; }
    void setQCandlestickModelMapper_SetLastSetSection_IsBase(bool value) const { qcandlestickmodelmapper_setlastsetsection_isbase = value; }
    void setQCandlestickModelMapper_LastSetSection_IsBase(bool value) const { qcandlestickmodelmapper_lastsetsection_isbase = value; }
    void setQCandlestickModelMapper_Sender_IsBase(bool value) const { qcandlestickmodelmapper_sender_isbase = value; }
    void setQCandlestickModelMapper_SenderSignalIndex_IsBase(bool value) const { qcandlestickmodelmapper_sendersignalindex_isbase = value; }
    void setQCandlestickModelMapper_Receivers_IsBase(bool value) const { qcandlestickmodelmapper_receivers_isbase = value; }
    void setQCandlestickModelMapper_IsSignalConnected_IsBase(bool value) const { qcandlestickmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickmodelmapper_metacall_isbase) {
            qcandlestickmodelmapper_metacall_isbase = false;
            return QCandlestickModelMapper::qt_metacall(param1, param2, param3);
        } else if (qcandlestickmodelmapper_metacall_callback != nullptr) {
            return qcandlestickmodelmapper_metacall_callback(this, param1, param2, param3);
        } else {
            return QCandlestickModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientation orientation() const override {
        return qcandlestickmodelmapper_orientation_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickmodelmapper_event_isbase) {
            qcandlestickmodelmapper_event_isbase = false;
            return QCandlestickModelMapper::event(event);
        } else if (qcandlestickmodelmapper_event_callback != nullptr) {
            return qcandlestickmodelmapper_event_callback(this, event);
        } else {
            return QCandlestickModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickmodelmapper_eventfilter_isbase) {
            qcandlestickmodelmapper_eventfilter_isbase = false;
            return QCandlestickModelMapper::eventFilter(watched, event);
        } else if (qcandlestickmodelmapper_eventfilter_callback != nullptr) {
            return qcandlestickmodelmapper_eventfilter_callback(this, watched, event);
        } else {
            return QCandlestickModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickmodelmapper_timerevent_isbase) {
            qcandlestickmodelmapper_timerevent_isbase = false;
            QCandlestickModelMapper::timerEvent(event);
        } else if (qcandlestickmodelmapper_timerevent_callback != nullptr) {
            qcandlestickmodelmapper_timerevent_callback(this, event);
        } else {
            QCandlestickModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickmodelmapper_childevent_isbase) {
            qcandlestickmodelmapper_childevent_isbase = false;
            QCandlestickModelMapper::childEvent(event);
        } else if (qcandlestickmodelmapper_childevent_callback != nullptr) {
            qcandlestickmodelmapper_childevent_callback(this, event);
        } else {
            QCandlestickModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickmodelmapper_customevent_isbase) {
            qcandlestickmodelmapper_customevent_isbase = false;
            QCandlestickModelMapper::customEvent(event);
        } else if (qcandlestickmodelmapper_customevent_callback != nullptr) {
            qcandlestickmodelmapper_customevent_callback(this, event);
        } else {
            QCandlestickModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickmodelmapper_connectnotify_isbase) {
            qcandlestickmodelmapper_connectnotify_isbase = false;
            QCandlestickModelMapper::connectNotify(signal);
        } else if (qcandlestickmodelmapper_connectnotify_callback != nullptr) {
            qcandlestickmodelmapper_connectnotify_callback(this, signal);
        } else {
            QCandlestickModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickmodelmapper_disconnectnotify_isbase) {
            qcandlestickmodelmapper_disconnectnotify_isbase = false;
            QCandlestickModelMapper::disconnectNotify(signal);
        } else if (qcandlestickmodelmapper_disconnectnotify_callback != nullptr) {
            qcandlestickmodelmapper_disconnectnotify_callback(this, signal);
        } else {
            QCandlestickModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTimestamp(int timestamp) {
        if (qcandlestickmodelmapper_settimestamp_isbase) {
            qcandlestickmodelmapper_settimestamp_isbase = false;
            QCandlestickModelMapper::setTimestamp(timestamp);
        } else if (qcandlestickmodelmapper_settimestamp_callback != nullptr) {
            qcandlestickmodelmapper_settimestamp_callback(this, timestamp);
        } else {
            QCandlestickModelMapper::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    int timestamp() const {
        if (qcandlestickmodelmapper_timestamp_isbase) {
            qcandlestickmodelmapper_timestamp_isbase = false;
            return QCandlestickModelMapper::timestamp();
        } else if (qcandlestickmodelmapper_timestamp_callback != nullptr) {
            return qcandlestickmodelmapper_timestamp_callback();
        } else {
            return QCandlestickModelMapper::timestamp();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpen(int open) {
        if (qcandlestickmodelmapper_setopen_isbase) {
            qcandlestickmodelmapper_setopen_isbase = false;
            QCandlestickModelMapper::setOpen(open);
        } else if (qcandlestickmodelmapper_setopen_callback != nullptr) {
            qcandlestickmodelmapper_setopen_callback(this, open);
        } else {
            QCandlestickModelMapper::setOpen(open);
        }
    }

    // Virtual method for C ABI access and custom callback
    int open() const {
        if (qcandlestickmodelmapper_open_isbase) {
            qcandlestickmodelmapper_open_isbase = false;
            return QCandlestickModelMapper::open();
        } else if (qcandlestickmodelmapper_open_callback != nullptr) {
            return qcandlestickmodelmapper_open_callback();
        } else {
            return QCandlestickModelMapper::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setHigh(int high) {
        if (qcandlestickmodelmapper_sethigh_isbase) {
            qcandlestickmodelmapper_sethigh_isbase = false;
            QCandlestickModelMapper::setHigh(high);
        } else if (qcandlestickmodelmapper_sethigh_callback != nullptr) {
            qcandlestickmodelmapper_sethigh_callback(this, high);
        } else {
            QCandlestickModelMapper::setHigh(high);
        }
    }

    // Virtual method for C ABI access and custom callback
    int high() const {
        if (qcandlestickmodelmapper_high_isbase) {
            qcandlestickmodelmapper_high_isbase = false;
            return QCandlestickModelMapper::high();
        } else if (qcandlestickmodelmapper_high_callback != nullptr) {
            return qcandlestickmodelmapper_high_callback();
        } else {
            return QCandlestickModelMapper::high();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLow(int low) {
        if (qcandlestickmodelmapper_setlow_isbase) {
            qcandlestickmodelmapper_setlow_isbase = false;
            QCandlestickModelMapper::setLow(low);
        } else if (qcandlestickmodelmapper_setlow_callback != nullptr) {
            qcandlestickmodelmapper_setlow_callback(this, low);
        } else {
            QCandlestickModelMapper::setLow(low);
        }
    }

    // Virtual method for C ABI access and custom callback
    int low() const {
        if (qcandlestickmodelmapper_low_isbase) {
            qcandlestickmodelmapper_low_isbase = false;
            return QCandlestickModelMapper::low();
        } else if (qcandlestickmodelmapper_low_callback != nullptr) {
            return qcandlestickmodelmapper_low_callback();
        } else {
            return QCandlestickModelMapper::low();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setClose(int close) {
        if (qcandlestickmodelmapper_setclose_isbase) {
            qcandlestickmodelmapper_setclose_isbase = false;
            QCandlestickModelMapper::setClose(close);
        } else if (qcandlestickmodelmapper_setclose_callback != nullptr) {
            qcandlestickmodelmapper_setclose_callback(this, close);
        } else {
            QCandlestickModelMapper::setClose(close);
        }
    }

    // Virtual method for C ABI access and custom callback
    int close() const {
        if (qcandlestickmodelmapper_close_isbase) {
            qcandlestickmodelmapper_close_isbase = false;
            return QCandlestickModelMapper::close();
        } else if (qcandlestickmodelmapper_close_callback != nullptr) {
            return qcandlestickmodelmapper_close_callback();
        } else {
            return QCandlestickModelMapper::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirstSetSection(int firstSetSection) {
        if (qcandlestickmodelmapper_setfirstsetsection_isbase) {
            qcandlestickmodelmapper_setfirstsetsection_isbase = false;
            QCandlestickModelMapper::setFirstSetSection(firstSetSection);
        } else if (qcandlestickmodelmapper_setfirstsetsection_callback != nullptr) {
            qcandlestickmodelmapper_setfirstsetsection_callback(this, firstSetSection);
        } else {
            QCandlestickModelMapper::setFirstSetSection(firstSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int firstSetSection() const {
        if (qcandlestickmodelmapper_firstsetsection_isbase) {
            qcandlestickmodelmapper_firstsetsection_isbase = false;
            return QCandlestickModelMapper::firstSetSection();
        } else if (qcandlestickmodelmapper_firstsetsection_callback != nullptr) {
            return qcandlestickmodelmapper_firstsetsection_callback();
        } else {
            return QCandlestickModelMapper::firstSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastSetSection(int lastSetSection) {
        if (qcandlestickmodelmapper_setlastsetsection_isbase) {
            qcandlestickmodelmapper_setlastsetsection_isbase = false;
            QCandlestickModelMapper::setLastSetSection(lastSetSection);
        } else if (qcandlestickmodelmapper_setlastsetsection_callback != nullptr) {
            qcandlestickmodelmapper_setlastsetsection_callback(this, lastSetSection);
        } else {
            QCandlestickModelMapper::setLastSetSection(lastSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int lastSetSection() const {
        if (qcandlestickmodelmapper_lastsetsection_isbase) {
            qcandlestickmodelmapper_lastsetsection_isbase = false;
            return QCandlestickModelMapper::lastSetSection();
        } else if (qcandlestickmodelmapper_lastsetsection_callback != nullptr) {
            return qcandlestickmodelmapper_lastsetsection_callback();
        } else {
            return QCandlestickModelMapper::lastSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcandlestickmodelmapper_sender_isbase) {
            qcandlestickmodelmapper_sender_isbase = false;
            return QCandlestickModelMapper::sender();
        } else if (qcandlestickmodelmapper_sender_callback != nullptr) {
            return qcandlestickmodelmapper_sender_callback();
        } else {
            return QCandlestickModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcandlestickmodelmapper_sendersignalindex_isbase) {
            qcandlestickmodelmapper_sendersignalindex_isbase = false;
            return QCandlestickModelMapper::senderSignalIndex();
        } else if (qcandlestickmodelmapper_sendersignalindex_callback != nullptr) {
            return qcandlestickmodelmapper_sendersignalindex_callback();
        } else {
            return QCandlestickModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcandlestickmodelmapper_receivers_isbase) {
            qcandlestickmodelmapper_receivers_isbase = false;
            return QCandlestickModelMapper::receivers(signal);
        } else if (qcandlestickmodelmapper_receivers_callback != nullptr) {
            return qcandlestickmodelmapper_receivers_callback(this, signal);
        } else {
            return QCandlestickModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcandlestickmodelmapper_issignalconnected_isbase) {
            qcandlestickmodelmapper_issignalconnected_isbase = false;
            return QCandlestickModelMapper::isSignalConnected(signal);
        } else if (qcandlestickmodelmapper_issignalconnected_callback != nullptr) {
            return qcandlestickmodelmapper_issignalconnected_callback(this, signal);
        } else {
            return QCandlestickModelMapper::isSignalConnected(signal);
        }
    }
};

#endif
