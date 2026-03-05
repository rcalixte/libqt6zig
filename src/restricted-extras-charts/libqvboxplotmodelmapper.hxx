#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVBoxPlotModelMapper so that we can call protected methods
class VirtualQVBoxPlotModelMapper final : public QVBoxPlotModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQVBoxPlotModelMapper = true;

    // Virtual class public types (including callbacks)
    using QVBoxPlotModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QVBoxPlotModelMapper_Metacast_Callback = void* (*)(QVBoxPlotModelMapper*, const char*);
    using QVBoxPlotModelMapper_Metacall_Callback = int (*)(QVBoxPlotModelMapper*, int, int, void**);
    using QVBoxPlotModelMapper_Event_Callback = bool (*)(QVBoxPlotModelMapper*, QEvent*);
    using QVBoxPlotModelMapper_EventFilter_Callback = bool (*)(QVBoxPlotModelMapper*, QObject*, QEvent*);
    using QVBoxPlotModelMapper_TimerEvent_Callback = void (*)(QVBoxPlotModelMapper*, QTimerEvent*);
    using QVBoxPlotModelMapper_ChildEvent_Callback = void (*)(QVBoxPlotModelMapper*, QChildEvent*);
    using QVBoxPlotModelMapper_CustomEvent_Callback = void (*)(QVBoxPlotModelMapper*, QEvent*);
    using QVBoxPlotModelMapper_ConnectNotify_Callback = void (*)(QVBoxPlotModelMapper*, QMetaMethod*);
    using QVBoxPlotModelMapper_DisconnectNotify_Callback = void (*)(QVBoxPlotModelMapper*, QMetaMethod*);
    using QVBoxPlotModelMapper_First_Callback = int (*)();
    using QVBoxPlotModelMapper_SetFirst_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_Count_Callback = int (*)();
    using QVBoxPlotModelMapper_SetCount_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_FirstBoxSetSection_Callback = int (*)();
    using QVBoxPlotModelMapper_SetFirstBoxSetSection_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_LastBoxSetSection_Callback = int (*)();
    using QVBoxPlotModelMapper_SetLastBoxSetSection_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_Orientation_Callback = int (*)();
    using QVBoxPlotModelMapper_SetOrientation_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_Sender_Callback = QObject* (*)();
    using QVBoxPlotModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVBoxPlotModelMapper_Receivers_Callback = int (*)(const QVBoxPlotModelMapper*, const char*);
    using QVBoxPlotModelMapper_IsSignalConnected_Callback = bool (*)(const QVBoxPlotModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVBoxPlotModelMapper_MetaObject_Callback qvboxplotmodelmapper_metaobject_callback = nullptr;
    QVBoxPlotModelMapper_Metacast_Callback qvboxplotmodelmapper_metacast_callback = nullptr;
    QVBoxPlotModelMapper_Metacall_Callback qvboxplotmodelmapper_metacall_callback = nullptr;
    QVBoxPlotModelMapper_Event_Callback qvboxplotmodelmapper_event_callback = nullptr;
    QVBoxPlotModelMapper_EventFilter_Callback qvboxplotmodelmapper_eventfilter_callback = nullptr;
    QVBoxPlotModelMapper_TimerEvent_Callback qvboxplotmodelmapper_timerevent_callback = nullptr;
    QVBoxPlotModelMapper_ChildEvent_Callback qvboxplotmodelmapper_childevent_callback = nullptr;
    QVBoxPlotModelMapper_CustomEvent_Callback qvboxplotmodelmapper_customevent_callback = nullptr;
    QVBoxPlotModelMapper_ConnectNotify_Callback qvboxplotmodelmapper_connectnotify_callback = nullptr;
    QVBoxPlotModelMapper_DisconnectNotify_Callback qvboxplotmodelmapper_disconnectnotify_callback = nullptr;
    QVBoxPlotModelMapper_First_Callback qvboxplotmodelmapper_first_callback = nullptr;
    QVBoxPlotModelMapper_SetFirst_Callback qvboxplotmodelmapper_setfirst_callback = nullptr;
    QVBoxPlotModelMapper_Count_Callback qvboxplotmodelmapper_count_callback = nullptr;
    QVBoxPlotModelMapper_SetCount_Callback qvboxplotmodelmapper_setcount_callback = nullptr;
    QVBoxPlotModelMapper_FirstBoxSetSection_Callback qvboxplotmodelmapper_firstboxsetsection_callback = nullptr;
    QVBoxPlotModelMapper_SetFirstBoxSetSection_Callback qvboxplotmodelmapper_setfirstboxsetsection_callback = nullptr;
    QVBoxPlotModelMapper_LastBoxSetSection_Callback qvboxplotmodelmapper_lastboxsetsection_callback = nullptr;
    QVBoxPlotModelMapper_SetLastBoxSetSection_Callback qvboxplotmodelmapper_setlastboxsetsection_callback = nullptr;
    QVBoxPlotModelMapper_Orientation_Callback qvboxplotmodelmapper_orientation_callback = nullptr;
    QVBoxPlotModelMapper_SetOrientation_Callback qvboxplotmodelmapper_setorientation_callback = nullptr;
    QVBoxPlotModelMapper_Sender_Callback qvboxplotmodelmapper_sender_callback = nullptr;
    QVBoxPlotModelMapper_SenderSignalIndex_Callback qvboxplotmodelmapper_sendersignalindex_callback = nullptr;
    QVBoxPlotModelMapper_Receivers_Callback qvboxplotmodelmapper_receivers_callback = nullptr;
    QVBoxPlotModelMapper_IsSignalConnected_Callback qvboxplotmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvboxplotmodelmapper_metaobject_isbase = false;
    mutable bool qvboxplotmodelmapper_metacast_isbase = false;
    mutable bool qvboxplotmodelmapper_metacall_isbase = false;
    mutable bool qvboxplotmodelmapper_event_isbase = false;
    mutable bool qvboxplotmodelmapper_eventfilter_isbase = false;
    mutable bool qvboxplotmodelmapper_timerevent_isbase = false;
    mutable bool qvboxplotmodelmapper_childevent_isbase = false;
    mutable bool qvboxplotmodelmapper_customevent_isbase = false;
    mutable bool qvboxplotmodelmapper_connectnotify_isbase = false;
    mutable bool qvboxplotmodelmapper_disconnectnotify_isbase = false;
    mutable bool qvboxplotmodelmapper_first_isbase = false;
    mutable bool qvboxplotmodelmapper_setfirst_isbase = false;
    mutable bool qvboxplotmodelmapper_count_isbase = false;
    mutable bool qvboxplotmodelmapper_setcount_isbase = false;
    mutable bool qvboxplotmodelmapper_firstboxsetsection_isbase = false;
    mutable bool qvboxplotmodelmapper_setfirstboxsetsection_isbase = false;
    mutable bool qvboxplotmodelmapper_lastboxsetsection_isbase = false;
    mutable bool qvboxplotmodelmapper_setlastboxsetsection_isbase = false;
    mutable bool qvboxplotmodelmapper_orientation_isbase = false;
    mutable bool qvboxplotmodelmapper_setorientation_isbase = false;
    mutable bool qvboxplotmodelmapper_sender_isbase = false;
    mutable bool qvboxplotmodelmapper_sendersignalindex_isbase = false;
    mutable bool qvboxplotmodelmapper_receivers_isbase = false;
    mutable bool qvboxplotmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQVBoxPlotModelMapper() : QVBoxPlotModelMapper() {};
    VirtualQVBoxPlotModelMapper(QObject* parent) : QVBoxPlotModelMapper(parent) {};

    // Callback setters
    inline void setQVBoxPlotModelMapper_MetaObject_Callback(QVBoxPlotModelMapper_MetaObject_Callback cb) { qvboxplotmodelmapper_metaobject_callback = cb; }
    inline void setQVBoxPlotModelMapper_Metacast_Callback(QVBoxPlotModelMapper_Metacast_Callback cb) { qvboxplotmodelmapper_metacast_callback = cb; }
    inline void setQVBoxPlotModelMapper_Metacall_Callback(QVBoxPlotModelMapper_Metacall_Callback cb) { qvboxplotmodelmapper_metacall_callback = cb; }
    inline void setQVBoxPlotModelMapper_Event_Callback(QVBoxPlotModelMapper_Event_Callback cb) { qvboxplotmodelmapper_event_callback = cb; }
    inline void setQVBoxPlotModelMapper_EventFilter_Callback(QVBoxPlotModelMapper_EventFilter_Callback cb) { qvboxplotmodelmapper_eventfilter_callback = cb; }
    inline void setQVBoxPlotModelMapper_TimerEvent_Callback(QVBoxPlotModelMapper_TimerEvent_Callback cb) { qvboxplotmodelmapper_timerevent_callback = cb; }
    inline void setQVBoxPlotModelMapper_ChildEvent_Callback(QVBoxPlotModelMapper_ChildEvent_Callback cb) { qvboxplotmodelmapper_childevent_callback = cb; }
    inline void setQVBoxPlotModelMapper_CustomEvent_Callback(QVBoxPlotModelMapper_CustomEvent_Callback cb) { qvboxplotmodelmapper_customevent_callback = cb; }
    inline void setQVBoxPlotModelMapper_ConnectNotify_Callback(QVBoxPlotModelMapper_ConnectNotify_Callback cb) { qvboxplotmodelmapper_connectnotify_callback = cb; }
    inline void setQVBoxPlotModelMapper_DisconnectNotify_Callback(QVBoxPlotModelMapper_DisconnectNotify_Callback cb) { qvboxplotmodelmapper_disconnectnotify_callback = cb; }
    inline void setQVBoxPlotModelMapper_First_Callback(QVBoxPlotModelMapper_First_Callback cb) { qvboxplotmodelmapper_first_callback = cb; }
    inline void setQVBoxPlotModelMapper_SetFirst_Callback(QVBoxPlotModelMapper_SetFirst_Callback cb) { qvboxplotmodelmapper_setfirst_callback = cb; }
    inline void setQVBoxPlotModelMapper_Count_Callback(QVBoxPlotModelMapper_Count_Callback cb) { qvboxplotmodelmapper_count_callback = cb; }
    inline void setQVBoxPlotModelMapper_SetCount_Callback(QVBoxPlotModelMapper_SetCount_Callback cb) { qvboxplotmodelmapper_setcount_callback = cb; }
    inline void setQVBoxPlotModelMapper_FirstBoxSetSection_Callback(QVBoxPlotModelMapper_FirstBoxSetSection_Callback cb) { qvboxplotmodelmapper_firstboxsetsection_callback = cb; }
    inline void setQVBoxPlotModelMapper_SetFirstBoxSetSection_Callback(QVBoxPlotModelMapper_SetFirstBoxSetSection_Callback cb) { qvboxplotmodelmapper_setfirstboxsetsection_callback = cb; }
    inline void setQVBoxPlotModelMapper_LastBoxSetSection_Callback(QVBoxPlotModelMapper_LastBoxSetSection_Callback cb) { qvboxplotmodelmapper_lastboxsetsection_callback = cb; }
    inline void setQVBoxPlotModelMapper_SetLastBoxSetSection_Callback(QVBoxPlotModelMapper_SetLastBoxSetSection_Callback cb) { qvboxplotmodelmapper_setlastboxsetsection_callback = cb; }
    inline void setQVBoxPlotModelMapper_Orientation_Callback(QVBoxPlotModelMapper_Orientation_Callback cb) { qvboxplotmodelmapper_orientation_callback = cb; }
    inline void setQVBoxPlotModelMapper_SetOrientation_Callback(QVBoxPlotModelMapper_SetOrientation_Callback cb) { qvboxplotmodelmapper_setorientation_callback = cb; }
    inline void setQVBoxPlotModelMapper_Sender_Callback(QVBoxPlotModelMapper_Sender_Callback cb) { qvboxplotmodelmapper_sender_callback = cb; }
    inline void setQVBoxPlotModelMapper_SenderSignalIndex_Callback(QVBoxPlotModelMapper_SenderSignalIndex_Callback cb) { qvboxplotmodelmapper_sendersignalindex_callback = cb; }
    inline void setQVBoxPlotModelMapper_Receivers_Callback(QVBoxPlotModelMapper_Receivers_Callback cb) { qvboxplotmodelmapper_receivers_callback = cb; }
    inline void setQVBoxPlotModelMapper_IsSignalConnected_Callback(QVBoxPlotModelMapper_IsSignalConnected_Callback cb) { qvboxplotmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVBoxPlotModelMapper_MetaObject_IsBase(bool value) const { qvboxplotmodelmapper_metaobject_isbase = value; }
    inline void setQVBoxPlotModelMapper_Metacast_IsBase(bool value) const { qvboxplotmodelmapper_metacast_isbase = value; }
    inline void setQVBoxPlotModelMapper_Metacall_IsBase(bool value) const { qvboxplotmodelmapper_metacall_isbase = value; }
    inline void setQVBoxPlotModelMapper_Event_IsBase(bool value) const { qvboxplotmodelmapper_event_isbase = value; }
    inline void setQVBoxPlotModelMapper_EventFilter_IsBase(bool value) const { qvboxplotmodelmapper_eventfilter_isbase = value; }
    inline void setQVBoxPlotModelMapper_TimerEvent_IsBase(bool value) const { qvboxplotmodelmapper_timerevent_isbase = value; }
    inline void setQVBoxPlotModelMapper_ChildEvent_IsBase(bool value) const { qvboxplotmodelmapper_childevent_isbase = value; }
    inline void setQVBoxPlotModelMapper_CustomEvent_IsBase(bool value) const { qvboxplotmodelmapper_customevent_isbase = value; }
    inline void setQVBoxPlotModelMapper_ConnectNotify_IsBase(bool value) const { qvboxplotmodelmapper_connectnotify_isbase = value; }
    inline void setQVBoxPlotModelMapper_DisconnectNotify_IsBase(bool value) const { qvboxplotmodelmapper_disconnectnotify_isbase = value; }
    inline void setQVBoxPlotModelMapper_First_IsBase(bool value) const { qvboxplotmodelmapper_first_isbase = value; }
    inline void setQVBoxPlotModelMapper_SetFirst_IsBase(bool value) const { qvboxplotmodelmapper_setfirst_isbase = value; }
    inline void setQVBoxPlotModelMapper_Count_IsBase(bool value) const { qvboxplotmodelmapper_count_isbase = value; }
    inline void setQVBoxPlotModelMapper_SetCount_IsBase(bool value) const { qvboxplotmodelmapper_setcount_isbase = value; }
    inline void setQVBoxPlotModelMapper_FirstBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_firstboxsetsection_isbase = value; }
    inline void setQVBoxPlotModelMapper_SetFirstBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_setfirstboxsetsection_isbase = value; }
    inline void setQVBoxPlotModelMapper_LastBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_lastboxsetsection_isbase = value; }
    inline void setQVBoxPlotModelMapper_SetLastBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_setlastboxsetsection_isbase = value; }
    inline void setQVBoxPlotModelMapper_Orientation_IsBase(bool value) const { qvboxplotmodelmapper_orientation_isbase = value; }
    inline void setQVBoxPlotModelMapper_SetOrientation_IsBase(bool value) const { qvboxplotmodelmapper_setorientation_isbase = value; }
    inline void setQVBoxPlotModelMapper_Sender_IsBase(bool value) const { qvboxplotmodelmapper_sender_isbase = value; }
    inline void setQVBoxPlotModelMapper_SenderSignalIndex_IsBase(bool value) const { qvboxplotmodelmapper_sendersignalindex_isbase = value; }
    inline void setQVBoxPlotModelMapper_Receivers_IsBase(bool value) const { qvboxplotmodelmapper_receivers_isbase = value; }
    inline void setQVBoxPlotModelMapper_IsSignalConnected_IsBase(bool value) const { qvboxplotmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvboxplotmodelmapper_metaobject_isbase) {
            qvboxplotmodelmapper_metaobject_isbase = false;
            return QVBoxPlotModelMapper::metaObject();
        }
        auto metaobject_cb = qvboxplotmodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVBoxPlotModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvboxplotmodelmapper_metacast_isbase) {
            qvboxplotmodelmapper_metacast_isbase = false;
            return QVBoxPlotModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qvboxplotmodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvboxplotmodelmapper_metacall_isbase) {
            qvboxplotmodelmapper_metacall_isbase = false;
            return QVBoxPlotModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvboxplotmodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvboxplotmodelmapper_event_isbase) {
            qvboxplotmodelmapper_event_isbase = false;
            return QVBoxPlotModelMapper::event(event);
        }
        auto event_cb = qvboxplotmodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvboxplotmodelmapper_eventfilter_isbase) {
            qvboxplotmodelmapper_eventfilter_isbase = false;
            return QVBoxPlotModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvboxplotmodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvboxplotmodelmapper_timerevent_isbase) {
            qvboxplotmodelmapper_timerevent_isbase = false;
            QVBoxPlotModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvboxplotmodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvboxplotmodelmapper_childevent_isbase) {
            qvboxplotmodelmapper_childevent_isbase = false;
            QVBoxPlotModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qvboxplotmodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvboxplotmodelmapper_customevent_isbase) {
            qvboxplotmodelmapper_customevent_isbase = false;
            QVBoxPlotModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qvboxplotmodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvboxplotmodelmapper_connectnotify_isbase) {
            qvboxplotmodelmapper_connectnotify_isbase = false;
            QVBoxPlotModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvboxplotmodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvboxplotmodelmapper_disconnectnotify_isbase) {
            qvboxplotmodelmapper_disconnectnotify_isbase = false;
            QVBoxPlotModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvboxplotmodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvboxplotmodelmapper_first_isbase) {
            qvboxplotmodelmapper_first_isbase = false;
            return QVBoxPlotModelMapper::first();
        }
        auto first_cb = qvboxplotmodelmapper_first_callback;
        if (first_cb) {
            int callback_ret = first_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::first();
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvboxplotmodelmapper_setfirst_isbase) {
            qvboxplotmodelmapper_setfirst_isbase = false;
            QVBoxPlotModelMapper::setFirst(first);
            return;
        }
        auto setfirst_cb = qvboxplotmodelmapper_setfirst_callback;
        if (setfirst_cb) {
            int cbval1 = first;

            setfirst_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::setFirst(first);
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvboxplotmodelmapper_count_isbase) {
            qvboxplotmodelmapper_count_isbase = false;
            return QVBoxPlotModelMapper::count();
        }
        auto count_cb = qvboxplotmodelmapper_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::count();
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvboxplotmodelmapper_setcount_isbase) {
            qvboxplotmodelmapper_setcount_isbase = false;
            QVBoxPlotModelMapper::setCount(count);
            return;
        }
        auto setcount_cb = qvboxplotmodelmapper_setcount_callback;
        if (setcount_cb) {
            int cbval1 = count;

            setcount_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::setCount(count);
    }

    // Virtual method for C ABI access and custom callback
    int firstBoxSetSection() const {
        if (qvboxplotmodelmapper_firstboxsetsection_isbase) {
            qvboxplotmodelmapper_firstboxsetsection_isbase = false;
            return QVBoxPlotModelMapper::firstBoxSetSection();
        }
        auto firstboxsetsection_cb = qvboxplotmodelmapper_firstboxsetsection_callback;
        if (firstboxsetsection_cb) {
            int callback_ret = firstboxsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::firstBoxSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBoxSetSection(int firstBoxSetSection) {
        if (qvboxplotmodelmapper_setfirstboxsetsection_isbase) {
            qvboxplotmodelmapper_setfirstboxsetsection_isbase = false;
            QVBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
            return;
        }
        auto setfirstboxsetsection_cb = qvboxplotmodelmapper_setfirstboxsetsection_callback;
        if (setfirstboxsetsection_cb) {
            int cbval1 = firstBoxSetSection;

            setfirstboxsetsection_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
    }

    // Virtual method for C ABI access and custom callback
    int lastBoxSetSection() const {
        if (qvboxplotmodelmapper_lastboxsetsection_isbase) {
            qvboxplotmodelmapper_lastboxsetsection_isbase = false;
            return QVBoxPlotModelMapper::lastBoxSetSection();
        }
        auto lastboxsetsection_cb = qvboxplotmodelmapper_lastboxsetsection_callback;
        if (lastboxsetsection_cb) {
            int callback_ret = lastboxsetsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::lastBoxSetSection();
    }

    // Virtual method for C ABI access and custom callback
    void setLastBoxSetSection(int lastBoxSetSection) {
        if (qvboxplotmodelmapper_setlastboxsetsection_isbase) {
            qvboxplotmodelmapper_setlastboxsetsection_isbase = false;
            QVBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
            return;
        }
        auto setlastboxsetsection_cb = qvboxplotmodelmapper_setlastboxsetsection_callback;
        if (setlastboxsetsection_cb) {
            int cbval1 = lastBoxSetSection;

            setlastboxsetsection_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvboxplotmodelmapper_orientation_isbase) {
            qvboxplotmodelmapper_orientation_isbase = false;
            return QVBoxPlotModelMapper::orientation();
        }
        auto orientation_cb = qvboxplotmodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QVBoxPlotModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvboxplotmodelmapper_setorientation_isbase) {
            qvboxplotmodelmapper_setorientation_isbase = false;
            QVBoxPlotModelMapper::setOrientation(orientation);
            return;
        }
        auto setorientation_cb = qvboxplotmodelmapper_setorientation_callback;
        if (setorientation_cb) {
            int cbval1 = static_cast<int>(orientation);

            setorientation_cb(this, cbval1);
            return;
        }
        QVBoxPlotModelMapper::setOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvboxplotmodelmapper_sender_isbase) {
            qvboxplotmodelmapper_sender_isbase = false;
            return QVBoxPlotModelMapper::sender();
        }
        auto sender_cb = qvboxplotmodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVBoxPlotModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvboxplotmodelmapper_sendersignalindex_isbase) {
            qvboxplotmodelmapper_sendersignalindex_isbase = false;
            return QVBoxPlotModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvboxplotmodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvboxplotmodelmapper_receivers_isbase) {
            qvboxplotmodelmapper_receivers_isbase = false;
            return QVBoxPlotModelMapper::receivers(signal);
        }
        auto receivers_cb = qvboxplotmodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVBoxPlotModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvboxplotmodelmapper_issignalconnected_isbase) {
            qvboxplotmodelmapper_issignalconnected_isbase = false;
            return QVBoxPlotModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvboxplotmodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVBoxPlotModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVBoxPlotModelMapper_TimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event);
    friend void QVBoxPlotModelMapper_SuperTimerEvent(QVBoxPlotModelMapper* self, QTimerEvent* event);
    friend void QVBoxPlotModelMapper_ChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event);
    friend void QVBoxPlotModelMapper_SuperChildEvent(QVBoxPlotModelMapper* self, QChildEvent* event);
    friend void QVBoxPlotModelMapper_CustomEvent(QVBoxPlotModelMapper* self, QEvent* event);
    friend void QVBoxPlotModelMapper_SuperCustomEvent(QVBoxPlotModelMapper* self, QEvent* event);
    friend void QVBoxPlotModelMapper_ConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QVBoxPlotModelMapper_SuperConnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QVBoxPlotModelMapper_DisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend void QVBoxPlotModelMapper_SuperDisconnectNotify(QVBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend int QVBoxPlotModelMapper_First(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SuperFirst(const QVBoxPlotModelMapper* self);
    friend void QVBoxPlotModelMapper_SetFirst(QVBoxPlotModelMapper* self, int first);
    friend void QVBoxPlotModelMapper_SuperSetFirst(QVBoxPlotModelMapper* self, int first);
    friend int QVBoxPlotModelMapper_Count(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SuperCount(const QVBoxPlotModelMapper* self);
    friend void QVBoxPlotModelMapper_SetCount(QVBoxPlotModelMapper* self, int count);
    friend void QVBoxPlotModelMapper_SuperSetCount(QVBoxPlotModelMapper* self, int count);
    friend int QVBoxPlotModelMapper_FirstBoxSetSection(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SuperFirstBoxSetSection(const QVBoxPlotModelMapper* self);
    friend void QVBoxPlotModelMapper_SetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection);
    friend void QVBoxPlotModelMapper_SuperSetFirstBoxSetSection(QVBoxPlotModelMapper* self, int firstBoxSetSection);
    friend int QVBoxPlotModelMapper_LastBoxSetSection(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SuperLastBoxSetSection(const QVBoxPlotModelMapper* self);
    friend void QVBoxPlotModelMapper_SetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection);
    friend void QVBoxPlotModelMapper_SuperSetLastBoxSetSection(QVBoxPlotModelMapper* self, int lastBoxSetSection);
    friend int QVBoxPlotModelMapper_Orientation(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SuperOrientation(const QVBoxPlotModelMapper* self);
    friend void QVBoxPlotModelMapper_SetOrientation(QVBoxPlotModelMapper* self, int orientation);
    friend void QVBoxPlotModelMapper_SuperSetOrientation(QVBoxPlotModelMapper* self, int orientation);
    friend QObject* QVBoxPlotModelMapper_Sender(const QVBoxPlotModelMapper* self);
    friend QObject* QVBoxPlotModelMapper_SuperSender(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SenderSignalIndex(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_SuperSenderSignalIndex(const QVBoxPlotModelMapper* self);
    friend int QVBoxPlotModelMapper_Receivers(const QVBoxPlotModelMapper* self, const char* signal);
    friend int QVBoxPlotModelMapper_SuperReceivers(const QVBoxPlotModelMapper* self, const char* signal);
    friend bool QVBoxPlotModelMapper_IsSignalConnected(const QVBoxPlotModelMapper* self, const QMetaMethod* signal);
    friend bool QVBoxPlotModelMapper_SuperIsSignalConnected(const QVBoxPlotModelMapper* self, const QMetaMethod* signal);
};

#endif
