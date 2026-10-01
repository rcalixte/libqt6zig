#pragma once
#ifndef STATEMACHINE_LIBQEVENTTRANSITION_HXX
#define STATEMACHINE_LIBQEVENTTRANSITION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QEventTransition
class VirtualQEventTransition final : public QEventTransition {
  public:
    // Virtual class public types (including callbacks and access types)
    using QEventTransition_MetaObject_Callback = QMetaObject* (*)(const QEventTransition*);
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
    using QEventTransition::isSignalConnected;
    using QEventTransition::receivers;
    using QEventTransition::sender;
    using QEventTransition::senderSignalIndex;

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

    // Access struct
    struct Base : QEventTransition {
        using QEventTransition::childEvent;
        using QEventTransition::connectNotify;
        using QEventTransition::customEvent;
        using QEventTransition::disconnectNotify;
        using QEventTransition::event;
        using QEventTransition::eventTest;
        using QEventTransition::onTransition;
        using QEventTransition::timerEvent;
    };

    VirtualQEventTransition() : QEventTransition() {};
    VirtualQEventTransition(QObject* object, QEvent::Type typeVal) : QEventTransition(object, typeVal) {};
    VirtualQEventTransition(QState* sourceState) : QEventTransition(sourceState) {};
    VirtualQEventTransition(QObject* object, QEvent::Type typeVal, QState* sourceState) : QEventTransition(object, typeVal, sourceState) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qeventtransition_metaobject_callback) {
            QMetaObject* callback_ret = qeventtransition_metaobject_callback(this);
            return callback_ret;
        }
        return QEventTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qeventtransition_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qeventtransition_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QEventTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qeventtransition_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qeventtransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QEventTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qeventtransition_eventtest_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qeventtransition_eventtest_callback(this, cbval1);
            return callback_ret;
        }
        return QEventTransition::eventTest(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qeventtransition_ontransition_callback) {
            QEvent* cbval1 = event;
            qeventtransition_ontransition_callback(this, cbval1);
            return;
        }
        QEventTransition::onTransition(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qeventtransition_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qeventtransition_event_callback(this, cbval1);
            return callback_ret;
        }
        return QEventTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qeventtransition_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qeventtransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QEventTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qeventtransition_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qeventtransition_timerevent_callback(this, cbval1);
            return;
        }
        QEventTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qeventtransition_childevent_callback) {
            QChildEvent* cbval1 = event;
            qeventtransition_childevent_callback(this, cbval1);
            return;
        }
        QEventTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qeventtransition_customevent_callback) {
            QEvent* cbval1 = event;
            qeventtransition_customevent_callback(this, cbval1);
            return;
        }
        QEventTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qeventtransition_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qeventtransition_connectnotify_callback(this, cbval1);
            return;
        }
        QEventTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qeventtransition_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qeventtransition_disconnectnotify_callback(this, cbval1);
            return;
        }
        QEventTransition::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QEventTransition_SuperEventTest(QEventTransition* self, QEvent* event);
    friend void QEventTransition_SuperOnTransition(QEventTransition* self, QEvent* event);
    friend bool QEventTransition_SuperEvent(QEventTransition* self, QEvent* e);
    friend void QEventTransition_SuperTimerEvent(QEventTransition* self, QTimerEvent* event);
    friend void QEventTransition_SuperChildEvent(QEventTransition* self, QChildEvent* event);
    friend void QEventTransition_SuperCustomEvent(QEventTransition* self, QEvent* event);
    friend void QEventTransition_SuperConnectNotify(QEventTransition* self, const QMetaMethod* signal);
    friend void QEventTransition_SuperDisconnectNotify(QEventTransition* self, const QMetaMethod* signal);
};

#endif
