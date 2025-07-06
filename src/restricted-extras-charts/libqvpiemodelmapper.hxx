#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVPieModelMapper so that we can call protected methods
class VirtualQVPieModelMapper final : public QVPieModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQVPieModelMapper = true;

    // Virtual class public types (including callbacks)
    using QVPieModelMapper_Metacall_Callback = int (*)(QVPieModelMapper*, int, int, void**);
    using QVPieModelMapper_Event_Callback = bool (*)(QVPieModelMapper*, QEvent*);
    using QVPieModelMapper_EventFilter_Callback = bool (*)(QVPieModelMapper*, QObject*, QEvent*);
    using QVPieModelMapper_TimerEvent_Callback = void (*)(QVPieModelMapper*, QTimerEvent*);
    using QVPieModelMapper_ChildEvent_Callback = void (*)(QVPieModelMapper*, QChildEvent*);
    using QVPieModelMapper_CustomEvent_Callback = void (*)(QVPieModelMapper*, QEvent*);
    using QVPieModelMapper_ConnectNotify_Callback = void (*)(QVPieModelMapper*, QMetaMethod*);
    using QVPieModelMapper_DisconnectNotify_Callback = void (*)(QVPieModelMapper*, QMetaMethod*);
    using QVPieModelMapper_First_Callback = int (*)();
    using QVPieModelMapper_SetFirst_Callback = void (*)(QVPieModelMapper*, int);
    using QVPieModelMapper_Count_Callback = int (*)();
    using QVPieModelMapper_SetCount_Callback = void (*)(QVPieModelMapper*, int);
    using QVPieModelMapper_ValuesSection_Callback = int (*)();
    using QVPieModelMapper_SetValuesSection_Callback = void (*)(QVPieModelMapper*, int);
    using QVPieModelMapper_LabelsSection_Callback = int (*)();
    using QVPieModelMapper_SetLabelsSection_Callback = void (*)(QVPieModelMapper*, int);
    using QVPieModelMapper_Orientation_Callback = int (*)();
    using QVPieModelMapper_SetOrientation_Callback = void (*)(QVPieModelMapper*, int);
    using QVPieModelMapper_Sender_Callback = QObject* (*)();
    using QVPieModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVPieModelMapper_Receivers_Callback = int (*)(const QVPieModelMapper*, const char*);
    using QVPieModelMapper_IsSignalConnected_Callback = bool (*)(const QVPieModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVPieModelMapper_Metacall_Callback qvpiemodelmapper_metacall_callback = nullptr;
    QVPieModelMapper_Event_Callback qvpiemodelmapper_event_callback = nullptr;
    QVPieModelMapper_EventFilter_Callback qvpiemodelmapper_eventfilter_callback = nullptr;
    QVPieModelMapper_TimerEvent_Callback qvpiemodelmapper_timerevent_callback = nullptr;
    QVPieModelMapper_ChildEvent_Callback qvpiemodelmapper_childevent_callback = nullptr;
    QVPieModelMapper_CustomEvent_Callback qvpiemodelmapper_customevent_callback = nullptr;
    QVPieModelMapper_ConnectNotify_Callback qvpiemodelmapper_connectnotify_callback = nullptr;
    QVPieModelMapper_DisconnectNotify_Callback qvpiemodelmapper_disconnectnotify_callback = nullptr;
    QVPieModelMapper_First_Callback qvpiemodelmapper_first_callback = nullptr;
    QVPieModelMapper_SetFirst_Callback qvpiemodelmapper_setfirst_callback = nullptr;
    QVPieModelMapper_Count_Callback qvpiemodelmapper_count_callback = nullptr;
    QVPieModelMapper_SetCount_Callback qvpiemodelmapper_setcount_callback = nullptr;
    QVPieModelMapper_ValuesSection_Callback qvpiemodelmapper_valuessection_callback = nullptr;
    QVPieModelMapper_SetValuesSection_Callback qvpiemodelmapper_setvaluessection_callback = nullptr;
    QVPieModelMapper_LabelsSection_Callback qvpiemodelmapper_labelssection_callback = nullptr;
    QVPieModelMapper_SetLabelsSection_Callback qvpiemodelmapper_setlabelssection_callback = nullptr;
    QVPieModelMapper_Orientation_Callback qvpiemodelmapper_orientation_callback = nullptr;
    QVPieModelMapper_SetOrientation_Callback qvpiemodelmapper_setorientation_callback = nullptr;
    QVPieModelMapper_Sender_Callback qvpiemodelmapper_sender_callback = nullptr;
    QVPieModelMapper_SenderSignalIndex_Callback qvpiemodelmapper_sendersignalindex_callback = nullptr;
    QVPieModelMapper_Receivers_Callback qvpiemodelmapper_receivers_callback = nullptr;
    QVPieModelMapper_IsSignalConnected_Callback qvpiemodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvpiemodelmapper_metacall_isbase = false;
    mutable bool qvpiemodelmapper_event_isbase = false;
    mutable bool qvpiemodelmapper_eventfilter_isbase = false;
    mutable bool qvpiemodelmapper_timerevent_isbase = false;
    mutable bool qvpiemodelmapper_childevent_isbase = false;
    mutable bool qvpiemodelmapper_customevent_isbase = false;
    mutable bool qvpiemodelmapper_connectnotify_isbase = false;
    mutable bool qvpiemodelmapper_disconnectnotify_isbase = false;
    mutable bool qvpiemodelmapper_first_isbase = false;
    mutable bool qvpiemodelmapper_setfirst_isbase = false;
    mutable bool qvpiemodelmapper_count_isbase = false;
    mutable bool qvpiemodelmapper_setcount_isbase = false;
    mutable bool qvpiemodelmapper_valuessection_isbase = false;
    mutable bool qvpiemodelmapper_setvaluessection_isbase = false;
    mutable bool qvpiemodelmapper_labelssection_isbase = false;
    mutable bool qvpiemodelmapper_setlabelssection_isbase = false;
    mutable bool qvpiemodelmapper_orientation_isbase = false;
    mutable bool qvpiemodelmapper_setorientation_isbase = false;
    mutable bool qvpiemodelmapper_sender_isbase = false;
    mutable bool qvpiemodelmapper_sendersignalindex_isbase = false;
    mutable bool qvpiemodelmapper_receivers_isbase = false;
    mutable bool qvpiemodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQVPieModelMapper() : QVPieModelMapper() {};
    VirtualQVPieModelMapper(QObject* parent) : QVPieModelMapper(parent) {};

    ~VirtualQVPieModelMapper() {
        qvpiemodelmapper_metacall_callback = nullptr;
        qvpiemodelmapper_event_callback = nullptr;
        qvpiemodelmapper_eventfilter_callback = nullptr;
        qvpiemodelmapper_timerevent_callback = nullptr;
        qvpiemodelmapper_childevent_callback = nullptr;
        qvpiemodelmapper_customevent_callback = nullptr;
        qvpiemodelmapper_connectnotify_callback = nullptr;
        qvpiemodelmapper_disconnectnotify_callback = nullptr;
        qvpiemodelmapper_first_callback = nullptr;
        qvpiemodelmapper_setfirst_callback = nullptr;
        qvpiemodelmapper_count_callback = nullptr;
        qvpiemodelmapper_setcount_callback = nullptr;
        qvpiemodelmapper_valuessection_callback = nullptr;
        qvpiemodelmapper_setvaluessection_callback = nullptr;
        qvpiemodelmapper_labelssection_callback = nullptr;
        qvpiemodelmapper_setlabelssection_callback = nullptr;
        qvpiemodelmapper_orientation_callback = nullptr;
        qvpiemodelmapper_setorientation_callback = nullptr;
        qvpiemodelmapper_sender_callback = nullptr;
        qvpiemodelmapper_sendersignalindex_callback = nullptr;
        qvpiemodelmapper_receivers_callback = nullptr;
        qvpiemodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQVPieModelMapper_Metacall_Callback(QVPieModelMapper_Metacall_Callback cb) { qvpiemodelmapper_metacall_callback = cb; }
    inline void setQVPieModelMapper_Event_Callback(QVPieModelMapper_Event_Callback cb) { qvpiemodelmapper_event_callback = cb; }
    inline void setQVPieModelMapper_EventFilter_Callback(QVPieModelMapper_EventFilter_Callback cb) { qvpiemodelmapper_eventfilter_callback = cb; }
    inline void setQVPieModelMapper_TimerEvent_Callback(QVPieModelMapper_TimerEvent_Callback cb) { qvpiemodelmapper_timerevent_callback = cb; }
    inline void setQVPieModelMapper_ChildEvent_Callback(QVPieModelMapper_ChildEvent_Callback cb) { qvpiemodelmapper_childevent_callback = cb; }
    inline void setQVPieModelMapper_CustomEvent_Callback(QVPieModelMapper_CustomEvent_Callback cb) { qvpiemodelmapper_customevent_callback = cb; }
    inline void setQVPieModelMapper_ConnectNotify_Callback(QVPieModelMapper_ConnectNotify_Callback cb) { qvpiemodelmapper_connectnotify_callback = cb; }
    inline void setQVPieModelMapper_DisconnectNotify_Callback(QVPieModelMapper_DisconnectNotify_Callback cb) { qvpiemodelmapper_disconnectnotify_callback = cb; }
    inline void setQVPieModelMapper_First_Callback(QVPieModelMapper_First_Callback cb) { qvpiemodelmapper_first_callback = cb; }
    inline void setQVPieModelMapper_SetFirst_Callback(QVPieModelMapper_SetFirst_Callback cb) { qvpiemodelmapper_setfirst_callback = cb; }
    inline void setQVPieModelMapper_Count_Callback(QVPieModelMapper_Count_Callback cb) { qvpiemodelmapper_count_callback = cb; }
    inline void setQVPieModelMapper_SetCount_Callback(QVPieModelMapper_SetCount_Callback cb) { qvpiemodelmapper_setcount_callback = cb; }
    inline void setQVPieModelMapper_ValuesSection_Callback(QVPieModelMapper_ValuesSection_Callback cb) { qvpiemodelmapper_valuessection_callback = cb; }
    inline void setQVPieModelMapper_SetValuesSection_Callback(QVPieModelMapper_SetValuesSection_Callback cb) { qvpiemodelmapper_setvaluessection_callback = cb; }
    inline void setQVPieModelMapper_LabelsSection_Callback(QVPieModelMapper_LabelsSection_Callback cb) { qvpiemodelmapper_labelssection_callback = cb; }
    inline void setQVPieModelMapper_SetLabelsSection_Callback(QVPieModelMapper_SetLabelsSection_Callback cb) { qvpiemodelmapper_setlabelssection_callback = cb; }
    inline void setQVPieModelMapper_Orientation_Callback(QVPieModelMapper_Orientation_Callback cb) { qvpiemodelmapper_orientation_callback = cb; }
    inline void setQVPieModelMapper_SetOrientation_Callback(QVPieModelMapper_SetOrientation_Callback cb) { qvpiemodelmapper_setorientation_callback = cb; }
    inline void setQVPieModelMapper_Sender_Callback(QVPieModelMapper_Sender_Callback cb) { qvpiemodelmapper_sender_callback = cb; }
    inline void setQVPieModelMapper_SenderSignalIndex_Callback(QVPieModelMapper_SenderSignalIndex_Callback cb) { qvpiemodelmapper_sendersignalindex_callback = cb; }
    inline void setQVPieModelMapper_Receivers_Callback(QVPieModelMapper_Receivers_Callback cb) { qvpiemodelmapper_receivers_callback = cb; }
    inline void setQVPieModelMapper_IsSignalConnected_Callback(QVPieModelMapper_IsSignalConnected_Callback cb) { qvpiemodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVPieModelMapper_Metacall_IsBase(bool value) const { qvpiemodelmapper_metacall_isbase = value; }
    inline void setQVPieModelMapper_Event_IsBase(bool value) const { qvpiemodelmapper_event_isbase = value; }
    inline void setQVPieModelMapper_EventFilter_IsBase(bool value) const { qvpiemodelmapper_eventfilter_isbase = value; }
    inline void setQVPieModelMapper_TimerEvent_IsBase(bool value) const { qvpiemodelmapper_timerevent_isbase = value; }
    inline void setQVPieModelMapper_ChildEvent_IsBase(bool value) const { qvpiemodelmapper_childevent_isbase = value; }
    inline void setQVPieModelMapper_CustomEvent_IsBase(bool value) const { qvpiemodelmapper_customevent_isbase = value; }
    inline void setQVPieModelMapper_ConnectNotify_IsBase(bool value) const { qvpiemodelmapper_connectnotify_isbase = value; }
    inline void setQVPieModelMapper_DisconnectNotify_IsBase(bool value) const { qvpiemodelmapper_disconnectnotify_isbase = value; }
    inline void setQVPieModelMapper_First_IsBase(bool value) const { qvpiemodelmapper_first_isbase = value; }
    inline void setQVPieModelMapper_SetFirst_IsBase(bool value) const { qvpiemodelmapper_setfirst_isbase = value; }
    inline void setQVPieModelMapper_Count_IsBase(bool value) const { qvpiemodelmapper_count_isbase = value; }
    inline void setQVPieModelMapper_SetCount_IsBase(bool value) const { qvpiemodelmapper_setcount_isbase = value; }
    inline void setQVPieModelMapper_ValuesSection_IsBase(bool value) const { qvpiemodelmapper_valuessection_isbase = value; }
    inline void setQVPieModelMapper_SetValuesSection_IsBase(bool value) const { qvpiemodelmapper_setvaluessection_isbase = value; }
    inline void setQVPieModelMapper_LabelsSection_IsBase(bool value) const { qvpiemodelmapper_labelssection_isbase = value; }
    inline void setQVPieModelMapper_SetLabelsSection_IsBase(bool value) const { qvpiemodelmapper_setlabelssection_isbase = value; }
    inline void setQVPieModelMapper_Orientation_IsBase(bool value) const { qvpiemodelmapper_orientation_isbase = value; }
    inline void setQVPieModelMapper_SetOrientation_IsBase(bool value) const { qvpiemodelmapper_setorientation_isbase = value; }
    inline void setQVPieModelMapper_Sender_IsBase(bool value) const { qvpiemodelmapper_sender_isbase = value; }
    inline void setQVPieModelMapper_SenderSignalIndex_IsBase(bool value) const { qvpiemodelmapper_sendersignalindex_isbase = value; }
    inline void setQVPieModelMapper_Receivers_IsBase(bool value) const { qvpiemodelmapper_receivers_isbase = value; }
    inline void setQVPieModelMapper_IsSignalConnected_IsBase(bool value) const { qvpiemodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvpiemodelmapper_metacall_isbase) {
            qvpiemodelmapper_metacall_isbase = false;
            return QVPieModelMapper::qt_metacall(param1, param2, param3);
        } else if (qvpiemodelmapper_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qvpiemodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvpiemodelmapper_event_isbase) {
            qvpiemodelmapper_event_isbase = false;
            return QVPieModelMapper::event(event);
        } else if (qvpiemodelmapper_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qvpiemodelmapper_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVPieModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvpiemodelmapper_eventfilter_isbase) {
            qvpiemodelmapper_eventfilter_isbase = false;
            return QVPieModelMapper::eventFilter(watched, event);
        } else if (qvpiemodelmapper_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qvpiemodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QVPieModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvpiemodelmapper_timerevent_isbase) {
            qvpiemodelmapper_timerevent_isbase = false;
            QVPieModelMapper::timerEvent(event);
        } else if (qvpiemodelmapper_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qvpiemodelmapper_timerevent_callback(this, cbval1);
        } else {
            QVPieModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvpiemodelmapper_childevent_isbase) {
            qvpiemodelmapper_childevent_isbase = false;
            QVPieModelMapper::childEvent(event);
        } else if (qvpiemodelmapper_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qvpiemodelmapper_childevent_callback(this, cbval1);
        } else {
            QVPieModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvpiemodelmapper_customevent_isbase) {
            qvpiemodelmapper_customevent_isbase = false;
            QVPieModelMapper::customEvent(event);
        } else if (qvpiemodelmapper_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qvpiemodelmapper_customevent_callback(this, cbval1);
        } else {
            QVPieModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvpiemodelmapper_connectnotify_isbase) {
            qvpiemodelmapper_connectnotify_isbase = false;
            QVPieModelMapper::connectNotify(signal);
        } else if (qvpiemodelmapper_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvpiemodelmapper_connectnotify_callback(this, cbval1);
        } else {
            QVPieModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvpiemodelmapper_disconnectnotify_isbase) {
            qvpiemodelmapper_disconnectnotify_isbase = false;
            QVPieModelMapper::disconnectNotify(signal);
        } else if (qvpiemodelmapper_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvpiemodelmapper_disconnectnotify_callback(this, cbval1);
        } else {
            QVPieModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvpiemodelmapper_first_isbase) {
            qvpiemodelmapper_first_isbase = false;
            return QVPieModelMapper::first();
        } else if (qvpiemodelmapper_first_callback != nullptr) {
            int callback_ret = qvpiemodelmapper_first_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvpiemodelmapper_setfirst_isbase) {
            qvpiemodelmapper_setfirst_isbase = false;
            QVPieModelMapper::setFirst(first);
        } else if (qvpiemodelmapper_setfirst_callback != nullptr) {
            int cbval1 = first;

            qvpiemodelmapper_setfirst_callback(this, cbval1);
        } else {
            QVPieModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvpiemodelmapper_count_isbase) {
            qvpiemodelmapper_count_isbase = false;
            return QVPieModelMapper::count();
        } else if (qvpiemodelmapper_count_callback != nullptr) {
            int callback_ret = qvpiemodelmapper_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvpiemodelmapper_setcount_isbase) {
            qvpiemodelmapper_setcount_isbase = false;
            QVPieModelMapper::setCount(count);
        } else if (qvpiemodelmapper_setcount_callback != nullptr) {
            int cbval1 = count;

            qvpiemodelmapper_setcount_callback(this, cbval1);
        } else {
            QVPieModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    int valuesSection() const {
        if (qvpiemodelmapper_valuessection_isbase) {
            qvpiemodelmapper_valuessection_isbase = false;
            return QVPieModelMapper::valuesSection();
        } else if (qvpiemodelmapper_valuessection_callback != nullptr) {
            int callback_ret = qvpiemodelmapper_valuessection_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::valuesSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setValuesSection(int valuesSection) {
        if (qvpiemodelmapper_setvaluessection_isbase) {
            qvpiemodelmapper_setvaluessection_isbase = false;
            QVPieModelMapper::setValuesSection(valuesSection);
        } else if (qvpiemodelmapper_setvaluessection_callback != nullptr) {
            int cbval1 = valuesSection;

            qvpiemodelmapper_setvaluessection_callback(this, cbval1);
        } else {
            QVPieModelMapper::setValuesSection(valuesSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int labelsSection() const {
        if (qvpiemodelmapper_labelssection_isbase) {
            qvpiemodelmapper_labelssection_isbase = false;
            return QVPieModelMapper::labelsSection();
        } else if (qvpiemodelmapper_labelssection_callback != nullptr) {
            int callback_ret = qvpiemodelmapper_labelssection_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::labelsSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLabelsSection(int labelsSection) {
        if (qvpiemodelmapper_setlabelssection_isbase) {
            qvpiemodelmapper_setlabelssection_isbase = false;
            QVPieModelMapper::setLabelsSection(labelsSection);
        } else if (qvpiemodelmapper_setlabelssection_callback != nullptr) {
            int cbval1 = labelsSection;

            qvpiemodelmapper_setlabelssection_callback(this, cbval1);
        } else {
            QVPieModelMapper::setLabelsSection(labelsSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvpiemodelmapper_orientation_isbase) {
            qvpiemodelmapper_orientation_isbase = false;
            return QVPieModelMapper::orientation();
        } else if (qvpiemodelmapper_orientation_callback != nullptr) {
            int callback_ret = qvpiemodelmapper_orientation_callback();
            return static_cast<Qt::Orientation>(callback_ret);
        } else {
            return QVPieModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvpiemodelmapper_setorientation_isbase) {
            qvpiemodelmapper_setorientation_isbase = false;
            QVPieModelMapper::setOrientation(orientation);
        } else if (qvpiemodelmapper_setorientation_callback != nullptr) {
            int cbval1 = static_cast<int>(orientation);

            qvpiemodelmapper_setorientation_callback(this, cbval1);
        } else {
            QVPieModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvpiemodelmapper_sender_isbase) {
            qvpiemodelmapper_sender_isbase = false;
            return QVPieModelMapper::sender();
        } else if (qvpiemodelmapper_sender_callback != nullptr) {
            QObject* callback_ret = qvpiemodelmapper_sender_callback();
            return callback_ret;
        } else {
            return QVPieModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvpiemodelmapper_sendersignalindex_isbase) {
            qvpiemodelmapper_sendersignalindex_isbase = false;
            return QVPieModelMapper::senderSignalIndex();
        } else if (qvpiemodelmapper_sendersignalindex_callback != nullptr) {
            int callback_ret = qvpiemodelmapper_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvpiemodelmapper_receivers_isbase) {
            qvpiemodelmapper_receivers_isbase = false;
            return QVPieModelMapper::receivers(signal);
        } else if (qvpiemodelmapper_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qvpiemodelmapper_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVPieModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvpiemodelmapper_issignalconnected_isbase) {
            qvpiemodelmapper_issignalconnected_isbase = false;
            return QVPieModelMapper::isSignalConnected(signal);
        } else if (qvpiemodelmapper_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qvpiemodelmapper_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVPieModelMapper::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QVPieModelMapper_TimerEvent(QVPieModelMapper* self, QTimerEvent* event);
    friend void QVPieModelMapper_QBaseTimerEvent(QVPieModelMapper* self, QTimerEvent* event);
    friend void QVPieModelMapper_ChildEvent(QVPieModelMapper* self, QChildEvent* event);
    friend void QVPieModelMapper_QBaseChildEvent(QVPieModelMapper* self, QChildEvent* event);
    friend void QVPieModelMapper_CustomEvent(QVPieModelMapper* self, QEvent* event);
    friend void QVPieModelMapper_QBaseCustomEvent(QVPieModelMapper* self, QEvent* event);
    friend void QVPieModelMapper_ConnectNotify(QVPieModelMapper* self, const QMetaMethod* signal);
    friend void QVPieModelMapper_QBaseConnectNotify(QVPieModelMapper* self, const QMetaMethod* signal);
    friend void QVPieModelMapper_DisconnectNotify(QVPieModelMapper* self, const QMetaMethod* signal);
    friend void QVPieModelMapper_QBaseDisconnectNotify(QVPieModelMapper* self, const QMetaMethod* signal);
    friend int QVPieModelMapper_First(const QVPieModelMapper* self);
    friend int QVPieModelMapper_QBaseFirst(const QVPieModelMapper* self);
    friend void QVPieModelMapper_SetFirst(QVPieModelMapper* self, int first);
    friend void QVPieModelMapper_QBaseSetFirst(QVPieModelMapper* self, int first);
    friend int QVPieModelMapper_Count(const QVPieModelMapper* self);
    friend int QVPieModelMapper_QBaseCount(const QVPieModelMapper* self);
    friend void QVPieModelMapper_SetCount(QVPieModelMapper* self, int count);
    friend void QVPieModelMapper_QBaseSetCount(QVPieModelMapper* self, int count);
    friend int QVPieModelMapper_ValuesSection(const QVPieModelMapper* self);
    friend int QVPieModelMapper_QBaseValuesSection(const QVPieModelMapper* self);
    friend void QVPieModelMapper_SetValuesSection(QVPieModelMapper* self, int valuesSection);
    friend void QVPieModelMapper_QBaseSetValuesSection(QVPieModelMapper* self, int valuesSection);
    friend int QVPieModelMapper_LabelsSection(const QVPieModelMapper* self);
    friend int QVPieModelMapper_QBaseLabelsSection(const QVPieModelMapper* self);
    friend void QVPieModelMapper_SetLabelsSection(QVPieModelMapper* self, int labelsSection);
    friend void QVPieModelMapper_QBaseSetLabelsSection(QVPieModelMapper* self, int labelsSection);
    friend int QVPieModelMapper_Orientation(const QVPieModelMapper* self);
    friend int QVPieModelMapper_QBaseOrientation(const QVPieModelMapper* self);
    friend void QVPieModelMapper_SetOrientation(QVPieModelMapper* self, int orientation);
    friend void QVPieModelMapper_QBaseSetOrientation(QVPieModelMapper* self, int orientation);
    friend QObject* QVPieModelMapper_Sender(const QVPieModelMapper* self);
    friend QObject* QVPieModelMapper_QBaseSender(const QVPieModelMapper* self);
    friend int QVPieModelMapper_SenderSignalIndex(const QVPieModelMapper* self);
    friend int QVPieModelMapper_QBaseSenderSignalIndex(const QVPieModelMapper* self);
    friend int QVPieModelMapper_Receivers(const QVPieModelMapper* self, const char* signal);
    friend int QVPieModelMapper_QBaseReceivers(const QVPieModelMapper* self, const char* signal);
    friend bool QVPieModelMapper_IsSignalConnected(const QVPieModelMapper* self, const QMetaMethod* signal);
    friend bool QVPieModelMapper_QBaseIsSignalConnected(const QVPieModelMapper* self, const QMetaMethod* signal);
};

#endif
