#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQKEYEVENTTRANSITION_H
#define SRC_STATEMACHINEC_LIBVIRTUALQKEYEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QKeyEventTransition so that we can call protected methods
class VirtualQKeyEventTransition final : public QKeyEventTransition {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeyEventTransition = true;

    // Virtual class public types (including callbacks)
    using QKeyEventTransition_MetaObject_Callback = QMetaObject* (*)();
    using QKeyEventTransition_Metacast_Callback = void* (*)(QKeyEventTransition*, const char*);
    using QKeyEventTransition_Metacall_Callback = int (*)(QKeyEventTransition*, int, int, void**);
    using QKeyEventTransition_OnTransition_Callback = void (*)(QKeyEventTransition*, QEvent*);
    using QKeyEventTransition_EventTest_Callback = bool (*)(QKeyEventTransition*, QEvent*);
    using QKeyEventTransition_Event_Callback = bool (*)(QKeyEventTransition*, QEvent*);
    using QKeyEventTransition_EventFilter_Callback = bool (*)(QKeyEventTransition*, QObject*, QEvent*);
    using QKeyEventTransition_TimerEvent_Callback = void (*)(QKeyEventTransition*, QTimerEvent*);
    using QKeyEventTransition_ChildEvent_Callback = void (*)(QKeyEventTransition*, QChildEvent*);
    using QKeyEventTransition_CustomEvent_Callback = void (*)(QKeyEventTransition*, QEvent*);
    using QKeyEventTransition_ConnectNotify_Callback = void (*)(QKeyEventTransition*, QMetaMethod*);
    using QKeyEventTransition_DisconnectNotify_Callback = void (*)(QKeyEventTransition*, QMetaMethod*);
    using QKeyEventTransition_Sender_Callback = QObject* (*)();
    using QKeyEventTransition_SenderSignalIndex_Callback = int (*)();
    using QKeyEventTransition_Receivers_Callback = int (*)(const QKeyEventTransition*, const char*);
    using QKeyEventTransition_IsSignalConnected_Callback = bool (*)(const QKeyEventTransition*, QMetaMethod*);

  protected:
    // Instance callback storage
    QKeyEventTransition_MetaObject_Callback qkeyeventtransition_metaobject_callback = nullptr;
    QKeyEventTransition_Metacast_Callback qkeyeventtransition_metacast_callback = nullptr;
    QKeyEventTransition_Metacall_Callback qkeyeventtransition_metacall_callback = nullptr;
    QKeyEventTransition_OnTransition_Callback qkeyeventtransition_ontransition_callback = nullptr;
    QKeyEventTransition_EventTest_Callback qkeyeventtransition_eventtest_callback = nullptr;
    QKeyEventTransition_Event_Callback qkeyeventtransition_event_callback = nullptr;
    QKeyEventTransition_EventFilter_Callback qkeyeventtransition_eventfilter_callback = nullptr;
    QKeyEventTransition_TimerEvent_Callback qkeyeventtransition_timerevent_callback = nullptr;
    QKeyEventTransition_ChildEvent_Callback qkeyeventtransition_childevent_callback = nullptr;
    QKeyEventTransition_CustomEvent_Callback qkeyeventtransition_customevent_callback = nullptr;
    QKeyEventTransition_ConnectNotify_Callback qkeyeventtransition_connectnotify_callback = nullptr;
    QKeyEventTransition_DisconnectNotify_Callback qkeyeventtransition_disconnectnotify_callback = nullptr;
    QKeyEventTransition_Sender_Callback qkeyeventtransition_sender_callback = nullptr;
    QKeyEventTransition_SenderSignalIndex_Callback qkeyeventtransition_sendersignalindex_callback = nullptr;
    QKeyEventTransition_Receivers_Callback qkeyeventtransition_receivers_callback = nullptr;
    QKeyEventTransition_IsSignalConnected_Callback qkeyeventtransition_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qkeyeventtransition_metaobject_isbase = false;
    mutable bool qkeyeventtransition_metacast_isbase = false;
    mutable bool qkeyeventtransition_metacall_isbase = false;
    mutable bool qkeyeventtransition_ontransition_isbase = false;
    mutable bool qkeyeventtransition_eventtest_isbase = false;
    mutable bool qkeyeventtransition_event_isbase = false;
    mutable bool qkeyeventtransition_eventfilter_isbase = false;
    mutable bool qkeyeventtransition_timerevent_isbase = false;
    mutable bool qkeyeventtransition_childevent_isbase = false;
    mutable bool qkeyeventtransition_customevent_isbase = false;
    mutable bool qkeyeventtransition_connectnotify_isbase = false;
    mutable bool qkeyeventtransition_disconnectnotify_isbase = false;
    mutable bool qkeyeventtransition_sender_isbase = false;
    mutable bool qkeyeventtransition_sendersignalindex_isbase = false;
    mutable bool qkeyeventtransition_receivers_isbase = false;
    mutable bool qkeyeventtransition_issignalconnected_isbase = false;

  public:
    VirtualQKeyEventTransition() : QKeyEventTransition() {};
    VirtualQKeyEventTransition(QObject* object, QEvent::Type typeVal, int key) : QKeyEventTransition(object, typeVal, key) {};
    VirtualQKeyEventTransition(QState* sourceState) : QKeyEventTransition(sourceState) {};
    VirtualQKeyEventTransition(QObject* object, QEvent::Type typeVal, int key, QState* sourceState) : QKeyEventTransition(object, typeVal, key, sourceState) {};

    // Callback setters
    inline void setQKeyEventTransition_MetaObject_Callback(QKeyEventTransition_MetaObject_Callback cb) { qkeyeventtransition_metaobject_callback = cb; }
    inline void setQKeyEventTransition_Metacast_Callback(QKeyEventTransition_Metacast_Callback cb) { qkeyeventtransition_metacast_callback = cb; }
    inline void setQKeyEventTransition_Metacall_Callback(QKeyEventTransition_Metacall_Callback cb) { qkeyeventtransition_metacall_callback = cb; }
    inline void setQKeyEventTransition_OnTransition_Callback(QKeyEventTransition_OnTransition_Callback cb) { qkeyeventtransition_ontransition_callback = cb; }
    inline void setQKeyEventTransition_EventTest_Callback(QKeyEventTransition_EventTest_Callback cb) { qkeyeventtransition_eventtest_callback = cb; }
    inline void setQKeyEventTransition_Event_Callback(QKeyEventTransition_Event_Callback cb) { qkeyeventtransition_event_callback = cb; }
    inline void setQKeyEventTransition_EventFilter_Callback(QKeyEventTransition_EventFilter_Callback cb) { qkeyeventtransition_eventfilter_callback = cb; }
    inline void setQKeyEventTransition_TimerEvent_Callback(QKeyEventTransition_TimerEvent_Callback cb) { qkeyeventtransition_timerevent_callback = cb; }
    inline void setQKeyEventTransition_ChildEvent_Callback(QKeyEventTransition_ChildEvent_Callback cb) { qkeyeventtransition_childevent_callback = cb; }
    inline void setQKeyEventTransition_CustomEvent_Callback(QKeyEventTransition_CustomEvent_Callback cb) { qkeyeventtransition_customevent_callback = cb; }
    inline void setQKeyEventTransition_ConnectNotify_Callback(QKeyEventTransition_ConnectNotify_Callback cb) { qkeyeventtransition_connectnotify_callback = cb; }
    inline void setQKeyEventTransition_DisconnectNotify_Callback(QKeyEventTransition_DisconnectNotify_Callback cb) { qkeyeventtransition_disconnectnotify_callback = cb; }
    inline void setQKeyEventTransition_Sender_Callback(QKeyEventTransition_Sender_Callback cb) { qkeyeventtransition_sender_callback = cb; }
    inline void setQKeyEventTransition_SenderSignalIndex_Callback(QKeyEventTransition_SenderSignalIndex_Callback cb) { qkeyeventtransition_sendersignalindex_callback = cb; }
    inline void setQKeyEventTransition_Receivers_Callback(QKeyEventTransition_Receivers_Callback cb) { qkeyeventtransition_receivers_callback = cb; }
    inline void setQKeyEventTransition_IsSignalConnected_Callback(QKeyEventTransition_IsSignalConnected_Callback cb) { qkeyeventtransition_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQKeyEventTransition_MetaObject_IsBase(bool value) const { qkeyeventtransition_metaobject_isbase = value; }
    inline void setQKeyEventTransition_Metacast_IsBase(bool value) const { qkeyeventtransition_metacast_isbase = value; }
    inline void setQKeyEventTransition_Metacall_IsBase(bool value) const { qkeyeventtransition_metacall_isbase = value; }
    inline void setQKeyEventTransition_OnTransition_IsBase(bool value) const { qkeyeventtransition_ontransition_isbase = value; }
    inline void setQKeyEventTransition_EventTest_IsBase(bool value) const { qkeyeventtransition_eventtest_isbase = value; }
    inline void setQKeyEventTransition_Event_IsBase(bool value) const { qkeyeventtransition_event_isbase = value; }
    inline void setQKeyEventTransition_EventFilter_IsBase(bool value) const { qkeyeventtransition_eventfilter_isbase = value; }
    inline void setQKeyEventTransition_TimerEvent_IsBase(bool value) const { qkeyeventtransition_timerevent_isbase = value; }
    inline void setQKeyEventTransition_ChildEvent_IsBase(bool value) const { qkeyeventtransition_childevent_isbase = value; }
    inline void setQKeyEventTransition_CustomEvent_IsBase(bool value) const { qkeyeventtransition_customevent_isbase = value; }
    inline void setQKeyEventTransition_ConnectNotify_IsBase(bool value) const { qkeyeventtransition_connectnotify_isbase = value; }
    inline void setQKeyEventTransition_DisconnectNotify_IsBase(bool value) const { qkeyeventtransition_disconnectnotify_isbase = value; }
    inline void setQKeyEventTransition_Sender_IsBase(bool value) const { qkeyeventtransition_sender_isbase = value; }
    inline void setQKeyEventTransition_SenderSignalIndex_IsBase(bool value) const { qkeyeventtransition_sendersignalindex_isbase = value; }
    inline void setQKeyEventTransition_Receivers_IsBase(bool value) const { qkeyeventtransition_receivers_isbase = value; }
    inline void setQKeyEventTransition_IsSignalConnected_IsBase(bool value) const { qkeyeventtransition_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeyeventtransition_metaobject_isbase) {
            qkeyeventtransition_metaobject_isbase = false;
            return QKeyEventTransition::metaObject();
        }
        auto metaobject_cb = qkeyeventtransition_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QKeyEventTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeyeventtransition_metacast_isbase) {
            qkeyeventtransition_metacast_isbase = false;
            return QKeyEventTransition::qt_metacast(param1);
        }
        auto metacast_cb = qkeyeventtransition_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeyeventtransition_metacall_isbase) {
            qkeyeventtransition_metacall_isbase = false;
            return QKeyEventTransition::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qkeyeventtransition_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeyEventTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qkeyeventtransition_ontransition_isbase) {
            qkeyeventtransition_ontransition_isbase = false;
            QKeyEventTransition::onTransition(event);
            return;
        }
        auto ontransition_cb = qkeyeventtransition_ontransition_callback;
        if (ontransition_cb) {
            QEvent* cbval1 = event;

            ontransition_cb(this, cbval1);
            return;
        }
        QKeyEventTransition::onTransition(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qkeyeventtransition_eventtest_isbase) {
            qkeyeventtransition_eventtest_isbase = false;
            return QKeyEventTransition::eventTest(event);
        }
        auto eventtest_cb = qkeyeventtransition_eventtest_callback;
        if (eventtest_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = eventtest_cb(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::eventTest(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qkeyeventtransition_event_isbase) {
            qkeyeventtransition_event_isbase = false;
            return QKeyEventTransition::event(e);
        }
        auto event_cb = qkeyeventtransition_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeyeventtransition_eventfilter_isbase) {
            qkeyeventtransition_eventfilter_isbase = false;
            return QKeyEventTransition::eventFilter(watched, event);
        }
        auto eventfilter_cb = qkeyeventtransition_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeyEventTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeyeventtransition_timerevent_isbase) {
            qkeyeventtransition_timerevent_isbase = false;
            QKeyEventTransition::timerEvent(event);
            return;
        }
        auto timerevent_cb = qkeyeventtransition_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QKeyEventTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeyeventtransition_childevent_isbase) {
            qkeyeventtransition_childevent_isbase = false;
            QKeyEventTransition::childEvent(event);
            return;
        }
        auto childevent_cb = qkeyeventtransition_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QKeyEventTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeyeventtransition_customevent_isbase) {
            qkeyeventtransition_customevent_isbase = false;
            QKeyEventTransition::customEvent(event);
            return;
        }
        auto customevent_cb = qkeyeventtransition_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QKeyEventTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeyeventtransition_connectnotify_isbase) {
            qkeyeventtransition_connectnotify_isbase = false;
            QKeyEventTransition::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qkeyeventtransition_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QKeyEventTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeyeventtransition_disconnectnotify_isbase) {
            qkeyeventtransition_disconnectnotify_isbase = false;
            QKeyEventTransition::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qkeyeventtransition_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QKeyEventTransition::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qkeyeventtransition_sender_isbase) {
            qkeyeventtransition_sender_isbase = false;
            return QKeyEventTransition::sender();
        }
        auto sender_cb = qkeyeventtransition_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QKeyEventTransition::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qkeyeventtransition_sendersignalindex_isbase) {
            qkeyeventtransition_sendersignalindex_isbase = false;
            return QKeyEventTransition::senderSignalIndex();
        }
        auto sendersignalindex_cb = qkeyeventtransition_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QKeyEventTransition::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qkeyeventtransition_receivers_isbase) {
            qkeyeventtransition_receivers_isbase = false;
            return QKeyEventTransition::receivers(signal);
        }
        auto receivers_cb = qkeyeventtransition_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QKeyEventTransition::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qkeyeventtransition_issignalconnected_isbase) {
            qkeyeventtransition_issignalconnected_isbase = false;
            return QKeyEventTransition::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qkeyeventtransition_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::isSignalConnected(signal);
    }

    // Friend functions
    friend void QKeyEventTransition_OnTransition(QKeyEventTransition* self, QEvent* event);
    friend void QKeyEventTransition_SuperOnTransition(QKeyEventTransition* self, QEvent* event);
    friend bool QKeyEventTransition_EventTest(QKeyEventTransition* self, QEvent* event);
    friend bool QKeyEventTransition_SuperEventTest(QKeyEventTransition* self, QEvent* event);
    friend bool QKeyEventTransition_Event(QKeyEventTransition* self, QEvent* e);
    friend bool QKeyEventTransition_SuperEvent(QKeyEventTransition* self, QEvent* e);
    friend void QKeyEventTransition_TimerEvent(QKeyEventTransition* self, QTimerEvent* event);
    friend void QKeyEventTransition_SuperTimerEvent(QKeyEventTransition* self, QTimerEvent* event);
    friend void QKeyEventTransition_ChildEvent(QKeyEventTransition* self, QChildEvent* event);
    friend void QKeyEventTransition_SuperChildEvent(QKeyEventTransition* self, QChildEvent* event);
    friend void QKeyEventTransition_CustomEvent(QKeyEventTransition* self, QEvent* event);
    friend void QKeyEventTransition_SuperCustomEvent(QKeyEventTransition* self, QEvent* event);
    friend void QKeyEventTransition_ConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
    friend void QKeyEventTransition_SuperConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
    friend void QKeyEventTransition_DisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
    friend void QKeyEventTransition_SuperDisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
    friend QObject* QKeyEventTransition_Sender(const QKeyEventTransition* self);
    friend QObject* QKeyEventTransition_SuperSender(const QKeyEventTransition* self);
    friend int QKeyEventTransition_SenderSignalIndex(const QKeyEventTransition* self);
    friend int QKeyEventTransition_SuperSenderSignalIndex(const QKeyEventTransition* self);
    friend int QKeyEventTransition_Receivers(const QKeyEventTransition* self, const char* signal);
    friend int QKeyEventTransition_SuperReceivers(const QKeyEventTransition* self, const char* signal);
    friend bool QKeyEventTransition_IsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal);
    friend bool QKeyEventTransition_SuperIsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal);
};

#endif
