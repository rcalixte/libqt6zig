#pragma once
#ifndef LIBQVARIANTANIMATION_HXX
#define LIBQVARIANTANIMATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QVariantAnimation
class VirtualQVariantAnimation final : public QVariantAnimation {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVariantAnimation_MetaObject_Callback = QMetaObject* (*)(const QVariantAnimation*);
    using QVariantAnimation_Metacast_Callback = void* (*)(QVariantAnimation*, const char*);
    using QVariantAnimation_Metacall_Callback = int (*)(QVariantAnimation*, int, int, void**);
    using QVariantAnimation_Duration_Callback = int (*)(const QVariantAnimation*);
    using QVariantAnimation_Event_Callback = bool (*)(QVariantAnimation*, QEvent*);
    using QVariantAnimation_UpdateCurrentTime_Callback = void (*)(QVariantAnimation*, int);
    using QVariantAnimation_UpdateState_Callback = void (*)(QVariantAnimation*, int, int);
    using QVariantAnimation_UpdateCurrentValue_Callback = void (*)(QVariantAnimation*, QVariant*);
    using QVariantAnimation_Interpolated_Callback = QVariant* (*)(const QVariantAnimation*, QVariant*, QVariant*, double);
    using QVariantAnimation_UpdateDirection_Callback = void (*)(QVariantAnimation*, int);
    using QVariantAnimation_EventFilter_Callback = bool (*)(QVariantAnimation*, QObject*, QEvent*);
    using QVariantAnimation_TimerEvent_Callback = void (*)(QVariantAnimation*, QTimerEvent*);
    using QVariantAnimation_ChildEvent_Callback = void (*)(QVariantAnimation*, QChildEvent*);
    using QVariantAnimation_CustomEvent_Callback = void (*)(QVariantAnimation*, QEvent*);
    using QVariantAnimation_ConnectNotify_Callback = void (*)(QVariantAnimation*, QMetaMethod*);
    using QVariantAnimation_DisconnectNotify_Callback = void (*)(QVariantAnimation*, QMetaMethod*);
    using QVariantAnimation::isSignalConnected;
    using QVariantAnimation::receivers;
    using QVariantAnimation::sender;
    using QVariantAnimation::senderSignalIndex;

    // Instance callback storage
    QVariantAnimation_MetaObject_Callback qvariantanimation_metaobject_callback = nullptr;
    QVariantAnimation_Metacast_Callback qvariantanimation_metacast_callback = nullptr;
    QVariantAnimation_Metacall_Callback qvariantanimation_metacall_callback = nullptr;
    QVariantAnimation_Duration_Callback qvariantanimation_duration_callback = nullptr;
    QVariantAnimation_Event_Callback qvariantanimation_event_callback = nullptr;
    QVariantAnimation_UpdateCurrentTime_Callback qvariantanimation_updatecurrenttime_callback = nullptr;
    QVariantAnimation_UpdateState_Callback qvariantanimation_updatestate_callback = nullptr;
    QVariantAnimation_UpdateCurrentValue_Callback qvariantanimation_updatecurrentvalue_callback = nullptr;
    QVariantAnimation_Interpolated_Callback qvariantanimation_interpolated_callback = nullptr;
    QVariantAnimation_UpdateDirection_Callback qvariantanimation_updatedirection_callback = nullptr;
    QVariantAnimation_EventFilter_Callback qvariantanimation_eventfilter_callback = nullptr;
    QVariantAnimation_TimerEvent_Callback qvariantanimation_timerevent_callback = nullptr;
    QVariantAnimation_ChildEvent_Callback qvariantanimation_childevent_callback = nullptr;
    QVariantAnimation_CustomEvent_Callback qvariantanimation_customevent_callback = nullptr;
    QVariantAnimation_ConnectNotify_Callback qvariantanimation_connectnotify_callback = nullptr;
    QVariantAnimation_DisconnectNotify_Callback qvariantanimation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVariantAnimation {
        using QVariantAnimation::childEvent;
        using QVariantAnimation::connectNotify;
        using QVariantAnimation::customEvent;
        using QVariantAnimation::disconnectNotify;
        using QVariantAnimation::event;
        using QVariantAnimation::interpolated;
        using QVariantAnimation::timerEvent;
        using QVariantAnimation::updateCurrentTime;
        using QVariantAnimation::updateCurrentValue;
        using QVariantAnimation::updateDirection;
        using QVariantAnimation::updateState;
    };

    VirtualQVariantAnimation() : QVariantAnimation() {};
    VirtualQVariantAnimation(QObject* parent) : QVariantAnimation(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvariantanimation_metaobject_callback) {
            QMetaObject* callback_ret = qvariantanimation_metaobject_callback(this);
            return callback_ret;
        }
        return QVariantAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvariantanimation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvariantanimation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVariantAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvariantanimation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvariantanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVariantAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qvariantanimation_duration_callback) {
            int callback_ret = qvariantanimation_duration_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QVariantAnimation::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvariantanimation_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvariantanimation_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVariantAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qvariantanimation_updatecurrenttime_callback) {
            int cbval1 = param1;
            qvariantanimation_updatecurrenttime_callback(this, cbval1);
            return;
        }
        QVariantAnimation::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qvariantanimation_updatestate_callback) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);
            qvariantanimation_updatestate_callback(this, cbval1, cbval2);
            return;
        }
        QVariantAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qvariantanimation_updatecurrentvalue_callback) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            qvariantanimation_updatecurrentvalue_callback(this, cbval1);
            return;
        }
        QVariantAnimation::updateCurrentValue(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qvariantanimation_interpolated_callback) {
            const QVariant& from_ret = from;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&from_ret);
            const QVariant& to_ret = to;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&to_ret);
            double cbval3 = static_cast<double>(progress);
            QVariant* callback_ret = qvariantanimation_interpolated_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVariantAnimation::interpolated(from, to, progress);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qvariantanimation_updatedirection_callback) {
            int cbval1 = static_cast<int>(direction);
            qvariantanimation_updatedirection_callback(this, cbval1);
            return;
        }
        QVariantAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvariantanimation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvariantanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVariantAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvariantanimation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvariantanimation_timerevent_callback(this, cbval1);
            return;
        }
        QVariantAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvariantanimation_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvariantanimation_childevent_callback(this, cbval1);
            return;
        }
        QVariantAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvariantanimation_customevent_callback) {
            QEvent* cbval1 = event;
            qvariantanimation_customevent_callback(this, cbval1);
            return;
        }
        QVariantAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvariantanimation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvariantanimation_connectnotify_callback(this, cbval1);
            return;
        }
        QVariantAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvariantanimation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvariantanimation_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVariantAnimation::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QVariantAnimation_SuperEvent(QVariantAnimation* self, QEvent* event);
    friend void QVariantAnimation_SuperUpdateCurrentTime(QVariantAnimation* self, int param1);
    friend void QVariantAnimation_SuperUpdateState(QVariantAnimation* self, int newState, int oldState);
    friend void QVariantAnimation_SuperUpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
    friend QVariant* QVariantAnimation_SuperInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend void QVariantAnimation_SuperUpdateDirection(QVariantAnimation* self, int direction);
    friend void QVariantAnimation_SuperTimerEvent(QVariantAnimation* self, QTimerEvent* event);
    friend void QVariantAnimation_SuperChildEvent(QVariantAnimation* self, QChildEvent* event);
    friend void QVariantAnimation_SuperCustomEvent(QVariantAnimation* self, QEvent* event);
    friend void QVariantAnimation_SuperConnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
    friend void QVariantAnimation_SuperDisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
};

#endif
