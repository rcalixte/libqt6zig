#pragma once
#ifndef STATEMACHINE_LIBQSTATE_HXX
#define STATEMACHINE_LIBQSTATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QState
class VirtualQState final : public QState {
  public:
    // Virtual class public types (including callbacks and access types)
    using QState_MetaObject_Callback = QMetaObject* (*)(const QState*);
    using QState_Metacast_Callback = void* (*)(QState*, const char*);
    using QState_Metacall_Callback = int (*)(QState*, int, int, void**);
    using QState_OnEntry_Callback = void (*)(QState*, QEvent*);
    using QState_OnExit_Callback = void (*)(QState*, QEvent*);
    using QState_Event_Callback = bool (*)(QState*, QEvent*);
    using QState_EventFilter_Callback = bool (*)(QState*, QObject*, QEvent*);
    using QState_TimerEvent_Callback = void (*)(QState*, QTimerEvent*);
    using QState_ChildEvent_Callback = void (*)(QState*, QChildEvent*);
    using QState_CustomEvent_Callback = void (*)(QState*, QEvent*);
    using QState_ConnectNotify_Callback = void (*)(QState*, QMetaMethod*);
    using QState_DisconnectNotify_Callback = void (*)(QState*, QMetaMethod*);
    using QState::isSignalConnected;
    using QState::receivers;
    using QState::sender;
    using QState::senderSignalIndex;

    // Instance callback storage
    QState_MetaObject_Callback qstate_metaobject_callback = nullptr;
    QState_Metacast_Callback qstate_metacast_callback = nullptr;
    QState_Metacall_Callback qstate_metacall_callback = nullptr;
    QState_OnEntry_Callback qstate_onentry_callback = nullptr;
    QState_OnExit_Callback qstate_onexit_callback = nullptr;
    QState_Event_Callback qstate_event_callback = nullptr;
    QState_EventFilter_Callback qstate_eventfilter_callback = nullptr;
    QState_TimerEvent_Callback qstate_timerevent_callback = nullptr;
    QState_ChildEvent_Callback qstate_childevent_callback = nullptr;
    QState_CustomEvent_Callback qstate_customevent_callback = nullptr;
    QState_ConnectNotify_Callback qstate_connectnotify_callback = nullptr;
    QState_DisconnectNotify_Callback qstate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QState {
        using QState::childEvent;
        using QState::connectNotify;
        using QState::customEvent;
        using QState::disconnectNotify;
        using QState::event;
        using QState::onEntry;
        using QState::onExit;
        using QState::timerEvent;
    };

    VirtualQState() : QState() {};
    VirtualQState(QState::ChildMode childMode) : QState(childMode) {};
    VirtualQState(QState* parent) : QState(parent) {};
    VirtualQState(QState::ChildMode childMode, QState* parent) : QState(childMode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstate_metaobject_callback) {
            QMetaObject* callback_ret = qstate_metaobject_callback(this);
            return callback_ret;
        }
        return QState::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QState::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QState::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qstate_onentry_callback) {
            QEvent* cbval1 = event;
            qstate_onentry_callback(this, cbval1);
            return;
        }
        QState::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qstate_onexit_callback) {
            QEvent* cbval1 = event;
            qstate_onexit_callback(this, cbval1);
            return;
        }
        QState::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstate_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qstate_event_callback(this, cbval1);
            return callback_ret;
        }
        return QState::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstate_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QState::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstate_timerevent_callback(this, cbval1);
            return;
        }
        QState::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstate_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstate_childevent_callback(this, cbval1);
            return;
        }
        QState::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstate_customevent_callback) {
            QEvent* cbval1 = event;
            qstate_customevent_callback(this, cbval1);
            return;
        }
        QState::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstate_connectnotify_callback(this, cbval1);
            return;
        }
        QState::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstate_disconnectnotify_callback(this, cbval1);
            return;
        }
        QState::disconnectNotify(signal);
    }

    // Friend functions
    friend void QState_SuperOnEntry(QState* self, QEvent* event);
    friend void QState_SuperOnExit(QState* self, QEvent* event);
    friend bool QState_SuperEvent(QState* self, QEvent* e);
    friend void QState_SuperTimerEvent(QState* self, QTimerEvent* event);
    friend void QState_SuperChildEvent(QState* self, QChildEvent* event);
    friend void QState_SuperCustomEvent(QState* self, QEvent* event);
    friend void QState_SuperConnectNotify(QState* self, const QMetaMethod* signal);
    friend void QState_SuperDisconnectNotify(QState* self, const QMetaMethod* signal);
};

#endif
