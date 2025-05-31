#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHBarModelMapper so that we can call protected methods
class VirtualQHBarModelMapper final : public QHBarModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQHBarModelMapper = true;

    // Virtual class public types (including callbacks)
    using QHBarModelMapper_Metacall_Callback = int (*)(QHBarModelMapper*, int, int, void**);
    using QHBarModelMapper_Event_Callback = bool (*)(QHBarModelMapper*, QEvent*);
    using QHBarModelMapper_EventFilter_Callback = bool (*)(QHBarModelMapper*, QObject*, QEvent*);
    using QHBarModelMapper_TimerEvent_Callback = void (*)(QHBarModelMapper*, QTimerEvent*);
    using QHBarModelMapper_ChildEvent_Callback = void (*)(QHBarModelMapper*, QChildEvent*);
    using QHBarModelMapper_CustomEvent_Callback = void (*)(QHBarModelMapper*, QEvent*);
    using QHBarModelMapper_ConnectNotify_Callback = void (*)(QHBarModelMapper*, QMetaMethod*);
    using QHBarModelMapper_DisconnectNotify_Callback = void (*)(QHBarModelMapper*, QMetaMethod*);
    using QHBarModelMapper_First_Callback = int (*)();
    using QHBarModelMapper_SetFirst_Callback = void (*)(QHBarModelMapper*, int);
    using QHBarModelMapper_Count_Callback = int (*)();
    using QHBarModelMapper_SetCount_Callback = void (*)(QHBarModelMapper*, int);
    using QHBarModelMapper_FirstBarSetSection_Callback = int (*)();
    using QHBarModelMapper_SetFirstBarSetSection_Callback = void (*)(QHBarModelMapper*, int);
    using QHBarModelMapper_LastBarSetSection_Callback = int (*)();
    using QHBarModelMapper_SetLastBarSetSection_Callback = void (*)(QHBarModelMapper*, int);
    using QHBarModelMapper_Orientation_Callback = int (*)();
    using QHBarModelMapper_SetOrientation_Callback = void (*)(QHBarModelMapper*, int);
    using QHBarModelMapper_Sender_Callback = QObject* (*)();
    using QHBarModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHBarModelMapper_Receivers_Callback = int (*)(const QHBarModelMapper*, const char*);
    using QHBarModelMapper_IsSignalConnected_Callback = bool (*)(const QHBarModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHBarModelMapper_Metacall_Callback qhbarmodelmapper_metacall_callback = nullptr;
    QHBarModelMapper_Event_Callback qhbarmodelmapper_event_callback = nullptr;
    QHBarModelMapper_EventFilter_Callback qhbarmodelmapper_eventfilter_callback = nullptr;
    QHBarModelMapper_TimerEvent_Callback qhbarmodelmapper_timerevent_callback = nullptr;
    QHBarModelMapper_ChildEvent_Callback qhbarmodelmapper_childevent_callback = nullptr;
    QHBarModelMapper_CustomEvent_Callback qhbarmodelmapper_customevent_callback = nullptr;
    QHBarModelMapper_ConnectNotify_Callback qhbarmodelmapper_connectnotify_callback = nullptr;
    QHBarModelMapper_DisconnectNotify_Callback qhbarmodelmapper_disconnectnotify_callback = nullptr;
    QHBarModelMapper_First_Callback qhbarmodelmapper_first_callback = nullptr;
    QHBarModelMapper_SetFirst_Callback qhbarmodelmapper_setfirst_callback = nullptr;
    QHBarModelMapper_Count_Callback qhbarmodelmapper_count_callback = nullptr;
    QHBarModelMapper_SetCount_Callback qhbarmodelmapper_setcount_callback = nullptr;
    QHBarModelMapper_FirstBarSetSection_Callback qhbarmodelmapper_firstbarsetsection_callback = nullptr;
    QHBarModelMapper_SetFirstBarSetSection_Callback qhbarmodelmapper_setfirstbarsetsection_callback = nullptr;
    QHBarModelMapper_LastBarSetSection_Callback qhbarmodelmapper_lastbarsetsection_callback = nullptr;
    QHBarModelMapper_SetLastBarSetSection_Callback qhbarmodelmapper_setlastbarsetsection_callback = nullptr;
    QHBarModelMapper_Orientation_Callback qhbarmodelmapper_orientation_callback = nullptr;
    QHBarModelMapper_SetOrientation_Callback qhbarmodelmapper_setorientation_callback = nullptr;
    QHBarModelMapper_Sender_Callback qhbarmodelmapper_sender_callback = nullptr;
    QHBarModelMapper_SenderSignalIndex_Callback qhbarmodelmapper_sendersignalindex_callback = nullptr;
    QHBarModelMapper_Receivers_Callback qhbarmodelmapper_receivers_callback = nullptr;
    QHBarModelMapper_IsSignalConnected_Callback qhbarmodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhbarmodelmapper_metacall_isbase = false;
    mutable bool qhbarmodelmapper_event_isbase = false;
    mutable bool qhbarmodelmapper_eventfilter_isbase = false;
    mutable bool qhbarmodelmapper_timerevent_isbase = false;
    mutable bool qhbarmodelmapper_childevent_isbase = false;
    mutable bool qhbarmodelmapper_customevent_isbase = false;
    mutable bool qhbarmodelmapper_connectnotify_isbase = false;
    mutable bool qhbarmodelmapper_disconnectnotify_isbase = false;
    mutable bool qhbarmodelmapper_first_isbase = false;
    mutable bool qhbarmodelmapper_setfirst_isbase = false;
    mutable bool qhbarmodelmapper_count_isbase = false;
    mutable bool qhbarmodelmapper_setcount_isbase = false;
    mutable bool qhbarmodelmapper_firstbarsetsection_isbase = false;
    mutable bool qhbarmodelmapper_setfirstbarsetsection_isbase = false;
    mutable bool qhbarmodelmapper_lastbarsetsection_isbase = false;
    mutable bool qhbarmodelmapper_setlastbarsetsection_isbase = false;
    mutable bool qhbarmodelmapper_orientation_isbase = false;
    mutable bool qhbarmodelmapper_setorientation_isbase = false;
    mutable bool qhbarmodelmapper_sender_isbase = false;
    mutable bool qhbarmodelmapper_sendersignalindex_isbase = false;
    mutable bool qhbarmodelmapper_receivers_isbase = false;
    mutable bool qhbarmodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQHBarModelMapper() : QHBarModelMapper(){};
    VirtualQHBarModelMapper(QObject* parent) : QHBarModelMapper(parent){};

    ~VirtualQHBarModelMapper() {
        qhbarmodelmapper_metacall_callback = nullptr;
        qhbarmodelmapper_event_callback = nullptr;
        qhbarmodelmapper_eventfilter_callback = nullptr;
        qhbarmodelmapper_timerevent_callback = nullptr;
        qhbarmodelmapper_childevent_callback = nullptr;
        qhbarmodelmapper_customevent_callback = nullptr;
        qhbarmodelmapper_connectnotify_callback = nullptr;
        qhbarmodelmapper_disconnectnotify_callback = nullptr;
        qhbarmodelmapper_first_callback = nullptr;
        qhbarmodelmapper_setfirst_callback = nullptr;
        qhbarmodelmapper_count_callback = nullptr;
        qhbarmodelmapper_setcount_callback = nullptr;
        qhbarmodelmapper_firstbarsetsection_callback = nullptr;
        qhbarmodelmapper_setfirstbarsetsection_callback = nullptr;
        qhbarmodelmapper_lastbarsetsection_callback = nullptr;
        qhbarmodelmapper_setlastbarsetsection_callback = nullptr;
        qhbarmodelmapper_orientation_callback = nullptr;
        qhbarmodelmapper_setorientation_callback = nullptr;
        qhbarmodelmapper_sender_callback = nullptr;
        qhbarmodelmapper_sendersignalindex_callback = nullptr;
        qhbarmodelmapper_receivers_callback = nullptr;
        qhbarmodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQHBarModelMapper_Metacall_Callback(QHBarModelMapper_Metacall_Callback cb) { qhbarmodelmapper_metacall_callback = cb; }
    inline void setQHBarModelMapper_Event_Callback(QHBarModelMapper_Event_Callback cb) { qhbarmodelmapper_event_callback = cb; }
    inline void setQHBarModelMapper_EventFilter_Callback(QHBarModelMapper_EventFilter_Callback cb) { qhbarmodelmapper_eventfilter_callback = cb; }
    inline void setQHBarModelMapper_TimerEvent_Callback(QHBarModelMapper_TimerEvent_Callback cb) { qhbarmodelmapper_timerevent_callback = cb; }
    inline void setQHBarModelMapper_ChildEvent_Callback(QHBarModelMapper_ChildEvent_Callback cb) { qhbarmodelmapper_childevent_callback = cb; }
    inline void setQHBarModelMapper_CustomEvent_Callback(QHBarModelMapper_CustomEvent_Callback cb) { qhbarmodelmapper_customevent_callback = cb; }
    inline void setQHBarModelMapper_ConnectNotify_Callback(QHBarModelMapper_ConnectNotify_Callback cb) { qhbarmodelmapper_connectnotify_callback = cb; }
    inline void setQHBarModelMapper_DisconnectNotify_Callback(QHBarModelMapper_DisconnectNotify_Callback cb) { qhbarmodelmapper_disconnectnotify_callback = cb; }
    inline void setQHBarModelMapper_First_Callback(QHBarModelMapper_First_Callback cb) { qhbarmodelmapper_first_callback = cb; }
    inline void setQHBarModelMapper_SetFirst_Callback(QHBarModelMapper_SetFirst_Callback cb) { qhbarmodelmapper_setfirst_callback = cb; }
    inline void setQHBarModelMapper_Count_Callback(QHBarModelMapper_Count_Callback cb) { qhbarmodelmapper_count_callback = cb; }
    inline void setQHBarModelMapper_SetCount_Callback(QHBarModelMapper_SetCount_Callback cb) { qhbarmodelmapper_setcount_callback = cb; }
    inline void setQHBarModelMapper_FirstBarSetSection_Callback(QHBarModelMapper_FirstBarSetSection_Callback cb) { qhbarmodelmapper_firstbarsetsection_callback = cb; }
    inline void setQHBarModelMapper_SetFirstBarSetSection_Callback(QHBarModelMapper_SetFirstBarSetSection_Callback cb) { qhbarmodelmapper_setfirstbarsetsection_callback = cb; }
    inline void setQHBarModelMapper_LastBarSetSection_Callback(QHBarModelMapper_LastBarSetSection_Callback cb) { qhbarmodelmapper_lastbarsetsection_callback = cb; }
    inline void setQHBarModelMapper_SetLastBarSetSection_Callback(QHBarModelMapper_SetLastBarSetSection_Callback cb) { qhbarmodelmapper_setlastbarsetsection_callback = cb; }
    inline void setQHBarModelMapper_Orientation_Callback(QHBarModelMapper_Orientation_Callback cb) { qhbarmodelmapper_orientation_callback = cb; }
    inline void setQHBarModelMapper_SetOrientation_Callback(QHBarModelMapper_SetOrientation_Callback cb) { qhbarmodelmapper_setorientation_callback = cb; }
    inline void setQHBarModelMapper_Sender_Callback(QHBarModelMapper_Sender_Callback cb) { qhbarmodelmapper_sender_callback = cb; }
    inline void setQHBarModelMapper_SenderSignalIndex_Callback(QHBarModelMapper_SenderSignalIndex_Callback cb) { qhbarmodelmapper_sendersignalindex_callback = cb; }
    inline void setQHBarModelMapper_Receivers_Callback(QHBarModelMapper_Receivers_Callback cb) { qhbarmodelmapper_receivers_callback = cb; }
    inline void setQHBarModelMapper_IsSignalConnected_Callback(QHBarModelMapper_IsSignalConnected_Callback cb) { qhbarmodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHBarModelMapper_Metacall_IsBase(bool value) const { qhbarmodelmapper_metacall_isbase = value; }
    inline void setQHBarModelMapper_Event_IsBase(bool value) const { qhbarmodelmapper_event_isbase = value; }
    inline void setQHBarModelMapper_EventFilter_IsBase(bool value) const { qhbarmodelmapper_eventfilter_isbase = value; }
    inline void setQHBarModelMapper_TimerEvent_IsBase(bool value) const { qhbarmodelmapper_timerevent_isbase = value; }
    inline void setQHBarModelMapper_ChildEvent_IsBase(bool value) const { qhbarmodelmapper_childevent_isbase = value; }
    inline void setQHBarModelMapper_CustomEvent_IsBase(bool value) const { qhbarmodelmapper_customevent_isbase = value; }
    inline void setQHBarModelMapper_ConnectNotify_IsBase(bool value) const { qhbarmodelmapper_connectnotify_isbase = value; }
    inline void setQHBarModelMapper_DisconnectNotify_IsBase(bool value) const { qhbarmodelmapper_disconnectnotify_isbase = value; }
    inline void setQHBarModelMapper_First_IsBase(bool value) const { qhbarmodelmapper_first_isbase = value; }
    inline void setQHBarModelMapper_SetFirst_IsBase(bool value) const { qhbarmodelmapper_setfirst_isbase = value; }
    inline void setQHBarModelMapper_Count_IsBase(bool value) const { qhbarmodelmapper_count_isbase = value; }
    inline void setQHBarModelMapper_SetCount_IsBase(bool value) const { qhbarmodelmapper_setcount_isbase = value; }
    inline void setQHBarModelMapper_FirstBarSetSection_IsBase(bool value) const { qhbarmodelmapper_firstbarsetsection_isbase = value; }
    inline void setQHBarModelMapper_SetFirstBarSetSection_IsBase(bool value) const { qhbarmodelmapper_setfirstbarsetsection_isbase = value; }
    inline void setQHBarModelMapper_LastBarSetSection_IsBase(bool value) const { qhbarmodelmapper_lastbarsetsection_isbase = value; }
    inline void setQHBarModelMapper_SetLastBarSetSection_IsBase(bool value) const { qhbarmodelmapper_setlastbarsetsection_isbase = value; }
    inline void setQHBarModelMapper_Orientation_IsBase(bool value) const { qhbarmodelmapper_orientation_isbase = value; }
    inline void setQHBarModelMapper_SetOrientation_IsBase(bool value) const { qhbarmodelmapper_setorientation_isbase = value; }
    inline void setQHBarModelMapper_Sender_IsBase(bool value) const { qhbarmodelmapper_sender_isbase = value; }
    inline void setQHBarModelMapper_SenderSignalIndex_IsBase(bool value) const { qhbarmodelmapper_sendersignalindex_isbase = value; }
    inline void setQHBarModelMapper_Receivers_IsBase(bool value) const { qhbarmodelmapper_receivers_isbase = value; }
    inline void setQHBarModelMapper_IsSignalConnected_IsBase(bool value) const { qhbarmodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhbarmodelmapper_metacall_isbase) {
            qhbarmodelmapper_metacall_isbase = false;
            return QHBarModelMapper::qt_metacall(param1, param2, param3);
        } else if (qhbarmodelmapper_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qhbarmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhbarmodelmapper_event_isbase) {
            qhbarmodelmapper_event_isbase = false;
            return QHBarModelMapper::event(event);
        } else if (qhbarmodelmapper_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qhbarmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBarModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhbarmodelmapper_eventfilter_isbase) {
            qhbarmodelmapper_eventfilter_isbase = false;
            return QHBarModelMapper::eventFilter(watched, event);
        } else if (qhbarmodelmapper_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qhbarmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QHBarModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhbarmodelmapper_timerevent_isbase) {
            qhbarmodelmapper_timerevent_isbase = false;
            QHBarModelMapper::timerEvent(event);
        } else if (qhbarmodelmapper_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qhbarmodelmapper_timerevent_callback(this, cbval1);
        } else {
            QHBarModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhbarmodelmapper_childevent_isbase) {
            qhbarmodelmapper_childevent_isbase = false;
            QHBarModelMapper::childEvent(event);
        } else if (qhbarmodelmapper_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qhbarmodelmapper_childevent_callback(this, cbval1);
        } else {
            QHBarModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhbarmodelmapper_customevent_isbase) {
            qhbarmodelmapper_customevent_isbase = false;
            QHBarModelMapper::customEvent(event);
        } else if (qhbarmodelmapper_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qhbarmodelmapper_customevent_callback(this, cbval1);
        } else {
            QHBarModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhbarmodelmapper_connectnotify_isbase) {
            qhbarmodelmapper_connectnotify_isbase = false;
            QHBarModelMapper::connectNotify(signal);
        } else if (qhbarmodelmapper_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhbarmodelmapper_connectnotify_callback(this, cbval1);
        } else {
            QHBarModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhbarmodelmapper_disconnectnotify_isbase) {
            qhbarmodelmapper_disconnectnotify_isbase = false;
            QHBarModelMapper::disconnectNotify(signal);
        } else if (qhbarmodelmapper_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qhbarmodelmapper_disconnectnotify_callback(this, cbval1);
        } else {
            QHBarModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qhbarmodelmapper_first_isbase) {
            qhbarmodelmapper_first_isbase = false;
            return QHBarModelMapper::first();
        } else if (qhbarmodelmapper_first_callback != nullptr) {
            int callback_ret = qhbarmodelmapper_first_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qhbarmodelmapper_setfirst_isbase) {
            qhbarmodelmapper_setfirst_isbase = false;
            QHBarModelMapper::setFirst(first);
        } else if (qhbarmodelmapper_setfirst_callback != nullptr) {
            int cbval1 = first;

            qhbarmodelmapper_setfirst_callback(this, cbval1);
        } else {
            QHBarModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qhbarmodelmapper_count_isbase) {
            qhbarmodelmapper_count_isbase = false;
            return QHBarModelMapper::count();
        } else if (qhbarmodelmapper_count_callback != nullptr) {
            int callback_ret = qhbarmodelmapper_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qhbarmodelmapper_setcount_isbase) {
            qhbarmodelmapper_setcount_isbase = false;
            QHBarModelMapper::setCount(count);
        } else if (qhbarmodelmapper_setcount_callback != nullptr) {
            int cbval1 = count;

            qhbarmodelmapper_setcount_callback(this, cbval1);
        } else {
            QHBarModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    int firstBarSetSection() const {
        if (qhbarmodelmapper_firstbarsetsection_isbase) {
            qhbarmodelmapper_firstbarsetsection_isbase = false;
            return QHBarModelMapper::firstBarSetSection();
        } else if (qhbarmodelmapper_firstbarsetsection_callback != nullptr) {
            int callback_ret = qhbarmodelmapper_firstbarsetsection_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::firstBarSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBarSetSection(int firstBarSetSection) {
        if (qhbarmodelmapper_setfirstbarsetsection_isbase) {
            qhbarmodelmapper_setfirstbarsetsection_isbase = false;
            QHBarModelMapper::setFirstBarSetSection(firstBarSetSection);
        } else if (qhbarmodelmapper_setfirstbarsetsection_callback != nullptr) {
            int cbval1 = firstBarSetSection;

            qhbarmodelmapper_setfirstbarsetsection_callback(this, cbval1);
        } else {
            QHBarModelMapper::setFirstBarSetSection(firstBarSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int lastBarSetSection() const {
        if (qhbarmodelmapper_lastbarsetsection_isbase) {
            qhbarmodelmapper_lastbarsetsection_isbase = false;
            return QHBarModelMapper::lastBarSetSection();
        } else if (qhbarmodelmapper_lastbarsetsection_callback != nullptr) {
            int callback_ret = qhbarmodelmapper_lastbarsetsection_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::lastBarSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastBarSetSection(int lastBarSetSection) {
        if (qhbarmodelmapper_setlastbarsetsection_isbase) {
            qhbarmodelmapper_setlastbarsetsection_isbase = false;
            QHBarModelMapper::setLastBarSetSection(lastBarSetSection);
        } else if (qhbarmodelmapper_setlastbarsetsection_callback != nullptr) {
            int cbval1 = lastBarSetSection;

            qhbarmodelmapper_setlastbarsetsection_callback(this, cbval1);
        } else {
            QHBarModelMapper::setLastBarSetSection(lastBarSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qhbarmodelmapper_orientation_isbase) {
            qhbarmodelmapper_orientation_isbase = false;
            return QHBarModelMapper::orientation();
        } else if (qhbarmodelmapper_orientation_callback != nullptr) {
            int callback_ret = qhbarmodelmapper_orientation_callback();
            return static_cast<Qt::Orientation>(callback_ret);
        } else {
            return QHBarModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qhbarmodelmapper_setorientation_isbase) {
            qhbarmodelmapper_setorientation_isbase = false;
            QHBarModelMapper::setOrientation(orientation);
        } else if (qhbarmodelmapper_setorientation_callback != nullptr) {
            int cbval1 = static_cast<int>(orientation);

            qhbarmodelmapper_setorientation_callback(this, cbval1);
        } else {
            QHBarModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhbarmodelmapper_sender_isbase) {
            qhbarmodelmapper_sender_isbase = false;
            return QHBarModelMapper::sender();
        } else if (qhbarmodelmapper_sender_callback != nullptr) {
            QObject* callback_ret = qhbarmodelmapper_sender_callback();
            return callback_ret;
        } else {
            return QHBarModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhbarmodelmapper_sendersignalindex_isbase) {
            qhbarmodelmapper_sendersignalindex_isbase = false;
            return QHBarModelMapper::senderSignalIndex();
        } else if (qhbarmodelmapper_sendersignalindex_callback != nullptr) {
            int callback_ret = qhbarmodelmapper_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhbarmodelmapper_receivers_isbase) {
            qhbarmodelmapper_receivers_isbase = false;
            return QHBarModelMapper::receivers(signal);
        } else if (qhbarmodelmapper_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qhbarmodelmapper_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QHBarModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhbarmodelmapper_issignalconnected_isbase) {
            qhbarmodelmapper_issignalconnected_isbase = false;
            return QHBarModelMapper::isSignalConnected(signal);
        } else if (qhbarmodelmapper_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qhbarmodelmapper_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QHBarModelMapper::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QHBarModelMapper_TimerEvent(QHBarModelMapper* self, QTimerEvent* event);
    friend void QHBarModelMapper_QBaseTimerEvent(QHBarModelMapper* self, QTimerEvent* event);
    friend void QHBarModelMapper_ChildEvent(QHBarModelMapper* self, QChildEvent* event);
    friend void QHBarModelMapper_QBaseChildEvent(QHBarModelMapper* self, QChildEvent* event);
    friend void QHBarModelMapper_CustomEvent(QHBarModelMapper* self, QEvent* event);
    friend void QHBarModelMapper_QBaseCustomEvent(QHBarModelMapper* self, QEvent* event);
    friend void QHBarModelMapper_ConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal);
    friend void QHBarModelMapper_QBaseConnectNotify(QHBarModelMapper* self, const QMetaMethod* signal);
    friend void QHBarModelMapper_DisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal);
    friend void QHBarModelMapper_QBaseDisconnectNotify(QHBarModelMapper* self, const QMetaMethod* signal);
    friend int QHBarModelMapper_First(const QHBarModelMapper* self);
    friend int QHBarModelMapper_QBaseFirst(const QHBarModelMapper* self);
    friend void QHBarModelMapper_SetFirst(QHBarModelMapper* self, int first);
    friend void QHBarModelMapper_QBaseSetFirst(QHBarModelMapper* self, int first);
    friend int QHBarModelMapper_Count(const QHBarModelMapper* self);
    friend int QHBarModelMapper_QBaseCount(const QHBarModelMapper* self);
    friend void QHBarModelMapper_SetCount(QHBarModelMapper* self, int count);
    friend void QHBarModelMapper_QBaseSetCount(QHBarModelMapper* self, int count);
    friend int QHBarModelMapper_FirstBarSetSection(const QHBarModelMapper* self);
    friend int QHBarModelMapper_QBaseFirstBarSetSection(const QHBarModelMapper* self);
    friend void QHBarModelMapper_SetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection);
    friend void QHBarModelMapper_QBaseSetFirstBarSetSection(QHBarModelMapper* self, int firstBarSetSection);
    friend int QHBarModelMapper_LastBarSetSection(const QHBarModelMapper* self);
    friend int QHBarModelMapper_QBaseLastBarSetSection(const QHBarModelMapper* self);
    friend void QHBarModelMapper_SetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection);
    friend void QHBarModelMapper_QBaseSetLastBarSetSection(QHBarModelMapper* self, int lastBarSetSection);
    friend int QHBarModelMapper_Orientation(const QHBarModelMapper* self);
    friend int QHBarModelMapper_QBaseOrientation(const QHBarModelMapper* self);
    friend void QHBarModelMapper_SetOrientation(QHBarModelMapper* self, int orientation);
    friend void QHBarModelMapper_QBaseSetOrientation(QHBarModelMapper* self, int orientation);
    friend QObject* QHBarModelMapper_Sender(const QHBarModelMapper* self);
    friend QObject* QHBarModelMapper_QBaseSender(const QHBarModelMapper* self);
    friend int QHBarModelMapper_SenderSignalIndex(const QHBarModelMapper* self);
    friend int QHBarModelMapper_QBaseSenderSignalIndex(const QHBarModelMapper* self);
    friend int QHBarModelMapper_Receivers(const QHBarModelMapper* self, const char* signal);
    friend int QHBarModelMapper_QBaseReceivers(const QHBarModelMapper* self, const char* signal);
    friend bool QHBarModelMapper_IsSignalConnected(const QHBarModelMapper* self, const QMetaMethod* signal);
    friend bool QHBarModelMapper_QBaseIsSignalConnected(const QHBarModelMapper* self, const QMetaMethod* signal);
};

#endif
