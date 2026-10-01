#pragma once
#ifndef LIBQPAUSEANIMATION_HXX
#define LIBQPAUSEANIMATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPauseAnimation
class VirtualQPauseAnimation final : public QPauseAnimation {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPauseAnimation_MetaObject_Callback = QMetaObject* (*)(const QPauseAnimation*);
    using QPauseAnimation_Metacast_Callback = void* (*)(QPauseAnimation*, const char*);
    using QPauseAnimation_Metacall_Callback = int (*)(QPauseAnimation*, int, int, void**);
    using QPauseAnimation_Duration_Callback = int (*)(const QPauseAnimation*);
    using QPauseAnimation_Event_Callback = bool (*)(QPauseAnimation*, QEvent*);
    using QPauseAnimation_UpdateCurrentTime_Callback = void (*)(QPauseAnimation*, int);
    using QPauseAnimation_UpdateState_Callback = void (*)(QPauseAnimation*, int, int);
    using QPauseAnimation_UpdateDirection_Callback = void (*)(QPauseAnimation*, int);
    using QPauseAnimation_EventFilter_Callback = bool (*)(QPauseAnimation*, QObject*, QEvent*);
    using QPauseAnimation_TimerEvent_Callback = void (*)(QPauseAnimation*, QTimerEvent*);
    using QPauseAnimation_ChildEvent_Callback = void (*)(QPauseAnimation*, QChildEvent*);
    using QPauseAnimation_CustomEvent_Callback = void (*)(QPauseAnimation*, QEvent*);
    using QPauseAnimation_ConnectNotify_Callback = void (*)(QPauseAnimation*, QMetaMethod*);
    using QPauseAnimation_DisconnectNotify_Callback = void (*)(QPauseAnimation*, QMetaMethod*);
    using QPauseAnimation::isSignalConnected;
    using QPauseAnimation::receivers;
    using QPauseAnimation::sender;
    using QPauseAnimation::senderSignalIndex;

    // Instance callback storage
    QPauseAnimation_MetaObject_Callback qpauseanimation_metaobject_callback = nullptr;
    QPauseAnimation_Metacast_Callback qpauseanimation_metacast_callback = nullptr;
    QPauseAnimation_Metacall_Callback qpauseanimation_metacall_callback = nullptr;
    QPauseAnimation_Duration_Callback qpauseanimation_duration_callback = nullptr;
    QPauseAnimation_Event_Callback qpauseanimation_event_callback = nullptr;
    QPauseAnimation_UpdateCurrentTime_Callback qpauseanimation_updatecurrenttime_callback = nullptr;
    QPauseAnimation_UpdateState_Callback qpauseanimation_updatestate_callback = nullptr;
    QPauseAnimation_UpdateDirection_Callback qpauseanimation_updatedirection_callback = nullptr;
    QPauseAnimation_EventFilter_Callback qpauseanimation_eventfilter_callback = nullptr;
    QPauseAnimation_TimerEvent_Callback qpauseanimation_timerevent_callback = nullptr;
    QPauseAnimation_ChildEvent_Callback qpauseanimation_childevent_callback = nullptr;
    QPauseAnimation_CustomEvent_Callback qpauseanimation_customevent_callback = nullptr;
    QPauseAnimation_ConnectNotify_Callback qpauseanimation_connectnotify_callback = nullptr;
    QPauseAnimation_DisconnectNotify_Callback qpauseanimation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPauseAnimation {
        using QPauseAnimation::childEvent;
        using QPauseAnimation::connectNotify;
        using QPauseAnimation::customEvent;
        using QPauseAnimation::disconnectNotify;
        using QPauseAnimation::event;
        using QPauseAnimation::timerEvent;
        using QPauseAnimation::updateCurrentTime;
        using QPauseAnimation::updateDirection;
        using QPauseAnimation::updateState;
    };

    VirtualQPauseAnimation() : QPauseAnimation() {};
    VirtualQPauseAnimation(int msecs) : QPauseAnimation(msecs) {};
    VirtualQPauseAnimation(QObject* parent) : QPauseAnimation(parent) {};
    VirtualQPauseAnimation(int msecs, QObject* parent) : QPauseAnimation(msecs, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpauseanimation_metaobject_callback) {
            QMetaObject* callback_ret = qpauseanimation_metaobject_callback(this);
            return callback_ret;
        }
        return QPauseAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpauseanimation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpauseanimation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPauseAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpauseanimation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpauseanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPauseAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qpauseanimation_duration_callback) {
            int callback_ret = qpauseanimation_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPauseAnimation::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qpauseanimation_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qpauseanimation_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPauseAnimation::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qpauseanimation_updatecurrenttime_callback) {
            int cbval1 = param1;
            qpauseanimation_updatecurrenttime_callback(this, cbval1);
            return;
        }
        QPauseAnimation::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qpauseanimation_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qpauseanimation_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QPauseAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qpauseanimation_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qpauseanimation_updatedirection_callback(this, cbval1);
            return;
        }
        QPauseAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpauseanimation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpauseanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPauseAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpauseanimation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpauseanimation_timerevent_callback(this, cbval1);
            return;
        }
        QPauseAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpauseanimation_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpauseanimation_childevent_callback(this, cbval1);
            return;
        }
        QPauseAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpauseanimation_customevent_callback) {
            QEvent* cbval1 = event;
            qpauseanimation_customevent_callback(this, cbval1);
            return;
        }
        QPauseAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpauseanimation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpauseanimation_connectnotify_callback(this, cbval1);
            return;
        }
        QPauseAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpauseanimation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpauseanimation_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPauseAnimation::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QPauseAnimation_SuperEvent(QPauseAnimation* self, QEvent* e);
    friend void QPauseAnimation_SuperUpdateCurrentTime(QPauseAnimation* self, int param1);
    friend void QPauseAnimation_SuperUpdateState(QPauseAnimation* self, int newState, int oldState);
    friend void QPauseAnimation_SuperUpdateDirection(QPauseAnimation* self, int direction);
    friend void QPauseAnimation_SuperTimerEvent(QPauseAnimation* self, QTimerEvent* event);
    friend void QPauseAnimation_SuperChildEvent(QPauseAnimation* self, QChildEvent* event);
    friend void QPauseAnimation_SuperCustomEvent(QPauseAnimation* self, QEvent* event);
    friend void QPauseAnimation_SuperConnectNotify(QPauseAnimation* self, const QMetaMethod* signal);
    friend void QPauseAnimation_SuperDisconnectNotify(QPauseAnimation* self, const QMetaMethod* signal);
};

#endif
