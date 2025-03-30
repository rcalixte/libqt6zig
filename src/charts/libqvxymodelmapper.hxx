#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQVXYMODELMAPPER_H
#define SRC_CHARTSC_LIBVIRTUALQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVXYModelMapper so that we can call protected methods
class VirtualQVXYModelMapper : public QVXYModelMapper {

  public:
    // Virtual class public types (including callbacks)
    using QVXYModelMapper_Metacall_Callback = int (*)(QVXYModelMapper*, QMetaObject::Call, int, void**);
    using QVXYModelMapper_Event_Callback = bool (*)(QVXYModelMapper*, QEvent*);
    using QVXYModelMapper_EventFilter_Callback = bool (*)(QVXYModelMapper*, QObject*, QEvent*);
    using QVXYModelMapper_TimerEvent_Callback = void (*)(QVXYModelMapper*, QTimerEvent*);
    using QVXYModelMapper_ChildEvent_Callback = void (*)(QVXYModelMapper*, QChildEvent*);
    using QVXYModelMapper_CustomEvent_Callback = void (*)(QVXYModelMapper*, QEvent*);
    using QVXYModelMapper_ConnectNotify_Callback = void (*)(QVXYModelMapper*, const QMetaMethod&);
    using QVXYModelMapper_DisconnectNotify_Callback = void (*)(QVXYModelMapper*, const QMetaMethod&);
    using QVXYModelMapper_First_Callback = int (*)();
    using QVXYModelMapper_SetFirst_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_Count_Callback = int (*)();
    using QVXYModelMapper_SetCount_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_Orientation_Callback = Qt::Orientation (*)();
    using QVXYModelMapper_SetOrientation_Callback = void (*)(QVXYModelMapper*, Qt::Orientation);
    using QVXYModelMapper_XSection_Callback = int (*)();
    using QVXYModelMapper_SetXSection_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_YSection_Callback = int (*)();
    using QVXYModelMapper_SetYSection_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_Sender_Callback = QObject* (*)();
    using QVXYModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVXYModelMapper_Receivers_Callback = int (*)(const QVXYModelMapper*, const char*);
    using QVXYModelMapper_IsSignalConnected_Callback = bool (*)(const QVXYModelMapper*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QVXYModelMapper_Metacall_Callback qvxymodelmapper_metacall_callback = nullptr;
    QVXYModelMapper_Event_Callback qvxymodelmapper_event_callback = nullptr;
    QVXYModelMapper_EventFilter_Callback qvxymodelmapper_eventfilter_callback = nullptr;
    QVXYModelMapper_TimerEvent_Callback qvxymodelmapper_timerevent_callback = nullptr;
    QVXYModelMapper_ChildEvent_Callback qvxymodelmapper_childevent_callback = nullptr;
    QVXYModelMapper_CustomEvent_Callback qvxymodelmapper_customevent_callback = nullptr;
    QVXYModelMapper_ConnectNotify_Callback qvxymodelmapper_connectnotify_callback = nullptr;
    QVXYModelMapper_DisconnectNotify_Callback qvxymodelmapper_disconnectnotify_callback = nullptr;
    QVXYModelMapper_First_Callback qvxymodelmapper_first_callback = nullptr;
    QVXYModelMapper_SetFirst_Callback qvxymodelmapper_setfirst_callback = nullptr;
    QVXYModelMapper_Count_Callback qvxymodelmapper_count_callback = nullptr;
    QVXYModelMapper_SetCount_Callback qvxymodelmapper_setcount_callback = nullptr;
    QVXYModelMapper_Orientation_Callback qvxymodelmapper_orientation_callback = nullptr;
    QVXYModelMapper_SetOrientation_Callback qvxymodelmapper_setorientation_callback = nullptr;
    QVXYModelMapper_XSection_Callback qvxymodelmapper_xsection_callback = nullptr;
    QVXYModelMapper_SetXSection_Callback qvxymodelmapper_setxsection_callback = nullptr;
    QVXYModelMapper_YSection_Callback qvxymodelmapper_ysection_callback = nullptr;
    QVXYModelMapper_SetYSection_Callback qvxymodelmapper_setysection_callback = nullptr;
    QVXYModelMapper_Sender_Callback qvxymodelmapper_sender_callback = nullptr;
    QVXYModelMapper_SenderSignalIndex_Callback qvxymodelmapper_sendersignalindex_callback = nullptr;
    QVXYModelMapper_Receivers_Callback qvxymodelmapper_receivers_callback = nullptr;
    QVXYModelMapper_IsSignalConnected_Callback qvxymodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvxymodelmapper_metacall_isbase = false;
    mutable bool qvxymodelmapper_event_isbase = false;
    mutable bool qvxymodelmapper_eventfilter_isbase = false;
    mutable bool qvxymodelmapper_timerevent_isbase = false;
    mutable bool qvxymodelmapper_childevent_isbase = false;
    mutable bool qvxymodelmapper_customevent_isbase = false;
    mutable bool qvxymodelmapper_connectnotify_isbase = false;
    mutable bool qvxymodelmapper_disconnectnotify_isbase = false;
    mutable bool qvxymodelmapper_first_isbase = false;
    mutable bool qvxymodelmapper_setfirst_isbase = false;
    mutable bool qvxymodelmapper_count_isbase = false;
    mutable bool qvxymodelmapper_setcount_isbase = false;
    mutable bool qvxymodelmapper_orientation_isbase = false;
    mutable bool qvxymodelmapper_setorientation_isbase = false;
    mutable bool qvxymodelmapper_xsection_isbase = false;
    mutable bool qvxymodelmapper_setxsection_isbase = false;
    mutable bool qvxymodelmapper_ysection_isbase = false;
    mutable bool qvxymodelmapper_setysection_isbase = false;
    mutable bool qvxymodelmapper_sender_isbase = false;
    mutable bool qvxymodelmapper_sendersignalindex_isbase = false;
    mutable bool qvxymodelmapper_receivers_isbase = false;
    mutable bool qvxymodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQVXYModelMapper() : QVXYModelMapper(){};
    VirtualQVXYModelMapper(QObject* parent) : QVXYModelMapper(parent){};

    ~VirtualQVXYModelMapper() {
        qvxymodelmapper_metacall_callback = nullptr;
        qvxymodelmapper_event_callback = nullptr;
        qvxymodelmapper_eventfilter_callback = nullptr;
        qvxymodelmapper_timerevent_callback = nullptr;
        qvxymodelmapper_childevent_callback = nullptr;
        qvxymodelmapper_customevent_callback = nullptr;
        qvxymodelmapper_connectnotify_callback = nullptr;
        qvxymodelmapper_disconnectnotify_callback = nullptr;
        qvxymodelmapper_first_callback = nullptr;
        qvxymodelmapper_setfirst_callback = nullptr;
        qvxymodelmapper_count_callback = nullptr;
        qvxymodelmapper_setcount_callback = nullptr;
        qvxymodelmapper_orientation_callback = nullptr;
        qvxymodelmapper_setorientation_callback = nullptr;
        qvxymodelmapper_xsection_callback = nullptr;
        qvxymodelmapper_setxsection_callback = nullptr;
        qvxymodelmapper_ysection_callback = nullptr;
        qvxymodelmapper_setysection_callback = nullptr;
        qvxymodelmapper_sender_callback = nullptr;
        qvxymodelmapper_sendersignalindex_callback = nullptr;
        qvxymodelmapper_receivers_callback = nullptr;
        qvxymodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQVXYModelMapper_Metacall_Callback(QVXYModelMapper_Metacall_Callback cb) { qvxymodelmapper_metacall_callback = cb; }
    void setQVXYModelMapper_Event_Callback(QVXYModelMapper_Event_Callback cb) { qvxymodelmapper_event_callback = cb; }
    void setQVXYModelMapper_EventFilter_Callback(QVXYModelMapper_EventFilter_Callback cb) { qvxymodelmapper_eventfilter_callback = cb; }
    void setQVXYModelMapper_TimerEvent_Callback(QVXYModelMapper_TimerEvent_Callback cb) { qvxymodelmapper_timerevent_callback = cb; }
    void setQVXYModelMapper_ChildEvent_Callback(QVXYModelMapper_ChildEvent_Callback cb) { qvxymodelmapper_childevent_callback = cb; }
    void setQVXYModelMapper_CustomEvent_Callback(QVXYModelMapper_CustomEvent_Callback cb) { qvxymodelmapper_customevent_callback = cb; }
    void setQVXYModelMapper_ConnectNotify_Callback(QVXYModelMapper_ConnectNotify_Callback cb) { qvxymodelmapper_connectnotify_callback = cb; }
    void setQVXYModelMapper_DisconnectNotify_Callback(QVXYModelMapper_DisconnectNotify_Callback cb) { qvxymodelmapper_disconnectnotify_callback = cb; }
    void setQVXYModelMapper_First_Callback(QVXYModelMapper_First_Callback cb) { qvxymodelmapper_first_callback = cb; }
    void setQVXYModelMapper_SetFirst_Callback(QVXYModelMapper_SetFirst_Callback cb) { qvxymodelmapper_setfirst_callback = cb; }
    void setQVXYModelMapper_Count_Callback(QVXYModelMapper_Count_Callback cb) { qvxymodelmapper_count_callback = cb; }
    void setQVXYModelMapper_SetCount_Callback(QVXYModelMapper_SetCount_Callback cb) { qvxymodelmapper_setcount_callback = cb; }
    void setQVXYModelMapper_Orientation_Callback(QVXYModelMapper_Orientation_Callback cb) { qvxymodelmapper_orientation_callback = cb; }
    void setQVXYModelMapper_SetOrientation_Callback(QVXYModelMapper_SetOrientation_Callback cb) { qvxymodelmapper_setorientation_callback = cb; }
    void setQVXYModelMapper_XSection_Callback(QVXYModelMapper_XSection_Callback cb) { qvxymodelmapper_xsection_callback = cb; }
    void setQVXYModelMapper_SetXSection_Callback(QVXYModelMapper_SetXSection_Callback cb) { qvxymodelmapper_setxsection_callback = cb; }
    void setQVXYModelMapper_YSection_Callback(QVXYModelMapper_YSection_Callback cb) { qvxymodelmapper_ysection_callback = cb; }
    void setQVXYModelMapper_SetYSection_Callback(QVXYModelMapper_SetYSection_Callback cb) { qvxymodelmapper_setysection_callback = cb; }
    void setQVXYModelMapper_Sender_Callback(QVXYModelMapper_Sender_Callback cb) { qvxymodelmapper_sender_callback = cb; }
    void setQVXYModelMapper_SenderSignalIndex_Callback(QVXYModelMapper_SenderSignalIndex_Callback cb) { qvxymodelmapper_sendersignalindex_callback = cb; }
    void setQVXYModelMapper_Receivers_Callback(QVXYModelMapper_Receivers_Callback cb) { qvxymodelmapper_receivers_callback = cb; }
    void setQVXYModelMapper_IsSignalConnected_Callback(QVXYModelMapper_IsSignalConnected_Callback cb) { qvxymodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    void setQVXYModelMapper_Metacall_IsBase(bool value) const { qvxymodelmapper_metacall_isbase = value; }
    void setQVXYModelMapper_Event_IsBase(bool value) const { qvxymodelmapper_event_isbase = value; }
    void setQVXYModelMapper_EventFilter_IsBase(bool value) const { qvxymodelmapper_eventfilter_isbase = value; }
    void setQVXYModelMapper_TimerEvent_IsBase(bool value) const { qvxymodelmapper_timerevent_isbase = value; }
    void setQVXYModelMapper_ChildEvent_IsBase(bool value) const { qvxymodelmapper_childevent_isbase = value; }
    void setQVXYModelMapper_CustomEvent_IsBase(bool value) const { qvxymodelmapper_customevent_isbase = value; }
    void setQVXYModelMapper_ConnectNotify_IsBase(bool value) const { qvxymodelmapper_connectnotify_isbase = value; }
    void setQVXYModelMapper_DisconnectNotify_IsBase(bool value) const { qvxymodelmapper_disconnectnotify_isbase = value; }
    void setQVXYModelMapper_First_IsBase(bool value) const { qvxymodelmapper_first_isbase = value; }
    void setQVXYModelMapper_SetFirst_IsBase(bool value) const { qvxymodelmapper_setfirst_isbase = value; }
    void setQVXYModelMapper_Count_IsBase(bool value) const { qvxymodelmapper_count_isbase = value; }
    void setQVXYModelMapper_SetCount_IsBase(bool value) const { qvxymodelmapper_setcount_isbase = value; }
    void setQVXYModelMapper_Orientation_IsBase(bool value) const { qvxymodelmapper_orientation_isbase = value; }
    void setQVXYModelMapper_SetOrientation_IsBase(bool value) const { qvxymodelmapper_setorientation_isbase = value; }
    void setQVXYModelMapper_XSection_IsBase(bool value) const { qvxymodelmapper_xsection_isbase = value; }
    void setQVXYModelMapper_SetXSection_IsBase(bool value) const { qvxymodelmapper_setxsection_isbase = value; }
    void setQVXYModelMapper_YSection_IsBase(bool value) const { qvxymodelmapper_ysection_isbase = value; }
    void setQVXYModelMapper_SetYSection_IsBase(bool value) const { qvxymodelmapper_setysection_isbase = value; }
    void setQVXYModelMapper_Sender_IsBase(bool value) const { qvxymodelmapper_sender_isbase = value; }
    void setQVXYModelMapper_SenderSignalIndex_IsBase(bool value) const { qvxymodelmapper_sendersignalindex_isbase = value; }
    void setQVXYModelMapper_Receivers_IsBase(bool value) const { qvxymodelmapper_receivers_isbase = value; }
    void setQVXYModelMapper_IsSignalConnected_IsBase(bool value) const { qvxymodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvxymodelmapper_metacall_isbase) {
            qvxymodelmapper_metacall_isbase = false;
            return QVXYModelMapper::qt_metacall(param1, param2, param3);
        } else if (qvxymodelmapper_metacall_callback != nullptr) {
            return qvxymodelmapper_metacall_callback(this, param1, param2, param3);
        } else {
            return QVXYModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvxymodelmapper_event_isbase) {
            qvxymodelmapper_event_isbase = false;
            return QVXYModelMapper::event(event);
        } else if (qvxymodelmapper_event_callback != nullptr) {
            return qvxymodelmapper_event_callback(this, event);
        } else {
            return QVXYModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvxymodelmapper_eventfilter_isbase) {
            qvxymodelmapper_eventfilter_isbase = false;
            return QVXYModelMapper::eventFilter(watched, event);
        } else if (qvxymodelmapper_eventfilter_callback != nullptr) {
            return qvxymodelmapper_eventfilter_callback(this, watched, event);
        } else {
            return QVXYModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvxymodelmapper_timerevent_isbase) {
            qvxymodelmapper_timerevent_isbase = false;
            QVXYModelMapper::timerEvent(event);
        } else if (qvxymodelmapper_timerevent_callback != nullptr) {
            qvxymodelmapper_timerevent_callback(this, event);
        } else {
            QVXYModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvxymodelmapper_childevent_isbase) {
            qvxymodelmapper_childevent_isbase = false;
            QVXYModelMapper::childEvent(event);
        } else if (qvxymodelmapper_childevent_callback != nullptr) {
            qvxymodelmapper_childevent_callback(this, event);
        } else {
            QVXYModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvxymodelmapper_customevent_isbase) {
            qvxymodelmapper_customevent_isbase = false;
            QVXYModelMapper::customEvent(event);
        } else if (qvxymodelmapper_customevent_callback != nullptr) {
            qvxymodelmapper_customevent_callback(this, event);
        } else {
            QVXYModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvxymodelmapper_connectnotify_isbase) {
            qvxymodelmapper_connectnotify_isbase = false;
            QVXYModelMapper::connectNotify(signal);
        } else if (qvxymodelmapper_connectnotify_callback != nullptr) {
            qvxymodelmapper_connectnotify_callback(this, signal);
        } else {
            QVXYModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvxymodelmapper_disconnectnotify_isbase) {
            qvxymodelmapper_disconnectnotify_isbase = false;
            QVXYModelMapper::disconnectNotify(signal);
        } else if (qvxymodelmapper_disconnectnotify_callback != nullptr) {
            qvxymodelmapper_disconnectnotify_callback(this, signal);
        } else {
            QVXYModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvxymodelmapper_first_isbase) {
            qvxymodelmapper_first_isbase = false;
            return QVXYModelMapper::first();
        } else if (qvxymodelmapper_first_callback != nullptr) {
            return qvxymodelmapper_first_callback();
        } else {
            return QVXYModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvxymodelmapper_setfirst_isbase) {
            qvxymodelmapper_setfirst_isbase = false;
            QVXYModelMapper::setFirst(first);
        } else if (qvxymodelmapper_setfirst_callback != nullptr) {
            qvxymodelmapper_setfirst_callback(this, first);
        } else {
            QVXYModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvxymodelmapper_count_isbase) {
            qvxymodelmapper_count_isbase = false;
            return QVXYModelMapper::count();
        } else if (qvxymodelmapper_count_callback != nullptr) {
            return qvxymodelmapper_count_callback();
        } else {
            return QVXYModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvxymodelmapper_setcount_isbase) {
            qvxymodelmapper_setcount_isbase = false;
            QVXYModelMapper::setCount(count);
        } else if (qvxymodelmapper_setcount_callback != nullptr) {
            qvxymodelmapper_setcount_callback(this, count);
        } else {
            QVXYModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvxymodelmapper_orientation_isbase) {
            qvxymodelmapper_orientation_isbase = false;
            return QVXYModelMapper::orientation();
        } else if (qvxymodelmapper_orientation_callback != nullptr) {
            return qvxymodelmapper_orientation_callback();
        } else {
            return QVXYModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvxymodelmapper_setorientation_isbase) {
            qvxymodelmapper_setorientation_isbase = false;
            QVXYModelMapper::setOrientation(orientation);
        } else if (qvxymodelmapper_setorientation_callback != nullptr) {
            qvxymodelmapper_setorientation_callback(this, orientation);
        } else {
            QVXYModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    int xSection() const {
        if (qvxymodelmapper_xsection_isbase) {
            qvxymodelmapper_xsection_isbase = false;
            return QVXYModelMapper::xSection();
        } else if (qvxymodelmapper_xsection_callback != nullptr) {
            return qvxymodelmapper_xsection_callback();
        } else {
            return QVXYModelMapper::xSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setXSection(int xSection) {
        if (qvxymodelmapper_setxsection_isbase) {
            qvxymodelmapper_setxsection_isbase = false;
            QVXYModelMapper::setXSection(xSection);
        } else if (qvxymodelmapper_setxsection_callback != nullptr) {
            qvxymodelmapper_setxsection_callback(this, xSection);
        } else {
            QVXYModelMapper::setXSection(xSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int ySection() const {
        if (qvxymodelmapper_ysection_isbase) {
            qvxymodelmapper_ysection_isbase = false;
            return QVXYModelMapper::ySection();
        } else if (qvxymodelmapper_ysection_callback != nullptr) {
            return qvxymodelmapper_ysection_callback();
        } else {
            return QVXYModelMapper::ySection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setYSection(int ySection) {
        if (qvxymodelmapper_setysection_isbase) {
            qvxymodelmapper_setysection_isbase = false;
            QVXYModelMapper::setYSection(ySection);
        } else if (qvxymodelmapper_setysection_callback != nullptr) {
            qvxymodelmapper_setysection_callback(this, ySection);
        } else {
            QVXYModelMapper::setYSection(ySection);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvxymodelmapper_sender_isbase) {
            qvxymodelmapper_sender_isbase = false;
            return QVXYModelMapper::sender();
        } else if (qvxymodelmapper_sender_callback != nullptr) {
            return qvxymodelmapper_sender_callback();
        } else {
            return QVXYModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvxymodelmapper_sendersignalindex_isbase) {
            qvxymodelmapper_sendersignalindex_isbase = false;
            return QVXYModelMapper::senderSignalIndex();
        } else if (qvxymodelmapper_sendersignalindex_callback != nullptr) {
            return qvxymodelmapper_sendersignalindex_callback();
        } else {
            return QVXYModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvxymodelmapper_receivers_isbase) {
            qvxymodelmapper_receivers_isbase = false;
            return QVXYModelMapper::receivers(signal);
        } else if (qvxymodelmapper_receivers_callback != nullptr) {
            return qvxymodelmapper_receivers_callback(this, signal);
        } else {
            return QVXYModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvxymodelmapper_issignalconnected_isbase) {
            qvxymodelmapper_issignalconnected_isbase = false;
            return QVXYModelMapper::isSignalConnected(signal);
        } else if (qvxymodelmapper_issignalconnected_callback != nullptr) {
            return qvxymodelmapper_issignalconnected_callback(this, signal);
        } else {
            return QVXYModelMapper::isSignalConnected(signal);
        }
    }
};

#endif
