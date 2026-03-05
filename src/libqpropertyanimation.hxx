#pragma once
#ifndef SRCC_LIBVIRTUALQPROPERTYANIMATION_H
#define SRCC_LIBVIRTUALQPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPropertyAnimation so that we can call protected methods
class VirtualQPropertyAnimation final : public QPropertyAnimation {

  public:
    // Virtual class boolean flag
    bool isVirtualQPropertyAnimation = true;

    // Virtual class public types (including callbacks)
    using QPropertyAnimation_MetaObject_Callback = QMetaObject* (*)();
    using QPropertyAnimation_Metacast_Callback = void* (*)(QPropertyAnimation*, const char*);
    using QPropertyAnimation_Metacall_Callback = int (*)(QPropertyAnimation*, int, int, void**);
    using QPropertyAnimation_Event_Callback = bool (*)(QPropertyAnimation*, QEvent*);
    using QPropertyAnimation_UpdateCurrentValue_Callback = void (*)(QPropertyAnimation*, QVariant*);
    using QPropertyAnimation_UpdateState_Callback = void (*)(QPropertyAnimation*, int, int);
    using QPropertyAnimation_Duration_Callback = int (*)();
    using QPropertyAnimation_UpdateCurrentTime_Callback = void (*)(QPropertyAnimation*, int);
    using QPropertyAnimation_Interpolated_Callback = QVariant* (*)(const QPropertyAnimation*, QVariant*, QVariant*, double);
    using QPropertyAnimation_UpdateDirection_Callback = void (*)(QPropertyAnimation*, int);
    using QPropertyAnimation_EventFilter_Callback = bool (*)(QPropertyAnimation*, QObject*, QEvent*);
    using QPropertyAnimation_TimerEvent_Callback = void (*)(QPropertyAnimation*, QTimerEvent*);
    using QPropertyAnimation_ChildEvent_Callback = void (*)(QPropertyAnimation*, QChildEvent*);
    using QPropertyAnimation_CustomEvent_Callback = void (*)(QPropertyAnimation*, QEvent*);
    using QPropertyAnimation_ConnectNotify_Callback = void (*)(QPropertyAnimation*, QMetaMethod*);
    using QPropertyAnimation_DisconnectNotify_Callback = void (*)(QPropertyAnimation*, QMetaMethod*);
    using QPropertyAnimation_Sender_Callback = QObject* (*)();
    using QPropertyAnimation_SenderSignalIndex_Callback = int (*)();
    using QPropertyAnimation_Receivers_Callback = int (*)(const QPropertyAnimation*, const char*);
    using QPropertyAnimation_IsSignalConnected_Callback = bool (*)(const QPropertyAnimation*, QMetaMethod*);

  protected:
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
    QPropertyAnimation_Sender_Callback qpropertyanimation_sender_callback = nullptr;
    QPropertyAnimation_SenderSignalIndex_Callback qpropertyanimation_sendersignalindex_callback = nullptr;
    QPropertyAnimation_Receivers_Callback qpropertyanimation_receivers_callback = nullptr;
    QPropertyAnimation_IsSignalConnected_Callback qpropertyanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpropertyanimation_metaobject_isbase = false;
    mutable bool qpropertyanimation_metacast_isbase = false;
    mutable bool qpropertyanimation_metacall_isbase = false;
    mutable bool qpropertyanimation_event_isbase = false;
    mutable bool qpropertyanimation_updatecurrentvalue_isbase = false;
    mutable bool qpropertyanimation_updatestate_isbase = false;
    mutable bool qpropertyanimation_duration_isbase = false;
    mutable bool qpropertyanimation_updatecurrenttime_isbase = false;
    mutable bool qpropertyanimation_interpolated_isbase = false;
    mutable bool qpropertyanimation_updatedirection_isbase = false;
    mutable bool qpropertyanimation_eventfilter_isbase = false;
    mutable bool qpropertyanimation_timerevent_isbase = false;
    mutable bool qpropertyanimation_childevent_isbase = false;
    mutable bool qpropertyanimation_customevent_isbase = false;
    mutable bool qpropertyanimation_connectnotify_isbase = false;
    mutable bool qpropertyanimation_disconnectnotify_isbase = false;
    mutable bool qpropertyanimation_sender_isbase = false;
    mutable bool qpropertyanimation_sendersignalindex_isbase = false;
    mutable bool qpropertyanimation_receivers_isbase = false;
    mutable bool qpropertyanimation_issignalconnected_isbase = false;

  public:
    VirtualQPropertyAnimation() : QPropertyAnimation() {};
    VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName) : QPropertyAnimation(target, propertyName) {};
    VirtualQPropertyAnimation(QObject* parent) : QPropertyAnimation(parent) {};
    VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent) : QPropertyAnimation(target, propertyName, parent) {};

    // Callback setters
    inline void setQPropertyAnimation_MetaObject_Callback(QPropertyAnimation_MetaObject_Callback cb) { qpropertyanimation_metaobject_callback = cb; }
    inline void setQPropertyAnimation_Metacast_Callback(QPropertyAnimation_Metacast_Callback cb) { qpropertyanimation_metacast_callback = cb; }
    inline void setQPropertyAnimation_Metacall_Callback(QPropertyAnimation_Metacall_Callback cb) { qpropertyanimation_metacall_callback = cb; }
    inline void setQPropertyAnimation_Event_Callback(QPropertyAnimation_Event_Callback cb) { qpropertyanimation_event_callback = cb; }
    inline void setQPropertyAnimation_UpdateCurrentValue_Callback(QPropertyAnimation_UpdateCurrentValue_Callback cb) { qpropertyanimation_updatecurrentvalue_callback = cb; }
    inline void setQPropertyAnimation_UpdateState_Callback(QPropertyAnimation_UpdateState_Callback cb) { qpropertyanimation_updatestate_callback = cb; }
    inline void setQPropertyAnimation_Duration_Callback(QPropertyAnimation_Duration_Callback cb) { qpropertyanimation_duration_callback = cb; }
    inline void setQPropertyAnimation_UpdateCurrentTime_Callback(QPropertyAnimation_UpdateCurrentTime_Callback cb) { qpropertyanimation_updatecurrenttime_callback = cb; }
    inline void setQPropertyAnimation_Interpolated_Callback(QPropertyAnimation_Interpolated_Callback cb) { qpropertyanimation_interpolated_callback = cb; }
    inline void setQPropertyAnimation_UpdateDirection_Callback(QPropertyAnimation_UpdateDirection_Callback cb) { qpropertyanimation_updatedirection_callback = cb; }
    inline void setQPropertyAnimation_EventFilter_Callback(QPropertyAnimation_EventFilter_Callback cb) { qpropertyanimation_eventfilter_callback = cb; }
    inline void setQPropertyAnimation_TimerEvent_Callback(QPropertyAnimation_TimerEvent_Callback cb) { qpropertyanimation_timerevent_callback = cb; }
    inline void setQPropertyAnimation_ChildEvent_Callback(QPropertyAnimation_ChildEvent_Callback cb) { qpropertyanimation_childevent_callback = cb; }
    inline void setQPropertyAnimation_CustomEvent_Callback(QPropertyAnimation_CustomEvent_Callback cb) { qpropertyanimation_customevent_callback = cb; }
    inline void setQPropertyAnimation_ConnectNotify_Callback(QPropertyAnimation_ConnectNotify_Callback cb) { qpropertyanimation_connectnotify_callback = cb; }
    inline void setQPropertyAnimation_DisconnectNotify_Callback(QPropertyAnimation_DisconnectNotify_Callback cb) { qpropertyanimation_disconnectnotify_callback = cb; }
    inline void setQPropertyAnimation_Sender_Callback(QPropertyAnimation_Sender_Callback cb) { qpropertyanimation_sender_callback = cb; }
    inline void setQPropertyAnimation_SenderSignalIndex_Callback(QPropertyAnimation_SenderSignalIndex_Callback cb) { qpropertyanimation_sendersignalindex_callback = cb; }
    inline void setQPropertyAnimation_Receivers_Callback(QPropertyAnimation_Receivers_Callback cb) { qpropertyanimation_receivers_callback = cb; }
    inline void setQPropertyAnimation_IsSignalConnected_Callback(QPropertyAnimation_IsSignalConnected_Callback cb) { qpropertyanimation_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPropertyAnimation_MetaObject_IsBase(bool value) const { qpropertyanimation_metaobject_isbase = value; }
    inline void setQPropertyAnimation_Metacast_IsBase(bool value) const { qpropertyanimation_metacast_isbase = value; }
    inline void setQPropertyAnimation_Metacall_IsBase(bool value) const { qpropertyanimation_metacall_isbase = value; }
    inline void setQPropertyAnimation_Event_IsBase(bool value) const { qpropertyanimation_event_isbase = value; }
    inline void setQPropertyAnimation_UpdateCurrentValue_IsBase(bool value) const { qpropertyanimation_updatecurrentvalue_isbase = value; }
    inline void setQPropertyAnimation_UpdateState_IsBase(bool value) const { qpropertyanimation_updatestate_isbase = value; }
    inline void setQPropertyAnimation_Duration_IsBase(bool value) const { qpropertyanimation_duration_isbase = value; }
    inline void setQPropertyAnimation_UpdateCurrentTime_IsBase(bool value) const { qpropertyanimation_updatecurrenttime_isbase = value; }
    inline void setQPropertyAnimation_Interpolated_IsBase(bool value) const { qpropertyanimation_interpolated_isbase = value; }
    inline void setQPropertyAnimation_UpdateDirection_IsBase(bool value) const { qpropertyanimation_updatedirection_isbase = value; }
    inline void setQPropertyAnimation_EventFilter_IsBase(bool value) const { qpropertyanimation_eventfilter_isbase = value; }
    inline void setQPropertyAnimation_TimerEvent_IsBase(bool value) const { qpropertyanimation_timerevent_isbase = value; }
    inline void setQPropertyAnimation_ChildEvent_IsBase(bool value) const { qpropertyanimation_childevent_isbase = value; }
    inline void setQPropertyAnimation_CustomEvent_IsBase(bool value) const { qpropertyanimation_customevent_isbase = value; }
    inline void setQPropertyAnimation_ConnectNotify_IsBase(bool value) const { qpropertyanimation_connectnotify_isbase = value; }
    inline void setQPropertyAnimation_DisconnectNotify_IsBase(bool value) const { qpropertyanimation_disconnectnotify_isbase = value; }
    inline void setQPropertyAnimation_Sender_IsBase(bool value) const { qpropertyanimation_sender_isbase = value; }
    inline void setQPropertyAnimation_SenderSignalIndex_IsBase(bool value) const { qpropertyanimation_sendersignalindex_isbase = value; }
    inline void setQPropertyAnimation_Receivers_IsBase(bool value) const { qpropertyanimation_receivers_isbase = value; }
    inline void setQPropertyAnimation_IsSignalConnected_IsBase(bool value) const { qpropertyanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpropertyanimation_metaobject_isbase) {
            qpropertyanimation_metaobject_isbase = false;
            return QPropertyAnimation::metaObject();
        }
        auto metaobject_cb = qpropertyanimation_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPropertyAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpropertyanimation_metacast_isbase) {
            qpropertyanimation_metacast_isbase = false;
            return QPropertyAnimation::qt_metacast(param1);
        }
        auto metacast_cb = qpropertyanimation_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPropertyAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpropertyanimation_metacall_isbase) {
            qpropertyanimation_metacall_isbase = false;
            return QPropertyAnimation::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qpropertyanimation_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPropertyAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpropertyanimation_event_isbase) {
            qpropertyanimation_event_isbase = false;
            return QPropertyAnimation::event(event);
        }
        auto event_cb = qpropertyanimation_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPropertyAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qpropertyanimation_updatecurrentvalue_isbase) {
            qpropertyanimation_updatecurrentvalue_isbase = false;
            QPropertyAnimation::updateCurrentValue(value);
            return;
        }
        auto updatecurrentvalue_cb = qpropertyanimation_updatecurrentvalue_callback;
        if (updatecurrentvalue_cb) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);

            updatecurrentvalue_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::updateCurrentValue(value);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qpropertyanimation_updatestate_isbase) {
            qpropertyanimation_updatestate_isbase = false;
            QPropertyAnimation::updateState(newState, oldState);
            return;
        }
        auto updatestate_cb = qpropertyanimation_updatestate_callback;
        if (updatestate_cb) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            updatestate_cb(this, cbval1, cbval2);
            return;
        }
        QPropertyAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qpropertyanimation_duration_isbase) {
            qpropertyanimation_duration_isbase = false;
            return QPropertyAnimation::duration();
        }
        auto duration_cb = qpropertyanimation_duration_callback;
        if (duration_cb) {
            int callback_ret = duration_cb();
            return static_cast<int>(callback_ret);
        }
        return QPropertyAnimation::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qpropertyanimation_updatecurrenttime_isbase) {
            qpropertyanimation_updatecurrenttime_isbase = false;
            QPropertyAnimation::updateCurrentTime(param1);
            return;
        }
        auto updatecurrenttime_cb = qpropertyanimation_updatecurrenttime_callback;
        if (updatecurrenttime_cb) {
            int cbval1 = param1;

            updatecurrenttime_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qpropertyanimation_interpolated_isbase) {
            qpropertyanimation_interpolated_isbase = false;
            return QPropertyAnimation::interpolated(from, to, progress);
        }
        auto interpolated_cb = qpropertyanimation_interpolated_callback;
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
        return QPropertyAnimation::interpolated(from, to, progress);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qpropertyanimation_updatedirection_isbase) {
            qpropertyanimation_updatedirection_isbase = false;
            QPropertyAnimation::updateDirection(direction);
            return;
        }
        auto updatedirection_cb = qpropertyanimation_updatedirection_callback;
        if (updatedirection_cb) {
            int cbval1 = static_cast<int>(direction);

            updatedirection_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpropertyanimation_eventfilter_isbase) {
            qpropertyanimation_eventfilter_isbase = false;
            return QPropertyAnimation::eventFilter(watched, event);
        }
        auto eventfilter_cb = qpropertyanimation_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPropertyAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpropertyanimation_timerevent_isbase) {
            qpropertyanimation_timerevent_isbase = false;
            QPropertyAnimation::timerEvent(event);
            return;
        }
        auto timerevent_cb = qpropertyanimation_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpropertyanimation_childevent_isbase) {
            qpropertyanimation_childevent_isbase = false;
            QPropertyAnimation::childEvent(event);
            return;
        }
        auto childevent_cb = qpropertyanimation_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpropertyanimation_customevent_isbase) {
            qpropertyanimation_customevent_isbase = false;
            QPropertyAnimation::customEvent(event);
            return;
        }
        auto customevent_cb = qpropertyanimation_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_connectnotify_isbase) {
            qpropertyanimation_connectnotify_isbase = false;
            QPropertyAnimation::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qpropertyanimation_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_disconnectnotify_isbase) {
            qpropertyanimation_disconnectnotify_isbase = false;
            QPropertyAnimation::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qpropertyanimation_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPropertyAnimation::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpropertyanimation_sender_isbase) {
            qpropertyanimation_sender_isbase = false;
            return QPropertyAnimation::sender();
        }
        auto sender_cb = qpropertyanimation_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPropertyAnimation::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpropertyanimation_sendersignalindex_isbase) {
            qpropertyanimation_sendersignalindex_isbase = false;
            return QPropertyAnimation::senderSignalIndex();
        }
        auto sendersignalindex_cb = qpropertyanimation_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPropertyAnimation::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpropertyanimation_receivers_isbase) {
            qpropertyanimation_receivers_isbase = false;
            return QPropertyAnimation::receivers(signal);
        }
        auto receivers_cb = qpropertyanimation_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPropertyAnimation::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpropertyanimation_issignalconnected_isbase) {
            qpropertyanimation_issignalconnected_isbase = false;
            return QPropertyAnimation::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qpropertyanimation_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPropertyAnimation::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event);
    friend bool QPropertyAnimation_SuperEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
    friend void QPropertyAnimation_SuperUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
    friend void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState);
    friend void QPropertyAnimation_SuperUpdateState(QPropertyAnimation* self, int newState, int oldState);
    friend void QPropertyAnimation_UpdateCurrentTime(QPropertyAnimation* self, int param1);
    friend void QPropertyAnimation_SuperUpdateCurrentTime(QPropertyAnimation* self, int param1);
    friend QVariant* QPropertyAnimation_Interpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend QVariant* QPropertyAnimation_SuperInterpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend void QPropertyAnimation_UpdateDirection(QPropertyAnimation* self, int direction);
    friend void QPropertyAnimation_SuperUpdateDirection(QPropertyAnimation* self, int direction);
    friend void QPropertyAnimation_TimerEvent(QPropertyAnimation* self, QTimerEvent* event);
    friend void QPropertyAnimation_SuperTimerEvent(QPropertyAnimation* self, QTimerEvent* event);
    friend void QPropertyAnimation_ChildEvent(QPropertyAnimation* self, QChildEvent* event);
    friend void QPropertyAnimation_SuperChildEvent(QPropertyAnimation* self, QChildEvent* event);
    friend void QPropertyAnimation_CustomEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_SuperCustomEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_ConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_SuperConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_DisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_SuperDisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend QObject* QPropertyAnimation_Sender(const QPropertyAnimation* self);
    friend QObject* QPropertyAnimation_SuperSender(const QPropertyAnimation* self);
    friend int QPropertyAnimation_SenderSignalIndex(const QPropertyAnimation* self);
    friend int QPropertyAnimation_SuperSenderSignalIndex(const QPropertyAnimation* self);
    friend int QPropertyAnimation_Receivers(const QPropertyAnimation* self, const char* signal);
    friend int QPropertyAnimation_SuperReceivers(const QPropertyAnimation* self, const char* signal);
    friend bool QPropertyAnimation_IsSignalConnected(const QPropertyAnimation* self, const QMetaMethod* signal);
    friend bool QPropertyAnimation_SuperIsSignalConnected(const QPropertyAnimation* self, const QMetaMethod* signal);
};

#endif
