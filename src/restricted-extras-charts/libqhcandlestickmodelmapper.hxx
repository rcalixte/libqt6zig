#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHCandlestickModelMapper so that we can call protected methods
class VirtualQHCandlestickModelMapper final : public QHCandlestickModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQHCandlestickModelMapper = true;

    // Virtual class public types (including callbacks)
    using QHCandlestickModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QHCandlestickModelMapper_Metacast_Callback = void* (*)(QHCandlestickModelMapper*, const char*);
    using QHCandlestickModelMapper_Metacall_Callback = int (*)(QHCandlestickModelMapper*, int, int, void**);
    using QHCandlestickModelMapper_Orientation_Callback = int (*)();
    using QHCandlestickModelMapper_Event_Callback = bool (*)(QHCandlestickModelMapper*, QEvent*);
    using QHCandlestickModelMapper_EventFilter_Callback = bool (*)(QHCandlestickModelMapper*, QObject*, QEvent*);
    using QHCandlestickModelMapper_TimerEvent_Callback = void (*)(QHCandlestickModelMapper*, QTimerEvent*);
    using QHCandlestickModelMapper_ChildEvent_Callback = void (*)(QHCandlestickModelMapper*, QChildEvent*);
    using QHCandlestickModelMapper_CustomEvent_Callback = void (*)(QHCandlestickModelMapper*, QEvent*);
    using QHCandlestickModelMapper_ConnectNotify_Callback = void (*)(QHCandlestickModelMapper*, QMetaMethod*);
    using QHCandlestickModelMapper_DisconnectNotify_Callback = void (*)(QHCandlestickModelMapper*, QMetaMethod*);
    using QHCandlestickModelMapper_SetTimestamp_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_Timestamp_Callback = int (*)();
    using QHCandlestickModelMapper_SetOpen_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_Open_Callback = int (*)();
    using QHCandlestickModelMapper_SetHigh_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_High_Callback = int (*)();
    using QHCandlestickModelMapper_SetLow_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_Low_Callback = int (*)();
    using QHCandlestickModelMapper_SetClose_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_Close_Callback = int (*)();
    using QHCandlestickModelMapper_SetFirstSetSection_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_FirstSetSection_Callback = int (*)();
    using QHCandlestickModelMapper_SetLastSetSection_Callback = void (*)(QHCandlestickModelMapper*, int);
    using QHCandlestickModelMapper_LastSetSection_Callback = int (*)();
    using QHCandlestickModelMapper_Sender_Callback = QObject* (*)();
    using QHCandlestickModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHCandlestickModelMapper_Receivers_Callback = int (*)(const QHCandlestickModelMapper*, const char*);
    using QHCandlestickModelMapper_IsSignalConnected_Callback = bool (*)(const QHCandlestickModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHCandlestickModelMapper_MetaObject_Callback qhcandlestickmodelmapper_metaobject_callback = nullptr;
    QHCandlestickModelMapper_Metacast_Callback qhcandlestickmodelmapper_metacast_callback = nullptr;
    QHCandlestickModelMapper_Metacall_Callback qhcandlestickmodelmapper_metacall_callback = nullptr;
    QHCandlestickModelMapper_Orientation_Callback qhcandlestickmodelmapper_orientation_callback = nullptr;
    QHCandlestickModelMapper_Event_Callback qhcandlestickmodelmapper_event_callback = nullptr;
    QHCandlestickModelMapper_EventFilter_Callback qhcandlestickmodelmapper_eventfilter_callback = nullptr;
    QHCandlestickModelMapper_TimerEvent_Callback qhcandlestickmodelmapper_timerevent_callback = nullptr;
    QHCandlestickModelMapper_ChildEvent_Callback qhcandlestickmodelmapper_childevent_callback = nullptr;
    QHCandlestickModelMapper_CustomEvent_Callback qhcandlestickmodelmapper_customevent_callback = nullptr;
    QHCandlestickModelMapper_ConnectNotify_Callback qhcandlestickmodelmapper_connectnotify_callback = nullptr;
    QHCandlestickModelMapper_DisconnectNotify_Callback qhcandlestickmodelmapper_disconnectnotify_callback = nullptr;
    QHCandlestickModelMapper_SetTimestamp_Callback qhcandlestickmodelmapper_settimestamp_callback = nullptr;
    QHCandlestickModelMapper_Timestamp_Callback qhcandlestickmodelmapper_timestamp_callback = nullptr;
    QHCandlestickModelMapper_SetOpen_Callback qhcandlestickmodelmapper_setopen_callback = nullptr;
    QHCandlestickModelMapper_Open_Callback qhcandlestickmodelmapper_open_callback = nullptr;
    QHCandlestickModelMapper_SetHigh_Callback qhcandlestickmodelmapper_sethigh_callback = nullptr;
    QHCandlestickModelMapper_High_Callback qhcandlestickmodelmapper_high_callback = nullptr;
    QHCandlestickModelMapper_SetLow_Callback qhcandlestickmodelmapper_setlow_callback = nullptr;
    QHCandlestickModelMapper_Low_Callback qhcandlestickmodelmapper_low_callback = nullptr;
    QHCandlestickModelMapper_SetClose_Callback qhcandlestickmodelmapper_setclose_callback = nullptr;
    QHCandlestickModelMapper_Close_Callback qhcandlestickmodelmapper_close_callback = nullptr;
    QHCandlestickModelMapper_SetFirstSetSection_Callback qhcandlestickmodelmapper_setfirstsetsection_callback = nullptr;
    QHCandlestickModelMapper_FirstSetSection_Callback qhcandlestickmodelmapper_firstsetsection_callback = nullptr;
    QHCandlestickModelMapper_SetLastSetSection_Callback qhcandlestickmodelmapper_setlastsetsection_callback = nullptr;
    QHCandlestickModelMapper_LastSetSection_Callback qhcandlestickmodelmapper_lastsetsection_callback = nullptr;
    QHCandlestickModelMapper_Sender_Callback qhcandlestickmodelmapper_sender_callback = nullptr;
    QHCandlestickModelMapper_SenderSignalIndex_Callback qhcandlestickmodelmapper_sendersignalindex_callback = nullptr;
    QHCandlestickModelMapper_Receivers_Callback qhcandlestickmodelmapper_receivers_callback = nullptr;
    QHCandlestickModelMapper_IsSignalConnected_Callback qhcandlestickmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhcandlestickmodelmapper_metaobject_isbase = false;
    mutable bool qhcandlestickmodelmapper_metacast_isbase = false;
    mutable bool qhcandlestickmodelmapper_metacall_isbase = false;
    mutable bool qhcandlestickmodelmapper_orientation_isbase = false;
    mutable bool qhcandlestickmodelmapper_event_isbase = false;
    mutable bool qhcandlestickmodelmapper_eventfilter_isbase = false;
    mutable bool qhcandlestickmodelmapper_timerevent_isbase = false;
    mutable bool qhcandlestickmodelmapper_childevent_isbase = false;
    mutable bool qhcandlestickmodelmapper_customevent_isbase = false;
    mutable bool qhcandlestickmodelmapper_connectnotify_isbase = false;
    mutable bool qhcandlestickmodelmapper_disconnectnotify_isbase = false;
    mutable bool qhcandlestickmodelmapper_settimestamp_isbase = false;
    mutable bool qhcandlestickmodelmapper_timestamp_isbase = false;
    mutable bool qhcandlestickmodelmapper_setopen_isbase = false;
    mutable bool qhcandlestickmodelmapper_open_isbase = false;
    mutable bool qhcandlestickmodelmapper_sethigh_isbase = false;
    mutable bool qhcandlestickmodelmapper_high_isbase = false;
    mutable bool qhcandlestickmodelmapper_setlow_isbase = false;
    mutable bool qhcandlestickmodelmapper_low_isbase = false;
    mutable bool qhcandlestickmodelmapper_setclose_isbase = false;
    mutable bool qhcandlestickmodelmapper_close_isbase = false;
    mutable bool qhcandlestickmodelmapper_setfirstsetsection_isbase = false;
    mutable bool qhcandlestickmodelmapper_firstsetsection_isbase = false;
    mutable bool qhcandlestickmodelmapper_setlastsetsection_isbase = false;
    mutable bool qhcandlestickmodelmapper_lastsetsection_isbase = false;
    mutable bool qhcandlestickmodelmapper_sender_isbase = false;
    mutable bool qhcandlestickmodelmapper_sendersignalindex_isbase = false;
    mutable bool qhcandlestickmodelmapper_receivers_isbase = false;
    mutable bool qhcandlestickmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQHCandlestickModelMapper() : QHCandlestickModelMapper() {};
    VirtualQHCandlestickModelMapper(QObject* parent) : QHCandlestickModelMapper(parent) {};

    // Callback setters
    inline void setQHCandlestickModelMapper_MetaObject_Callback(QHCandlestickModelMapper_MetaObject_Callback cb) { qhcandlestickmodelmapper_metaobject_callback = cb; }
    inline void setQHCandlestickModelMapper_Metacast_Callback(QHCandlestickModelMapper_Metacast_Callback cb) { qhcandlestickmodelmapper_metacast_callback = cb; }
    inline void setQHCandlestickModelMapper_Metacall_Callback(QHCandlestickModelMapper_Metacall_Callback cb) { qhcandlestickmodelmapper_metacall_callback = cb; }
    inline void setQHCandlestickModelMapper_Orientation_Callback(QHCandlestickModelMapper_Orientation_Callback cb) { qhcandlestickmodelmapper_orientation_callback = cb; }
    inline void setQHCandlestickModelMapper_Event_Callback(QHCandlestickModelMapper_Event_Callback cb) { qhcandlestickmodelmapper_event_callback = cb; }
    inline void setQHCandlestickModelMapper_EventFilter_Callback(QHCandlestickModelMapper_EventFilter_Callback cb) { qhcandlestickmodelmapper_eventfilter_callback = cb; }
    inline void setQHCandlestickModelMapper_TimerEvent_Callback(QHCandlestickModelMapper_TimerEvent_Callback cb) { qhcandlestickmodelmapper_timerevent_callback = cb; }
    inline void setQHCandlestickModelMapper_ChildEvent_Callback(QHCandlestickModelMapper_ChildEvent_Callback cb) { qhcandlestickmodelmapper_childevent_callback = cb; }
    inline void setQHCandlestickModelMapper_CustomEvent_Callback(QHCandlestickModelMapper_CustomEvent_Callback cb) { qhcandlestickmodelmapper_customevent_callback = cb; }
    inline void setQHCandlestickModelMapper_ConnectNotify_Callback(QHCandlestickModelMapper_ConnectNotify_Callback cb) { qhcandlestickmodelmapper_connectnotify_callback = cb; }
    inline void setQHCandlestickModelMapper_DisconnectNotify_Callback(QHCandlestickModelMapper_DisconnectNotify_Callback cb) { qhcandlestickmodelmapper_disconnectnotify_callback = cb; }
    inline void setQHCandlestickModelMapper_SetTimestamp_Callback(QHCandlestickModelMapper_SetTimestamp_Callback cb) { qhcandlestickmodelmapper_settimestamp_callback = cb; }
    inline void setQHCandlestickModelMapper_Timestamp_Callback(QHCandlestickModelMapper_Timestamp_Callback cb) { qhcandlestickmodelmapper_timestamp_callback = cb; }
    inline void setQHCandlestickModelMapper_SetOpen_Callback(QHCandlestickModelMapper_SetOpen_Callback cb) { qhcandlestickmodelmapper_setopen_callback = cb; }
    inline void setQHCandlestickModelMapper_Open_Callback(QHCandlestickModelMapper_Open_Callback cb) { qhcandlestickmodelmapper_open_callback = cb; }
    inline void setQHCandlestickModelMapper_SetHigh_Callback(QHCandlestickModelMapper_SetHigh_Callback cb) { qhcandlestickmodelmapper_sethigh_callback = cb; }
    inline void setQHCandlestickModelMapper_High_Callback(QHCandlestickModelMapper_High_Callback cb) { qhcandlestickmodelmapper_high_callback = cb; }
    inline void setQHCandlestickModelMapper_SetLow_Callback(QHCandlestickModelMapper_SetLow_Callback cb) { qhcandlestickmodelmapper_setlow_callback = cb; }
    inline void setQHCandlestickModelMapper_Low_Callback(QHCandlestickModelMapper_Low_Callback cb) { qhcandlestickmodelmapper_low_callback = cb; }
    inline void setQHCandlestickModelMapper_SetClose_Callback(QHCandlestickModelMapper_SetClose_Callback cb) { qhcandlestickmodelmapper_setclose_callback = cb; }
    inline void setQHCandlestickModelMapper_Close_Callback(QHCandlestickModelMapper_Close_Callback cb) { qhcandlestickmodelmapper_close_callback = cb; }
    inline void setQHCandlestickModelMapper_SetFirstSetSection_Callback(QHCandlestickModelMapper_SetFirstSetSection_Callback cb) { qhcandlestickmodelmapper_setfirstsetsection_callback = cb; }
    inline void setQHCandlestickModelMapper_FirstSetSection_Callback(QHCandlestickModelMapper_FirstSetSection_Callback cb) { qhcandlestickmodelmapper_firstsetsection_callback = cb; }
    inline void setQHCandlestickModelMapper_SetLastSetSection_Callback(QHCandlestickModelMapper_SetLastSetSection_Callback cb) { qhcandlestickmodelmapper_setlastsetsection_callback = cb; }
    inline void setQHCandlestickModelMapper_LastSetSection_Callback(QHCandlestickModelMapper_LastSetSection_Callback cb) { qhcandlestickmodelmapper_lastsetsection_callback = cb; }
    inline void setQHCandlestickModelMapper_Sender_Callback(QHCandlestickModelMapper_Sender_Callback cb) { qhcandlestickmodelmapper_sender_callback = cb; }
    inline void setQHCandlestickModelMapper_SenderSignalIndex_Callback(QHCandlestickModelMapper_SenderSignalIndex_Callback cb) { qhcandlestickmodelmapper_sendersignalindex_callback = cb; }
    inline void setQHCandlestickModelMapper_Receivers_Callback(QHCandlestickModelMapper_Receivers_Callback cb) { qhcandlestickmodelmapper_receivers_callback = cb; }
    inline void setQHCandlestickModelMapper_IsSignalConnected_Callback(QHCandlestickModelMapper_IsSignalConnected_Callback cb) { qhcandlestickmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHCandlestickModelMapper_MetaObject_IsBase(bool value) const { qhcandlestickmodelmapper_metaobject_isbase = value; }
    inline void setQHCandlestickModelMapper_Metacast_IsBase(bool value) const { qhcandlestickmodelmapper_metacast_isbase = value; }
    inline void setQHCandlestickModelMapper_Metacall_IsBase(bool value) const { qhcandlestickmodelmapper_metacall_isbase = value; }
    inline void setQHCandlestickModelMapper_Orientation_IsBase(bool value) const { qhcandlestickmodelmapper_orientation_isbase = value; }
    inline void setQHCandlestickModelMapper_Event_IsBase(bool value) const { qhcandlestickmodelmapper_event_isbase = value; }
    inline void setQHCandlestickModelMapper_EventFilter_IsBase(bool value) const { qhcandlestickmodelmapper_eventfilter_isbase = value; }
    inline void setQHCandlestickModelMapper_TimerEvent_IsBase(bool value) const { qhcandlestickmodelmapper_timerevent_isbase = value; }
    inline void setQHCandlestickModelMapper_ChildEvent_IsBase(bool value) const { qhcandlestickmodelmapper_childevent_isbase = value; }
    inline void setQHCandlestickModelMapper_CustomEvent_IsBase(bool value) const { qhcandlestickmodelmapper_customevent_isbase = value; }
    inline void setQHCandlestickModelMapper_ConnectNotify_IsBase(bool value) const { qhcandlestickmodelmapper_connectnotify_isbase = value; }
    inline void setQHCandlestickModelMapper_DisconnectNotify_IsBase(bool value) const { qhcandlestickmodelmapper_disconnectnotify_isbase = value; }
    inline void setQHCandlestickModelMapper_SetTimestamp_IsBase(bool value) const { qhcandlestickmodelmapper_settimestamp_isbase = value; }
    inline void setQHCandlestickModelMapper_Timestamp_IsBase(bool value) const { qhcandlestickmodelmapper_timestamp_isbase = value; }
    inline void setQHCandlestickModelMapper_SetOpen_IsBase(bool value) const { qhcandlestickmodelmapper_setopen_isbase = value; }
    inline void setQHCandlestickModelMapper_Open_IsBase(bool value) const { qhcandlestickmodelmapper_open_isbase = value; }
    inline void setQHCandlestickModelMapper_SetHigh_IsBase(bool value) const { qhcandlestickmodelmapper_sethigh_isbase = value; }
    inline void setQHCandlestickModelMapper_High_IsBase(bool value) const { qhcandlestickmodelmapper_high_isbase = value; }
    inline void setQHCandlestickModelMapper_SetLow_IsBase(bool value) const { qhcandlestickmodelmapper_setlow_isbase = value; }
    inline void setQHCandlestickModelMapper_Low_IsBase(bool value) const { qhcandlestickmodelmapper_low_isbase = value; }
    inline void setQHCandlestickModelMapper_SetClose_IsBase(bool value) const { qhcandlestickmodelmapper_setclose_isbase = value; }
    inline void setQHCandlestickModelMapper_Close_IsBase(bool value) const { qhcandlestickmodelmapper_close_isbase = value; }
    inline void setQHCandlestickModelMapper_SetFirstSetSection_IsBase(bool value) const { qhcandlestickmodelmapper_setfirstsetsection_isbase = value; }
    inline void setQHCandlestickModelMapper_FirstSetSection_IsBase(bool value) const { qhcandlestickmodelmapper_firstsetsection_isbase = value; }
    inline void setQHCandlestickModelMapper_SetLastSetSection_IsBase(bool value) const { qhcandlestickmodelmapper_setlastsetsection_isbase = value; }
    inline void setQHCandlestickModelMapper_LastSetSection_IsBase(bool value) const { qhcandlestickmodelmapper_lastsetsection_isbase = value; }
    inline void setQHCandlestickModelMapper_Sender_IsBase(bool value) const { qhcandlestickmodelmapper_sender_isbase = value; }
    inline void setQHCandlestickModelMapper_SenderSignalIndex_IsBase(bool value) const { qhcandlestickmodelmapper_sendersignalindex_isbase = value; }
    inline void setQHCandlestickModelMapper_Receivers_IsBase(bool value) const { qhcandlestickmodelmapper_receivers_isbase = value; }
    inline void setQHCandlestickModelMapper_IsSignalConnected_IsBase(bool value) const { qhcandlestickmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhcandlestickmodelmapper_metaobject_isbase) {
            qhcandlestickmodelmapper_metaobject_isbase = false;
            return QHCandlestickModelMapper::metaObject();
        }
        auto metaobject_cb = qhcandlestickmodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QHCandlestickModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhcandlestickmodelmapper_metacast_isbase) {
            qhcandlestickmodelmapper_metacast_isbase = false;
            return QHCandlestickModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qhcandlestickmodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QHCandlestickModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhcandlestickmodelmapper_metacall_isbase) {
            qhcandlestickmodelmapper_metacall_isbase = false;
            return QHCandlestickModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qhcandlestickmodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientation orientation() const override {
        if (qhcandlestickmodelmapper_orientation_isbase) {
            qhcandlestickmodelmapper_orientation_isbase = false;
            return QHCandlestickModelMapper::orientation();
        }
        auto orientation_cb = qhcandlestickmodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QHCandlestickModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhcandlestickmodelmapper_event_isbase) {
            qhcandlestickmodelmapper_event_isbase = false;
            return QHCandlestickModelMapper::event(event);
        }
        auto event_cb = qhcandlestickmodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QHCandlestickModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhcandlestickmodelmapper_eventfilter_isbase) {
            qhcandlestickmodelmapper_eventfilter_isbase = false;
            return QHCandlestickModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qhcandlestickmodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHCandlestickModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhcandlestickmodelmapper_timerevent_isbase) {
            qhcandlestickmodelmapper_timerevent_isbase = false;
            QHCandlestickModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qhcandlestickmodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhcandlestickmodelmapper_childevent_isbase) {
            qhcandlestickmodelmapper_childevent_isbase = false;
            QHCandlestickModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qhcandlestickmodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhcandlestickmodelmapper_customevent_isbase) {
            qhcandlestickmodelmapper_customevent_isbase = false;
            QHCandlestickModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qhcandlestickmodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhcandlestickmodelmapper_connectnotify_isbase) {
            qhcandlestickmodelmapper_connectnotify_isbase = false;
            QHCandlestickModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qhcandlestickmodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhcandlestickmodelmapper_disconnectnotify_isbase) {
            qhcandlestickmodelmapper_disconnectnotify_isbase = false;
            QHCandlestickModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qhcandlestickmodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setTimestamp(int timestamp) {
        if (qhcandlestickmodelmapper_settimestamp_isbase) {
            qhcandlestickmodelmapper_settimestamp_isbase = false;
            QHCandlestickModelMapper::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qhcandlestickmodelmapper_settimestamp_callback;
        if (settimestamp_cb) {
            int cbval1 = timestamp;

            settimestamp_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    int timestamp() const {
        if (qhcandlestickmodelmapper_timestamp_isbase) {
            qhcandlestickmodelmapper_timestamp_isbase = false;
            return QHCandlestickModelMapper::timestamp();
        }
        auto timestamp_cb = qhcandlestickmodelmapper_timestamp_callback;
        if (timestamp_cb) {
            int callback_ret = timestamp_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::timestamp();
    }

    // Virtual method for C ABI access and custom callback
    void setOpen(int open) {
        if (qhcandlestickmodelmapper_setopen_isbase) {
            qhcandlestickmodelmapper_setopen_isbase = false;
            QHCandlestickModelMapper::setOpen(open);
            return;
        }
        auto setopen_cb = qhcandlestickmodelmapper_setopen_callback;
        if (setopen_cb) {
            int cbval1 = open;

            setopen_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setOpen(open);
    }

    // Virtual method for C ABI access and custom callback
    int open() const {
        if (qhcandlestickmodelmapper_open_isbase) {
            qhcandlestickmodelmapper_open_isbase = false;
            return QHCandlestickModelMapper::open();
        }
        auto open_cb = qhcandlestickmodelmapper_open_callback;
        if (open_cb) {
            int callback_ret = open_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::open();
    }

    // Virtual method for C ABI access and custom callback
    void setHigh(int high) {
        if (qhcandlestickmodelmapper_sethigh_isbase) {
            qhcandlestickmodelmapper_sethigh_isbase = false;
            QHCandlestickModelMapper::setHigh(high);
            return;
        }
        auto sethigh_cb = qhcandlestickmodelmapper_sethigh_callback;
        if (sethigh_cb) {
            int cbval1 = high;

            sethigh_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setHigh(high);
    }

    // Virtual method for C ABI access and custom callback
    int high() const {
        if (qhcandlestickmodelmapper_high_isbase) {
            qhcandlestickmodelmapper_high_isbase = false;
            return QHCandlestickModelMapper::high();
        }
        auto high_cb = qhcandlestickmodelmapper_high_callback;
        if (high_cb) {
            int callback_ret = high_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::high();
    }

    // Virtual method for C ABI access and custom callback
    void setLow(int low) {
        if (qhcandlestickmodelmapper_setlow_isbase) {
            qhcandlestickmodelmapper_setlow_isbase = false;
            QHCandlestickModelMapper::setLow(low);
            return;
        }
        auto setlow_cb = qhcandlestickmodelmapper_setlow_callback;
        if (setlow_cb) {
            int cbval1 = low;

            setlow_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setLow(low);
    }

    // Virtual method for C ABI access and custom callback
    int low() const {
        if (qhcandlestickmodelmapper_low_isbase) {
            qhcandlestickmodelmapper_low_isbase = false;
            return QHCandlestickModelMapper::low();
        }
        auto low_cb = qhcandlestickmodelmapper_low_callback;
        if (low_cb) {
            int callback_ret = low_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::low();
    }

    // Virtual method for C ABI access and custom callback
    void setClose(int close) {
        if (qhcandlestickmodelmapper_setclose_isbase) {
            qhcandlestickmodelmapper_setclose_isbase = false;
            QHCandlestickModelMapper::setClose(close);
            return;
        }
        auto setclose_cb = qhcandlestickmodelmapper_setclose_callback;
        if (setclose_cb) {
            int cbval1 = close;

            setclose_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setClose(close);
    }

    // Virtual method for C ABI access and custom callback
    int close() const {
        if (qhcandlestickmodelmapper_close_isbase) {
            qhcandlestickmodelmapper_close_isbase = false;
            return QHCandlestickModelMapper::close();
        }
        auto close_cb = qhcandlestickmodelmapper_close_callback;
        if (close_cb) {
            int callback_ret = close_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::close();
    }

    // Virtual method for C ABI access and custom callback
    void setFirstSetSection(int firstSetSection) {
        if (qhcandlestickmodelmapper_setfirstsetsection_isbase) {
            qhcandlestickmodelmapper_setfirstsetsection_isbase = false;
            QHCandlestickModelMapper::setFirstSetSection(firstSetSection);
            return;
        }
        auto setfirstsetsection_cb = qhcandlestickmodelmapper_setfirstsetsection_callback;
        if (setfirstsetsection_cb) {
            int cbval1 = firstSetSection;

            setfirstsetsection_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setFirstSetSection(firstSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int firstSetSection() const {
        if (qhcandlestickmodelmapper_firstsetsection_isbase) {
            qhcandlestickmodelmapper_firstsetsection_isbase = false;
            return QHCandlestickModelMapper::firstSetSection();
        }
        auto firstsetsection_cb = qhcandlestickmodelmapper_firstsetsection_callback;
        if (firstsetsection_cb) {
            int callback_ret = firstsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::firstSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setLastSetSection(int lastSetSection) {
        if (qhcandlestickmodelmapper_setlastsetsection_isbase) {
            qhcandlestickmodelmapper_setlastsetsection_isbase = false;
            QHCandlestickModelMapper::setLastSetSection(lastSetSection);
            return;
        }
        auto setlastsetsection_cb = qhcandlestickmodelmapper_setlastsetsection_callback;
        if (setlastsetsection_cb) {
            int cbval1 = lastSetSection;

            setlastsetsection_cb(this, cbval1);
            return;
        }
        QHCandlestickModelMapper::setLastSetSection(lastSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int lastSetSection() const {
        if (qhcandlestickmodelmapper_lastsetsection_isbase) {
            qhcandlestickmodelmapper_lastsetsection_isbase = false;
            return QHCandlestickModelMapper::lastSetSection();
        }
        auto lastsetsection_cb = qhcandlestickmodelmapper_lastsetsection_callback;
        if (lastsetsection_cb) {
            int callback_ret = lastsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::lastSetSection();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhcandlestickmodelmapper_sender_isbase) {
            qhcandlestickmodelmapper_sender_isbase = false;
            return QHCandlestickModelMapper::sender();
        }
        auto sender_cb = qhcandlestickmodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QHCandlestickModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhcandlestickmodelmapper_sendersignalindex_isbase) {
            qhcandlestickmodelmapper_sendersignalindex_isbase = false;
            return QHCandlestickModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qhcandlestickmodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhcandlestickmodelmapper_receivers_isbase) {
            qhcandlestickmodelmapper_receivers_isbase = false;
            return QHCandlestickModelMapper::receivers(signal);
        }
        auto receivers_cb = qhcandlestickmodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHCandlestickModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhcandlestickmodelmapper_issignalconnected_isbase) {
            qhcandlestickmodelmapper_issignalconnected_isbase = false;
            return QHCandlestickModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qhcandlestickmodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QHCandlestickModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QHCandlestickModelMapper_TimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event);
    friend void QHCandlestickModelMapper_SuperTimerEvent(QHCandlestickModelMapper* self, QTimerEvent* event);
    friend void QHCandlestickModelMapper_ChildEvent(QHCandlestickModelMapper* self, QChildEvent* event);
    friend void QHCandlestickModelMapper_SuperChildEvent(QHCandlestickModelMapper* self, QChildEvent* event);
    friend void QHCandlestickModelMapper_CustomEvent(QHCandlestickModelMapper* self, QEvent* event);
    friend void QHCandlestickModelMapper_SuperCustomEvent(QHCandlestickModelMapper* self, QEvent* event);
    friend void QHCandlestickModelMapper_ConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QHCandlestickModelMapper_SuperConnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QHCandlestickModelMapper_DisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QHCandlestickModelMapper_SuperDisconnectNotify(QHCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QHCandlestickModelMapper_SetTimestamp(QHCandlestickModelMapper* self, int timestamp);
    friend void QHCandlestickModelMapper_SuperSetTimestamp(QHCandlestickModelMapper* self, int timestamp);
    friend int QHCandlestickModelMapper_Timestamp(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperTimestamp(const QHCandlestickModelMapper* self);
    friend void QHCandlestickModelMapper_SetOpen(QHCandlestickModelMapper* self, int open);
    friend void QHCandlestickModelMapper_SuperSetOpen(QHCandlestickModelMapper* self, int open);
    friend int QHCandlestickModelMapper_Open(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperOpen(const QHCandlestickModelMapper* self);
    friend void QHCandlestickModelMapper_SetHigh(QHCandlestickModelMapper* self, int high);
    friend void QHCandlestickModelMapper_SuperSetHigh(QHCandlestickModelMapper* self, int high);
    friend int QHCandlestickModelMapper_High(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperHigh(const QHCandlestickModelMapper* self);
    friend void QHCandlestickModelMapper_SetLow(QHCandlestickModelMapper* self, int low);
    friend void QHCandlestickModelMapper_SuperSetLow(QHCandlestickModelMapper* self, int low);
    friend int QHCandlestickModelMapper_Low(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperLow(const QHCandlestickModelMapper* self);
    friend void QHCandlestickModelMapper_SetClose(QHCandlestickModelMapper* self, int close);
    friend void QHCandlestickModelMapper_SuperSetClose(QHCandlestickModelMapper* self, int close);
    friend int QHCandlestickModelMapper_Close(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperClose(const QHCandlestickModelMapper* self);
    friend void QHCandlestickModelMapper_SetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection);
    friend void QHCandlestickModelMapper_SuperSetFirstSetSection(QHCandlestickModelMapper* self, int firstSetSection);
    friend int QHCandlestickModelMapper_FirstSetSection(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperFirstSetSection(const QHCandlestickModelMapper* self);
    friend void QHCandlestickModelMapper_SetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection);
    friend void QHCandlestickModelMapper_SuperSetLastSetSection(QHCandlestickModelMapper* self, int lastSetSection);
    friend int QHCandlestickModelMapper_LastSetSection(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperLastSetSection(const QHCandlestickModelMapper* self);
    friend QObject* QHCandlestickModelMapper_Sender(const QHCandlestickModelMapper* self);
    friend QObject* QHCandlestickModelMapper_SuperSender(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SenderSignalIndex(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_SuperSenderSignalIndex(const QHCandlestickModelMapper* self);
    friend int QHCandlestickModelMapper_Receivers(const QHCandlestickModelMapper* self, const char* signal);
    friend int QHCandlestickModelMapper_SuperReceivers(const QHCandlestickModelMapper* self, const char* signal);
    friend bool QHCandlestickModelMapper_IsSignalConnected(const QHCandlestickModelMapper* self, const QMetaMethod* signal);
    friend bool QHCandlestickModelMapper_SuperIsSignalConnected(const QHCandlestickModelMapper* self, const QMetaMethod* signal);
};

#endif
