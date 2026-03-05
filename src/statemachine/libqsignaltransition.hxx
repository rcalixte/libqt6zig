#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQSIGNALTRANSITION_H
#define SRC_STATEMACHINEC_LIBVIRTUALQSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSignalTransition so that we can call protected methods
class VirtualQSignalTransition final : public QSignalTransition {

  public:
    // Virtual class boolean flag
    bool isVirtualQSignalTransition = true;

    // Virtual class public types (including callbacks)
    using QSignalTransition_MetaObject_Callback = QMetaObject* (*)();
    using QSignalTransition_Metacast_Callback = void* (*)(QSignalTransition*, const char*);
    using QSignalTransition_Metacall_Callback = int (*)(QSignalTransition*, int, int, void**);
    using QSignalTransition_EventTest_Callback = bool (*)(QSignalTransition*, QEvent*);
    using QSignalTransition_OnTransition_Callback = void (*)(QSignalTransition*, QEvent*);
    using QSignalTransition_Event_Callback = bool (*)(QSignalTransition*, QEvent*);
    using QSignalTransition_EventFilter_Callback = bool (*)(QSignalTransition*, QObject*, QEvent*);
    using QSignalTransition_TimerEvent_Callback = void (*)(QSignalTransition*, QTimerEvent*);
    using QSignalTransition_ChildEvent_Callback = void (*)(QSignalTransition*, QChildEvent*);
    using QSignalTransition_CustomEvent_Callback = void (*)(QSignalTransition*, QEvent*);
    using QSignalTransition_ConnectNotify_Callback = void (*)(QSignalTransition*, QMetaMethod*);
    using QSignalTransition_DisconnectNotify_Callback = void (*)(QSignalTransition*, QMetaMethod*);
    using QSignalTransition_Sender_Callback = QObject* (*)();
    using QSignalTransition_SenderSignalIndex_Callback = int (*)();
    using QSignalTransition_Receivers_Callback = int (*)(const QSignalTransition*, const char*);
    using QSignalTransition_IsSignalConnected_Callback = bool (*)(const QSignalTransition*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSignalTransition_MetaObject_Callback qsignaltransition_metaobject_callback = nullptr;
    QSignalTransition_Metacast_Callback qsignaltransition_metacast_callback = nullptr;
    QSignalTransition_Metacall_Callback qsignaltransition_metacall_callback = nullptr;
    QSignalTransition_EventTest_Callback qsignaltransition_eventtest_callback = nullptr;
    QSignalTransition_OnTransition_Callback qsignaltransition_ontransition_callback = nullptr;
    QSignalTransition_Event_Callback qsignaltransition_event_callback = nullptr;
    QSignalTransition_EventFilter_Callback qsignaltransition_eventfilter_callback = nullptr;
    QSignalTransition_TimerEvent_Callback qsignaltransition_timerevent_callback = nullptr;
    QSignalTransition_ChildEvent_Callback qsignaltransition_childevent_callback = nullptr;
    QSignalTransition_CustomEvent_Callback qsignaltransition_customevent_callback = nullptr;
    QSignalTransition_ConnectNotify_Callback qsignaltransition_connectnotify_callback = nullptr;
    QSignalTransition_DisconnectNotify_Callback qsignaltransition_disconnectnotify_callback = nullptr;
    QSignalTransition_Sender_Callback qsignaltransition_sender_callback = nullptr;
    QSignalTransition_SenderSignalIndex_Callback qsignaltransition_sendersignalindex_callback = nullptr;
    QSignalTransition_Receivers_Callback qsignaltransition_receivers_callback = nullptr;
    QSignalTransition_IsSignalConnected_Callback qsignaltransition_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsignaltransition_metaobject_isbase = false;
    mutable bool qsignaltransition_metacast_isbase = false;
    mutable bool qsignaltransition_metacall_isbase = false;
    mutable bool qsignaltransition_eventtest_isbase = false;
    mutable bool qsignaltransition_ontransition_isbase = false;
    mutable bool qsignaltransition_event_isbase = false;
    mutable bool qsignaltransition_eventfilter_isbase = false;
    mutable bool qsignaltransition_timerevent_isbase = false;
    mutable bool qsignaltransition_childevent_isbase = false;
    mutable bool qsignaltransition_customevent_isbase = false;
    mutable bool qsignaltransition_connectnotify_isbase = false;
    mutable bool qsignaltransition_disconnectnotify_isbase = false;
    mutable bool qsignaltransition_sender_isbase = false;
    mutable bool qsignaltransition_sendersignalindex_isbase = false;
    mutable bool qsignaltransition_receivers_isbase = false;
    mutable bool qsignaltransition_issignalconnected_isbase = false;

  public:
    VirtualQSignalTransition() : QSignalTransition() {};
    VirtualQSignalTransition(const QObject* sender, const char* signal) : QSignalTransition(sender, signal) {};
    VirtualQSignalTransition(QState* sourceState) : QSignalTransition(sourceState) {};
    VirtualQSignalTransition(const QObject* sender, const char* signal, QState* sourceState) : QSignalTransition(sender, signal, sourceState) {};

    // Callback setters
    inline void setQSignalTransition_MetaObject_Callback(QSignalTransition_MetaObject_Callback cb) { qsignaltransition_metaobject_callback = cb; }
    inline void setQSignalTransition_Metacast_Callback(QSignalTransition_Metacast_Callback cb) { qsignaltransition_metacast_callback = cb; }
    inline void setQSignalTransition_Metacall_Callback(QSignalTransition_Metacall_Callback cb) { qsignaltransition_metacall_callback = cb; }
    inline void setQSignalTransition_EventTest_Callback(QSignalTransition_EventTest_Callback cb) { qsignaltransition_eventtest_callback = cb; }
    inline void setQSignalTransition_OnTransition_Callback(QSignalTransition_OnTransition_Callback cb) { qsignaltransition_ontransition_callback = cb; }
    inline void setQSignalTransition_Event_Callback(QSignalTransition_Event_Callback cb) { qsignaltransition_event_callback = cb; }
    inline void setQSignalTransition_EventFilter_Callback(QSignalTransition_EventFilter_Callback cb) { qsignaltransition_eventfilter_callback = cb; }
    inline void setQSignalTransition_TimerEvent_Callback(QSignalTransition_TimerEvent_Callback cb) { qsignaltransition_timerevent_callback = cb; }
    inline void setQSignalTransition_ChildEvent_Callback(QSignalTransition_ChildEvent_Callback cb) { qsignaltransition_childevent_callback = cb; }
    inline void setQSignalTransition_CustomEvent_Callback(QSignalTransition_CustomEvent_Callback cb) { qsignaltransition_customevent_callback = cb; }
    inline void setQSignalTransition_ConnectNotify_Callback(QSignalTransition_ConnectNotify_Callback cb) { qsignaltransition_connectnotify_callback = cb; }
    inline void setQSignalTransition_DisconnectNotify_Callback(QSignalTransition_DisconnectNotify_Callback cb) { qsignaltransition_disconnectnotify_callback = cb; }
    inline void setQSignalTransition_Sender_Callback(QSignalTransition_Sender_Callback cb) { qsignaltransition_sender_callback = cb; }
    inline void setQSignalTransition_SenderSignalIndex_Callback(QSignalTransition_SenderSignalIndex_Callback cb) { qsignaltransition_sendersignalindex_callback = cb; }
    inline void setQSignalTransition_Receivers_Callback(QSignalTransition_Receivers_Callback cb) { qsignaltransition_receivers_callback = cb; }
    inline void setQSignalTransition_IsSignalConnected_Callback(QSignalTransition_IsSignalConnected_Callback cb) { qsignaltransition_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSignalTransition_MetaObject_IsBase(bool value) const { qsignaltransition_metaobject_isbase = value; }
    inline void setQSignalTransition_Metacast_IsBase(bool value) const { qsignaltransition_metacast_isbase = value; }
    inline void setQSignalTransition_Metacall_IsBase(bool value) const { qsignaltransition_metacall_isbase = value; }
    inline void setQSignalTransition_EventTest_IsBase(bool value) const { qsignaltransition_eventtest_isbase = value; }
    inline void setQSignalTransition_OnTransition_IsBase(bool value) const { qsignaltransition_ontransition_isbase = value; }
    inline void setQSignalTransition_Event_IsBase(bool value) const { qsignaltransition_event_isbase = value; }
    inline void setQSignalTransition_EventFilter_IsBase(bool value) const { qsignaltransition_eventfilter_isbase = value; }
    inline void setQSignalTransition_TimerEvent_IsBase(bool value) const { qsignaltransition_timerevent_isbase = value; }
    inline void setQSignalTransition_ChildEvent_IsBase(bool value) const { qsignaltransition_childevent_isbase = value; }
    inline void setQSignalTransition_CustomEvent_IsBase(bool value) const { qsignaltransition_customevent_isbase = value; }
    inline void setQSignalTransition_ConnectNotify_IsBase(bool value) const { qsignaltransition_connectnotify_isbase = value; }
    inline void setQSignalTransition_DisconnectNotify_IsBase(bool value) const { qsignaltransition_disconnectnotify_isbase = value; }
    inline void setQSignalTransition_Sender_IsBase(bool value) const { qsignaltransition_sender_isbase = value; }
    inline void setQSignalTransition_SenderSignalIndex_IsBase(bool value) const { qsignaltransition_sendersignalindex_isbase = value; }
    inline void setQSignalTransition_Receivers_IsBase(bool value) const { qsignaltransition_receivers_isbase = value; }
    inline void setQSignalTransition_IsSignalConnected_IsBase(bool value) const { qsignaltransition_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsignaltransition_metaobject_isbase) {
            qsignaltransition_metaobject_isbase = false;
            return QSignalTransition::metaObject();
        }
        auto metaobject_cb = qsignaltransition_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSignalTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsignaltransition_metacast_isbase) {
            qsignaltransition_metacast_isbase = false;
            return QSignalTransition::qt_metacast(param1);
        }
        auto metacast_cb = qsignaltransition_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsignaltransition_metacall_isbase) {
            qsignaltransition_metacall_isbase = false;
            return QSignalTransition::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsignaltransition_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSignalTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qsignaltransition_eventtest_isbase) {
            qsignaltransition_eventtest_isbase = false;
            return QSignalTransition::eventTest(event);
        }
        auto eventtest_cb = qsignaltransition_eventtest_callback;
        if (eventtest_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = eventtest_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::eventTest(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qsignaltransition_ontransition_isbase) {
            qsignaltransition_ontransition_isbase = false;
            QSignalTransition::onTransition(event);
            return;
        }
        auto ontransition_cb = qsignaltransition_ontransition_callback;
        if (ontransition_cb) {
            QEvent* cbval1 = event;

            ontransition_cb(this, cbval1);
            return;
        }
        QSignalTransition::onTransition(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsignaltransition_event_isbase) {
            qsignaltransition_event_isbase = false;
            return QSignalTransition::event(e);
        }
        auto event_cb = qsignaltransition_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsignaltransition_eventfilter_isbase) {
            qsignaltransition_eventfilter_isbase = false;
            return QSignalTransition::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsignaltransition_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSignalTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsignaltransition_timerevent_isbase) {
            qsignaltransition_timerevent_isbase = false;
            QSignalTransition::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsignaltransition_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSignalTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsignaltransition_childevent_isbase) {
            qsignaltransition_childevent_isbase = false;
            QSignalTransition::childEvent(event);
            return;
        }
        auto childevent_cb = qsignaltransition_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSignalTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsignaltransition_customevent_isbase) {
            qsignaltransition_customevent_isbase = false;
            QSignalTransition::customEvent(event);
            return;
        }
        auto customevent_cb = qsignaltransition_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSignalTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsignaltransition_connectnotify_isbase) {
            qsignaltransition_connectnotify_isbase = false;
            QSignalTransition::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsignaltransition_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSignalTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsignaltransition_disconnectnotify_isbase) {
            qsignaltransition_disconnectnotify_isbase = false;
            QSignalTransition::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsignaltransition_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSignalTransition::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsignaltransition_sender_isbase) {
            qsignaltransition_sender_isbase = false;
            return QSignalTransition::sender();
        }
        auto sender_cb = qsignaltransition_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSignalTransition::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsignaltransition_sendersignalindex_isbase) {
            qsignaltransition_sendersignalindex_isbase = false;
            return QSignalTransition::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsignaltransition_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSignalTransition::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsignaltransition_receivers_isbase) {
            qsignaltransition_receivers_isbase = false;
            return QSignalTransition::receivers(signal);
        }
        auto receivers_cb = qsignaltransition_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSignalTransition::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsignaltransition_issignalconnected_isbase) {
            qsignaltransition_issignalconnected_isbase = false;
            return QSignalTransition::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsignaltransition_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event);
    friend bool QSignalTransition_SuperEventTest(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_SuperOnTransition(QSignalTransition* self, QEvent* event);
    friend bool QSignalTransition_Event(QSignalTransition* self, QEvent* e);
    friend bool QSignalTransition_SuperEvent(QSignalTransition* self, QEvent* e);
    friend void QSignalTransition_TimerEvent(QSignalTransition* self, QTimerEvent* event);
    friend void QSignalTransition_SuperTimerEvent(QSignalTransition* self, QTimerEvent* event);
    friend void QSignalTransition_ChildEvent(QSignalTransition* self, QChildEvent* event);
    friend void QSignalTransition_SuperChildEvent(QSignalTransition* self, QChildEvent* event);
    friend void QSignalTransition_CustomEvent(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_SuperCustomEvent(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_ConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_SuperConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_DisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_SuperDisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend QObject* QSignalTransition_Sender(const QSignalTransition* self);
    friend QObject* QSignalTransition_SuperSender(const QSignalTransition* self);
    friend int QSignalTransition_SenderSignalIndex(const QSignalTransition* self);
    friend int QSignalTransition_SuperSenderSignalIndex(const QSignalTransition* self);
    friend int QSignalTransition_Receivers(const QSignalTransition* self, const char* signal);
    friend int QSignalTransition_SuperReceivers(const QSignalTransition* self, const char* signal);
    friend bool QSignalTransition_IsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal);
    friend bool QSignalTransition_SuperIsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal);
};

#endif
