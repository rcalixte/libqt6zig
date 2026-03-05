#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQFINALSTATE_H
#define SRC_STATEMACHINEC_LIBVIRTUALQFINALSTATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QFinalState so that we can call protected methods
class VirtualQFinalState final : public QFinalState {

  public:
    // Virtual class boolean flag
    bool isVirtualQFinalState = true;

    // Virtual class public types (including callbacks)
    using QFinalState_MetaObject_Callback = QMetaObject* (*)();
    using QFinalState_Metacast_Callback = void* (*)(QFinalState*, const char*);
    using QFinalState_Metacall_Callback = int (*)(QFinalState*, int, int, void**);
    using QFinalState_OnEntry_Callback = void (*)(QFinalState*, QEvent*);
    using QFinalState_OnExit_Callback = void (*)(QFinalState*, QEvent*);
    using QFinalState_Event_Callback = bool (*)(QFinalState*, QEvent*);
    using QFinalState_EventFilter_Callback = bool (*)(QFinalState*, QObject*, QEvent*);
    using QFinalState_TimerEvent_Callback = void (*)(QFinalState*, QTimerEvent*);
    using QFinalState_ChildEvent_Callback = void (*)(QFinalState*, QChildEvent*);
    using QFinalState_CustomEvent_Callback = void (*)(QFinalState*, QEvent*);
    using QFinalState_ConnectNotify_Callback = void (*)(QFinalState*, QMetaMethod*);
    using QFinalState_DisconnectNotify_Callback = void (*)(QFinalState*, QMetaMethod*);
    using QFinalState_Sender_Callback = QObject* (*)();
    using QFinalState_SenderSignalIndex_Callback = int (*)();
    using QFinalState_Receivers_Callback = int (*)(const QFinalState*, const char*);
    using QFinalState_IsSignalConnected_Callback = bool (*)(const QFinalState*, QMetaMethod*);

  protected:
    // Instance callback storage
    QFinalState_MetaObject_Callback qfinalstate_metaobject_callback = nullptr;
    QFinalState_Metacast_Callback qfinalstate_metacast_callback = nullptr;
    QFinalState_Metacall_Callback qfinalstate_metacall_callback = nullptr;
    QFinalState_OnEntry_Callback qfinalstate_onentry_callback = nullptr;
    QFinalState_OnExit_Callback qfinalstate_onexit_callback = nullptr;
    QFinalState_Event_Callback qfinalstate_event_callback = nullptr;
    QFinalState_EventFilter_Callback qfinalstate_eventfilter_callback = nullptr;
    QFinalState_TimerEvent_Callback qfinalstate_timerevent_callback = nullptr;
    QFinalState_ChildEvent_Callback qfinalstate_childevent_callback = nullptr;
    QFinalState_CustomEvent_Callback qfinalstate_customevent_callback = nullptr;
    QFinalState_ConnectNotify_Callback qfinalstate_connectnotify_callback = nullptr;
    QFinalState_DisconnectNotify_Callback qfinalstate_disconnectnotify_callback = nullptr;
    QFinalState_Sender_Callback qfinalstate_sender_callback = nullptr;
    QFinalState_SenderSignalIndex_Callback qfinalstate_sendersignalindex_callback = nullptr;
    QFinalState_Receivers_Callback qfinalstate_receivers_callback = nullptr;
    QFinalState_IsSignalConnected_Callback qfinalstate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfinalstate_metaobject_isbase = false;
    mutable bool qfinalstate_metacast_isbase = false;
    mutable bool qfinalstate_metacall_isbase = false;
    mutable bool qfinalstate_onentry_isbase = false;
    mutable bool qfinalstate_onexit_isbase = false;
    mutable bool qfinalstate_event_isbase = false;
    mutable bool qfinalstate_eventfilter_isbase = false;
    mutable bool qfinalstate_timerevent_isbase = false;
    mutable bool qfinalstate_childevent_isbase = false;
    mutable bool qfinalstate_customevent_isbase = false;
    mutable bool qfinalstate_connectnotify_isbase = false;
    mutable bool qfinalstate_disconnectnotify_isbase = false;
    mutable bool qfinalstate_sender_isbase = false;
    mutable bool qfinalstate_sendersignalindex_isbase = false;
    mutable bool qfinalstate_receivers_isbase = false;
    mutable bool qfinalstate_issignalconnected_isbase = false;

  public:
    VirtualQFinalState() : QFinalState() {};
    VirtualQFinalState(QState* parent) : QFinalState(parent) {};

    // Callback setters
    inline void setQFinalState_MetaObject_Callback(QFinalState_MetaObject_Callback cb) { qfinalstate_metaobject_callback = cb; }
    inline void setQFinalState_Metacast_Callback(QFinalState_Metacast_Callback cb) { qfinalstate_metacast_callback = cb; }
    inline void setQFinalState_Metacall_Callback(QFinalState_Metacall_Callback cb) { qfinalstate_metacall_callback = cb; }
    inline void setQFinalState_OnEntry_Callback(QFinalState_OnEntry_Callback cb) { qfinalstate_onentry_callback = cb; }
    inline void setQFinalState_OnExit_Callback(QFinalState_OnExit_Callback cb) { qfinalstate_onexit_callback = cb; }
    inline void setQFinalState_Event_Callback(QFinalState_Event_Callback cb) { qfinalstate_event_callback = cb; }
    inline void setQFinalState_EventFilter_Callback(QFinalState_EventFilter_Callback cb) { qfinalstate_eventfilter_callback = cb; }
    inline void setQFinalState_TimerEvent_Callback(QFinalState_TimerEvent_Callback cb) { qfinalstate_timerevent_callback = cb; }
    inline void setQFinalState_ChildEvent_Callback(QFinalState_ChildEvent_Callback cb) { qfinalstate_childevent_callback = cb; }
    inline void setQFinalState_CustomEvent_Callback(QFinalState_CustomEvent_Callback cb) { qfinalstate_customevent_callback = cb; }
    inline void setQFinalState_ConnectNotify_Callback(QFinalState_ConnectNotify_Callback cb) { qfinalstate_connectnotify_callback = cb; }
    inline void setQFinalState_DisconnectNotify_Callback(QFinalState_DisconnectNotify_Callback cb) { qfinalstate_disconnectnotify_callback = cb; }
    inline void setQFinalState_Sender_Callback(QFinalState_Sender_Callback cb) { qfinalstate_sender_callback = cb; }
    inline void setQFinalState_SenderSignalIndex_Callback(QFinalState_SenderSignalIndex_Callback cb) { qfinalstate_sendersignalindex_callback = cb; }
    inline void setQFinalState_Receivers_Callback(QFinalState_Receivers_Callback cb) { qfinalstate_receivers_callback = cb; }
    inline void setQFinalState_IsSignalConnected_Callback(QFinalState_IsSignalConnected_Callback cb) { qfinalstate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQFinalState_MetaObject_IsBase(bool value) const { qfinalstate_metaobject_isbase = value; }
    inline void setQFinalState_Metacast_IsBase(bool value) const { qfinalstate_metacast_isbase = value; }
    inline void setQFinalState_Metacall_IsBase(bool value) const { qfinalstate_metacall_isbase = value; }
    inline void setQFinalState_OnEntry_IsBase(bool value) const { qfinalstate_onentry_isbase = value; }
    inline void setQFinalState_OnExit_IsBase(bool value) const { qfinalstate_onexit_isbase = value; }
    inline void setQFinalState_Event_IsBase(bool value) const { qfinalstate_event_isbase = value; }
    inline void setQFinalState_EventFilter_IsBase(bool value) const { qfinalstate_eventfilter_isbase = value; }
    inline void setQFinalState_TimerEvent_IsBase(bool value) const { qfinalstate_timerevent_isbase = value; }
    inline void setQFinalState_ChildEvent_IsBase(bool value) const { qfinalstate_childevent_isbase = value; }
    inline void setQFinalState_CustomEvent_IsBase(bool value) const { qfinalstate_customevent_isbase = value; }
    inline void setQFinalState_ConnectNotify_IsBase(bool value) const { qfinalstate_connectnotify_isbase = value; }
    inline void setQFinalState_DisconnectNotify_IsBase(bool value) const { qfinalstate_disconnectnotify_isbase = value; }
    inline void setQFinalState_Sender_IsBase(bool value) const { qfinalstate_sender_isbase = value; }
    inline void setQFinalState_SenderSignalIndex_IsBase(bool value) const { qfinalstate_sendersignalindex_isbase = value; }
    inline void setQFinalState_Receivers_IsBase(bool value) const { qfinalstate_receivers_isbase = value; }
    inline void setQFinalState_IsSignalConnected_IsBase(bool value) const { qfinalstate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfinalstate_metaobject_isbase) {
            qfinalstate_metaobject_isbase = false;
            return QFinalState::metaObject();
        }
        auto metaobject_cb = qfinalstate_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QFinalState::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfinalstate_metacast_isbase) {
            qfinalstate_metacast_isbase = false;
            return QFinalState::qt_metacast(param1);
        }
        auto metacast_cb = qfinalstate_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QFinalState::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfinalstate_metacall_isbase) {
            qfinalstate_metacall_isbase = false;
            return QFinalState::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qfinalstate_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFinalState::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qfinalstate_onentry_isbase) {
            qfinalstate_onentry_isbase = false;
            QFinalState::onEntry(event);
            return;
        }
        auto onentry_cb = qfinalstate_onentry_callback;
        if (onentry_cb) {
            QEvent* cbval1 = event;

            onentry_cb(this, cbval1);
            return;
        }
        QFinalState::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qfinalstate_onexit_isbase) {
            qfinalstate_onexit_isbase = false;
            QFinalState::onExit(event);
            return;
        }
        auto onexit_cb = qfinalstate_onexit_callback;
        if (onexit_cb) {
            QEvent* cbval1 = event;

            onexit_cb(this, cbval1);
            return;
        }
        QFinalState::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qfinalstate_event_isbase) {
            qfinalstate_event_isbase = false;
            return QFinalState::event(e);
        }
        auto event_cb = qfinalstate_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QFinalState::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfinalstate_eventfilter_isbase) {
            qfinalstate_eventfilter_isbase = false;
            return QFinalState::eventFilter(watched, event);
        }
        auto eventfilter_cb = qfinalstate_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFinalState::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfinalstate_timerevent_isbase) {
            qfinalstate_timerevent_isbase = false;
            QFinalState::timerEvent(event);
            return;
        }
        auto timerevent_cb = qfinalstate_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QFinalState::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfinalstate_childevent_isbase) {
            qfinalstate_childevent_isbase = false;
            QFinalState::childEvent(event);
            return;
        }
        auto childevent_cb = qfinalstate_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QFinalState::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfinalstate_customevent_isbase) {
            qfinalstate_customevent_isbase = false;
            QFinalState::customEvent(event);
            return;
        }
        auto customevent_cb = qfinalstate_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QFinalState::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfinalstate_connectnotify_isbase) {
            qfinalstate_connectnotify_isbase = false;
            QFinalState::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qfinalstate_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QFinalState::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfinalstate_disconnectnotify_isbase) {
            qfinalstate_disconnectnotify_isbase = false;
            QFinalState::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qfinalstate_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QFinalState::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfinalstate_sender_isbase) {
            qfinalstate_sender_isbase = false;
            return QFinalState::sender();
        }
        auto sender_cb = qfinalstate_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QFinalState::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfinalstate_sendersignalindex_isbase) {
            qfinalstate_sendersignalindex_isbase = false;
            return QFinalState::senderSignalIndex();
        }
        auto sendersignalindex_cb = qfinalstate_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QFinalState::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfinalstate_receivers_isbase) {
            qfinalstate_receivers_isbase = false;
            return QFinalState::receivers(signal);
        }
        auto receivers_cb = qfinalstate_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFinalState::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfinalstate_issignalconnected_isbase) {
            qfinalstate_issignalconnected_isbase = false;
            return QFinalState::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qfinalstate_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QFinalState::isSignalConnected(signal);
    }

    // Friend functions
    friend void QFinalState_OnEntry(QFinalState* self, QEvent* event);
    friend void QFinalState_SuperOnEntry(QFinalState* self, QEvent* event);
    friend void QFinalState_OnExit(QFinalState* self, QEvent* event);
    friend void QFinalState_SuperOnExit(QFinalState* self, QEvent* event);
    friend bool QFinalState_Event(QFinalState* self, QEvent* e);
    friend bool QFinalState_SuperEvent(QFinalState* self, QEvent* e);
    friend void QFinalState_TimerEvent(QFinalState* self, QTimerEvent* event);
    friend void QFinalState_SuperTimerEvent(QFinalState* self, QTimerEvent* event);
    friend void QFinalState_ChildEvent(QFinalState* self, QChildEvent* event);
    friend void QFinalState_SuperChildEvent(QFinalState* self, QChildEvent* event);
    friend void QFinalState_CustomEvent(QFinalState* self, QEvent* event);
    friend void QFinalState_SuperCustomEvent(QFinalState* self, QEvent* event);
    friend void QFinalState_ConnectNotify(QFinalState* self, const QMetaMethod* signal);
    friend void QFinalState_SuperConnectNotify(QFinalState* self, const QMetaMethod* signal);
    friend void QFinalState_DisconnectNotify(QFinalState* self, const QMetaMethod* signal);
    friend void QFinalState_SuperDisconnectNotify(QFinalState* self, const QMetaMethod* signal);
    friend QObject* QFinalState_Sender(const QFinalState* self);
    friend QObject* QFinalState_SuperSender(const QFinalState* self);
    friend int QFinalState_SenderSignalIndex(const QFinalState* self);
    friend int QFinalState_SuperSenderSignalIndex(const QFinalState* self);
    friend int QFinalState_Receivers(const QFinalState* self, const char* signal);
    friend int QFinalState_SuperReceivers(const QFinalState* self, const char* signal);
    friend bool QFinalState_IsSignalConnected(const QFinalState* self, const QMetaMethod* signal);
    friend bool QFinalState_SuperIsSignalConnected(const QFinalState* self, const QMetaMethod* signal);
};

#endif
