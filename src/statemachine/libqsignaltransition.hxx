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

    ~VirtualQSignalTransition() {
        qsignaltransition_metaobject_callback = nullptr;
        qsignaltransition_metacast_callback = nullptr;
        qsignaltransition_metacall_callback = nullptr;
        qsignaltransition_eventtest_callback = nullptr;
        qsignaltransition_ontransition_callback = nullptr;
        qsignaltransition_event_callback = nullptr;
        qsignaltransition_eventfilter_callback = nullptr;
        qsignaltransition_timerevent_callback = nullptr;
        qsignaltransition_childevent_callback = nullptr;
        qsignaltransition_customevent_callback = nullptr;
        qsignaltransition_connectnotify_callback = nullptr;
        qsignaltransition_disconnectnotify_callback = nullptr;
        qsignaltransition_sender_callback = nullptr;
        qsignaltransition_sendersignalindex_callback = nullptr;
        qsignaltransition_receivers_callback = nullptr;
        qsignaltransition_issignalconnected_callback = nullptr;
    }

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
        } else if (qsignaltransition_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qsignaltransition_metaobject_callback();
            return callback_ret;
        } else {
            return QSignalTransition::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsignaltransition_metacast_isbase) {
            qsignaltransition_metacast_isbase = false;
            return QSignalTransition::qt_metacast(param1);
        } else if (qsignaltransition_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qsignaltransition_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSignalTransition::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsignaltransition_metacall_isbase) {
            qsignaltransition_metacall_isbase = false;
            return QSignalTransition::qt_metacall(param1, param2, param3);
        } else if (qsignaltransition_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsignaltransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSignalTransition::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qsignaltransition_eventtest_isbase) {
            qsignaltransition_eventtest_isbase = false;
            return QSignalTransition::eventTest(event);
        } else if (qsignaltransition_eventtest_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsignaltransition_eventtest_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSignalTransition::eventTest(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qsignaltransition_ontransition_isbase) {
            qsignaltransition_ontransition_isbase = false;
            QSignalTransition::onTransition(event);
        } else if (qsignaltransition_ontransition_callback != nullptr) {
            QEvent* cbval1 = event;

            qsignaltransition_ontransition_callback(this, cbval1);
        } else {
            QSignalTransition::onTransition(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsignaltransition_event_isbase) {
            qsignaltransition_event_isbase = false;
            return QSignalTransition::event(e);
        } else if (qsignaltransition_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qsignaltransition_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSignalTransition::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsignaltransition_eventfilter_isbase) {
            qsignaltransition_eventfilter_isbase = false;
            return QSignalTransition::eventFilter(watched, event);
        } else if (qsignaltransition_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsignaltransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSignalTransition::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsignaltransition_timerevent_isbase) {
            qsignaltransition_timerevent_isbase = false;
            QSignalTransition::timerEvent(event);
        } else if (qsignaltransition_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsignaltransition_timerevent_callback(this, cbval1);
        } else {
            QSignalTransition::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsignaltransition_childevent_isbase) {
            qsignaltransition_childevent_isbase = false;
            QSignalTransition::childEvent(event);
        } else if (qsignaltransition_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsignaltransition_childevent_callback(this, cbval1);
        } else {
            QSignalTransition::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsignaltransition_customevent_isbase) {
            qsignaltransition_customevent_isbase = false;
            QSignalTransition::customEvent(event);
        } else if (qsignaltransition_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsignaltransition_customevent_callback(this, cbval1);
        } else {
            QSignalTransition::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsignaltransition_connectnotify_isbase) {
            qsignaltransition_connectnotify_isbase = false;
            QSignalTransition::connectNotify(signal);
        } else if (qsignaltransition_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsignaltransition_connectnotify_callback(this, cbval1);
        } else {
            QSignalTransition::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsignaltransition_disconnectnotify_isbase) {
            qsignaltransition_disconnectnotify_isbase = false;
            QSignalTransition::disconnectNotify(signal);
        } else if (qsignaltransition_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsignaltransition_disconnectnotify_callback(this, cbval1);
        } else {
            QSignalTransition::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsignaltransition_sender_isbase) {
            qsignaltransition_sender_isbase = false;
            return QSignalTransition::sender();
        } else if (qsignaltransition_sender_callback != nullptr) {
            QObject* callback_ret = qsignaltransition_sender_callback();
            return callback_ret;
        } else {
            return QSignalTransition::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsignaltransition_sendersignalindex_isbase) {
            qsignaltransition_sendersignalindex_isbase = false;
            return QSignalTransition::senderSignalIndex();
        } else if (qsignaltransition_sendersignalindex_callback != nullptr) {
            int callback_ret = qsignaltransition_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSignalTransition::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsignaltransition_receivers_isbase) {
            qsignaltransition_receivers_isbase = false;
            return QSignalTransition::receivers(signal);
        } else if (qsignaltransition_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsignaltransition_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSignalTransition::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsignaltransition_issignalconnected_isbase) {
            qsignaltransition_issignalconnected_isbase = false;
            return QSignalTransition::isSignalConnected(signal);
        } else if (qsignaltransition_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsignaltransition_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSignalTransition::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event);
    friend bool QSignalTransition_QBaseEventTest(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_QBaseOnTransition(QSignalTransition* self, QEvent* event);
    friend bool QSignalTransition_Event(QSignalTransition* self, QEvent* e);
    friend bool QSignalTransition_QBaseEvent(QSignalTransition* self, QEvent* e);
    friend void QSignalTransition_TimerEvent(QSignalTransition* self, QTimerEvent* event);
    friend void QSignalTransition_QBaseTimerEvent(QSignalTransition* self, QTimerEvent* event);
    friend void QSignalTransition_ChildEvent(QSignalTransition* self, QChildEvent* event);
    friend void QSignalTransition_QBaseChildEvent(QSignalTransition* self, QChildEvent* event);
    friend void QSignalTransition_CustomEvent(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_QBaseCustomEvent(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_ConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_QBaseConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_DisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_QBaseDisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend QObject* QSignalTransition_Sender(const QSignalTransition* self);
    friend QObject* QSignalTransition_QBaseSender(const QSignalTransition* self);
    friend int QSignalTransition_SenderSignalIndex(const QSignalTransition* self);
    friend int QSignalTransition_QBaseSenderSignalIndex(const QSignalTransition* self);
    friend int QSignalTransition_Receivers(const QSignalTransition* self, const char* signal);
    friend int QSignalTransition_QBaseReceivers(const QSignalTransition* self, const char* signal);
    friend bool QSignalTransition_IsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal);
    friend bool QSignalTransition_QBaseIsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal);
};

#endif
