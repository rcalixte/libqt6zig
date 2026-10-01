#pragma once
#ifndef STATEMACHINE_LIBQFINALSTATE_HXX
#define STATEMACHINE_LIBQFINALSTATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QFinalState
class VirtualQFinalState final : public QFinalState {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFinalState_MetaObject_Callback = QMetaObject* (*)(const QFinalState*);
    using QFinalState_Metacast_Callback = void* (*)(QFinalState*, const char*);
    using QFinalState_Metacall_Callback = int (*)(QFinalState*, int, int, void**);
    using QFinalState_OnEntry_Callback = void (*)(QFinalState*, QEvent*);
    using QFinalState_OnExit_Callback = void (*)(QFinalState*, QEvent*);
    using QFinalState_Event_Callback = bool (*)(QFinalState*, QEvent*);
    using QFinalState_EventFilter_Callback = bool (*)(QFinalState*, QObject*, QEvent*);
    using QFinalState_TimerEvent_Callback = void (*)(QFinalState*, QTimerEvent*);
    using QFinalState_ChildEvent_Callback = void (*)(QFinalState*, QChildEvent*);
    using QFinalState_CustomEvent_Callback = void (*)(QFinalState*, QEvent*);
    using QFinalState_ConnectNotify_Callback = void (*)(QFinalState*, QMetaMethod*);
    using QFinalState_DisconnectNotify_Callback = void (*)(QFinalState*, QMetaMethod*);
    using QFinalState::isSignalConnected;
    using QFinalState::receivers;
    using QFinalState::sender;
    using QFinalState::senderSignalIndex;

    // Instance callback storage
    QFinalState_MetaObject_Callback qfinalstate_metaobject_callback = nullptr;
    QFinalState_Metacast_Callback qfinalstate_metacast_callback = nullptr;
    QFinalState_Metacall_Callback qfinalstate_metacall_callback = nullptr;
    QFinalState_OnEntry_Callback qfinalstate_onentry_callback = nullptr;
    QFinalState_OnExit_Callback qfinalstate_onexit_callback = nullptr;
    QFinalState_Event_Callback qfinalstate_event_callback = nullptr;
    QFinalState_EventFilter_Callback qfinalstate_eventfilter_callback = nullptr;
    QFinalState_TimerEvent_Callback qfinalstate_timerevent_callback = nullptr;
    QFinalState_ChildEvent_Callback qfinalstate_childevent_callback = nullptr;
    QFinalState_CustomEvent_Callback qfinalstate_customevent_callback = nullptr;
    QFinalState_ConnectNotify_Callback qfinalstate_connectnotify_callback = nullptr;
    QFinalState_DisconnectNotify_Callback qfinalstate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFinalState {
        using QFinalState::childEvent;
        using QFinalState::connectNotify;
        using QFinalState::customEvent;
        using QFinalState::disconnectNotify;
        using QFinalState::event;
        using QFinalState::onEntry;
        using QFinalState::onExit;
        using QFinalState::timerEvent;
    };

    VirtualQFinalState() : QFinalState() {};
    VirtualQFinalState(QState* parent) : QFinalState(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfinalstate_metaobject_callback) {
            QMetaObject* callback_ret = qfinalstate_metaobject_callback(this);
            return callback_ret;
        }
        return QFinalState::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfinalstate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfinalstate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFinalState::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfinalstate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfinalstate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFinalState::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qfinalstate_onentry_callback) {
            QEvent* cbval1 = event;
            qfinalstate_onentry_callback(this, cbval1);
            return;
        }
        QFinalState::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qfinalstate_onexit_callback) {
            QEvent* cbval1 = event;
            qfinalstate_onexit_callback(this, cbval1);
            return;
        }
        QFinalState::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qfinalstate_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qfinalstate_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFinalState::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfinalstate_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qfinalstate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFinalState::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfinalstate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfinalstate_timerevent_callback(this, cbval1);
            return;
        }
        QFinalState::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfinalstate_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfinalstate_childevent_callback(this, cbval1);
            return;
        }
        QFinalState::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfinalstate_customevent_callback) {
            QEvent* cbval1 = event;
            qfinalstate_customevent_callback(this, cbval1);
            return;
        }
        QFinalState::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfinalstate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfinalstate_connectnotify_callback(this, cbval1);
            return;
        }
        QFinalState::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfinalstate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfinalstate_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFinalState::disconnectNotify(signal);
    }

    // Friend functions
    friend void QFinalState_SuperOnEntry(QFinalState* self, QEvent* event);
    friend void QFinalState_SuperOnExit(QFinalState* self, QEvent* event);
    friend bool QFinalState_SuperEvent(QFinalState* self, QEvent* e);
    friend void QFinalState_SuperTimerEvent(QFinalState* self, QTimerEvent* event);
    friend void QFinalState_SuperChildEvent(QFinalState* self, QChildEvent* event);
    friend void QFinalState_SuperCustomEvent(QFinalState* self, QEvent* event);
    friend void QFinalState_SuperConnectNotify(QFinalState* self, const QMetaMethod* signal);
    friend void QFinalState_SuperDisconnectNotify(QFinalState* self, const QMetaMethod* signal);
};

#endif
