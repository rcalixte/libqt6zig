#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTANIMATION_H
#define SRCC_LIBVIRTUALQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractAnimation so that we can call protected methods
class VirtualQAbstractAnimation : public QAbstractAnimation {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractAnimation = true;

    // Virtual class public types (including callbacks)
    using QAbstractAnimation_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractAnimation_Metacast_Callback = void* (*)(QAbstractAnimation*, const char*);
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
    QAbstractAnimation_Sender_Callback qabstractanimation_sender_callback = nullptr;
    QAbstractAnimation_SenderSignalIndex_Callback qabstractanimation_sendersignalindex_callback = nullptr;
    QAbstractAnimation_Receivers_Callback qabstractanimation_receivers_callback = nullptr;
    QAbstractAnimation_IsSignalConnected_Callback qabstractanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractanimation_metaobject_isbase = false;
    mutable bool qabstractanimation_metacast_isbase = false;
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

    // Callback setters
    inline void setQAbstractAnimation_MetaObject_Callback(QAbstractAnimation_MetaObject_Callback cb) { qabstractanimation_metaobject_callback = cb; }
    inline void setQAbstractAnimation_Metacast_Callback(QAbstractAnimation_Metacast_Callback cb) { qabstractanimation_metacast_callback = cb; }
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
    inline void setQAbstractAnimation_MetaObject_IsBase(bool value) const { qabstractanimation_metaobject_isbase = value; }
    inline void setQAbstractAnimation_Metacast_IsBase(bool value) const { qabstractanimation_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qabstractanimation_metaobject_isbase) {
            qabstractanimation_metaobject_isbase = false;
            return QAbstractAnimation::metaObject();
        }
        auto metaobject_cb = qabstractanimation_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractanimation_metacast_isbase) {
            qabstractanimation_metacast_isbase = false;
            return QAbstractAnimation::qt_metacast(param1);
        }
        auto metacast_cb = qabstractanimation_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractanimation_metacall_isbase) {
            qabstractanimation_metacall_isbase = false;
            return QAbstractAnimation::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstractanimation_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        auto duration_cb = qabstractanimation_duration_callback;
        if (duration_cb) {
            int callback_ret = duration_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractanimation_event_isbase) {
            qabstractanimation_event_isbase = false;
            return QAbstractAnimation::event(event);
        }
        auto event_cb = qabstractanimation_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        auto updatecurrenttime_cb = qabstractanimation_updatecurrenttime_callback;
        if (updatecurrenttime_cb) {
            int cbval1 = currentTime;

            updatecurrenttime_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qabstractanimation_updatestate_isbase) {
            qabstractanimation_updatestate_isbase = false;
            QAbstractAnimation::updateState(newState, oldState);
            return;
        }
        auto updatestate_cb = qabstractanimation_updatestate_callback;
        if (updatestate_cb) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            updatestate_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractAnimation::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qabstractanimation_updatedirection_isbase) {
            qabstractanimation_updatedirection_isbase = false;
            QAbstractAnimation::updateDirection(direction);
            return;
        }
        auto updatedirection_cb = qabstractanimation_updatedirection_callback;
        if (updatedirection_cb) {
            int cbval1 = static_cast<int>(direction);

            updatedirection_cb(this, cbval1);
            return;
        }
        QAbstractAnimation::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractanimation_eventfilter_isbase) {
            qabstractanimation_eventfilter_isbase = false;
            return QAbstractAnimation::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstractanimation_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractanimation_timerevent_isbase) {
            qabstractanimation_timerevent_isbase = false;
            QAbstractAnimation::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstractanimation_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractanimation_childevent_isbase) {
            qabstractanimation_childevent_isbase = false;
            QAbstractAnimation::childEvent(event);
            return;
        }
        auto childevent_cb = qabstractanimation_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractanimation_customevent_isbase) {
            qabstractanimation_customevent_isbase = false;
            QAbstractAnimation::customEvent(event);
            return;
        }
        auto customevent_cb = qabstractanimation_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_connectnotify_isbase) {
            qabstractanimation_connectnotify_isbase = false;
            QAbstractAnimation::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstractanimation_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_disconnectnotify_isbase) {
            qabstractanimation_disconnectnotify_isbase = false;
            QAbstractAnimation::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstractanimation_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractAnimation::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractanimation_sender_isbase) {
            qabstractanimation_sender_isbase = false;
            return QAbstractAnimation::sender();
        }
        auto sender_cb = qabstractanimation_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractAnimation::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractanimation_sendersignalindex_isbase) {
            qabstractanimation_sendersignalindex_isbase = false;
            return QAbstractAnimation::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstractanimation_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractAnimation::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractanimation_receivers_isbase) {
            qabstractanimation_receivers_isbase = false;
            return QAbstractAnimation::receivers(signal);
        }
        auto receivers_cb = qabstractanimation_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractAnimation::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractanimation_issignalconnected_isbase) {
            qabstractanimation_issignalconnected_isbase = false;
            return QAbstractAnimation::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstractanimation_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractAnimation::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event);
    friend bool QAbstractAnimation_SuperEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime);
    friend void QAbstractAnimation_SuperUpdateCurrentTime(QAbstractAnimation* self, int currentTime);
    friend void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState);
    friend void QAbstractAnimation_SuperUpdateState(QAbstractAnimation* self, int newState, int oldState);
    friend void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction);
    friend void QAbstractAnimation_SuperUpdateDirection(QAbstractAnimation* self, int direction);
    friend void QAbstractAnimation_TimerEvent(QAbstractAnimation* self, QTimerEvent* event);
    friend void QAbstractAnimation_SuperTimerEvent(QAbstractAnimation* self, QTimerEvent* event);
    friend void QAbstractAnimation_ChildEvent(QAbstractAnimation* self, QChildEvent* event);
    friend void QAbstractAnimation_SuperChildEvent(QAbstractAnimation* self, QChildEvent* event);
    friend void QAbstractAnimation_CustomEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_SuperCustomEvent(QAbstractAnimation* self, QEvent* event);
    friend void QAbstractAnimation_ConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_SuperConnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_DisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend void QAbstractAnimation_SuperDisconnectNotify(QAbstractAnimation* self, const QMetaMethod* signal);
    friend QObject* QAbstractAnimation_Sender(const QAbstractAnimation* self);
    friend QObject* QAbstractAnimation_SuperSender(const QAbstractAnimation* self);
    friend int QAbstractAnimation_SenderSignalIndex(const QAbstractAnimation* self);
    friend int QAbstractAnimation_SuperSenderSignalIndex(const QAbstractAnimation* self);
    friend int QAbstractAnimation_Receivers(const QAbstractAnimation* self, const char* signal);
    friend int QAbstractAnimation_SuperReceivers(const QAbstractAnimation* self, const char* signal);
    friend bool QAbstractAnimation_IsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal);
    friend bool QAbstractAnimation_SuperIsSignalConnected(const QAbstractAnimation* self, const QMetaMethod* signal);
};

// This class is a subclass of QAnimationDriver so that we can call protected methods
class VirtualQAnimationDriver final : public QAnimationDriver {

  public:
    // Virtual class boolean flag
    bool isVirtualQAnimationDriver = true;

    // Virtual class public types (including callbacks)
    using QAnimationDriver_MetaObject_Callback = QMetaObject* (*)();
    using QAnimationDriver_Metacast_Callback = void* (*)(QAnimationDriver*, const char*);
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
    QAnimationDriver_AdvanceAnimation_Callback qanimationdriver_advanceanimation_callback = nullptr;
    QAnimationDriver_Sender_Callback qanimationdriver_sender_callback = nullptr;
    QAnimationDriver_SenderSignalIndex_Callback qanimationdriver_sendersignalindex_callback = nullptr;
    QAnimationDriver_Receivers_Callback qanimationdriver_receivers_callback = nullptr;
    QAnimationDriver_IsSignalConnected_Callback qanimationdriver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qanimationdriver_metaobject_isbase = false;
    mutable bool qanimationdriver_metacast_isbase = false;
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

    // Callback setters
    inline void setQAnimationDriver_MetaObject_Callback(QAnimationDriver_MetaObject_Callback cb) { qanimationdriver_metaobject_callback = cb; }
    inline void setQAnimationDriver_Metacast_Callback(QAnimationDriver_Metacast_Callback cb) { qanimationdriver_metacast_callback = cb; }
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
    inline void setQAnimationDriver_MetaObject_IsBase(bool value) const { qanimationdriver_metaobject_isbase = value; }
    inline void setQAnimationDriver_Metacast_IsBase(bool value) const { qanimationdriver_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qanimationdriver_metaobject_isbase) {
            qanimationdriver_metaobject_isbase = false;
            return QAnimationDriver::metaObject();
        }
        auto metaobject_cb = qanimationdriver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAnimationDriver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qanimationdriver_metacast_isbase) {
            qanimationdriver_metacast_isbase = false;
            return QAnimationDriver::qt_metacast(param1);
        }
        auto metacast_cb = qanimationdriver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAnimationDriver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qanimationdriver_metacall_isbase) {
            qanimationdriver_metacall_isbase = false;
            return QAnimationDriver::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qanimationdriver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAnimationDriver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance() override {
        if (qanimationdriver_advance_isbase) {
            qanimationdriver_advance_isbase = false;
            QAnimationDriver::advance();
            return;
        }
        auto advance_cb = qanimationdriver_advance_callback;
        if (advance_cb) {
            advance_cb();
            return;
        }
        QAnimationDriver::advance();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 elapsed() const override {
        if (qanimationdriver_elapsed_isbase) {
            qanimationdriver_elapsed_isbase = false;
            return QAnimationDriver::elapsed();
        }
        auto elapsed_cb = qanimationdriver_elapsed_callback;
        if (elapsed_cb) {
            long long callback_ret = elapsed_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QAnimationDriver::elapsed();
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (qanimationdriver_start_isbase) {
            qanimationdriver_start_isbase = false;
            QAnimationDriver::start();
            return;
        }
        auto start_cb = qanimationdriver_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        QAnimationDriver::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (qanimationdriver_stop_isbase) {
            qanimationdriver_stop_isbase = false;
            QAnimationDriver::stop();
            return;
        }
        auto stop_cb = qanimationdriver_stop_callback;
        if (stop_cb) {
            stop_cb();
            return;
        }
        QAnimationDriver::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qanimationdriver_event_isbase) {
            qanimationdriver_event_isbase = false;
            return QAnimationDriver::event(event);
        }
        auto event_cb = qanimationdriver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAnimationDriver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qanimationdriver_eventfilter_isbase) {
            qanimationdriver_eventfilter_isbase = false;
            return QAnimationDriver::eventFilter(watched, event);
        }
        auto eventfilter_cb = qanimationdriver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAnimationDriver::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qanimationdriver_timerevent_isbase) {
            qanimationdriver_timerevent_isbase = false;
            QAnimationDriver::timerEvent(event);
            return;
        }
        auto timerevent_cb = qanimationdriver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAnimationDriver::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qanimationdriver_childevent_isbase) {
            qanimationdriver_childevent_isbase = false;
            QAnimationDriver::childEvent(event);
            return;
        }
        auto childevent_cb = qanimationdriver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAnimationDriver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qanimationdriver_customevent_isbase) {
            qanimationdriver_customevent_isbase = false;
            QAnimationDriver::customEvent(event);
            return;
        }
        auto customevent_cb = qanimationdriver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAnimationDriver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_connectnotify_isbase) {
            qanimationdriver_connectnotify_isbase = false;
            QAnimationDriver::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qanimationdriver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAnimationDriver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_disconnectnotify_isbase) {
            qanimationdriver_disconnectnotify_isbase = false;
            QAnimationDriver::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qanimationdriver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAnimationDriver::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void advanceAnimation() {
        if (qanimationdriver_advanceanimation_isbase) {
            qanimationdriver_advanceanimation_isbase = false;
            QAnimationDriver::advanceAnimation();
            return;
        }
        auto advanceanimation_cb = qanimationdriver_advanceanimation_callback;
        if (advanceanimation_cb) {
            advanceanimation_cb();
            return;
        }
        QAnimationDriver::advanceAnimation();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qanimationdriver_sender_isbase) {
            qanimationdriver_sender_isbase = false;
            return QAnimationDriver::sender();
        }
        auto sender_cb = qanimationdriver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAnimationDriver::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qanimationdriver_sendersignalindex_isbase) {
            qanimationdriver_sendersignalindex_isbase = false;
            return QAnimationDriver::senderSignalIndex();
        }
        auto sendersignalindex_cb = qanimationdriver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAnimationDriver::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qanimationdriver_receivers_isbase) {
            qanimationdriver_receivers_isbase = false;
            return QAnimationDriver::receivers(signal);
        }
        auto receivers_cb = qanimationdriver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAnimationDriver::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qanimationdriver_issignalconnected_isbase) {
            qanimationdriver_issignalconnected_isbase = false;
            return QAnimationDriver::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qanimationdriver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAnimationDriver::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAnimationDriver_Start(QAnimationDriver* self);
    friend void QAnimationDriver_SuperStart(QAnimationDriver* self);
    friend void QAnimationDriver_Stop(QAnimationDriver* self);
    friend void QAnimationDriver_SuperStop(QAnimationDriver* self);
    friend void QAnimationDriver_TimerEvent(QAnimationDriver* self, QTimerEvent* event);
    friend void QAnimationDriver_SuperTimerEvent(QAnimationDriver* self, QTimerEvent* event);
    friend void QAnimationDriver_ChildEvent(QAnimationDriver* self, QChildEvent* event);
    friend void QAnimationDriver_SuperChildEvent(QAnimationDriver* self, QChildEvent* event);
    friend void QAnimationDriver_CustomEvent(QAnimationDriver* self, QEvent* event);
    friend void QAnimationDriver_SuperCustomEvent(QAnimationDriver* self, QEvent* event);
    friend void QAnimationDriver_ConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_SuperConnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_DisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_SuperDisconnectNotify(QAnimationDriver* self, const QMetaMethod* signal);
    friend void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self);
    friend void QAnimationDriver_SuperAdvanceAnimation(QAnimationDriver* self);
    friend QObject* QAnimationDriver_Sender(const QAnimationDriver* self);
    friend QObject* QAnimationDriver_SuperSender(const QAnimationDriver* self);
    friend int QAnimationDriver_SenderSignalIndex(const QAnimationDriver* self);
    friend int QAnimationDriver_SuperSenderSignalIndex(const QAnimationDriver* self);
    friend int QAnimationDriver_Receivers(const QAnimationDriver* self, const char* signal);
    friend int QAnimationDriver_SuperReceivers(const QAnimationDriver* self, const char* signal);
    friend bool QAnimationDriver_IsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal);
    friend bool QAnimationDriver_SuperIsSignalConnected(const QAnimationDriver* self, const QMetaMethod* signal);
};

#endif
