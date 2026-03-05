#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQSTATE_H
#define SRC_STATEMACHINEC_LIBVIRTUALQSTATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QState so that we can call protected methods
class VirtualQState final : public QState {

  public:
    // Virtual class boolean flag
    bool isVirtualQState = true;

    // Virtual class public types (including callbacks)
    using QState_MetaObject_Callback = QMetaObject* (*)();
    using QState_Metacast_Callback = void* (*)(QState*, const char*);
    using QState_Metacall_Callback = int (*)(QState*, int, int, void**);
    using QState_OnEntry_Callback = void (*)(QState*, QEvent*);
    using QState_OnExit_Callback = void (*)(QState*, QEvent*);
    using QState_Event_Callback = bool (*)(QState*, QEvent*);
    using QState_EventFilter_Callback = bool (*)(QState*, QObject*, QEvent*);
    using QState_TimerEvent_Callback = void (*)(QState*, QTimerEvent*);
    using QState_ChildEvent_Callback = void (*)(QState*, QChildEvent*);
    using QState_CustomEvent_Callback = void (*)(QState*, QEvent*);
    using QState_ConnectNotify_Callback = void (*)(QState*, QMetaMethod*);
    using QState_DisconnectNotify_Callback = void (*)(QState*, QMetaMethod*);
    using QState_Sender_Callback = QObject* (*)();
    using QState_SenderSignalIndex_Callback = int (*)();
    using QState_Receivers_Callback = int (*)(const QState*, const char*);
    using QState_IsSignalConnected_Callback = bool (*)(const QState*, QMetaMethod*);

  protected:
    // Instance callback storage
    QState_MetaObject_Callback qstate_metaobject_callback = nullptr;
    QState_Metacast_Callback qstate_metacast_callback = nullptr;
    QState_Metacall_Callback qstate_metacall_callback = nullptr;
    QState_OnEntry_Callback qstate_onentry_callback = nullptr;
    QState_OnExit_Callback qstate_onexit_callback = nullptr;
    QState_Event_Callback qstate_event_callback = nullptr;
    QState_EventFilter_Callback qstate_eventfilter_callback = nullptr;
    QState_TimerEvent_Callback qstate_timerevent_callback = nullptr;
    QState_ChildEvent_Callback qstate_childevent_callback = nullptr;
    QState_CustomEvent_Callback qstate_customevent_callback = nullptr;
    QState_ConnectNotify_Callback qstate_connectnotify_callback = nullptr;
    QState_DisconnectNotify_Callback qstate_disconnectnotify_callback = nullptr;
    QState_Sender_Callback qstate_sender_callback = nullptr;
    QState_SenderSignalIndex_Callback qstate_sendersignalindex_callback = nullptr;
    QState_Receivers_Callback qstate_receivers_callback = nullptr;
    QState_IsSignalConnected_Callback qstate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstate_metaobject_isbase = false;
    mutable bool qstate_metacast_isbase = false;
    mutable bool qstate_metacall_isbase = false;
    mutable bool qstate_onentry_isbase = false;
    mutable bool qstate_onexit_isbase = false;
    mutable bool qstate_event_isbase = false;
    mutable bool qstate_eventfilter_isbase = false;
    mutable bool qstate_timerevent_isbase = false;
    mutable bool qstate_childevent_isbase = false;
    mutable bool qstate_customevent_isbase = false;
    mutable bool qstate_connectnotify_isbase = false;
    mutable bool qstate_disconnectnotify_isbase = false;
    mutable bool qstate_sender_isbase = false;
    mutable bool qstate_sendersignalindex_isbase = false;
    mutable bool qstate_receivers_isbase = false;
    mutable bool qstate_issignalconnected_isbase = false;

  public:
    VirtualQState() : QState() {};
    VirtualQState(QState::ChildMode childMode) : QState(childMode) {};
    VirtualQState(QState* parent) : QState(parent) {};
    VirtualQState(QState::ChildMode childMode, QState* parent) : QState(childMode, parent) {};

    // Callback setters
    inline void setQState_MetaObject_Callback(QState_MetaObject_Callback cb) { qstate_metaobject_callback = cb; }
    inline void setQState_Metacast_Callback(QState_Metacast_Callback cb) { qstate_metacast_callback = cb; }
    inline void setQState_Metacall_Callback(QState_Metacall_Callback cb) { qstate_metacall_callback = cb; }
    inline void setQState_OnEntry_Callback(QState_OnEntry_Callback cb) { qstate_onentry_callback = cb; }
    inline void setQState_OnExit_Callback(QState_OnExit_Callback cb) { qstate_onexit_callback = cb; }
    inline void setQState_Event_Callback(QState_Event_Callback cb) { qstate_event_callback = cb; }
    inline void setQState_EventFilter_Callback(QState_EventFilter_Callback cb) { qstate_eventfilter_callback = cb; }
    inline void setQState_TimerEvent_Callback(QState_TimerEvent_Callback cb) { qstate_timerevent_callback = cb; }
    inline void setQState_ChildEvent_Callback(QState_ChildEvent_Callback cb) { qstate_childevent_callback = cb; }
    inline void setQState_CustomEvent_Callback(QState_CustomEvent_Callback cb) { qstate_customevent_callback = cb; }
    inline void setQState_ConnectNotify_Callback(QState_ConnectNotify_Callback cb) { qstate_connectnotify_callback = cb; }
    inline void setQState_DisconnectNotify_Callback(QState_DisconnectNotify_Callback cb) { qstate_disconnectnotify_callback = cb; }
    inline void setQState_Sender_Callback(QState_Sender_Callback cb) { qstate_sender_callback = cb; }
    inline void setQState_SenderSignalIndex_Callback(QState_SenderSignalIndex_Callback cb) { qstate_sendersignalindex_callback = cb; }
    inline void setQState_Receivers_Callback(QState_Receivers_Callback cb) { qstate_receivers_callback = cb; }
    inline void setQState_IsSignalConnected_Callback(QState_IsSignalConnected_Callback cb) { qstate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQState_MetaObject_IsBase(bool value) const { qstate_metaobject_isbase = value; }
    inline void setQState_Metacast_IsBase(bool value) const { qstate_metacast_isbase = value; }
    inline void setQState_Metacall_IsBase(bool value) const { qstate_metacall_isbase = value; }
    inline void setQState_OnEntry_IsBase(bool value) const { qstate_onentry_isbase = value; }
    inline void setQState_OnExit_IsBase(bool value) const { qstate_onexit_isbase = value; }
    inline void setQState_Event_IsBase(bool value) const { qstate_event_isbase = value; }
    inline void setQState_EventFilter_IsBase(bool value) const { qstate_eventfilter_isbase = value; }
    inline void setQState_TimerEvent_IsBase(bool value) const { qstate_timerevent_isbase = value; }
    inline void setQState_ChildEvent_IsBase(bool value) const { qstate_childevent_isbase = value; }
    inline void setQState_CustomEvent_IsBase(bool value) const { qstate_customevent_isbase = value; }
    inline void setQState_ConnectNotify_IsBase(bool value) const { qstate_connectnotify_isbase = value; }
    inline void setQState_DisconnectNotify_IsBase(bool value) const { qstate_disconnectnotify_isbase = value; }
    inline void setQState_Sender_IsBase(bool value) const { qstate_sender_isbase = value; }
    inline void setQState_SenderSignalIndex_IsBase(bool value) const { qstate_sendersignalindex_isbase = value; }
    inline void setQState_Receivers_IsBase(bool value) const { qstate_receivers_isbase = value; }
    inline void setQState_IsSignalConnected_IsBase(bool value) const { qstate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstate_metaobject_isbase) {
            qstate_metaobject_isbase = false;
            return QState::metaObject();
        }
        auto metaobject_cb = qstate_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QState::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstate_metacast_isbase) {
            qstate_metacast_isbase = false;
            return QState::qt_metacast(param1);
        }
        auto metacast_cb = qstate_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QState::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstate_metacall_isbase) {
            qstate_metacall_isbase = false;
            return QState::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qstate_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QState::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qstate_onentry_isbase) {
            qstate_onentry_isbase = false;
            QState::onEntry(event);
            return;
        }
        auto onentry_cb = qstate_onentry_callback;
        if (onentry_cb) {
            QEvent* cbval1 = event;

            onentry_cb(this, cbval1);
            return;
        }
        QState::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qstate_onexit_isbase) {
            qstate_onexit_isbase = false;
            QState::onExit(event);
            return;
        }
        auto onexit_cb = qstate_onexit_callback;
        if (onexit_cb) {
            QEvent* cbval1 = event;

            onexit_cb(this, cbval1);
            return;
        }
        QState::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstate_event_isbase) {
            qstate_event_isbase = false;
            return QState::event(e);
        }
        auto event_cb = qstate_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QState::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstate_eventfilter_isbase) {
            qstate_eventfilter_isbase = false;
            return QState::eventFilter(watched, event);
        }
        auto eventfilter_cb = qstate_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QState::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstate_timerevent_isbase) {
            qstate_timerevent_isbase = false;
            QState::timerEvent(event);
            return;
        }
        auto timerevent_cb = qstate_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QState::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstate_childevent_isbase) {
            qstate_childevent_isbase = false;
            QState::childEvent(event);
            return;
        }
        auto childevent_cb = qstate_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QState::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstate_customevent_isbase) {
            qstate_customevent_isbase = false;
            QState::customEvent(event);
            return;
        }
        auto customevent_cb = qstate_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QState::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstate_connectnotify_isbase) {
            qstate_connectnotify_isbase = false;
            QState::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qstate_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QState::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstate_disconnectnotify_isbase) {
            qstate_disconnectnotify_isbase = false;
            QState::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qstate_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QState::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstate_sender_isbase) {
            qstate_sender_isbase = false;
            return QState::sender();
        }
        auto sender_cb = qstate_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QState::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstate_sendersignalindex_isbase) {
            qstate_sendersignalindex_isbase = false;
            return QState::senderSignalIndex();
        }
        auto sendersignalindex_cb = qstate_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QState::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstate_receivers_isbase) {
            qstate_receivers_isbase = false;
            return QState::receivers(signal);
        }
        auto receivers_cb = qstate_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QState::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstate_issignalconnected_isbase) {
            qstate_issignalconnected_isbase = false;
            return QState::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qstate_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QState::isSignalConnected(signal);
    }

    // Friend functions
    friend void QState_OnEntry(QState* self, QEvent* event);
    friend void QState_SuperOnEntry(QState* self, QEvent* event);
    friend void QState_OnExit(QState* self, QEvent* event);
    friend void QState_SuperOnExit(QState* self, QEvent* event);
    friend bool QState_Event(QState* self, QEvent* e);
    friend bool QState_SuperEvent(QState* self, QEvent* e);
    friend void QState_TimerEvent(QState* self, QTimerEvent* event);
    friend void QState_SuperTimerEvent(QState* self, QTimerEvent* event);
    friend void QState_ChildEvent(QState* self, QChildEvent* event);
    friend void QState_SuperChildEvent(QState* self, QChildEvent* event);
    friend void QState_CustomEvent(QState* self, QEvent* event);
    friend void QState_SuperCustomEvent(QState* self, QEvent* event);
    friend void QState_ConnectNotify(QState* self, const QMetaMethod* signal);
    friend void QState_SuperConnectNotify(QState* self, const QMetaMethod* signal);
    friend void QState_DisconnectNotify(QState* self, const QMetaMethod* signal);
    friend void QState_SuperDisconnectNotify(QState* self, const QMetaMethod* signal);
    friend QObject* QState_Sender(const QState* self);
    friend QObject* QState_SuperSender(const QState* self);
    friend int QState_SenderSignalIndex(const QState* self);
    friend int QState_SuperSenderSignalIndex(const QState* self);
    friend int QState_Receivers(const QState* self, const char* signal);
    friend int QState_SuperReceivers(const QState* self, const char* signal);
    friend bool QState_IsSignalConnected(const QState* self, const QMetaMethod* signal);
    friend bool QState_SuperIsSignalConnected(const QState* self, const QMetaMethod* signal);
};

#endif
