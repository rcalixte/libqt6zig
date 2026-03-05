#pragma once
#ifndef SRCC_LIBVIRTUALQDATAWIDGETMAPPER_H
#define SRCC_LIBVIRTUALQDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDataWidgetMapper so that we can call protected methods
class VirtualQDataWidgetMapper final : public QDataWidgetMapper {

  public:
    // Virtual class boolean flag
    bool isVirtualQDataWidgetMapper = true;

    // Virtual class public types (including callbacks)
    using QDataWidgetMapper_MetaObject_Callback = QMetaObject* (*)();
    using QDataWidgetMapper_Metacast_Callback = void* (*)(QDataWidgetMapper*, const char*);
    using QDataWidgetMapper_Metacall_Callback = int (*)(QDataWidgetMapper*, int, int, void**);
    using QDataWidgetMapper_SetCurrentIndex_Callback = void (*)(QDataWidgetMapper*, int);
    using QDataWidgetMapper_Event_Callback = bool (*)(QDataWidgetMapper*, QEvent*);
    using QDataWidgetMapper_EventFilter_Callback = bool (*)(QDataWidgetMapper*, QObject*, QEvent*);
    using QDataWidgetMapper_TimerEvent_Callback = void (*)(QDataWidgetMapper*, QTimerEvent*);
    using QDataWidgetMapper_ChildEvent_Callback = void (*)(QDataWidgetMapper*, QChildEvent*);
    using QDataWidgetMapper_CustomEvent_Callback = void (*)(QDataWidgetMapper*, QEvent*);
    using QDataWidgetMapper_ConnectNotify_Callback = void (*)(QDataWidgetMapper*, QMetaMethod*);
    using QDataWidgetMapper_DisconnectNotify_Callback = void (*)(QDataWidgetMapper*, QMetaMethod*);
    using QDataWidgetMapper_Sender_Callback = QObject* (*)();
    using QDataWidgetMapper_SenderSignalIndex_Callback = int (*)();
    using QDataWidgetMapper_Receivers_Callback = int (*)(const QDataWidgetMapper*, const char*);
    using QDataWidgetMapper_IsSignalConnected_Callback = bool (*)(const QDataWidgetMapper*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDataWidgetMapper_MetaObject_Callback qdatawidgetmapper_metaobject_callback = nullptr;
    QDataWidgetMapper_Metacast_Callback qdatawidgetmapper_metacast_callback = nullptr;
    QDataWidgetMapper_Metacall_Callback qdatawidgetmapper_metacall_callback = nullptr;
    QDataWidgetMapper_SetCurrentIndex_Callback qdatawidgetmapper_setcurrentindex_callback = nullptr;
    QDataWidgetMapper_Event_Callback qdatawidgetmapper_event_callback = nullptr;
    QDataWidgetMapper_EventFilter_Callback qdatawidgetmapper_eventfilter_callback = nullptr;
    QDataWidgetMapper_TimerEvent_Callback qdatawidgetmapper_timerevent_callback = nullptr;
    QDataWidgetMapper_ChildEvent_Callback qdatawidgetmapper_childevent_callback = nullptr;
    QDataWidgetMapper_CustomEvent_Callback qdatawidgetmapper_customevent_callback = nullptr;
    QDataWidgetMapper_ConnectNotify_Callback qdatawidgetmapper_connectnotify_callback = nullptr;
    QDataWidgetMapper_DisconnectNotify_Callback qdatawidgetmapper_disconnectnotify_callback = nullptr;
    QDataWidgetMapper_Sender_Callback qdatawidgetmapper_sender_callback = nullptr;
    QDataWidgetMapper_SenderSignalIndex_Callback qdatawidgetmapper_sendersignalindex_callback = nullptr;
    QDataWidgetMapper_Receivers_Callback qdatawidgetmapper_receivers_callback = nullptr;
    QDataWidgetMapper_IsSignalConnected_Callback qdatawidgetmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdatawidgetmapper_metaobject_isbase = false;
    mutable bool qdatawidgetmapper_metacast_isbase = false;
    mutable bool qdatawidgetmapper_metacall_isbase = false;
    mutable bool qdatawidgetmapper_setcurrentindex_isbase = false;
    mutable bool qdatawidgetmapper_event_isbase = false;
    mutable bool qdatawidgetmapper_eventfilter_isbase = false;
    mutable bool qdatawidgetmapper_timerevent_isbase = false;
    mutable bool qdatawidgetmapper_childevent_isbase = false;
    mutable bool qdatawidgetmapper_customevent_isbase = false;
    mutable bool qdatawidgetmapper_connectnotify_isbase = false;
    mutable bool qdatawidgetmapper_disconnectnotify_isbase = false;
    mutable bool qdatawidgetmapper_sender_isbase = false;
    mutable bool qdatawidgetmapper_sendersignalindex_isbase = false;
    mutable bool qdatawidgetmapper_receivers_isbase = false;
    mutable bool qdatawidgetmapper_issignalconnected_isbase = false;

  public:
    VirtualQDataWidgetMapper() : QDataWidgetMapper() {};
    VirtualQDataWidgetMapper(QObject* parent) : QDataWidgetMapper(parent) {};

    // Callback setters
    inline void setQDataWidgetMapper_MetaObject_Callback(QDataWidgetMapper_MetaObject_Callback cb) { qdatawidgetmapper_metaobject_callback = cb; }
    inline void setQDataWidgetMapper_Metacast_Callback(QDataWidgetMapper_Metacast_Callback cb) { qdatawidgetmapper_metacast_callback = cb; }
    inline void setQDataWidgetMapper_Metacall_Callback(QDataWidgetMapper_Metacall_Callback cb) { qdatawidgetmapper_metacall_callback = cb; }
    inline void setQDataWidgetMapper_SetCurrentIndex_Callback(QDataWidgetMapper_SetCurrentIndex_Callback cb) { qdatawidgetmapper_setcurrentindex_callback = cb; }
    inline void setQDataWidgetMapper_Event_Callback(QDataWidgetMapper_Event_Callback cb) { qdatawidgetmapper_event_callback = cb; }
    inline void setQDataWidgetMapper_EventFilter_Callback(QDataWidgetMapper_EventFilter_Callback cb) { qdatawidgetmapper_eventfilter_callback = cb; }
    inline void setQDataWidgetMapper_TimerEvent_Callback(QDataWidgetMapper_TimerEvent_Callback cb) { qdatawidgetmapper_timerevent_callback = cb; }
    inline void setQDataWidgetMapper_ChildEvent_Callback(QDataWidgetMapper_ChildEvent_Callback cb) { qdatawidgetmapper_childevent_callback = cb; }
    inline void setQDataWidgetMapper_CustomEvent_Callback(QDataWidgetMapper_CustomEvent_Callback cb) { qdatawidgetmapper_customevent_callback = cb; }
    inline void setQDataWidgetMapper_ConnectNotify_Callback(QDataWidgetMapper_ConnectNotify_Callback cb) { qdatawidgetmapper_connectnotify_callback = cb; }
    inline void setQDataWidgetMapper_DisconnectNotify_Callback(QDataWidgetMapper_DisconnectNotify_Callback cb) { qdatawidgetmapper_disconnectnotify_callback = cb; }
    inline void setQDataWidgetMapper_Sender_Callback(QDataWidgetMapper_Sender_Callback cb) { qdatawidgetmapper_sender_callback = cb; }
    inline void setQDataWidgetMapper_SenderSignalIndex_Callback(QDataWidgetMapper_SenderSignalIndex_Callback cb) { qdatawidgetmapper_sendersignalindex_callback = cb; }
    inline void setQDataWidgetMapper_Receivers_Callback(QDataWidgetMapper_Receivers_Callback cb) { qdatawidgetmapper_receivers_callback = cb; }
    inline void setQDataWidgetMapper_IsSignalConnected_Callback(QDataWidgetMapper_IsSignalConnected_Callback cb) { qdatawidgetmapper_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDataWidgetMapper_MetaObject_IsBase(bool value) const { qdatawidgetmapper_metaobject_isbase = value; }
    inline void setQDataWidgetMapper_Metacast_IsBase(bool value) const { qdatawidgetmapper_metacast_isbase = value; }
    inline void setQDataWidgetMapper_Metacall_IsBase(bool value) const { qdatawidgetmapper_metacall_isbase = value; }
    inline void setQDataWidgetMapper_SetCurrentIndex_IsBase(bool value) const { qdatawidgetmapper_setcurrentindex_isbase = value; }
    inline void setQDataWidgetMapper_Event_IsBase(bool value) const { qdatawidgetmapper_event_isbase = value; }
    inline void setQDataWidgetMapper_EventFilter_IsBase(bool value) const { qdatawidgetmapper_eventfilter_isbase = value; }
    inline void setQDataWidgetMapper_TimerEvent_IsBase(bool value) const { qdatawidgetmapper_timerevent_isbase = value; }
    inline void setQDataWidgetMapper_ChildEvent_IsBase(bool value) const { qdatawidgetmapper_childevent_isbase = value; }
    inline void setQDataWidgetMapper_CustomEvent_IsBase(bool value) const { qdatawidgetmapper_customevent_isbase = value; }
    inline void setQDataWidgetMapper_ConnectNotify_IsBase(bool value) const { qdatawidgetmapper_connectnotify_isbase = value; }
    inline void setQDataWidgetMapper_DisconnectNotify_IsBase(bool value) const { qdatawidgetmapper_disconnectnotify_isbase = value; }
    inline void setQDataWidgetMapper_Sender_IsBase(bool value) const { qdatawidgetmapper_sender_isbase = value; }
    inline void setQDataWidgetMapper_SenderSignalIndex_IsBase(bool value) const { qdatawidgetmapper_sendersignalindex_isbase = value; }
    inline void setQDataWidgetMapper_Receivers_IsBase(bool value) const { qdatawidgetmapper_receivers_isbase = value; }
    inline void setQDataWidgetMapper_IsSignalConnected_IsBase(bool value) const { qdatawidgetmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdatawidgetmapper_metaobject_isbase) {
            qdatawidgetmapper_metaobject_isbase = false;
            return QDataWidgetMapper::metaObject();
        }
        auto metaobject_cb = qdatawidgetmapper_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDataWidgetMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdatawidgetmapper_metacast_isbase) {
            qdatawidgetmapper_metacast_isbase = false;
            return QDataWidgetMapper::qt_metacast(param1);
        }
        auto metacast_cb = qdatawidgetmapper_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDataWidgetMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatawidgetmapper_metacall_isbase) {
            qdatawidgetmapper_metacall_isbase = false;
            return QDataWidgetMapper::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdatawidgetmapper_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDataWidgetMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(int index) override {
        if (qdatawidgetmapper_setcurrentindex_isbase) {
            qdatawidgetmapper_setcurrentindex_isbase = false;
            QDataWidgetMapper::setCurrentIndex(index);
            return;
        }
        auto setcurrentindex_cb = qdatawidgetmapper_setcurrentindex_callback;
        if (setcurrentindex_cb) {
            int cbval1 = index;

            setcurrentindex_cb(this, cbval1);
            return;
        }
        QDataWidgetMapper::setCurrentIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatawidgetmapper_event_isbase) {
            qdatawidgetmapper_event_isbase = false;
            return QDataWidgetMapper::event(event);
        }
        auto event_cb = qdatawidgetmapper_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDataWidgetMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatawidgetmapper_eventfilter_isbase) {
            qdatawidgetmapper_eventfilter_isbase = false;
            return QDataWidgetMapper::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdatawidgetmapper_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDataWidgetMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatawidgetmapper_timerevent_isbase) {
            qdatawidgetmapper_timerevent_isbase = false;
            QDataWidgetMapper::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdatawidgetmapper_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDataWidgetMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatawidgetmapper_childevent_isbase) {
            qdatawidgetmapper_childevent_isbase = false;
            QDataWidgetMapper::childEvent(event);
            return;
        }
        auto childevent_cb = qdatawidgetmapper_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDataWidgetMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatawidgetmapper_customevent_isbase) {
            qdatawidgetmapper_customevent_isbase = false;
            QDataWidgetMapper::customEvent(event);
            return;
        }
        auto customevent_cb = qdatawidgetmapper_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDataWidgetMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatawidgetmapper_connectnotify_isbase) {
            qdatawidgetmapper_connectnotify_isbase = false;
            QDataWidgetMapper::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdatawidgetmapper_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDataWidgetMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatawidgetmapper_disconnectnotify_isbase) {
            qdatawidgetmapper_disconnectnotify_isbase = false;
            QDataWidgetMapper::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdatawidgetmapper_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDataWidgetMapper::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdatawidgetmapper_sender_isbase) {
            qdatawidgetmapper_sender_isbase = false;
            return QDataWidgetMapper::sender();
        }
        auto sender_cb = qdatawidgetmapper_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDataWidgetMapper::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdatawidgetmapper_sendersignalindex_isbase) {
            qdatawidgetmapper_sendersignalindex_isbase = false;
            return QDataWidgetMapper::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdatawidgetmapper_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDataWidgetMapper::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdatawidgetmapper_receivers_isbase) {
            qdatawidgetmapper_receivers_isbase = false;
            return QDataWidgetMapper::receivers(signal);
        }
        auto receivers_cb = qdatawidgetmapper_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDataWidgetMapper::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdatawidgetmapper_issignalconnected_isbase) {
            qdatawidgetmapper_issignalconnected_isbase = false;
            return QDataWidgetMapper::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdatawidgetmapper_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDataWidgetMapper::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDataWidgetMapper_TimerEvent(QDataWidgetMapper* self, QTimerEvent* event);
    friend void QDataWidgetMapper_SuperTimerEvent(QDataWidgetMapper* self, QTimerEvent* event);
    friend void QDataWidgetMapper_ChildEvent(QDataWidgetMapper* self, QChildEvent* event);
    friend void QDataWidgetMapper_SuperChildEvent(QDataWidgetMapper* self, QChildEvent* event);
    friend void QDataWidgetMapper_CustomEvent(QDataWidgetMapper* self, QEvent* event);
    friend void QDataWidgetMapper_SuperCustomEvent(QDataWidgetMapper* self, QEvent* event);
    friend void QDataWidgetMapper_ConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
    friend void QDataWidgetMapper_SuperConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
    friend void QDataWidgetMapper_DisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
    friend void QDataWidgetMapper_SuperDisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
    friend QObject* QDataWidgetMapper_Sender(const QDataWidgetMapper* self);
    friend QObject* QDataWidgetMapper_SuperSender(const QDataWidgetMapper* self);
    friend int QDataWidgetMapper_SenderSignalIndex(const QDataWidgetMapper* self);
    friend int QDataWidgetMapper_SuperSenderSignalIndex(const QDataWidgetMapper* self);
    friend int QDataWidgetMapper_Receivers(const QDataWidgetMapper* self, const char* signal);
    friend int QDataWidgetMapper_SuperReceivers(const QDataWidgetMapper* self, const char* signal);
    friend bool QDataWidgetMapper_IsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal);
    friend bool QDataWidgetMapper_SuperIsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal);
};

#endif
