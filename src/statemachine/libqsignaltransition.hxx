#pragma once
#ifndef STATEMACHINE_LIBQSIGNALTRANSITION_HXX
#define STATEMACHINE_LIBQSIGNALTRANSITION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSignalTransition
class VirtualQSignalTransition final : public QSignalTransition {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSignalTransition_MetaObject_Callback = QMetaObject* (*)(const QSignalTransition*);
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
    using QSignalTransition::isSignalConnected;
    using QSignalTransition::receivers;
    using QSignalTransition::sender;
    using QSignalTransition::senderSignalIndex;

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

    // Access struct
    struct Base : QSignalTransition {
        using QSignalTransition::childEvent;
        using QSignalTransition::connectNotify;
        using QSignalTransition::customEvent;
        using QSignalTransition::disconnectNotify;
        using QSignalTransition::event;
        using QSignalTransition::eventTest;
        using QSignalTransition::onTransition;
        using QSignalTransition::timerEvent;
    };

    VirtualQSignalTransition() : QSignalTransition() {};
    VirtualQSignalTransition(const QObject* sender, const char* signal) : QSignalTransition(sender, signal) {};
    VirtualQSignalTransition(QState* sourceState) : QSignalTransition(sourceState) {};
    VirtualQSignalTransition(const QObject* sender, const char* signal, QState* sourceState) : QSignalTransition(sender, signal, sourceState) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsignaltransition_metaobject_callback) {
            QMetaObject* callback_ret = qsignaltransition_metaobject_callback(this);
            return callback_ret;
        }
        return QSignalTransition::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsignaltransition_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsignaltransition_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsignaltransition_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsignaltransition_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSignalTransition::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventTest(QEvent* event) override {
        if (qsignaltransition_eventtest_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsignaltransition_eventtest_callback(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::eventTest(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onTransition(QEvent* event) override {
        if (qsignaltransition_ontransition_callback) {
            QEvent* cbval1 = event;
            qsignaltransition_ontransition_callback(this, cbval1);
            return;
        }
        QSignalTransition::onTransition(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsignaltransition_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qsignaltransition_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSignalTransition::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsignaltransition_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsignaltransition_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSignalTransition::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsignaltransition_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsignaltransition_timerevent_callback(this, cbval1);
            return;
        }
        QSignalTransition::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsignaltransition_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsignaltransition_childevent_callback(this, cbval1);
            return;
        }
        QSignalTransition::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsignaltransition_customevent_callback) {
            QEvent* cbval1 = event;
            qsignaltransition_customevent_callback(this, cbval1);
            return;
        }
        QSignalTransition::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsignaltransition_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsignaltransition_connectnotify_callback(this, cbval1);
            return;
        }
        QSignalTransition::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsignaltransition_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsignaltransition_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSignalTransition::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSignalTransition_SuperEventTest(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_SuperOnTransition(QSignalTransition* self, QEvent* event);
    friend bool QSignalTransition_SuperEvent(QSignalTransition* self, QEvent* e);
    friend void QSignalTransition_SuperTimerEvent(QSignalTransition* self, QTimerEvent* event);
    friend void QSignalTransition_SuperChildEvent(QSignalTransition* self, QChildEvent* event);
    friend void QSignalTransition_SuperCustomEvent(QSignalTransition* self, QEvent* event);
    friend void QSignalTransition_SuperConnectNotify(QSignalTransition* self, const QMetaMethod* signal);
    friend void QSignalTransition_SuperDisconnectNotify(QSignalTransition* self, const QMetaMethod* signal);
};

#endif
