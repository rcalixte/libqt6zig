#pragma once
#ifndef LIBQABSTRACTANIMATION_HXX
#define LIBQABSTRACTANIMATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractAnimation
class VirtualQAbstractAnimation : public QAbstractAnimation {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractAnimation_MetaObject_Callback = QMetaObject* (*)(const QAbstractAnimation*);
    using QAbstractAnimation_Metacast_Callback = void* (*)(QAbstractAnimation*, const char*);
    using QAbstractAnimation_Metacall_Callback = int (*)(QAbstractAnimation*, int, int, void**);
    using QAbstractAnimation_Duration_Callback = int (*)(const QAbstractAnimation*);
    using QAbstractAnimation_Event_Callback = bool (*)(QAbstractAnimation*, QEvent*);
    using QAbstractAnimation_UpdateCurrentTime_Callback = void (*)(QAbstractAnimation*, int);
    using QAbstractAnimation_UpdateState_Callback = void (*)(QAbstractAnimation*, int, int);
    using QAbstractAnimation_UpdateDirection_Callback = void (*)(QAbstractAnimation*, int);
    using QAbstractAnimation_EventFilter_Callback = bool (*)(QAbstractAnimation*, QObject*, QEvent*);
    using QAbstractAnimation_TimerEvent_Callback = void (*)(QAbstractAnimation*, QTimerEvent*);
    using QAbstractAnimation_ChildEvent_Callback = void (*)(QAbstractAnimation*, QChildEvent*);
    using QAbstractAnimation_CustomEvent_Callback = void (*)(QAbstractAnimation*, QEvent*);
    using QAbstractAnimation_ConnectNotify_Callback = void (*)(QAbstractAnimation*, QMetaMethod*);
    using QAbstractAnimation_DisconnectNotify_Callback = void (*)(QAbstractAnimation*, QMetaMethod*);
    using QAbstractAnimation::isSignalConnected;
    using QAbstractAnimation::receivers;
    using QAbstractAnimation::sender;
    using QAbstractAnimation::senderSignalIndex;

    // Instance callback storage
    QAbstractAnimation_MetaObject_Callback qabstractanimation_metaobject_callback = nullptr;
    QAbstractAnimation_Metacast_Callback qabstractanimation_metacast_callback = nullptr;
    QAbstractAnimation_Metacall_Callback qabstractanimation_metacall_callback = nullptr;
    QAbstractAnimation_Duration_Callback qabstractanimation_duration_callback = nullptr;
    QAbstractAnimation_Event_Callback qabstractanimation_event_callback = nullptr;
    QAbstractAnimation_UpdateCurrentTime_Callback qabstractanimation_updatecurrenttime_callback = nullptr;
    QAbstractAnimation_UpdateState_Callback qabstractanimation_updatestate_callback = nullptr;
    QAbstractAnimation_UpdateDirection_Callback qabstractanimation_updatedirection_callback = nullptr;
    QAbstractAnimation_EventFilter_Callback qabstractanimation_eventfilter_callback = nullptr;
    QAbstractAnimation_TimerEvent_Callback qabstractanimation_timerevent_callback = nullptr;
    QAbstractAnimation_ChildEvent_Callback qabstractanimation_childevent_callback = nullptr;
    QAbstractAnimation_CustomEvent_Callback qabstractanimation_customevent_callback = nullptr;
    QAbstractAnimation_ConnectNotify_Callback qabstractanimation_connectnotify_callback = nullptr;
    QAbstractAnimation_DisconnectNotify_Callback qabstractanimation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractAnimation {
        using QAbstractAnimation::childEvent;
        using QAbstractAnimation::connectNotify;
        using QAbstractAnimation::customEvent;
        using QAbstractAnimation::disconnectNotify;
        using QAbstractAnimation::event;
        using QAbstractAnimation::timerEvent;
        using QAbstractAnimation::updateCurrentTime;
        using QAbstractAnimation::updateDirection;
        using QAbstractAnimation::updateState;
    };

    VirtualQAbstractAnimation() : QAbstractAnimation() {};
    VirtualQAbstractAnimation(QObject* parent) : QAbstractAnimation(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractanimation_metaobject_callback) {
            QMetaObject* callback_ret = qabstractanimation_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractanimation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractanimation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractanimation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qabstractanimation_duration_callback) {
            int callback_ret = qabstractanimation_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractAnimation::duration called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractanimation_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractanimation_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        if (qabstractanimation_updatecurrenttime_callback) {
            int cbval1 = currentTime;
            qabstractanimation_updatecurrenttime_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractAnimation::updateCurrentTime called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qabstractanimation_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qabstractanimation_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qabstractanimation_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qabstractanimation_updatedirection_callback(this, cbval1);
            return;
        }
        QAbstractAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractanimation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractanimation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractanimation_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractanimation_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractanimation_childevent_callback(this, cbval1);
            return;
        }
        QAbstractAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractanimation_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractanimation_customevent_callback(this, cbval1);
            return;
        }
        QAbstractAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractanimation_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractanimation_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractAnimation::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAbstractAnimation_SuperEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_SuperUpdateState(QAbstractAnimation* self, int newState, int oldState);
    friend void QAbstractAnimation_SuperUpdateDirection(QAbstractAnimation* self, int direction);
    friend void QAbstractAnimation_SuperTimerEvent(QAbstractAnimation* self, QTimerEvent* event);
    friend void QAbstractAnimation_SuperChildEvent(QAbstractAnimation* self, QChildEvent* event);
    friend void QAbstractAnimation_SuperCustomEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_SuperConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_SuperDisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
};

// This class is a subclass of QAnimationDriver
class VirtualQAnimationDriver final : public QAnimationDriver {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAnimationDriver_MetaObject_Callback = QMetaObject* (*)(const QAnimationDriver*);
    using QAnimationDriver_Metacast_Callback = void* (*)(QAnimationDriver*, const char*);
    using QAnimationDriver_Metacall_Callback = int (*)(QAnimationDriver*, int, int, void**);
    using QAnimationDriver_Advance_Callback = void (*)(QAnimationDriver*);
    using QAnimationDriver_Elapsed_Callback = long long (*)(const QAnimationDriver*);
    using QAnimationDriver_Start_Callback = void (*)(QAnimationDriver*);
    using QAnimationDriver_Stop_Callback = void (*)(QAnimationDriver*);
    using QAnimationDriver_Event_Callback = bool (*)(QAnimationDriver*, QEvent*);
    using QAnimationDriver_EventFilter_Callback = bool (*)(QAnimationDriver*, QObject*, QEvent*);
    using QAnimationDriver_TimerEvent_Callback = void (*)(QAnimationDriver*, QTimerEvent*);
    using QAnimationDriver_ChildEvent_Callback = void (*)(QAnimationDriver*, QChildEvent*);
    using QAnimationDriver_CustomEvent_Callback = void (*)(QAnimationDriver*, QEvent*);
    using QAnimationDriver_ConnectNotify_Callback = void (*)(QAnimationDriver*, QMetaMethod*);
    using QAnimationDriver_DisconnectNotify_Callback = void (*)(QAnimationDriver*, QMetaMethod*);
    using QAnimationDriver::advanceAnimation;
    using QAnimationDriver::isSignalConnected;
    using QAnimationDriver::receivers;
    using QAnimationDriver::sender;
    using QAnimationDriver::senderSignalIndex;

    // Instance callback storage
    QAnimationDriver_MetaObject_Callback qanimationdriver_metaobject_callback = nullptr;
    QAnimationDriver_Metacast_Callback qanimationdriver_metacast_callback = nullptr;
    QAnimationDriver_Metacall_Callback qanimationdriver_metacall_callback = nullptr;
    QAnimationDriver_Advance_Callback qanimationdriver_advance_callback = nullptr;
    QAnimationDriver_Elapsed_Callback qanimationdriver_elapsed_callback = nullptr;
    QAnimationDriver_Start_Callback qanimationdriver_start_callback = nullptr;
    QAnimationDriver_Stop_Callback qanimationdriver_stop_callback = nullptr;
    QAnimationDriver_Event_Callback qanimationdriver_event_callback = nullptr;
    QAnimationDriver_EventFilter_Callback qanimationdriver_eventfilter_callback = nullptr;
    QAnimationDriver_TimerEvent_Callback qanimationdriver_timerevent_callback = nullptr;
    QAnimationDriver_ChildEvent_Callback qanimationdriver_childevent_callback = nullptr;
    QAnimationDriver_CustomEvent_Callback qanimationdriver_customevent_callback = nullptr;
    QAnimationDriver_ConnectNotify_Callback qanimationdriver_connectnotify_callback = nullptr;
    QAnimationDriver_DisconnectNotify_Callback qanimationdriver_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAnimationDriver {
        using QAnimationDriver::childEvent;
        using QAnimationDriver::connectNotify;
        using QAnimationDriver::customEvent;
        using QAnimationDriver::disconnectNotify;
        using QAnimationDriver::start;
        using QAnimationDriver::stop;
        using QAnimationDriver::timerEvent;
    };

    VirtualQAnimationDriver() : QAnimationDriver() {};
    VirtualQAnimationDriver(QObject* parent) : QAnimationDriver(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qanimationdriver_metaobject_callback) {
            QMetaObject* callback_ret = qanimationdriver_metaobject_callback(this);
            return callback_ret;
        }
        return QAnimationDriver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qanimationdriver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qanimationdriver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAnimationDriver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qanimationdriver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qanimationdriver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAnimationDriver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance() override {
        if (qanimationdriver_advance_callback) {
            qanimationdriver_advance_callback(this);
            return;
        }
        QAnimationDriver::advance();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 elapsed() const override {
        if (qanimationdriver_elapsed_callback) {
            long long callback_ret = qanimationdriver_elapsed_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QAnimationDriver::elapsed();
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (qanimationdriver_start_callback) {
            qanimationdriver_start_callback(this);
            return;
        }
        QAnimationDriver::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (qanimationdriver_stop_callback) {
            qanimationdriver_stop_callback(this);
            return;
        }
        QAnimationDriver::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qanimationdriver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qanimationdriver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAnimationDriver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qanimationdriver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qanimationdriver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAnimationDriver::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qanimationdriver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qanimationdriver_timerevent_callback(this, cbval1);
            return;
        }
        QAnimationDriver::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qanimationdriver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qanimationdriver_childevent_callback(this, cbval1);
            return;
        }
        QAnimationDriver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qanimationdriver_customevent_callback) {
            QEvent* cbval1 = event;
            qanimationdriver_customevent_callback(this, cbval1);
            return;
        }
        QAnimationDriver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qanimationdriver_connectnotify_callback(this, cbval1);
            return;
        }
        QAnimationDriver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qanimationdriver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAnimationDriver::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAnimationDriver_SuperStart(QAnimationDriver* self);
    friend void QAnimationDriver_SuperStop(QAnimationDriver* self);
    friend void QAnimationDriver_SuperTimerEvent(QAnimationDriver* self, QTimerEvent* event);
    friend void QAnimationDriver_SuperChildEvent(QAnimationDriver* self, QChildEvent* event);
    friend void QAnimationDriver_SuperCustomEvent(QAnimationDriver* self, QEvent* event);
    friend void QAnimationDriver_SuperConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_SuperDisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
};

#endif
