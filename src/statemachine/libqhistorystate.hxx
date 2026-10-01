#pragma once
#ifndef STATEMACHINE_LIBQHISTORYSTATE_HXX
#define STATEMACHINE_LIBQHISTORYSTATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHistoryState
class VirtualQHistoryState final : public QHistoryState {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHistoryState_MetaObject_Callback = QMetaObject* (*)(const QHistoryState*);
    using QHistoryState_Metacast_Callback = void* (*)(QHistoryState*, const char*);
    using QHistoryState_Metacall_Callback = int (*)(QHistoryState*, int, int, void**);
    using QHistoryState_OnEntry_Callback = void (*)(QHistoryState*, QEvent*);
    using QHistoryState_OnExit_Callback = void (*)(QHistoryState*, QEvent*);
    using QHistoryState_Event_Callback = bool (*)(QHistoryState*, QEvent*);
    using QHistoryState_EventFilter_Callback = bool (*)(QHistoryState*, QObject*, QEvent*);
    using QHistoryState_TimerEvent_Callback = void (*)(QHistoryState*, QTimerEvent*);
    using QHistoryState_ChildEvent_Callback = void (*)(QHistoryState*, QChildEvent*);
    using QHistoryState_CustomEvent_Callback = void (*)(QHistoryState*, QEvent*);
    using QHistoryState_ConnectNotify_Callback = void (*)(QHistoryState*, QMetaMethod*);
    using QHistoryState_DisconnectNotify_Callback = void (*)(QHistoryState*, QMetaMethod*);
    using QHistoryState::isSignalConnected;
    using QHistoryState::receivers;
    using QHistoryState::sender;
    using QHistoryState::senderSignalIndex;

    // Instance callback storage
    QHistoryState_MetaObject_Callback qhistorystate_metaobject_callback = nullptr;
    QHistoryState_Metacast_Callback qhistorystate_metacast_callback = nullptr;
    QHistoryState_Metacall_Callback qhistorystate_metacall_callback = nullptr;
    QHistoryState_OnEntry_Callback qhistorystate_onentry_callback = nullptr;
    QHistoryState_OnExit_Callback qhistorystate_onexit_callback = nullptr;
    QHistoryState_Event_Callback qhistorystate_event_callback = nullptr;
    QHistoryState_EventFilter_Callback qhistorystate_eventfilter_callback = nullptr;
    QHistoryState_TimerEvent_Callback qhistorystate_timerevent_callback = nullptr;
    QHistoryState_ChildEvent_Callback qhistorystate_childevent_callback = nullptr;
    QHistoryState_CustomEvent_Callback qhistorystate_customevent_callback = nullptr;
    QHistoryState_ConnectNotify_Callback qhistorystate_connectnotify_callback = nullptr;
    QHistoryState_DisconnectNotify_Callback qhistorystate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHistoryState {
        using QHistoryState::childEvent;
        using QHistoryState::connectNotify;
        using QHistoryState::customEvent;
        using QHistoryState::disconnectNotify;
        using QHistoryState::event;
        using QHistoryState::onEntry;
        using QHistoryState::onExit;
        using QHistoryState::timerEvent;
    };

    VirtualQHistoryState() : QHistoryState() {};
    VirtualQHistoryState(QHistoryState::HistoryType typeVal) : QHistoryState(typeVal) {};
    VirtualQHistoryState(QState* parent) : QHistoryState(parent) {};
    VirtualQHistoryState(QHistoryState::HistoryType typeVal, QState* parent) : QHistoryState(typeVal, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhistorystate_metaobject_callback) {
            QMetaObject* callback_ret = qhistorystate_metaobject_callback(this);
            return callback_ret;
        }
        return QHistoryState::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhistorystate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhistorystate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHistoryState::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhistorystate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhistorystate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHistoryState::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qhistorystate_onentry_callback) {
            QEvent* cbval1 = event;
            qhistorystate_onentry_callback(this, cbval1);
            return;
        }
        QHistoryState::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qhistorystate_onexit_callback) {
            QEvent* cbval1 = event;
            qhistorystate_onexit_callback(this, cbval1);
            return;
        }
        QHistoryState::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qhistorystate_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qhistorystate_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHistoryState::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhistorystate_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhistorystate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHistoryState::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhistorystate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhistorystate_timerevent_callback(this, cbval1);
            return;
        }
        QHistoryState::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhistorystate_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhistorystate_childevent_callback(this, cbval1);
            return;
        }
        QHistoryState::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhistorystate_customevent_callback) {
            QEvent* cbval1 = event;
            qhistorystate_customevent_callback(this, cbval1);
            return;
        }
        QHistoryState::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhistorystate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhistorystate_connectnotify_callback(this, cbval1);
            return;
        }
        QHistoryState::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhistorystate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhistorystate_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHistoryState::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHistoryState_SuperOnEntry(QHistoryState* self, QEvent* event);
    friend void QHistoryState_SuperOnExit(QHistoryState* self, QEvent* event);
    friend bool QHistoryState_SuperEvent(QHistoryState* self, QEvent* e);
    friend void QHistoryState_SuperTimerEvent(QHistoryState* self, QTimerEvent* event);
    friend void QHistoryState_SuperChildEvent(QHistoryState* self, QChildEvent* event);
    friend void QHistoryState_SuperCustomEvent(QHistoryState* self, QEvent* event);
    friend void QHistoryState_SuperConnectNotify(QHistoryState* self, const QMetaMethod* signal);
    friend void QHistoryState_SuperDisconnectNotify(QHistoryState* self, const QMetaMethod* signal);
};

#endif
