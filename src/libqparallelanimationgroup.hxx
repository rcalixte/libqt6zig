#pragma once
#ifndef LIBQPARALLELANIMATIONGROUP_HXX
#define LIBQPARALLELANIMATIONGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QParallelAnimationGroup
class VirtualQParallelAnimationGroup final : public QParallelAnimationGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QParallelAnimationGroup_MetaObject_Callback = QMetaObject* (*)(const QParallelAnimationGroup*);
    using QParallelAnimationGroup_Metacast_Callback = void* (*)(QParallelAnimationGroup*, const char*);
    using QParallelAnimationGroup_Metacall_Callback = int (*)(QParallelAnimationGroup*, int, int, void**);
    using QParallelAnimationGroup_Duration_Callback = int (*)(const QParallelAnimationGroup*);
    using QParallelAnimationGroup_Event_Callback = bool (*)(QParallelAnimationGroup*, QEvent*);
    using QParallelAnimationGroup_UpdateCurrentTime_Callback = void (*)(QParallelAnimationGroup*, int);
    using QParallelAnimationGroup_UpdateState_Callback = void (*)(QParallelAnimationGroup*, int, int);
    using QParallelAnimationGroup_UpdateDirection_Callback = void (*)(QParallelAnimationGroup*, int);
    using QParallelAnimationGroup_EventFilter_Callback = bool (*)(QParallelAnimationGroup*, QObject*, QEvent*);
    using QParallelAnimationGroup_TimerEvent_Callback = void (*)(QParallelAnimationGroup*, QTimerEvent*);
    using QParallelAnimationGroup_ChildEvent_Callback = void (*)(QParallelAnimationGroup*, QChildEvent*);
    using QParallelAnimationGroup_CustomEvent_Callback = void (*)(QParallelAnimationGroup*, QEvent*);
    using QParallelAnimationGroup_ConnectNotify_Callback = void (*)(QParallelAnimationGroup*, QMetaMethod*);
    using QParallelAnimationGroup_DisconnectNotify_Callback = void (*)(QParallelAnimationGroup*, QMetaMethod*);
    using QParallelAnimationGroup::isSignalConnected;
    using QParallelAnimationGroup::receivers;
    using QParallelAnimationGroup::sender;
    using QParallelAnimationGroup::senderSignalIndex;

    // Instance callback storage
    QParallelAnimationGroup_MetaObject_Callback qparallelanimationgroup_metaobject_callback = nullptr;
    QParallelAnimationGroup_Metacast_Callback qparallelanimationgroup_metacast_callback = nullptr;
    QParallelAnimationGroup_Metacall_Callback qparallelanimationgroup_metacall_callback = nullptr;
    QParallelAnimationGroup_Duration_Callback qparallelanimationgroup_duration_callback = nullptr;
    QParallelAnimationGroup_Event_Callback qparallelanimationgroup_event_callback = nullptr;
    QParallelAnimationGroup_UpdateCurrentTime_Callback qparallelanimationgroup_updatecurrenttime_callback = nullptr;
    QParallelAnimationGroup_UpdateState_Callback qparallelanimationgroup_updatestate_callback = nullptr;
    QParallelAnimationGroup_UpdateDirection_Callback qparallelanimationgroup_updatedirection_callback = nullptr;
    QParallelAnimationGroup_EventFilter_Callback qparallelanimationgroup_eventfilter_callback = nullptr;
    QParallelAnimationGroup_TimerEvent_Callback qparallelanimationgroup_timerevent_callback = nullptr;
    QParallelAnimationGroup_ChildEvent_Callback qparallelanimationgroup_childevent_callback = nullptr;
    QParallelAnimationGroup_CustomEvent_Callback qparallelanimationgroup_customevent_callback = nullptr;
    QParallelAnimationGroup_ConnectNotify_Callback qparallelanimationgroup_connectnotify_callback = nullptr;
    QParallelAnimationGroup_DisconnectNotify_Callback qparallelanimationgroup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QParallelAnimationGroup {
        using QParallelAnimationGroup::childEvent;
        using QParallelAnimationGroup::connectNotify;
        using QParallelAnimationGroup::customEvent;
        using QParallelAnimationGroup::disconnectNotify;
        using QParallelAnimationGroup::event;
        using QParallelAnimationGroup::timerEvent;
        using QParallelAnimationGroup::updateCurrentTime;
        using QParallelAnimationGroup::updateDirection;
        using QParallelAnimationGroup::updateState;
    };

    VirtualQParallelAnimationGroup() : QParallelAnimationGroup() {};
    VirtualQParallelAnimationGroup(QObject* parent) : QParallelAnimationGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qparallelanimationgroup_metaobject_callback) {
            QMetaObject* callback_ret = qparallelanimationgroup_metaobject_callback(this);
            return callback_ret;
        }
        return QParallelAnimationGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qparallelanimationgroup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qparallelanimationgroup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QParallelAnimationGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qparallelanimationgroup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qparallelanimationgroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QParallelAnimationGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qparallelanimationgroup_duration_callback) {
            int callback_ret = qparallelanimationgroup_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QParallelAnimationGroup::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qparallelanimationgroup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qparallelanimationgroup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QParallelAnimationGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        if (qparallelanimationgroup_updatecurrenttime_callback) {
            int cbval1 = currentTime;
            qparallelanimationgroup_updatecurrenttime_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::updateCurrentTime(currentTime);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qparallelanimationgroup_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qparallelanimationgroup_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QParallelAnimationGroup::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qparallelanimationgroup_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qparallelanimationgroup_updatedirection_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qparallelanimationgroup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qparallelanimationgroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QParallelAnimationGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qparallelanimationgroup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qparallelanimationgroup_timerevent_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qparallelanimationgroup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qparallelanimationgroup_childevent_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qparallelanimationgroup_customevent_callback) {
            QEvent* cbval1 = event;
            qparallelanimationgroup_customevent_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qparallelanimationgroup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qparallelanimationgroup_connectnotify_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qparallelanimationgroup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qparallelanimationgroup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QParallelAnimationGroup::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QParallelAnimationGroup_SuperEvent(QParallelAnimationGroup* self, QEvent* event);
    friend void QParallelAnimationGroup_SuperUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
    friend void QParallelAnimationGroup_SuperUpdateState(QParallelAnimationGroup* self, int newState, int oldState);
    friend void QParallelAnimationGroup_SuperUpdateDirection(QParallelAnimationGroup* self, int direction);
    friend void QParallelAnimationGroup_SuperTimerEvent(QParallelAnimationGroup* self, QTimerEvent* event);
    friend void QParallelAnimationGroup_SuperChildEvent(QParallelAnimationGroup* self, QChildEvent* event);
    friend void QParallelAnimationGroup_SuperCustomEvent(QParallelAnimationGroup* self, QEvent* event);
    friend void QParallelAnimationGroup_SuperConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
    friend void QParallelAnimationGroup_SuperDisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
};

#endif
