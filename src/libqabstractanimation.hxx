#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTANIMATION_H
#define SRCC_LIBVIRTUALQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractAnimation so that we can call protected methods
class VirtualQAbstractAnimation final : public QAbstractAnimation {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractAnimation = true;

    // Virtual class public types (including callbacks)
    using QAbstractAnimation_Metacall_Callback = int (*)(QAbstractAnimation*, int, int, void**);
    using QAbstractAnimation_Duration_Callback = int (*)();
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
    using QAbstractAnimation_Sender_Callback = QObject* (*)();
    using QAbstractAnimation_SenderSignalIndex_Callback = int (*)();
    using QAbstractAnimation_Receivers_Callback = int (*)(const QAbstractAnimation*, const char*);
    using QAbstractAnimation_IsSignalConnected_Callback = bool (*)(const QAbstractAnimation*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    QAbstractAnimation_Sender_Callback qabstractanimation_sender_callback = nullptr;
    QAbstractAnimation_SenderSignalIndex_Callback qabstractanimation_sendersignalindex_callback = nullptr;
    QAbstractAnimation_Receivers_Callback qabstractanimation_receivers_callback = nullptr;
    QAbstractAnimation_IsSignalConnected_Callback qabstractanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractanimation_metacall_isbase = false;
    mutable bool qabstractanimation_duration_isbase = false;
    mutable bool qabstractanimation_event_isbase = false;
    mutable bool qabstractanimation_updatecurrenttime_isbase = false;
    mutable bool qabstractanimation_updatestate_isbase = false;
    mutable bool qabstractanimation_updatedirection_isbase = false;
    mutable bool qabstractanimation_eventfilter_isbase = false;
    mutable bool qabstractanimation_timerevent_isbase = false;
    mutable bool qabstractanimation_childevent_isbase = false;
    mutable bool qabstractanimation_customevent_isbase = false;
    mutable bool qabstractanimation_connectnotify_isbase = false;
    mutable bool qabstractanimation_disconnectnotify_isbase = false;
    mutable bool qabstractanimation_sender_isbase = false;
    mutable bool qabstractanimation_sendersignalindex_isbase = false;
    mutable bool qabstractanimation_receivers_isbase = false;
    mutable bool qabstractanimation_issignalconnected_isbase = false;

  public:
    VirtualQAbstractAnimation() : QAbstractAnimation() {};
    VirtualQAbstractAnimation(QObject* parent) : QAbstractAnimation(parent) {};

    ~VirtualQAbstractAnimation() {
        qabstractanimation_metacall_callback = nullptr;
        qabstractanimation_duration_callback = nullptr;
        qabstractanimation_event_callback = nullptr;
        qabstractanimation_updatecurrenttime_callback = nullptr;
        qabstractanimation_updatestate_callback = nullptr;
        qabstractanimation_updatedirection_callback = nullptr;
        qabstractanimation_eventfilter_callback = nullptr;
        qabstractanimation_timerevent_callback = nullptr;
        qabstractanimation_childevent_callback = nullptr;
        qabstractanimation_customevent_callback = nullptr;
        qabstractanimation_connectnotify_callback = nullptr;
        qabstractanimation_disconnectnotify_callback = nullptr;
        qabstractanimation_sender_callback = nullptr;
        qabstractanimation_sendersignalindex_callback = nullptr;
        qabstractanimation_receivers_callback = nullptr;
        qabstractanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractAnimation_Metacall_Callback(QAbstractAnimation_Metacall_Callback cb) { qabstractanimation_metacall_callback = cb; }
    inline void setQAbstractAnimation_Duration_Callback(QAbstractAnimation_Duration_Callback cb) { qabstractanimation_duration_callback = cb; }
    inline void setQAbstractAnimation_Event_Callback(QAbstractAnimation_Event_Callback cb) { qabstractanimation_event_callback = cb; }
    inline void setQAbstractAnimation_UpdateCurrentTime_Callback(QAbstractAnimation_UpdateCurrentTime_Callback cb) { qabstractanimation_updatecurrenttime_callback = cb; }
    inline void setQAbstractAnimation_UpdateState_Callback(QAbstractAnimation_UpdateState_Callback cb) { qabstractanimation_updatestate_callback = cb; }
    inline void setQAbstractAnimation_UpdateDirection_Callback(QAbstractAnimation_UpdateDirection_Callback cb) { qabstractanimation_updatedirection_callback = cb; }
    inline void setQAbstractAnimation_EventFilter_Callback(QAbstractAnimation_EventFilter_Callback cb) { qabstractanimation_eventfilter_callback = cb; }
    inline void setQAbstractAnimation_TimerEvent_Callback(QAbstractAnimation_TimerEvent_Callback cb) { qabstractanimation_timerevent_callback = cb; }
    inline void setQAbstractAnimation_ChildEvent_Callback(QAbstractAnimation_ChildEvent_Callback cb) { qabstractanimation_childevent_callback = cb; }
    inline void setQAbstractAnimation_CustomEvent_Callback(QAbstractAnimation_CustomEvent_Callback cb) { qabstractanimation_customevent_callback = cb; }
    inline void setQAbstractAnimation_ConnectNotify_Callback(QAbstractAnimation_ConnectNotify_Callback cb) { qabstractanimation_connectnotify_callback = cb; }
    inline void setQAbstractAnimation_DisconnectNotify_Callback(QAbstractAnimation_DisconnectNotify_Callback cb) { qabstractanimation_disconnectnotify_callback = cb; }
    inline void setQAbstractAnimation_Sender_Callback(QAbstractAnimation_Sender_Callback cb) { qabstractanimation_sender_callback = cb; }
    inline void setQAbstractAnimation_SenderSignalIndex_Callback(QAbstractAnimation_SenderSignalIndex_Callback cb) { qabstractanimation_sendersignalindex_callback = cb; }
    inline void setQAbstractAnimation_Receivers_Callback(QAbstractAnimation_Receivers_Callback cb) { qabstractanimation_receivers_callback = cb; }
    inline void setQAbstractAnimation_IsSignalConnected_Callback(QAbstractAnimation_IsSignalConnected_Callback cb) { qabstractanimation_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractAnimation_Metacall_IsBase(bool value) const { qabstractanimation_metacall_isbase = value; }
    inline void setQAbstractAnimation_Duration_IsBase(bool value) const { qabstractanimation_duration_isbase = value; }
    inline void setQAbstractAnimation_Event_IsBase(bool value) const { qabstractanimation_event_isbase = value; }
    inline void setQAbstractAnimation_UpdateCurrentTime_IsBase(bool value) const { qabstractanimation_updatecurrenttime_isbase = value; }
    inline void setQAbstractAnimation_UpdateState_IsBase(bool value) const { qabstractanimation_updatestate_isbase = value; }
    inline void setQAbstractAnimation_UpdateDirection_IsBase(bool value) const { qabstractanimation_updatedirection_isbase = value; }
    inline void setQAbstractAnimation_EventFilter_IsBase(bool value) const { qabstractanimation_eventfilter_isbase = value; }
    inline void setQAbstractAnimation_TimerEvent_IsBase(bool value) const { qabstractanimation_timerevent_isbase = value; }
    inline void setQAbstractAnimation_ChildEvent_IsBase(bool value) const { qabstractanimation_childevent_isbase = value; }
    inline void setQAbstractAnimation_CustomEvent_IsBase(bool value) const { qabstractanimation_customevent_isbase = value; }
    inline void setQAbstractAnimation_ConnectNotify_IsBase(bool value) const { qabstractanimation_connectnotify_isbase = value; }
    inline void setQAbstractAnimation_DisconnectNotify_IsBase(bool value) const { qabstractanimation_disconnectnotify_isbase = value; }
    inline void setQAbstractAnimation_Sender_IsBase(bool value) const { qabstractanimation_sender_isbase = value; }
    inline void setQAbstractAnimation_SenderSignalIndex_IsBase(bool value) const { qabstractanimation_sendersignalindex_isbase = value; }
    inline void setQAbstractAnimation_Receivers_IsBase(bool value) const { qabstractanimation_receivers_isbase = value; }
    inline void setQAbstractAnimation_IsSignalConnected_IsBase(bool value) const { qabstractanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractanimation_metacall_isbase) {
            qabstractanimation_metacall_isbase = false;
            return QAbstractAnimation::qt_metacall(param1, param2, param3);
        } else if (qabstractanimation_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qabstractanimation_duration_callback != nullptr) {
            int callback_ret = qabstractanimation_duration_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractanimation_event_isbase) {
            qabstractanimation_event_isbase = false;
            return QAbstractAnimation::event(event);
        } else if (qabstractanimation_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractanimation_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractAnimation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        if (qabstractanimation_updatecurrenttime_callback != nullptr) {
            int cbval1 = currentTime;

            qabstractanimation_updatecurrenttime_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qabstractanimation_updatestate_isbase) {
            qabstractanimation_updatestate_isbase = false;
            QAbstractAnimation::updateState(newState, oldState);
        } else if (qabstractanimation_updatestate_callback != nullptr) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            qabstractanimation_updatestate_callback(this, cbval1, cbval2);
        } else {
            QAbstractAnimation::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qabstractanimation_updatedirection_isbase) {
            qabstractanimation_updatedirection_isbase = false;
            QAbstractAnimation::updateDirection(direction);
        } else if (qabstractanimation_updatedirection_callback != nullptr) {
            int cbval1 = static_cast<int>(direction);

            qabstractanimation_updatedirection_callback(this, cbval1);
        } else {
            QAbstractAnimation::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractanimation_eventfilter_isbase) {
            qabstractanimation_eventfilter_isbase = false;
            return QAbstractAnimation::eventFilter(watched, event);
        } else if (qabstractanimation_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractanimation_timerevent_isbase) {
            qabstractanimation_timerevent_isbase = false;
            QAbstractAnimation::timerEvent(event);
        } else if (qabstractanimation_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractanimation_timerevent_callback(this, cbval1);
        } else {
            QAbstractAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractanimation_childevent_isbase) {
            qabstractanimation_childevent_isbase = false;
            QAbstractAnimation::childEvent(event);
        } else if (qabstractanimation_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractanimation_childevent_callback(this, cbval1);
        } else {
            QAbstractAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractanimation_customevent_isbase) {
            qabstractanimation_customevent_isbase = false;
            QAbstractAnimation::customEvent(event);
        } else if (qabstractanimation_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractanimation_customevent_callback(this, cbval1);
        } else {
            QAbstractAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_connectnotify_isbase) {
            qabstractanimation_connectnotify_isbase = false;
            QAbstractAnimation::connectNotify(signal);
        } else if (qabstractanimation_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractanimation_connectnotify_callback(this, cbval1);
        } else {
            QAbstractAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_disconnectnotify_isbase) {
            qabstractanimation_disconnectnotify_isbase = false;
            QAbstractAnimation::disconnectNotify(signal);
        } else if (qabstractanimation_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractanimation_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractanimation_sender_isbase) {
            qabstractanimation_sender_isbase = false;
            return QAbstractAnimation::sender();
        } else if (qabstractanimation_sender_callback != nullptr) {
            QObject* callback_ret = qabstractanimation_sender_callback();
            return callback_ret;
        } else {
            return QAbstractAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractanimation_sendersignalindex_isbase) {
            qabstractanimation_sendersignalindex_isbase = false;
            return QAbstractAnimation::senderSignalIndex();
        } else if (qabstractanimation_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractanimation_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractanimation_receivers_isbase) {
            qabstractanimation_receivers_isbase = false;
            return QAbstractAnimation::receivers(signal);
        } else if (qabstractanimation_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractanimation_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractanimation_issignalconnected_isbase) {
            qabstractanimation_issignalconnected_isbase = false;
            return QAbstractAnimation::isSignalConnected(signal);
        } else if (qabstractanimation_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractanimation_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractAnimation::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event);
    friend bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime);
    friend void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime);
    friend void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState);
    friend void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState);
    friend void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction);
    friend void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction);
    friend void QAbstractAnimation_TimerEvent(QAbstractAnimation* self, QTimerEvent* event);
    friend void QAbstractAnimation_QBaseTimerEvent(QAbstractAnimation* self, QTimerEvent* event);
    friend void QAbstractAnimation_ChildEvent(QAbstractAnimation* self, QChildEvent* event);
    friend void QAbstractAnimation_QBaseChildEvent(QAbstractAnimation* self, QChildEvent* event);
    friend void QAbstractAnimation_CustomEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_QBaseCustomEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_ConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_QBaseConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_DisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_QBaseDisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend QObject* QAbstractAnimation_Sender(const QAbstractAnimation* self);
    friend QObject* QAbstractAnimation_QBaseSender(const QAbstractAnimation* self);
    friend int QAbstractAnimation_SenderSignalIndex(const QAbstractAnimation* self);
    friend int QAbstractAnimation_QBaseSenderSignalIndex(const QAbstractAnimation* self);
    friend int QAbstractAnimation_Receivers(const QAbstractAnimation* self, const char* signal);
    friend int QAbstractAnimation_QBaseReceivers(const QAbstractAnimation* self, const char* signal);
    friend bool QAbstractAnimation_IsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal);
    friend bool QAbstractAnimation_QBaseIsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal);
};

// This class is a subclass of QAnimationDriver so that we can call protected methods
class VirtualQAnimationDriver final : public QAnimationDriver {

  public:
    // Virtual class boolean flag
    bool isVirtualQAnimationDriver = true;

    // Virtual class public types (including callbacks)
    using QAnimationDriver_Metacall_Callback = int (*)(QAnimationDriver*, int, int, void**);
    using QAnimationDriver_Advance_Callback = void (*)();
    using QAnimationDriver_Elapsed_Callback = long long (*)();
    using QAnimationDriver_Start_Callback = void (*)();
    using QAnimationDriver_Stop_Callback = void (*)();
    using QAnimationDriver_Event_Callback = bool (*)(QAnimationDriver*, QEvent*);
    using QAnimationDriver_EventFilter_Callback = bool (*)(QAnimationDriver*, QObject*, QEvent*);
    using QAnimationDriver_TimerEvent_Callback = void (*)(QAnimationDriver*, QTimerEvent*);
    using QAnimationDriver_ChildEvent_Callback = void (*)(QAnimationDriver*, QChildEvent*);
    using QAnimationDriver_CustomEvent_Callback = void (*)(QAnimationDriver*, QEvent*);
    using QAnimationDriver_ConnectNotify_Callback = void (*)(QAnimationDriver*, QMetaMethod*);
    using QAnimationDriver_DisconnectNotify_Callback = void (*)(QAnimationDriver*, QMetaMethod*);
    using QAnimationDriver_AdvanceAnimation_Callback = void (*)();
    using QAnimationDriver_Sender_Callback = QObject* (*)();
    using QAnimationDriver_SenderSignalIndex_Callback = int (*)();
    using QAnimationDriver_Receivers_Callback = int (*)(const QAnimationDriver*, const char*);
    using QAnimationDriver_IsSignalConnected_Callback = bool (*)(const QAnimationDriver*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    QAnimationDriver_AdvanceAnimation_Callback qanimationdriver_advanceanimation_callback = nullptr;
    QAnimationDriver_Sender_Callback qanimationdriver_sender_callback = nullptr;
    QAnimationDriver_SenderSignalIndex_Callback qanimationdriver_sendersignalindex_callback = nullptr;
    QAnimationDriver_Receivers_Callback qanimationdriver_receivers_callback = nullptr;
    QAnimationDriver_IsSignalConnected_Callback qanimationdriver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qanimationdriver_metacall_isbase = false;
    mutable bool qanimationdriver_advance_isbase = false;
    mutable bool qanimationdriver_elapsed_isbase = false;
    mutable bool qanimationdriver_start_isbase = false;
    mutable bool qanimationdriver_stop_isbase = false;
    mutable bool qanimationdriver_event_isbase = false;
    mutable bool qanimationdriver_eventfilter_isbase = false;
    mutable bool qanimationdriver_timerevent_isbase = false;
    mutable bool qanimationdriver_childevent_isbase = false;
    mutable bool qanimationdriver_customevent_isbase = false;
    mutable bool qanimationdriver_connectnotify_isbase = false;
    mutable bool qanimationdriver_disconnectnotify_isbase = false;
    mutable bool qanimationdriver_advanceanimation_isbase = false;
    mutable bool qanimationdriver_sender_isbase = false;
    mutable bool qanimationdriver_sendersignalindex_isbase = false;
    mutable bool qanimationdriver_receivers_isbase = false;
    mutable bool qanimationdriver_issignalconnected_isbase = false;

  public:
    VirtualQAnimationDriver() : QAnimationDriver() {};
    VirtualQAnimationDriver(QObject* parent) : QAnimationDriver(parent) {};

    ~VirtualQAnimationDriver() {
        qanimationdriver_metacall_callback = nullptr;
        qanimationdriver_advance_callback = nullptr;
        qanimationdriver_elapsed_callback = nullptr;
        qanimationdriver_start_callback = nullptr;
        qanimationdriver_stop_callback = nullptr;
        qanimationdriver_event_callback = nullptr;
        qanimationdriver_eventfilter_callback = nullptr;
        qanimationdriver_timerevent_callback = nullptr;
        qanimationdriver_childevent_callback = nullptr;
        qanimationdriver_customevent_callback = nullptr;
        qanimationdriver_connectnotify_callback = nullptr;
        qanimationdriver_disconnectnotify_callback = nullptr;
        qanimationdriver_advanceanimation_callback = nullptr;
        qanimationdriver_sender_callback = nullptr;
        qanimationdriver_sendersignalindex_callback = nullptr;
        qanimationdriver_receivers_callback = nullptr;
        qanimationdriver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAnimationDriver_Metacall_Callback(QAnimationDriver_Metacall_Callback cb) { qanimationdriver_metacall_callback = cb; }
    inline void setQAnimationDriver_Advance_Callback(QAnimationDriver_Advance_Callback cb) { qanimationdriver_advance_callback = cb; }
    inline void setQAnimationDriver_Elapsed_Callback(QAnimationDriver_Elapsed_Callback cb) { qanimationdriver_elapsed_callback = cb; }
    inline void setQAnimationDriver_Start_Callback(QAnimationDriver_Start_Callback cb) { qanimationdriver_start_callback = cb; }
    inline void setQAnimationDriver_Stop_Callback(QAnimationDriver_Stop_Callback cb) { qanimationdriver_stop_callback = cb; }
    inline void setQAnimationDriver_Event_Callback(QAnimationDriver_Event_Callback cb) { qanimationdriver_event_callback = cb; }
    inline void setQAnimationDriver_EventFilter_Callback(QAnimationDriver_EventFilter_Callback cb) { qanimationdriver_eventfilter_callback = cb; }
    inline void setQAnimationDriver_TimerEvent_Callback(QAnimationDriver_TimerEvent_Callback cb) { qanimationdriver_timerevent_callback = cb; }
    inline void setQAnimationDriver_ChildEvent_Callback(QAnimationDriver_ChildEvent_Callback cb) { qanimationdriver_childevent_callback = cb; }
    inline void setQAnimationDriver_CustomEvent_Callback(QAnimationDriver_CustomEvent_Callback cb) { qanimationdriver_customevent_callback = cb; }
    inline void setQAnimationDriver_ConnectNotify_Callback(QAnimationDriver_ConnectNotify_Callback cb) { qanimationdriver_connectnotify_callback = cb; }
    inline void setQAnimationDriver_DisconnectNotify_Callback(QAnimationDriver_DisconnectNotify_Callback cb) { qanimationdriver_disconnectnotify_callback = cb; }
    inline void setQAnimationDriver_AdvanceAnimation_Callback(QAnimationDriver_AdvanceAnimation_Callback cb) { qanimationdriver_advanceanimation_callback = cb; }
    inline void setQAnimationDriver_Sender_Callback(QAnimationDriver_Sender_Callback cb) { qanimationdriver_sender_callback = cb; }
    inline void setQAnimationDriver_SenderSignalIndex_Callback(QAnimationDriver_SenderSignalIndex_Callback cb) { qanimationdriver_sendersignalindex_callback = cb; }
    inline void setQAnimationDriver_Receivers_Callback(QAnimationDriver_Receivers_Callback cb) { qanimationdriver_receivers_callback = cb; }
    inline void setQAnimationDriver_IsSignalConnected_Callback(QAnimationDriver_IsSignalConnected_Callback cb) { qanimationdriver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAnimationDriver_Metacall_IsBase(bool value) const { qanimationdriver_metacall_isbase = value; }
    inline void setQAnimationDriver_Advance_IsBase(bool value) const { qanimationdriver_advance_isbase = value; }
    inline void setQAnimationDriver_Elapsed_IsBase(bool value) const { qanimationdriver_elapsed_isbase = value; }
    inline void setQAnimationDriver_Start_IsBase(bool value) const { qanimationdriver_start_isbase = value; }
    inline void setQAnimationDriver_Stop_IsBase(bool value) const { qanimationdriver_stop_isbase = value; }
    inline void setQAnimationDriver_Event_IsBase(bool value) const { qanimationdriver_event_isbase = value; }
    inline void setQAnimationDriver_EventFilter_IsBase(bool value) const { qanimationdriver_eventfilter_isbase = value; }
    inline void setQAnimationDriver_TimerEvent_IsBase(bool value) const { qanimationdriver_timerevent_isbase = value; }
    inline void setQAnimationDriver_ChildEvent_IsBase(bool value) const { qanimationdriver_childevent_isbase = value; }
    inline void setQAnimationDriver_CustomEvent_IsBase(bool value) const { qanimationdriver_customevent_isbase = value; }
    inline void setQAnimationDriver_ConnectNotify_IsBase(bool value) const { qanimationdriver_connectnotify_isbase = value; }
    inline void setQAnimationDriver_DisconnectNotify_IsBase(bool value) const { qanimationdriver_disconnectnotify_isbase = value; }
    inline void setQAnimationDriver_AdvanceAnimation_IsBase(bool value) const { qanimationdriver_advanceanimation_isbase = value; }
    inline void setQAnimationDriver_Sender_IsBase(bool value) const { qanimationdriver_sender_isbase = value; }
    inline void setQAnimationDriver_SenderSignalIndex_IsBase(bool value) const { qanimationdriver_sendersignalindex_isbase = value; }
    inline void setQAnimationDriver_Receivers_IsBase(bool value) const { qanimationdriver_receivers_isbase = value; }
    inline void setQAnimationDriver_IsSignalConnected_IsBase(bool value) const { qanimationdriver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qanimationdriver_metacall_isbase) {
            qanimationdriver_metacall_isbase = false;
            return QAnimationDriver::qt_metacall(param1, param2, param3);
        } else if (qanimationdriver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qanimationdriver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAnimationDriver::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance() override {
        if (qanimationdriver_advance_isbase) {
            qanimationdriver_advance_isbase = false;
            QAnimationDriver::advance();
        } else if (qanimationdriver_advance_callback != nullptr) {
            qanimationdriver_advance_callback();
        } else {
            QAnimationDriver::advance();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 elapsed() const override {
        if (qanimationdriver_elapsed_isbase) {
            qanimationdriver_elapsed_isbase = false;
            return QAnimationDriver::elapsed();
        } else if (qanimationdriver_elapsed_callback != nullptr) {
            long long callback_ret = qanimationdriver_elapsed_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QAnimationDriver::elapsed();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (qanimationdriver_start_isbase) {
            qanimationdriver_start_isbase = false;
            QAnimationDriver::start();
        } else if (qanimationdriver_start_callback != nullptr) {
            qanimationdriver_start_callback();
        } else {
            QAnimationDriver::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (qanimationdriver_stop_isbase) {
            qanimationdriver_stop_isbase = false;
            QAnimationDriver::stop();
        } else if (qanimationdriver_stop_callback != nullptr) {
            qanimationdriver_stop_callback();
        } else {
            QAnimationDriver::stop();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qanimationdriver_event_isbase) {
            qanimationdriver_event_isbase = false;
            return QAnimationDriver::event(event);
        } else if (qanimationdriver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qanimationdriver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAnimationDriver::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qanimationdriver_eventfilter_isbase) {
            qanimationdriver_eventfilter_isbase = false;
            return QAnimationDriver::eventFilter(watched, event);
        } else if (qanimationdriver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qanimationdriver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAnimationDriver::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qanimationdriver_timerevent_isbase) {
            qanimationdriver_timerevent_isbase = false;
            QAnimationDriver::timerEvent(event);
        } else if (qanimationdriver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qanimationdriver_timerevent_callback(this, cbval1);
        } else {
            QAnimationDriver::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qanimationdriver_childevent_isbase) {
            qanimationdriver_childevent_isbase = false;
            QAnimationDriver::childEvent(event);
        } else if (qanimationdriver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qanimationdriver_childevent_callback(this, cbval1);
        } else {
            QAnimationDriver::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qanimationdriver_customevent_isbase) {
            qanimationdriver_customevent_isbase = false;
            QAnimationDriver::customEvent(event);
        } else if (qanimationdriver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qanimationdriver_customevent_callback(this, cbval1);
        } else {
            QAnimationDriver::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_connectnotify_isbase) {
            qanimationdriver_connectnotify_isbase = false;
            QAnimationDriver::connectNotify(signal);
        } else if (qanimationdriver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qanimationdriver_connectnotify_callback(this, cbval1);
        } else {
            QAnimationDriver::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_disconnectnotify_isbase) {
            qanimationdriver_disconnectnotify_isbase = false;
            QAnimationDriver::disconnectNotify(signal);
        } else if (qanimationdriver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qanimationdriver_disconnectnotify_callback(this, cbval1);
        } else {
            QAnimationDriver::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void advanceAnimation() {
        if (qanimationdriver_advanceanimation_isbase) {
            qanimationdriver_advanceanimation_isbase = false;
            QAnimationDriver::advanceAnimation();
        } else if (qanimationdriver_advanceanimation_callback != nullptr) {
            qanimationdriver_advanceanimation_callback();
        } else {
            QAnimationDriver::advanceAnimation();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qanimationdriver_sender_isbase) {
            qanimationdriver_sender_isbase = false;
            return QAnimationDriver::sender();
        } else if (qanimationdriver_sender_callback != nullptr) {
            QObject* callback_ret = qanimationdriver_sender_callback();
            return callback_ret;
        } else {
            return QAnimationDriver::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qanimationdriver_sendersignalindex_isbase) {
            qanimationdriver_sendersignalindex_isbase = false;
            return QAnimationDriver::senderSignalIndex();
        } else if (qanimationdriver_sendersignalindex_callback != nullptr) {
            int callback_ret = qanimationdriver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAnimationDriver::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qanimationdriver_receivers_isbase) {
            qanimationdriver_receivers_isbase = false;
            return QAnimationDriver::receivers(signal);
        } else if (qanimationdriver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qanimationdriver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAnimationDriver::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qanimationdriver_issignalconnected_isbase) {
            qanimationdriver_issignalconnected_isbase = false;
            return QAnimationDriver::isSignalConnected(signal);
        } else if (qanimationdriver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qanimationdriver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAnimationDriver::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAnimationDriver_Start(QAnimationDriver* self);
    friend void QAnimationDriver_QBaseStart(QAnimationDriver* self);
    friend void QAnimationDriver_Stop(QAnimationDriver* self);
    friend void QAnimationDriver_QBaseStop(QAnimationDriver* self);
    friend void QAnimationDriver_TimerEvent(QAnimationDriver* self, QTimerEvent* event);
    friend void QAnimationDriver_QBaseTimerEvent(QAnimationDriver* self, QTimerEvent* event);
    friend void QAnimationDriver_ChildEvent(QAnimationDriver* self, QChildEvent* event);
    friend void QAnimationDriver_QBaseChildEvent(QAnimationDriver* self, QChildEvent* event);
    friend void QAnimationDriver_CustomEvent(QAnimationDriver* self, QEvent* event);
    friend void QAnimationDriver_QBaseCustomEvent(QAnimationDriver* self, QEvent* event);
    friend void QAnimationDriver_ConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_QBaseConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_DisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_QBaseDisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self);
    friend void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self);
    friend QObject* QAnimationDriver_Sender(const QAnimationDriver* self);
    friend QObject* QAnimationDriver_QBaseSender(const QAnimationDriver* self);
    friend int QAnimationDriver_SenderSignalIndex(const QAnimationDriver* self);
    friend int QAnimationDriver_QBaseSenderSignalIndex(const QAnimationDriver* self);
    friend int QAnimationDriver_Receivers(const QAnimationDriver* self, const char* signal);
    friend int QAnimationDriver_QBaseReceivers(const QAnimationDriver* self, const char* signal);
    friend bool QAnimationDriver_IsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal);
    friend bool QAnimationDriver_QBaseIsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal);
};

#endif
