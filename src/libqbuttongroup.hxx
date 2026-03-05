#pragma once
#ifndef SRCC_LIBVIRTUALQBUTTONGROUP_H
#define SRCC_LIBVIRTUALQBUTTONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QButtonGroup so that we can call protected methods
class VirtualQButtonGroup final : public QButtonGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQButtonGroup = true;

    // Virtual class public types (including callbacks)
    using QButtonGroup_MetaObject_Callback = QMetaObject* (*)();
    using QButtonGroup_Metacast_Callback = void* (*)(QButtonGroup*, const char*);
    using QButtonGroup_Metacall_Callback = int (*)(QButtonGroup*, int, int, void**);
    using QButtonGroup_Event_Callback = bool (*)(QButtonGroup*, QEvent*);
    using QButtonGroup_EventFilter_Callback = bool (*)(QButtonGroup*, QObject*, QEvent*);
    using QButtonGroup_TimerEvent_Callback = void (*)(QButtonGroup*, QTimerEvent*);
    using QButtonGroup_ChildEvent_Callback = void (*)(QButtonGroup*, QChildEvent*);
    using QButtonGroup_CustomEvent_Callback = void (*)(QButtonGroup*, QEvent*);
    using QButtonGroup_ConnectNotify_Callback = void (*)(QButtonGroup*, QMetaMethod*);
    using QButtonGroup_DisconnectNotify_Callback = void (*)(QButtonGroup*, QMetaMethod*);
    using QButtonGroup_Sender_Callback = QObject* (*)();
    using QButtonGroup_SenderSignalIndex_Callback = int (*)();
    using QButtonGroup_Receivers_Callback = int (*)(const QButtonGroup*, const char*);
    using QButtonGroup_IsSignalConnected_Callback = bool (*)(const QButtonGroup*, QMetaMethod*);

  protected:
    // Instance callback storage
    QButtonGroup_MetaObject_Callback qbuttongroup_metaobject_callback = nullptr;
    QButtonGroup_Metacast_Callback qbuttongroup_metacast_callback = nullptr;
    QButtonGroup_Metacall_Callback qbuttongroup_metacall_callback = nullptr;
    QButtonGroup_Event_Callback qbuttongroup_event_callback = nullptr;
    QButtonGroup_EventFilter_Callback qbuttongroup_eventfilter_callback = nullptr;
    QButtonGroup_TimerEvent_Callback qbuttongroup_timerevent_callback = nullptr;
    QButtonGroup_ChildEvent_Callback qbuttongroup_childevent_callback = nullptr;
    QButtonGroup_CustomEvent_Callback qbuttongroup_customevent_callback = nullptr;
    QButtonGroup_ConnectNotify_Callback qbuttongroup_connectnotify_callback = nullptr;
    QButtonGroup_DisconnectNotify_Callback qbuttongroup_disconnectnotify_callback = nullptr;
    QButtonGroup_Sender_Callback qbuttongroup_sender_callback = nullptr;
    QButtonGroup_SenderSignalIndex_Callback qbuttongroup_sendersignalindex_callback = nullptr;
    QButtonGroup_Receivers_Callback qbuttongroup_receivers_callback = nullptr;
    QButtonGroup_IsSignalConnected_Callback qbuttongroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbuttongroup_metaobject_isbase = false;
    mutable bool qbuttongroup_metacast_isbase = false;
    mutable bool qbuttongroup_metacall_isbase = false;
    mutable bool qbuttongroup_event_isbase = false;
    mutable bool qbuttongroup_eventfilter_isbase = false;
    mutable bool qbuttongroup_timerevent_isbase = false;
    mutable bool qbuttongroup_childevent_isbase = false;
    mutable bool qbuttongroup_customevent_isbase = false;
    mutable bool qbuttongroup_connectnotify_isbase = false;
    mutable bool qbuttongroup_disconnectnotify_isbase = false;
    mutable bool qbuttongroup_sender_isbase = false;
    mutable bool qbuttongroup_sendersignalindex_isbase = false;
    mutable bool qbuttongroup_receivers_isbase = false;
    mutable bool qbuttongroup_issignalconnected_isbase = false;

  public:
    VirtualQButtonGroup() : QButtonGroup() {};
    VirtualQButtonGroup(QObject* parent) : QButtonGroup(parent) {};

    // Callback setters
    inline void setQButtonGroup_MetaObject_Callback(QButtonGroup_MetaObject_Callback cb) { qbuttongroup_metaobject_callback = cb; }
    inline void setQButtonGroup_Metacast_Callback(QButtonGroup_Metacast_Callback cb) { qbuttongroup_metacast_callback = cb; }
    inline void setQButtonGroup_Metacall_Callback(QButtonGroup_Metacall_Callback cb) { qbuttongroup_metacall_callback = cb; }
    inline void setQButtonGroup_Event_Callback(QButtonGroup_Event_Callback cb) { qbuttongroup_event_callback = cb; }
    inline void setQButtonGroup_EventFilter_Callback(QButtonGroup_EventFilter_Callback cb) { qbuttongroup_eventfilter_callback = cb; }
    inline void setQButtonGroup_TimerEvent_Callback(QButtonGroup_TimerEvent_Callback cb) { qbuttongroup_timerevent_callback = cb; }
    inline void setQButtonGroup_ChildEvent_Callback(QButtonGroup_ChildEvent_Callback cb) { qbuttongroup_childevent_callback = cb; }
    inline void setQButtonGroup_CustomEvent_Callback(QButtonGroup_CustomEvent_Callback cb) { qbuttongroup_customevent_callback = cb; }
    inline void setQButtonGroup_ConnectNotify_Callback(QButtonGroup_ConnectNotify_Callback cb) { qbuttongroup_connectnotify_callback = cb; }
    inline void setQButtonGroup_DisconnectNotify_Callback(QButtonGroup_DisconnectNotify_Callback cb) { qbuttongroup_disconnectnotify_callback = cb; }
    inline void setQButtonGroup_Sender_Callback(QButtonGroup_Sender_Callback cb) { qbuttongroup_sender_callback = cb; }
    inline void setQButtonGroup_SenderSignalIndex_Callback(QButtonGroup_SenderSignalIndex_Callback cb) { qbuttongroup_sendersignalindex_callback = cb; }
    inline void setQButtonGroup_Receivers_Callback(QButtonGroup_Receivers_Callback cb) { qbuttongroup_receivers_callback = cb; }
    inline void setQButtonGroup_IsSignalConnected_Callback(QButtonGroup_IsSignalConnected_Callback cb) { qbuttongroup_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQButtonGroup_MetaObject_IsBase(bool value) const { qbuttongroup_metaobject_isbase = value; }
    inline void setQButtonGroup_Metacast_IsBase(bool value) const { qbuttongroup_metacast_isbase = value; }
    inline void setQButtonGroup_Metacall_IsBase(bool value) const { qbuttongroup_metacall_isbase = value; }
    inline void setQButtonGroup_Event_IsBase(bool value) const { qbuttongroup_event_isbase = value; }
    inline void setQButtonGroup_EventFilter_IsBase(bool value) const { qbuttongroup_eventfilter_isbase = value; }
    inline void setQButtonGroup_TimerEvent_IsBase(bool value) const { qbuttongroup_timerevent_isbase = value; }
    inline void setQButtonGroup_ChildEvent_IsBase(bool value) const { qbuttongroup_childevent_isbase = value; }
    inline void setQButtonGroup_CustomEvent_IsBase(bool value) const { qbuttongroup_customevent_isbase = value; }
    inline void setQButtonGroup_ConnectNotify_IsBase(bool value) const { qbuttongroup_connectnotify_isbase = value; }
    inline void setQButtonGroup_DisconnectNotify_IsBase(bool value) const { qbuttongroup_disconnectnotify_isbase = value; }
    inline void setQButtonGroup_Sender_IsBase(bool value) const { qbuttongroup_sender_isbase = value; }
    inline void setQButtonGroup_SenderSignalIndex_IsBase(bool value) const { qbuttongroup_sendersignalindex_isbase = value; }
    inline void setQButtonGroup_Receivers_IsBase(bool value) const { qbuttongroup_receivers_isbase = value; }
    inline void setQButtonGroup_IsSignalConnected_IsBase(bool value) const { qbuttongroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbuttongroup_metaobject_isbase) {
            qbuttongroup_metaobject_isbase = false;
            return QButtonGroup::metaObject();
        }
        auto metaobject_cb = qbuttongroup_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QButtonGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbuttongroup_metacast_isbase) {
            qbuttongroup_metacast_isbase = false;
            return QButtonGroup::qt_metacast(param1);
        }
        auto metacast_cb = qbuttongroup_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QButtonGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbuttongroup_metacall_isbase) {
            qbuttongroup_metacall_isbase = false;
            return QButtonGroup::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbuttongroup_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QButtonGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbuttongroup_event_isbase) {
            qbuttongroup_event_isbase = false;
            return QButtonGroup::event(event);
        }
        auto event_cb = qbuttongroup_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QButtonGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbuttongroup_eventfilter_isbase) {
            qbuttongroup_eventfilter_isbase = false;
            return QButtonGroup::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbuttongroup_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QButtonGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbuttongroup_timerevent_isbase) {
            qbuttongroup_timerevent_isbase = false;
            QButtonGroup::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbuttongroup_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QButtonGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbuttongroup_childevent_isbase) {
            qbuttongroup_childevent_isbase = false;
            QButtonGroup::childEvent(event);
            return;
        }
        auto childevent_cb = qbuttongroup_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QButtonGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbuttongroup_customevent_isbase) {
            qbuttongroup_customevent_isbase = false;
            QButtonGroup::customEvent(event);
            return;
        }
        auto customevent_cb = qbuttongroup_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QButtonGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbuttongroup_connectnotify_isbase) {
            qbuttongroup_connectnotify_isbase = false;
            QButtonGroup::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbuttongroup_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QButtonGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbuttongroup_disconnectnotify_isbase) {
            qbuttongroup_disconnectnotify_isbase = false;
            QButtonGroup::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbuttongroup_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QButtonGroup::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbuttongroup_sender_isbase) {
            qbuttongroup_sender_isbase = false;
            return QButtonGroup::sender();
        }
        auto sender_cb = qbuttongroup_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QButtonGroup::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbuttongroup_sendersignalindex_isbase) {
            qbuttongroup_sendersignalindex_isbase = false;
            return QButtonGroup::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbuttongroup_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QButtonGroup::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbuttongroup_receivers_isbase) {
            qbuttongroup_receivers_isbase = false;
            return QButtonGroup::receivers(signal);
        }
        auto receivers_cb = qbuttongroup_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QButtonGroup::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbuttongroup_issignalconnected_isbase) {
            qbuttongroup_issignalconnected_isbase = false;
            return QButtonGroup::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbuttongroup_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QButtonGroup::isSignalConnected(signal);
    }

    // Friend functions
    friend void QButtonGroup_TimerEvent(QButtonGroup* self, QTimerEvent* event);
    friend void QButtonGroup_SuperTimerEvent(QButtonGroup* self, QTimerEvent* event);
    friend void QButtonGroup_ChildEvent(QButtonGroup* self, QChildEvent* event);
    friend void QButtonGroup_SuperChildEvent(QButtonGroup* self, QChildEvent* event);
    friend void QButtonGroup_CustomEvent(QButtonGroup* self, QEvent* event);
    friend void QButtonGroup_SuperCustomEvent(QButtonGroup* self, QEvent* event);
    friend void QButtonGroup_ConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_SuperConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_DisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_SuperDisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend QObject* QButtonGroup_Sender(const QButtonGroup* self);
    friend QObject* QButtonGroup_SuperSender(const QButtonGroup* self);
    friend int QButtonGroup_SenderSignalIndex(const QButtonGroup* self);
    friend int QButtonGroup_SuperSenderSignalIndex(const QButtonGroup* self);
    friend int QButtonGroup_Receivers(const QButtonGroup* self, const char* signal);
    friend int QButtonGroup_SuperReceivers(const QButtonGroup* self, const char* signal);
    friend bool QButtonGroup_IsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal);
    friend bool QButtonGroup_SuperIsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal);
};

#endif
