#pragma once
#ifndef LIBQPROPERTYANIMATION_HXX
#define LIBQPROPERTYANIMATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPropertyAnimation
class VirtualQPropertyAnimation final : public QPropertyAnimation {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPropertyAnimation_MetaObject_Callback = QMetaObject* (*)(const QPropertyAnimation*);
    using QPropertyAnimation_Metacast_Callback = void* (*)(QPropertyAnimation*, const char*);
    using QPropertyAnimation_Metacall_Callback = int (*)(QPropertyAnimation*, int, int, void**);
    using QPropertyAnimation_Event_Callback = bool (*)(QPropertyAnimation*, QEvent*);
    using QPropertyAnimation_UpdateCurrentValue_Callback = void (*)(QPropertyAnimation*, QVariant*);
    using QPropertyAnimation_UpdateState_Callback = void (*)(QPropertyAnimation*, int, int);
    using QPropertyAnimation_Duration_Callback = int (*)(const QPropertyAnimation*);
    using QPropertyAnimation_UpdateCurrentTime_Callback = void (*)(QPropertyAnimation*, int);
    using QPropertyAnimation_Interpolated_Callback = QVariant* (*)(const QPropertyAnimation*, QVariant*, QVariant*, double);
    using QPropertyAnimation_UpdateDirection_Callback = void (*)(QPropertyAnimation*, int);
    using QPropertyAnimation_EventFilter_Callback = bool (*)(QPropertyAnimation*, QObject*, QEvent*);
    using QPropertyAnimation_TimerEvent_Callback = void (*)(QPropertyAnimation*, QTimerEvent*);
    using QPropertyAnimation_ChildEvent_Callback = void (*)(QPropertyAnimation*, QChildEvent*);
    using QPropertyAnimation_CustomEvent_Callback = void (*)(QPropertyAnimation*, QEvent*);
    using QPropertyAnimation_ConnectNotify_Callback = void (*)(QPropertyAnimation*, QMetaMethod*);
    using QPropertyAnimation_DisconnectNotify_Callback = void (*)(QPropertyAnimation*, QMetaMethod*);
    using QPropertyAnimation::isSignalConnected;
    using QPropertyAnimation::receivers;
    using QPropertyAnimation::sender;
    using QPropertyAnimation::senderSignalIndex;

    // Instance callback storage
    QPropertyAnimation_MetaObject_Callback qpropertyanimation_metaobject_callback = nullptr;
    QPropertyAnimation_Metacast_Callback qpropertyanimation_metacast_callback = nullptr;
    QPropertyAnimation_Metacall_Callback qpropertyanimation_metacall_callback = nullptr;
    QPropertyAnimation_Event_Callback qpropertyanimation_event_callback = nullptr;
    QPropertyAnimation_UpdateCurrentValue_Callback qpropertyanimation_updatecurrentvalue_callback = nullptr;
    QPropertyAnimation_UpdateState_Callback qpropertyanimation_updatestate_callback = nullptr;
    QPropertyAnimation_Duration_Callback qpropertyanimation_duration_callback = nullptr;
    QPropertyAnimation_UpdateCurrentTime_Callback qpropertyanimation_updatecurrenttime_callback = nullptr;
    QPropertyAnimation_Interpolated_Callback qpropertyanimation_interpolated_callback = nullptr;
    QPropertyAnimation_UpdateDirection_Callback qpropertyanimation_updatedirection_callback = nullptr;
    QPropertyAnimation_EventFilter_Callback qpropertyanimation_eventfilter_callback = nullptr;
    QPropertyAnimation_TimerEvent_Callback qpropertyanimation_timerevent_callback = nullptr;
    QPropertyAnimation_ChildEvent_Callback qpropertyanimation_childevent_callback = nullptr;
    QPropertyAnimation_CustomEvent_Callback qpropertyanimation_customevent_callback = nullptr;
    QPropertyAnimation_ConnectNotify_Callback qpropertyanimation_connectnotify_callback = nullptr;
    QPropertyAnimation_DisconnectNotify_Callback qpropertyanimation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPropertyAnimation {
        using QPropertyAnimation::childEvent;
        using QPropertyAnimation::connectNotify;
        using QPropertyAnimation::customEvent;
        using QPropertyAnimation::disconnectNotify;
        using QPropertyAnimation::event;
        using QPropertyAnimation::interpolated;
        using QPropertyAnimation::timerEvent;
        using QPropertyAnimation::updateCurrentTime;
        using QPropertyAnimation::updateCurrentValue;
        using QPropertyAnimation::updateDirection;
        using QPropertyAnimation::updateState;
    };

    VirtualQPropertyAnimation() : QPropertyAnimation() {};
    VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName) : QPropertyAnimation(target, propertyName) {};
    VirtualQPropertyAnimation(QObject* parent) : QPropertyAnimation(parent) {};
    VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent) : QPropertyAnimation(target, propertyName, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpropertyanimation_metaobject_callback) {
            QMetaObject* callback_ret = qpropertyanimation_metaobject_callback(this);
            return callback_ret;
        }
        return QPropertyAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpropertyanimation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpropertyanimation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPropertyAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpropertyanimation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpropertyanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPropertyAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpropertyanimation_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpropertyanimation_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPropertyAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qpropertyanimation_updatecurrentvalue_callback) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            qpropertyanimation_updatecurrentvalue_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::updateCurrentValue(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qpropertyanimation_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qpropertyanimation_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QPropertyAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qpropertyanimation_duration_callback) {
            int callback_ret = qpropertyanimation_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPropertyAnimation::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qpropertyanimation_updatecurrenttime_callback) {
            int cbval1 = param1;
            qpropertyanimation_updatecurrenttime_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qpropertyanimation_interpolated_callback) {
            const QVariant& from_ret = from;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&from_ret);
            const QVariant& to_ret = to;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&to_ret);
            double cbval3 = static_cast<double>(progress);
            QVariant* callback_ret = qpropertyanimation_interpolated_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPropertyAnimation::interpolated(from, to, progress);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qpropertyanimation_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qpropertyanimation_updatedirection_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpropertyanimation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpropertyanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPropertyAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpropertyanimation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpropertyanimation_timerevent_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpropertyanimation_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpropertyanimation_childevent_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpropertyanimation_customevent_callback) {
            QEvent* cbval1 = event;
            qpropertyanimation_customevent_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpropertyanimation_connectnotify_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpropertyanimation_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPropertyAnimation::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QPropertyAnimation_SuperEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_SuperUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
    friend void QPropertyAnimation_SuperUpdateState(QPropertyAnimation* self, int newState, int oldState);
    friend void QPropertyAnimation_SuperUpdateCurrentTime(QPropertyAnimation* self, int param1);
    friend QVariant* QPropertyAnimation_SuperInterpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend void QPropertyAnimation_SuperUpdateDirection(QPropertyAnimation* self, int direction);
    friend void QPropertyAnimation_SuperTimerEvent(QPropertyAnimation* self, QTimerEvent* event);
    friend void QPropertyAnimation_SuperChildEvent(QPropertyAnimation* self, QChildEvent* event);
    friend void QPropertyAnimation_SuperCustomEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_SuperConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_SuperDisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
};

#endif
