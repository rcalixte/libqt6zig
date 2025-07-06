#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHPieModelMapper so that we can call protected methods
class VirtualQHPieModelMapper final : public QHPieModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQHPieModelMapper = true;

    // Virtual class public types (including callbacks)
    using QHPieModelMapper_Metacall_Callback = int (*)(QHPieModelMapper*, int, int, void**);
    using QHPieModelMapper_Event_Callback = bool (*)(QHPieModelMapper*, QEvent*);
    using QHPieModelMapper_EventFilter_Callback = bool (*)(QHPieModelMapper*, QObject*, QEvent*);
    using QHPieModelMapper_TimerEvent_Callback = void (*)(QHPieModelMapper*, QTimerEvent*);
    using QHPieModelMapper_ChildEvent_Callback = void (*)(QHPieModelMapper*, QChildEvent*);
    using QHPieModelMapper_CustomEvent_Callback = void (*)(QHPieModelMapper*, QEvent*);
    using QHPieModelMapper_ConnectNotify_Callback = void (*)(QHPieModelMapper*, QMetaMethod*);
    using QHPieModelMapper_DisconnectNotify_Callback = void (*)(QHPieModelMapper*, QMetaMethod*);
    using QHPieModelMapper_First_Callback = int (*)();
    using QHPieModelMapper_SetFirst_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_Count_Callback = int (*)();
    using QHPieModelMapper_SetCount_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_ValuesSection_Callback = int (*)();
    using QHPieModelMapper_SetValuesSection_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_LabelsSection_Callback = int (*)();
    using QHPieModelMapper_SetLabelsSection_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_Orientation_Callback = int (*)();
    using QHPieModelMapper_SetOrientation_Callback = void (*)(QHPieModelMapper*, int);
    using QHPieModelMapper_Sender_Callback = QObject* (*)();
    using QHPieModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHPieModelMapper_Receivers_Callback = int (*)(const QHPieModelMapper*, const char*);
    using QHPieModelMapper_IsSignalConnected_Callback = bool (*)(const QHPieModelMapper*, QMetaMethod*);

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
    VirtualQHPieModelMapper() : QHPieModelMapper() {};
    VirtualQHPieModelMapper(QObject* parent) : QHPieModelMapper(parent) {};

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
    inline void setQHPieModelMapper_Metacall_Callback(QHPieModelMapper_Metacall_Callback cb) { qhpiemodelmapper_metacall_callback = cb; }
    inline void setQHPieModelMapper_Event_Callback(QHPieModelMapper_Event_Callback cb) { qhpiemodelmapper_event_callback = cb; }
    inline void setQHPieModelMapper_EventFilter_Callback(QHPieModelMapper_EventFilter_Callback cb) { qhpiemodelmapper_eventfilter_callback = cb; }
    inline void setQHPieModelMapper_TimerEvent_Callback(QHPieModelMapper_TimerEvent_Callback cb) { qhpiemodelmapper_timerevent_callback = cb; }
    inline void setQHPieModelMapper_ChildEvent_Callback(QHPieModelMapper_ChildEvent_Callback cb) { qhpiemodelmapper_childevent_callback = cb; }
    inline void setQHPieModelMapper_CustomEvent_Callback(QHPieModelMapper_CustomEvent_Callback cb) { qhpiemodelmapper_customevent_callback = cb; }
    inline void setQHPieModelMapper_ConnectNotify_Callback(QHPieModelMapper_ConnectNotify_Callback cb) { qhpiemodelmapper_connectnotify_callback = cb; }
    inline void setQHPieModelMapper_DisconnectNotify_Callback(QHPieModelMapper_DisconnectNotify_Callback cb) { qhpiemodelmapper_disconnectnotify_callback = cb; }
    inline void setQHPieModelMapper_First_Callback(QHPieModelMapper_First_Callback cb) { qhpiemodelmapper_first_callback = cb; }
    inline void setQHPieModelMapper_SetFirst_Callback(QHPieModelMapper_SetFirst_Callback cb) { qhpiemodelmapper_setfirst_callback = cb; }
    inline void setQHPieModelMapper_Count_Callback(QHPieModelMapper_Count_Callback cb) { qhpiemodelmapper_count_callback = cb; }
    inline void setQHPieModelMapper_SetCount_Callback(QHPieModelMapper_SetCount_Callback cb) { qhpiemodelmapper_setcount_callback = cb; }
    inline void setQHPieModelMapper_ValuesSection_Callback(QHPieModelMapper_ValuesSection_Callback cb) { qhpiemodelmapper_valuessection_callback = cb; }
    inline void setQHPieModelMapper_SetValuesSection_Callback(QHPieModelMapper_SetValuesSection_Callback cb) { qhpiemodelmapper_setvaluessection_callback = cb; }
    inline void setQHPieModelMapper_LabelsSection_Callback(QHPieModelMapper_LabelsSection_Callback cb) { qhpiemodelmapper_labelssection_callback = cb; }
    inline void setQHPieModelMapper_SetLabelsSection_Callback(QHPieModelMapper_SetLabelsSection_Callback cb) { qhpiemodelmapper_setlabelssection_callback = cb; }
    inline void setQHPieModelMapper_Orientation_Callback(QHPieModelMapper_Orientation_Callback cb) { qhpiemodelmapper_orientation_callback = cb; }
    inline void setQHPieModelMapper_SetOrientation_Callback(QHPieModelMapper_SetOrientation_Callback cb) { qhpiemodelmapper_setorientation_callback = cb; }
    inline void setQHPieModelMapper_Sender_Callback(QHPieModelMapper_Sender_Callback cb) { qhpiemodelmapper_sender_callback = cb; }
    inline void setQHPieModelMapper_SenderSignalIndex_Callback(QHPieModelMapper_SenderSignalIndex_Callback cb) { qhpiemodelmapper_sendersignalindex_callback = cb; }
    inline void setQHPieModelMapper_Receivers_Callback(QHPieModelMapper_Receivers_Callback cb) { qhpiemodelmapper_receivers_callback = cb; }
    inline void setQHPieModelMapper_IsSignalConnected_Callback(QHPieModelMapper_IsSignalConnected_Callback cb) { qhpiemodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHPieModelMapper_Metacall_IsBase(bool value) const { qhpiemodelmapper_metacall_isbase = value; }
    inline void setQHPieModelMapper_Event_IsBase(bool value) const { qhpiemodelmapper_event_isbase = value; }
    inline void setQHPieModelMapper_EventFilter_IsBase(bool value) const { qhpiemodelmapper_eventfilter_isbase = value; }
    inline void setQHPieModelMapper_TimerEvent_IsBase(bool value) const { qhpiemodelmapper_timerevent_isbase = value; }
    inline void setQHPieModelMapper_ChildEvent_IsBase(bool value) const { qhpiemodelmapper_childevent_isbase = value; }
    inline void setQHPieModelMapper_CustomEvent_IsBase(bool value) const { qhpiemodelmapper_customevent_isbase = value; }
    inline void setQHPieModelMapper_ConnectNotify_IsBase(bool value) const { qhpiemodelmapper_connectnotify_isbase = value; }
    inline void setQHPieModelMapper_DisconnectNotify_IsBase(bool value) const { qhpiemodelmapper_disconnectnotify_isbase = value; }
    inline void setQHPieModelMapper_First_IsBase(bool value) const { qhpiemodelmapper_first_isbase = value; }
    inline void setQHPieModelMapper_SetFirst_IsBase(bool value) const { qhpiemodelmapper_setfirst_isbase = value; }
    inline void setQHPieModelMapper_Count_IsBase(bool value) const { qhpiemodelmapper_count_isbase = value; }
    inline void setQHPieModelMapper_SetCount_IsBase(bool value) const { qhpiemodelmapper_setcount_isbase = value; }
    inline void setQHPieModelMapper_ValuesSection_IsBase(bool value) const { qhpiemodelmapper_valuessection_isbase = value; }
    inline void setQHPieModelMapper_SetValuesSection_IsBase(bool value) const { qhpiemodelmapper_setvaluessection_isbase = value; }
    inline void setQHPieModelMapper_LabelsSection_IsBase(bool value) const { qhpiemodelmapper_labelssection_isbase = value; }
    inline void setQHPieModelMapper_SetLabelsSection_IsBase(bool value) const { qhpiemodelmapper_setlabelssection_isbase = value; }
    inline void setQHPieModelMapper_Orientation_IsBase(bool value) const { qhpiemodelmapper_orientation_isbase = value; }
    inline void setQHPieModelMapper_SetOrientation_IsBase(bool value) const { qhpiemodelmapper_setorientation_isbase = value; }
    inline void setQHPieModelMapper_Sender_IsBase(bool value) const { qhpiemodelmapper_sender_isbase = value; }
    inline void setQHPieModelMapper_SenderSignalIndex_IsBase(bool value) const { qhpiemodelmapper_sendersignalindex_isbase = value; }
    inline void setQHPieModelMapper_Receivers_IsBase(bool value) const { qhpiemodelmapper_receivers_isbase = value; }
    inline void setQHPieModelMapper_IsSignalConnected_IsBase(bool value) const { qhpiemodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhpiemodelmapper_metacall_isbase) {
            qhpiemodelmapper_metacall_isbase = false;
            return QHPieModelMapper::qt_metacall(param1, param2, param3);
        } else if (qhpiemodelmapper_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qhpiemodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
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
            QEvent* cbval1 = event;

            bool callback_ret = qhpiemodelmapper_event_callback(this, cbval1);
            return callback_ret;
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
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qhpiemodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
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
            QTimerEvent* cbval1 = event;

            qhpiemodelmapper_timerevent_callback(this, cbval1);
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
            QChildEvent* cbval1 = event;

            qhpiemodelmapper_childevent_callback(this, cbval1);
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
            QEvent* cbval1 = event;

            qhpiemodelmapper_customevent_callback(this, cbval1);
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
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhpiemodelmapper_connectnotify_callback(this, cbval1);
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
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhpiemodelmapper_disconnectnotify_callback(this, cbval1);
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
            int callback_ret = qhpiemodelmapper_first_callback();
            return static_cast<int>(callback_ret);
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
            int cbval1 = first;

            qhpiemodelmapper_setfirst_callback(this, cbval1);
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
            int callback_ret = qhpiemodelmapper_count_callback();
            return static_cast<int>(callback_ret);
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
            int cbval1 = count;

            qhpiemodelmapper_setcount_callback(this, cbval1);
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
            int callback_ret = qhpiemodelmapper_valuessection_callback();
            return static_cast<int>(callback_ret);
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
            int cbval1 = valuesSection;

            qhpiemodelmapper_setvaluessection_callback(this, cbval1);
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
            int callback_ret = qhpiemodelmapper_labelssection_callback();
            return static_cast<int>(callback_ret);
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
            int cbval1 = labelsSection;

            qhpiemodelmapper_setlabelssection_callback(this, cbval1);
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
            int callback_ret = qhpiemodelmapper_orientation_callback();
            return static_cast<Qt::Orientation>(callback_ret);
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
            int cbval1 = static_cast<int>(orientation);

            qhpiemodelmapper_setorientation_callback(this, cbval1);
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
            QObject* callback_ret = qhpiemodelmapper_sender_callback();
            return callback_ret;
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
            int callback_ret = qhpiemodelmapper_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
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
            const char* cbval1 = (const char*)signal;

            int callback_ret = qhpiemodelmapper_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
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
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qhpiemodelmapper_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHPieModelMapper::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QHPieModelMapper_TimerEvent(QHPieModelMapper* self, QTimerEvent* event);
    friend void QHPieModelMapper_QBaseTimerEvent(QHPieModelMapper* self, QTimerEvent* event);
    friend void QHPieModelMapper_ChildEvent(QHPieModelMapper* self, QChildEvent* event);
    friend void QHPieModelMapper_QBaseChildEvent(QHPieModelMapper* self, QChildEvent* event);
    friend void QHPieModelMapper_CustomEvent(QHPieModelMapper* self, QEvent* event);
    friend void QHPieModelMapper_QBaseCustomEvent(QHPieModelMapper* self, QEvent* event);
    friend void QHPieModelMapper_ConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
    friend void QHPieModelMapper_QBaseConnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
    friend void QHPieModelMapper_DisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
    friend void QHPieModelMapper_QBaseDisconnectNotify(QHPieModelMapper* self, const QMetaMethod* signal);
    friend int QHPieModelMapper_First(const QHPieModelMapper* self);
    friend int QHPieModelMapper_QBaseFirst(const QHPieModelMapper* self);
    friend void QHPieModelMapper_SetFirst(QHPieModelMapper* self, int first);
    friend void QHPieModelMapper_QBaseSetFirst(QHPieModelMapper* self, int first);
    friend int QHPieModelMapper_Count(const QHPieModelMapper* self);
    friend int QHPieModelMapper_QBaseCount(const QHPieModelMapper* self);
    friend void QHPieModelMapper_SetCount(QHPieModelMapper* self, int count);
    friend void QHPieModelMapper_QBaseSetCount(QHPieModelMapper* self, int count);
    friend int QHPieModelMapper_ValuesSection(const QHPieModelMapper* self);
    friend int QHPieModelMapper_QBaseValuesSection(const QHPieModelMapper* self);
    friend void QHPieModelMapper_SetValuesSection(QHPieModelMapper* self, int valuesSection);
    friend void QHPieModelMapper_QBaseSetValuesSection(QHPieModelMapper* self, int valuesSection);
    friend int QHPieModelMapper_LabelsSection(const QHPieModelMapper* self);
    friend int QHPieModelMapper_QBaseLabelsSection(const QHPieModelMapper* self);
    friend void QHPieModelMapper_SetLabelsSection(QHPieModelMapper* self, int labelsSection);
    friend void QHPieModelMapper_QBaseSetLabelsSection(QHPieModelMapper* self, int labelsSection);
    friend int QHPieModelMapper_Orientation(const QHPieModelMapper* self);
    friend int QHPieModelMapper_QBaseOrientation(const QHPieModelMapper* self);
    friend void QHPieModelMapper_SetOrientation(QHPieModelMapper* self, int orientation);
    friend void QHPieModelMapper_QBaseSetOrientation(QHPieModelMapper* self, int orientation);
    friend QObject* QHPieModelMapper_Sender(const QHPieModelMapper* self);
    friend QObject* QHPieModelMapper_QBaseSender(const QHPieModelMapper* self);
    friend int QHPieModelMapper_SenderSignalIndex(const QHPieModelMapper* self);
    friend int QHPieModelMapper_QBaseSenderSignalIndex(const QHPieModelMapper* self);
    friend int QHPieModelMapper_Receivers(const QHPieModelMapper* self, const char* signal);
    friend int QHPieModelMapper_QBaseReceivers(const QHPieModelMapper* self, const char* signal);
    friend bool QHPieModelMapper_IsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal);
    friend bool QHPieModelMapper_QBaseIsSignalConnected(const QHPieModelMapper* self, const QMetaMethod* signal);
};

#endif
