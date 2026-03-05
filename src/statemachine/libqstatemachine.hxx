#pragma once
#ifndef SRC_STATEMACHINEC_LIBVIRTUALQSTATEMACHINE_H
#define SRC_STATEMACHINEC_LIBVIRTUALQSTATEMACHINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QStateMachine so that we can call protected methods
class VirtualQStateMachine final : public QStateMachine {

  public:
    // Virtual class boolean flag
    bool isVirtualQStateMachine = true;

    // Virtual class public types (including callbacks)
    using QStateMachine_MetaObject_Callback = QMetaObject* (*)();
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
    using QStateMachine_Sender_Callback = QObject* (*)();
    using QStateMachine_SenderSignalIndex_Callback = int (*)();
    using QStateMachine_Receivers_Callback = int (*)(const QStateMachine*, const char*);
    using QStateMachine_IsSignalConnected_Callback = bool (*)(const QStateMachine*, QMetaMethod*);

  protected:
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
    QStateMachine_Sender_Callback qstatemachine_sender_callback = nullptr;
    QStateMachine_SenderSignalIndex_Callback qstatemachine_sendersignalindex_callback = nullptr;
    QStateMachine_Receivers_Callback qstatemachine_receivers_callback = nullptr;
    QStateMachine_IsSignalConnected_Callback qstatemachine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstatemachine_metaobject_isbase = false;
    mutable bool qstatemachine_metacast_isbase = false;
    mutable bool qstatemachine_metacall_isbase = false;
    mutable bool qstatemachine_eventfilter_isbase = false;
    mutable bool qstatemachine_onentry_isbase = false;
    mutable bool qstatemachine_onexit_isbase = false;
    mutable bool qstatemachine_beginselecttransitions_isbase = false;
    mutable bool qstatemachine_endselecttransitions_isbase = false;
    mutable bool qstatemachine_beginmicrostep_isbase = false;
    mutable bool qstatemachine_endmicrostep_isbase = false;
    mutable bool qstatemachine_event_isbase = false;
    mutable bool qstatemachine_timerevent_isbase = false;
    mutable bool qstatemachine_childevent_isbase = false;
    mutable bool qstatemachine_customevent_isbase = false;
    mutable bool qstatemachine_connectnotify_isbase = false;
    mutable bool qstatemachine_disconnectnotify_isbase = false;
    mutable bool qstatemachine_sender_isbase = false;
    mutable bool qstatemachine_sendersignalindex_isbase = false;
    mutable bool qstatemachine_receivers_isbase = false;
    mutable bool qstatemachine_issignalconnected_isbase = false;

  public:
    VirtualQStateMachine() : QStateMachine() {};
    VirtualQStateMachine(QState::ChildMode childMode) : QStateMachine(childMode) {};
    VirtualQStateMachine(QObject* parent) : QStateMachine(parent) {};
    VirtualQStateMachine(QState::ChildMode childMode, QObject* parent) : QStateMachine(childMode, parent) {};

    // Callback setters
    inline void setQStateMachine_MetaObject_Callback(QStateMachine_MetaObject_Callback cb) { qstatemachine_metaobject_callback = cb; }
    inline void setQStateMachine_Metacast_Callback(QStateMachine_Metacast_Callback cb) { qstatemachine_metacast_callback = cb; }
    inline void setQStateMachine_Metacall_Callback(QStateMachine_Metacall_Callback cb) { qstatemachine_metacall_callback = cb; }
    inline void setQStateMachine_EventFilter_Callback(QStateMachine_EventFilter_Callback cb) { qstatemachine_eventfilter_callback = cb; }
    inline void setQStateMachine_OnEntry_Callback(QStateMachine_OnEntry_Callback cb) { qstatemachine_onentry_callback = cb; }
    inline void setQStateMachine_OnExit_Callback(QStateMachine_OnExit_Callback cb) { qstatemachine_onexit_callback = cb; }
    inline void setQStateMachine_BeginSelectTransitions_Callback(QStateMachine_BeginSelectTransitions_Callback cb) { qstatemachine_beginselecttransitions_callback = cb; }
    inline void setQStateMachine_EndSelectTransitions_Callback(QStateMachine_EndSelectTransitions_Callback cb) { qstatemachine_endselecttransitions_callback = cb; }
    inline void setQStateMachine_BeginMicrostep_Callback(QStateMachine_BeginMicrostep_Callback cb) { qstatemachine_beginmicrostep_callback = cb; }
    inline void setQStateMachine_EndMicrostep_Callback(QStateMachine_EndMicrostep_Callback cb) { qstatemachine_endmicrostep_callback = cb; }
    inline void setQStateMachine_Event_Callback(QStateMachine_Event_Callback cb) { qstatemachine_event_callback = cb; }
    inline void setQStateMachine_TimerEvent_Callback(QStateMachine_TimerEvent_Callback cb) { qstatemachine_timerevent_callback = cb; }
    inline void setQStateMachine_ChildEvent_Callback(QStateMachine_ChildEvent_Callback cb) { qstatemachine_childevent_callback = cb; }
    inline void setQStateMachine_CustomEvent_Callback(QStateMachine_CustomEvent_Callback cb) { qstatemachine_customevent_callback = cb; }
    inline void setQStateMachine_ConnectNotify_Callback(QStateMachine_ConnectNotify_Callback cb) { qstatemachine_connectnotify_callback = cb; }
    inline void setQStateMachine_DisconnectNotify_Callback(QStateMachine_DisconnectNotify_Callback cb) { qstatemachine_disconnectnotify_callback = cb; }
    inline void setQStateMachine_Sender_Callback(QStateMachine_Sender_Callback cb) { qstatemachine_sender_callback = cb; }
    inline void setQStateMachine_SenderSignalIndex_Callback(QStateMachine_SenderSignalIndex_Callback cb) { qstatemachine_sendersignalindex_callback = cb; }
    inline void setQStateMachine_Receivers_Callback(QStateMachine_Receivers_Callback cb) { qstatemachine_receivers_callback = cb; }
    inline void setQStateMachine_IsSignalConnected_Callback(QStateMachine_IsSignalConnected_Callback cb) { qstatemachine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStateMachine_MetaObject_IsBase(bool value) const { qstatemachine_metaobject_isbase = value; }
    inline void setQStateMachine_Metacast_IsBase(bool value) const { qstatemachine_metacast_isbase = value; }
    inline void setQStateMachine_Metacall_IsBase(bool value) const { qstatemachine_metacall_isbase = value; }
    inline void setQStateMachine_EventFilter_IsBase(bool value) const { qstatemachine_eventfilter_isbase = value; }
    inline void setQStateMachine_OnEntry_IsBase(bool value) const { qstatemachine_onentry_isbase = value; }
    inline void setQStateMachine_OnExit_IsBase(bool value) const { qstatemachine_onexit_isbase = value; }
    inline void setQStateMachine_BeginSelectTransitions_IsBase(bool value) const { qstatemachine_beginselecttransitions_isbase = value; }
    inline void setQStateMachine_EndSelectTransitions_IsBase(bool value) const { qstatemachine_endselecttransitions_isbase = value; }
    inline void setQStateMachine_BeginMicrostep_IsBase(bool value) const { qstatemachine_beginmicrostep_isbase = value; }
    inline void setQStateMachine_EndMicrostep_IsBase(bool value) const { qstatemachine_endmicrostep_isbase = value; }
    inline void setQStateMachine_Event_IsBase(bool value) const { qstatemachine_event_isbase = value; }
    inline void setQStateMachine_TimerEvent_IsBase(bool value) const { qstatemachine_timerevent_isbase = value; }
    inline void setQStateMachine_ChildEvent_IsBase(bool value) const { qstatemachine_childevent_isbase = value; }
    inline void setQStateMachine_CustomEvent_IsBase(bool value) const { qstatemachine_customevent_isbase = value; }
    inline void setQStateMachine_ConnectNotify_IsBase(bool value) const { qstatemachine_connectnotify_isbase = value; }
    inline void setQStateMachine_DisconnectNotify_IsBase(bool value) const { qstatemachine_disconnectnotify_isbase = value; }
    inline void setQStateMachine_Sender_IsBase(bool value) const { qstatemachine_sender_isbase = value; }
    inline void setQStateMachine_SenderSignalIndex_IsBase(bool value) const { qstatemachine_sendersignalindex_isbase = value; }
    inline void setQStateMachine_Receivers_IsBase(bool value) const { qstatemachine_receivers_isbase = value; }
    inline void setQStateMachine_IsSignalConnected_IsBase(bool value) const { qstatemachine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstatemachine_metaobject_isbase) {
            qstatemachine_metaobject_isbase = false;
            return QStateMachine::metaObject();
        }
        auto metaobject_cb = qstatemachine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QStateMachine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstatemachine_metacast_isbase) {
            qstatemachine_metacast_isbase = false;
            return QStateMachine::qt_metacast(param1);
        }
        auto metacast_cb = qstatemachine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QStateMachine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstatemachine_metacall_isbase) {
            qstatemachine_metacall_isbase = false;
            return QStateMachine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qstatemachine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStateMachine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstatemachine_eventfilter_isbase) {
            qstatemachine_eventfilter_isbase = false;
            return QStateMachine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qstatemachine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStateMachine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onEntry(QEvent* event) override {
        if (qstatemachine_onentry_isbase) {
            qstatemachine_onentry_isbase = false;
            QStateMachine::onEntry(event);
            return;
        }
        auto onentry_cb = qstatemachine_onentry_callback;
        if (onentry_cb) {
            QEvent* cbval1 = event;

            onentry_cb(this, cbval1);
            return;
        }
        QStateMachine::onEntry(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void onExit(QEvent* event) override {
        if (qstatemachine_onexit_isbase) {
            qstatemachine_onexit_isbase = false;
            QStateMachine::onExit(event);
            return;
        }
        auto onexit_cb = qstatemachine_onexit_callback;
        if (onexit_cb) {
            QEvent* cbval1 = event;

            onexit_cb(this, cbval1);
            return;
        }
        QStateMachine::onExit(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void beginSelectTransitions(QEvent* event) override {
        if (qstatemachine_beginselecttransitions_isbase) {
            qstatemachine_beginselecttransitions_isbase = false;
            QStateMachine::beginSelectTransitions(event);
            return;
        }
        auto beginselecttransitions_cb = qstatemachine_beginselecttransitions_callback;
        if (beginselecttransitions_cb) {
            QEvent* cbval1 = event;

            beginselecttransitions_cb(this, cbval1);
            return;
        }
        QStateMachine::beginSelectTransitions(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void endSelectTransitions(QEvent* event) override {
        if (qstatemachine_endselecttransitions_isbase) {
            qstatemachine_endselecttransitions_isbase = false;
            QStateMachine::endSelectTransitions(event);
            return;
        }
        auto endselecttransitions_cb = qstatemachine_endselecttransitions_callback;
        if (endselecttransitions_cb) {
            QEvent* cbval1 = event;

            endselecttransitions_cb(this, cbval1);
            return;
        }
        QStateMachine::endSelectTransitions(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void beginMicrostep(QEvent* event) override {
        if (qstatemachine_beginmicrostep_isbase) {
            qstatemachine_beginmicrostep_isbase = false;
            QStateMachine::beginMicrostep(event);
            return;
        }
        auto beginmicrostep_cb = qstatemachine_beginmicrostep_callback;
        if (beginmicrostep_cb) {
            QEvent* cbval1 = event;

            beginmicrostep_cb(this, cbval1);
            return;
        }
        QStateMachine::beginMicrostep(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void endMicrostep(QEvent* event) override {
        if (qstatemachine_endmicrostep_isbase) {
            qstatemachine_endmicrostep_isbase = false;
            QStateMachine::endMicrostep(event);
            return;
        }
        auto endmicrostep_cb = qstatemachine_endmicrostep_callback;
        if (endmicrostep_cb) {
            QEvent* cbval1 = event;

            endmicrostep_cb(this, cbval1);
            return;
        }
        QStateMachine::endMicrostep(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstatemachine_event_isbase) {
            qstatemachine_event_isbase = false;
            return QStateMachine::event(e);
        }
        auto event_cb = qstatemachine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QStateMachine::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstatemachine_timerevent_isbase) {
            qstatemachine_timerevent_isbase = false;
            QStateMachine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qstatemachine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QStateMachine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstatemachine_childevent_isbase) {
            qstatemachine_childevent_isbase = false;
            QStateMachine::childEvent(event);
            return;
        }
        auto childevent_cb = qstatemachine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QStateMachine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstatemachine_customevent_isbase) {
            qstatemachine_customevent_isbase = false;
            QStateMachine::customEvent(event);
            return;
        }
        auto customevent_cb = qstatemachine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QStateMachine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstatemachine_connectnotify_isbase) {
            qstatemachine_connectnotify_isbase = false;
            QStateMachine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qstatemachine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QStateMachine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstatemachine_disconnectnotify_isbase) {
            qstatemachine_disconnectnotify_isbase = false;
            QStateMachine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qstatemachine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QStateMachine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstatemachine_sender_isbase) {
            qstatemachine_sender_isbase = false;
            return QStateMachine::sender();
        }
        auto sender_cb = qstatemachine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QStateMachine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstatemachine_sendersignalindex_isbase) {
            qstatemachine_sendersignalindex_isbase = false;
            return QStateMachine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qstatemachine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QStateMachine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstatemachine_receivers_isbase) {
            qstatemachine_receivers_isbase = false;
            return QStateMachine::receivers(signal);
        }
        auto receivers_cb = qstatemachine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStateMachine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstatemachine_issignalconnected_isbase) {
            qstatemachine_issignalconnected_isbase = false;
            return QStateMachine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qstatemachine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QStateMachine::isSignalConnected(signal);
    }

    // Friend functions
    friend void QStateMachine_OnEntry(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperOnEntry(QStateMachine* self, QEvent* event);
    friend void QStateMachine_OnExit(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperOnExit(QStateMachine* self, QEvent* event);
    friend void QStateMachine_BeginSelectTransitions(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperBeginSelectTransitions(QStateMachine* self, QEvent* event);
    friend void QStateMachine_EndSelectTransitions(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperEndSelectTransitions(QStateMachine* self, QEvent* event);
    friend void QStateMachine_BeginMicrostep(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperBeginMicrostep(QStateMachine* self, QEvent* event);
    friend void QStateMachine_EndMicrostep(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperEndMicrostep(QStateMachine* self, QEvent* event);
    friend bool QStateMachine_Event(QStateMachine* self, QEvent* e);
    friend bool QStateMachine_SuperEvent(QStateMachine* self, QEvent* e);
    friend void QStateMachine_TimerEvent(QStateMachine* self, QTimerEvent* event);
    friend void QStateMachine_SuperTimerEvent(QStateMachine* self, QTimerEvent* event);
    friend void QStateMachine_ChildEvent(QStateMachine* self, QChildEvent* event);
    friend void QStateMachine_SuperChildEvent(QStateMachine* self, QChildEvent* event);
    friend void QStateMachine_CustomEvent(QStateMachine* self, QEvent* event);
    friend void QStateMachine_SuperCustomEvent(QStateMachine* self, QEvent* event);
    friend void QStateMachine_ConnectNotify(QStateMachine* self, const QMetaMethod* signal);
    friend void QStateMachine_SuperConnectNotify(QStateMachine* self, const QMetaMethod* signal);
    friend void QStateMachine_DisconnectNotify(QStateMachine* self, const QMetaMethod* signal);
    friend void QStateMachine_SuperDisconnectNotify(QStateMachine* self, const QMetaMethod* signal);
    friend QObject* QStateMachine_Sender(const QStateMachine* self);
    friend QObject* QStateMachine_SuperSender(const QStateMachine* self);
    friend int QStateMachine_SenderSignalIndex(const QStateMachine* self);
    friend int QStateMachine_SuperSenderSignalIndex(const QStateMachine* self);
    friend int QStateMachine_Receivers(const QStateMachine* self, const char* signal);
    friend int QStateMachine_SuperReceivers(const QStateMachine* self, const char* signal);
    friend bool QStateMachine_IsSignalConnected(const QStateMachine* self, const QMetaMethod* signal);
    friend bool QStateMachine_SuperIsSignalConnected(const QStateMachine* self, const QMetaMethod* signal);
};

// This class is a subclass of QStateMachine::SignalEvent so that we can call protected methods
class VirtualQStateMachineSignalEvent final : public QStateMachine::SignalEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQStateMachineSignalEvent = true;

    // Virtual class public types (including callbacks)
    using QStateMachine__SignalEvent_SetAccepted_Callback = void (*)(QStateMachine__SignalEvent*, bool);
    using QStateMachine__SignalEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QStateMachine__SignalEvent_SetAccepted_Callback qstatemachine__signalevent_setaccepted_callback = nullptr;
    QStateMachine__SignalEvent_Clone_Callback qstatemachine__signalevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qstatemachine__signalevent_setaccepted_isbase = false;
    mutable bool qstatemachine__signalevent_clone_isbase = false;

  public:
    VirtualQStateMachineSignalEvent(QObject* sender, int signalIndex, const QList<QVariant>& arguments) : QStateMachine::SignalEvent(sender, signalIndex, arguments) {};
    VirtualQStateMachineSignalEvent(const QStateMachine::SignalEvent& param1) : QStateMachine::SignalEvent(param1) {};

    // Callback setters
    inline void setQStateMachine__SignalEvent_SetAccepted_Callback(QStateMachine__SignalEvent_SetAccepted_Callback cb) { qstatemachine__signalevent_setaccepted_callback = cb; }
    inline void setQStateMachine__SignalEvent_Clone_Callback(QStateMachine__SignalEvent_Clone_Callback cb) { qstatemachine__signalevent_clone_callback = cb; }

    // Base flag setters
    inline void setQStateMachine__SignalEvent_SetAccepted_IsBase(bool value) const { qstatemachine__signalevent_setaccepted_isbase = value; }
    inline void setQStateMachine__SignalEvent_Clone_IsBase(bool value) const { qstatemachine__signalevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatemachine__signalevent_setaccepted_isbase) {
            qstatemachine__signalevent_setaccepted_isbase = false;
            QStateMachine__SignalEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qstatemachine__signalevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QStateMachine__SignalEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qstatemachine__signalevent_clone_isbase) {
            qstatemachine__signalevent_clone_isbase = false;
            return QStateMachine__SignalEvent::clone();
        }
        auto clone_cb = qstatemachine__signalevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QStateMachine__SignalEvent::clone();
    }
};

// This class is a subclass of QStateMachine::WrappedEvent so that we can call protected methods
class VirtualQStateMachineWrappedEvent final : public QStateMachine::WrappedEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQStateMachineWrappedEvent = true;

    // Virtual class public types (including callbacks)
    using QStateMachine__WrappedEvent_SetAccepted_Callback = void (*)(QStateMachine__WrappedEvent*, bool);
    using QStateMachine__WrappedEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QStateMachine__WrappedEvent_SetAccepted_Callback qstatemachine__wrappedevent_setaccepted_callback = nullptr;
    QStateMachine__WrappedEvent_Clone_Callback qstatemachine__wrappedevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qstatemachine__wrappedevent_setaccepted_isbase = false;
    mutable bool qstatemachine__wrappedevent_clone_isbase = false;

  public:
    VirtualQStateMachineWrappedEvent(QObject* object, QEvent* event) : QStateMachine::WrappedEvent(object, event) {};
    VirtualQStateMachineWrappedEvent(const QStateMachine::WrappedEvent& param1) : QStateMachine::WrappedEvent(param1) {};

    // Callback setters
    inline void setQStateMachine__WrappedEvent_SetAccepted_Callback(QStateMachine__WrappedEvent_SetAccepted_Callback cb) { qstatemachine__wrappedevent_setaccepted_callback = cb; }
    inline void setQStateMachine__WrappedEvent_Clone_Callback(QStateMachine__WrappedEvent_Clone_Callback cb) { qstatemachine__wrappedevent_clone_callback = cb; }

    // Base flag setters
    inline void setQStateMachine__WrappedEvent_SetAccepted_IsBase(bool value) const { qstatemachine__wrappedevent_setaccepted_isbase = value; }
    inline void setQStateMachine__WrappedEvent_Clone_IsBase(bool value) const { qstatemachine__wrappedevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatemachine__wrappedevent_setaccepted_isbase) {
            qstatemachine__wrappedevent_setaccepted_isbase = false;
            QStateMachine__WrappedEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qstatemachine__wrappedevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QStateMachine__WrappedEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qstatemachine__wrappedevent_clone_isbase) {
            qstatemachine__wrappedevent_clone_isbase = false;
            return QStateMachine__WrappedEvent::clone();
        }
        auto clone_cb = qstatemachine__wrappedevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QStateMachine__WrappedEvent::clone();
    }
};

#endif
