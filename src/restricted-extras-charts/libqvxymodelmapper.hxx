#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVXYModelMapper so that we can call protected methods
class VirtualQVXYModelMapper final : public QVXYModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQVXYModelMapper = true;

    // Virtual class public types (including callbacks)
    using QVXYModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QVXYModelMapper_Metacast_Callback = void* (*)(QVXYModelMapper*, const char*);
    using QVXYModelMapper_Metacall_Callback = int (*)(QVXYModelMapper*, int, int, void**);
    using QVXYModelMapper_Event_Callback = bool (*)(QVXYModelMapper*, QEvent*);
    using QVXYModelMapper_EventFilter_Callback = bool (*)(QVXYModelMapper*, QObject*, QEvent*);
    using QVXYModelMapper_TimerEvent_Callback = void (*)(QVXYModelMapper*, QTimerEvent*);
    using QVXYModelMapper_ChildEvent_Callback = void (*)(QVXYModelMapper*, QChildEvent*);
    using QVXYModelMapper_CustomEvent_Callback = void (*)(QVXYModelMapper*, QEvent*);
    using QVXYModelMapper_ConnectNotify_Callback = void (*)(QVXYModelMapper*, QMetaMethod*);
    using QVXYModelMapper_DisconnectNotify_Callback = void (*)(QVXYModelMapper*, QMetaMethod*);
    using QVXYModelMapper_First_Callback = int (*)();
    using QVXYModelMapper_SetFirst_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_Count_Callback = int (*)();
    using QVXYModelMapper_SetCount_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_Orientation_Callback = int (*)();
    using QVXYModelMapper_SetOrientation_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_XSection_Callback = int (*)();
    using QVXYModelMapper_SetXSection_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_YSection_Callback = int (*)();
    using QVXYModelMapper_SetYSection_Callback = void (*)(QVXYModelMapper*, int);
    using QVXYModelMapper_Sender_Callback = QObject* (*)();
    using QVXYModelMapper_SenderSignalIndex_Callback = int (*)();
    using QVXYModelMapper_Receivers_Callback = int (*)(const QVXYModelMapper*, const char*);
    using QVXYModelMapper_IsSignalConnected_Callback = bool (*)(const QVXYModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVXYModelMapper_MetaObject_Callback qvxymodelmapper_metaobject_callback = nullptr;
    QVXYModelMapper_Metacast_Callback qvxymodelmapper_metacast_callback = nullptr;
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
    mutable bool qvxymodelmapper_metaobject_isbase = false;
    mutable bool qvxymodelmapper_metacast_isbase = false;
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
    VirtualQVXYModelMapper() : QVXYModelMapper() {};
    VirtualQVXYModelMapper(QObject* parent) : QVXYModelMapper(parent) {};

    // Callback setters
    inline void setQVXYModelMapper_MetaObject_Callback(QVXYModelMapper_MetaObject_Callback cb) { qvxymodelmapper_metaobject_callback = cb; }
    inline void setQVXYModelMapper_Metacast_Callback(QVXYModelMapper_Metacast_Callback cb) { qvxymodelmapper_metacast_callback = cb; }
    inline void setQVXYModelMapper_Metacall_Callback(QVXYModelMapper_Metacall_Callback cb) { qvxymodelmapper_metacall_callback = cb; }
    inline void setQVXYModelMapper_Event_Callback(QVXYModelMapper_Event_Callback cb) { qvxymodelmapper_event_callback = cb; }
    inline void setQVXYModelMapper_EventFilter_Callback(QVXYModelMapper_EventFilter_Callback cb) { qvxymodelmapper_eventfilter_callback = cb; }
    inline void setQVXYModelMapper_TimerEvent_Callback(QVXYModelMapper_TimerEvent_Callback cb) { qvxymodelmapper_timerevent_callback = cb; }
    inline void setQVXYModelMapper_ChildEvent_Callback(QVXYModelMapper_ChildEvent_Callback cb) { qvxymodelmapper_childevent_callback = cb; }
    inline void setQVXYModelMapper_CustomEvent_Callback(QVXYModelMapper_CustomEvent_Callback cb) { qvxymodelmapper_customevent_callback = cb; }
    inline void setQVXYModelMapper_ConnectNotify_Callback(QVXYModelMapper_ConnectNotify_Callback cb) { qvxymodelmapper_connectnotify_callback = cb; }
    inline void setQVXYModelMapper_DisconnectNotify_Callback(QVXYModelMapper_DisconnectNotify_Callback cb) { qvxymodelmapper_disconnectnotify_callback = cb; }
    inline void setQVXYModelMapper_First_Callback(QVXYModelMapper_First_Callback cb) { qvxymodelmapper_first_callback = cb; }
    inline void setQVXYModelMapper_SetFirst_Callback(QVXYModelMapper_SetFirst_Callback cb) { qvxymodelmapper_setfirst_callback = cb; }
    inline void setQVXYModelMapper_Count_Callback(QVXYModelMapper_Count_Callback cb) { qvxymodelmapper_count_callback = cb; }
    inline void setQVXYModelMapper_SetCount_Callback(QVXYModelMapper_SetCount_Callback cb) { qvxymodelmapper_setcount_callback = cb; }
    inline void setQVXYModelMapper_Orientation_Callback(QVXYModelMapper_Orientation_Callback cb) { qvxymodelmapper_orientation_callback = cb; }
    inline void setQVXYModelMapper_SetOrientation_Callback(QVXYModelMapper_SetOrientation_Callback cb) { qvxymodelmapper_setorientation_callback = cb; }
    inline void setQVXYModelMapper_XSection_Callback(QVXYModelMapper_XSection_Callback cb) { qvxymodelmapper_xsection_callback = cb; }
    inline void setQVXYModelMapper_SetXSection_Callback(QVXYModelMapper_SetXSection_Callback cb) { qvxymodelmapper_setxsection_callback = cb; }
    inline void setQVXYModelMapper_YSection_Callback(QVXYModelMapper_YSection_Callback cb) { qvxymodelmapper_ysection_callback = cb; }
    inline void setQVXYModelMapper_SetYSection_Callback(QVXYModelMapper_SetYSection_Callback cb) { qvxymodelmapper_setysection_callback = cb; }
    inline void setQVXYModelMapper_Sender_Callback(QVXYModelMapper_Sender_Callback cb) { qvxymodelmapper_sender_callback = cb; }
    inline void setQVXYModelMapper_SenderSignalIndex_Callback(QVXYModelMapper_SenderSignalIndex_Callback cb) { qvxymodelmapper_sendersignalindex_callback = cb; }
    inline void setQVXYModelMapper_Receivers_Callback(QVXYModelMapper_Receivers_Callback cb) { qvxymodelmapper_receivers_callback = cb; }
    inline void setQVXYModelMapper_IsSignalConnected_Callback(QVXYModelMapper_IsSignalConnected_Callback cb) { qvxymodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVXYModelMapper_MetaObject_IsBase(bool value) const { qvxymodelmapper_metaobject_isbase = value; }
    inline void setQVXYModelMapper_Metacast_IsBase(bool value) const { qvxymodelmapper_metacast_isbase = value; }
    inline void setQVXYModelMapper_Metacall_IsBase(bool value) const { qvxymodelmapper_metacall_isbase = value; }
    inline void setQVXYModelMapper_Event_IsBase(bool value) const { qvxymodelmapper_event_isbase = value; }
    inline void setQVXYModelMapper_EventFilter_IsBase(bool value) const { qvxymodelmapper_eventfilter_isbase = value; }
    inline void setQVXYModelMapper_TimerEvent_IsBase(bool value) const { qvxymodelmapper_timerevent_isbase = value; }
    inline void setQVXYModelMapper_ChildEvent_IsBase(bool value) const { qvxymodelmapper_childevent_isbase = value; }
    inline void setQVXYModelMapper_CustomEvent_IsBase(bool value) const { qvxymodelmapper_customevent_isbase = value; }
    inline void setQVXYModelMapper_ConnectNotify_IsBase(bool value) const { qvxymodelmapper_connectnotify_isbase = value; }
    inline void setQVXYModelMapper_DisconnectNotify_IsBase(bool value) const { qvxymodelmapper_disconnectnotify_isbase = value; }
    inline void setQVXYModelMapper_First_IsBase(bool value) const { qvxymodelmapper_first_isbase = value; }
    inline void setQVXYModelMapper_SetFirst_IsBase(bool value) const { qvxymodelmapper_setfirst_isbase = value; }
    inline void setQVXYModelMapper_Count_IsBase(bool value) const { qvxymodelmapper_count_isbase = value; }
    inline void setQVXYModelMapper_SetCount_IsBase(bool value) const { qvxymodelmapper_setcount_isbase = value; }
    inline void setQVXYModelMapper_Orientation_IsBase(bool value) const { qvxymodelmapper_orientation_isbase = value; }
    inline void setQVXYModelMapper_SetOrientation_IsBase(bool value) const { qvxymodelmapper_setorientation_isbase = value; }
    inline void setQVXYModelMapper_XSection_IsBase(bool value) const { qvxymodelmapper_xsection_isbase = value; }
    inline void setQVXYModelMapper_SetXSection_IsBase(bool value) const { qvxymodelmapper_setxsection_isbase = value; }
    inline void setQVXYModelMapper_YSection_IsBase(bool value) const { qvxymodelmapper_ysection_isbase = value; }
    inline void setQVXYModelMapper_SetYSection_IsBase(bool value) const { qvxymodelmapper_setysection_isbase = value; }
    inline void setQVXYModelMapper_Sender_IsBase(bool value) const { qvxymodelmapper_sender_isbase = value; }
    inline void setQVXYModelMapper_SenderSignalIndex_IsBase(bool value) const { qvxymodelmapper_sendersignalindex_isbase = value; }
    inline void setQVXYModelMapper_Receivers_IsBase(bool value) const { qvxymodelmapper_receivers_isbase = value; }
    inline void setQVXYModelMapper_IsSignalConnected_IsBase(bool value) const { qvxymodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvxymodelmapper_metaobject_isbase) {
            qvxymodelmapper_metaobject_isbase = false;
            return QVXYModelMapper::metaObject();
        }
        auto metaobject_cb = qvxymodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVXYModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvxymodelmapper_metacast_isbase) {
            qvxymodelmapper_metacast_isbase = false;
            return QVXYModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qvxymodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVXYModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvxymodelmapper_metacall_isbase) {
            qvxymodelmapper_metacall_isbase = false;
            return QVXYModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvxymodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvxymodelmapper_event_isbase) {
            qvxymodelmapper_event_isbase = false;
            return QVXYModelMapper::event(event);
        }
        auto event_cb = qvxymodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVXYModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvxymodelmapper_eventfilter_isbase) {
            qvxymodelmapper_eventfilter_isbase = false;
            return QVXYModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvxymodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVXYModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvxymodelmapper_timerevent_isbase) {
            qvxymodelmapper_timerevent_isbase = false;
            QVXYModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvxymodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvxymodelmapper_childevent_isbase) {
            qvxymodelmapper_childevent_isbase = false;
            QVXYModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qvxymodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvxymodelmapper_customevent_isbase) {
            qvxymodelmapper_customevent_isbase = false;
            QVXYModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qvxymodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvxymodelmapper_connectnotify_isbase) {
            qvxymodelmapper_connectnotify_isbase = false;
            QVXYModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvxymodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvxymodelmapper_disconnectnotify_isbase) {
            qvxymodelmapper_disconnectnotify_isbase = false;
            QVXYModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvxymodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qvxymodelmapper_first_isbase) {
            qvxymodelmapper_first_isbase = false;
            return QVXYModelMapper::first();
        }
        auto first_cb = qvxymodelmapper_first_callback;
        if (first_cb) {
            int callback_ret = first_cb();
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::first();
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qvxymodelmapper_setfirst_isbase) {
            qvxymodelmapper_setfirst_isbase = false;
            QVXYModelMapper::setFirst(first);
            return;
        }
        auto setfirst_cb = qvxymodelmapper_setfirst_callback;
        if (setfirst_cb) {
            int cbval1 = first;

            setfirst_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::setFirst(first);
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qvxymodelmapper_count_isbase) {
            qvxymodelmapper_count_isbase = false;
            return QVXYModelMapper::count();
        }
        auto count_cb = qvxymodelmapper_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::count();
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qvxymodelmapper_setcount_isbase) {
            qvxymodelmapper_setcount_isbase = false;
            QVXYModelMapper::setCount(count);
            return;
        }
        auto setcount_cb = qvxymodelmapper_setcount_callback;
        if (setcount_cb) {
            int cbval1 = count;

            setcount_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::setCount(count);
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qvxymodelmapper_orientation_isbase) {
            qvxymodelmapper_orientation_isbase = false;
            return QVXYModelMapper::orientation();
        }
        auto orientation_cb = qvxymodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QVXYModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qvxymodelmapper_setorientation_isbase) {
            qvxymodelmapper_setorientation_isbase = false;
            QVXYModelMapper::setOrientation(orientation);
            return;
        }
        auto setorientation_cb = qvxymodelmapper_setorientation_callback;
        if (setorientation_cb) {
            int cbval1 = static_cast<int>(orientation);

            setorientation_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::setOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    int xSection() const {
        if (qvxymodelmapper_xsection_isbase) {
            qvxymodelmapper_xsection_isbase = false;
            return QVXYModelMapper::xSection();
        }
        auto xsection_cb = qvxymodelmapper_xsection_callback;
        if (xsection_cb) {
            int callback_ret = xsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::xSection();
    }

    // Virtual method for C ABI access and custom callback
    void setXSection(int xSection) {
        if (qvxymodelmapper_setxsection_isbase) {
            qvxymodelmapper_setxsection_isbase = false;
            QVXYModelMapper::setXSection(xSection);
            return;
        }
        auto setxsection_cb = qvxymodelmapper_setxsection_callback;
        if (setxsection_cb) {
            int cbval1 = xSection;

            setxsection_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::setXSection(xSection);
    }

    // Virtual method for C ABI access and custom callback
    int ySection() const {
        if (qvxymodelmapper_ysection_isbase) {
            qvxymodelmapper_ysection_isbase = false;
            return QVXYModelMapper::ySection();
        }
        auto ysection_cb = qvxymodelmapper_ysection_callback;
        if (ysection_cb) {
            int callback_ret = ysection_cb();
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::ySection();
    }

    // Virtual method for C ABI access and custom callback
    void setYSection(int ySection) {
        if (qvxymodelmapper_setysection_isbase) {
            qvxymodelmapper_setysection_isbase = false;
            QVXYModelMapper::setYSection(ySection);
            return;
        }
        auto setysection_cb = qvxymodelmapper_setysection_callback;
        if (setysection_cb) {
            int cbval1 = ySection;

            setysection_cb(this, cbval1);
            return;
        }
        QVXYModelMapper::setYSection(ySection);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvxymodelmapper_sender_isbase) {
            qvxymodelmapper_sender_isbase = false;
            return QVXYModelMapper::sender();
        }
        auto sender_cb = qvxymodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVXYModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvxymodelmapper_sendersignalindex_isbase) {
            qvxymodelmapper_sendersignalindex_isbase = false;
            return QVXYModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvxymodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvxymodelmapper_receivers_isbase) {
            qvxymodelmapper_receivers_isbase = false;
            return QVXYModelMapper::receivers(signal);
        }
        auto receivers_cb = qvxymodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVXYModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvxymodelmapper_issignalconnected_isbase) {
            qvxymodelmapper_issignalconnected_isbase = false;
            return QVXYModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvxymodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVXYModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVXYModelMapper_TimerEvent(QVXYModelMapper* self, QTimerEvent* event);
    friend void QVXYModelMapper_SuperTimerEvent(QVXYModelMapper* self, QTimerEvent* event);
    friend void QVXYModelMapper_ChildEvent(QVXYModelMapper* self, QChildEvent* event);
    friend void QVXYModelMapper_SuperChildEvent(QVXYModelMapper* self, QChildEvent* event);
    friend void QVXYModelMapper_CustomEvent(QVXYModelMapper* self, QEvent* event);
    friend void QVXYModelMapper_SuperCustomEvent(QVXYModelMapper* self, QEvent* event);
    friend void QVXYModelMapper_ConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
    friend void QVXYModelMapper_SuperConnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
    friend void QVXYModelMapper_DisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
    friend void QVXYModelMapper_SuperDisconnectNotify(QVXYModelMapper* self, const QMetaMethod* signal);
    friend int QVXYModelMapper_First(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SuperFirst(const QVXYModelMapper* self);
    friend void QVXYModelMapper_SetFirst(QVXYModelMapper* self, int first);
    friend void QVXYModelMapper_SuperSetFirst(QVXYModelMapper* self, int first);
    friend int QVXYModelMapper_Count(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SuperCount(const QVXYModelMapper* self);
    friend void QVXYModelMapper_SetCount(QVXYModelMapper* self, int count);
    friend void QVXYModelMapper_SuperSetCount(QVXYModelMapper* self, int count);
    friend int QVXYModelMapper_Orientation(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SuperOrientation(const QVXYModelMapper* self);
    friend void QVXYModelMapper_SetOrientation(QVXYModelMapper* self, int orientation);
    friend void QVXYModelMapper_SuperSetOrientation(QVXYModelMapper* self, int orientation);
    friend int QVXYModelMapper_XSection(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SuperXSection(const QVXYModelMapper* self);
    friend void QVXYModelMapper_SetXSection(QVXYModelMapper* self, int xSection);
    friend void QVXYModelMapper_SuperSetXSection(QVXYModelMapper* self, int xSection);
    friend int QVXYModelMapper_YSection(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SuperYSection(const QVXYModelMapper* self);
    friend void QVXYModelMapper_SetYSection(QVXYModelMapper* self, int ySection);
    friend void QVXYModelMapper_SuperSetYSection(QVXYModelMapper* self, int ySection);
    friend QObject* QVXYModelMapper_Sender(const QVXYModelMapper* self);
    friend QObject* QVXYModelMapper_SuperSender(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SenderSignalIndex(const QVXYModelMapper* self);
    friend int QVXYModelMapper_SuperSenderSignalIndex(const QVXYModelMapper* self);
    friend int QVXYModelMapper_Receivers(const QVXYModelMapper* self, const char* signal);
    friend int QVXYModelMapper_SuperReceivers(const QVXYModelMapper* self, const char* signal);
    friend bool QVXYModelMapper_IsSignalConnected(const QVXYModelMapper* self, const QMetaMethod* signal);
    friend bool QVXYModelMapper_SuperIsSignalConnected(const QVXYModelMapper* self, const QMetaMethod* signal);
};

#endif
