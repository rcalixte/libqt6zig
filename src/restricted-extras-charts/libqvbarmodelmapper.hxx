#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVBarModelMapper so that we can call protected methods
class VirtualQVBarModelMapper final : public QVBarModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQVBarModelMapper = true;

    // Virtual class public types (including callbacks)
    using QVBarModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QVBarModelMapper_Metacast_Callback = void* (*)(QVBarModelMapper*, const char*);
    using QVBarModelMapper_Metacall_Callback = int (*)(QVBarModelMapper*, int, int, void**);
    using QVBarModelMapper_Event_Callback = bool (*)(QVBarModelMapper*, QEvent*);
    using QVBarModelMapper_EventFilter_Callback = bool (*)(QVBarModelMapper*, QObject*, QEvent*);
    using QVBarModelMapper_TimerEvent_Callback = void (*)(QVBarModelMapper*, QTimerEvent*);
    using QVBarModelMapper_ChildEvent_Callback = void (*)(QVBarModelMapper*, QChildEvent*);
    using QVBarModelMapper_CustomEvent_Callback = void (*)(QVBarModelMapper*, QEvent*);
    using QVBarModelMapper_ConnectNotify_Callback = void (*)(QVBarModelMapper*, QMetaMethod*);
    using QVBarModelMapper_DisconnectNotify_Callback = void (*)(QVBarModelMapper*, QMetaMethod*);
    using QVBarModelMapper_First_Callback = int (*)();
    using QVBarModelMapper_SetFirst_Callback = void (*)(QVBarModelMapper*, int);
    using QVBarModelMapper_Count_Callback = int (*)();
    using QVBarModelMapper_SetCount_Callback = void (*)(QVBarModelMapper*, int);
    using QVBarModelMapper_FirstBarSetSection_Callback = int (*)();
    using QVBarModelMapper_SetFirstBarSetSection_Callback = void (*)(QVBarModelMapper*, int);
    using QVBarModelMapper_LastBarSetSection_Callback = int (*)();
    using QVBarModelMapper_SetLastBarSetSection_Callback = void (*)(QVBarModelMapper*, int);
    using QVBarModelMapper_Orientation_Callback = int (*)();
    using QVBarModelMapper_SetOrientation_Callback = void (*)(QVBarModelMapper*, int);
    using QVBarModelMapper_Sender_Callback = QObject* (*)();
    using QVBarModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVBarModelMapper_Receivers_Callback = int (*)(const QVBarModelMapper*, const char*);
    using QVBarModelMapper_IsSignalConnected_Callback = bool (*)(const QVBarModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVBarModelMapper_MetaObject_Callback qvbarmodelmapper_metaobject_callback = nullptr;
    QVBarModelMapper_Metacast_Callback qvbarmodelmapper_metacast_callback = nullptr;
    QVBarModelMapper_Metacall_Callback qvbarmodelmapper_metacall_callback = nullptr;
    QVBarModelMapper_Event_Callback qvbarmodelmapper_event_callback = nullptr;
    QVBarModelMapper_EventFilter_Callback qvbarmodelmapper_eventfilter_callback = nullptr;
    QVBarModelMapper_TimerEvent_Callback qvbarmodelmapper_timerevent_callback = nullptr;
    QVBarModelMapper_ChildEvent_Callback qvbarmodelmapper_childevent_callback = nullptr;
    QVBarModelMapper_CustomEvent_Callback qvbarmodelmapper_customevent_callback = nullptr;
    QVBarModelMapper_ConnectNotify_Callback qvbarmodelmapper_connectnotify_callback = nullptr;
    QVBarModelMapper_DisconnectNotify_Callback qvbarmodelmapper_disconnectnotify_callback = nullptr;
    QVBarModelMapper_First_Callback qvbarmodelmapper_first_callback = nullptr;
    QVBarModelMapper_SetFirst_Callback qvbarmodelmapper_setfirst_callback = nullptr;
    QVBarModelMapper_Count_Callback qvbarmodelmapper_count_callback = nullptr;
    QVBarModelMapper_SetCount_Callback qvbarmodelmapper_setcount_callback = nullptr;
    QVBarModelMapper_FirstBarSetSection_Callback qvbarmodelmapper_firstbarsetsection_callback = nullptr;
    QVBarModelMapper_SetFirstBarSetSection_Callback qvbarmodelmapper_setfirstbarsetsection_callback = nullptr;
    QVBarModelMapper_LastBarSetSection_Callback qvbarmodelmapper_lastbarsetsection_callback = nullptr;
    QVBarModelMapper_SetLastBarSetSection_Callback qvbarmodelmapper_setlastbarsetsection_callback = nullptr;
    QVBarModelMapper_Orientation_Callback qvbarmodelmapper_orientation_callback = nullptr;
    QVBarModelMapper_SetOrientation_Callback qvbarmodelmapper_setorientation_callback = nullptr;
    QVBarModelMapper_Sender_Callback qvbarmodelmapper_sender_callback = nullptr;
    QVBarModelMapper_SenderSignalIndex_Callback qvbarmodelmapper_sendersignalindex_callback = nullptr;
    QVBarModelMapper_Receivers_Callback qvbarmodelmapper_receivers_callback = nullptr;
    QVBarModelMapper_IsSignalConnected_Callback qvbarmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvbarmodelmapper_metaobject_isbase = false;
    mutable bool qvbarmodelmapper_metacast_isbase = false;
    mutable bool qvbarmodelmapper_metacall_isbase = false;
    mutable bool qvbarmodelmapper_event_isbase = false;
    mutable bool qvbarmodelmapper_eventfilter_isbase = false;
    mutable bool qvbarmodelmapper_timerevent_isbase = false;
    mutable bool qvbarmodelmapper_childevent_isbase = false;
    mutable bool qvbarmodelmapper_customevent_isbase = false;
    mutable bool qvbarmodelmapper_connectnotify_isbase = false;
    mutable bool qvbarmodelmapper_disconnectnotify_isbase = false;
    mutable bool qvbarmodelmapper_first_isbase = false;
    mutable bool qvbarmodelmapper_setfirst_isbase = false;
    mutable bool qvbarmodelmapper_count_isbase = false;
    mutable bool qvbarmodelmapper_setcount_isbase = false;
    mutable bool qvbarmodelmapper_firstbarsetsection_isbase = false;
    mutable bool qvbarmodelmapper_setfirstbarsetsection_isbase = false;
    mutable bool qvbarmodelmapper_lastbarsetsection_isbase = false;
    mutable bool qvbarmodelmapper_setlastbarsetsection_isbase = false;
    mutable bool qvbarmodelmapper_orientation_isbase = false;
    mutable bool qvbarmodelmapper_setorientation_isbase = false;
    mutable bool qvbarmodelmapper_sender_isbase = false;
    mutable bool qvbarmodelmapper_sendersignalindex_isbase = false;
    mutable bool qvbarmodelmapper_receivers_isbase = false;
    mutable bool qvbarmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQVBarModelMapper() : QVBarModelMapper() {};
    VirtualQVBarModelMapper(QObject* parent) : QVBarModelMapper(parent) {};

    // Callback setters
    inline void setQVBarModelMapper_MetaObject_Callback(QVBarModelMapper_MetaObject_Callback cb) { qvbarmodelmapper_metaobject_callback = cb; }
    inline void setQVBarModelMapper_Metacast_Callback(QVBarModelMapper_Metacast_Callback cb) { qvbarmodelmapper_metacast_callback = cb; }
    inline void setQVBarModelMapper_Metacall_Callback(QVBarModelMapper_Metacall_Callback cb) { qvbarmodelmapper_metacall_callback = cb; }
    inline void setQVBarModelMapper_Event_Callback(QVBarModelMapper_Event_Callback cb) { qvbarmodelmapper_event_callback = cb; }
    inline void setQVBarModelMapper_EventFilter_Callback(QVBarModelMapper_EventFilter_Callback cb) { qvbarmodelmapper_eventfilter_callback = cb; }
    inline void setQVBarModelMapper_TimerEvent_Callback(QVBarModelMapper_TimerEvent_Callback cb) { qvbarmodelmapper_timerevent_callback = cb; }
    inline void setQVBarModelMapper_ChildEvent_Callback(QVBarModelMapper_ChildEvent_Callback cb) { qvbarmodelmapper_childevent_callback = cb; }
    inline void setQVBarModelMapper_CustomEvent_Callback(QVBarModelMapper_CustomEvent_Callback cb) { qvbarmodelmapper_customevent_callback = cb; }
    inline void setQVBarModelMapper_ConnectNotify_Callback(QVBarModelMapper_ConnectNotify_Callback cb) { qvbarmodelmapper_connectnotify_callback = cb; }
    inline void setQVBarModelMapper_DisconnectNotify_Callback(QVBarModelMapper_DisconnectNotify_Callback cb) { qvbarmodelmapper_disconnectnotify_callback = cb; }
    inline void setQVBarModelMapper_First_Callback(QVBarModelMapper_First_Callback cb) { qvbarmodelmapper_first_callback = cb; }
    inline void setQVBarModelMapper_SetFirst_Callback(QVBarModelMapper_SetFirst_Callback cb) { qvbarmodelmapper_setfirst_callback = cb; }
    inline void setQVBarModelMapper_Count_Callback(QVBarModelMapper_Count_Callback cb) { qvbarmodelmapper_count_callback = cb; }
    inline void setQVBarModelMapper_SetCount_Callback(QVBarModelMapper_SetCount_Callback cb) { qvbarmodelmapper_setcount_callback = cb; }
    inline void setQVBarModelMapper_FirstBarSetSection_Callback(QVBarModelMapper_FirstBarSetSection_Callback cb) { qvbarmodelmapper_firstbarsetsection_callback = cb; }
    inline void setQVBarModelMapper_SetFirstBarSetSection_Callback(QVBarModelMapper_SetFirstBarSetSection_Callback cb) { qvbarmodelmapper_setfirstbarsetsection_callback = cb; }
    inline void setQVBarModelMapper_LastBarSetSection_Callback(QVBarModelMapper_LastBarSetSection_Callback cb) { qvbarmodelmapper_lastbarsetsection_callback = cb; }
    inline void setQVBarModelMapper_SetLastBarSetSection_Callback(QVBarModelMapper_SetLastBarSetSection_Callback cb) { qvbarmodelmapper_setlastbarsetsection_callback = cb; }
    inline void setQVBarModelMapper_Orientation_Callback(QVBarModelMapper_Orientation_Callback cb) { qvbarmodelmapper_orientation_callback = cb; }
    inline void setQVBarModelMapper_SetOrientation_Callback(QVBarModelMapper_SetOrientation_Callback cb) { qvbarmodelmapper_setorientation_callback = cb; }
    inline void setQVBarModelMapper_Sender_Callback(QVBarModelMapper_Sender_Callback cb) { qvbarmodelmapper_sender_callback = cb; }
    inline void setQVBarModelMapper_SenderSignalIndex_Callback(QVBarModelMapper_SenderSignalIndex_Callback cb) { qvbarmodelmapper_sendersignalindex_callback = cb; }
    inline void setQVBarModelMapper_Receivers_Callback(QVBarModelMapper_Receivers_Callback cb) { qvbarmodelmapper_receivers_callback = cb; }
    inline void setQVBarModelMapper_IsSignalConnected_Callback(QVBarModelMapper_IsSignalConnected_Callback cb) { qvbarmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVBarModelMapper_MetaObject_IsBase(bool value) const { qvbarmodelmapper_metaobject_isbase = value; }
    inline void setQVBarModelMapper_Metacast_IsBase(bool value) const { qvbarmodelmapper_metacast_isbase = value; }
    inline void setQVBarModelMapper_Metacall_IsBase(bool value) const { qvbarmodelmapper_metacall_isbase = value; }
    inline void setQVBarModelMapper_Event_IsBase(bool value) const { qvbarmodelmapper_event_isbase = value; }
    inline void setQVBarModelMapper_EventFilter_IsBase(bool value) const { qvbarmodelmapper_eventfilter_isbase = value; }
    inline void setQVBarModelMapper_TimerEvent_IsBase(bool value) const { qvbarmodelmapper_timerevent_isbase = value; }
    inline void setQVBarModelMapper_ChildEvent_IsBase(bool value) const { qvbarmodelmapper_childevent_isbase = value; }
    inline void setQVBarModelMapper_CustomEvent_IsBase(bool value) const { qvbarmodelmapper_customevent_isbase = value; }
    inline void setQVBarModelMapper_ConnectNotify_IsBase(bool value) const { qvbarmodelmapper_connectnotify_isbase = value; }
    inline void setQVBarModelMapper_DisconnectNotify_IsBase(bool value) const { qvbarmodelmapper_disconnectnotify_isbase = value; }
    inline void setQVBarModelMapper_First_IsBase(bool value) const { qvbarmodelmapper_first_isbase = value; }
    inline void setQVBarModelMapper_SetFirst_IsBase(bool value) const { qvbarmodelmapper_setfirst_isbase = value; }
    inline void setQVBarModelMapper_Count_IsBase(bool value) const { qvbarmodelmapper_count_isbase = value; }
    inline void setQVBarModelMapper_SetCount_IsBase(bool value) const { qvbarmodelmapper_setcount_isbase = value; }
    inline void setQVBarModelMapper_FirstBarSetSection_IsBase(bool value) const { qvbarmodelmapper_firstbarsetsection_isbase = value; }
    inline void setQVBarModelMapper_SetFirstBarSetSection_IsBase(bool value) const { qvbarmodelmapper_setfirstbarsetsection_isbase = value; }
    inline void setQVBarModelMapper_LastBarSetSection_IsBase(bool value) const { qvbarmodelmapper_lastbarsetsection_isbase = value; }
    inline void setQVBarModelMapper_SetLastBarSetSection_IsBase(bool value) const { qvbarmodelmapper_setlastbarsetsection_isbase = value; }
    inline void setQVBarModelMapper_Orientation_IsBase(bool value) const { qvbarmodelmapper_orientation_isbase = value; }
    inline void setQVBarModelMapper_SetOrientation_IsBase(bool value) const { qvbarmodelmapper_setorientation_isbase = value; }
    inline void setQVBarModelMapper_Sender_IsBase(bool value) const { qvbarmodelmapper_sender_isbase = value; }
    inline void setQVBarModelMapper_SenderSignalIndex_IsBase(bool value) const { qvbarmodelmapper_sendersignalindex_isbase = value; }
    inline void setQVBarModelMapper_Receivers_IsBase(bool value) const { qvbarmodelmapper_receivers_isbase = value; }
    inline void setQVBarModelMapper_IsSignalConnected_IsBase(bool value) const { qvbarmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvbarmodelmapper_metaobject_isbase) {
            qvbarmodelmapper_metaobject_isbase = false;
            return QVBarModelMapper::metaObject();
        }
        auto metaobject_cb = qvbarmodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVBarModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvbarmodelmapper_metacast_isbase) {
            qvbarmodelmapper_metacast_isbase = false;
            return QVBarModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qvbarmodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVBarModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvbarmodelmapper_metacall_isbase) {
            qvbarmodelmapper_metacall_isbase = false;
            return QVBarModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvbarmodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvbarmodelmapper_event_isbase) {
            qvbarmodelmapper_event_isbase = false;
            return QVBarModelMapper::event(event);
        }
        auto event_cb = qvbarmodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVBarModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvbarmodelmapper_eventfilter_isbase) {
            qvbarmodelmapper_eventfilter_isbase = false;
            return QVBarModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvbarmodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVBarModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvbarmodelmapper_timerevent_isbase) {
            qvbarmodelmapper_timerevent_isbase = false;
            QVBarModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvbarmodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvbarmodelmapper_childevent_isbase) {
            qvbarmodelmapper_childevent_isbase = false;
            QVBarModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qvbarmodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvbarmodelmapper_customevent_isbase) {
            qvbarmodelmapper_customevent_isbase = false;
            QVBarModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qvbarmodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvbarmodelmapper_connectnotify_isbase) {
            qvbarmodelmapper_connectnotify_isbase = false;
            QVBarModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvbarmodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvbarmodelmapper_disconnectnotify_isbase) {
            qvbarmodelmapper_disconnectnotify_isbase = false;
            QVBarModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvbarmodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvbarmodelmapper_first_isbase) {
            qvbarmodelmapper_first_isbase = false;
            return QVBarModelMapper::first();
        }
        auto first_cb = qvbarmodelmapper_first_callback;
        if (first_cb) {
            int callback_ret = first_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::first();
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvbarmodelmapper_setfirst_isbase) {
            qvbarmodelmapper_setfirst_isbase = false;
            QVBarModelMapper::setFirst(first);
            return;
        }
        auto setfirst_cb = qvbarmodelmapper_setfirst_callback;
        if (setfirst_cb) {
            int cbval1 = first;

            setfirst_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::setFirst(first);
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvbarmodelmapper_count_isbase) {
            qvbarmodelmapper_count_isbase = false;
            return QVBarModelMapper::count();
        }
        auto count_cb = qvbarmodelmapper_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::count();
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvbarmodelmapper_setcount_isbase) {
            qvbarmodelmapper_setcount_isbase = false;
            QVBarModelMapper::setCount(count);
            return;
        }
        auto setcount_cb = qvbarmodelmapper_setcount_callback;
        if (setcount_cb) {
            int cbval1 = count;

            setcount_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::setCount(count);
    }

    // Virtual method for C ABI access and custom callback
    int firstBarSetSection() const {
        if (qvbarmodelmapper_firstbarsetsection_isbase) {
            qvbarmodelmapper_firstbarsetsection_isbase = false;
            return QVBarModelMapper::firstBarSetSection();
        }
        auto firstbarsetsection_cb = qvbarmodelmapper_firstbarsetsection_callback;
        if (firstbarsetsection_cb) {
            int callback_ret = firstbarsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::firstBarSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBarSetSection(int firstBarSetSection) {
        if (qvbarmodelmapper_setfirstbarsetsection_isbase) {
            qvbarmodelmapper_setfirstbarsetsection_isbase = false;
            QVBarModelMapper::setFirstBarSetSection(firstBarSetSection);
            return;
        }
        auto setfirstbarsetsection_cb = qvbarmodelmapper_setfirstbarsetsection_callback;
        if (setfirstbarsetsection_cb) {
            int cbval1 = firstBarSetSection;

            setfirstbarsetsection_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::setFirstBarSetSection(firstBarSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int lastBarSetSection() const {
        if (qvbarmodelmapper_lastbarsetsection_isbase) {
            qvbarmodelmapper_lastbarsetsection_isbase = false;
            return QVBarModelMapper::lastBarSetSection();
        }
        auto lastbarsetsection_cb = qvbarmodelmapper_lastbarsetsection_callback;
        if (lastbarsetsection_cb) {
            int callback_ret = lastbarsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::lastBarSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setLastBarSetSection(int lastBarSetSection) {
        if (qvbarmodelmapper_setlastbarsetsection_isbase) {
            qvbarmodelmapper_setlastbarsetsection_isbase = false;
            QVBarModelMapper::setLastBarSetSection(lastBarSetSection);
            return;
        }
        auto setlastbarsetsection_cb = qvbarmodelmapper_setlastbarsetsection_callback;
        if (setlastbarsetsection_cb) {
            int cbval1 = lastBarSetSection;

            setlastbarsetsection_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::setLastBarSetSection(lastBarSetSection);
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvbarmodelmapper_orientation_isbase) {
            qvbarmodelmapper_orientation_isbase = false;
            return QVBarModelMapper::orientation();
        }
        auto orientation_cb = qvbarmodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QVBarModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvbarmodelmapper_setorientation_isbase) {
            qvbarmodelmapper_setorientation_isbase = false;
            QVBarModelMapper::setOrientation(orientation);
            return;
        }
        auto setorientation_cb = qvbarmodelmapper_setorientation_callback;
        if (setorientation_cb) {
            int cbval1 = static_cast<int>(orientation);

            setorientation_cb(this, cbval1);
            return;
        }
        QVBarModelMapper::setOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvbarmodelmapper_sender_isbase) {
            qvbarmodelmapper_sender_isbase = false;
            return QVBarModelMapper::sender();
        }
        auto sender_cb = qvbarmodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVBarModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvbarmodelmapper_sendersignalindex_isbase) {
            qvbarmodelmapper_sendersignalindex_isbase = false;
            return QVBarModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvbarmodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvbarmodelmapper_receivers_isbase) {
            qvbarmodelmapper_receivers_isbase = false;
            return QVBarModelMapper::receivers(signal);
        }
        auto receivers_cb = qvbarmodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVBarModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvbarmodelmapper_issignalconnected_isbase) {
            qvbarmodelmapper_issignalconnected_isbase = false;
            return QVBarModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvbarmodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVBarModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVBarModelMapper_TimerEvent(QVBarModelMapper* self, QTimerEvent* event);
    friend void QVBarModelMapper_SuperTimerEvent(QVBarModelMapper* self, QTimerEvent* event);
    friend void QVBarModelMapper_ChildEvent(QVBarModelMapper* self, QChildEvent* event);
    friend void QVBarModelMapper_SuperChildEvent(QVBarModelMapper* self, QChildEvent* event);
    friend void QVBarModelMapper_CustomEvent(QVBarModelMapper* self, QEvent* event);
    friend void QVBarModelMapper_SuperCustomEvent(QVBarModelMapper* self, QEvent* event);
    friend void QVBarModelMapper_ConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_SuperConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_DisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_SuperDisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend int QVBarModelMapper_First(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SuperFirst(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetFirst(QVBarModelMapper* self, int first);
    friend void QVBarModelMapper_SuperSetFirst(QVBarModelMapper* self, int first);
    friend int QVBarModelMapper_Count(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SuperCount(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetCount(QVBarModelMapper* self, int count);
    friend void QVBarModelMapper_SuperSetCount(QVBarModelMapper* self, int count);
    friend int QVBarModelMapper_FirstBarSetSection(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SuperFirstBarSetSection(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection);
    friend void QVBarModelMapper_SuperSetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection);
    friend int QVBarModelMapper_LastBarSetSection(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SuperLastBarSetSection(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection);
    friend void QVBarModelMapper_SuperSetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection);
    friend int QVBarModelMapper_Orientation(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SuperOrientation(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetOrientation(QVBarModelMapper* self, int orientation);
    friend void QVBarModelMapper_SuperSetOrientation(QVBarModelMapper* self, int orientation);
    friend QObject* QVBarModelMapper_Sender(const QVBarModelMapper* self);
    friend QObject* QVBarModelMapper_SuperSender(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SenderSignalIndex(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SuperSenderSignalIndex(const QVBarModelMapper* self);
    friend int QVBarModelMapper_Receivers(const QVBarModelMapper* self, const char* signal);
    friend int QVBarModelMapper_SuperReceivers(const QVBarModelMapper* self, const char* signal);
    friend bool QVBarModelMapper_IsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal);
    friend bool QVBarModelMapper_SuperIsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal);
};

#endif
