#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVBoxPlotModelMapper so that we can call protected methods
class VirtualQVBoxPlotModelMapper : public QVBoxPlotModelMapper {

  public:
    // Virtual class public types (including callbacks)
    using QVBoxPlotModelMapper_Metacall_Callback = int (*)(QVBoxPlotModelMapper*, QMetaObject::Call, int, void**);
    using QVBoxPlotModelMapper_Event_Callback = bool (*)(QVBoxPlotModelMapper*, QEvent*);
    using QVBoxPlotModelMapper_EventFilter_Callback = bool (*)(QVBoxPlotModelMapper*, QObject*, QEvent*);
    using QVBoxPlotModelMapper_TimerEvent_Callback = void (*)(QVBoxPlotModelMapper*, QTimerEvent*);
    using QVBoxPlotModelMapper_ChildEvent_Callback = void (*)(QVBoxPlotModelMapper*, QChildEvent*);
    using QVBoxPlotModelMapper_CustomEvent_Callback = void (*)(QVBoxPlotModelMapper*, QEvent*);
    using QVBoxPlotModelMapper_ConnectNotify_Callback = void (*)(QVBoxPlotModelMapper*, const QMetaMethod&);
    using QVBoxPlotModelMapper_DisconnectNotify_Callback = void (*)(QVBoxPlotModelMapper*, const QMetaMethod&);
    using QVBoxPlotModelMapper_First_Callback = int (*)();
    using QVBoxPlotModelMapper_SetFirst_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_Count_Callback = int (*)();
    using QVBoxPlotModelMapper_SetCount_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_FirstBoxSetSection_Callback = int (*)();
    using QVBoxPlotModelMapper_SetFirstBoxSetSection_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_LastBoxSetSection_Callback = int (*)();
    using QVBoxPlotModelMapper_SetLastBoxSetSection_Callback = void (*)(QVBoxPlotModelMapper*, int);
    using QVBoxPlotModelMapper_Orientation_Callback = Qt::Orientation (*)();
    using QVBoxPlotModelMapper_SetOrientation_Callback = void (*)(QVBoxPlotModelMapper*, Qt::Orientation);
    using QVBoxPlotModelMapper_Sender_Callback = QObject* (*)();
    using QVBoxPlotModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVBoxPlotModelMapper_Receivers_Callback = int (*)(const QVBoxPlotModelMapper*, const char*);
    using QVBoxPlotModelMapper_IsSignalConnected_Callback = bool (*)(const QVBoxPlotModelMapper*, const QMetaMethod&);

  protected:
    // Instance callback storage
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
    VirtualQVBoxPlotModelMapper() : QVBoxPlotModelMapper(){};
    VirtualQVBoxPlotModelMapper(QObject* parent) : QVBoxPlotModelMapper(parent){};

    ~VirtualQVBoxPlotModelMapper() {
        qvboxplotmodelmapper_metacall_callback = nullptr;
        qvboxplotmodelmapper_event_callback = nullptr;
        qvboxplotmodelmapper_eventfilter_callback = nullptr;
        qvboxplotmodelmapper_timerevent_callback = nullptr;
        qvboxplotmodelmapper_childevent_callback = nullptr;
        qvboxplotmodelmapper_customevent_callback = nullptr;
        qvboxplotmodelmapper_connectnotify_callback = nullptr;
        qvboxplotmodelmapper_disconnectnotify_callback = nullptr;
        qvboxplotmodelmapper_first_callback = nullptr;
        qvboxplotmodelmapper_setfirst_callback = nullptr;
        qvboxplotmodelmapper_count_callback = nullptr;
        qvboxplotmodelmapper_setcount_callback = nullptr;
        qvboxplotmodelmapper_firstboxsetsection_callback = nullptr;
        qvboxplotmodelmapper_setfirstboxsetsection_callback = nullptr;
        qvboxplotmodelmapper_lastboxsetsection_callback = nullptr;
        qvboxplotmodelmapper_setlastboxsetsection_callback = nullptr;
        qvboxplotmodelmapper_orientation_callback = nullptr;
        qvboxplotmodelmapper_setorientation_callback = nullptr;
        qvboxplotmodelmapper_sender_callback = nullptr;
        qvboxplotmodelmapper_sendersignalindex_callback = nullptr;
        qvboxplotmodelmapper_receivers_callback = nullptr;
        qvboxplotmodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQVBoxPlotModelMapper_Metacall_Callback(QVBoxPlotModelMapper_Metacall_Callback cb) { qvboxplotmodelmapper_metacall_callback = cb; }
    void setQVBoxPlotModelMapper_Event_Callback(QVBoxPlotModelMapper_Event_Callback cb) { qvboxplotmodelmapper_event_callback = cb; }
    void setQVBoxPlotModelMapper_EventFilter_Callback(QVBoxPlotModelMapper_EventFilter_Callback cb) { qvboxplotmodelmapper_eventfilter_callback = cb; }
    void setQVBoxPlotModelMapper_TimerEvent_Callback(QVBoxPlotModelMapper_TimerEvent_Callback cb) { qvboxplotmodelmapper_timerevent_callback = cb; }
    void setQVBoxPlotModelMapper_ChildEvent_Callback(QVBoxPlotModelMapper_ChildEvent_Callback cb) { qvboxplotmodelmapper_childevent_callback = cb; }
    void setQVBoxPlotModelMapper_CustomEvent_Callback(QVBoxPlotModelMapper_CustomEvent_Callback cb) { qvboxplotmodelmapper_customevent_callback = cb; }
    void setQVBoxPlotModelMapper_ConnectNotify_Callback(QVBoxPlotModelMapper_ConnectNotify_Callback cb) { qvboxplotmodelmapper_connectnotify_callback = cb; }
    void setQVBoxPlotModelMapper_DisconnectNotify_Callback(QVBoxPlotModelMapper_DisconnectNotify_Callback cb) { qvboxplotmodelmapper_disconnectnotify_callback = cb; }
    void setQVBoxPlotModelMapper_First_Callback(QVBoxPlotModelMapper_First_Callback cb) { qvboxplotmodelmapper_first_callback = cb; }
    void setQVBoxPlotModelMapper_SetFirst_Callback(QVBoxPlotModelMapper_SetFirst_Callback cb) { qvboxplotmodelmapper_setfirst_callback = cb; }
    void setQVBoxPlotModelMapper_Count_Callback(QVBoxPlotModelMapper_Count_Callback cb) { qvboxplotmodelmapper_count_callback = cb; }
    void setQVBoxPlotModelMapper_SetCount_Callback(QVBoxPlotModelMapper_SetCount_Callback cb) { qvboxplotmodelmapper_setcount_callback = cb; }
    void setQVBoxPlotModelMapper_FirstBoxSetSection_Callback(QVBoxPlotModelMapper_FirstBoxSetSection_Callback cb) { qvboxplotmodelmapper_firstboxsetsection_callback = cb; }
    void setQVBoxPlotModelMapper_SetFirstBoxSetSection_Callback(QVBoxPlotModelMapper_SetFirstBoxSetSection_Callback cb) { qvboxplotmodelmapper_setfirstboxsetsection_callback = cb; }
    void setQVBoxPlotModelMapper_LastBoxSetSection_Callback(QVBoxPlotModelMapper_LastBoxSetSection_Callback cb) { qvboxplotmodelmapper_lastboxsetsection_callback = cb; }
    void setQVBoxPlotModelMapper_SetLastBoxSetSection_Callback(QVBoxPlotModelMapper_SetLastBoxSetSection_Callback cb) { qvboxplotmodelmapper_setlastboxsetsection_callback = cb; }
    void setQVBoxPlotModelMapper_Orientation_Callback(QVBoxPlotModelMapper_Orientation_Callback cb) { qvboxplotmodelmapper_orientation_callback = cb; }
    void setQVBoxPlotModelMapper_SetOrientation_Callback(QVBoxPlotModelMapper_SetOrientation_Callback cb) { qvboxplotmodelmapper_setorientation_callback = cb; }
    void setQVBoxPlotModelMapper_Sender_Callback(QVBoxPlotModelMapper_Sender_Callback cb) { qvboxplotmodelmapper_sender_callback = cb; }
    void setQVBoxPlotModelMapper_SenderSignalIndex_Callback(QVBoxPlotModelMapper_SenderSignalIndex_Callback cb) { qvboxplotmodelmapper_sendersignalindex_callback = cb; }
    void setQVBoxPlotModelMapper_Receivers_Callback(QVBoxPlotModelMapper_Receivers_Callback cb) { qvboxplotmodelmapper_receivers_callback = cb; }
    void setQVBoxPlotModelMapper_IsSignalConnected_Callback(QVBoxPlotModelMapper_IsSignalConnected_Callback cb) { qvboxplotmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    void setQVBoxPlotModelMapper_Metacall_IsBase(bool value) const { qvboxplotmodelmapper_metacall_isbase = value; }
    void setQVBoxPlotModelMapper_Event_IsBase(bool value) const { qvboxplotmodelmapper_event_isbase = value; }
    void setQVBoxPlotModelMapper_EventFilter_IsBase(bool value) const { qvboxplotmodelmapper_eventfilter_isbase = value; }
    void setQVBoxPlotModelMapper_TimerEvent_IsBase(bool value) const { qvboxplotmodelmapper_timerevent_isbase = value; }
    void setQVBoxPlotModelMapper_ChildEvent_IsBase(bool value) const { qvboxplotmodelmapper_childevent_isbase = value; }
    void setQVBoxPlotModelMapper_CustomEvent_IsBase(bool value) const { qvboxplotmodelmapper_customevent_isbase = value; }
    void setQVBoxPlotModelMapper_ConnectNotify_IsBase(bool value) const { qvboxplotmodelmapper_connectnotify_isbase = value; }
    void setQVBoxPlotModelMapper_DisconnectNotify_IsBase(bool value) const { qvboxplotmodelmapper_disconnectnotify_isbase = value; }
    void setQVBoxPlotModelMapper_First_IsBase(bool value) const { qvboxplotmodelmapper_first_isbase = value; }
    void setQVBoxPlotModelMapper_SetFirst_IsBase(bool value) const { qvboxplotmodelmapper_setfirst_isbase = value; }
    void setQVBoxPlotModelMapper_Count_IsBase(bool value) const { qvboxplotmodelmapper_count_isbase = value; }
    void setQVBoxPlotModelMapper_SetCount_IsBase(bool value) const { qvboxplotmodelmapper_setcount_isbase = value; }
    void setQVBoxPlotModelMapper_FirstBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_firstboxsetsection_isbase = value; }
    void setQVBoxPlotModelMapper_SetFirstBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_setfirstboxsetsection_isbase = value; }
    void setQVBoxPlotModelMapper_LastBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_lastboxsetsection_isbase = value; }
    void setQVBoxPlotModelMapper_SetLastBoxSetSection_IsBase(bool value) const { qvboxplotmodelmapper_setlastboxsetsection_isbase = value; }
    void setQVBoxPlotModelMapper_Orientation_IsBase(bool value) const { qvboxplotmodelmapper_orientation_isbase = value; }
    void setQVBoxPlotModelMapper_SetOrientation_IsBase(bool value) const { qvboxplotmodelmapper_setorientation_isbase = value; }
    void setQVBoxPlotModelMapper_Sender_IsBase(bool value) const { qvboxplotmodelmapper_sender_isbase = value; }
    void setQVBoxPlotModelMapper_SenderSignalIndex_IsBase(bool value) const { qvboxplotmodelmapper_sendersignalindex_isbase = value; }
    void setQVBoxPlotModelMapper_Receivers_IsBase(bool value) const { qvboxplotmodelmapper_receivers_isbase = value; }
    void setQVBoxPlotModelMapper_IsSignalConnected_IsBase(bool value) const { qvboxplotmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvboxplotmodelmapper_metacall_isbase) {
            qvboxplotmodelmapper_metacall_isbase = false;
            return QVBoxPlotModelMapper::qt_metacall(param1, param2, param3);
        } else if (qvboxplotmodelmapper_metacall_callback != nullptr) {
            return qvboxplotmodelmapper_metacall_callback(this, param1, param2, param3);
        } else {
            return QVBoxPlotModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvboxplotmodelmapper_event_isbase) {
            qvboxplotmodelmapper_event_isbase = false;
            return QVBoxPlotModelMapper::event(event);
        } else if (qvboxplotmodelmapper_event_callback != nullptr) {
            return qvboxplotmodelmapper_event_callback(this, event);
        } else {
            return QVBoxPlotModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvboxplotmodelmapper_eventfilter_isbase) {
            qvboxplotmodelmapper_eventfilter_isbase = false;
            return QVBoxPlotModelMapper::eventFilter(watched, event);
        } else if (qvboxplotmodelmapper_eventfilter_callback != nullptr) {
            return qvboxplotmodelmapper_eventfilter_callback(this, watched, event);
        } else {
            return QVBoxPlotModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvboxplotmodelmapper_timerevent_isbase) {
            qvboxplotmodelmapper_timerevent_isbase = false;
            QVBoxPlotModelMapper::timerEvent(event);
        } else if (qvboxplotmodelmapper_timerevent_callback != nullptr) {
            qvboxplotmodelmapper_timerevent_callback(this, event);
        } else {
            QVBoxPlotModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvboxplotmodelmapper_childevent_isbase) {
            qvboxplotmodelmapper_childevent_isbase = false;
            QVBoxPlotModelMapper::childEvent(event);
        } else if (qvboxplotmodelmapper_childevent_callback != nullptr) {
            qvboxplotmodelmapper_childevent_callback(this, event);
        } else {
            QVBoxPlotModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvboxplotmodelmapper_customevent_isbase) {
            qvboxplotmodelmapper_customevent_isbase = false;
            QVBoxPlotModelMapper::customEvent(event);
        } else if (qvboxplotmodelmapper_customevent_callback != nullptr) {
            qvboxplotmodelmapper_customevent_callback(this, event);
        } else {
            QVBoxPlotModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvboxplotmodelmapper_connectnotify_isbase) {
            qvboxplotmodelmapper_connectnotify_isbase = false;
            QVBoxPlotModelMapper::connectNotify(signal);
        } else if (qvboxplotmodelmapper_connectnotify_callback != nullptr) {
            qvboxplotmodelmapper_connectnotify_callback(this, signal);
        } else {
            QVBoxPlotModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvboxplotmodelmapper_disconnectnotify_isbase) {
            qvboxplotmodelmapper_disconnectnotify_isbase = false;
            QVBoxPlotModelMapper::disconnectNotify(signal);
        } else if (qvboxplotmodelmapper_disconnectnotify_callback != nullptr) {
            qvboxplotmodelmapper_disconnectnotify_callback(this, signal);
        } else {
            QVBoxPlotModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvboxplotmodelmapper_first_isbase) {
            qvboxplotmodelmapper_first_isbase = false;
            return QVBoxPlotModelMapper::first();
        } else if (qvboxplotmodelmapper_first_callback != nullptr) {
            return qvboxplotmodelmapper_first_callback();
        } else {
            return QVBoxPlotModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvboxplotmodelmapper_setfirst_isbase) {
            qvboxplotmodelmapper_setfirst_isbase = false;
            QVBoxPlotModelMapper::setFirst(first);
        } else if (qvboxplotmodelmapper_setfirst_callback != nullptr) {
            qvboxplotmodelmapper_setfirst_callback(this, first);
        } else {
            QVBoxPlotModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvboxplotmodelmapper_count_isbase) {
            qvboxplotmodelmapper_count_isbase = false;
            return QVBoxPlotModelMapper::count();
        } else if (qvboxplotmodelmapper_count_callback != nullptr) {
            return qvboxplotmodelmapper_count_callback();
        } else {
            return QVBoxPlotModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvboxplotmodelmapper_setcount_isbase) {
            qvboxplotmodelmapper_setcount_isbase = false;
            QVBoxPlotModelMapper::setCount(count);
        } else if (qvboxplotmodelmapper_setcount_callback != nullptr) {
            qvboxplotmodelmapper_setcount_callback(this, count);
        } else {
            QVBoxPlotModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    int firstBoxSetSection() const {
        if (qvboxplotmodelmapper_firstboxsetsection_isbase) {
            qvboxplotmodelmapper_firstboxsetsection_isbase = false;
            return QVBoxPlotModelMapper::firstBoxSetSection();
        } else if (qvboxplotmodelmapper_firstboxsetsection_callback != nullptr) {
            return qvboxplotmodelmapper_firstboxsetsection_callback();
        } else {
            return QVBoxPlotModelMapper::firstBoxSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBoxSetSection(int firstBoxSetSection) {
        if (qvboxplotmodelmapper_setfirstboxsetsection_isbase) {
            qvboxplotmodelmapper_setfirstboxsetsection_isbase = false;
            QVBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
        } else if (qvboxplotmodelmapper_setfirstboxsetsection_callback != nullptr) {
            qvboxplotmodelmapper_setfirstboxsetsection_callback(this, firstBoxSetSection);
        } else {
            QVBoxPlotModelMapper::setFirstBoxSetSection(firstBoxSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int lastBoxSetSection() const {
        if (qvboxplotmodelmapper_lastboxsetsection_isbase) {
            qvboxplotmodelmapper_lastboxsetsection_isbase = false;
            return QVBoxPlotModelMapper::lastBoxSetSection();
        } else if (qvboxplotmodelmapper_lastboxsetsection_callback != nullptr) {
            return qvboxplotmodelmapper_lastboxsetsection_callback();
        } else {
            return QVBoxPlotModelMapper::lastBoxSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastBoxSetSection(int lastBoxSetSection) {
        if (qvboxplotmodelmapper_setlastboxsetsection_isbase) {
            qvboxplotmodelmapper_setlastboxsetsection_isbase = false;
            QVBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
        } else if (qvboxplotmodelmapper_setlastboxsetsection_callback != nullptr) {
            qvboxplotmodelmapper_setlastboxsetsection_callback(this, lastBoxSetSection);
        } else {
            QVBoxPlotModelMapper::setLastBoxSetSection(lastBoxSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvboxplotmodelmapper_orientation_isbase) {
            qvboxplotmodelmapper_orientation_isbase = false;
            return QVBoxPlotModelMapper::orientation();
        } else if (qvboxplotmodelmapper_orientation_callback != nullptr) {
            return qvboxplotmodelmapper_orientation_callback();
        } else {
            return QVBoxPlotModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvboxplotmodelmapper_setorientation_isbase) {
            qvboxplotmodelmapper_setorientation_isbase = false;
            QVBoxPlotModelMapper::setOrientation(orientation);
        } else if (qvboxplotmodelmapper_setorientation_callback != nullptr) {
            qvboxplotmodelmapper_setorientation_callback(this, orientation);
        } else {
            QVBoxPlotModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvboxplotmodelmapper_sender_isbase) {
            qvboxplotmodelmapper_sender_isbase = false;
            return QVBoxPlotModelMapper::sender();
        } else if (qvboxplotmodelmapper_sender_callback != nullptr) {
            return qvboxplotmodelmapper_sender_callback();
        } else {
            return QVBoxPlotModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvboxplotmodelmapper_sendersignalindex_isbase) {
            qvboxplotmodelmapper_sendersignalindex_isbase = false;
            return QVBoxPlotModelMapper::senderSignalIndex();
        } else if (qvboxplotmodelmapper_sendersignalindex_callback != nullptr) {
            return qvboxplotmodelmapper_sendersignalindex_callback();
        } else {
            return QVBoxPlotModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvboxplotmodelmapper_receivers_isbase) {
            qvboxplotmodelmapper_receivers_isbase = false;
            return QVBoxPlotModelMapper::receivers(signal);
        } else if (qvboxplotmodelmapper_receivers_callback != nullptr) {
            return qvboxplotmodelmapper_receivers_callback(this, signal);
        } else {
            return QVBoxPlotModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvboxplotmodelmapper_issignalconnected_isbase) {
            qvboxplotmodelmapper_issignalconnected_isbase = false;
            return QVBoxPlotModelMapper::isSignalConnected(signal);
        } else if (qvboxplotmodelmapper_issignalconnected_callback != nullptr) {
            return qvboxplotmodelmapper_issignalconnected_callback(this, signal);
        } else {
            return QVBoxPlotModelMapper::isSignalConnected(signal);
        }
    }
};

#endif
