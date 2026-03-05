#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVCandlestickModelMapper so that we can call protected methods
class VirtualQVCandlestickModelMapper final : public QVCandlestickModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQVCandlestickModelMapper = true;

    // Virtual class public types (including callbacks)
    using QVCandlestickModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QVCandlestickModelMapper_Metacast_Callback = void* (*)(QVCandlestickModelMapper*, const char*);
    using QVCandlestickModelMapper_Metacall_Callback = int (*)(QVCandlestickModelMapper*, int, int, void**);
    using QVCandlestickModelMapper_Orientation_Callback = int (*)();
    using QVCandlestickModelMapper_Event_Callback = bool (*)(QVCandlestickModelMapper*, QEvent*);
    using QVCandlestickModelMapper_EventFilter_Callback = bool (*)(QVCandlestickModelMapper*, QObject*, QEvent*);
    using QVCandlestickModelMapper_TimerEvent_Callback = void (*)(QVCandlestickModelMapper*, QTimerEvent*);
    using QVCandlestickModelMapper_ChildEvent_Callback = void (*)(QVCandlestickModelMapper*, QChildEvent*);
    using QVCandlestickModelMapper_CustomEvent_Callback = void (*)(QVCandlestickModelMapper*, QEvent*);
    using QVCandlestickModelMapper_ConnectNotify_Callback = void (*)(QVCandlestickModelMapper*, QMetaMethod*);
    using QVCandlestickModelMapper_DisconnectNotify_Callback = void (*)(QVCandlestickModelMapper*, QMetaMethod*);
    using QVCandlestickModelMapper_SetTimestamp_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_Timestamp_Callback = int (*)();
    using QVCandlestickModelMapper_SetOpen_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_Open_Callback = int (*)();
    using QVCandlestickModelMapper_SetHigh_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_High_Callback = int (*)();
    using QVCandlestickModelMapper_SetLow_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_Low_Callback = int (*)();
    using QVCandlestickModelMapper_SetClose_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_Close_Callback = int (*)();
    using QVCandlestickModelMapper_SetFirstSetSection_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_FirstSetSection_Callback = int (*)();
    using QVCandlestickModelMapper_SetLastSetSection_Callback = void (*)(QVCandlestickModelMapper*, int);
    using QVCandlestickModelMapper_LastSetSection_Callback = int (*)();
    using QVCandlestickModelMapper_Sender_Callback = QObject* (*)();
    using QVCandlestickModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVCandlestickModelMapper_Receivers_Callback = int (*)(const QVCandlestickModelMapper*, const char*);
    using QVCandlestickModelMapper_IsSignalConnected_Callback = bool (*)(const QVCandlestickModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVCandlestickModelMapper_MetaObject_Callback qvcandlestickmodelmapper_metaobject_callback = nullptr;
    QVCandlestickModelMapper_Metacast_Callback qvcandlestickmodelmapper_metacast_callback = nullptr;
    QVCandlestickModelMapper_Metacall_Callback qvcandlestickmodelmapper_metacall_callback = nullptr;
    QVCandlestickModelMapper_Orientation_Callback qvcandlestickmodelmapper_orientation_callback = nullptr;
    QVCandlestickModelMapper_Event_Callback qvcandlestickmodelmapper_event_callback = nullptr;
    QVCandlestickModelMapper_EventFilter_Callback qvcandlestickmodelmapper_eventfilter_callback = nullptr;
    QVCandlestickModelMapper_TimerEvent_Callback qvcandlestickmodelmapper_timerevent_callback = nullptr;
    QVCandlestickModelMapper_ChildEvent_Callback qvcandlestickmodelmapper_childevent_callback = nullptr;
    QVCandlestickModelMapper_CustomEvent_Callback qvcandlestickmodelmapper_customevent_callback = nullptr;
    QVCandlestickModelMapper_ConnectNotify_Callback qvcandlestickmodelmapper_connectnotify_callback = nullptr;
    QVCandlestickModelMapper_DisconnectNotify_Callback qvcandlestickmodelmapper_disconnectnotify_callback = nullptr;
    QVCandlestickModelMapper_SetTimestamp_Callback qvcandlestickmodelmapper_settimestamp_callback = nullptr;
    QVCandlestickModelMapper_Timestamp_Callback qvcandlestickmodelmapper_timestamp_callback = nullptr;
    QVCandlestickModelMapper_SetOpen_Callback qvcandlestickmodelmapper_setopen_callback = nullptr;
    QVCandlestickModelMapper_Open_Callback qvcandlestickmodelmapper_open_callback = nullptr;
    QVCandlestickModelMapper_SetHigh_Callback qvcandlestickmodelmapper_sethigh_callback = nullptr;
    QVCandlestickModelMapper_High_Callback qvcandlestickmodelmapper_high_callback = nullptr;
    QVCandlestickModelMapper_SetLow_Callback qvcandlestickmodelmapper_setlow_callback = nullptr;
    QVCandlestickModelMapper_Low_Callback qvcandlestickmodelmapper_low_callback = nullptr;
    QVCandlestickModelMapper_SetClose_Callback qvcandlestickmodelmapper_setclose_callback = nullptr;
    QVCandlestickModelMapper_Close_Callback qvcandlestickmodelmapper_close_callback = nullptr;
    QVCandlestickModelMapper_SetFirstSetSection_Callback qvcandlestickmodelmapper_setfirstsetsection_callback = nullptr;
    QVCandlestickModelMapper_FirstSetSection_Callback qvcandlestickmodelmapper_firstsetsection_callback = nullptr;
    QVCandlestickModelMapper_SetLastSetSection_Callback qvcandlestickmodelmapper_setlastsetsection_callback = nullptr;
    QVCandlestickModelMapper_LastSetSection_Callback qvcandlestickmodelmapper_lastsetsection_callback = nullptr;
    QVCandlestickModelMapper_Sender_Callback qvcandlestickmodelmapper_sender_callback = nullptr;
    QVCandlestickModelMapper_SenderSignalIndex_Callback qvcandlestickmodelmapper_sendersignalindex_callback = nullptr;
    QVCandlestickModelMapper_Receivers_Callback qvcandlestickmodelmapper_receivers_callback = nullptr;
    QVCandlestickModelMapper_IsSignalConnected_Callback qvcandlestickmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvcandlestickmodelmapper_metaobject_isbase = false;
    mutable bool qvcandlestickmodelmapper_metacast_isbase = false;
    mutable bool qvcandlestickmodelmapper_metacall_isbase = false;
    mutable bool qvcandlestickmodelmapper_orientation_isbase = false;
    mutable bool qvcandlestickmodelmapper_event_isbase = false;
    mutable bool qvcandlestickmodelmapper_eventfilter_isbase = false;
    mutable bool qvcandlestickmodelmapper_timerevent_isbase = false;
    mutable bool qvcandlestickmodelmapper_childevent_isbase = false;
    mutable bool qvcandlestickmodelmapper_customevent_isbase = false;
    mutable bool qvcandlestickmodelmapper_connectnotify_isbase = false;
    mutable bool qvcandlestickmodelmapper_disconnectnotify_isbase = false;
    mutable bool qvcandlestickmodelmapper_settimestamp_isbase = false;
    mutable bool qvcandlestickmodelmapper_timestamp_isbase = false;
    mutable bool qvcandlestickmodelmapper_setopen_isbase = false;
    mutable bool qvcandlestickmodelmapper_open_isbase = false;
    mutable bool qvcandlestickmodelmapper_sethigh_isbase = false;
    mutable bool qvcandlestickmodelmapper_high_isbase = false;
    mutable bool qvcandlestickmodelmapper_setlow_isbase = false;
    mutable bool qvcandlestickmodelmapper_low_isbase = false;
    mutable bool qvcandlestickmodelmapper_setclose_isbase = false;
    mutable bool qvcandlestickmodelmapper_close_isbase = false;
    mutable bool qvcandlestickmodelmapper_setfirstsetsection_isbase = false;
    mutable bool qvcandlestickmodelmapper_firstsetsection_isbase = false;
    mutable bool qvcandlestickmodelmapper_setlastsetsection_isbase = false;
    mutable bool qvcandlestickmodelmapper_lastsetsection_isbase = false;
    mutable bool qvcandlestickmodelmapper_sender_isbase = false;
    mutable bool qvcandlestickmodelmapper_sendersignalindex_isbase = false;
    mutable bool qvcandlestickmodelmapper_receivers_isbase = false;
    mutable bool qvcandlestickmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQVCandlestickModelMapper() : QVCandlestickModelMapper() {};
    VirtualQVCandlestickModelMapper(QObject* parent) : QVCandlestickModelMapper(parent) {};

    // Callback setters
    inline void setQVCandlestickModelMapper_MetaObject_Callback(QVCandlestickModelMapper_MetaObject_Callback cb) { qvcandlestickmodelmapper_metaobject_callback = cb; }
    inline void setQVCandlestickModelMapper_Metacast_Callback(QVCandlestickModelMapper_Metacast_Callback cb) { qvcandlestickmodelmapper_metacast_callback = cb; }
    inline void setQVCandlestickModelMapper_Metacall_Callback(QVCandlestickModelMapper_Metacall_Callback cb) { qvcandlestickmodelmapper_metacall_callback = cb; }
    inline void setQVCandlestickModelMapper_Orientation_Callback(QVCandlestickModelMapper_Orientation_Callback cb) { qvcandlestickmodelmapper_orientation_callback = cb; }
    inline void setQVCandlestickModelMapper_Event_Callback(QVCandlestickModelMapper_Event_Callback cb) { qvcandlestickmodelmapper_event_callback = cb; }
    inline void setQVCandlestickModelMapper_EventFilter_Callback(QVCandlestickModelMapper_EventFilter_Callback cb) { qvcandlestickmodelmapper_eventfilter_callback = cb; }
    inline void setQVCandlestickModelMapper_TimerEvent_Callback(QVCandlestickModelMapper_TimerEvent_Callback cb) { qvcandlestickmodelmapper_timerevent_callback = cb; }
    inline void setQVCandlestickModelMapper_ChildEvent_Callback(QVCandlestickModelMapper_ChildEvent_Callback cb) { qvcandlestickmodelmapper_childevent_callback = cb; }
    inline void setQVCandlestickModelMapper_CustomEvent_Callback(QVCandlestickModelMapper_CustomEvent_Callback cb) { qvcandlestickmodelmapper_customevent_callback = cb; }
    inline void setQVCandlestickModelMapper_ConnectNotify_Callback(QVCandlestickModelMapper_ConnectNotify_Callback cb) { qvcandlestickmodelmapper_connectnotify_callback = cb; }
    inline void setQVCandlestickModelMapper_DisconnectNotify_Callback(QVCandlestickModelMapper_DisconnectNotify_Callback cb) { qvcandlestickmodelmapper_disconnectnotify_callback = cb; }
    inline void setQVCandlestickModelMapper_SetTimestamp_Callback(QVCandlestickModelMapper_SetTimestamp_Callback cb) { qvcandlestickmodelmapper_settimestamp_callback = cb; }
    inline void setQVCandlestickModelMapper_Timestamp_Callback(QVCandlestickModelMapper_Timestamp_Callback cb) { qvcandlestickmodelmapper_timestamp_callback = cb; }
    inline void setQVCandlestickModelMapper_SetOpen_Callback(QVCandlestickModelMapper_SetOpen_Callback cb) { qvcandlestickmodelmapper_setopen_callback = cb; }
    inline void setQVCandlestickModelMapper_Open_Callback(QVCandlestickModelMapper_Open_Callback cb) { qvcandlestickmodelmapper_open_callback = cb; }
    inline void setQVCandlestickModelMapper_SetHigh_Callback(QVCandlestickModelMapper_SetHigh_Callback cb) { qvcandlestickmodelmapper_sethigh_callback = cb; }
    inline void setQVCandlestickModelMapper_High_Callback(QVCandlestickModelMapper_High_Callback cb) { qvcandlestickmodelmapper_high_callback = cb; }
    inline void setQVCandlestickModelMapper_SetLow_Callback(QVCandlestickModelMapper_SetLow_Callback cb) { qvcandlestickmodelmapper_setlow_callback = cb; }
    inline void setQVCandlestickModelMapper_Low_Callback(QVCandlestickModelMapper_Low_Callback cb) { qvcandlestickmodelmapper_low_callback = cb; }
    inline void setQVCandlestickModelMapper_SetClose_Callback(QVCandlestickModelMapper_SetClose_Callback cb) { qvcandlestickmodelmapper_setclose_callback = cb; }
    inline void setQVCandlestickModelMapper_Close_Callback(QVCandlestickModelMapper_Close_Callback cb) { qvcandlestickmodelmapper_close_callback = cb; }
    inline void setQVCandlestickModelMapper_SetFirstSetSection_Callback(QVCandlestickModelMapper_SetFirstSetSection_Callback cb) { qvcandlestickmodelmapper_setfirstsetsection_callback = cb; }
    inline void setQVCandlestickModelMapper_FirstSetSection_Callback(QVCandlestickModelMapper_FirstSetSection_Callback cb) { qvcandlestickmodelmapper_firstsetsection_callback = cb; }
    inline void setQVCandlestickModelMapper_SetLastSetSection_Callback(QVCandlestickModelMapper_SetLastSetSection_Callback cb) { qvcandlestickmodelmapper_setlastsetsection_callback = cb; }
    inline void setQVCandlestickModelMapper_LastSetSection_Callback(QVCandlestickModelMapper_LastSetSection_Callback cb) { qvcandlestickmodelmapper_lastsetsection_callback = cb; }
    inline void setQVCandlestickModelMapper_Sender_Callback(QVCandlestickModelMapper_Sender_Callback cb) { qvcandlestickmodelmapper_sender_callback = cb; }
    inline void setQVCandlestickModelMapper_SenderSignalIndex_Callback(QVCandlestickModelMapper_SenderSignalIndex_Callback cb) { qvcandlestickmodelmapper_sendersignalindex_callback = cb; }
    inline void setQVCandlestickModelMapper_Receivers_Callback(QVCandlestickModelMapper_Receivers_Callback cb) { qvcandlestickmodelmapper_receivers_callback = cb; }
    inline void setQVCandlestickModelMapper_IsSignalConnected_Callback(QVCandlestickModelMapper_IsSignalConnected_Callback cb) { qvcandlestickmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVCandlestickModelMapper_MetaObject_IsBase(bool value) const { qvcandlestickmodelmapper_metaobject_isbase = value; }
    inline void setQVCandlestickModelMapper_Metacast_IsBase(bool value) const { qvcandlestickmodelmapper_metacast_isbase = value; }
    inline void setQVCandlestickModelMapper_Metacall_IsBase(bool value) const { qvcandlestickmodelmapper_metacall_isbase = value; }
    inline void setQVCandlestickModelMapper_Orientation_IsBase(bool value) const { qvcandlestickmodelmapper_orientation_isbase = value; }
    inline void setQVCandlestickModelMapper_Event_IsBase(bool value) const { qvcandlestickmodelmapper_event_isbase = value; }
    inline void setQVCandlestickModelMapper_EventFilter_IsBase(bool value) const { qvcandlestickmodelmapper_eventfilter_isbase = value; }
    inline void setQVCandlestickModelMapper_TimerEvent_IsBase(bool value) const { qvcandlestickmodelmapper_timerevent_isbase = value; }
    inline void setQVCandlestickModelMapper_ChildEvent_IsBase(bool value) const { qvcandlestickmodelmapper_childevent_isbase = value; }
    inline void setQVCandlestickModelMapper_CustomEvent_IsBase(bool value) const { qvcandlestickmodelmapper_customevent_isbase = value; }
    inline void setQVCandlestickModelMapper_ConnectNotify_IsBase(bool value) const { qvcandlestickmodelmapper_connectnotify_isbase = value; }
    inline void setQVCandlestickModelMapper_DisconnectNotify_IsBase(bool value) const { qvcandlestickmodelmapper_disconnectnotify_isbase = value; }
    inline void setQVCandlestickModelMapper_SetTimestamp_IsBase(bool value) const { qvcandlestickmodelmapper_settimestamp_isbase = value; }
    inline void setQVCandlestickModelMapper_Timestamp_IsBase(bool value) const { qvcandlestickmodelmapper_timestamp_isbase = value; }
    inline void setQVCandlestickModelMapper_SetOpen_IsBase(bool value) const { qvcandlestickmodelmapper_setopen_isbase = value; }
    inline void setQVCandlestickModelMapper_Open_IsBase(bool value) const { qvcandlestickmodelmapper_open_isbase = value; }
    inline void setQVCandlestickModelMapper_SetHigh_IsBase(bool value) const { qvcandlestickmodelmapper_sethigh_isbase = value; }
    inline void setQVCandlestickModelMapper_High_IsBase(bool value) const { qvcandlestickmodelmapper_high_isbase = value; }
    inline void setQVCandlestickModelMapper_SetLow_IsBase(bool value) const { qvcandlestickmodelmapper_setlow_isbase = value; }
    inline void setQVCandlestickModelMapper_Low_IsBase(bool value) const { qvcandlestickmodelmapper_low_isbase = value; }
    inline void setQVCandlestickModelMapper_SetClose_IsBase(bool value) const { qvcandlestickmodelmapper_setclose_isbase = value; }
    inline void setQVCandlestickModelMapper_Close_IsBase(bool value) const { qvcandlestickmodelmapper_close_isbase = value; }
    inline void setQVCandlestickModelMapper_SetFirstSetSection_IsBase(bool value) const { qvcandlestickmodelmapper_setfirstsetsection_isbase = value; }
    inline void setQVCandlestickModelMapper_FirstSetSection_IsBase(bool value) const { qvcandlestickmodelmapper_firstsetsection_isbase = value; }
    inline void setQVCandlestickModelMapper_SetLastSetSection_IsBase(bool value) const { qvcandlestickmodelmapper_setlastsetsection_isbase = value; }
    inline void setQVCandlestickModelMapper_LastSetSection_IsBase(bool value) const { qvcandlestickmodelmapper_lastsetsection_isbase = value; }
    inline void setQVCandlestickModelMapper_Sender_IsBase(bool value) const { qvcandlestickmodelmapper_sender_isbase = value; }
    inline void setQVCandlestickModelMapper_SenderSignalIndex_IsBase(bool value) const { qvcandlestickmodelmapper_sendersignalindex_isbase = value; }
    inline void setQVCandlestickModelMapper_Receivers_IsBase(bool value) const { qvcandlestickmodelmapper_receivers_isbase = value; }
    inline void setQVCandlestickModelMapper_IsSignalConnected_IsBase(bool value) const { qvcandlestickmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvcandlestickmodelmapper_metaobject_isbase) {
            qvcandlestickmodelmapper_metaobject_isbase = false;
            return QVCandlestickModelMapper::metaObject();
        }
        auto metaobject_cb = qvcandlestickmodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVCandlestickModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvcandlestickmodelmapper_metacast_isbase) {
            qvcandlestickmodelmapper_metacast_isbase = false;
            return QVCandlestickModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qvcandlestickmodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVCandlestickModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvcandlestickmodelmapper_metacall_isbase) {
            qvcandlestickmodelmapper_metacall_isbase = false;
            return QVCandlestickModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvcandlestickmodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientation orientation() const override {
        if (qvcandlestickmodelmapper_orientation_isbase) {
            qvcandlestickmodelmapper_orientation_isbase = false;
            return QVCandlestickModelMapper::orientation();
        }
        auto orientation_cb = qvcandlestickmodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QVCandlestickModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvcandlestickmodelmapper_event_isbase) {
            qvcandlestickmodelmapper_event_isbase = false;
            return QVCandlestickModelMapper::event(event);
        }
        auto event_cb = qvcandlestickmodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVCandlestickModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvcandlestickmodelmapper_eventfilter_isbase) {
            qvcandlestickmodelmapper_eventfilter_isbase = false;
            return QVCandlestickModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvcandlestickmodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVCandlestickModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvcandlestickmodelmapper_timerevent_isbase) {
            qvcandlestickmodelmapper_timerevent_isbase = false;
            QVCandlestickModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvcandlestickmodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvcandlestickmodelmapper_childevent_isbase) {
            qvcandlestickmodelmapper_childevent_isbase = false;
            QVCandlestickModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qvcandlestickmodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvcandlestickmodelmapper_customevent_isbase) {
            qvcandlestickmodelmapper_customevent_isbase = false;
            QVCandlestickModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qvcandlestickmodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvcandlestickmodelmapper_connectnotify_isbase) {
            qvcandlestickmodelmapper_connectnotify_isbase = false;
            QVCandlestickModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvcandlestickmodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvcandlestickmodelmapper_disconnectnotify_isbase) {
            qvcandlestickmodelmapper_disconnectnotify_isbase = false;
            QVCandlestickModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvcandlestickmodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setTimestamp(int timestamp) {
        if (qvcandlestickmodelmapper_settimestamp_isbase) {
            qvcandlestickmodelmapper_settimestamp_isbase = false;
            QVCandlestickModelMapper::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qvcandlestickmodelmapper_settimestamp_callback;
        if (settimestamp_cb) {
            int cbval1 = timestamp;

            settimestamp_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    int timestamp() const {
        if (qvcandlestickmodelmapper_timestamp_isbase) {
            qvcandlestickmodelmapper_timestamp_isbase = false;
            return QVCandlestickModelMapper::timestamp();
        }
        auto timestamp_cb = qvcandlestickmodelmapper_timestamp_callback;
        if (timestamp_cb) {
            int callback_ret = timestamp_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::timestamp();
    }

    // Virtual method for C ABI access and custom callback
    void setOpen(int open) {
        if (qvcandlestickmodelmapper_setopen_isbase) {
            qvcandlestickmodelmapper_setopen_isbase = false;
            QVCandlestickModelMapper::setOpen(open);
            return;
        }
        auto setopen_cb = qvcandlestickmodelmapper_setopen_callback;
        if (setopen_cb) {
            int cbval1 = open;

            setopen_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setOpen(open);
    }

    // Virtual method for C ABI access and custom callback
    int open() const {
        if (qvcandlestickmodelmapper_open_isbase) {
            qvcandlestickmodelmapper_open_isbase = false;
            return QVCandlestickModelMapper::open();
        }
        auto open_cb = qvcandlestickmodelmapper_open_callback;
        if (open_cb) {
            int callback_ret = open_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::open();
    }

    // Virtual method for C ABI access and custom callback
    void setHigh(int high) {
        if (qvcandlestickmodelmapper_sethigh_isbase) {
            qvcandlestickmodelmapper_sethigh_isbase = false;
            QVCandlestickModelMapper::setHigh(high);
            return;
        }
        auto sethigh_cb = qvcandlestickmodelmapper_sethigh_callback;
        if (sethigh_cb) {
            int cbval1 = high;

            sethigh_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setHigh(high);
    }

    // Virtual method for C ABI access and custom callback
    int high() const {
        if (qvcandlestickmodelmapper_high_isbase) {
            qvcandlestickmodelmapper_high_isbase = false;
            return QVCandlestickModelMapper::high();
        }
        auto high_cb = qvcandlestickmodelmapper_high_callback;
        if (high_cb) {
            int callback_ret = high_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::high();
    }

    // Virtual method for C ABI access and custom callback
    void setLow(int low) {
        if (qvcandlestickmodelmapper_setlow_isbase) {
            qvcandlestickmodelmapper_setlow_isbase = false;
            QVCandlestickModelMapper::setLow(low);
            return;
        }
        auto setlow_cb = qvcandlestickmodelmapper_setlow_callback;
        if (setlow_cb) {
            int cbval1 = low;

            setlow_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setLow(low);
    }

    // Virtual method for C ABI access and custom callback
    int low() const {
        if (qvcandlestickmodelmapper_low_isbase) {
            qvcandlestickmodelmapper_low_isbase = false;
            return QVCandlestickModelMapper::low();
        }
        auto low_cb = qvcandlestickmodelmapper_low_callback;
        if (low_cb) {
            int callback_ret = low_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::low();
    }

    // Virtual method for C ABI access and custom callback
    void setClose(int close) {
        if (qvcandlestickmodelmapper_setclose_isbase) {
            qvcandlestickmodelmapper_setclose_isbase = false;
            QVCandlestickModelMapper::setClose(close);
            return;
        }
        auto setclose_cb = qvcandlestickmodelmapper_setclose_callback;
        if (setclose_cb) {
            int cbval1 = close;

            setclose_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setClose(close);
    }

    // Virtual method for C ABI access and custom callback
    int close() const {
        if (qvcandlestickmodelmapper_close_isbase) {
            qvcandlestickmodelmapper_close_isbase = false;
            return QVCandlestickModelMapper::close();
        }
        auto close_cb = qvcandlestickmodelmapper_close_callback;
        if (close_cb) {
            int callback_ret = close_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::close();
    }

    // Virtual method for C ABI access and custom callback
    void setFirstSetSection(int firstSetSection) {
        if (qvcandlestickmodelmapper_setfirstsetsection_isbase) {
            qvcandlestickmodelmapper_setfirstsetsection_isbase = false;
            QVCandlestickModelMapper::setFirstSetSection(firstSetSection);
            return;
        }
        auto setfirstsetsection_cb = qvcandlestickmodelmapper_setfirstsetsection_callback;
        if (setfirstsetsection_cb) {
            int cbval1 = firstSetSection;

            setfirstsetsection_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setFirstSetSection(firstSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int firstSetSection() const {
        if (qvcandlestickmodelmapper_firstsetsection_isbase) {
            qvcandlestickmodelmapper_firstsetsection_isbase = false;
            return QVCandlestickModelMapper::firstSetSection();
        }
        auto firstsetsection_cb = qvcandlestickmodelmapper_firstsetsection_callback;
        if (firstsetsection_cb) {
            int callback_ret = firstsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::firstSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setLastSetSection(int lastSetSection) {
        if (qvcandlestickmodelmapper_setlastsetsection_isbase) {
            qvcandlestickmodelmapper_setlastsetsection_isbase = false;
            QVCandlestickModelMapper::setLastSetSection(lastSetSection);
            return;
        }
        auto setlastsetsection_cb = qvcandlestickmodelmapper_setlastsetsection_callback;
        if (setlastsetsection_cb) {
            int cbval1 = lastSetSection;

            setlastsetsection_cb(this, cbval1);
            return;
        }
        QVCandlestickModelMapper::setLastSetSection(lastSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int lastSetSection() const {
        if (qvcandlestickmodelmapper_lastsetsection_isbase) {
            qvcandlestickmodelmapper_lastsetsection_isbase = false;
            return QVCandlestickModelMapper::lastSetSection();
        }
        auto lastsetsection_cb = qvcandlestickmodelmapper_lastsetsection_callback;
        if (lastsetsection_cb) {
            int callback_ret = lastsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::lastSetSection();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvcandlestickmodelmapper_sender_isbase) {
            qvcandlestickmodelmapper_sender_isbase = false;
            return QVCandlestickModelMapper::sender();
        }
        auto sender_cb = qvcandlestickmodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVCandlestickModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvcandlestickmodelmapper_sendersignalindex_isbase) {
            qvcandlestickmodelmapper_sendersignalindex_isbase = false;
            return QVCandlestickModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvcandlestickmodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvcandlestickmodelmapper_receivers_isbase) {
            qvcandlestickmodelmapper_receivers_isbase = false;
            return QVCandlestickModelMapper::receivers(signal);
        }
        auto receivers_cb = qvcandlestickmodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVCandlestickModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvcandlestickmodelmapper_issignalconnected_isbase) {
            qvcandlestickmodelmapper_issignalconnected_isbase = false;
            return QVCandlestickModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvcandlestickmodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVCandlestickModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVCandlestickModelMapper_TimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
    friend void QVCandlestickModelMapper_SuperTimerEvent(QVCandlestickModelMapper* self, QTimerEvent* event);
    friend void QVCandlestickModelMapper_ChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
    friend void QVCandlestickModelMapper_SuperChildEvent(QVCandlestickModelMapper* self, QChildEvent* event);
    friend void QVCandlestickModelMapper_CustomEvent(QVCandlestickModelMapper* self, QEvent* event);
    friend void QVCandlestickModelMapper_SuperCustomEvent(QVCandlestickModelMapper* self, QEvent* event);
    friend void QVCandlestickModelMapper_ConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QVCandlestickModelMapper_SuperConnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QVCandlestickModelMapper_DisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QVCandlestickModelMapper_SuperDisconnectNotify(QVCandlestickModelMapper* self, const QMetaMethod* signal);
    friend void QVCandlestickModelMapper_SetTimestamp(QVCandlestickModelMapper* self, int timestamp);
    friend void QVCandlestickModelMapper_SuperSetTimestamp(QVCandlestickModelMapper* self, int timestamp);
    friend int QVCandlestickModelMapper_Timestamp(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperTimestamp(const QVCandlestickModelMapper* self);
    friend void QVCandlestickModelMapper_SetOpen(QVCandlestickModelMapper* self, int open);
    friend void QVCandlestickModelMapper_SuperSetOpen(QVCandlestickModelMapper* self, int open);
    friend int QVCandlestickModelMapper_Open(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperOpen(const QVCandlestickModelMapper* self);
    friend void QVCandlestickModelMapper_SetHigh(QVCandlestickModelMapper* self, int high);
    friend void QVCandlestickModelMapper_SuperSetHigh(QVCandlestickModelMapper* self, int high);
    friend int QVCandlestickModelMapper_High(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperHigh(const QVCandlestickModelMapper* self);
    friend void QVCandlestickModelMapper_SetLow(QVCandlestickModelMapper* self, int low);
    friend void QVCandlestickModelMapper_SuperSetLow(QVCandlestickModelMapper* self, int low);
    friend int QVCandlestickModelMapper_Low(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperLow(const QVCandlestickModelMapper* self);
    friend void QVCandlestickModelMapper_SetClose(QVCandlestickModelMapper* self, int close);
    friend void QVCandlestickModelMapper_SuperSetClose(QVCandlestickModelMapper* self, int close);
    friend int QVCandlestickModelMapper_Close(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperClose(const QVCandlestickModelMapper* self);
    friend void QVCandlestickModelMapper_SetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection);
    friend void QVCandlestickModelMapper_SuperSetFirstSetSection(QVCandlestickModelMapper* self, int firstSetSection);
    friend int QVCandlestickModelMapper_FirstSetSection(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperFirstSetSection(const QVCandlestickModelMapper* self);
    friend void QVCandlestickModelMapper_SetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection);
    friend void QVCandlestickModelMapper_SuperSetLastSetSection(QVCandlestickModelMapper* self, int lastSetSection);
    friend int QVCandlestickModelMapper_LastSetSection(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperLastSetSection(const QVCandlestickModelMapper* self);
    friend QObject* QVCandlestickModelMapper_Sender(const QVCandlestickModelMapper* self);
    friend QObject* QVCandlestickModelMapper_SuperSender(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SenderSignalIndex(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_SuperSenderSignalIndex(const QVCandlestickModelMapper* self);
    friend int QVCandlestickModelMapper_Receivers(const QVCandlestickModelMapper* self, const char* signal);
    friend int QVCandlestickModelMapper_SuperReceivers(const QVCandlestickModelMapper* self, const char* signal);
    friend bool QVCandlestickModelMapper_IsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal);
    friend bool QVCandlestickModelMapper_SuperIsSignalConnected(const QVCandlestickModelMapper* self, const QMetaMethod* signal);
};

#endif
