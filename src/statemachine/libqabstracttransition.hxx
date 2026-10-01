#pragma once
#ifndef STATEMACHINE_LIBQABSTRACTTRANSITION_HXX
#define STATEMACHINE_LIBQABSTRACTTRANSITION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractTransition
class VirtualQAbstractTransition : public QAbstractTransition {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractTransition_MetaObject_Callback = QMetaObject* (*)(const QAbstractTransition*);
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
    using QAbstractTransition::isSignalConnected;
    using QAbstractTransition::receivers;
    using QAbstractTransition::sender;
    using QAbstractTransition::senderSignalIndex;

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

    // Access struct
    struct Base : QAbstractTransition {
        using QAbstractTransition::childEvent;
        using QAbstractTransition::connectNotify;
        using QAbstractTransition::customEvent;
        using QAbstractTransition::disconnectNotify;
        using QAbstractTransition::event;
        using QAbstractTransition::eventTest;
        using QAbstractTransition::onTransition;
        using QAbstractTransition::timerEvent;
    };

    VirtualQAbstractTransition() : QAbstractTransition() {};
    VirtualQAbstractTransition(QState* sourceState) : QAbstractTransition(sourceState) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstracttransition_metaobject_callback) {
            QMetaObject* callback_ret = qabstracttransition_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstracttransition_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstracttransition_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstracttransition_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstracttransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qabstracttransition_eventtest_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstracttransition_eventtest_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTransition::eventTest called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qabstracttransition_ontransition_callback) {
            QEvent* cbval1 = event;
            qabstracttransition_ontransition_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTransition::onTransition called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qabstracttransition_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qabstracttransition_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstracttransition_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstracttransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstracttransition_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstracttransition_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstracttransition_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstracttransition_childevent_callback(this, cbval1);
            return;
        }
        QAbstractTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstracttransition_customevent_callback) {
            QEvent* cbval1 = event;
            qabstracttransition_customevent_callback(this, cbval1);
            return;
        }
        QAbstractTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstracttransition_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstracttransition_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstracttransition_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstracttransition_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractTransition::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAbstractTransition_SuperEvent(QAbstractTransition* self, QEvent* e);
    friend void QAbstractTransition_SuperTimerEvent(QAbstractTransition* self, QTimerEvent* event);
    friend void QAbstractTransition_SuperChildEvent(QAbstractTransition* self, QChildEvent* event);
    friend void QAbstractTransition_SuperCustomEvent(QAbstractTransition* self, QEvent* event);
    friend void QAbstractTransition_SuperConnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
    friend void QAbstractTransition_SuperDisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal);
};

#endif
