#pragma once
#ifndef QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_HXX
#define QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickAttachedPropertyPropagator so that we can call protected methods
class VirtualQQuickAttachedPropertyPropagator final : public QQuickAttachedPropertyPropagator {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickAttachedPropertyPropagator = true;

    // Virtual class public types (including callbacks)
    using QQuickAttachedPropertyPropagator_MetaObject_Callback = QMetaObject* (*)();
    using QQuickAttachedPropertyPropagator_Metacast_Callback = void* (*)(QQuickAttachedPropertyPropagator*, const char*);
    using QQuickAttachedPropertyPropagator_Metacall_Callback = int (*)(QQuickAttachedPropertyPropagator*, int, int, void**);
    using QQuickAttachedPropertyPropagator_AttachedParentChange_Callback = void (*)(QQuickAttachedPropertyPropagator*, QQuickAttachedPropertyPropagator*, QQuickAttachedPropertyPropagator*);
    using QQuickAttachedPropertyPropagator_Event_Callback = bool (*)(QQuickAttachedPropertyPropagator*, QEvent*);
    using QQuickAttachedPropertyPropagator_EventFilter_Callback = bool (*)(QQuickAttachedPropertyPropagator*, QObject*, QEvent*);
    using QQuickAttachedPropertyPropagator_TimerEvent_Callback = void (*)(QQuickAttachedPropertyPropagator*, QTimerEvent*);
    using QQuickAttachedPropertyPropagator_ChildEvent_Callback = void (*)(QQuickAttachedPropertyPropagator*, QChildEvent*);
    using QQuickAttachedPropertyPropagator_CustomEvent_Callback = void (*)(QQuickAttachedPropertyPropagator*, QEvent*);
    using QQuickAttachedPropertyPropagator_ConnectNotify_Callback = void (*)(QQuickAttachedPropertyPropagator*, QMetaMethod*);
    using QQuickAttachedPropertyPropagator_DisconnectNotify_Callback = void (*)(QQuickAttachedPropertyPropagator*, QMetaMethod*);
    using QQuickAttachedPropertyPropagator_Initialize_Callback = void (*)();
    using QQuickAttachedPropertyPropagator_Sender_Callback = QObject* (*)();
    using QQuickAttachedPropertyPropagator_SenderSignalIndex_Callback = int (*)();
    using QQuickAttachedPropertyPropagator_Receivers_Callback = int (*)(const QQuickAttachedPropertyPropagator*, const char*);
    using QQuickAttachedPropertyPropagator_IsSignalConnected_Callback = bool (*)(const QQuickAttachedPropertyPropagator*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuickAttachedPropertyPropagator_MetaObject_Callback qquickattachedpropertypropagator_metaobject_callback = nullptr;
    QQuickAttachedPropertyPropagator_Metacast_Callback qquickattachedpropertypropagator_metacast_callback = nullptr;
    QQuickAttachedPropertyPropagator_Metacall_Callback qquickattachedpropertypropagator_metacall_callback = nullptr;
    QQuickAttachedPropertyPropagator_AttachedParentChange_Callback qquickattachedpropertypropagator_attachedparentchange_callback = nullptr;
    QQuickAttachedPropertyPropagator_Event_Callback qquickattachedpropertypropagator_event_callback = nullptr;
    QQuickAttachedPropertyPropagator_EventFilter_Callback qquickattachedpropertypropagator_eventfilter_callback = nullptr;
    QQuickAttachedPropertyPropagator_TimerEvent_Callback qquickattachedpropertypropagator_timerevent_callback = nullptr;
    QQuickAttachedPropertyPropagator_ChildEvent_Callback qquickattachedpropertypropagator_childevent_callback = nullptr;
    QQuickAttachedPropertyPropagator_CustomEvent_Callback qquickattachedpropertypropagator_customevent_callback = nullptr;
    QQuickAttachedPropertyPropagator_ConnectNotify_Callback qquickattachedpropertypropagator_connectnotify_callback = nullptr;
    QQuickAttachedPropertyPropagator_DisconnectNotify_Callback qquickattachedpropertypropagator_disconnectnotify_callback = nullptr;
    QQuickAttachedPropertyPropagator_Initialize_Callback qquickattachedpropertypropagator_initialize_callback = nullptr;
    QQuickAttachedPropertyPropagator_Sender_Callback qquickattachedpropertypropagator_sender_callback = nullptr;
    QQuickAttachedPropertyPropagator_SenderSignalIndex_Callback qquickattachedpropertypropagator_sendersignalindex_callback = nullptr;
    QQuickAttachedPropertyPropagator_Receivers_Callback qquickattachedpropertypropagator_receivers_callback = nullptr;
    QQuickAttachedPropertyPropagator_IsSignalConnected_Callback qquickattachedpropertypropagator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickattachedpropertypropagator_metaobject_isbase = false;
    mutable bool qquickattachedpropertypropagator_metacast_isbase = false;
    mutable bool qquickattachedpropertypropagator_metacall_isbase = false;
    mutable bool qquickattachedpropertypropagator_attachedparentchange_isbase = false;
    mutable bool qquickattachedpropertypropagator_event_isbase = false;
    mutable bool qquickattachedpropertypropagator_eventfilter_isbase = false;
    mutable bool qquickattachedpropertypropagator_timerevent_isbase = false;
    mutable bool qquickattachedpropertypropagator_childevent_isbase = false;
    mutable bool qquickattachedpropertypropagator_customevent_isbase = false;
    mutable bool qquickattachedpropertypropagator_connectnotify_isbase = false;
    mutable bool qquickattachedpropertypropagator_disconnectnotify_isbase = false;
    mutable bool qquickattachedpropertypropagator_initialize_isbase = false;
    mutable bool qquickattachedpropertypropagator_sender_isbase = false;
    mutable bool qquickattachedpropertypropagator_sendersignalindex_isbase = false;
    mutable bool qquickattachedpropertypropagator_receivers_isbase = false;
    mutable bool qquickattachedpropertypropagator_issignalconnected_isbase = false;

  public:
    VirtualQQuickAttachedPropertyPropagator() : QQuickAttachedPropertyPropagator() {};
    VirtualQQuickAttachedPropertyPropagator(QObject* parent) : QQuickAttachedPropertyPropagator(parent) {};

    // Callback setters
    inline void setQQuickAttachedPropertyPropagator_MetaObject_Callback(QQuickAttachedPropertyPropagator_MetaObject_Callback cb) { qquickattachedpropertypropagator_metaobject_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_Metacast_Callback(QQuickAttachedPropertyPropagator_Metacast_Callback cb) { qquickattachedpropertypropagator_metacast_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_Metacall_Callback(QQuickAttachedPropertyPropagator_Metacall_Callback cb) { qquickattachedpropertypropagator_metacall_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_AttachedParentChange_Callback(QQuickAttachedPropertyPropagator_AttachedParentChange_Callback cb) { qquickattachedpropertypropagator_attachedparentchange_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_Event_Callback(QQuickAttachedPropertyPropagator_Event_Callback cb) { qquickattachedpropertypropagator_event_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_EventFilter_Callback(QQuickAttachedPropertyPropagator_EventFilter_Callback cb) { qquickattachedpropertypropagator_eventfilter_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_TimerEvent_Callback(QQuickAttachedPropertyPropagator_TimerEvent_Callback cb) { qquickattachedpropertypropagator_timerevent_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_ChildEvent_Callback(QQuickAttachedPropertyPropagator_ChildEvent_Callback cb) { qquickattachedpropertypropagator_childevent_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_CustomEvent_Callback(QQuickAttachedPropertyPropagator_CustomEvent_Callback cb) { qquickattachedpropertypropagator_customevent_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_ConnectNotify_Callback(QQuickAttachedPropertyPropagator_ConnectNotify_Callback cb) { qquickattachedpropertypropagator_connectnotify_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_DisconnectNotify_Callback(QQuickAttachedPropertyPropagator_DisconnectNotify_Callback cb) { qquickattachedpropertypropagator_disconnectnotify_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_Initialize_Callback(QQuickAttachedPropertyPropagator_Initialize_Callback cb) { qquickattachedpropertypropagator_initialize_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_Sender_Callback(QQuickAttachedPropertyPropagator_Sender_Callback cb) { qquickattachedpropertypropagator_sender_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_SenderSignalIndex_Callback(QQuickAttachedPropertyPropagator_SenderSignalIndex_Callback cb) { qquickattachedpropertypropagator_sendersignalindex_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_Receivers_Callback(QQuickAttachedPropertyPropagator_Receivers_Callback cb) { qquickattachedpropertypropagator_receivers_callback = cb; }
    inline void setQQuickAttachedPropertyPropagator_IsSignalConnected_Callback(QQuickAttachedPropertyPropagator_IsSignalConnected_Callback cb) { qquickattachedpropertypropagator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickAttachedPropertyPropagator_MetaObject_IsBase(bool value) const { qquickattachedpropertypropagator_metaobject_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_Metacast_IsBase(bool value) const { qquickattachedpropertypropagator_metacast_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_Metacall_IsBase(bool value) const { qquickattachedpropertypropagator_metacall_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_AttachedParentChange_IsBase(bool value) const { qquickattachedpropertypropagator_attachedparentchange_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_Event_IsBase(bool value) const { qquickattachedpropertypropagator_event_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_EventFilter_IsBase(bool value) const { qquickattachedpropertypropagator_eventfilter_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_TimerEvent_IsBase(bool value) const { qquickattachedpropertypropagator_timerevent_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_ChildEvent_IsBase(bool value) const { qquickattachedpropertypropagator_childevent_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_CustomEvent_IsBase(bool value) const { qquickattachedpropertypropagator_customevent_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_ConnectNotify_IsBase(bool value) const { qquickattachedpropertypropagator_connectnotify_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_DisconnectNotify_IsBase(bool value) const { qquickattachedpropertypropagator_disconnectnotify_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_Initialize_IsBase(bool value) const { qquickattachedpropertypropagator_initialize_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_Sender_IsBase(bool value) const { qquickattachedpropertypropagator_sender_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_SenderSignalIndex_IsBase(bool value) const { qquickattachedpropertypropagator_sendersignalindex_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_Receivers_IsBase(bool value) const { qquickattachedpropertypropagator_receivers_isbase = value; }
    inline void setQQuickAttachedPropertyPropagator_IsSignalConnected_IsBase(bool value) const { qquickattachedpropertypropagator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickattachedpropertypropagator_metaobject_isbase) {
            qquickattachedpropertypropagator_metaobject_isbase = false;
            return QQuickAttachedPropertyPropagator::metaObject();
        }
        auto metaobject_cb = qquickattachedpropertypropagator_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickattachedpropertypropagator_metacast_isbase) {
            qquickattachedpropertypropagator_metacast_isbase = false;
            return QQuickAttachedPropertyPropagator::qt_metacast(param1);
        }
        auto metacast_cb = qquickattachedpropertypropagator_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickattachedpropertypropagator_metacall_isbase) {
            qquickattachedpropertypropagator_metacall_isbase = false;
            return QQuickAttachedPropertyPropagator::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickattachedpropertypropagator_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickAttachedPropertyPropagator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void attachedParentChange(QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent) override {
        if (qquickattachedpropertypropagator_attachedparentchange_isbase) {
            qquickattachedpropertypropagator_attachedparentchange_isbase = false;
            QQuickAttachedPropertyPropagator::attachedParentChange(newParent, oldParent);
            return;
        }
        auto attachedparentchange_cb = qquickattachedpropertypropagator_attachedparentchange_callback;
        if (attachedparentchange_cb) {
            QQuickAttachedPropertyPropagator* cbval1 = newParent;
            QQuickAttachedPropertyPropagator* cbval2 = oldParent;
            attachedparentchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuickAttachedPropertyPropagator::attachedParentChange(newParent, oldParent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickattachedpropertypropagator_event_isbase) {
            qquickattachedpropertypropagator_event_isbase = false;
            return QQuickAttachedPropertyPropagator::event(event);
        }
        auto event_cb = qquickattachedpropertypropagator_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickattachedpropertypropagator_eventfilter_isbase) {
            qquickattachedpropertypropagator_eventfilter_isbase = false;
            return QQuickAttachedPropertyPropagator::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickattachedpropertypropagator_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickattachedpropertypropagator_timerevent_isbase) {
            qquickattachedpropertypropagator_timerevent_isbase = false;
            QQuickAttachedPropertyPropagator::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickattachedpropertypropagator_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickattachedpropertypropagator_childevent_isbase) {
            qquickattachedpropertypropagator_childevent_isbase = false;
            QQuickAttachedPropertyPropagator::childEvent(event);
            return;
        }
        auto childevent_cb = qquickattachedpropertypropagator_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickattachedpropertypropagator_customevent_isbase) {
            qquickattachedpropertypropagator_customevent_isbase = false;
            QQuickAttachedPropertyPropagator::customEvent(event);
            return;
        }
        auto customevent_cb = qquickattachedpropertypropagator_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickattachedpropertypropagator_connectnotify_isbase) {
            qquickattachedpropertypropagator_connectnotify_isbase = false;
            QQuickAttachedPropertyPropagator::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickattachedpropertypropagator_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickattachedpropertypropagator_disconnectnotify_isbase) {
            qquickattachedpropertypropagator_disconnectnotify_isbase = false;
            QQuickAttachedPropertyPropagator::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickattachedpropertypropagator_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void initialize() {
        if (qquickattachedpropertypropagator_initialize_isbase) {
            qquickattachedpropertypropagator_initialize_isbase = false;
            QQuickAttachedPropertyPropagator::initialize();
            return;
        }
        auto initialize_cb = qquickattachedpropertypropagator_initialize_callback;
        if (initialize_cb) {
            initialize_cb();
            return;
        }
        QQuickAttachedPropertyPropagator::initialize();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickattachedpropertypropagator_sender_isbase) {
            qquickattachedpropertypropagator_sender_isbase = false;
            return QQuickAttachedPropertyPropagator::sender();
        }
        auto sender_cb = qquickattachedpropertypropagator_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickattachedpropertypropagator_sendersignalindex_isbase) {
            qquickattachedpropertypropagator_sendersignalindex_isbase = false;
            return QQuickAttachedPropertyPropagator::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickattachedpropertypropagator_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickAttachedPropertyPropagator::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickattachedpropertypropagator_receivers_isbase) {
            qquickattachedpropertypropagator_receivers_isbase = false;
            return QQuickAttachedPropertyPropagator::receivers(signal);
        }
        auto receivers_cb = qquickattachedpropertypropagator_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickAttachedPropertyPropagator::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickattachedpropertypropagator_issignalconnected_isbase) {
            qquickattachedpropertypropagator_issignalconnected_isbase = false;
            return QQuickAttachedPropertyPropagator::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickattachedpropertypropagator_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickAttachedPropertyPropagator_AttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent);
    friend void QQuickAttachedPropertyPropagator_SuperAttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent);
    friend void QQuickAttachedPropertyPropagator_TimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event);
    friend void QQuickAttachedPropertyPropagator_SuperTimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event);
    friend void QQuickAttachedPropertyPropagator_ChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event);
    friend void QQuickAttachedPropertyPropagator_SuperChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event);
    friend void QQuickAttachedPropertyPropagator_CustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event);
    friend void QQuickAttachedPropertyPropagator_SuperCustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event);
    friend void QQuickAttachedPropertyPropagator_ConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
    friend void QQuickAttachedPropertyPropagator_SuperConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
    friend void QQuickAttachedPropertyPropagator_DisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
    friend void QQuickAttachedPropertyPropagator_SuperDisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
    friend void QQuickAttachedPropertyPropagator_Initialize(QQuickAttachedPropertyPropagator* self);
    friend void QQuickAttachedPropertyPropagator_SuperInitialize(QQuickAttachedPropertyPropagator* self);
    friend QObject* QQuickAttachedPropertyPropagator_Sender(const QQuickAttachedPropertyPropagator* self);
    friend QObject* QQuickAttachedPropertyPropagator_SuperSender(const QQuickAttachedPropertyPropagator* self);
    friend int QQuickAttachedPropertyPropagator_SenderSignalIndex(const QQuickAttachedPropertyPropagator* self);
    friend int QQuickAttachedPropertyPropagator_SuperSenderSignalIndex(const QQuickAttachedPropertyPropagator* self);
    friend int QQuickAttachedPropertyPropagator_Receivers(const QQuickAttachedPropertyPropagator* self, const char* signal);
    friend int QQuickAttachedPropertyPropagator_SuperReceivers(const QQuickAttachedPropertyPropagator* self, const char* signal);
    friend bool QQuickAttachedPropertyPropagator_IsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
    friend bool QQuickAttachedPropertyPropagator_SuperIsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
};

#endif
