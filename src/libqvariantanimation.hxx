#pragma once
#ifndef SRCC_LIBVIRTUALQVARIANTANIMATION_H
#define SRCC_LIBVIRTUALQVARIANTANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QVariantAnimation so that we can call protected methods
class VirtualQVariantAnimation final : public QVariantAnimation {

  public:
    // Virtual class boolean flag
    bool isVirtualQVariantAnimation = true;

    // Virtual class public types (including callbacks)
    using QVariantAnimation_MetaObject_Callback = QMetaObject* (*)();
    using QVariantAnimation_Metacast_Callback = void* (*)(QVariantAnimation*, const char*);
    using QVariantAnimation_Metacall_Callback = int (*)(QVariantAnimation*, int, int, void**);
    using QVariantAnimation_Duration_Callback = int (*)();
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
    using QVariantAnimation_Sender_Callback = QObject* (*)();
    using QVariantAnimation_SenderSignalIndex_Callback = int (*)();
    using QVariantAnimation_Receivers_Callback = int (*)(const QVariantAnimation*, const char*);
    using QVariantAnimation_IsSignalConnected_Callback = bool (*)(const QVariantAnimation*, QMetaMethod*);

  protected:
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
    QVariantAnimation_Sender_Callback qvariantanimation_sender_callback = nullptr;
    QVariantAnimation_SenderSignalIndex_Callback qvariantanimation_sendersignalindex_callback = nullptr;
    QVariantAnimation_Receivers_Callback qvariantanimation_receivers_callback = nullptr;
    QVariantAnimation_IsSignalConnected_Callback qvariantanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvariantanimation_metaobject_isbase = false;
    mutable bool qvariantanimation_metacast_isbase = false;
    mutable bool qvariantanimation_metacall_isbase = false;
    mutable bool qvariantanimation_duration_isbase = false;
    mutable bool qvariantanimation_event_isbase = false;
    mutable bool qvariantanimation_updatecurrenttime_isbase = false;
    mutable bool qvariantanimation_updatestate_isbase = false;
    mutable bool qvariantanimation_updatecurrentvalue_isbase = false;
    mutable bool qvariantanimation_interpolated_isbase = false;
    mutable bool qvariantanimation_updatedirection_isbase = false;
    mutable bool qvariantanimation_eventfilter_isbase = false;
    mutable bool qvariantanimation_timerevent_isbase = false;
    mutable bool qvariantanimation_childevent_isbase = false;
    mutable bool qvariantanimation_customevent_isbase = false;
    mutable bool qvariantanimation_connectnotify_isbase = false;
    mutable bool qvariantanimation_disconnectnotify_isbase = false;
    mutable bool qvariantanimation_sender_isbase = false;
    mutable bool qvariantanimation_sendersignalindex_isbase = false;
    mutable bool qvariantanimation_receivers_isbase = false;
    mutable bool qvariantanimation_issignalconnected_isbase = false;

  public:
    VirtualQVariantAnimation() : QVariantAnimation() {};
    VirtualQVariantAnimation(QObject* parent) : QVariantAnimation(parent) {};

    // Callback setters
    inline void setQVariantAnimation_MetaObject_Callback(QVariantAnimation_MetaObject_Callback cb) { qvariantanimation_metaobject_callback = cb; }
    inline void setQVariantAnimation_Metacast_Callback(QVariantAnimation_Metacast_Callback cb) { qvariantanimation_metacast_callback = cb; }
    inline void setQVariantAnimation_Metacall_Callback(QVariantAnimation_Metacall_Callback cb) { qvariantanimation_metacall_callback = cb; }
    inline void setQVariantAnimation_Duration_Callback(QVariantAnimation_Duration_Callback cb) { qvariantanimation_duration_callback = cb; }
    inline void setQVariantAnimation_Event_Callback(QVariantAnimation_Event_Callback cb) { qvariantanimation_event_callback = cb; }
    inline void setQVariantAnimation_UpdateCurrentTime_Callback(QVariantAnimation_UpdateCurrentTime_Callback cb) { qvariantanimation_updatecurrenttime_callback = cb; }
    inline void setQVariantAnimation_UpdateState_Callback(QVariantAnimation_UpdateState_Callback cb) { qvariantanimation_updatestate_callback = cb; }
    inline void setQVariantAnimation_UpdateCurrentValue_Callback(QVariantAnimation_UpdateCurrentValue_Callback cb) { qvariantanimation_updatecurrentvalue_callback = cb; }
    inline void setQVariantAnimation_Interpolated_Callback(QVariantAnimation_Interpolated_Callback cb) { qvariantanimation_interpolated_callback = cb; }
    inline void setQVariantAnimation_UpdateDirection_Callback(QVariantAnimation_UpdateDirection_Callback cb) { qvariantanimation_updatedirection_callback = cb; }
    inline void setQVariantAnimation_EventFilter_Callback(QVariantAnimation_EventFilter_Callback cb) { qvariantanimation_eventfilter_callback = cb; }
    inline void setQVariantAnimation_TimerEvent_Callback(QVariantAnimation_TimerEvent_Callback cb) { qvariantanimation_timerevent_callback = cb; }
    inline void setQVariantAnimation_ChildEvent_Callback(QVariantAnimation_ChildEvent_Callback cb) { qvariantanimation_childevent_callback = cb; }
    inline void setQVariantAnimation_CustomEvent_Callback(QVariantAnimation_CustomEvent_Callback cb) { qvariantanimation_customevent_callback = cb; }
    inline void setQVariantAnimation_ConnectNotify_Callback(QVariantAnimation_ConnectNotify_Callback cb) { qvariantanimation_connectnotify_callback = cb; }
    inline void setQVariantAnimation_DisconnectNotify_Callback(QVariantAnimation_DisconnectNotify_Callback cb) { qvariantanimation_disconnectnotify_callback = cb; }
    inline void setQVariantAnimation_Sender_Callback(QVariantAnimation_Sender_Callback cb) { qvariantanimation_sender_callback = cb; }
    inline void setQVariantAnimation_SenderSignalIndex_Callback(QVariantAnimation_SenderSignalIndex_Callback cb) { qvariantanimation_sendersignalindex_callback = cb; }
    inline void setQVariantAnimation_Receivers_Callback(QVariantAnimation_Receivers_Callback cb) { qvariantanimation_receivers_callback = cb; }
    inline void setQVariantAnimation_IsSignalConnected_Callback(QVariantAnimation_IsSignalConnected_Callback cb) { qvariantanimation_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVariantAnimation_MetaObject_IsBase(bool value) const { qvariantanimation_metaobject_isbase = value; }
    inline void setQVariantAnimation_Metacast_IsBase(bool value) const { qvariantanimation_metacast_isbase = value; }
    inline void setQVariantAnimation_Metacall_IsBase(bool value) const { qvariantanimation_metacall_isbase = value; }
    inline void setQVariantAnimation_Duration_IsBase(bool value) const { qvariantanimation_duration_isbase = value; }
    inline void setQVariantAnimation_Event_IsBase(bool value) const { qvariantanimation_event_isbase = value; }
    inline void setQVariantAnimation_UpdateCurrentTime_IsBase(bool value) const { qvariantanimation_updatecurrenttime_isbase = value; }
    inline void setQVariantAnimation_UpdateState_IsBase(bool value) const { qvariantanimation_updatestate_isbase = value; }
    inline void setQVariantAnimation_UpdateCurrentValue_IsBase(bool value) const { qvariantanimation_updatecurrentvalue_isbase = value; }
    inline void setQVariantAnimation_Interpolated_IsBase(bool value) const { qvariantanimation_interpolated_isbase = value; }
    inline void setQVariantAnimation_UpdateDirection_IsBase(bool value) const { qvariantanimation_updatedirection_isbase = value; }
    inline void setQVariantAnimation_EventFilter_IsBase(bool value) const { qvariantanimation_eventfilter_isbase = value; }
    inline void setQVariantAnimation_TimerEvent_IsBase(bool value) const { qvariantanimation_timerevent_isbase = value; }
    inline void setQVariantAnimation_ChildEvent_IsBase(bool value) const { qvariantanimation_childevent_isbase = value; }
    inline void setQVariantAnimation_CustomEvent_IsBase(bool value) const { qvariantanimation_customevent_isbase = value; }
    inline void setQVariantAnimation_ConnectNotify_IsBase(bool value) const { qvariantanimation_connectnotify_isbase = value; }
    inline void setQVariantAnimation_DisconnectNotify_IsBase(bool value) const { qvariantanimation_disconnectnotify_isbase = value; }
    inline void setQVariantAnimation_Sender_IsBase(bool value) const { qvariantanimation_sender_isbase = value; }
    inline void setQVariantAnimation_SenderSignalIndex_IsBase(bool value) const { qvariantanimation_sendersignalindex_isbase = value; }
    inline void setQVariantAnimation_Receivers_IsBase(bool value) const { qvariantanimation_receivers_isbase = value; }
    inline void setQVariantAnimation_IsSignalConnected_IsBase(bool value) const { qvariantanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvariantanimation_metaobject_isbase) {
            qvariantanimation_metaobject_isbase = false;
            return QVariantAnimation::metaObject();
        }
        auto metaobject_cb = qvariantanimation_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVariantAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvariantanimation_metacast_isbase) {
            qvariantanimation_metacast_isbase = false;
            return QVariantAnimation::qt_metacast(param1);
        }
        auto metacast_cb = qvariantanimation_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVariantAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvariantanimation_metacall_isbase) {
            qvariantanimation_metacall_isbase = false;
            return QVariantAnimation::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvariantanimation_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVariantAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qvariantanimation_duration_isbase) {
            qvariantanimation_duration_isbase = false;
            return QVariantAnimation::duration();
        }
        auto duration_cb = qvariantanimation_duration_callback;
        if (duration_cb) {
            int callback_ret = duration_cb();
            return static_cast<int>(callback_ret);
        }
        return QVariantAnimation::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvariantanimation_event_isbase) {
            qvariantanimation_event_isbase = false;
            return QVariantAnimation::event(event);
        }
        auto event_cb = qvariantanimation_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVariantAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qvariantanimation_updatecurrenttime_isbase) {
            qvariantanimation_updatecurrenttime_isbase = false;
            QVariantAnimation::updateCurrentTime(param1);
            return;
        }
        auto updatecurrenttime_cb = qvariantanimation_updatecurrenttime_callback;
        if (updatecurrenttime_cb) {
            int cbval1 = param1;

            updatecurrenttime_cb(this, cbval1);
            return;
        }
        QVariantAnimation::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qvariantanimation_updatestate_isbase) {
            qvariantanimation_updatestate_isbase = false;
            QVariantAnimation::updateState(newState, oldState);
            return;
        }
        auto updatestate_cb = qvariantanimation_updatestate_callback;
        if (updatestate_cb) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            updatestate_cb(this, cbval1, cbval2);
            return;
        }
        QVariantAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qvariantanimation_updatecurrentvalue_isbase) {
            qvariantanimation_updatecurrentvalue_isbase = false;
            QVariantAnimation::updateCurrentValue(value);
            return;
        }
        auto updatecurrentvalue_cb = qvariantanimation_updatecurrentvalue_callback;
        if (updatecurrentvalue_cb) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);

            updatecurrentvalue_cb(this, cbval1);
            return;
        }
        QVariantAnimation::updateCurrentValue(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qvariantanimation_interpolated_isbase) {
            qvariantanimation_interpolated_isbase = false;
            return QVariantAnimation::interpolated(from, to, progress);
        }
        auto interpolated_cb = qvariantanimation_interpolated_callback;
        if (interpolated_cb) {
            const QVariant& from_ret = from;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&from_ret);
            const QVariant& to_ret = to;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&to_ret);
            double cbval3 = static_cast<double>(progress);

            QVariant* callback_ret = interpolated_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return QVariantAnimation::interpolated(from, to, progress);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qvariantanimation_updatedirection_isbase) {
            qvariantanimation_updatedirection_isbase = false;
            QVariantAnimation::updateDirection(direction);
            return;
        }
        auto updatedirection_cb = qvariantanimation_updatedirection_callback;
        if (updatedirection_cb) {
            int cbval1 = static_cast<int>(direction);

            updatedirection_cb(this, cbval1);
            return;
        }
        QVariantAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvariantanimation_eventfilter_isbase) {
            qvariantanimation_eventfilter_isbase = false;
            return QVariantAnimation::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvariantanimation_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVariantAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvariantanimation_timerevent_isbase) {
            qvariantanimation_timerevent_isbase = false;
            QVariantAnimation::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvariantanimation_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QVariantAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvariantanimation_childevent_isbase) {
            qvariantanimation_childevent_isbase = false;
            QVariantAnimation::childEvent(event);
            return;
        }
        auto childevent_cb = qvariantanimation_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QVariantAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvariantanimation_customevent_isbase) {
            qvariantanimation_customevent_isbase = false;
            QVariantAnimation::customEvent(event);
            return;
        }
        auto customevent_cb = qvariantanimation_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QVariantAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvariantanimation_connectnotify_isbase) {
            qvariantanimation_connectnotify_isbase = false;
            QVariantAnimation::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvariantanimation_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QVariantAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvariantanimation_disconnectnotify_isbase) {
            qvariantanimation_disconnectnotify_isbase = false;
            QVariantAnimation::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvariantanimation_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVariantAnimation::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvariantanimation_sender_isbase) {
            qvariantanimation_sender_isbase = false;
            return QVariantAnimation::sender();
        }
        auto sender_cb = qvariantanimation_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVariantAnimation::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvariantanimation_sendersignalindex_isbase) {
            qvariantanimation_sendersignalindex_isbase = false;
            return QVariantAnimation::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvariantanimation_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVariantAnimation::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvariantanimation_receivers_isbase) {
            qvariantanimation_receivers_isbase = false;
            return QVariantAnimation::receivers(signal);
        }
        auto receivers_cb = qvariantanimation_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVariantAnimation::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvariantanimation_issignalconnected_isbase) {
            qvariantanimation_issignalconnected_isbase = false;
            return QVariantAnimation::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvariantanimation_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVariantAnimation::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event);
    friend bool QVariantAnimation_SuperEvent(QVariantAnimation* self, QEvent* event);
    friend void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1);
    friend void QVariantAnimation_SuperUpdateCurrentTime(QVariantAnimation* self, int param1);
    friend void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState);
    friend void QVariantAnimation_SuperUpdateState(QVariantAnimation* self, int newState, int oldState);
    friend void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
    friend void QVariantAnimation_SuperUpdateCurrentValue(QVariantAnimation* self, const QVariant* value);
    friend QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend QVariant* QVariantAnimation_SuperInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend void QVariantAnimation_UpdateDirection(QVariantAnimation* self, int direction);
    friend void QVariantAnimation_SuperUpdateDirection(QVariantAnimation* self, int direction);
    friend void QVariantAnimation_TimerEvent(QVariantAnimation* self, QTimerEvent* event);
    friend void QVariantAnimation_SuperTimerEvent(QVariantAnimation* self, QTimerEvent* event);
    friend void QVariantAnimation_ChildEvent(QVariantAnimation* self, QChildEvent* event);
    friend void QVariantAnimation_SuperChildEvent(QVariantAnimation* self, QChildEvent* event);
    friend void QVariantAnimation_CustomEvent(QVariantAnimation* self, QEvent* event);
    friend void QVariantAnimation_SuperCustomEvent(QVariantAnimation* self, QEvent* event);
    friend void QVariantAnimation_ConnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
    friend void QVariantAnimation_SuperConnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
    friend void QVariantAnimation_DisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
    friend void QVariantAnimation_SuperDisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal);
    friend QObject* QVariantAnimation_Sender(const QVariantAnimation* self);
    friend QObject* QVariantAnimation_SuperSender(const QVariantAnimation* self);
    friend int QVariantAnimation_SenderSignalIndex(const QVariantAnimation* self);
    friend int QVariantAnimation_SuperSenderSignalIndex(const QVariantAnimation* self);
    friend int QVariantAnimation_Receivers(const QVariantAnimation* self, const char* signal);
    friend int QVariantAnimation_SuperReceivers(const QVariantAnimation* self, const char* signal);
    friend bool QVariantAnimation_IsSignalConnected(const QVariantAnimation* self, const QMetaMethod* signal);
    friend bool QVariantAnimation_SuperIsSignalConnected(const QVariantAnimation* self, const QMetaMethod* signal);
};

#endif
