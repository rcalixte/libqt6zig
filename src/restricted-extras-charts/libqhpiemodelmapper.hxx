#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHPieModelMapper so that we can call protected methods
class VirtualQHPieModelMapper : public QHPieModelMapper {

  public:
    // Virtual class public types (including callbacks)
    using QHPieModelMapper_Metacall_Callback = int (*)(QHPieModelMapper*, QMetaObject::Call, int, void**);
    using QHPieModelMapper_Event_Callback = bool (*)(QHPieModelMapper*, QEvent*);
    using QHPieModelMapper_EventFilter_Callback = bool (*)(QHPieModelMapper*, QObject*, QEvent*);
    using QHPieModelMapper_TimerEvent_Callback = void (*)(QHPieModelMapper*, QTimerEvent*);
    using QHPieModelMapper_ChildEvent_Callback = void (*)(QHPieModelMapper*, QChildEvent*);
    using QHPieModelMapper_CustomEvent_Callback = void (*)(QHPieModelMapper*, QEvent*);
    using QHPieModelMapper_ConnectNotify_Callback = void (*)(QHPieModelMapper*, const QMetaMethod&);
    using QHPieModelMapper_DisconnectNotify_Callback = void (*)(QHPieModelMapper*, const QMetaMethod&);
    using QHPieModelMapper_First_Callback = int (*)();
    using QHPieModelMapper_SetFirst_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_Count_Callback = int (*)();
    using QHPieModelMapper_SetCount_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_ValuesSection_Callback = int (*)();
    using QHPieModelMapper_SetValuesSection_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_LabelsSection_Callback = int (*)();
    using QHPieModelMapper_SetLabelsSection_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_Orientation_Callback = Qt::Orientation (*)();
    using QHPieModelMapper_SetOrientation_Callback = void (*)(QHPieModelMapper*, Qt::Orientation);
    using QHPieModelMapper_Sender_Callback = QObject* (*)();
    using QHPieModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHPieModelMapper_Receivers_Callback = int (*)(const QHPieModelMapper*, const char*);
    using QHPieModelMapper_IsSignalConnected_Callback = bool (*)(const QHPieModelMapper*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QHPieModelMapper_Metacall_Callback qhpiemodelmapper_metacall_callback = nullptr;
    QHPieModelMapper_Event_Callback qhpiemodelmapper_event_callback = nullptr;
    QHPieModelMapper_EventFilter_Callback qhpiemodelmapper_eventfilter_callback = nullptr;
    QHPieModelMapper_TimerEvent_Callback qhpiemodelmapper_timerevent_callback = nullptr;
    QHPieModelMapper_ChildEvent_Callback qhpiemodelmapper_childevent_callback = nullptr;
    QHPieModelMapper_CustomEvent_Callback qhpiemodelmapper_customevent_callback = nullptr;
    QHPieModelMapper_ConnectNotify_Callback qhpiemodelmapper_connectnotify_callback = nullptr;
    QHPieModelMapper_DisconnectNotify_Callback qhpiemodelmapper_disconnectnotify_callback = nullptr;
    QHPieModelMapper_First_Callback qhpiemodelmapper_first_callback = nullptr;
    QHPieModelMapper_SetFirst_Callback qhpiemodelmapper_setfirst_callback = nullptr;
    QHPieModelMapper_Count_Callback qhpiemodelmapper_count_callback = nullptr;
    QHPieModelMapper_SetCount_Callback qhpiemodelmapper_setcount_callback = nullptr;
    QHPieModelMapper_ValuesSection_Callback qhpiemodelmapper_valuessection_callback = nullptr;
    QHPieModelMapper_SetValuesSection_Callback qhpiemodelmapper_setvaluessection_callback = nullptr;
    QHPieModelMapper_LabelsSection_Callback qhpiemodelmapper_labelssection_callback = nullptr;
    QHPieModelMapper_SetLabelsSection_Callback qhpiemodelmapper_setlabelssection_callback = nullptr;
    QHPieModelMapper_Orientation_Callback qhpiemodelmapper_orientation_callback = nullptr;
    QHPieModelMapper_SetOrientation_Callback qhpiemodelmapper_setorientation_callback = nullptr;
    QHPieModelMapper_Sender_Callback qhpiemodelmapper_sender_callback = nullptr;
    QHPieModelMapper_SenderSignalIndex_Callback qhpiemodelmapper_sendersignalindex_callback = nullptr;
    QHPieModelMapper_Receivers_Callback qhpiemodelmapper_receivers_callback = nullptr;
    QHPieModelMapper_IsSignalConnected_Callback qhpiemodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhpiemodelmapper_metacall_isbase = false;
    mutable bool qhpiemodelmapper_event_isbase = false;
    mutable bool qhpiemodelmapper_eventfilter_isbase = false;
    mutable bool qhpiemodelmapper_timerevent_isbase = false;
    mutable bool qhpiemodelmapper_childevent_isbase = false;
    mutable bool qhpiemodelmapper_customevent_isbase = false;
    mutable bool qhpiemodelmapper_connectnotify_isbase = false;
    mutable bool qhpiemodelmapper_disconnectnotify_isbase = false;
    mutable bool qhpiemodelmapper_first_isbase = false;
    mutable bool qhpiemodelmapper_setfirst_isbase = false;
    mutable bool qhpiemodelmapper_count_isbase = false;
    mutable bool qhpiemodelmapper_setcount_isbase = false;
    mutable bool qhpiemodelmapper_valuessection_isbase = false;
    mutable bool qhpiemodelmapper_setvaluessection_isbase = false;
    mutable bool qhpiemodelmapper_labelssection_isbase = false;
    mutable bool qhpiemodelmapper_setlabelssection_isbase = false;
    mutable bool qhpiemodelmapper_orientation_isbase = false;
    mutable bool qhpiemodelmapper_setorientation_isbase = false;
    mutable bool qhpiemodelmapper_sender_isbase = false;
    mutable bool qhpiemodelmapper_sendersignalindex_isbase = false;
    mutable bool qhpiemodelmapper_receivers_isbase = false;
    mutable bool qhpiemodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQHPieModelMapper() : QHPieModelMapper(){};
    VirtualQHPieModelMapper(QObject* parent) : QHPieModelMapper(parent){};

    ~VirtualQHPieModelMapper() {
        qhpiemodelmapper_metacall_callback = nullptr;
        qhpiemodelmapper_event_callback = nullptr;
        qhpiemodelmapper_eventfilter_callback = nullptr;
        qhpiemodelmapper_timerevent_callback = nullptr;
        qhpiemodelmapper_childevent_callback = nullptr;
        qhpiemodelmapper_customevent_callback = nullptr;
        qhpiemodelmapper_connectnotify_callback = nullptr;
        qhpiemodelmapper_disconnectnotify_callback = nullptr;
        qhpiemodelmapper_first_callback = nullptr;
        qhpiemodelmapper_setfirst_callback = nullptr;
        qhpiemodelmapper_count_callback = nullptr;
        qhpiemodelmapper_setcount_callback = nullptr;
        qhpiemodelmapper_valuessection_callback = nullptr;
        qhpiemodelmapper_setvaluessection_callback = nullptr;
        qhpiemodelmapper_labelssection_callback = nullptr;
        qhpiemodelmapper_setlabelssection_callback = nullptr;
        qhpiemodelmapper_orientation_callback = nullptr;
        qhpiemodelmapper_setorientation_callback = nullptr;
        qhpiemodelmapper_sender_callback = nullptr;
        qhpiemodelmapper_sendersignalindex_callback = nullptr;
        qhpiemodelmapper_receivers_callback = nullptr;
        qhpiemodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQHPieModelMapper_Metacall_Callback(QHPieModelMapper_Metacall_Callback cb) { qhpiemodelmapper_metacall_callback = cb; }
    void setQHPieModelMapper_Event_Callback(QHPieModelMapper_Event_Callback cb) { qhpiemodelmapper_event_callback = cb; }
    void setQHPieModelMapper_EventFilter_Callback(QHPieModelMapper_EventFilter_Callback cb) { qhpiemodelmapper_eventfilter_callback = cb; }
    void setQHPieModelMapper_TimerEvent_Callback(QHPieModelMapper_TimerEvent_Callback cb) { qhpiemodelmapper_timerevent_callback = cb; }
    void setQHPieModelMapper_ChildEvent_Callback(QHPieModelMapper_ChildEvent_Callback cb) { qhpiemodelmapper_childevent_callback = cb; }
    void setQHPieModelMapper_CustomEvent_Callback(QHPieModelMapper_CustomEvent_Callback cb) { qhpiemodelmapper_customevent_callback = cb; }
    void setQHPieModelMapper_ConnectNotify_Callback(QHPieModelMapper_ConnectNotify_Callback cb) { qhpiemodelmapper_connectnotify_callback = cb; }
    void setQHPieModelMapper_DisconnectNotify_Callback(QHPieModelMapper_DisconnectNotify_Callback cb) { qhpiemodelmapper_disconnectnotify_callback = cb; }
    void setQHPieModelMapper_First_Callback(QHPieModelMapper_First_Callback cb) { qhpiemodelmapper_first_callback = cb; }
    void setQHPieModelMapper_SetFirst_Callback(QHPieModelMapper_SetFirst_Callback cb) { qhpiemodelmapper_setfirst_callback = cb; }
    void setQHPieModelMapper_Count_Callback(QHPieModelMapper_Count_Callback cb) { qhpiemodelmapper_count_callback = cb; }
    void setQHPieModelMapper_SetCount_Callback(QHPieModelMapper_SetCount_Callback cb) { qhpiemodelmapper_setcount_callback = cb; }
    void setQHPieModelMapper_ValuesSection_Callback(QHPieModelMapper_ValuesSection_Callback cb) { qhpiemodelmapper_valuessection_callback = cb; }
    void setQHPieModelMapper_SetValuesSection_Callback(QHPieModelMapper_SetValuesSection_Callback cb) { qhpiemodelmapper_setvaluessection_callback = cb; }
    void setQHPieModelMapper_LabelsSection_Callback(QHPieModelMapper_LabelsSection_Callback cb) { qhpiemodelmapper_labelssection_callback = cb; }
    void setQHPieModelMapper_SetLabelsSection_Callback(QHPieModelMapper_SetLabelsSection_Callback cb) { qhpiemodelmapper_setlabelssection_callback = cb; }
    void setQHPieModelMapper_Orientation_Callback(QHPieModelMapper_Orientation_Callback cb) { qhpiemodelmapper_orientation_callback = cb; }
    void setQHPieModelMapper_SetOrientation_Callback(QHPieModelMapper_SetOrientation_Callback cb) { qhpiemodelmapper_setorientation_callback = cb; }
    void setQHPieModelMapper_Sender_Callback(QHPieModelMapper_Sender_Callback cb) { qhpiemodelmapper_sender_callback = cb; }
    void setQHPieModelMapper_SenderSignalIndex_Callback(QHPieModelMapper_SenderSignalIndex_Callback cb) { qhpiemodelmapper_sendersignalindex_callback = cb; }
    void setQHPieModelMapper_Receivers_Callback(QHPieModelMapper_Receivers_Callback cb) { qhpiemodelmapper_receivers_callback = cb; }
    void setQHPieModelMapper_IsSignalConnected_Callback(QHPieModelMapper_IsSignalConnected_Callback cb) { qhpiemodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    void setQHPieModelMapper_Metacall_IsBase(bool value) const { qhpiemodelmapper_metacall_isbase = value; }
    void setQHPieModelMapper_Event_IsBase(bool value) const { qhpiemodelmapper_event_isbase = value; }
    void setQHPieModelMapper_EventFilter_IsBase(bool value) const { qhpiemodelmapper_eventfilter_isbase = value; }
    void setQHPieModelMapper_TimerEvent_IsBase(bool value) const { qhpiemodelmapper_timerevent_isbase = value; }
    void setQHPieModelMapper_ChildEvent_IsBase(bool value) const { qhpiemodelmapper_childevent_isbase = value; }
    void setQHPieModelMapper_CustomEvent_IsBase(bool value) const { qhpiemodelmapper_customevent_isbase = value; }
    void setQHPieModelMapper_ConnectNotify_IsBase(bool value) const { qhpiemodelmapper_connectnotify_isbase = value; }
    void setQHPieModelMapper_DisconnectNotify_IsBase(bool value) const { qhpiemodelmapper_disconnectnotify_isbase = value; }
    void setQHPieModelMapper_First_IsBase(bool value) const { qhpiemodelmapper_first_isbase = value; }
    void setQHPieModelMapper_SetFirst_IsBase(bool value) const { qhpiemodelmapper_setfirst_isbase = value; }
    void setQHPieModelMapper_Count_IsBase(bool value) const { qhpiemodelmapper_count_isbase = value; }
    void setQHPieModelMapper_SetCount_IsBase(bool value) const { qhpiemodelmapper_setcount_isbase = value; }
    void setQHPieModelMapper_ValuesSection_IsBase(bool value) const { qhpiemodelmapper_valuessection_isbase = value; }
    void setQHPieModelMapper_SetValuesSection_IsBase(bool value) const { qhpiemodelmapper_setvaluessection_isbase = value; }
    void setQHPieModelMapper_LabelsSection_IsBase(bool value) const { qhpiemodelmapper_labelssection_isbase = value; }
    void setQHPieModelMapper_SetLabelsSection_IsBase(bool value) const { qhpiemodelmapper_setlabelssection_isbase = value; }
    void setQHPieModelMapper_Orientation_IsBase(bool value) const { qhpiemodelmapper_orientation_isbase = value; }
    void setQHPieModelMapper_SetOrientation_IsBase(bool value) const { qhpiemodelmapper_setorientation_isbase = value; }
    void setQHPieModelMapper_Sender_IsBase(bool value) const { qhpiemodelmapper_sender_isbase = value; }
    void setQHPieModelMapper_SenderSignalIndex_IsBase(bool value) const { qhpiemodelmapper_sendersignalindex_isbase = value; }
    void setQHPieModelMapper_Receivers_IsBase(bool value) const { qhpiemodelmapper_receivers_isbase = value; }
    void setQHPieModelMapper_IsSignalConnected_IsBase(bool value) const { qhpiemodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhpiemodelmapper_metacall_isbase) {
            qhpiemodelmapper_metacall_isbase = false;
            return QHPieModelMapper::qt_metacall(param1, param2, param3);
        } else if (qhpiemodelmapper_metacall_callback != nullptr) {
            return qhpiemodelmapper_metacall_callback(this, param1, param2, param3);
        } else {
            return QHPieModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhpiemodelmapper_event_isbase) {
            qhpiemodelmapper_event_isbase = false;
            return QHPieModelMapper::event(event);
        } else if (qhpiemodelmapper_event_callback != nullptr) {
            return qhpiemodelmapper_event_callback(this, event);
        } else {
            return QHPieModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhpiemodelmapper_eventfilter_isbase) {
            qhpiemodelmapper_eventfilter_isbase = false;
            return QHPieModelMapper::eventFilter(watched, event);
        } else if (qhpiemodelmapper_eventfilter_callback != nullptr) {
            return qhpiemodelmapper_eventfilter_callback(this, watched, event);
        } else {
            return QHPieModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhpiemodelmapper_timerevent_isbase) {
            qhpiemodelmapper_timerevent_isbase = false;
            QHPieModelMapper::timerEvent(event);
        } else if (qhpiemodelmapper_timerevent_callback != nullptr) {
            qhpiemodelmapper_timerevent_callback(this, event);
        } else {
            QHPieModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhpiemodelmapper_childevent_isbase) {
            qhpiemodelmapper_childevent_isbase = false;
            QHPieModelMapper::childEvent(event);
        } else if (qhpiemodelmapper_childevent_callback != nullptr) {
            qhpiemodelmapper_childevent_callback(this, event);
        } else {
            QHPieModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhpiemodelmapper_customevent_isbase) {
            qhpiemodelmapper_customevent_isbase = false;
            QHPieModelMapper::customEvent(event);
        } else if (qhpiemodelmapper_customevent_callback != nullptr) {
            qhpiemodelmapper_customevent_callback(this, event);
        } else {
            QHPieModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhpiemodelmapper_connectnotify_isbase) {
            qhpiemodelmapper_connectnotify_isbase = false;
            QHPieModelMapper::connectNotify(signal);
        } else if (qhpiemodelmapper_connectnotify_callback != nullptr) {
            qhpiemodelmapper_connectnotify_callback(this, signal);
        } else {
            QHPieModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhpiemodelmapper_disconnectnotify_isbase) {
            qhpiemodelmapper_disconnectnotify_isbase = false;
            QHPieModelMapper::disconnectNotify(signal);
        } else if (qhpiemodelmapper_disconnectnotify_callback != nullptr) {
            qhpiemodelmapper_disconnectnotify_callback(this, signal);
        } else {
            QHPieModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qhpiemodelmapper_first_isbase) {
            qhpiemodelmapper_first_isbase = false;
            return QHPieModelMapper::first();
        } else if (qhpiemodelmapper_first_callback != nullptr) {
            return qhpiemodelmapper_first_callback();
        } else {
            return QHPieModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qhpiemodelmapper_setfirst_isbase) {
            qhpiemodelmapper_setfirst_isbase = false;
            QHPieModelMapper::setFirst(first);
        } else if (qhpiemodelmapper_setfirst_callback != nullptr) {
            qhpiemodelmapper_setfirst_callback(this, first);
        } else {
            QHPieModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qhpiemodelmapper_count_isbase) {
            qhpiemodelmapper_count_isbase = false;
            return QHPieModelMapper::count();
        } else if (qhpiemodelmapper_count_callback != nullptr) {
            return qhpiemodelmapper_count_callback();
        } else {
            return QHPieModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qhpiemodelmapper_setcount_isbase) {
            qhpiemodelmapper_setcount_isbase = false;
            QHPieModelMapper::setCount(count);
        } else if (qhpiemodelmapper_setcount_callback != nullptr) {
            qhpiemodelmapper_setcount_callback(this, count);
        } else {
            QHPieModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    int valuesSection() const {
        if (qhpiemodelmapper_valuessection_isbase) {
            qhpiemodelmapper_valuessection_isbase = false;
            return QHPieModelMapper::valuesSection();
        } else if (qhpiemodelmapper_valuessection_callback != nullptr) {
            return qhpiemodelmapper_valuessection_callback();
        } else {
            return QHPieModelMapper::valuesSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setValuesSection(int valuesSection) {
        if (qhpiemodelmapper_setvaluessection_isbase) {
            qhpiemodelmapper_setvaluessection_isbase = false;
            QHPieModelMapper::setValuesSection(valuesSection);
        } else if (qhpiemodelmapper_setvaluessection_callback != nullptr) {
            qhpiemodelmapper_setvaluessection_callback(this, valuesSection);
        } else {
            QHPieModelMapper::setValuesSection(valuesSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int labelsSection() const {
        if (qhpiemodelmapper_labelssection_isbase) {
            qhpiemodelmapper_labelssection_isbase = false;
            return QHPieModelMapper::labelsSection();
        } else if (qhpiemodelmapper_labelssection_callback != nullptr) {
            return qhpiemodelmapper_labelssection_callback();
        } else {
            return QHPieModelMapper::labelsSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLabelsSection(int labelsSection) {
        if (qhpiemodelmapper_setlabelssection_isbase) {
            qhpiemodelmapper_setlabelssection_isbase = false;
            QHPieModelMapper::setLabelsSection(labelsSection);
        } else if (qhpiemodelmapper_setlabelssection_callback != nullptr) {
            qhpiemodelmapper_setlabelssection_callback(this, labelsSection);
        } else {
            QHPieModelMapper::setLabelsSection(labelsSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qhpiemodelmapper_orientation_isbase) {
            qhpiemodelmapper_orientation_isbase = false;
            return QHPieModelMapper::orientation();
        } else if (qhpiemodelmapper_orientation_callback != nullptr) {
            return qhpiemodelmapper_orientation_callback();
        } else {
            return QHPieModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qhpiemodelmapper_setorientation_isbase) {
            qhpiemodelmapper_setorientation_isbase = false;
            QHPieModelMapper::setOrientation(orientation);
        } else if (qhpiemodelmapper_setorientation_callback != nullptr) {
            qhpiemodelmapper_setorientation_callback(this, orientation);
        } else {
            QHPieModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhpiemodelmapper_sender_isbase) {
            qhpiemodelmapper_sender_isbase = false;
            return QHPieModelMapper::sender();
        } else if (qhpiemodelmapper_sender_callback != nullptr) {
            return qhpiemodelmapper_sender_callback();
        } else {
            return QHPieModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhpiemodelmapper_sendersignalindex_isbase) {
            qhpiemodelmapper_sendersignalindex_isbase = false;
            return QHPieModelMapper::senderSignalIndex();
        } else if (qhpiemodelmapper_sendersignalindex_callback != nullptr) {
            return qhpiemodelmapper_sendersignalindex_callback();
        } else {
            return QHPieModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhpiemodelmapper_receivers_isbase) {
            qhpiemodelmapper_receivers_isbase = false;
            return QHPieModelMapper::receivers(signal);
        } else if (qhpiemodelmapper_receivers_callback != nullptr) {
            return qhpiemodelmapper_receivers_callback(this, signal);
        } else {
            return QHPieModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhpiemodelmapper_issignalconnected_isbase) {
            qhpiemodelmapper_issignalconnected_isbase = false;
            return QHPieModelMapper::isSignalConnected(signal);
        } else if (qhpiemodelmapper_issignalconnected_callback != nullptr) {
            return qhpiemodelmapper_issignalconnected_callback(this, signal);
        } else {
            return QHPieModelMapper::isSignalConnected(signal);
        }
    }
};

#endif
