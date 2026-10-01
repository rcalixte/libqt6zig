#pragma once
#ifndef STATEMACHINE_LIBQSTATEMACHINE_HXX
#define STATEMACHINE_LIBQSTATEMACHINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QStateMachine
class VirtualQStateMachine final : public QStateMachine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStateMachine_MetaObject_Callback = QMetaObject* (*)(const QStateMachine*);
    using QStateMachine_Metacast_Callback = void* (*)(QStateMachine*, const char*);
    using QStateMachine_Metacall_Callback = int (*)(QStateMachine*, int, int, void**);
    using QStateMachine_EventFilter_Callback = bool (*)(QStateMachine*, QObject*, QEvent*);
    using QStateMachine_OnEntry_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_OnExit_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_BeginSelectTransitions_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_EndSelectTransitions_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_BeginMicrostep_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_EndMicrostep_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_Event_Callback = bool (*)(QStateMachine*, QEvent*);
    using QStateMachine_TimerEvent_Callback = void (*)(QStateMachine*, QTimerEvent*);
    using QStateMachine_ChildEvent_Callback = void (*)(QStateMachine*, QChildEvent*);
    using QStateMachine_CustomEvent_Callback = void (*)(QStateMachine*, QEvent*);
    using QStateMachine_ConnectNotify_Callback = void (*)(QStateMachine*, QMetaMethod*);
    using QStateMachine_DisconnectNotify_Callback = void (*)(QStateMachine*, QMetaMethod*);
    using QStateMachine::isSignalConnected;
    using QStateMachine::receivers;
    using QStateMachine::sender;
    using QStateMachine::senderSignalIndex;

    // Instance callback storage
    QStateMachine_MetaObject_Callback qstatemachine_metaobject_callback = nullptr;
    QStateMachine_Metacast_Callback qstatemachine_metacast_callback = nullptr;
    QStateMachine_Metacall_Callback qstatemachine_metacall_callback = nullptr;
    QStateMachine_EventFilter_Callback qstatemachine_eventfilter_callback = nullptr;
    QStateMachine_OnEntry_Callback qstatemachine_onentry_callback = nullptr;
    QStateMachine_OnExit_Callback qstatemachine_onexit_callback = nullptr;
    QStateMachine_BeginSelectTransitions_Callback qstatemachine_beginselecttransitions_callback = nullptr;
    QStateMachine_EndSelectTransitions_Callback qstatemachine_endselecttransitions_callback = nullptr;
    QStateMachine_BeginMicrostep_Callback qstatemachine_beginmicrostep_callback = nullptr;
    QStateMachine_EndMicrostep_Callback qstatemachine_endmicrostep_callback = nullptr;
    QStateMachine_Event_Callback qstatemachine_event_callback = nullptr;
    QStateMachine_TimerEvent_Callback qstatemachine_timerevent_callback = nullptr;
    QStateMachine_ChildEvent_Callback qstatemachine_childevent_callback = nullptr;
    QStateMachine_CustomEvent_Callback qstatemachine_customevent_callback = nullptr;
    QStateMachine_ConnectNotify_Callback qstatemachine_connectnotify_callback = nullptr;
    QStateMachine_DisconnectNotify_Callback qstatemachine_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStateMachine {
        using QStateMachine::beginMicrostep;
        using QStateMachine::beginSelectTransitions;
        using QStateMachine::childEvent;
        using QStateMachine::connectNotify;
        using QStateMachine::customEvent;
        using QStateMachine::disconnectNotify;
        using QStateMachine::endMicrostep;
        using QStateMachine::endSelectTransitions;
        using QStateMachine::event;
        using QStateMachine::onEntry;
        using QStateMachine::onExit;
        using QStateMachine::timerEvent;
    };

    VirtualQStateMachine() : QStateMachine() {};
    VirtualQStateMachine(QState::ChildMode childMode) : QStateMachine(childMode) {};
    VirtualQStateMachine(QObject* parent) : QStateMachine(parent) {};
    VirtualQStateMachine(QState::ChildMode childMode, QObject* parent) : QStateMachine(childMode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstatemachine_metaobject_callback) {
            QMetaObject* callback_ret = qstatemachine_metaobject_callback(this);
            return callback_ret;
        }
        return QStateMachine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstatemachine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstatemachine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStateMachine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstatemachine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstatemachine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStateMachine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstatemachine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstatemachine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStateMachine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qstatemachine_onentry_callback) {
            QEvent* cbval1 = event;
            qstatemachine_onentry_callback(this, cbval1);
            return;
        }
        QStateMachine::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qstatemachine_onexit_callback) {
            QEvent* cbval1 = event;
            qstatemachine_onexit_callback(this, cbval1);
            return;
        }
        QStateMachine::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void beginSelectTransitions(QEvent* event) override {
        if (qstatemachine_beginselecttransitions_callback) {
            QEvent* cbval1 = event;
            qstatemachine_beginselecttransitions_callback(this, cbval1);
            return;
        }
        QStateMachine::beginSelectTransitions(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void endSelectTransitions(QEvent* event) override {
        if (qstatemachine_endselecttransitions_callback) {
            QEvent* cbval1 = event;
            qstatemachine_endselecttransitions_callback(this, cbval1);
            return;
        }
        QStateMachine::endSelectTransitions(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void beginMicrostep(QEvent* event) override {
        if (qstatemachine_beginmicrostep_callback) {
            QEvent* cbval1 = event;
            qstatemachine_beginmicrostep_callback(this, cbval1);
            return;
        }
        QStateMachine::beginMicrostep(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void endMicrostep(QEvent* event) override {
        if (qstatemachine_endmicrostep_callback) {
            QEvent* cbval1 = event;
            qstatemachine_endmicrostep_callback(this, cbval1);
            return;
        }
        QStateMachine::endMicrostep(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstatemachine_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qstatemachine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStateMachine::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstatemachine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstatemachine_timerevent_callback(this, cbval1);
            return;
        }
        QStateMachine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstatemachine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstatemachine_childevent_callback(this, cbval1);
            return;
        }
        QStateMachine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstatemachine_customevent_callback) {
            QEvent* cbval1 = event;
            qstatemachine_customevent_callback(this, cbval1);
            return;
        }
        QStateMachine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstatemachine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstatemachine_connectnotify_callback(this, cbval1);
            return;
        }
        QStateMachine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstatemachine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstatemachine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStateMachine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStateMachine_SuperOnEntry(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperOnExit(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperBeginSelectTransitions(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperEndSelectTransitions(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperBeginMicrostep(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperEndMicrostep(QStateMachine* self, QEvent* event);
    friend bool QStateMachine_SuperEvent(QStateMachine* self, QEvent* e);
    friend void QStateMachine_SuperTimerEvent(QStateMachine* self, QTimerEvent* event);
    friend void QStateMachine_SuperChildEvent(QStateMachine* self, QChildEvent* event);
    friend void QStateMachine_SuperCustomEvent(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperConnectNotify(QStateMachine* self, const QMetaMethod* signal);
    friend void QStateMachine_SuperDisconnectNotify(QStateMachine* self, const QMetaMethod* signal);
};

// This class is a subclass of QStateMachine::SignalEvent
class VirtualQStateMachineSignalEvent final : public QStateMachine::SignalEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStateMachine__SignalEvent_SetAccepted_Callback = void (*)(QStateMachine__SignalEvent*, bool);
    using QStateMachine__SignalEvent_Clone_Callback = QEvent* (*)(const QStateMachine__SignalEvent*);

    // Instance callback storage
    QStateMachine__SignalEvent_SetAccepted_Callback qstatemachine__signalevent_setaccepted_callback = nullptr;
    QStateMachine__SignalEvent_Clone_Callback qstatemachine__signalevent_clone_callback = nullptr;

    VirtualQStateMachineSignalEvent(QObject* sender, int signalIndex, const QList<QVariant>& arguments) : QStateMachine::SignalEvent(sender, signalIndex, arguments) {};
    VirtualQStateMachineSignalEvent(const QStateMachine::SignalEvent& param1) : QStateMachine::SignalEvent(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatemachine__signalevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qstatemachine__signalevent_setaccepted_callback(this, cbval1);
            return;
        }
        QStateMachine__SignalEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qstatemachine__signalevent_clone_callback) {
            QEvent* callback_ret = qstatemachine__signalevent_clone_callback(this);
            return callback_ret;
        }
        return QStateMachine__SignalEvent::clone();
    }
};

// This class is a subclass of QStateMachine::WrappedEvent
class VirtualQStateMachineWrappedEvent final : public QStateMachine::WrappedEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStateMachine__WrappedEvent_SetAccepted_Callback = void (*)(QStateMachine__WrappedEvent*, bool);
    using QStateMachine__WrappedEvent_Clone_Callback = QEvent* (*)(const QStateMachine__WrappedEvent*);

    // Instance callback storage
    QStateMachine__WrappedEvent_SetAccepted_Callback qstatemachine__wrappedevent_setaccepted_callback = nullptr;
    QStateMachine__WrappedEvent_Clone_Callback qstatemachine__wrappedevent_clone_callback = nullptr;

    VirtualQStateMachineWrappedEvent(QObject* object, QEvent* event) : QStateMachine::WrappedEvent(object, event) {};
    VirtualQStateMachineWrappedEvent(const QStateMachine::WrappedEvent& param1) : QStateMachine::WrappedEvent(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatemachine__wrappedevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qstatemachine__wrappedevent_setaccepted_callback(this, cbval1);
            return;
        }
        QStateMachine__WrappedEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qstatemachine__wrappedevent_clone_callback) {
            QEvent* callback_ret = qstatemachine__wrappedevent_clone_callback(this);
            return callback_ret;
        }
        return QStateMachine__WrappedEvent::clone();
    }
};

#endif
