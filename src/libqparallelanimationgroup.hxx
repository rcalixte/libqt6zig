#pragma once
#ifndef SRCC_LIBVIRTUALQPARALLELANIMATIONGROUP_H
#define SRCC_LIBVIRTUALQPARALLELANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QParallelAnimationGroup so that we can call protected methods
class VirtualQParallelAnimationGroup final : public QParallelAnimationGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQParallelAnimationGroup = true;

    // Virtual class public types (including callbacks)
    using QParallelAnimationGroup_Metacall_Callback = int (*)(QParallelAnimationGroup*, int, int, void**);
    using QParallelAnimationGroup_Duration_Callback = int (*)();
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
    using QParallelAnimationGroup_Sender_Callback = QObject* (*)();
    using QParallelAnimationGroup_SenderSignalIndex_Callback = int (*)();
    using QParallelAnimationGroup_Receivers_Callback = int (*)(const QParallelAnimationGroup*, const char*);
    using QParallelAnimationGroup_IsSignalConnected_Callback = bool (*)(const QParallelAnimationGroup*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    QParallelAnimationGroup_Sender_Callback qparallelanimationgroup_sender_callback = nullptr;
    QParallelAnimationGroup_SenderSignalIndex_Callback qparallelanimationgroup_sendersignalindex_callback = nullptr;
    QParallelAnimationGroup_Receivers_Callback qparallelanimationgroup_receivers_callback = nullptr;
    QParallelAnimationGroup_IsSignalConnected_Callback qparallelanimationgroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qparallelanimationgroup_metacall_isbase = false;
    mutable bool qparallelanimationgroup_duration_isbase = false;
    mutable bool qparallelanimationgroup_event_isbase = false;
    mutable bool qparallelanimationgroup_updatecurrenttime_isbase = false;
    mutable bool qparallelanimationgroup_updatestate_isbase = false;
    mutable bool qparallelanimationgroup_updatedirection_isbase = false;
    mutable bool qparallelanimationgroup_eventfilter_isbase = false;
    mutable bool qparallelanimationgroup_timerevent_isbase = false;
    mutable bool qparallelanimationgroup_childevent_isbase = false;
    mutable bool qparallelanimationgroup_customevent_isbase = false;
    mutable bool qparallelanimationgroup_connectnotify_isbase = false;
    mutable bool qparallelanimationgroup_disconnectnotify_isbase = false;
    mutable bool qparallelanimationgroup_sender_isbase = false;
    mutable bool qparallelanimationgroup_sendersignalindex_isbase = false;
    mutable bool qparallelanimationgroup_receivers_isbase = false;
    mutable bool qparallelanimationgroup_issignalconnected_isbase = false;

  public:
    VirtualQParallelAnimationGroup() : QParallelAnimationGroup() {};
    VirtualQParallelAnimationGroup(QObject* parent) : QParallelAnimationGroup(parent) {};

    ~VirtualQParallelAnimationGroup() {
        qparallelanimationgroup_metacall_callback = nullptr;
        qparallelanimationgroup_duration_callback = nullptr;
        qparallelanimationgroup_event_callback = nullptr;
        qparallelanimationgroup_updatecurrenttime_callback = nullptr;
        qparallelanimationgroup_updatestate_callback = nullptr;
        qparallelanimationgroup_updatedirection_callback = nullptr;
        qparallelanimationgroup_eventfilter_callback = nullptr;
        qparallelanimationgroup_timerevent_callback = nullptr;
        qparallelanimationgroup_childevent_callback = nullptr;
        qparallelanimationgroup_customevent_callback = nullptr;
        qparallelanimationgroup_connectnotify_callback = nullptr;
        qparallelanimationgroup_disconnectnotify_callback = nullptr;
        qparallelanimationgroup_sender_callback = nullptr;
        qparallelanimationgroup_sendersignalindex_callback = nullptr;
        qparallelanimationgroup_receivers_callback = nullptr;
        qparallelanimationgroup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQParallelAnimationGroup_Metacall_Callback(QParallelAnimationGroup_Metacall_Callback cb) { qparallelanimationgroup_metacall_callback = cb; }
    inline void setQParallelAnimationGroup_Duration_Callback(QParallelAnimationGroup_Duration_Callback cb) { qparallelanimationgroup_duration_callback = cb; }
    inline void setQParallelAnimationGroup_Event_Callback(QParallelAnimationGroup_Event_Callback cb) { qparallelanimationgroup_event_callback = cb; }
    inline void setQParallelAnimationGroup_UpdateCurrentTime_Callback(QParallelAnimationGroup_UpdateCurrentTime_Callback cb) { qparallelanimationgroup_updatecurrenttime_callback = cb; }
    inline void setQParallelAnimationGroup_UpdateState_Callback(QParallelAnimationGroup_UpdateState_Callback cb) { qparallelanimationgroup_updatestate_callback = cb; }
    inline void setQParallelAnimationGroup_UpdateDirection_Callback(QParallelAnimationGroup_UpdateDirection_Callback cb) { qparallelanimationgroup_updatedirection_callback = cb; }
    inline void setQParallelAnimationGroup_EventFilter_Callback(QParallelAnimationGroup_EventFilter_Callback cb) { qparallelanimationgroup_eventfilter_callback = cb; }
    inline void setQParallelAnimationGroup_TimerEvent_Callback(QParallelAnimationGroup_TimerEvent_Callback cb) { qparallelanimationgroup_timerevent_callback = cb; }
    inline void setQParallelAnimationGroup_ChildEvent_Callback(QParallelAnimationGroup_ChildEvent_Callback cb) { qparallelanimationgroup_childevent_callback = cb; }
    inline void setQParallelAnimationGroup_CustomEvent_Callback(QParallelAnimationGroup_CustomEvent_Callback cb) { qparallelanimationgroup_customevent_callback = cb; }
    inline void setQParallelAnimationGroup_ConnectNotify_Callback(QParallelAnimationGroup_ConnectNotify_Callback cb) { qparallelanimationgroup_connectnotify_callback = cb; }
    inline void setQParallelAnimationGroup_DisconnectNotify_Callback(QParallelAnimationGroup_DisconnectNotify_Callback cb) { qparallelanimationgroup_disconnectnotify_callback = cb; }
    inline void setQParallelAnimationGroup_Sender_Callback(QParallelAnimationGroup_Sender_Callback cb) { qparallelanimationgroup_sender_callback = cb; }
    inline void setQParallelAnimationGroup_SenderSignalIndex_Callback(QParallelAnimationGroup_SenderSignalIndex_Callback cb) { qparallelanimationgroup_sendersignalindex_callback = cb; }
    inline void setQParallelAnimationGroup_Receivers_Callback(QParallelAnimationGroup_Receivers_Callback cb) { qparallelanimationgroup_receivers_callback = cb; }
    inline void setQParallelAnimationGroup_IsSignalConnected_Callback(QParallelAnimationGroup_IsSignalConnected_Callback cb) { qparallelanimationgroup_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQParallelAnimationGroup_Metacall_IsBase(bool value) const { qparallelanimationgroup_metacall_isbase = value; }
    inline void setQParallelAnimationGroup_Duration_IsBase(bool value) const { qparallelanimationgroup_duration_isbase = value; }
    inline void setQParallelAnimationGroup_Event_IsBase(bool value) const { qparallelanimationgroup_event_isbase = value; }
    inline void setQParallelAnimationGroup_UpdateCurrentTime_IsBase(bool value) const { qparallelanimationgroup_updatecurrenttime_isbase = value; }
    inline void setQParallelAnimationGroup_UpdateState_IsBase(bool value) const { qparallelanimationgroup_updatestate_isbase = value; }
    inline void setQParallelAnimationGroup_UpdateDirection_IsBase(bool value) const { qparallelanimationgroup_updatedirection_isbase = value; }
    inline void setQParallelAnimationGroup_EventFilter_IsBase(bool value) const { qparallelanimationgroup_eventfilter_isbase = value; }
    inline void setQParallelAnimationGroup_TimerEvent_IsBase(bool value) const { qparallelanimationgroup_timerevent_isbase = value; }
    inline void setQParallelAnimationGroup_ChildEvent_IsBase(bool value) const { qparallelanimationgroup_childevent_isbase = value; }
    inline void setQParallelAnimationGroup_CustomEvent_IsBase(bool value) const { qparallelanimationgroup_customevent_isbase = value; }
    inline void setQParallelAnimationGroup_ConnectNotify_IsBase(bool value) const { qparallelanimationgroup_connectnotify_isbase = value; }
    inline void setQParallelAnimationGroup_DisconnectNotify_IsBase(bool value) const { qparallelanimationgroup_disconnectnotify_isbase = value; }
    inline void setQParallelAnimationGroup_Sender_IsBase(bool value) const { qparallelanimationgroup_sender_isbase = value; }
    inline void setQParallelAnimationGroup_SenderSignalIndex_IsBase(bool value) const { qparallelanimationgroup_sendersignalindex_isbase = value; }
    inline void setQParallelAnimationGroup_Receivers_IsBase(bool value) const { qparallelanimationgroup_receivers_isbase = value; }
    inline void setQParallelAnimationGroup_IsSignalConnected_IsBase(bool value) const { qparallelanimationgroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qparallelanimationgroup_metacall_isbase) {
            qparallelanimationgroup_metacall_isbase = false;
            return QParallelAnimationGroup::qt_metacall(param1, param2, param3);
        } else if (qparallelanimationgroup_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qparallelanimationgroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QParallelAnimationGroup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qparallelanimationgroup_duration_isbase) {
            qparallelanimationgroup_duration_isbase = false;
            return QParallelAnimationGroup::duration();
        } else if (qparallelanimationgroup_duration_callback != nullptr) {
            int callback_ret = qparallelanimationgroup_duration_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QParallelAnimationGroup::duration();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qparallelanimationgroup_event_isbase) {
            qparallelanimationgroup_event_isbase = false;
            return QParallelAnimationGroup::event(event);
        } else if (qparallelanimationgroup_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qparallelanimationgroup_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QParallelAnimationGroup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        if (qparallelanimationgroup_updatecurrenttime_isbase) {
            qparallelanimationgroup_updatecurrenttime_isbase = false;
            QParallelAnimationGroup::updateCurrentTime(currentTime);
        } else if (qparallelanimationgroup_updatecurrenttime_callback != nullptr) {
            int cbval1 = currentTime;

            qparallelanimationgroup_updatecurrenttime_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::updateCurrentTime(currentTime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qparallelanimationgroup_updatestate_isbase) {
            qparallelanimationgroup_updatestate_isbase = false;
            QParallelAnimationGroup::updateState(newState, oldState);
        } else if (qparallelanimationgroup_updatestate_callback != nullptr) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            qparallelanimationgroup_updatestate_callback(this, cbval1, cbval2);
        } else {
            QParallelAnimationGroup::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qparallelanimationgroup_updatedirection_isbase) {
            qparallelanimationgroup_updatedirection_isbase = false;
            QParallelAnimationGroup::updateDirection(direction);
        } else if (qparallelanimationgroup_updatedirection_callback != nullptr) {
            int cbval1 = static_cast<int>(direction);

            qparallelanimationgroup_updatedirection_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qparallelanimationgroup_eventfilter_isbase) {
            qparallelanimationgroup_eventfilter_isbase = false;
            return QParallelAnimationGroup::eventFilter(watched, event);
        } else if (qparallelanimationgroup_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qparallelanimationgroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QParallelAnimationGroup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qparallelanimationgroup_timerevent_isbase) {
            qparallelanimationgroup_timerevent_isbase = false;
            QParallelAnimationGroup::timerEvent(event);
        } else if (qparallelanimationgroup_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qparallelanimationgroup_timerevent_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qparallelanimationgroup_childevent_isbase) {
            qparallelanimationgroup_childevent_isbase = false;
            QParallelAnimationGroup::childEvent(event);
        } else if (qparallelanimationgroup_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qparallelanimationgroup_childevent_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qparallelanimationgroup_customevent_isbase) {
            qparallelanimationgroup_customevent_isbase = false;
            QParallelAnimationGroup::customEvent(event);
        } else if (qparallelanimationgroup_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qparallelanimationgroup_customevent_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qparallelanimationgroup_connectnotify_isbase) {
            qparallelanimationgroup_connectnotify_isbase = false;
            QParallelAnimationGroup::connectNotify(signal);
        } else if (qparallelanimationgroup_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qparallelanimationgroup_connectnotify_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qparallelanimationgroup_disconnectnotify_isbase) {
            qparallelanimationgroup_disconnectnotify_isbase = false;
            QParallelAnimationGroup::disconnectNotify(signal);
        } else if (qparallelanimationgroup_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qparallelanimationgroup_disconnectnotify_callback(this, cbval1);
        } else {
            QParallelAnimationGroup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qparallelanimationgroup_sender_isbase) {
            qparallelanimationgroup_sender_isbase = false;
            return QParallelAnimationGroup::sender();
        } else if (qparallelanimationgroup_sender_callback != nullptr) {
            QObject* callback_ret = qparallelanimationgroup_sender_callback();
            return callback_ret;
        } else {
            return QParallelAnimationGroup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qparallelanimationgroup_sendersignalindex_isbase) {
            qparallelanimationgroup_sendersignalindex_isbase = false;
            return QParallelAnimationGroup::senderSignalIndex();
        } else if (qparallelanimationgroup_sendersignalindex_callback != nullptr) {
            int callback_ret = qparallelanimationgroup_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QParallelAnimationGroup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qparallelanimationgroup_receivers_isbase) {
            qparallelanimationgroup_receivers_isbase = false;
            return QParallelAnimationGroup::receivers(signal);
        } else if (qparallelanimationgroup_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qparallelanimationgroup_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QParallelAnimationGroup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qparallelanimationgroup_issignalconnected_isbase) {
            qparallelanimationgroup_issignalconnected_isbase = false;
            return QParallelAnimationGroup::isSignalConnected(signal);
        } else if (qparallelanimationgroup_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qparallelanimationgroup_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QParallelAnimationGroup::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event);
    friend bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event);
    friend void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
    friend void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
    friend void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState);
    friend void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState);
    friend void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction);
    friend void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction);
    friend void QParallelAnimationGroup_TimerEvent(QParallelAnimationGroup* self, QTimerEvent* event);
    friend void QParallelAnimationGroup_QBaseTimerEvent(QParallelAnimationGroup* self, QTimerEvent* event);
    friend void QParallelAnimationGroup_ChildEvent(QParallelAnimationGroup* self, QChildEvent* event);
    friend void QParallelAnimationGroup_QBaseChildEvent(QParallelAnimationGroup* self, QChildEvent* event);
    friend void QParallelAnimationGroup_CustomEvent(QParallelAnimationGroup* self, QEvent* event);
    friend void QParallelAnimationGroup_QBaseCustomEvent(QParallelAnimationGroup* self, QEvent* event);
    friend void QParallelAnimationGroup_ConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
    friend void QParallelAnimationGroup_QBaseConnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
    friend void QParallelAnimationGroup_DisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
    friend void QParallelAnimationGroup_QBaseDisconnectNotify(QParallelAnimationGroup* self, const QMetaMethod* signal);
    friend QObject* QParallelAnimationGroup_Sender(const QParallelAnimationGroup* self);
    friend QObject* QParallelAnimationGroup_QBaseSender(const QParallelAnimationGroup* self);
    friend int QParallelAnimationGroup_SenderSignalIndex(const QParallelAnimationGroup* self);
    friend int QParallelAnimationGroup_QBaseSenderSignalIndex(const QParallelAnimationGroup* self);
    friend int QParallelAnimationGroup_Receivers(const QParallelAnimationGroup* self, const char* signal);
    friend int QParallelAnimationGroup_QBaseReceivers(const QParallelAnimationGroup* self, const char* signal);
    friend bool QParallelAnimationGroup_IsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal);
    friend bool QParallelAnimationGroup_QBaseIsSignalConnected(const QParallelAnimationGroup* self, const QMetaMethod* signal);
};

#endif
