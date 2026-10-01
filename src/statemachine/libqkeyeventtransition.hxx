#pragma once
#ifndef STATEMACHINE_LIBQKEYEVENTTRANSITION_HXX
#define STATEMACHINE_LIBQKEYEVENTTRANSITION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QKeyEventTransition
class VirtualQKeyEventTransition final : public QKeyEventTransition {
  public:
    // Virtual class public types (including callbacks and access types)
    using QKeyEventTransition_MetaObject_Callback = QMetaObject* (*)(const QKeyEventTransition*);
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
    using QKeyEventTransition::isSignalConnected;
    using QKeyEventTransition::receivers;
    using QKeyEventTransition::sender;
    using QKeyEventTransition::senderSignalIndex;

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

    // Access struct
    struct Base : QKeyEventTransition {
        using QKeyEventTransition::childEvent;
        using QKeyEventTransition::connectNotify;
        using QKeyEventTransition::customEvent;
        using QKeyEventTransition::disconnectNotify;
        using QKeyEventTransition::event;
        using QKeyEventTransition::eventTest;
        using QKeyEventTransition::onTransition;
        using QKeyEventTransition::timerEvent;
    };

    VirtualQKeyEventTransition() : QKeyEventTransition() {};
    VirtualQKeyEventTransition(QObject* object, QEvent::Type typeVal, int key) : QKeyEventTransition(object, typeVal, key) {};
    VirtualQKeyEventTransition(QState* sourceState) : QKeyEventTransition(sourceState) {};
    VirtualQKeyEventTransition(QObject* object, QEvent::Type typeVal, int key, QState* sourceState) : QKeyEventTransition(object, typeVal, key, sourceState) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeyeventtransition_metaobject_callback) {
            QMetaObject* callback_ret = qkeyeventtransition_metaobject_callback(this);
            return callback_ret;
        }
        return QKeyEventTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeyeventtransition_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qkeyeventtransition_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeyeventtransition_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qkeyeventtransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeyEventTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qkeyeventtransition_ontransition_callback) {
            QEvent* cbval1 = event;
            qkeyeventtransition_ontransition_callback(this, cbval1);
            return;
        }
        QKeyEventTransition::onTransition(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qkeyeventtransition_eventtest_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qkeyeventtransition_eventtest_callback(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::eventTest(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qkeyeventtransition_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qkeyeventtransition_event_callback(this, cbval1);
            return callback_ret;
        }
        return QKeyEventTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeyeventtransition_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qkeyeventtransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeyEventTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeyeventtransition_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qkeyeventtransition_timerevent_callback(this, cbval1);
            return;
        }
        QKeyEventTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeyeventtransition_childevent_callback) {
            QChildEvent* cbval1 = event;
            qkeyeventtransition_childevent_callback(this, cbval1);
            return;
        }
        QKeyEventTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeyeventtransition_customevent_callback) {
            QEvent* cbval1 = event;
            qkeyeventtransition_customevent_callback(this, cbval1);
            return;
        }
        QKeyEventTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeyeventtransition_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeyeventtransition_connectnotify_callback(this, cbval1);
            return;
        }
        QKeyEventTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeyeventtransition_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeyeventtransition_disconnectnotify_callback(this, cbval1);
            return;
        }
        QKeyEventTransition::disconnectNotify(signal);
    }

    // Friend functions
    friend void QKeyEventTransition_SuperOnTransition(QKeyEventTransition* self, QEvent* event);
    friend bool QKeyEventTransition_SuperEventTest(QKeyEventTransition* self, QEvent* event);
    friend bool QKeyEventTransition_SuperEvent(QKeyEventTransition* self, QEvent* e);
    friend void QKeyEventTransition_SuperTimerEvent(QKeyEventTransition* self, QTimerEvent* event);
    friend void QKeyEventTransition_SuperChildEvent(QKeyEventTransition* self, QChildEvent* event);
    friend void QKeyEventTransition_SuperCustomEvent(QKeyEventTransition* self, QEvent* event);
    friend void QKeyEventTransition_SuperConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
    friend void QKeyEventTransition_SuperDisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal);
};

#endif
