#pragma once
#ifndef LIBQSEQUENTIALANIMATIONGROUP_HXX
#define LIBQSEQUENTIALANIMATIONGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSequentialAnimationGroup
class VirtualQSequentialAnimationGroup final : public QSequentialAnimationGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSequentialAnimationGroup_MetaObject_Callback = QMetaObject* (*)(const QSequentialAnimationGroup*);
    using QSequentialAnimationGroup_Metacast_Callback = void* (*)(QSequentialAnimationGroup*, const char*);
    using QSequentialAnimationGroup_Metacall_Callback = int (*)(QSequentialAnimationGroup*, int, int, void**);
    using QSequentialAnimationGroup_Duration_Callback = int (*)(const QSequentialAnimationGroup*);
    using QSequentialAnimationGroup_Event_Callback = bool (*)(QSequentialAnimationGroup*, QEvent*);
    using QSequentialAnimationGroup_UpdateCurrentTime_Callback = void (*)(QSequentialAnimationGroup*, int);
    using QSequentialAnimationGroup_UpdateState_Callback = void (*)(QSequentialAnimationGroup*, int, int);
    using QSequentialAnimationGroup_UpdateDirection_Callback = void (*)(QSequentialAnimationGroup*, int);
    using QSequentialAnimationGroup_EventFilter_Callback = bool (*)(QSequentialAnimationGroup*, QObject*, QEvent*);
    using QSequentialAnimationGroup_TimerEvent_Callback = void (*)(QSequentialAnimationGroup*, QTimerEvent*);
    using QSequentialAnimationGroup_ChildEvent_Callback = void (*)(QSequentialAnimationGroup*, QChildEvent*);
    using QSequentialAnimationGroup_CustomEvent_Callback = void (*)(QSequentialAnimationGroup*, QEvent*);
    using QSequentialAnimationGroup_ConnectNotify_Callback = void (*)(QSequentialAnimationGroup*, QMetaMethod*);
    using QSequentialAnimationGroup_DisconnectNotify_Callback = void (*)(QSequentialAnimationGroup*, QMetaMethod*);
    using QSequentialAnimationGroup::isSignalConnected;
    using QSequentialAnimationGroup::receivers;
    using QSequentialAnimationGroup::sender;
    using QSequentialAnimationGroup::senderSignalIndex;

    // Instance callback storage
    QSequentialAnimationGroup_MetaObject_Callback qsequentialanimationgroup_metaobject_callback = nullptr;
    QSequentialAnimationGroup_Metacast_Callback qsequentialanimationgroup_metacast_callback = nullptr;
    QSequentialAnimationGroup_Metacall_Callback qsequentialanimationgroup_metacall_callback = nullptr;
    QSequentialAnimationGroup_Duration_Callback qsequentialanimationgroup_duration_callback = nullptr;
    QSequentialAnimationGroup_Event_Callback qsequentialanimationgroup_event_callback = nullptr;
    QSequentialAnimationGroup_UpdateCurrentTime_Callback qsequentialanimationgroup_updatecurrenttime_callback = nullptr;
    QSequentialAnimationGroup_UpdateState_Callback qsequentialanimationgroup_updatestate_callback = nullptr;
    QSequentialAnimationGroup_UpdateDirection_Callback qsequentialanimationgroup_updatedirection_callback = nullptr;
    QSequentialAnimationGroup_EventFilter_Callback qsequentialanimationgroup_eventfilter_callback = nullptr;
    QSequentialAnimationGroup_TimerEvent_Callback qsequentialanimationgroup_timerevent_callback = nullptr;
    QSequentialAnimationGroup_ChildEvent_Callback qsequentialanimationgroup_childevent_callback = nullptr;
    QSequentialAnimationGroup_CustomEvent_Callback qsequentialanimationgroup_customevent_callback = nullptr;
    QSequentialAnimationGroup_ConnectNotify_Callback qsequentialanimationgroup_connectnotify_callback = nullptr;
    QSequentialAnimationGroup_DisconnectNotify_Callback qsequentialanimationgroup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSequentialAnimationGroup {
        using QSequentialAnimationGroup::childEvent;
        using QSequentialAnimationGroup::connectNotify;
        using QSequentialAnimationGroup::customEvent;
        using QSequentialAnimationGroup::disconnectNotify;
        using QSequentialAnimationGroup::event;
        using QSequentialAnimationGroup::timerEvent;
        using QSequentialAnimationGroup::updateCurrentTime;
        using QSequentialAnimationGroup::updateDirection;
        using QSequentialAnimationGroup::updateState;
    };

    VirtualQSequentialAnimationGroup() : QSequentialAnimationGroup() {};
    VirtualQSequentialAnimationGroup(QObject* parent) : QSequentialAnimationGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsequentialanimationgroup_metaobject_callback) {
            QMetaObject* callback_ret = qsequentialanimationgroup_metaobject_callback(this);
            return callback_ret;
        }
        return QSequentialAnimationGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsequentialanimationgroup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsequentialanimationgroup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSequentialAnimationGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsequentialanimationgroup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsequentialanimationgroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSequentialAnimationGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qsequentialanimationgroup_duration_callback) {
            int callback_ret = qsequentialanimationgroup_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSequentialAnimationGroup::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsequentialanimationgroup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsequentialanimationgroup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSequentialAnimationGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qsequentialanimationgroup_updatecurrenttime_callback) {
            int cbval1 = param1;
            qsequentialanimationgroup_updatecurrenttime_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qsequentialanimationgroup_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qsequentialanimationgroup_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QSequentialAnimationGroup::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qsequentialanimationgroup_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qsequentialanimationgroup_updatedirection_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsequentialanimationgroup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsequentialanimationgroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSequentialAnimationGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsequentialanimationgroup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsequentialanimationgroup_timerevent_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsequentialanimationgroup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsequentialanimationgroup_childevent_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsequentialanimationgroup_customevent_callback) {
            QEvent* cbval1 = event;
            qsequentialanimationgroup_customevent_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsequentialanimationgroup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsequentialanimationgroup_connectnotify_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsequentialanimationgroup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsequentialanimationgroup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSequentialAnimationGroup_SuperEvent(QSequentialAnimationGroup* self, QEvent* event);
    friend void QSequentialAnimationGroup_SuperUpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
    friend void QSequentialAnimationGroup_SuperUpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
    friend void QSequentialAnimationGroup_SuperUpdateDirection(QSequentialAnimationGroup* self, int direction);
    friend void QSequentialAnimationGroup_SuperTimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event);
    friend void QSequentialAnimationGroup_SuperChildEvent(QSequentialAnimationGroup* self, QChildEvent* event);
    friend void QSequentialAnimationGroup_SuperCustomEvent(QSequentialAnimationGroup* self, QEvent* event);
    friend void QSequentialAnimationGroup_SuperConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
    friend void QSequentialAnimationGroup_SuperDisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
};

#endif
