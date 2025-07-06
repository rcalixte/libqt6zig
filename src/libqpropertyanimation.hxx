#pragma once
#ifndef SRCC_LIBVIRTUALQPROPERTYANIMATION_H
#define SRCC_LIBVIRTUALQPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPropertyAnimation so that we can call protected methods
class VirtualQPropertyAnimation final : public QPropertyAnimation {

  public:
    // Virtual class boolean flag
    bool isVirtualQPropertyAnimation = true;

    // Virtual class public types (including callbacks)
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

    ~VirtualQPropertyAnimation() {
        qpropertyanimation_metacall_callback = nullptr;
        qpropertyanimation_event_callback = nullptr;
        qpropertyanimation_updatecurrentvalue_callback = nullptr;
        qpropertyanimation_updatestate_callback = nullptr;
        qpropertyanimation_duration_callback = nullptr;
        qpropertyanimation_updatecurrenttime_callback = nullptr;
        qpropertyanimation_interpolated_callback = nullptr;
        qpropertyanimation_updatedirection_callback = nullptr;
        qpropertyanimation_eventfilter_callback = nullptr;
        qpropertyanimation_timerevent_callback = nullptr;
        qpropertyanimation_childevent_callback = nullptr;
        qpropertyanimation_customevent_callback = nullptr;
        qpropertyanimation_connectnotify_callback = nullptr;
        qpropertyanimation_disconnectnotify_callback = nullptr;
        qpropertyanimation_sender_callback = nullptr;
        qpropertyanimation_sendersignalindex_callback = nullptr;
        qpropertyanimation_receivers_callback = nullptr;
        qpropertyanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpropertyanimation_metacall_isbase) {
            qpropertyanimation_metacall_isbase = false;
            return QPropertyAnimation::qt_metacall(param1, param2, param3);
        } else if (qpropertyanimation_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpropertyanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPropertyAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpropertyanimation_event_isbase) {
            qpropertyanimation_event_isbase = false;
            return QPropertyAnimation::event(event);
        } else if (qpropertyanimation_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpropertyanimation_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPropertyAnimation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qpropertyanimation_updatecurrentvalue_isbase) {
            qpropertyanimation_updatecurrentvalue_isbase = false;
            QPropertyAnimation::updateCurrentValue(value);
        } else if (qpropertyanimation_updatecurrentvalue_callback != nullptr) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);

            qpropertyanimation_updatecurrentvalue_callback(this, cbval1);
        } else {
            QPropertyAnimation::updateCurrentValue(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qpropertyanimation_updatestate_isbase) {
            qpropertyanimation_updatestate_isbase = false;
            QPropertyAnimation::updateState(newState, oldState);
        } else if (qpropertyanimation_updatestate_callback != nullptr) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            qpropertyanimation_updatestate_callback(this, cbval1, cbval2);
        } else {
            QPropertyAnimation::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qpropertyanimation_duration_isbase) {
            qpropertyanimation_duration_isbase = false;
            return QPropertyAnimation::duration();
        } else if (qpropertyanimation_duration_callback != nullptr) {
            int callback_ret = qpropertyanimation_duration_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPropertyAnimation::duration();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qpropertyanimation_updatecurrenttime_isbase) {
            qpropertyanimation_updatecurrenttime_isbase = false;
            QPropertyAnimation::updateCurrentTime(param1);
        } else if (qpropertyanimation_updatecurrenttime_callback != nullptr) {
            int cbval1 = param1;

            qpropertyanimation_updatecurrenttime_callback(this, cbval1);
        } else {
            QPropertyAnimation::updateCurrentTime(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qpropertyanimation_interpolated_isbase) {
            qpropertyanimation_interpolated_isbase = false;
            return QPropertyAnimation::interpolated(from, to, progress);
        } else if (qpropertyanimation_interpolated_callback != nullptr) {
            const QVariant& from_ret = from;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&from_ret);
            const QVariant& to_ret = to;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&to_ret);
            double cbval3 = static_cast<double>(progress);

            QVariant* callback_ret = qpropertyanimation_interpolated_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QPropertyAnimation::interpolated(from, to, progress);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qpropertyanimation_updatedirection_isbase) {
            qpropertyanimation_updatedirection_isbase = false;
            QPropertyAnimation::updateDirection(direction);
        } else if (qpropertyanimation_updatedirection_callback != nullptr) {
            int cbval1 = static_cast<int>(direction);

            qpropertyanimation_updatedirection_callback(this, cbval1);
        } else {
            QPropertyAnimation::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpropertyanimation_eventfilter_isbase) {
            qpropertyanimation_eventfilter_isbase = false;
            return QPropertyAnimation::eventFilter(watched, event);
        } else if (qpropertyanimation_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpropertyanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPropertyAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpropertyanimation_timerevent_isbase) {
            qpropertyanimation_timerevent_isbase = false;
            QPropertyAnimation::timerEvent(event);
        } else if (qpropertyanimation_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpropertyanimation_timerevent_callback(this, cbval1);
        } else {
            QPropertyAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpropertyanimation_childevent_isbase) {
            qpropertyanimation_childevent_isbase = false;
            QPropertyAnimation::childEvent(event);
        } else if (qpropertyanimation_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpropertyanimation_childevent_callback(this, cbval1);
        } else {
            QPropertyAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpropertyanimation_customevent_isbase) {
            qpropertyanimation_customevent_isbase = false;
            QPropertyAnimation::customEvent(event);
        } else if (qpropertyanimation_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpropertyanimation_customevent_callback(this, cbval1);
        } else {
            QPropertyAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_connectnotify_isbase) {
            qpropertyanimation_connectnotify_isbase = false;
            QPropertyAnimation::connectNotify(signal);
        } else if (qpropertyanimation_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpropertyanimation_connectnotify_callback(this, cbval1);
        } else {
            QPropertyAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_disconnectnotify_isbase) {
            qpropertyanimation_disconnectnotify_isbase = false;
            QPropertyAnimation::disconnectNotify(signal);
        } else if (qpropertyanimation_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpropertyanimation_disconnectnotify_callback(this, cbval1);
        } else {
            QPropertyAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpropertyanimation_sender_isbase) {
            qpropertyanimation_sender_isbase = false;
            return QPropertyAnimation::sender();
        } else if (qpropertyanimation_sender_callback != nullptr) {
            QObject* callback_ret = qpropertyanimation_sender_callback();
            return callback_ret;
        } else {
            return QPropertyAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpropertyanimation_sendersignalindex_isbase) {
            qpropertyanimation_sendersignalindex_isbase = false;
            return QPropertyAnimation::senderSignalIndex();
        } else if (qpropertyanimation_sendersignalindex_callback != nullptr) {
            int callback_ret = qpropertyanimation_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPropertyAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpropertyanimation_receivers_isbase) {
            qpropertyanimation_receivers_isbase = false;
            return QPropertyAnimation::receivers(signal);
        } else if (qpropertyanimation_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpropertyanimation_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPropertyAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpropertyanimation_issignalconnected_isbase) {
            qpropertyanimation_issignalconnected_isbase = false;
            return QPropertyAnimation::isSignalConnected(signal);
        } else if (qpropertyanimation_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpropertyanimation_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPropertyAnimation::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event);
    friend bool QPropertyAnimation_QBaseEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
    friend void QPropertyAnimation_QBaseUpdateCurrentValue(QPropertyAnimation* self, const QVariant* value);
    friend void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState);
    friend void QPropertyAnimation_QBaseUpdateState(QPropertyAnimation* self, int newState, int oldState);
    friend void QPropertyAnimation_UpdateCurrentTime(QPropertyAnimation* self, int param1);
    friend void QPropertyAnimation_QBaseUpdateCurrentTime(QPropertyAnimation* self, int param1);
    friend QVariant* QPropertyAnimation_Interpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend QVariant* QPropertyAnimation_QBaseInterpolated(const QPropertyAnimation* self, const QVariant* from, const QVariant* to, double progress);
    friend void QPropertyAnimation_UpdateDirection(QPropertyAnimation* self, int direction);
    friend void QPropertyAnimation_QBaseUpdateDirection(QPropertyAnimation* self, int direction);
    friend void QPropertyAnimation_TimerEvent(QPropertyAnimation* self, QTimerEvent* event);
    friend void QPropertyAnimation_QBaseTimerEvent(QPropertyAnimation* self, QTimerEvent* event);
    friend void QPropertyAnimation_ChildEvent(QPropertyAnimation* self, QChildEvent* event);
    friend void QPropertyAnimation_QBaseChildEvent(QPropertyAnimation* self, QChildEvent* event);
    friend void QPropertyAnimation_CustomEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_QBaseCustomEvent(QPropertyAnimation* self, QEvent* event);
    friend void QPropertyAnimation_ConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_QBaseConnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_DisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend void QPropertyAnimation_QBaseDisconnectNotify(QPropertyAnimation* self, const QMetaMethod* signal);
    friend QObject* QPropertyAnimation_Sender(const QPropertyAnimation* self);
    friend QObject* QPropertyAnimation_QBaseSender(const QPropertyAnimation* self);
    friend int QPropertyAnimation_SenderSignalIndex(const QPropertyAnimation* self);
    friend int QPropertyAnimation_QBaseSenderSignalIndex(const QPropertyAnimation* self);
    friend int QPropertyAnimation_Receivers(const QPropertyAnimation* self, const char* signal);
    friend int QPropertyAnimation_QBaseReceivers(const QPropertyAnimation* self, const char* signal);
    friend bool QPropertyAnimation_IsSignalConnected(const QPropertyAnimation* self, const QMetaMethod* signal);
    friend bool QPropertyAnimation_QBaseIsSignalConnected(const QPropertyAnimation* self, const QMetaMethod* signal);
};

#endif
