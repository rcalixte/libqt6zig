#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQHBOXPLOTMODELMAPPER_H
#define SRC_CHARTSC_LIBVIRTUALQHBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHBoxPlotModelMapper so that we can call protected methods
class VirtualQHBoxPlotModelMapper : public QHBoxPlotModelMapper {

  public:
    // Virtual class public types (including callbacks)
    using QHBoxPlotModelMapper_Metacall_Callback = int (*)(QHBoxPlotModelMapper*, QMetaObject::Call, int, void**);
    using QHBoxPlotModelMapper_Event_Callback = bool (*)(QHBoxPlotModelMapper*, QEvent*);
    using QHBoxPlotModelMapper_EventFilter_Callback = bool (*)(QHBoxPlotModelMapper*, QObject*, QEvent*);
    using QHBoxPlotModelMapper_TimerEvent_Callback = void (*)(QHBoxPlotModelMapper*, QTimerEvent*);
    using QHBoxPlotModelMapper_ChildEvent_Callback = void (*)(QHBoxPlotModelMapper*, QChildEvent*);
    using QHBoxPlotModelMapper_CustomEvent_Callback = void (*)(QHBoxPlotModelMapper*, QEvent*);
    using QHBoxPlotModelMapper_ConnectNotify_Callback = void (*)(QHBoxPlotModelMapper*, const QMetaMethod&);
    using QHBoxPlotModelMapper_DisconnectNotify_Callback = void (*)(QHBoxPlotModelMapper*, const QMetaMethod&);
    using QHBoxPlotModelMapper_First_Callback = int (*)();
    using QHBoxPlotModelMapper_SetFirst_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_Count_Callback = int (*)();
    using QHBoxPlotModelMapper_SetCount_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_FirstBoxSetSection_Callback = int (*)();
    using QHBoxPlotModelMapper_SetFirstBoxSetSection_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_LastBoxSetSection_Callback = int (*)();
    using QHBoxPlotModelMapper_SetLastBoxSetSection_Callback = void (*)(QHBoxPlotModelMapper*, int);
    using QHBoxPlotModelMapper_Orientation_Callback = Qt::Orientation (*)();
    using QHBoxPlotModelMapper_SetOrientation_Callback = void (*)(QHBoxPlotModelMapper*, Qt::Orientation);
    using QHBoxPlotModelMapper_Sender_Callback = QObject* (*)();
    using QHBoxPlotModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHBoxPlotModelMapper_Receivers_Callback = int (*)(const QHBoxPlotModelMapper*, const char*);
    using QHBoxPlotModelMapper_IsSignalConnected_Callback = bool (*)(const QHBoxPlotModelMapper*, const QMetaMethod&);

  protected:
    // Instance callback storage
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
    VirtualQHBoxPlotModelMapper() : QHBoxPlotModelMapper(){};
    VirtualQHBoxPlotModelMapper(QObject* parent) : QHBoxPlotModelMapper(parent){};

    ~VirtualQHBoxPlotModelMapper() {
        qhboxplotmodelmapper_metacall_callback = nullptr;
        qhboxplotmodelmapper_event_callback = nullptr;
        qhboxplotmodelmapper_eventfilter_callback = nullptr;
        qhboxplotmodelmapper_timerevent_callback = nullptr;
        qhboxplotmodelmapper_childevent_callback = nullptr;
        qhboxplotmodelmapper_customevent_callback = nullptr;
        qhboxplotmodelmapper_connectnotify_callback = nullptr;
        qhboxplotmodelmapper_disconnectnotify_callback = nullptr;
        qhboxplotmodelmapper_first_callback = nullptr;
        qhboxplotmodelmapper_setfirst_callback = nullptr;
        qhboxplotmodelmapper_count_callback = nullptr;
        qhboxplotmodelmapper_setcount_callback = nullptr;
        qhboxplotmodelmapper_firstboxsetsection_callback = nullptr;
        qhboxplotmodelmapper_setfirstboxsetsection_callback = nullptr;
        qhboxplotmodelmapper_lastboxsetsection_callback = nullptr;
        qhboxplotmodelmapper_setlastboxsetsection_callback = nullptr;
        qhboxplotmodelmapper_orientation_callback = nullptr;
        qhboxplotmodelmapper_setorientation_callback = nullptr;
        qhboxplotmodelmapper_sender_callback = nullptr;
        qhboxplotmodelmapper_sendersignalindex_callback = nullptr;
        qhboxplotmodelmapper_receivers_callback = nullptr;
        qhboxplotmodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQHBoxPlotModelMapper_Metacall_Callback(QHBoxPlotModelMapper_Metacall_Callback cb) { qhboxplotmodelmapper_metacall_callback = cb; }
    void setQHBoxPlotModelMapper_Event_Callback(QHBoxPlotModelMapper_Event_Callback cb) { qhboxplotmodelmapper_event_callback = cb; }
    void setQHBoxPlotModelMapper_EventFilter_Callback(QHBoxPlotModelMapper_EventFilter_Callback cb) { qhboxplotmodelmapper_eventfilter_callback = cb; }
    void setQHBoxPlotModelMapper_TimerEvent_Callback(QHBoxPlotModelMapper_TimerEvent_Callback cb) { qhboxplotmodelmapper_timerevent_callback = cb; }
    void setQHBoxPlotModelMapper_ChildEvent_Callback(QHBoxPlotModelMapper_ChildEvent_Callback cb) { qhboxplotmodelmapper_childevent_callback = cb; }
    void setQHBoxPlotModelMapper_CustomEvent_Callback(QHBoxPlotModelMapper_CustomEvent_Callback cb) { qhboxplotmodelmapper_customevent_callback = cb; }
    void setQHBoxPlotModelMapper_ConnectNotify_Callback(QHBoxPlotModelMapper_ConnectNotify_Callback cb) { qhboxplotmodelmapper_connectnotify_callback = cb; }
    void setQHBoxPlotModelMapper_DisconnectNotify_Callback(QHBoxPlotModelMapper_DisconnectNotify_Callback cb) { qhboxplotmodelmapper_disconnectnotify_callback = cb; }
    void setQHBoxPlotModelMapper_First_Callback(QHBoxPlotModelMapper_First_Callback cb) { qhboxplotmodelmapper_first_callback = cb; }
    void setQHBoxPlotModelMapper_SetFirst_Callback(QHBoxPlotModelMapper_SetFirst_Callback cb) { qhboxplotmodelmapper_setfirst_callback = cb; }
    void setQHBoxPlotModelMapper_Count_Callback(QHBoxPlotModelMapper_Count_Callback cb) { qhboxplotmodelmapper_count_callback = cb; }
    void setQHBoxPlotModelMapper_SetCount_Callback(QHBoxPlotModelMapper_SetCount_Callback cb) { qhboxplotmodelmapper_setcount_callback = cb; }
    void setQHBoxPlotModelMapper_FirstBoxSetSection_Callback(QHBoxPlotModelMapper_FirstBoxSetSection_Callback cb) { qhboxplotmodelmapper_firstboxsetsection_callback = cb; }
    void setQHBoxPlotModelMapper_SetFirstBoxSetSection_Callback(QHBoxPlotModelMapper_SetFirstBoxSetSection_Callback cb) { qhboxplotmodelmapper_setfirstboxsetsection_callback = cb; }
    void setQHBoxPlotModelMapper_LastBoxSetSection_Callback(QHBoxPlotModelMapper_LastBoxSetSection_Callback cb) { qhboxplotmodelmapper_lastboxsetsection_callback = cb; }
    void setQHBoxPlotModelMapper_SetLastBoxSetSection_Callback(QHBoxPlotModelMapper_SetLastBoxSetSection_Callback cb) { qhboxplotmodelmapper_setlastboxsetsection_callback = cb; }
    void setQHBoxPlotModelMapper_Orientation_Callback(QHBoxPlotModelMapper_Orientation_Callback cb) { qhboxplotmodelmapper_orientation_callback = cb; }
    void setQHBoxPlotModelMapper_SetOrientation_Callback(QHBoxPlotModelMapper_SetOrientation_Callback cb) { qhboxplotmodelmapper_setorientation_callback = cb; }
    void setQHBoxPlotModelMapper_Sender_Callback(QHBoxPlotModelMapper_Sender_Callback cb) { qhboxplotmodelmapper_sender_callback = cb; }
    void setQHBoxPlotModelMapper_SenderSignalIndex_Callback(QHBoxPlotModelMapper_SenderSignalIndex_Callback cb) { qhboxplotmodelmapper_sendersignalindex_callback = cb; }
    void setQHBoxPlotModelMapper_Receivers_Callback(QHBoxPlotModelMapper_Receivers_Callback cb) { qhboxplotmodelmapper_receivers_callback = cb; }
    void setQHBoxPlotModelMapper_IsSignalConnected_Callback(QHBoxPlotModelMapper_IsSignalConnected_Callback cb) { qhboxplotmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    void setQHBoxPlotModelMapper_Metacall_IsBase(bool value) const { qhboxplotmodelmapper_metacall_isbase = value; }
    void setQHBoxPlotModelMapper_Event_IsBase(bool value) const { qhboxplotmodelmapper_event_isbase = value; }
    void setQHBoxPlotModelMapper_EventFilter_IsBase(bool value) const { qhboxplotmodelmapper_eventfilter_isbase = value; }
    void setQHBoxPlotModelMapper_TimerEvent_IsBase(bool value) const { qhboxplotmodelmapper_timerevent_isbase = value; }
    void setQHBoxPlotModelMapper_ChildEvent_IsBase(bool value) const { qhboxplotmodelmapper_childevent_isbase = value; }
    void setQHBoxPlotModelMapper_CustomEvent_IsBase(bool value) const { qhboxplotmodelmapper_customevent_isbase = value; }
    void setQHBoxPlotModelMapper_ConnectNotify_IsBase(bool value) const { qhboxplotmodelmapper_connectnotify_isbase = value; }
    void setQHBoxPlotModelMapper_DisconnectNotify_IsBase(bool value) const { qhboxplotmodelmapper_disconnectnotify_isbase = value; }
    void setQHBoxPlotModelMapper_First_IsBase(bool value) const { qhboxplotmodelmapper_first_isbase = value; }
    void setQHBoxPlotModelMapper_SetFirst_IsBase(bool value) const { qhboxplotmodelmapper_setfirst_isbase = value; }
    void setQHBoxPlotModelMapper_Count_IsBase(bool value) const { qhboxplotmodelmapper_count_isbase = value; }
    void setQHBoxPlotModelMapper_SetCount_IsBase(bool value) const { qhboxplotmodelmapper_setcount_isbase = value; }
    void setQHBoxPlotModelMapper_FirstBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_firstboxsetsection_isbase = value; }
    void setQHBoxPlotModelMapper_SetFirstBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_setfirstboxsetsection_isbase = value; }
    void setQHBoxPlotModelMapper_LastBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_lastboxsetsection_isbase = value; }
    void setQHBoxPlotModelMapper_SetLastBoxSetSection_IsBase(bool value) const { qhboxplotmodelmapper_setlastboxsetsection_isbase = value; }
    void setQHBoxPlotModelMapper_Orientation_IsBase(bool value) const { qhboxplotmodelmapper_orientation_isbase = value; }
    void setQHBoxPlotModelMapper_SetOrientation_IsBase(bool value) const { qhboxplotmodelmapper_setorientation_isbase = value; }
    void setQHBoxPlotModelMapper_Sender_IsBase(bool value) const { qhboxplotmodelmapper_sender_isbase = value; }
    void setQHBoxPlotModelMapper_SenderSignalIndex_IsBase(bool value) const { qhboxplotmodelmapper_sendersignalindex_isbase = value; }
    void setQHBoxPlotModelMapper_Receivers_IsBase(bool value) const { qhboxplotmodelmapper_receivers_isbase = value; }
    void setQHBoxPlotModelMapper_IsSignalConnected_IsBase(bool value) const { qhboxplotmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhboxplotmodelmapper_metacall_isbase) {
            qhboxplotmodelmapper_metacall_isbase = false;
            return QHBoxPlotModelMapper::qt_metacall(param1, param2, param3);
        } else if (qhboxplotmodelmapper_metacall_callback != nullptr) {
            return qhboxplotmodelmapper_metacall_callback(this, param1, param2, param3);
        } else {
            return QHBoxPlotModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhboxplotmodelmapper_event_isbase) {
            qhboxplotmodelmapper_event_isbase = false;
            return QHBoxPlotModelMapper::event(event);
        } else if (qhboxplotmodelmapper_event_callback != nullptr) {
            return qhboxplotmodelmapper_event_callback(this, event);
        } else {
            return QHBoxPlotModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhboxplotmodelmapper_eventfilter_isbase) {
            qhboxplotmodelmapper_eventfilter_isbase = false;
            return QHBoxPlotModelMapper::eventFilter(watched, event);
        } else if (qhboxplotmodelmapper_eventfilter_callback != nullptr) {
            return qhboxplotmodelmapper_eventfilter_callback(this, watched, event);
        } else {
            return QHBoxPlotModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhboxplotmodelmapper_timerevent_isbase) {
            qhboxplotmodelmapper_timerevent_isbase = false;
            QHBoxPlotModelMapper::timerEvent(event);
        } else if (qhboxplotmodelmapper_timerevent_callback != nullptr) {
            qhboxplotmodelmapper_timerevent_callback(this, event);
        } else {
            QHBoxPlotModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhboxplotmodelmapper_childevent_isbase) {
            qhboxplotmodelmapper_childevent_isbase = false;
            QHBoxPlotModelMapper::childEvent(event);
        } else if (qhboxplotmodelmapper_childevent_callback != nullptr) {
            qhboxplotmodelmapper_childevent_callback(this, event);
        } else {
            QHBoxPlotModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhboxplotmodelmapper_customevent_isbase) {
            qhboxplotmodelmapper_customevent_isbase = false;
            QHBoxPlotModelMapper::customEvent(event);
        } else if (qhboxplotmodelmapper_customevent_callback != nullptr) {
            qhboxplotmodelmapper_customevent_callback(this, event);
        } else {
            QHBoxPlotModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhboxplotmodelmapper_connectnotify_isbase) {
            qhboxplotmodelmapper_connectnotify_isbase = false;
            QHBoxPlotModelMapper::connectNotify(signal);
        } else if (qhboxplotmodelmapper_connectnotify_callback != nullptr) {
            qhboxplotmodelmapper_connectnotify_callback(this, signal);
        } else {
            QHBoxPlotModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhboxplotmodelmapper_disconnectnotify_isbase) {
            qhboxplotmodelmapper_disconnectnotify_isbase = false;
            QHBoxPlotModelMapper::disconnectNotify(signal);
        } else if (qhboxplotmodelmapper_disconnectnotify_callback != nullptr) {
            qhboxplotmodelmapper_disconnectnotify_callback(this, signal);
        } else {
            QHBoxPlotModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qhboxplotmodelmapper_first_isbase) {
            qhboxplotmodelmapper_first_isbase = false;
            return QHBoxPlotModelMapper::first();
        } else if (qhboxplotmodelmapper_first_callback != nullptr) {
            return qhboxplotmodelmapper_first_callback();
        } else {
            return QHBoxPlotModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qhboxplotmodelmapper_setfirst_isbase) {
            qhboxplotmodelmapper_setfirst_isbase = false;
            QHBoxPlotModelMapper::setFirst(first);
        } else if (qhboxplotmodelmapper_setfirst_callback != nullptr) {
            qhboxplotmodelmapper_setfirst_callback(this, first);
        } else {
            QHBoxPlotModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qhboxplotmodelmapper_count_isbase) {
            qhboxplotmodelmapper_count_isbase = false;
            return QHBoxPlotModelMapper::count();
        } else if (qhboxplotmodelmapper_count_callback != nullptr) {
            return qhboxplotmodelmapper_count_callback();
        } else {
            return QHBoxPlotModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qhboxplotmodelmapper_setcount_isbase) {
            qhboxplotmodelmapper_setcount_isbase = false;
            QHBoxPlotModelMapper::setCount(count);
        } else if (qhboxplotmodelmapper_setcount_callback != nullptr) {
            qhboxplotmodelmapper_setcount_callback(this, count);
        } else {
            QHBoxPlotModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    int firstBoxSetSection() const {
        if (qhboxplotmodelmapper_firstboxsetsection_isbase) {
            qhboxplotmodelmapper_firstboxsetsection_isbase = false;
            return QHBoxPlotModelMapper::firstBoxSetSection();
        } else if (qhboxplotmodelmapper_firstboxsetsection_callback != nullptr) {
            return qhboxplotmodelmapper_firstboxsetsection_callback();
        } else {
            return QHBoxPlotModelMapper::firstBoxSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBoxSetSection(int firstBoxSetSection) {
        if (qhboxplotmodelmapper_setfirstboxsetsection_isbase) {
            qhboxplotmodelmapper_setfirstboxsetsection_isbase = false;
            QHBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
        } else if (qhboxplotmodelmapper_setfirstboxsetsection_callback != nullptr) {
            qhboxplotmodelmapper_setfirstboxsetsection_callback(this, firstBoxSetSection);
        } else {
            QHBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int lastBoxSetSection() const {
        if (qhboxplotmodelmapper_lastboxsetsection_isbase) {
            qhboxplotmodelmapper_lastboxsetsection_isbase = false;
            return QHBoxPlotModelMapper::lastBoxSetSection();
        } else if (qhboxplotmodelmapper_lastboxsetsection_callback != nullptr) {
            return qhboxplotmodelmapper_lastboxsetsection_callback();
        } else {
            return QHBoxPlotModelMapper::lastBoxSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastBoxSetSection(int lastBoxSetSection) {
        if (qhboxplotmodelmapper_setlastboxsetsection_isbase) {
            qhboxplotmodelmapper_setlastboxsetsection_isbase = false;
            QHBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
        } else if (qhboxplotmodelmapper_setlastboxsetsection_callback != nullptr) {
            qhboxplotmodelmapper_setlastboxsetsection_callback(this, lastBoxSetSection);
        } else {
            QHBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qhboxplotmodelmapper_orientation_isbase) {
            qhboxplotmodelmapper_orientation_isbase = false;
            return QHBoxPlotModelMapper::orientation();
        } else if (qhboxplotmodelmapper_orientation_callback != nullptr) {
            return qhboxplotmodelmapper_orientation_callback();
        } else {
            return QHBoxPlotModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qhboxplotmodelmapper_setorientation_isbase) {
            qhboxplotmodelmapper_setorientation_isbase = false;
            QHBoxPlotModelMapper::setOrientation(orientation);
        } else if (qhboxplotmodelmapper_setorientation_callback != nullptr) {
            qhboxplotmodelmapper_setorientation_callback(this, orientation);
        } else {
            QHBoxPlotModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhboxplotmodelmapper_sender_isbase) {
            qhboxplotmodelmapper_sender_isbase = false;
            return QHBoxPlotModelMapper::sender();
        } else if (qhboxplotmodelmapper_sender_callback != nullptr) {
            return qhboxplotmodelmapper_sender_callback();
        } else {
            return QHBoxPlotModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhboxplotmodelmapper_sendersignalindex_isbase) {
            qhboxplotmodelmapper_sendersignalindex_isbase = false;
            return QHBoxPlotModelMapper::senderSignalIndex();
        } else if (qhboxplotmodelmapper_sendersignalindex_callback != nullptr) {
            return qhboxplotmodelmapper_sendersignalindex_callback();
        } else {
            return QHBoxPlotModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhboxplotmodelmapper_receivers_isbase) {
            qhboxplotmodelmapper_receivers_isbase = false;
            return QHBoxPlotModelMapper::receivers(signal);
        } else if (qhboxplotmodelmapper_receivers_callback != nullptr) {
            return qhboxplotmodelmapper_receivers_callback(this, signal);
        } else {
            return QHBoxPlotModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhboxplotmodelmapper_issignalconnected_isbase) {
            qhboxplotmodelmapper_issignalconnected_isbase = false;
            return QHBoxPlotModelMapper::isSignalConnected(signal);
        } else if (qhboxplotmodelmapper_issignalconnected_callback != nullptr) {
            return qhboxplotmodelmapper_issignalconnected_callback(this, signal);
        } else {
            return QHBoxPlotModelMapper::isSignalConnected(signal);
        }
    }
};

#endif
