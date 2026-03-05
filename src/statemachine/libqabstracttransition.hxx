#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQABSTRACTTRANSITION_H
#define SRC_STATEMACHINEC_LIBVIRTUALQABSTRACTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractTransition so that we can call protected methods
class VirtualQAbstractTransition : public QAbstractTransition {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractTransition = true;

    // Virtual class public types (including callbacks)
    using QAbstractTransition_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractTransition_Metacast_Callback = void* (*)(QAbstractTransition*, const char*);
    using QAbstractTransition_Metacall_Callback = int (*)(QAbstractTransition*, int, int, void**);
    using QAbstractTransition_EventTest_Callback = bool (*)(QAbstractTransition*, QEvent*);
    using QAbstractTransition_OnTransition_Callback = void (*)(QAbstractTransition*, QEvent*);
    using QAbstractTransition_Event_Callback = bool (*)(QAbstractTransition*, QEvent*);
    using QAbstractTransition_EventFilter_Callback = bool (*)(QAbstractTransition*, QObject*, QEvent*);
    using QAbstractTransition_TimerEvent_Callback = void (*)(QAbstractTransition*, QTimerEvent*);
    using QAbstractTransition_ChildEvent_Callback = void (*)(QAbstractTransition*, QChildEvent*);
    using QAbstractTransition_CustomEvent_Callback = void (*)(QAbstractTransition*, QEvent*);
    using QAbstractTransition_ConnectNotify_Callback = void (*)(QAbstractTransition*, QMetaMethod*);
    using QAbstractTransition_DisconnectNotify_Callback = void (*)(QAbstractTransition*, QMetaMethod*);
    using QAbstractTransition_Sender_Callback = QObject* (*)();
    using QAbstractTransition_SenderSignalIndex_Callback = int (*)();
    using QAbstractTransition_Receivers_Callback = int (*)(const QAbstractTransition*, const char*);
    using QAbstractTransition_IsSignalConnected_Callback = bool (*)(const QAbstractTransition*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractTransition_MetaObject_Callback qabstracttransition_metaobject_callback = nullptr;
    QAbstractTransition_Metacast_Callback qabstracttransition_metacast_callback = nullptr;
    QAbstractTransition_Metacall_Callback qabstracttransition_metacall_callback = nullptr;
    QAbstractTransition_EventTest_Callback qabstracttransition_eventtest_callback = nullptr;
    QAbstractTransition_OnTransition_Callback qabstracttransition_ontransition_callback = nullptr;
    QAbstractTransition_Event_Callback qabstracttransition_event_callback = nullptr;
    QAbstractTransition_EventFilter_Callback qabstracttransition_eventfilter_callback = nullptr;
    QAbstractTransition_TimerEvent_Callback qabstracttransition_timerevent_callback = nullptr;
    QAbstractTransition_ChildEvent_Callback qabstracttransition_childevent_callback = nullptr;
    QAbstractTransition_CustomEvent_Callback qabstracttransition_customevent_callback = nullptr;
    QAbstractTransition_ConnectNotify_Callback qabstracttransition_connectnotify_callback = nullptr;
    QAbstractTransition_DisconnectNotify_Callback qabstracttransition_disconnectnotify_callback = nullptr;
    QAbstractTransition_Sender_Callback qabstracttransition_sender_callback = nullptr;
    QAbstractTransition_SenderSignalIndex_Callback qabstracttransition_sendersignalindex_callback = nullptr;
    QAbstractTransition_Receivers_Callback qabstracttransition_receivers_callback = nullptr;
    QAbstractTransition_IsSignalConnected_Callback qabstracttransition_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstracttransition_metaobject_isbase = false;
    mutable bool qabstracttransition_metacast_isbase = false;
    mutable bool qabstracttransition_metacall_isbase = false;
    mutable bool qabstracttransition_eventtest_isbase = false;
    mutable bool qabstracttransition_ontransition_isbase = false;
    mutable bool qabstracttransition_event_isbase = false;
    mutable bool qabstracttransition_eventfilter_isbase = false;
    mutable bool qabstracttransition_timerevent_isbase = false;
    mutable bool qabstracttransition_childevent_isbase = false;
    mutable bool qabstracttransition_customevent_isbase = false;
    mutable bool qabstracttransition_connectnotify_isbase = false;
    mutable bool qabstracttransition_disconnectnotify_isbase = false;
    mutable bool qabstracttransition_sender_isbase = false;
    mutable bool qabstracttransition_sendersignalindex_isbase = false;
    mutable bool qabstracttransition_receivers_isbase = false;
    mutable bool qabstracttransition_issignalconnected_isbase = false;

  public:
    VirtualQAbstractTransition() : QAbstractTransition() {};
    VirtualQAbstractTransition(QState* sourceState) : QAbstractTransition(sourceState) {};

    // Callback setters
    inline void setQAbstractTransition_MetaObject_Callback(QAbstractTransition_MetaObject_Callback cb) { qabstracttransition_metaobject_callback = cb; }
    inline void setQAbstractTransition_Metacast_Callback(QAbstractTransition_Metacast_Callback cb) { qabstracttransition_metacast_callback = cb; }
    inline void setQAbstractTransition_Metacall_Callback(QAbstractTransition_Metacall_Callback cb) { qabstracttransition_metacall_callback = cb; }
    inline void setQAbstractTransition_EventTest_Callback(QAbstractTransition_EventTest_Callback cb) { qabstracttransition_eventtest_callback = cb; }
    inline void setQAbstractTransition_OnTransition_Callback(QAbstractTransition_OnTransition_Callback cb) { qabstracttransition_ontransition_callback = cb; }
    inline void setQAbstractTransition_Event_Callback(QAbstractTransition_Event_Callback cb) { qabstracttransition_event_callback = cb; }
    inline void setQAbstractTransition_EventFilter_Callback(QAbstractTransition_EventFilter_Callback cb) { qabstracttransition_eventfilter_callback = cb; }
    inline void setQAbstractTransition_TimerEvent_Callback(QAbstractTransition_TimerEvent_Callback cb) { qabstracttransition_timerevent_callback = cb; }
    inline void setQAbstractTransition_ChildEvent_Callback(QAbstractTransition_ChildEvent_Callback cb) { qabstracttransition_childevent_callback = cb; }
    inline void setQAbstractTransition_CustomEvent_Callback(QAbstractTransition_CustomEvent_Callback cb) { qabstracttransition_customevent_callback = cb; }
    inline void setQAbstractTransition_ConnectNotify_Callback(QAbstractTransition_ConnectNotify_Callback cb) { qabstracttransition_connectnotify_callback = cb; }
    inline void setQAbstractTransition_DisconnectNotify_Callback(QAbstractTransition_DisconnectNotify_Callback cb) { qabstracttransition_disconnectnotify_callback = cb; }
    inline void setQAbstractTransition_Sender_Callback(QAbstractTransition_Sender_Callback cb) { qabstracttransition_sender_callback = cb; }
    inline void setQAbstractTransition_SenderSignalIndex_Callback(QAbstractTransition_SenderSignalIndex_Callback cb) { qabstracttransition_sendersignalindex_callback = cb; }
    inline void setQAbstractTransition_Receivers_Callback(QAbstractTransition_Receivers_Callback cb) { qabstracttransition_receivers_callback = cb; }
    inline void setQAbstractTransition_IsSignalConnected_Callback(QAbstractTransition_IsSignalConnected_Callback cb) { qabstracttransition_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractTransition_MetaObject_IsBase(bool value) const { qabstracttransition_metaobject_isbase = value; }
    inline void setQAbstractTransition_Metacast_IsBase(bool value) const { qabstracttransition_metacast_isbase = value; }
    inline void setQAbstractTransition_Metacall_IsBase(bool value) const { qabstracttransition_metacall_isbase = value; }
    inline void setQAbstractTransition_EventTest_IsBase(bool value) const { qabstracttransition_eventtest_isbase = value; }
    inline void setQAbstractTransition_OnTransition_IsBase(bool value) const { qabstracttransition_ontransition_isbase = value; }
    inline void setQAbstractTransition_Event_IsBase(bool value) const { qabstracttransition_event_isbase = value; }
    inline void setQAbstractTransition_EventFilter_IsBase(bool value) const { qabstracttransition_eventfilter_isbase = value; }
    inline void setQAbstractTransition_TimerEvent_IsBase(bool value) const { qabstracttransition_timerevent_isbase = value; }
    inline void setQAbstractTransition_ChildEvent_IsBase(bool value) const { qabstracttransition_childevent_isbase = value; }
    inline void setQAbstractTransition_CustomEvent_IsBase(bool value) const { qabstracttransition_customevent_isbase = value; }
    inline void setQAbstractTransition_ConnectNotify_IsBase(bool value) const { qabstracttransition_connectnotify_isbase = value; }
    inline void setQAbstractTransition_DisconnectNotify_IsBase(bool value) const { qabstracttransition_disconnectnotify_isbase = value; }
    inline void setQAbstractTransition_Sender_IsBase(bool value) const { qabstracttransition_sender_isbase = value; }
    inline void setQAbstractTransition_SenderSignalIndex_IsBase(bool value) const { qabstracttransition_sendersignalindex_isbase = value; }
    inline void setQAbstractTransition_Receivers_IsBase(bool value) const { qabstracttransition_receivers_isbase = value; }
    inline void setQAbstractTransition_IsSignalConnected_IsBase(bool value) const { qabstracttransition_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstracttransition_metaobject_isbase) {
            qabstracttransition_metaobject_isbase = false;
            return QAbstractTransition::metaObject();
        }
        auto metaobject_cb = qabstracttransition_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstracttransition_metacast_isbase) {
            qabstracttransition_metacast_isbase = false;
            return QAbstractTransition::qt_metacast(param1);
        }
        auto metacast_cb = qabstracttransition_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstracttransition_metacall_isbase) {
            qabstracttransition_metacall_isbase = false;
            return QAbstractTransition::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstracttransition_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        auto eventtest_cb = qabstracttransition_eventtest_callback;
        if (eventtest_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = eventtest_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        auto ontransition_cb = qabstracttransition_ontransition_callback;
        if (ontransition_cb) {
            QEvent* cbval1 = event;

            ontransition_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qabstracttransition_event_isbase) {
            qabstracttransition_event_isbase = false;
            return QAbstractTransition::event(e);
        }
        auto event_cb = qabstracttransition_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstracttransition_eventfilter_isbase) {
            qabstracttransition_eventfilter_isbase = false;
            return QAbstractTransition::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstracttransition_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstracttransition_timerevent_isbase) {
            qabstracttransition_timerevent_isbase = false;
            QAbstractTransition::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstracttransition_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstracttransition_childevent_isbase) {
            qabstracttransition_childevent_isbase = false;
            QAbstractTransition::childEvent(event);
            return;
        }
        auto childevent_cb = qabstracttransition_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstracttransition_customevent_isbase) {
            qabstracttransition_customevent_isbase = false;
            QAbstractTransition::customEvent(event);
            return;
        }
        auto customevent_cb = qabstracttransition_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstracttransition_connectnotify_isbase) {
            qabstracttransition_connectnotify_isbase = false;
            QAbstractTransition::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstracttransition_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstracttransition_disconnectnotify_isbase) {
            qabstracttransition_disconnectnotify_isbase = false;
            QAbstractTransition::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstracttransition_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractTransition::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstracttransition_sender_isbase) {
            qabstracttransition_sender_isbase = false;
            return QAbstractTransition::sender();
        }
        auto sender_cb = qabstracttransition_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractTransition::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstracttransition_sendersignalindex_isbase) {
            qabstracttransition_sendersignalindex_isbase = false;
            return QAbstractTransition::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstracttransition_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractTransition::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstracttransition_receivers_isbase) {
            qabstracttransition_receivers_isbase = false;
            return QAbstractTransition::receivers(signal);
        }
        auto receivers_cb = qabstracttransition_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTransition::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstracttransition_issignalconnected_isbase) {
            qabstracttransition_issignalconnected_isbase = false;
            return QAbstractTransition::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstracttransition_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractTransition::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QAbstractTransition_EventTest(QAbstractTransition* self, QEvent* event);
    friend bool QAbstractTransition_SuperEventTest(QAbstractTransition* self, QEvent* event);
    friend void QAbstractTransition_OnTransition(QAbstractTransition* self, QEvent* event);
    friend void QAbstractTransition_SuperOnTransition(QAbstractTransition* self, QEvent* event);
    friend bool QAbstractTransition_Event(QAbstractTransition* self, QEvent* e);
    friend bool QAbstractTransition_SuperEvent(QAbstractTransition* self, QEvent* e);
    friend void QAbstractTransition_TimerEvent(QAbstractTransition* self, QTimerEvent* event);
    friend void QAbstractTransition_SuperTimerEvent(QAbstractTransition* self, QTimerEvent* event);
    friend void QAbstractTransition_ChildEvent(QAbstractTransition* self, QChildEvent* event);
    friend void QAbstractTransition_SuperChildEvent(QAbstractTransition* self, QChildEvent* event);
    friend void QAbstractTransition_CustomEvent(QAbstractTransition* self, QEvent* event);
    friend void QAbstractTransition_SuperCustomEvent(QAbstractTransition* self, QEvent* event);
    friend void QAbstractTransition_ConnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
    friend void QAbstractTransition_SuperConnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
    friend void QAbstractTransition_DisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
    friend void QAbstractTransition_SuperDisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
    friend QObject* QAbstractTransition_Sender(const QAbstractTransition* self);
    friend QObject* QAbstractTransition_SuperSender(const QAbstractTransition* self);
    friend int QAbstractTransition_SenderSignalIndex(const QAbstractTransition* self);
    friend int QAbstractTransition_SuperSenderSignalIndex(const QAbstractTransition* self);
    friend int QAbstractTransition_Receivers(const QAbstractTransition* self, const char* signal);
    friend int QAbstractTransition_SuperReceivers(const QAbstractTransition* self, const char* signal);
    friend bool QAbstractTransition_IsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal);
    friend bool QAbstractTransition_SuperIsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal);
};

#endif
