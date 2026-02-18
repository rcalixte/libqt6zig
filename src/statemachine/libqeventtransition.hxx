#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQEVENTTRANSITION_H
#define SRC_STATEMACHINEC_LIBVIRTUALQEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QEventTransition so that we can call protected methods
class VirtualQEventTransition final : public QEventTransition {

  public:
    // Virtual class boolean flag
    bool isVirtualQEventTransition = true;

    // Virtual class public types (including callbacks)
    using QEventTransition_MetaObject_Callback = QMetaObject* (*)();
    using QEventTransition_Metacast_Callback = void* (*)(QEventTransition*, const char*);
    using QEventTransition_Metacall_Callback = int (*)(QEventTransition*, int, int, void**);
    using QEventTransition_EventTest_Callback = bool (*)(QEventTransition*, QEvent*);
    using QEventTransition_OnTransition_Callback = void (*)(QEventTransition*, QEvent*);
    using QEventTransition_Event_Callback = bool (*)(QEventTransition*, QEvent*);
    using QEventTransition_EventFilter_Callback = bool (*)(QEventTransition*, QObject*, QEvent*);
    using QEventTransition_TimerEvent_Callback = void (*)(QEventTransition*, QTimerEvent*);
    using QEventTransition_ChildEvent_Callback = void (*)(QEventTransition*, QChildEvent*);
    using QEventTransition_CustomEvent_Callback = void (*)(QEventTransition*, QEvent*);
    using QEventTransition_ConnectNotify_Callback = void (*)(QEventTransition*, QMetaMethod*);
    using QEventTransition_DisconnectNotify_Callback = void (*)(QEventTransition*, QMetaMethod*);
    using QEventTransition_Sender_Callback = QObject* (*)();
    using QEventTransition_SenderSignalIndex_Callback = int (*)();
    using QEventTransition_Receivers_Callback = int (*)(const QEventTransition*, const char*);
    using QEventTransition_IsSignalConnected_Callback = bool (*)(const QEventTransition*, QMetaMethod*);

  protected:
    // Instance callback storage
    QEventTransition_MetaObject_Callback qeventtransition_metaobject_callback = nullptr;
    QEventTransition_Metacast_Callback qeventtransition_metacast_callback = nullptr;
    QEventTransition_Metacall_Callback qeventtransition_metacall_callback = nullptr;
    QEventTransition_EventTest_Callback qeventtransition_eventtest_callback = nullptr;
    QEventTransition_OnTransition_Callback qeventtransition_ontransition_callback = nullptr;
    QEventTransition_Event_Callback qeventtransition_event_callback = nullptr;
    QEventTransition_EventFilter_Callback qeventtransition_eventfilter_callback = nullptr;
    QEventTransition_TimerEvent_Callback qeventtransition_timerevent_callback = nullptr;
    QEventTransition_ChildEvent_Callback qeventtransition_childevent_callback = nullptr;
    QEventTransition_CustomEvent_Callback qeventtransition_customevent_callback = nullptr;
    QEventTransition_ConnectNotify_Callback qeventtransition_connectnotify_callback = nullptr;
    QEventTransition_DisconnectNotify_Callback qeventtransition_disconnectnotify_callback = nullptr;
    QEventTransition_Sender_Callback qeventtransition_sender_callback = nullptr;
    QEventTransition_SenderSignalIndex_Callback qeventtransition_sendersignalindex_callback = nullptr;
    QEventTransition_Receivers_Callback qeventtransition_receivers_callback = nullptr;
    QEventTransition_IsSignalConnected_Callback qeventtransition_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qeventtransition_metaobject_isbase = false;
    mutable bool qeventtransition_metacast_isbase = false;
    mutable bool qeventtransition_metacall_isbase = false;
    mutable bool qeventtransition_eventtest_isbase = false;
    mutable bool qeventtransition_ontransition_isbase = false;
    mutable bool qeventtransition_event_isbase = false;
    mutable bool qeventtransition_eventfilter_isbase = false;
    mutable bool qeventtransition_timerevent_isbase = false;
    mutable bool qeventtransition_childevent_isbase = false;
    mutable bool qeventtransition_customevent_isbase = false;
    mutable bool qeventtransition_connectnotify_isbase = false;
    mutable bool qeventtransition_disconnectnotify_isbase = false;
    mutable bool qeventtransition_sender_isbase = false;
    mutable bool qeventtransition_sendersignalindex_isbase = false;
    mutable bool qeventtransition_receivers_isbase = false;
    mutable bool qeventtransition_issignalconnected_isbase = false;

  public:
    VirtualQEventTransition() : QEventTransition() {};
    VirtualQEventTransition(QObject* object, QEvent::Type typeVal) : QEventTransition(object, typeVal) {};
    VirtualQEventTransition(QState* sourceState) : QEventTransition(sourceState) {};
    VirtualQEventTransition(QObject* object, QEvent::Type typeVal, QState* sourceState) : QEventTransition(object, typeVal, sourceState) {};

    ~VirtualQEventTransition() {
        qeventtransition_metaobject_callback = nullptr;
        qeventtransition_metacast_callback = nullptr;
        qeventtransition_metacall_callback = nullptr;
        qeventtransition_eventtest_callback = nullptr;
        qeventtransition_ontransition_callback = nullptr;
        qeventtransition_event_callback = nullptr;
        qeventtransition_eventfilter_callback = nullptr;
        qeventtransition_timerevent_callback = nullptr;
        qeventtransition_childevent_callback = nullptr;
        qeventtransition_customevent_callback = nullptr;
        qeventtransition_connectnotify_callback = nullptr;
        qeventtransition_disconnectnotify_callback = nullptr;
        qeventtransition_sender_callback = nullptr;
        qeventtransition_sendersignalindex_callback = nullptr;
        qeventtransition_receivers_callback = nullptr;
        qeventtransition_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQEventTransition_MetaObject_Callback(QEventTransition_MetaObject_Callback cb) { qeventtransition_metaobject_callback = cb; }
    inline void setQEventTransition_Metacast_Callback(QEventTransition_Metacast_Callback cb) { qeventtransition_metacast_callback = cb; }
    inline void setQEventTransition_Metacall_Callback(QEventTransition_Metacall_Callback cb) { qeventtransition_metacall_callback = cb; }
    inline void setQEventTransition_EventTest_Callback(QEventTransition_EventTest_Callback cb) { qeventtransition_eventtest_callback = cb; }
    inline void setQEventTransition_OnTransition_Callback(QEventTransition_OnTransition_Callback cb) { qeventtransition_ontransition_callback = cb; }
    inline void setQEventTransition_Event_Callback(QEventTransition_Event_Callback cb) { qeventtransition_event_callback = cb; }
    inline void setQEventTransition_EventFilter_Callback(QEventTransition_EventFilter_Callback cb) { qeventtransition_eventfilter_callback = cb; }
    inline void setQEventTransition_TimerEvent_Callback(QEventTransition_TimerEvent_Callback cb) { qeventtransition_timerevent_callback = cb; }
    inline void setQEventTransition_ChildEvent_Callback(QEventTransition_ChildEvent_Callback cb) { qeventtransition_childevent_callback = cb; }
    inline void setQEventTransition_CustomEvent_Callback(QEventTransition_CustomEvent_Callback cb) { qeventtransition_customevent_callback = cb; }
    inline void setQEventTransition_ConnectNotify_Callback(QEventTransition_ConnectNotify_Callback cb) { qeventtransition_connectnotify_callback = cb; }
    inline void setQEventTransition_DisconnectNotify_Callback(QEventTransition_DisconnectNotify_Callback cb) { qeventtransition_disconnectnotify_callback = cb; }
    inline void setQEventTransition_Sender_Callback(QEventTransition_Sender_Callback cb) { qeventtransition_sender_callback = cb; }
    inline void setQEventTransition_SenderSignalIndex_Callback(QEventTransition_SenderSignalIndex_Callback cb) { qeventtransition_sendersignalindex_callback = cb; }
    inline void setQEventTransition_Receivers_Callback(QEventTransition_Receivers_Callback cb) { qeventtransition_receivers_callback = cb; }
    inline void setQEventTransition_IsSignalConnected_Callback(QEventTransition_IsSignalConnected_Callback cb) { qeventtransition_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQEventTransition_MetaObject_IsBase(bool value) const { qeventtransition_metaobject_isbase = value; }
    inline void setQEventTransition_Metacast_IsBase(bool value) const { qeventtransition_metacast_isbase = value; }
    inline void setQEventTransition_Metacall_IsBase(bool value) const { qeventtransition_metacall_isbase = value; }
    inline void setQEventTransition_EventTest_IsBase(bool value) const { qeventtransition_eventtest_isbase = value; }
    inline void setQEventTransition_OnTransition_IsBase(bool value) const { qeventtransition_ontransition_isbase = value; }
    inline void setQEventTransition_Event_IsBase(bool value) const { qeventtransition_event_isbase = value; }
    inline void setQEventTransition_EventFilter_IsBase(bool value) const { qeventtransition_eventfilter_isbase = value; }
    inline void setQEventTransition_TimerEvent_IsBase(bool value) const { qeventtransition_timerevent_isbase = value; }
    inline void setQEventTransition_ChildEvent_IsBase(bool value) const { qeventtransition_childevent_isbase = value; }
    inline void setQEventTransition_CustomEvent_IsBase(bool value) const { qeventtransition_customevent_isbase = value; }
    inline void setQEventTransition_ConnectNotify_IsBase(bool value) const { qeventtransition_connectnotify_isbase = value; }
    inline void setQEventTransition_DisconnectNotify_IsBase(bool value) const { qeventtransition_disconnectnotify_isbase = value; }
    inline void setQEventTransition_Sender_IsBase(bool value) const { qeventtransition_sender_isbase = value; }
    inline void setQEventTransition_SenderSignalIndex_IsBase(bool value) const { qeventtransition_sendersignalindex_isbase = value; }
    inline void setQEventTransition_Receivers_IsBase(bool value) const { qeventtransition_receivers_isbase = value; }
    inline void setQEventTransition_IsSignalConnected_IsBase(bool value) const { qeventtransition_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qeventtransition_metaobject_isbase) {
            qeventtransition_metaobject_isbase = false;
            return QEventTransition::metaObject();
        } else if (qeventtransition_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qeventtransition_metaobject_callback();
            return callback_ret;
        } else {
            return QEventTransition::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qeventtransition_metacast_isbase) {
            qeventtransition_metacast_isbase = false;
            return QEventTransition::qt_metacast(param1);
        } else if (qeventtransition_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qeventtransition_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QEventTransition::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qeventtransition_metacall_isbase) {
            qeventtransition_metacall_isbase = false;
            return QEventTransition::qt_metacall(param1, param2, param3);
        } else if (qeventtransition_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qeventtransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QEventTransition::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qeventtransition_eventtest_isbase) {
            qeventtransition_eventtest_isbase = false;
            return QEventTransition::eventTest(event);
        } else if (qeventtransition_eventtest_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qeventtransition_eventtest_callback(this, cbval1);
            return callback_ret;
        } else {
            return QEventTransition::eventTest(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qeventtransition_ontransition_isbase) {
            qeventtransition_ontransition_isbase = false;
            QEventTransition::onTransition(event);
        } else if (qeventtransition_ontransition_callback != nullptr) {
            QEvent* cbval1 = event;

            qeventtransition_ontransition_callback(this, cbval1);
        } else {
            QEventTransition::onTransition(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qeventtransition_event_isbase) {
            qeventtransition_event_isbase = false;
            return QEventTransition::event(e);
        } else if (qeventtransition_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qeventtransition_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QEventTransition::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qeventtransition_eventfilter_isbase) {
            qeventtransition_eventfilter_isbase = false;
            return QEventTransition::eventFilter(watched, event);
        } else if (qeventtransition_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qeventtransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QEventTransition::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qeventtransition_timerevent_isbase) {
            qeventtransition_timerevent_isbase = false;
            QEventTransition::timerEvent(event);
        } else if (qeventtransition_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qeventtransition_timerevent_callback(this, cbval1);
        } else {
            QEventTransition::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qeventtransition_childevent_isbase) {
            qeventtransition_childevent_isbase = false;
            QEventTransition::childEvent(event);
        } else if (qeventtransition_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qeventtransition_childevent_callback(this, cbval1);
        } else {
            QEventTransition::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qeventtransition_customevent_isbase) {
            qeventtransition_customevent_isbase = false;
            QEventTransition::customEvent(event);
        } else if (qeventtransition_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qeventtransition_customevent_callback(this, cbval1);
        } else {
            QEventTransition::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qeventtransition_connectnotify_isbase) {
            qeventtransition_connectnotify_isbase = false;
            QEventTransition::connectNotify(signal);
        } else if (qeventtransition_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qeventtransition_connectnotify_callback(this, cbval1);
        } else {
            QEventTransition::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qeventtransition_disconnectnotify_isbase) {
            qeventtransition_disconnectnotify_isbase = false;
            QEventTransition::disconnectNotify(signal);
        } else if (qeventtransition_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qeventtransition_disconnectnotify_callback(this, cbval1);
        } else {
            QEventTransition::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qeventtransition_sender_isbase) {
            qeventtransition_sender_isbase = false;
            return QEventTransition::sender();
        } else if (qeventtransition_sender_callback != nullptr) {
            QObject* callback_ret = qeventtransition_sender_callback();
            return callback_ret;
        } else {
            return QEventTransition::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qeventtransition_sendersignalindex_isbase) {
            qeventtransition_sendersignalindex_isbase = false;
            return QEventTransition::senderSignalIndex();
        } else if (qeventtransition_sendersignalindex_callback != nullptr) {
            int callback_ret = qeventtransition_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QEventTransition::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qeventtransition_receivers_isbase) {
            qeventtransition_receivers_isbase = false;
            return QEventTransition::receivers(signal);
        } else if (qeventtransition_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qeventtransition_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QEventTransition::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qeventtransition_issignalconnected_isbase) {
            qeventtransition_issignalconnected_isbase = false;
            return QEventTransition::isSignalConnected(signal);
        } else if (qeventtransition_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qeventtransition_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QEventTransition::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QEventTransition_EventTest(QEventTransition* self, QEvent* event);
    friend bool QEventTransition_QBaseEventTest(QEventTransition* self, QEvent* event);
    friend void QEventTransition_OnTransition(QEventTransition* self, QEvent* event);
    friend void QEventTransition_QBaseOnTransition(QEventTransition* self, QEvent* event);
    friend bool QEventTransition_Event(QEventTransition* self, QEvent* e);
    friend bool QEventTransition_QBaseEvent(QEventTransition* self, QEvent* e);
    friend void QEventTransition_TimerEvent(QEventTransition* self, QTimerEvent* event);
    friend void QEventTransition_QBaseTimerEvent(QEventTransition* self, QTimerEvent* event);
    friend void QEventTransition_ChildEvent(QEventTransition* self, QChildEvent* event);
    friend void QEventTransition_QBaseChildEvent(QEventTransition* self, QChildEvent* event);
    friend void QEventTransition_CustomEvent(QEventTransition* self, QEvent* event);
    friend void QEventTransition_QBaseCustomEvent(QEventTransition* self, QEvent* event);
    friend void QEventTransition_ConnectNotify(QEventTransition* self, const QMetaMethod* signal);
    friend void QEventTransition_QBaseConnectNotify(QEventTransition* self, const QMetaMethod* signal);
    friend void QEventTransition_DisconnectNotify(QEventTransition* self, const QMetaMethod* signal);
    friend void QEventTransition_QBaseDisconnectNotify(QEventTransition* self, const QMetaMethod* signal);
    friend QObject* QEventTransition_Sender(const QEventTransition* self);
    friend QObject* QEventTransition_QBaseSender(const QEventTransition* self);
    friend int QEventTransition_SenderSignalIndex(const QEventTransition* self);
    friend int QEventTransition_QBaseSenderSignalIndex(const QEventTransition* self);
    friend int QEventTransition_Receivers(const QEventTransition* self, const char* signal);
    friend int QEventTransition_QBaseReceivers(const QEventTransition* self, const char* signal);
    friend bool QEventTransition_IsSignalConnected(const QEventTransition* self, const QMetaMethod* signal);
    friend bool QEventTransition_QBaseIsSignalConnected(const QEventTransition* self, const QMetaMethod* signal);
};

#endif
