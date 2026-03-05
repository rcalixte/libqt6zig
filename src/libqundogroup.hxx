#pragma once
#ifndef SRCC_LIBVIRTUALQUNDOGROUP_H
#define SRCC_LIBVIRTUALQUNDOGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoGroup so that we can call protected methods
class VirtualQUndoGroup final : public QUndoGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQUndoGroup = true;

    // Virtual class public types (including callbacks)
    using QUndoGroup_MetaObject_Callback = QMetaObject* (*)();
    using QUndoGroup_Metacast_Callback = void* (*)(QUndoGroup*, const char*);
    using QUndoGroup_Metacall_Callback = int (*)(QUndoGroup*, int, int, void**);
    using QUndoGroup_Event_Callback = bool (*)(QUndoGroup*, QEvent*);
    using QUndoGroup_EventFilter_Callback = bool (*)(QUndoGroup*, QObject*, QEvent*);
    using QUndoGroup_TimerEvent_Callback = void (*)(QUndoGroup*, QTimerEvent*);
    using QUndoGroup_ChildEvent_Callback = void (*)(QUndoGroup*, QChildEvent*);
    using QUndoGroup_CustomEvent_Callback = void (*)(QUndoGroup*, QEvent*);
    using QUndoGroup_ConnectNotify_Callback = void (*)(QUndoGroup*, QMetaMethod*);
    using QUndoGroup_DisconnectNotify_Callback = void (*)(QUndoGroup*, QMetaMethod*);
    using QUndoGroup_Sender_Callback = QObject* (*)();
    using QUndoGroup_SenderSignalIndex_Callback = int (*)();
    using QUndoGroup_Receivers_Callback = int (*)(const QUndoGroup*, const char*);
    using QUndoGroup_IsSignalConnected_Callback = bool (*)(const QUndoGroup*, QMetaMethod*);

  protected:
    // Instance callback storage
    QUndoGroup_MetaObject_Callback qundogroup_metaobject_callback = nullptr;
    QUndoGroup_Metacast_Callback qundogroup_metacast_callback = nullptr;
    QUndoGroup_Metacall_Callback qundogroup_metacall_callback = nullptr;
    QUndoGroup_Event_Callback qundogroup_event_callback = nullptr;
    QUndoGroup_EventFilter_Callback qundogroup_eventfilter_callback = nullptr;
    QUndoGroup_TimerEvent_Callback qundogroup_timerevent_callback = nullptr;
    QUndoGroup_ChildEvent_Callback qundogroup_childevent_callback = nullptr;
    QUndoGroup_CustomEvent_Callback qundogroup_customevent_callback = nullptr;
    QUndoGroup_ConnectNotify_Callback qundogroup_connectnotify_callback = nullptr;
    QUndoGroup_DisconnectNotify_Callback qundogroup_disconnectnotify_callback = nullptr;
    QUndoGroup_Sender_Callback qundogroup_sender_callback = nullptr;
    QUndoGroup_SenderSignalIndex_Callback qundogroup_sendersignalindex_callback = nullptr;
    QUndoGroup_Receivers_Callback qundogroup_receivers_callback = nullptr;
    QUndoGroup_IsSignalConnected_Callback qundogroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qundogroup_metaobject_isbase = false;
    mutable bool qundogroup_metacast_isbase = false;
    mutable bool qundogroup_metacall_isbase = false;
    mutable bool qundogroup_event_isbase = false;
    mutable bool qundogroup_eventfilter_isbase = false;
    mutable bool qundogroup_timerevent_isbase = false;
    mutable bool qundogroup_childevent_isbase = false;
    mutable bool qundogroup_customevent_isbase = false;
    mutable bool qundogroup_connectnotify_isbase = false;
    mutable bool qundogroup_disconnectnotify_isbase = false;
    mutable bool qundogroup_sender_isbase = false;
    mutable bool qundogroup_sendersignalindex_isbase = false;
    mutable bool qundogroup_receivers_isbase = false;
    mutable bool qundogroup_issignalconnected_isbase = false;

  public:
    VirtualQUndoGroup() : QUndoGroup() {};
    VirtualQUndoGroup(QObject* parent) : QUndoGroup(parent) {};

    // Callback setters
    inline void setQUndoGroup_MetaObject_Callback(QUndoGroup_MetaObject_Callback cb) { qundogroup_metaobject_callback = cb; }
    inline void setQUndoGroup_Metacast_Callback(QUndoGroup_Metacast_Callback cb) { qundogroup_metacast_callback = cb; }
    inline void setQUndoGroup_Metacall_Callback(QUndoGroup_Metacall_Callback cb) { qundogroup_metacall_callback = cb; }
    inline void setQUndoGroup_Event_Callback(QUndoGroup_Event_Callback cb) { qundogroup_event_callback = cb; }
    inline void setQUndoGroup_EventFilter_Callback(QUndoGroup_EventFilter_Callback cb) { qundogroup_eventfilter_callback = cb; }
    inline void setQUndoGroup_TimerEvent_Callback(QUndoGroup_TimerEvent_Callback cb) { qundogroup_timerevent_callback = cb; }
    inline void setQUndoGroup_ChildEvent_Callback(QUndoGroup_ChildEvent_Callback cb) { qundogroup_childevent_callback = cb; }
    inline void setQUndoGroup_CustomEvent_Callback(QUndoGroup_CustomEvent_Callback cb) { qundogroup_customevent_callback = cb; }
    inline void setQUndoGroup_ConnectNotify_Callback(QUndoGroup_ConnectNotify_Callback cb) { qundogroup_connectnotify_callback = cb; }
    inline void setQUndoGroup_DisconnectNotify_Callback(QUndoGroup_DisconnectNotify_Callback cb) { qundogroup_disconnectnotify_callback = cb; }
    inline void setQUndoGroup_Sender_Callback(QUndoGroup_Sender_Callback cb) { qundogroup_sender_callback = cb; }
    inline void setQUndoGroup_SenderSignalIndex_Callback(QUndoGroup_SenderSignalIndex_Callback cb) { qundogroup_sendersignalindex_callback = cb; }
    inline void setQUndoGroup_Receivers_Callback(QUndoGroup_Receivers_Callback cb) { qundogroup_receivers_callback = cb; }
    inline void setQUndoGroup_IsSignalConnected_Callback(QUndoGroup_IsSignalConnected_Callback cb) { qundogroup_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQUndoGroup_MetaObject_IsBase(bool value) const { qundogroup_metaobject_isbase = value; }
    inline void setQUndoGroup_Metacast_IsBase(bool value) const { qundogroup_metacast_isbase = value; }
    inline void setQUndoGroup_Metacall_IsBase(bool value) const { qundogroup_metacall_isbase = value; }
    inline void setQUndoGroup_Event_IsBase(bool value) const { qundogroup_event_isbase = value; }
    inline void setQUndoGroup_EventFilter_IsBase(bool value) const { qundogroup_eventfilter_isbase = value; }
    inline void setQUndoGroup_TimerEvent_IsBase(bool value) const { qundogroup_timerevent_isbase = value; }
    inline void setQUndoGroup_ChildEvent_IsBase(bool value) const { qundogroup_childevent_isbase = value; }
    inline void setQUndoGroup_CustomEvent_IsBase(bool value) const { qundogroup_customevent_isbase = value; }
    inline void setQUndoGroup_ConnectNotify_IsBase(bool value) const { qundogroup_connectnotify_isbase = value; }
    inline void setQUndoGroup_DisconnectNotify_IsBase(bool value) const { qundogroup_disconnectnotify_isbase = value; }
    inline void setQUndoGroup_Sender_IsBase(bool value) const { qundogroup_sender_isbase = value; }
    inline void setQUndoGroup_SenderSignalIndex_IsBase(bool value) const { qundogroup_sendersignalindex_isbase = value; }
    inline void setQUndoGroup_Receivers_IsBase(bool value) const { qundogroup_receivers_isbase = value; }
    inline void setQUndoGroup_IsSignalConnected_IsBase(bool value) const { qundogroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qundogroup_metaobject_isbase) {
            qundogroup_metaobject_isbase = false;
            return QUndoGroup::metaObject();
        }
        auto metaobject_cb = qundogroup_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QUndoGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qundogroup_metacast_isbase) {
            qundogroup_metacast_isbase = false;
            return QUndoGroup::qt_metacast(param1);
        }
        auto metacast_cb = qundogroup_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundogroup_metacall_isbase) {
            qundogroup_metacall_isbase = false;
            return QUndoGroup::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qundogroup_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUndoGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qundogroup_event_isbase) {
            qundogroup_event_isbase = false;
            return QUndoGroup::event(event);
        }
        auto event_cb = qundogroup_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qundogroup_eventfilter_isbase) {
            qundogroup_eventfilter_isbase = false;
            return QUndoGroup::eventFilter(watched, event);
        }
        auto eventfilter_cb = qundogroup_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUndoGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qundogroup_timerevent_isbase) {
            qundogroup_timerevent_isbase = false;
            QUndoGroup::timerEvent(event);
            return;
        }
        auto timerevent_cb = qundogroup_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QUndoGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundogroup_childevent_isbase) {
            qundogroup_childevent_isbase = false;
            QUndoGroup::childEvent(event);
            return;
        }
        auto childevent_cb = qundogroup_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QUndoGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundogroup_customevent_isbase) {
            qundogroup_customevent_isbase = false;
            QUndoGroup::customEvent(event);
            return;
        }
        auto customevent_cb = qundogroup_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QUndoGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundogroup_connectnotify_isbase) {
            qundogroup_connectnotify_isbase = false;
            QUndoGroup::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qundogroup_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QUndoGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundogroup_disconnectnotify_isbase) {
            qundogroup_disconnectnotify_isbase = false;
            QUndoGroup::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qundogroup_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QUndoGroup::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qundogroup_sender_isbase) {
            qundogroup_sender_isbase = false;
            return QUndoGroup::sender();
        }
        auto sender_cb = qundogroup_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QUndoGroup::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qundogroup_sendersignalindex_isbase) {
            qundogroup_sendersignalindex_isbase = false;
            return QUndoGroup::senderSignalIndex();
        }
        auto sendersignalindex_cb = qundogroup_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoGroup::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qundogroup_receivers_isbase) {
            qundogroup_receivers_isbase = false;
            return QUndoGroup::receivers(signal);
        }
        auto receivers_cb = qundogroup_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoGroup::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qundogroup_issignalconnected_isbase) {
            qundogroup_issignalconnected_isbase = false;
            return QUndoGroup::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qundogroup_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoGroup::isSignalConnected(signal);
    }

    // Friend functions
    friend void QUndoGroup_TimerEvent(QUndoGroup* self, QTimerEvent* event);
    friend void QUndoGroup_SuperTimerEvent(QUndoGroup* self, QTimerEvent* event);
    friend void QUndoGroup_ChildEvent(QUndoGroup* self, QChildEvent* event);
    friend void QUndoGroup_SuperChildEvent(QUndoGroup* self, QChildEvent* event);
    friend void QUndoGroup_CustomEvent(QUndoGroup* self, QEvent* event);
    friend void QUndoGroup_SuperCustomEvent(QUndoGroup* self, QEvent* event);
    friend void QUndoGroup_ConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_SuperConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_DisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_SuperDisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend QObject* QUndoGroup_Sender(const QUndoGroup* self);
    friend QObject* QUndoGroup_SuperSender(const QUndoGroup* self);
    friend int QUndoGroup_SenderSignalIndex(const QUndoGroup* self);
    friend int QUndoGroup_SuperSenderSignalIndex(const QUndoGroup* self);
    friend int QUndoGroup_Receivers(const QUndoGroup* self, const char* signal);
    friend int QUndoGroup_SuperReceivers(const QUndoGroup* self, const char* signal);
    friend bool QUndoGroup_IsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal);
    friend bool QUndoGroup_SuperIsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal);
};

#endif
