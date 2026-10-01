#pragma once
#ifndef STATEMACHINE_LIBQMOUSEEVENTTRANSITION_HXX
#define STATEMACHINE_LIBQMOUSEEVENTTRANSITION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMouseEventTransition
class VirtualQMouseEventTransition final : public QMouseEventTransition {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMouseEventTransition_MetaObject_Callback = QMetaObject* (*)(const QMouseEventTransition*);
    using QMouseEventTransition_Metacast_Callback = void* (*)(QMouseEventTransition*, const char*);
    using QMouseEventTransition_Metacall_Callback = int (*)(QMouseEventTransition*, int, int, void**);
    using QMouseEventTransition_OnTransition_Callback = void (*)(QMouseEventTransition*, QEvent*);
    using QMouseEventTransition_EventTest_Callback = bool (*)(QMouseEventTransition*, QEvent*);
    using QMouseEventTransition_Event_Callback = bool (*)(QMouseEventTransition*, QEvent*);
    using QMouseEventTransition_EventFilter_Callback = bool (*)(QMouseEventTransition*, QObject*, QEvent*);
    using QMouseEventTransition_TimerEvent_Callback = void (*)(QMouseEventTransition*, QTimerEvent*);
    using QMouseEventTransition_ChildEvent_Callback = void (*)(QMouseEventTransition*, QChildEvent*);
    using QMouseEventTransition_CustomEvent_Callback = void (*)(QMouseEventTransition*, QEvent*);
    using QMouseEventTransition_ConnectNotify_Callback = void (*)(QMouseEventTransition*, QMetaMethod*);
    using QMouseEventTransition_DisconnectNotify_Callback = void (*)(QMouseEventTransition*, QMetaMethod*);
    using QMouseEventTransition::isSignalConnected;
    using QMouseEventTransition::receivers;
    using QMouseEventTransition::sender;
    using QMouseEventTransition::senderSignalIndex;

    // Instance callback storage
    QMouseEventTransition_MetaObject_Callback qmouseeventtransition_metaobject_callback = nullptr;
    QMouseEventTransition_Metacast_Callback qmouseeventtransition_metacast_callback = nullptr;
    QMouseEventTransition_Metacall_Callback qmouseeventtransition_metacall_callback = nullptr;
    QMouseEventTransition_OnTransition_Callback qmouseeventtransition_ontransition_callback = nullptr;
    QMouseEventTransition_EventTest_Callback qmouseeventtransition_eventtest_callback = nullptr;
    QMouseEventTransition_Event_Callback qmouseeventtransition_event_callback = nullptr;
    QMouseEventTransition_EventFilter_Callback qmouseeventtransition_eventfilter_callback = nullptr;
    QMouseEventTransition_TimerEvent_Callback qmouseeventtransition_timerevent_callback = nullptr;
    QMouseEventTransition_ChildEvent_Callback qmouseeventtransition_childevent_callback = nullptr;
    QMouseEventTransition_CustomEvent_Callback qmouseeventtransition_customevent_callback = nullptr;
    QMouseEventTransition_ConnectNotify_Callback qmouseeventtransition_connectnotify_callback = nullptr;
    QMouseEventTransition_DisconnectNotify_Callback qmouseeventtransition_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMouseEventTransition {
        using QMouseEventTransition::childEvent;
        using QMouseEventTransition::connectNotify;
        using QMouseEventTransition::customEvent;
        using QMouseEventTransition::disconnectNotify;
        using QMouseEventTransition::event;
        using QMouseEventTransition::eventTest;
        using QMouseEventTransition::onTransition;
        using QMouseEventTransition::timerEvent;
    };

    VirtualQMouseEventTransition() : QMouseEventTransition() {};
    VirtualQMouseEventTransition(QObject* object, QEvent::Type typeVal, Qt::MouseButton button) : QMouseEventTransition(object, typeVal, button) {};
    VirtualQMouseEventTransition(QState* sourceState) : QMouseEventTransition(sourceState) {};
    VirtualQMouseEventTransition(QObject* object, QEvent::Type typeVal, Qt::MouseButton button, QState* sourceState) : QMouseEventTransition(object, typeVal, button, sourceState) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmouseeventtransition_metaobject_callback) {
            QMetaObject* callback_ret = qmouseeventtransition_metaobject_callback(this);
            return callback_ret;
        }
        return QMouseEventTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmouseeventtransition_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmouseeventtransition_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMouseEventTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmouseeventtransition_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmouseeventtransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMouseEventTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qmouseeventtransition_ontransition_callback) {
            QEvent* cbval1 = event;
            qmouseeventtransition_ontransition_callback(this, cbval1);
            return;
        }
        QMouseEventTransition::onTransition(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qmouseeventtransition_eventtest_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmouseeventtransition_eventtest_callback(this, cbval1);
            return callback_ret;
        }
        return QMouseEventTransition::eventTest(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qmouseeventtransition_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qmouseeventtransition_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMouseEventTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmouseeventtransition_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmouseeventtransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMouseEventTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmouseeventtransition_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmouseeventtransition_timerevent_callback(this, cbval1);
            return;
        }
        QMouseEventTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmouseeventtransition_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmouseeventtransition_childevent_callback(this, cbval1);
            return;
        }
        QMouseEventTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmouseeventtransition_customevent_callback) {
            QEvent* cbval1 = event;
            qmouseeventtransition_customevent_callback(this, cbval1);
            return;
        }
        QMouseEventTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmouseeventtransition_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmouseeventtransition_connectnotify_callback(this, cbval1);
            return;
        }
        QMouseEventTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmouseeventtransition_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmouseeventtransition_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMouseEventTransition::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMouseEventTransition_SuperOnTransition(QMouseEventTransition* self, QEvent* event);
    friend bool QMouseEventTransition_SuperEventTest(QMouseEventTransition* self, QEvent* event);
    friend bool QMouseEventTransition_SuperEvent(QMouseEventTransition* self, QEvent* e);
    friend void QMouseEventTransition_SuperTimerEvent(QMouseEventTransition* self, QTimerEvent* event);
    friend void QMouseEventTransition_SuperChildEvent(QMouseEventTransition* self, QChildEvent* event);
    friend void QMouseEventTransition_SuperCustomEvent(QMouseEventTransition* self, QEvent* event);
    friend void QMouseEventTransition_SuperConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal);
    friend void QMouseEventTransition_SuperDisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal);
};

#endif
