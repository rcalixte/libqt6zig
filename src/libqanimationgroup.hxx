#pragma once
#ifndef LIBQANIMATIONGROUP_HXX
#define LIBQANIMATIONGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAnimationGroup
class VirtualQAnimationGroup : public QAnimationGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAnimationGroup_MetaObject_Callback = QMetaObject* (*)(const QAnimationGroup*);
    using QAnimationGroup_Metacast_Callback = void* (*)(QAnimationGroup*, const char*);
    using QAnimationGroup_Metacall_Callback = int (*)(QAnimationGroup*, int, int, void**);
    using QAnimationGroup_Event_Callback = bool (*)(QAnimationGroup*, QEvent*);
    using QAnimationGroup_Duration_Callback = int (*)(const QAnimationGroup*);
    using QAnimationGroup_UpdateCurrentTime_Callback = void (*)(QAnimationGroup*, int);
    using QAnimationGroup_UpdateState_Callback = void (*)(QAnimationGroup*, int, int);
    using QAnimationGroup_UpdateDirection_Callback = void (*)(QAnimationGroup*, int);
    using QAnimationGroup_EventFilter_Callback = bool (*)(QAnimationGroup*, QObject*, QEvent*);
    using QAnimationGroup_TimerEvent_Callback = void (*)(QAnimationGroup*, QTimerEvent*);
    using QAnimationGroup_ChildEvent_Callback = void (*)(QAnimationGroup*, QChildEvent*);
    using QAnimationGroup_CustomEvent_Callback = void (*)(QAnimationGroup*, QEvent*);
    using QAnimationGroup_ConnectNotify_Callback = void (*)(QAnimationGroup*, QMetaMethod*);
    using QAnimationGroup_DisconnectNotify_Callback = void (*)(QAnimationGroup*, QMetaMethod*);
    using QAnimationGroup::isSignalConnected;
    using QAnimationGroup::receivers;
    using QAnimationGroup::sender;
    using QAnimationGroup::senderSignalIndex;

    // Instance callback storage
    QAnimationGroup_MetaObject_Callback qanimationgroup_metaobject_callback = nullptr;
    QAnimationGroup_Metacast_Callback qanimationgroup_metacast_callback = nullptr;
    QAnimationGroup_Metacall_Callback qanimationgroup_metacall_callback = nullptr;
    QAnimationGroup_Event_Callback qanimationgroup_event_callback = nullptr;
    QAnimationGroup_Duration_Callback qanimationgroup_duration_callback = nullptr;
    QAnimationGroup_UpdateCurrentTime_Callback qanimationgroup_updatecurrenttime_callback = nullptr;
    QAnimationGroup_UpdateState_Callback qanimationgroup_updatestate_callback = nullptr;
    QAnimationGroup_UpdateDirection_Callback qanimationgroup_updatedirection_callback = nullptr;
    QAnimationGroup_EventFilter_Callback qanimationgroup_eventfilter_callback = nullptr;
    QAnimationGroup_TimerEvent_Callback qanimationgroup_timerevent_callback = nullptr;
    QAnimationGroup_ChildEvent_Callback qanimationgroup_childevent_callback = nullptr;
    QAnimationGroup_CustomEvent_Callback qanimationgroup_customevent_callback = nullptr;
    QAnimationGroup_ConnectNotify_Callback qanimationgroup_connectnotify_callback = nullptr;
    QAnimationGroup_DisconnectNotify_Callback qanimationgroup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAnimationGroup {
        using QAnimationGroup::childEvent;
        using QAnimationGroup::connectNotify;
        using QAnimationGroup::customEvent;
        using QAnimationGroup::disconnectNotify;
        using QAnimationGroup::event;
        using QAnimationGroup::timerEvent;
        using QAnimationGroup::updateCurrentTime;
        using QAnimationGroup::updateDirection;
        using QAnimationGroup::updateState;
    };

    VirtualQAnimationGroup() : QAnimationGroup() {};
    VirtualQAnimationGroup(QObject* parent) : QAnimationGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qanimationgroup_metaobject_callback) {
            QMetaObject* callback_ret = qanimationgroup_metaobject_callback(this);
            return callback_ret;
        }
        return QAnimationGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qanimationgroup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qanimationgroup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAnimationGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qanimationgroup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qanimationgroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAnimationGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qanimationgroup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qanimationgroup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAnimationGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qanimationgroup_duration_callback) {
            int callback_ret = qanimationgroup_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAnimationGroup::duration called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        if (qanimationgroup_updatecurrenttime_callback) {
            int cbval1 = currentTime;
            qanimationgroup_updatecurrenttime_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAnimationGroup::updateCurrentTime called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qanimationgroup_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qanimationgroup_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QAnimationGroup::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qanimationgroup_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qanimationgroup_updatedirection_callback(this, cbval1);
            return;
        }
        QAnimationGroup::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qanimationgroup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qanimationgroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAnimationGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qanimationgroup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qanimationgroup_timerevent_callback(this, cbval1);
            return;
        }
        QAnimationGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qanimationgroup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qanimationgroup_childevent_callback(this, cbval1);
            return;
        }
        QAnimationGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qanimationgroup_customevent_callback) {
            QEvent* cbval1 = event;
            qanimationgroup_customevent_callback(this, cbval1);
            return;
        }
        QAnimationGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qanimationgroup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qanimationgroup_connectnotify_callback(this, cbval1);
            return;
        }
        QAnimationGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qanimationgroup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qanimationgroup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAnimationGroup::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAnimationGroup_SuperEvent(QAnimationGroup* self, QEvent* event);
    friend void QAnimationGroup_SuperUpdateState(QAnimationGroup* self, int newState, int oldState);
    friend void QAnimationGroup_SuperUpdateDirection(QAnimationGroup* self, int direction);
    friend void QAnimationGroup_SuperTimerEvent(QAnimationGroup* self, QTimerEvent* event);
    friend void QAnimationGroup_SuperChildEvent(QAnimationGroup* self, QChildEvent* event);
    friend void QAnimationGroup_SuperCustomEvent(QAnimationGroup* self, QEvent* event);
    friend void QAnimationGroup_SuperConnectNotify(QAnimationGroup* self, const QMetaMethod* signal);
    friend void QAnimationGroup_SuperDisconnectNotify(QAnimationGroup* self, const QMetaMethod* signal);
};

#endif
