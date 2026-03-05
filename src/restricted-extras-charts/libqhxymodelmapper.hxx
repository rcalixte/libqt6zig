#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQHXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHXYModelMapper so that we can call protected methods
class VirtualQHXYModelMapper final : public QHXYModelMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQHXYModelMapper = true;

    // Virtual class public types (including callbacks)
    using QHXYModelMapper_MetaObject_Callback = QMetaObject* (*)();
    using QHXYModelMapper_Metacast_Callback = void* (*)(QHXYModelMapper*, const char*);
    using QHXYModelMapper_Metacall_Callback = int (*)(QHXYModelMapper*, int, int, void**);
    using QHXYModelMapper_Event_Callback = bool (*)(QHXYModelMapper*, QEvent*);
    using QHXYModelMapper_EventFilter_Callback = bool (*)(QHXYModelMapper*, QObject*, QEvent*);
    using QHXYModelMapper_TimerEvent_Callback = void (*)(QHXYModelMapper*, QTimerEvent*);
    using QHXYModelMapper_ChildEvent_Callback = void (*)(QHXYModelMapper*, QChildEvent*);
    using QHXYModelMapper_CustomEvent_Callback = void (*)(QHXYModelMapper*, QEvent*);
    using QHXYModelMapper_ConnectNotify_Callback = void (*)(QHXYModelMapper*, QMetaMethod*);
    using QHXYModelMapper_DisconnectNotify_Callback = void (*)(QHXYModelMapper*, QMetaMethod*);
    using QHXYModelMapper_First_Callback = int (*)();
    using QHXYModelMapper_SetFirst_Callback = void (*)(QHXYModelMapper*, int);
    using QHXYModelMapper_Count_Callback = int (*)();
    using QHXYModelMapper_SetCount_Callback = void (*)(QHXYModelMapper*, int);
    using QHXYModelMapper_Orientation_Callback = int (*)();
    using QHXYModelMapper_SetOrientation_Callback = void (*)(QHXYModelMapper*, int);
    using QHXYModelMapper_XSection_Callback = int (*)();
    using QHXYModelMapper_SetXSection_Callback = void (*)(QHXYModelMapper*, int);
    using QHXYModelMapper_YSection_Callback = int (*)();
    using QHXYModelMapper_SetYSection_Callback = void (*)(QHXYModelMapper*, int);
    using QHXYModelMapper_Sender_Callback = QObject* (*)();
    using QHXYModelMapper_SenderSignalIndex_Callback = int (*)();
    using QHXYModelMapper_Receivers_Callback = int (*)(const QHXYModelMapper*, const char*);
    using QHXYModelMapper_IsSignalConnected_Callback = bool (*)(const QHXYModelMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QHXYModelMapper_MetaObject_Callback qhxymodelmapper_metaobject_callback = nullptr;
    QHXYModelMapper_Metacast_Callback qhxymodelmapper_metacast_callback = nullptr;
    QHXYModelMapper_Metacall_Callback qhxymodelmapper_metacall_callback = nullptr;
    QHXYModelMapper_Event_Callback qhxymodelmapper_event_callback = nullptr;
    QHXYModelMapper_EventFilter_Callback qhxymodelmapper_eventfilter_callback = nullptr;
    QHXYModelMapper_TimerEvent_Callback qhxymodelmapper_timerevent_callback = nullptr;
    QHXYModelMapper_ChildEvent_Callback qhxymodelmapper_childevent_callback = nullptr;
    QHXYModelMapper_CustomEvent_Callback qhxymodelmapper_customevent_callback = nullptr;
    QHXYModelMapper_ConnectNotify_Callback qhxymodelmapper_connectnotify_callback = nullptr;
    QHXYModelMapper_DisconnectNotify_Callback qhxymodelmapper_disconnectnotify_callback = nullptr;
    QHXYModelMapper_First_Callback qhxymodelmapper_first_callback = nullptr;
    QHXYModelMapper_SetFirst_Callback qhxymodelmapper_setfirst_callback = nullptr;
    QHXYModelMapper_Count_Callback qhxymodelmapper_count_callback = nullptr;
    QHXYModelMapper_SetCount_Callback qhxymodelmapper_setcount_callback = nullptr;
    QHXYModelMapper_Orientation_Callback qhxymodelmapper_orientation_callback = nullptr;
    QHXYModelMapper_SetOrientation_Callback qhxymodelmapper_setorientation_callback = nullptr;
    QHXYModelMapper_XSection_Callback qhxymodelmapper_xsection_callback = nullptr;
    QHXYModelMapper_SetXSection_Callback qhxymodelmapper_setxsection_callback = nullptr;
    QHXYModelMapper_YSection_Callback qhxymodelmapper_ysection_callback = nullptr;
    QHXYModelMapper_SetYSection_Callback qhxymodelmapper_setysection_callback = nullptr;
    QHXYModelMapper_Sender_Callback qhxymodelmapper_sender_callback = nullptr;
    QHXYModelMapper_SenderSignalIndex_Callback qhxymodelmapper_sendersignalindex_callback = nullptr;
    QHXYModelMapper_Receivers_Callback qhxymodelmapper_receivers_callback = nullptr;
    QHXYModelMapper_IsSignalConnected_Callback qhxymodelmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhxymodelmapper_metaobject_isbase = false;
    mutable bool qhxymodelmapper_metacast_isbase = false;
    mutable bool qhxymodelmapper_metacall_isbase = false;
    mutable bool qhxymodelmapper_event_isbase = false;
    mutable bool qhxymodelmapper_eventfilter_isbase = false;
    mutable bool qhxymodelmapper_timerevent_isbase = false;
    mutable bool qhxymodelmapper_childevent_isbase = false;
    mutable bool qhxymodelmapper_customevent_isbase = false;
    mutable bool qhxymodelmapper_connectnotify_isbase = false;
    mutable bool qhxymodelmapper_disconnectnotify_isbase = false;
    mutable bool qhxymodelmapper_first_isbase = false;
    mutable bool qhxymodelmapper_setfirst_isbase = false;
    mutable bool qhxymodelmapper_count_isbase = false;
    mutable bool qhxymodelmapper_setcount_isbase = false;
    mutable bool qhxymodelmapper_orientation_isbase = false;
    mutable bool qhxymodelmapper_setorientation_isbase = false;
    mutable bool qhxymodelmapper_xsection_isbase = false;
    mutable bool qhxymodelmapper_setxsection_isbase = false;
    mutable bool qhxymodelmapper_ysection_isbase = false;
    mutable bool qhxymodelmapper_setysection_isbase = false;
    mutable bool qhxymodelmapper_sender_isbase = false;
    mutable bool qhxymodelmapper_sendersignalindex_isbase = false;
    mutable bool qhxymodelmapper_receivers_isbase = false;
    mutable bool qhxymodelmapper_issignalconnected_isbase = false;

  public:
    VirtualQHXYModelMapper() : QHXYModelMapper() {};
    VirtualQHXYModelMapper(QObject* parent) : QHXYModelMapper(parent) {};

    // Callback setters
    inline void setQHXYModelMapper_MetaObject_Callback(QHXYModelMapper_MetaObject_Callback cb) { qhxymodelmapper_metaobject_callback = cb; }
    inline void setQHXYModelMapper_Metacast_Callback(QHXYModelMapper_Metacast_Callback cb) { qhxymodelmapper_metacast_callback = cb; }
    inline void setQHXYModelMapper_Metacall_Callback(QHXYModelMapper_Metacall_Callback cb) { qhxymodelmapper_metacall_callback = cb; }
    inline void setQHXYModelMapper_Event_Callback(QHXYModelMapper_Event_Callback cb) { qhxymodelmapper_event_callback = cb; }
    inline void setQHXYModelMapper_EventFilter_Callback(QHXYModelMapper_EventFilter_Callback cb) { qhxymodelmapper_eventfilter_callback = cb; }
    inline void setQHXYModelMapper_TimerEvent_Callback(QHXYModelMapper_TimerEvent_Callback cb) { qhxymodelmapper_timerevent_callback = cb; }
    inline void setQHXYModelMapper_ChildEvent_Callback(QHXYModelMapper_ChildEvent_Callback cb) { qhxymodelmapper_childevent_callback = cb; }
    inline void setQHXYModelMapper_CustomEvent_Callback(QHXYModelMapper_CustomEvent_Callback cb) { qhxymodelmapper_customevent_callback = cb; }
    inline void setQHXYModelMapper_ConnectNotify_Callback(QHXYModelMapper_ConnectNotify_Callback cb) { qhxymodelmapper_connectnotify_callback = cb; }
    inline void setQHXYModelMapper_DisconnectNotify_Callback(QHXYModelMapper_DisconnectNotify_Callback cb) { qhxymodelmapper_disconnectnotify_callback = cb; }
    inline void setQHXYModelMapper_First_Callback(QHXYModelMapper_First_Callback cb) { qhxymodelmapper_first_callback = cb; }
    inline void setQHXYModelMapper_SetFirst_Callback(QHXYModelMapper_SetFirst_Callback cb) { qhxymodelmapper_setfirst_callback = cb; }
    inline void setQHXYModelMapper_Count_Callback(QHXYModelMapper_Count_Callback cb) { qhxymodelmapper_count_callback = cb; }
    inline void setQHXYModelMapper_SetCount_Callback(QHXYModelMapper_SetCount_Callback cb) { qhxymodelmapper_setcount_callback = cb; }
    inline void setQHXYModelMapper_Orientation_Callback(QHXYModelMapper_Orientation_Callback cb) { qhxymodelmapper_orientation_callback = cb; }
    inline void setQHXYModelMapper_SetOrientation_Callback(QHXYModelMapper_SetOrientation_Callback cb) { qhxymodelmapper_setorientation_callback = cb; }
    inline void setQHXYModelMapper_XSection_Callback(QHXYModelMapper_XSection_Callback cb) { qhxymodelmapper_xsection_callback = cb; }
    inline void setQHXYModelMapper_SetXSection_Callback(QHXYModelMapper_SetXSection_Callback cb) { qhxymodelmapper_setxsection_callback = cb; }
    inline void setQHXYModelMapper_YSection_Callback(QHXYModelMapper_YSection_Callback cb) { qhxymodelmapper_ysection_callback = cb; }
    inline void setQHXYModelMapper_SetYSection_Callback(QHXYModelMapper_SetYSection_Callback cb) { qhxymodelmapper_setysection_callback = cb; }
    inline void setQHXYModelMapper_Sender_Callback(QHXYModelMapper_Sender_Callback cb) { qhxymodelmapper_sender_callback = cb; }
    inline void setQHXYModelMapper_SenderSignalIndex_Callback(QHXYModelMapper_SenderSignalIndex_Callback cb) { qhxymodelmapper_sendersignalindex_callback = cb; }
    inline void setQHXYModelMapper_Receivers_Callback(QHXYModelMapper_Receivers_Callback cb) { qhxymodelmapper_receivers_callback = cb; }
    inline void setQHXYModelMapper_IsSignalConnected_Callback(QHXYModelMapper_IsSignalConnected_Callback cb) { qhxymodelmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQHXYModelMapper_MetaObject_IsBase(bool value) const { qhxymodelmapper_metaobject_isbase = value; }
    inline void setQHXYModelMapper_Metacast_IsBase(bool value) const { qhxymodelmapper_metacast_isbase = value; }
    inline void setQHXYModelMapper_Metacall_IsBase(bool value) const { qhxymodelmapper_metacall_isbase = value; }
    inline void setQHXYModelMapper_Event_IsBase(bool value) const { qhxymodelmapper_event_isbase = value; }
    inline void setQHXYModelMapper_EventFilter_IsBase(bool value) const { qhxymodelmapper_eventfilter_isbase = value; }
    inline void setQHXYModelMapper_TimerEvent_IsBase(bool value) const { qhxymodelmapper_timerevent_isbase = value; }
    inline void setQHXYModelMapper_ChildEvent_IsBase(bool value) const { qhxymodelmapper_childevent_isbase = value; }
    inline void setQHXYModelMapper_CustomEvent_IsBase(bool value) const { qhxymodelmapper_customevent_isbase = value; }
    inline void setQHXYModelMapper_ConnectNotify_IsBase(bool value) const { qhxymodelmapper_connectnotify_isbase = value; }
    inline void setQHXYModelMapper_DisconnectNotify_IsBase(bool value) const { qhxymodelmapper_disconnectnotify_isbase = value; }
    inline void setQHXYModelMapper_First_IsBase(bool value) const { qhxymodelmapper_first_isbase = value; }
    inline void setQHXYModelMapper_SetFirst_IsBase(bool value) const { qhxymodelmapper_setfirst_isbase = value; }
    inline void setQHXYModelMapper_Count_IsBase(bool value) const { qhxymodelmapper_count_isbase = value; }
    inline void setQHXYModelMapper_SetCount_IsBase(bool value) const { qhxymodelmapper_setcount_isbase = value; }
    inline void setQHXYModelMapper_Orientation_IsBase(bool value) const { qhxymodelmapper_orientation_isbase = value; }
    inline void setQHXYModelMapper_SetOrientation_IsBase(bool value) const { qhxymodelmapper_setorientation_isbase = value; }
    inline void setQHXYModelMapper_XSection_IsBase(bool value) const { qhxymodelmapper_xsection_isbase = value; }
    inline void setQHXYModelMapper_SetXSection_IsBase(bool value) const { qhxymodelmapper_setxsection_isbase = value; }
    inline void setQHXYModelMapper_YSection_IsBase(bool value) const { qhxymodelmapper_ysection_isbase = value; }
    inline void setQHXYModelMapper_SetYSection_IsBase(bool value) const { qhxymodelmapper_setysection_isbase = value; }
    inline void setQHXYModelMapper_Sender_IsBase(bool value) const { qhxymodelmapper_sender_isbase = value; }
    inline void setQHXYModelMapper_SenderSignalIndex_IsBase(bool value) const { qhxymodelmapper_sendersignalindex_isbase = value; }
    inline void setQHXYModelMapper_Receivers_IsBase(bool value) const { qhxymodelmapper_receivers_isbase = value; }
    inline void setQHXYModelMapper_IsSignalConnected_IsBase(bool value) const { qhxymodelmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhxymodelmapper_metaobject_isbase) {
            qhxymodelmapper_metaobject_isbase = false;
            return QHXYModelMapper::metaObject();
        }
        auto metaobject_cb = qhxymodelmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QHXYModelMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhxymodelmapper_metacast_isbase) {
            qhxymodelmapper_metacast_isbase = false;
            return QHXYModelMapper::qt_metacast(param1);
        }
        auto metacast_cb = qhxymodelmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QHXYModelMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhxymodelmapper_metacall_isbase) {
            qhxymodelmapper_metacall_isbase = false;
            return QHXYModelMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qhxymodelmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhxymodelmapper_event_isbase) {
            qhxymodelmapper_event_isbase = false;
            return QHXYModelMapper::event(event);
        }
        auto event_cb = qhxymodelmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QHXYModelMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhxymodelmapper_eventfilter_isbase) {
            qhxymodelmapper_eventfilter_isbase = false;
            return QHXYModelMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qhxymodelmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHXYModelMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhxymodelmapper_timerevent_isbase) {
            qhxymodelmapper_timerevent_isbase = false;
            QHXYModelMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qhxymodelmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhxymodelmapper_childevent_isbase) {
            qhxymodelmapper_childevent_isbase = false;
            QHXYModelMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qhxymodelmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhxymodelmapper_customevent_isbase) {
            qhxymodelmapper_customevent_isbase = false;
            QHXYModelMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qhxymodelmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhxymodelmapper_connectnotify_isbase) {
            qhxymodelmapper_connectnotify_isbase = false;
            QHXYModelMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qhxymodelmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhxymodelmapper_disconnectnotify_isbase) {
            qhxymodelmapper_disconnectnotify_isbase = false;
            QHXYModelMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qhxymodelmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int first() const {
        if (qhxymodelmapper_first_isbase) {
            qhxymodelmapper_first_isbase = false;
            return QHXYModelMapper::first();
        }
        auto first_cb = qhxymodelmapper_first_callback;
        if (first_cb) {
            int callback_ret = first_cb();
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::first();
    }

    // Virtual method for C ABI access and custom callback
    void setFirst(int first) {
        if (qhxymodelmapper_setfirst_isbase) {
            qhxymodelmapper_setfirst_isbase = false;
            QHXYModelMapper::setFirst(first);
            return;
        }
        auto setfirst_cb = qhxymodelmapper_setfirst_callback;
        if (setfirst_cb) {
            int cbval1 = first;

            setfirst_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::setFirst(first);
    }

    // Virtual method for C ABI access and custom callback
    int count() const {
        if (qhxymodelmapper_count_isbase) {
            qhxymodelmapper_count_isbase = false;
            return QHXYModelMapper::count();
        }
        auto count_cb = qhxymodelmapper_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::count();
    }

    // Virtual method for C ABI access and custom callback
    void setCount(int count) {
        if (qhxymodelmapper_setcount_isbase) {
            qhxymodelmapper_setcount_isbase = false;
            QHXYModelMapper::setCount(count);
            return;
        }
        auto setcount_cb = qhxymodelmapper_setcount_callback;
        if (setcount_cb) {
            int cbval1 = count;

            setcount_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::setCount(count);
    }

    // Virtual method for C ABI access and custom callback
    Qt::Orientation orientation() const {
        if (qhxymodelmapper_orientation_isbase) {
            qhxymodelmapper_orientation_isbase = false;
            return QHXYModelMapper::orientation();
        }
        auto orientation_cb = qhxymodelmapper_orientation_callback;
        if (orientation_cb) {
            int callback_ret = orientation_cb();
            return static_cast<Qt::Orientation>(callback_ret);
        }
        return QHXYModelMapper::orientation();
    }

    // Virtual method for C ABI access and custom callback
    void setOrientation(Qt::Orientation orientation) {
        if (qhxymodelmapper_setorientation_isbase) {
            qhxymodelmapper_setorientation_isbase = false;
            QHXYModelMapper::setOrientation(orientation);
            return;
        }
        auto setorientation_cb = qhxymodelmapper_setorientation_callback;
        if (setorientation_cb) {
            int cbval1 = static_cast<int>(orientation);

            setorientation_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::setOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    int xSection() const {
        if (qhxymodelmapper_xsection_isbase) {
            qhxymodelmapper_xsection_isbase = false;
            return QHXYModelMapper::xSection();
        }
        auto xsection_cb = qhxymodelmapper_xsection_callback;
        if (xsection_cb) {
            int callback_ret = xsection_cb();
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::xSection();
    }

    // Virtual method for C ABI access and custom callback
    void setXSection(int xSection) {
        if (qhxymodelmapper_setxsection_isbase) {
            qhxymodelmapper_setxsection_isbase = false;
            QHXYModelMapper::setXSection(xSection);
            return;
        }
        auto setxsection_cb = qhxymodelmapper_setxsection_callback;
        if (setxsection_cb) {
            int cbval1 = xSection;

            setxsection_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::setXSection(xSection);
    }

    // Virtual method for C ABI access and custom callback
    int ySection() const {
        if (qhxymodelmapper_ysection_isbase) {
            qhxymodelmapper_ysection_isbase = false;
            return QHXYModelMapper::ySection();
        }
        auto ysection_cb = qhxymodelmapper_ysection_callback;
        if (ysection_cb) {
            int callback_ret = ysection_cb();
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::ySection();
    }

    // Virtual method for C ABI access and custom callback
    void setYSection(int ySection) {
        if (qhxymodelmapper_setysection_isbase) {
            qhxymodelmapper_setysection_isbase = false;
            QHXYModelMapper::setYSection(ySection);
            return;
        }
        auto setysection_cb = qhxymodelmapper_setysection_callback;
        if (setysection_cb) {
            int cbval1 = ySection;

            setysection_cb(this, cbval1);
            return;
        }
        QHXYModelMapper::setYSection(ySection);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhxymodelmapper_sender_isbase) {
            qhxymodelmapper_sender_isbase = false;
            return QHXYModelMapper::sender();
        }
        auto sender_cb = qhxymodelmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QHXYModelMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhxymodelmapper_sendersignalindex_isbase) {
            qhxymodelmapper_sendersignalindex_isbase = false;
            return QHXYModelMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qhxymodelmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhxymodelmapper_receivers_isbase) {
            qhxymodelmapper_receivers_isbase = false;
            return QHXYModelMapper::receivers(signal);
        }
        auto receivers_cb = qhxymodelmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QHXYModelMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhxymodelmapper_issignalconnected_isbase) {
            qhxymodelmapper_issignalconnected_isbase = false;
            return QHXYModelMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qhxymodelmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QHXYModelMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QHXYModelMapper_TimerEvent(QHXYModelMapper* self, QTimerEvent* event);
    friend void QHXYModelMapper_SuperTimerEvent(QHXYModelMapper* self, QTimerEvent* event);
    friend void QHXYModelMapper_ChildEvent(QHXYModelMapper* self, QChildEvent* event);
    friend void QHXYModelMapper_SuperChildEvent(QHXYModelMapper* self, QChildEvent* event);
    friend void QHXYModelMapper_CustomEvent(QHXYModelMapper* self, QEvent* event);
    friend void QHXYModelMapper_SuperCustomEvent(QHXYModelMapper* self, QEvent* event);
    friend void QHXYModelMapper_ConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
    friend void QHXYModelMapper_SuperConnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
    friend void QHXYModelMapper_DisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
    friend void QHXYModelMapper_SuperDisconnectNotify(QHXYModelMapper* self, const QMetaMethod* signal);
    friend int QHXYModelMapper_First(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SuperFirst(const QHXYModelMapper* self);
    friend void QHXYModelMapper_SetFirst(QHXYModelMapper* self, int first);
    friend void QHXYModelMapper_SuperSetFirst(QHXYModelMapper* self, int first);
    friend int QHXYModelMapper_Count(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SuperCount(const QHXYModelMapper* self);
    friend void QHXYModelMapper_SetCount(QHXYModelMapper* self, int count);
    friend void QHXYModelMapper_SuperSetCount(QHXYModelMapper* self, int count);
    friend int QHXYModelMapper_Orientation(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SuperOrientation(const QHXYModelMapper* self);
    friend void QHXYModelMapper_SetOrientation(QHXYModelMapper* self, int orientation);
    friend void QHXYModelMapper_SuperSetOrientation(QHXYModelMapper* self, int orientation);
    friend int QHXYModelMapper_XSection(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SuperXSection(const QHXYModelMapper* self);
    friend void QHXYModelMapper_SetXSection(QHXYModelMapper* self, int xSection);
    friend void QHXYModelMapper_SuperSetXSection(QHXYModelMapper* self, int xSection);
    friend int QHXYModelMapper_YSection(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SuperYSection(const QHXYModelMapper* self);
    friend void QHXYModelMapper_SetYSection(QHXYModelMapper* self, int ySection);
    friend void QHXYModelMapper_SuperSetYSection(QHXYModelMapper* self, int ySection);
    friend QObject* QHXYModelMapper_Sender(const QHXYModelMapper* self);
    friend QObject* QHXYModelMapper_SuperSender(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SenderSignalIndex(const QHXYModelMapper* self);
    friend int QHXYModelMapper_SuperSenderSignalIndex(const QHXYModelMapper* self);
    friend int QHXYModelMapper_Receivers(const QHXYModelMapper* self, const char* signal);
    friend int QHXYModelMapper_SuperReceivers(const QHXYModelMapper* self, const char* signal);
    friend bool QHXYModelMapper_IsSignalConnected(const QHXYModelMapper* self, const QMetaMethod* signal);
    friend bool QHXYModelMapper_SuperIsSignalConnected(const QHXYModelMapper* self, const QMetaMethod* signal);
};

#endif
