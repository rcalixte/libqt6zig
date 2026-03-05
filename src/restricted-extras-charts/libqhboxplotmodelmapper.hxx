#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHBoxPlotModelMapper so that we can call protected methods
class VirtualQHBoxPlotModelMapper final : public QHBoxPlotModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQHBoxPlotModelMapper = true;

    // Virtual class public types (including callbacks)
    using QHBoxPlotModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QHBoxPlotModelMapper_Metacast_Callback = void* (*)(QHBoxPlotModelMapper*, const char*);
    using QHBoxPlotModelMapper_Metacall_Callback = int (*)(QHBoxPlotModelMapper*, int, int, void**);
    using QHBoxPlotModelMapper_Event_Callback = bool (*)(QHBoxPlotModelMapper*, QEvent*);
    using QHBoxPlotModelMapper_EventFilter_Callback = bool (*)(QHBoxPlotModelMapper*, QObject*, QEvent*);
    using QHBoxPlotModelMapper_TimerEvent_Callback = void (*)(QHBoxPlotModelMapper*, QTimerEvent*);
    using QHBoxPlotModelMapper_ChildEvent_Callback = void (*)(QHBoxPlotModelMapper*, QChildEvent*);
    using QHBoxPlotModelMapper_CustomEvent_Callback = void (*)(QHBoxPlotModelMapper*, QEvent*);
    using QHBoxPlotModelMapper_ConnectNotify_Callback = void (*)(QHBoxPlotModelMapper*, QMetaMethod*);
    using QHBoxPlotModelMapper_DisconnectNotify_Callback = void (*)(QHBoxPlotModelMapper*, QMetaMethod*);
    using QHBoxPlotModelMapper_First_Callback = int (*)();
    using QHBoxPlotModelMapper_SetFirst_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_Count_Callback = int (*)();
    using QHBoxPlotModelMapper_SetCount_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_FirstBoxSetSection_Callback = int (*)();
    using QHBoxPlotModelMapper_SetFirstBoxSetSection_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_LastBoxSetSection_Callback = int (*)();
    using QHBoxPlotModelMapper_SetLastBoxSetSection_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_Orientation_Callback = int (*)();
    using QHBoxPlotModelMapper_SetOrientation_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_Sender_Callback = QObject* (*)();
    using QHBoxPlotModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHBoxPlotModelMapper_Receivers_Callback = int (*)(const QHBoxPlotModelMapper*, const char*);
    using QHBoxPlotModelMapper_IsSignalConnected_Callback = bool (*)(const QHBoxPlotModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHBoxPlotModelMapper_MetaObject_Callback qhboxplotmodelmapper_metaobject_callback = nullptr;
    QHBoxPlotModelMapper_Metacast_Callback qhboxplotmodelmapper_metacast_callback = nullptr;
    QHBoxPlotModelMapper_Metacall_Callback qhboxplotmodelmapper_metacall_callback = nullptr;
    QHBoxPlotModelMapper_Event_Callback qhboxplotmodelmapper_event_callback = nullptr;
    QHBoxPlotModelMapper_EventFilter_Callback qhboxplotmodelmapper_eventfilter_callback = nullptr;
    QHBoxPlotModelMapper_TimerEvent_Callback qhboxplotmodelmapper_timerevent_callback = nullptr;
    QHBoxPlotModelMapper_ChildEvent_Callback qhboxplotmodelmapper_childevent_callback = nullptr;
    QHBoxPlotModelMapper_CustomEvent_Callback qhboxplotmodelmapper_customevent_callback = nullptr;
    QHBoxPlotModelMapper_ConnectNotify_Callback qhboxplotmodelmapper_connectnotify_callback = nullptr;
    QHBoxPlotModelMapper_DisconnectNotify_Callback qhboxplotmodelmapper_disconnectnotify_callback = nullptr;
    QHBoxPlotModelMapper_First_Callback qhboxplotmodelmapper_first_callback = nullptr;
    QHBoxPlotModelMapper_SetFirst_Callback qhboxplotmodelmapper_setfirst_callback = nullptr;
    QHBoxPlotModelMapper_Count_Callback qhboxplotmodelmapper_count_callback = nullptr;
    QHBoxPlotModelMapper_SetCount_Callback qhboxplotmodelmapper_setcount_callback = nullptr;
    QHBoxPlotModelMapper_FirstBoxSetSection_Callback qhboxplotmodelmapper_firstboxsetsection_callback = nullptr;
    QHBoxPlotModelMapper_SetFirstBoxSetSection_Callback qhboxplotmodelmapper_setfirstboxsetsection_callback = nullptr;
    QHBoxPlotModelMapper_LastBoxSetSection_Callback qhboxplotmodelmapper_lastboxsetsection_callback = nullptr;
    QHBoxPlotModelMapper_SetLastBoxSetSection_Callback qhboxplotmodelmapper_setlastboxsetsection_callback = nullptr;
    QHBoxPlotModelMapper_Orientation_Callback qhboxplotmodelmapper_orientation_callback = nullptr;
    QHBoxPlotModelMapper_SetOrientation_Callback qhboxplotmodelmapper_setorientation_callback = nullptr;
    QHBoxPlotModelMapper_Sender_Callback qhboxplotmodelmapper_sender_callback = nullptr;
    QHBoxPlotModelMapper_SenderSignalIndex_Callback qhboxplotmodelmapper_sendersignalindex_callback = nullptr;
    QHBoxPlotModelMapper_Receivers_Callback qhboxplotmodelmapper_receivers_callback = nullptr;
    QHBoxPlotModelMapper_IsSignalConnected_Callback qhboxplotmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhboxplotmodelmapper_metaobject_isbase = false;
    mutable bool qhboxplotmodelmapper_metacast_isbase = false;
    mutable bool qhboxplotmodelmapper_metacall_isbase = false;
    mutable bool qhboxplotmodelmapper_event_isbase = false;
    mutable bool qhboxplotmodelmapper_eventfilter_isbase = false;
    mutable bool qhboxplotmodelmapper_timerevent_isbase = false;
    mutable bool qhboxplotmodelmapper_childevent_isbase = false;
    mutable bool qhboxplotmodelmapper_customevent_isbase = false;
    mutable bool qhboxplotmodelmapper_connectnotify_isbase = false;
    mutable bool qhboxplotmodelmapper_disconnectnotify_isbase = false;
    mutable bool qhboxplotmodelmapper_first_isbase = false;
    mutable bool qhboxplotmodelmapper_setfirst_isbase = false;
    mutable bool qhboxplotmodelmapper_count_isbase = false;
    mutable bool qhboxplotmodelmapper_setcount_isbase = false;
    mutable bool qhboxplotmodelmapper_firstboxsetsection_isbase = false;
    mutable bool qhboxplotmodelmapper_setfirstboxsetsection_isbase = false;
    mutable bool qhboxplotmodelmapper_lastboxsetsection_isbase = false;
    mutable bool qhboxplotmodelmapper_setlastboxsetsection_isbase = false;
    mutable bool qhboxplotmodelmapper_orientation_isbase = false;
    mutable bool qhboxplotmodelmapper_setorientation_isbase = false;
    mutable bool qhboxplotmodelmapper_sender_isbase = false;
    mutable bool qhboxplotmodelmapper_sendersignalindex_isbase = false;
    mutable bool qhboxplotmodelmapper_receivers_isbase = false;
    mutable bool qhboxplotmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQHBoxPlotModelMapper() : QHBoxPlotModelMapper() {};
    VirtualQHBoxPlotModelMapper(QObject* parent) : QHBoxPlotModelMapper(parent) {};

    // Callback setters
    inline void setQHBoxPlotModelMapper_MetaObject_Callback(QHBoxPlotModelMapper_MetaObject_Callback cb) { qhboxplotmodelmapper_metaobject_callback = cb; }
    inline void setQHBoxPlotModelMapper_Metacast_Callback(QHBoxPlotModelMapper_Metacast_Callback cb) { qhboxplotmodelmapper_metacast_callback = cb; }
    inline void setQHBoxPlotModelMapper_Metacall_Callback(QHBoxPlotModelMapper_Metacall_Callback cb) { qhboxplotmodelmapper_metacall_callback = cb; }
    inline void setQHBoxPlotModelMapper_Event_Callback(QHBoxPlotModelMapper_Event_Callback cb) { qhboxplotmodelmapper_event_callback = cb; }
    inline void setQHBoxPlotModelMapper_EventFilter_Callback(QHBoxPlotModelMapper_EventFilter_Callback cb) { qhboxplotmodelmapper_eventfilter_callback = cb; }
    inline void setQHBoxPlotModelMapper_TimerEvent_Callback(QHBoxPlotModelMapper_TimerEvent_Callback cb) { qhboxplotmodelmapper_timerevent_callback = cb; }
    inline void setQHBoxPlotModelMapper_ChildEvent_Callback(QHBoxPlotModelMapper_ChildEvent_Callback cb) { qhboxplotmodelmapper_childevent_callback = cb; }
    inline void setQHBoxPlotModelMapper_CustomEvent_Callback(QHBoxPlotModelMapper_CustomEvent_Callback cb) { qhboxplotmodelmapper_customevent_callback = cb; }
    inline void setQHBoxPlotModelMapper_ConnectNotify_Callback(QHBoxPlotModelMapper_ConnectNotify_Callback cb) { qhboxplotmodelmapper_connectnotify_callback = cb; }
    inline void setQHBoxPlotModelMapper_DisconnectNotify_Callback(QHBoxPlotModelMapper_DisconnectNotify_Callback cb) { qhboxplotmodelmapper_disconnectnotify_callback = cb; }
    inline void setQHBoxPlotModelMapper_First_Callback(QHBoxPlotModelMapper_First_Callback cb) { qhboxplotmodelmapper_first_callback = cb; }
    inline void setQHBoxPlotModelMapper_SetFirst_Callback(QHBoxPlotModelMapper_SetFirst_Callback cb) { qhboxplotmodelmapper_setfirst_callback = cb; }
    inline void setQHBoxPlotModelMapper_Count_Callback(QHBoxPlotModelMapper_Count_Callback cb) { qhboxplotmodelmapper_count_callback = cb; }
    inline void setQHBoxPlotModelMapper_SetCount_Callback(QHBoxPlotModelMapper_SetCount_Callback cb) { qhboxplotmodelmapper_setcount_callback = cb; }
    inline void setQHBoxPlotModelMapper_FirstBoxSetSection_Callback(QHBoxPlotModelMapper_FirstBoxSetSection_Callback cb) { qhboxplotmodelmapper_firstboxsetsection_callback = cb; }
    inline void setQHBoxPlotModelMapper_SetFirstBoxSetSection_Callback(QHBoxPlotModelMapper_SetFirstBoxSetSection_Callback cb) { qhboxplotmodelmapper_setfirstboxsetsection_callback = cb; }
    inline void setQHBoxPlotModelMapper_LastBoxSetSection_Callback(QHBoxPlotModelMapper_LastBoxSetSection_Callback cb) { qhboxplotmodelmapper_lastboxsetsection_callback = cb; }
    inline void setQHBoxPlotModelMapper_SetLastBoxSetSection_Callback(QHBoxPlotModelMapper_SetLastBoxSetSection_Callback cb) { qhboxplotmodelmapper_setlastboxsetsection_callback = cb; }
    inline void setQHBoxPlotModelMapper_Orientation_Callback(QHBoxPlotModelMapper_Orientation_Callback cb) { qhboxplotmodelmapper_orientation_callback = cb; }
    inline void setQHBoxPlotModelMapper_SetOrientation_Callback(QHBoxPlotModelMapper_SetOrientation_Callback cb) { qhboxplotmodelmapper_setorientation_callback = cb; }
    inline void setQHBoxPlotModelMapper_Sender_Callback(QHBoxPlotModelMapper_Sender_Callback cb) { qhboxplotmodelmapper_sender_callback = cb; }
    inline void setQHBoxPlotModelMapper_SenderSignalIndex_Callback(QHBoxPlotModelMapper_SenderSignalIndex_Callback cb) { qhboxplotmodelmapper_sendersignalindex_callback = cb; }
    inline void setQHBoxPlotModelMapper_Receivers_Callback(QHBoxPlotModelMapper_Receivers_Callback cb) { qhboxplotmodelmapper_receivers_callback = cb; }
    inline void setQHBoxPlotModelMapper_IsSignalConnected_Callback(QHBoxPlotModelMapper_IsSignalConnected_Callback cb) { qhboxplotmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHBoxPlotModelMapper_MetaObject_IsBase(bool value) const { qhboxplotmodelmapper_metaobject_isbase = value; }
    inline void setQHBoxPlotModelMapper_Metacast_IsBase(bool value) const { qhboxplotmodelmapper_metacast_isbase = value; }
    inline void setQHBoxPlotModelMapper_Metacall_IsBase(bool value) const { qhboxplotmodelmapper_metacall_isbase = value; }
    inline void setQHBoxPlotModelMapper_Event_IsBase(bool value) const { qhboxplotmodelmapper_event_isbase = value; }
    inline void setQHBoxPlotModelMapper_EventFilter_IsBase(bool value) const { qhboxplotmodelmapper_eventfilter_isbase = value; }
    inline void setQHBoxPlotModelMapper_TimerEvent_IsBase(bool value) const { qhboxplotmodelmapper_timerevent_isbase = value; }
    inline void setQHBoxPlotModelMapper_ChildEvent_IsBase(bool value) const { qhboxplotmodelmapper_childevent_isbase = value; }
    inline void setQHBoxPlotModelMapper_CustomEvent_IsBase(bool value) const { qhboxplotmodelmapper_customevent_isbase = value; }
    inline void setQHBoxPlotModelMapper_ConnectNotify_IsBase(bool value) const { qhboxplotmodelmapper_connectnotify_isbase = value; }
    inline void setQHBoxPlotModelMapper_DisconnectNotify_IsBase(bool value) const { qhboxplotmodelmapper_disconnectnotify_isbase = value; }
    inline void setQHBoxPlotModelMapper_First_IsBase(bool value) const { qhboxplotmodelmapper_first_isbase = value; }
    inline void setQHBoxPlotModelMapper_SetFirst_IsBase(bool value) const { qhboxplotmodelmapper_setfirst_isbase = value; }
    inline void setQHBoxPlotModelMapper_Count_IsBase(bool value) const { qhboxplotmodelmapper_count_isbase = value; }
    inline void setQHBoxPlotModelMapper_SetCount_IsBase(bool value) const { qhboxplotmodelmapper_setcount_isbase = value; }
    inline void setQHBoxPlotModelMapper_FirstBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_firstboxsetsection_isbase = value; }
    inline void setQHBoxPlotModelMapper_SetFirstBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_setfirstboxsetsection_isbase = value; }
    inline void setQHBoxPlotModelMapper_LastBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_lastboxsetsection_isbase = value; }
    inline void setQHBoxPlotModelMapper_SetLastBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_setlastboxsetsection_isbase = value; }
    inline void setQHBoxPlotModelMapper_Orientation_IsBase(bool value) const { qhboxplotmodelmapper_orientation_isbase = value; }
    inline void setQHBoxPlotModelMapper_SetOrientation_IsBase(bool value) const { qhboxplotmodelmapper_setorientation_isbase = value; }
    inline void setQHBoxPlotModelMapper_Sender_IsBase(bool value) const { qhboxplotmodelmapper_sender_isbase = value; }
    inline void setQHBoxPlotModelMapper_SenderSignalIndex_IsBase(bool value) const { qhboxplotmodelmapper_sendersignalindex_isbase = value; }
    inline void setQHBoxPlotModelMapper_Receivers_IsBase(bool value) const { qhboxplotmodelmapper_receivers_isbase = value; }
    inline void setQHBoxPlotModelMapper_IsSignalConnected_IsBase(bool value) const { qhboxplotmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhboxplotmodelmapper_metaobject_isbase) {
            qhboxplotmodelmapper_metaobject_isbase = false;
            return QHBoxPlotModelMapper::metaObject();
        }
        auto metaobject_cb = qhboxplotmodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QHBoxPlotModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhboxplotmodelmapper_metacast_isbase) {
            qhboxplotmodelmapper_metacast_isbase = false;
            return QHBoxPlotModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qhboxplotmodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhboxplotmodelmapper_metacall_isbase) {
            qhboxplotmodelmapper_metacall_isbase = false;
            return QHBoxPlotModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qhboxplotmodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhboxplotmodelmapper_event_isbase) {
            qhboxplotmodelmapper_event_isbase = false;
            return QHBoxPlotModelMapper::event(event);
        }
        auto event_cb = qhboxplotmodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhboxplotmodelmapper_eventfilter_isbase) {
            qhboxplotmodelmapper_eventfilter_isbase = false;
            return QHBoxPlotModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qhboxplotmodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhboxplotmodelmapper_timerevent_isbase) {
            qhboxplotmodelmapper_timerevent_isbase = false;
            QHBoxPlotModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qhboxplotmodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhboxplotmodelmapper_childevent_isbase) {
            qhboxplotmodelmapper_childevent_isbase = false;
            QHBoxPlotModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qhboxplotmodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhboxplotmodelmapper_customevent_isbase) {
            qhboxplotmodelmapper_customevent_isbase = false;
            QHBoxPlotModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qhboxplotmodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhboxplotmodelmapper_connectnotify_isbase) {
            qhboxplotmodelmapper_connectnotify_isbase = false;
            QHBoxPlotModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qhboxplotmodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhboxplotmodelmapper_disconnectnotify_isbase) {
            qhboxplotmodelmapper_disconnectnotify_isbase = false;
            QHBoxPlotModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qhboxplotmodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qhboxplotmodelmapper_first_isbase) {
            qhboxplotmodelmapper_first_isbase = false;
            return QHBoxPlotModelMapper::first();
        }
        auto first_cb = qhboxplotmodelmapper_first_callback;
        if (first_cb) {
            int callback_ret = first_cb();
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::first();
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qhboxplotmodelmapper_setfirst_isbase) {
            qhboxplotmodelmapper_setfirst_isbase = false;
            QHBoxPlotModelMapper::setFirst(first);
            return;
        }
        auto setfirst_cb = qhboxplotmodelmapper_setfirst_callback;
        if (setfirst_cb) {
            int cbval1 = first;

            setfirst_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::setFirst(first);
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qhboxplotmodelmapper_count_isbase) {
            qhboxplotmodelmapper_count_isbase = false;
            return QHBoxPlotModelMapper::count();
        }
        auto count_cb = qhboxplotmodelmapper_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::count();
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qhboxplotmodelmapper_setcount_isbase) {
            qhboxplotmodelmapper_setcount_isbase = false;
            QHBoxPlotModelMapper::setCount(count);
            return;
        }
        auto setcount_cb = qhboxplotmodelmapper_setcount_callback;
        if (setcount_cb) {
            int cbval1 = count;

            setcount_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::setCount(count);
    }

    // Virtual method for C ABI access and custom callback
    int firstBoxSetSection() const {
        if (qhboxplotmodelmapper_firstboxsetsection_isbase) {
            qhboxplotmodelmapper_firstboxsetsection_isbase = false;
            return QHBoxPlotModelMapper::firstBoxSetSection();
        }
        auto firstboxsetsection_cb = qhboxplotmodelmapper_firstboxsetsection_callback;
        if (firstboxsetsection_cb) {
            int callback_ret = firstboxsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::firstBoxSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBoxSetSection(int firstBoxSetSection) {
        if (qhboxplotmodelmapper_setfirstboxsetsection_isbase) {
            qhboxplotmodelmapper_setfirstboxsetsection_isbase = false;
            QHBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
            return;
        }
        auto setfirstboxsetsection_cb = qhboxplotmodelmapper_setfirstboxsetsection_callback;
        if (setfirstboxsetsection_cb) {
            int cbval1 = firstBoxSetSection;

            setfirstboxsetsection_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int lastBoxSetSection() const {
        if (qhboxplotmodelmapper_lastboxsetsection_isbase) {
            qhboxplotmodelmapper_lastboxsetsection_isbase = false;
            return QHBoxPlotModelMapper::lastBoxSetSection();
        }
        auto lastboxsetsection_cb = qhboxplotmodelmapper_lastboxsetsection_callback;
        if (lastboxsetsection_cb) {
            int callback_ret = lastboxsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::lastBoxSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setLastBoxSetSection(int lastBoxSetSection) {
        if (qhboxplotmodelmapper_setlastboxsetsection_isbase) {
            qhboxplotmodelmapper_setlastboxsetsection_isbase = false;
            QHBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
            return;
        }
        auto setlastboxsetsection_cb = qhboxplotmodelmapper_setlastboxsetsection_callback;
        if (setlastboxsetsection_cb) {
            int cbval1 = lastBoxSetSection;

            setlastboxsetsection_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qhboxplotmodelmapper_orientation_isbase) {
            qhboxplotmodelmapper_orientation_isbase = false;
            return QHBoxPlotModelMapper::orientation();
        }
        auto orientation_cb = qhboxplotmodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QHBoxPlotModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qhboxplotmodelmapper_setorientation_isbase) {
            qhboxplotmodelmapper_setorientation_isbase = false;
            QHBoxPlotModelMapper::setOrientation(orientation);
            return;
        }
        auto setorientation_cb = qhboxplotmodelmapper_setorientation_callback;
        if (setorientation_cb) {
            int cbval1 = static_cast<int>(orientation);

            setorientation_cb(this, cbval1);
            return;
        }
        QHBoxPlotModelMapper::setOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhboxplotmodelmapper_sender_isbase) {
            qhboxplotmodelmapper_sender_isbase = false;
            return QHBoxPlotModelMapper::sender();
        }
        auto sender_cb = qhboxplotmodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QHBoxPlotModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhboxplotmodelmapper_sendersignalindex_isbase) {
            qhboxplotmodelmapper_sendersignalindex_isbase = false;
            return QHBoxPlotModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qhboxplotmodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhboxplotmodelmapper_receivers_isbase) {
            qhboxplotmodelmapper_receivers_isbase = false;
            return QHBoxPlotModelMapper::receivers(signal);
        }
        auto receivers_cb = qhboxplotmodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHBoxPlotModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhboxplotmodelmapper_issignalconnected_isbase) {
            qhboxplotmodelmapper_issignalconnected_isbase = false;
            return QHBoxPlotModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qhboxplotmodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QHBoxPlotModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QHBoxPlotModelMapper_TimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event);
    friend void QHBoxPlotModelMapper_SuperTimerEvent(QHBoxPlotModelMapper* self, QTimerEvent* event);
    friend void QHBoxPlotModelMapper_ChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event);
    friend void QHBoxPlotModelMapper_SuperChildEvent(QHBoxPlotModelMapper* self, QChildEvent* event);
    friend void QHBoxPlotModelMapper_CustomEvent(QHBoxPlotModelMapper* self, QEvent* event);
    friend void QHBoxPlotModelMapper_SuperCustomEvent(QHBoxPlotModelMapper* self, QEvent* event);
    friend void QHBoxPlotModelMapper_ConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QHBoxPlotModelMapper_SuperConnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QHBoxPlotModelMapper_DisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QHBoxPlotModelMapper_SuperDisconnectNotify(QHBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend int QHBoxPlotModelMapper_First(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SuperFirst(const QHBoxPlotModelMapper* self);
    friend void QHBoxPlotModelMapper_SetFirst(QHBoxPlotModelMapper* self, int first);
    friend void QHBoxPlotModelMapper_SuperSetFirst(QHBoxPlotModelMapper* self, int first);
    friend int QHBoxPlotModelMapper_Count(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SuperCount(const QHBoxPlotModelMapper* self);
    friend void QHBoxPlotModelMapper_SetCount(QHBoxPlotModelMapper* self, int count);
    friend void QHBoxPlotModelMapper_SuperSetCount(QHBoxPlotModelMapper* self, int count);
    friend int QHBoxPlotModelMapper_FirstBoxSetSection(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SuperFirstBoxSetSection(const QHBoxPlotModelMapper* self);
    friend void QHBoxPlotModelMapper_SetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection);
    friend void QHBoxPlotModelMapper_SuperSetFirstBoxSetSection(QHBoxPlotModelMapper* self, int firstBoxSetSection);
    friend int QHBoxPlotModelMapper_LastBoxSetSection(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SuperLastBoxSetSection(const QHBoxPlotModelMapper* self);
    friend void QHBoxPlotModelMapper_SetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection);
    friend void QHBoxPlotModelMapper_SuperSetLastBoxSetSection(QHBoxPlotModelMapper* self, int lastBoxSetSection);
    friend int QHBoxPlotModelMapper_Orientation(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SuperOrientation(const QHBoxPlotModelMapper* self);
    friend void QHBoxPlotModelMapper_SetOrientation(QHBoxPlotModelMapper* self, int orientation);
    friend void QHBoxPlotModelMapper_SuperSetOrientation(QHBoxPlotModelMapper* self, int orientation);
    friend QObject* QHBoxPlotModelMapper_Sender(const QHBoxPlotModelMapper* self);
    friend QObject* QHBoxPlotModelMapper_SuperSender(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SenderSignalIndex(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_SuperSenderSignalIndex(const QHBoxPlotModelMapper* self);
    friend int QHBoxPlotModelMapper_Receivers(const QHBoxPlotModelMapper* self, const char* signal);
    friend int QHBoxPlotModelMapper_SuperReceivers(const QHBoxPlotModelMapper* self, const char* signal);
    friend bool QHBoxPlotModelMapper_IsSignalConnected(const QHBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend bool QHBoxPlotModelMapper_SuperIsSignalConnected(const QHBoxPlotModelMapper* self, const QMetaMethod* signal);
};

#endif
