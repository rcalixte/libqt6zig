#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBARMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVBarModelMapper so that we can call protected methods
class VirtualQVBarModelMapper final : public QVBarModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQVBarModelMapper = true;

    // Virtual class public types (including callbacks)
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
    VirtualQVBarModelMapper() : QVBarModelMapper(){};
    VirtualQVBarModelMapper(QObject* parent) : QVBarModelMapper(parent){};

    ~VirtualQVBarModelMapper() {
        qvbarmodelmapper_metacall_callback = nullptr;
        qvbarmodelmapper_event_callback = nullptr;
        qvbarmodelmapper_eventfilter_callback = nullptr;
        qvbarmodelmapper_timerevent_callback = nullptr;
        qvbarmodelmapper_childevent_callback = nullptr;
        qvbarmodelmapper_customevent_callback = nullptr;
        qvbarmodelmapper_connectnotify_callback = nullptr;
        qvbarmodelmapper_disconnectnotify_callback = nullptr;
        qvbarmodelmapper_first_callback = nullptr;
        qvbarmodelmapper_setfirst_callback = nullptr;
        qvbarmodelmapper_count_callback = nullptr;
        qvbarmodelmapper_setcount_callback = nullptr;
        qvbarmodelmapper_firstbarsetsection_callback = nullptr;
        qvbarmodelmapper_setfirstbarsetsection_callback = nullptr;
        qvbarmodelmapper_lastbarsetsection_callback = nullptr;
        qvbarmodelmapper_setlastbarsetsection_callback = nullptr;
        qvbarmodelmapper_orientation_callback = nullptr;
        qvbarmodelmapper_setorientation_callback = nullptr;
        qvbarmodelmapper_sender_callback = nullptr;
        qvbarmodelmapper_sendersignalindex_callback = nullptr;
        qvbarmodelmapper_receivers_callback = nullptr;
        qvbarmodelmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvbarmodelmapper_metacall_isbase) {
            qvbarmodelmapper_metacall_isbase = false;
            return QVBarModelMapper::qt_metacall(param1, param2, param3);
        } else if (qvbarmodelmapper_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qvbarmodelmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvbarmodelmapper_event_isbase) {
            qvbarmodelmapper_event_isbase = false;
            return QVBarModelMapper::event(event);
        } else if (qvbarmodelmapper_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qvbarmodelmapper_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBarModelMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvbarmodelmapper_eventfilter_isbase) {
            qvbarmodelmapper_eventfilter_isbase = false;
            return QVBarModelMapper::eventFilter(watched, event);
        } else if (qvbarmodelmapper_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qvbarmodelmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QVBarModelMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvbarmodelmapper_timerevent_isbase) {
            qvbarmodelmapper_timerevent_isbase = false;
            QVBarModelMapper::timerEvent(event);
        } else if (qvbarmodelmapper_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qvbarmodelmapper_timerevent_callback(this, cbval1);
        } else {
            QVBarModelMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvbarmodelmapper_childevent_isbase) {
            qvbarmodelmapper_childevent_isbase = false;
            QVBarModelMapper::childEvent(event);
        } else if (qvbarmodelmapper_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qvbarmodelmapper_childevent_callback(this, cbval1);
        } else {
            QVBarModelMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvbarmodelmapper_customevent_isbase) {
            qvbarmodelmapper_customevent_isbase = false;
            QVBarModelMapper::customEvent(event);
        } else if (qvbarmodelmapper_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qvbarmodelmapper_customevent_callback(this, cbval1);
        } else {
            QVBarModelMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvbarmodelmapper_connectnotify_isbase) {
            qvbarmodelmapper_connectnotify_isbase = false;
            QVBarModelMapper::connectNotify(signal);
        } else if (qvbarmodelmapper_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvbarmodelmapper_connectnotify_callback(this, cbval1);
        } else {
            QVBarModelMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvbarmodelmapper_disconnectnotify_isbase) {
            qvbarmodelmapper_disconnectnotify_isbase = false;
            QVBarModelMapper::disconnectNotify(signal);
        } else if (qvbarmodelmapper_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qvbarmodelmapper_disconnectnotify_callback(this, cbval1);
        } else {
            QVBarModelMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvbarmodelmapper_first_isbase) {
            qvbarmodelmapper_first_isbase = false;
            return QVBarModelMapper::first();
        } else if (qvbarmodelmapper_first_callback != nullptr) {
            int callback_ret = qvbarmodelmapper_first_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::first();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvbarmodelmapper_setfirst_isbase) {
            qvbarmodelmapper_setfirst_isbase = false;
            QVBarModelMapper::setFirst(first);
        } else if (qvbarmodelmapper_setfirst_callback != nullptr) {
            int cbval1 = first;

            qvbarmodelmapper_setfirst_callback(this, cbval1);
        } else {
            QVBarModelMapper::setFirst(first);
        }
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvbarmodelmapper_count_isbase) {
            qvbarmodelmapper_count_isbase = false;
            return QVBarModelMapper::count();
        } else if (qvbarmodelmapper_count_callback != nullptr) {
            int callback_ret = qvbarmodelmapper_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvbarmodelmapper_setcount_isbase) {
            qvbarmodelmapper_setcount_isbase = false;
            QVBarModelMapper::setCount(count);
        } else if (qvbarmodelmapper_setcount_callback != nullptr) {
            int cbval1 = count;

            qvbarmodelmapper_setcount_callback(this, cbval1);
        } else {
            QVBarModelMapper::setCount(count);
        }
    }

    // Virtual method for C ABI access and custom callback
    int firstBarSetSection() const {
        if (qvbarmodelmapper_firstbarsetsection_isbase) {
            qvbarmodelmapper_firstbarsetsection_isbase = false;
            return QVBarModelMapper::firstBarSetSection();
        } else if (qvbarmodelmapper_firstbarsetsection_callback != nullptr) {
            int callback_ret = qvbarmodelmapper_firstbarsetsection_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::firstBarSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFirstBarSetSection(int firstBarSetSection) {
        if (qvbarmodelmapper_setfirstbarsetsection_isbase) {
            qvbarmodelmapper_setfirstbarsetsection_isbase = false;
            QVBarModelMapper::setFirstBarSetSection(firstBarSetSection);
        } else if (qvbarmodelmapper_setfirstbarsetsection_callback != nullptr) {
            int cbval1 = firstBarSetSection;

            qvbarmodelmapper_setfirstbarsetsection_callback(this, cbval1);
        } else {
            QVBarModelMapper::setFirstBarSetSection(firstBarSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    int lastBarSetSection() const {
        if (qvbarmodelmapper_lastbarsetsection_isbase) {
            qvbarmodelmapper_lastbarsetsection_isbase = false;
            return QVBarModelMapper::lastBarSetSection();
        } else if (qvbarmodelmapper_lastbarsetsection_callback != nullptr) {
            int callback_ret = qvbarmodelmapper_lastbarsetsection_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::lastBarSetSection();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLastBarSetSection(int lastBarSetSection) {
        if (qvbarmodelmapper_setlastbarsetsection_isbase) {
            qvbarmodelmapper_setlastbarsetsection_isbase = false;
            QVBarModelMapper::setLastBarSetSection(lastBarSetSection);
        } else if (qvbarmodelmapper_setlastbarsetsection_callback != nullptr) {
            int cbval1 = lastBarSetSection;

            qvbarmodelmapper_setlastbarsetsection_callback(this, cbval1);
        } else {
            QVBarModelMapper::setLastBarSetSection(lastBarSetSection);
        }
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvbarmodelmapper_orientation_isbase) {
            qvbarmodelmapper_orientation_isbase = false;
            return QVBarModelMapper::orientation();
        } else if (qvbarmodelmapper_orientation_callback != nullptr) {
            int callback_ret = qvbarmodelmapper_orientation_callback();
            return static_cast<Qt::Orientation>(callback_ret);
        } else {
            return QVBarModelMapper::orientation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvbarmodelmapper_setorientation_isbase) {
            qvbarmodelmapper_setorientation_isbase = false;
            QVBarModelMapper::setOrientation(orientation);
        } else if (qvbarmodelmapper_setorientation_callback != nullptr) {
            int cbval1 = static_cast<int>(orientation);

            qvbarmodelmapper_setorientation_callback(this, cbval1);
        } else {
            QVBarModelMapper::setOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvbarmodelmapper_sender_isbase) {
            qvbarmodelmapper_sender_isbase = false;
            return QVBarModelMapper::sender();
        } else if (qvbarmodelmapper_sender_callback != nullptr) {
            QObject* callback_ret = qvbarmodelmapper_sender_callback();
            return callback_ret;
        } else {
            return QVBarModelMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvbarmodelmapper_sendersignalindex_isbase) {
            qvbarmodelmapper_sendersignalindex_isbase = false;
            return QVBarModelMapper::senderSignalIndex();
        } else if (qvbarmodelmapper_sendersignalindex_callback != nullptr) {
            int callback_ret = qvbarmodelmapper_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvbarmodelmapper_receivers_isbase) {
            qvbarmodelmapper_receivers_isbase = false;
            return QVBarModelMapper::receivers(signal);
        } else if (qvbarmodelmapper_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qvbarmodelmapper_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QVBarModelMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvbarmodelmapper_issignalconnected_isbase) {
            qvbarmodelmapper_issignalconnected_isbase = false;
            return QVBarModelMapper::isSignalConnected(signal);
        } else if (qvbarmodelmapper_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qvbarmodelmapper_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QVBarModelMapper::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QVBarModelMapper_TimerEvent(QVBarModelMapper* self, QTimerEvent* event);
    friend void QVBarModelMapper_QBaseTimerEvent(QVBarModelMapper* self, QTimerEvent* event);
    friend void QVBarModelMapper_ChildEvent(QVBarModelMapper* self, QChildEvent* event);
    friend void QVBarModelMapper_QBaseChildEvent(QVBarModelMapper* self, QChildEvent* event);
    friend void QVBarModelMapper_CustomEvent(QVBarModelMapper* self, QEvent* event);
    friend void QVBarModelMapper_QBaseCustomEvent(QVBarModelMapper* self, QEvent* event);
    friend void QVBarModelMapper_ConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_QBaseConnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_DisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend void QVBarModelMapper_QBaseDisconnectNotify(QVBarModelMapper* self, const QMetaMethod* signal);
    friend int QVBarModelMapper_First(const QVBarModelMapper* self);
    friend int QVBarModelMapper_QBaseFirst(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetFirst(QVBarModelMapper* self, int first);
    friend void QVBarModelMapper_QBaseSetFirst(QVBarModelMapper* self, int first);
    friend int QVBarModelMapper_Count(const QVBarModelMapper* self);
    friend int QVBarModelMapper_QBaseCount(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetCount(QVBarModelMapper* self, int count);
    friend void QVBarModelMapper_QBaseSetCount(QVBarModelMapper* self, int count);
    friend int QVBarModelMapper_FirstBarSetSection(const QVBarModelMapper* self);
    friend int QVBarModelMapper_QBaseFirstBarSetSection(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection);
    friend void QVBarModelMapper_QBaseSetFirstBarSetSection(QVBarModelMapper* self, int firstBarSetSection);
    friend int QVBarModelMapper_LastBarSetSection(const QVBarModelMapper* self);
    friend int QVBarModelMapper_QBaseLastBarSetSection(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection);
    friend void QVBarModelMapper_QBaseSetLastBarSetSection(QVBarModelMapper* self, int lastBarSetSection);
    friend int QVBarModelMapper_Orientation(const QVBarModelMapper* self);
    friend int QVBarModelMapper_QBaseOrientation(const QVBarModelMapper* self);
    friend void QVBarModelMapper_SetOrientation(QVBarModelMapper* self, int orientation);
    friend void QVBarModelMapper_QBaseSetOrientation(QVBarModelMapper* self, int orientation);
    friend QObject* QVBarModelMapper_Sender(const QVBarModelMapper* self);
    friend QObject* QVBarModelMapper_QBaseSender(const QVBarModelMapper* self);
    friend int QVBarModelMapper_SenderSignalIndex(const QVBarModelMapper* self);
    friend int QVBarModelMapper_QBaseSenderSignalIndex(const QVBarModelMapper* self);
    friend int QVBarModelMapper_Receivers(const QVBarModelMapper* self, const char* signal);
    friend int QVBarModelMapper_QBaseReceivers(const QVBarModelMapper* self, const char* signal);
    friend bool QVBarModelMapper_IsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal);
    friend bool QVBarModelMapper_QBaseIsSignalConnected(const QVBarModelMapper* self, const QMetaMethod* signal);
};

#endif
