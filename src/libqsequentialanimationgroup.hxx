#pragma once
#ifndef SRCC_LIBVIRTUALQSEQUENTIALANIMATIONGROUP_H
#define SRCC_LIBVIRTUALQSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSequentialAnimationGroup so that we can call protected methods
class VirtualQSequentialAnimationGroup final : public QSequentialAnimationGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQSequentialAnimationGroup = true;

    // Virtual class public types (including callbacks)
    using QSequentialAnimationGroup_MetaObject_Callback = QMetaObject* (*)();
    using QSequentialAnimationGroup_Metacast_Callback = void* (*)(QSequentialAnimationGroup*, const char*);
    using QSequentialAnimationGroup_Metacall_Callback = int (*)(QSequentialAnimationGroup*, int, int, void**);
    using QSequentialAnimationGroup_Duration_Callback = int (*)();
    using QSequentialAnimationGroup_Event_Callback = bool (*)(QSequentialAnimationGroup*, QEvent*);
    using QSequentialAnimationGroup_UpdateCurrentTime_Callback = void (*)(QSequentialAnimationGroup*, int);
    using QSequentialAnimationGroup_UpdateState_Callback = void (*)(QSequentialAnimationGroup*, int, int);
    using QSequentialAnimationGroup_UpdateDirection_Callback = void (*)(QSequentialAnimationGroup*, int);
    using QSequentialAnimationGroup_EventFilter_Callback = bool (*)(QSequentialAnimationGroup*, QObject*, QEvent*);
    using QSequentialAnimationGroup_TimerEvent_Callback = void (*)(QSequentialAnimationGroup*, QTimerEvent*);
    using QSequentialAnimationGroup_ChildEvent_Callback = void (*)(QSequentialAnimationGroup*, QChildEvent*);
    using QSequentialAnimationGroup_CustomEvent_Callback = void (*)(QSequentialAnimationGroup*, QEvent*);
    using QSequentialAnimationGroup_ConnectNotify_Callback = void (*)(QSequentialAnimationGroup*, QMetaMethod*);
    using QSequentialAnimationGroup_DisconnectNotify_Callback = void (*)(QSequentialAnimationGroup*, QMetaMethod*);
    using QSequentialAnimationGroup_Sender_Callback = QObject* (*)();
    using QSequentialAnimationGroup_SenderSignalIndex_Callback = int (*)();
    using QSequentialAnimationGroup_Receivers_Callback = int (*)(const QSequentialAnimationGroup*, const char*);
    using QSequentialAnimationGroup_IsSignalConnected_Callback = bool (*)(const QSequentialAnimationGroup*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSequentialAnimationGroup_MetaObject_Callback qsequentialanimationgroup_metaobject_callback = nullptr;
    QSequentialAnimationGroup_Metacast_Callback qsequentialanimationgroup_metacast_callback = nullptr;
    QSequentialAnimationGroup_Metacall_Callback qsequentialanimationgroup_metacall_callback = nullptr;
    QSequentialAnimationGroup_Duration_Callback qsequentialanimationgroup_duration_callback = nullptr;
    QSequentialAnimationGroup_Event_Callback qsequentialanimationgroup_event_callback = nullptr;
    QSequentialAnimationGroup_UpdateCurrentTime_Callback qsequentialanimationgroup_updatecurrenttime_callback = nullptr;
    QSequentialAnimationGroup_UpdateState_Callback qsequentialanimationgroup_updatestate_callback = nullptr;
    QSequentialAnimationGroup_UpdateDirection_Callback qsequentialanimationgroup_updatedirection_callback = nullptr;
    QSequentialAnimationGroup_EventFilter_Callback qsequentialanimationgroup_eventfilter_callback = nullptr;
    QSequentialAnimationGroup_TimerEvent_Callback qsequentialanimationgroup_timerevent_callback = nullptr;
    QSequentialAnimationGroup_ChildEvent_Callback qsequentialanimationgroup_childevent_callback = nullptr;
    QSequentialAnimationGroup_CustomEvent_Callback qsequentialanimationgroup_customevent_callback = nullptr;
    QSequentialAnimationGroup_ConnectNotify_Callback qsequentialanimationgroup_connectnotify_callback = nullptr;
    QSequentialAnimationGroup_DisconnectNotify_Callback qsequentialanimationgroup_disconnectnotify_callback = nullptr;
    QSequentialAnimationGroup_Sender_Callback qsequentialanimationgroup_sender_callback = nullptr;
    QSequentialAnimationGroup_SenderSignalIndex_Callback qsequentialanimationgroup_sendersignalindex_callback = nullptr;
    QSequentialAnimationGroup_Receivers_Callback qsequentialanimationgroup_receivers_callback = nullptr;
    QSequentialAnimationGroup_IsSignalConnected_Callback qsequentialanimationgroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsequentialanimationgroup_metaobject_isbase = false;
    mutable bool qsequentialanimationgroup_metacast_isbase = false;
    mutable bool qsequentialanimationgroup_metacall_isbase = false;
    mutable bool qsequentialanimationgroup_duration_isbase = false;
    mutable bool qsequentialanimationgroup_event_isbase = false;
    mutable bool qsequentialanimationgroup_updatecurrenttime_isbase = false;
    mutable bool qsequentialanimationgroup_updatestate_isbase = false;
    mutable bool qsequentialanimationgroup_updatedirection_isbase = false;
    mutable bool qsequentialanimationgroup_eventfilter_isbase = false;
    mutable bool qsequentialanimationgroup_timerevent_isbase = false;
    mutable bool qsequentialanimationgroup_childevent_isbase = false;
    mutable bool qsequentialanimationgroup_customevent_isbase = false;
    mutable bool qsequentialanimationgroup_connectnotify_isbase = false;
    mutable bool qsequentialanimationgroup_disconnectnotify_isbase = false;
    mutable bool qsequentialanimationgroup_sender_isbase = false;
    mutable bool qsequentialanimationgroup_sendersignalindex_isbase = false;
    mutable bool qsequentialanimationgroup_receivers_isbase = false;
    mutable bool qsequentialanimationgroup_issignalconnected_isbase = false;

  public:
    VirtualQSequentialAnimationGroup() : QSequentialAnimationGroup() {};
    VirtualQSequentialAnimationGroup(QObject* parent) : QSequentialAnimationGroup(parent) {};

    // Callback setters
    inline void setQSequentialAnimationGroup_MetaObject_Callback(QSequentialAnimationGroup_MetaObject_Callback cb) { qsequentialanimationgroup_metaobject_callback = cb; }
    inline void setQSequentialAnimationGroup_Metacast_Callback(QSequentialAnimationGroup_Metacast_Callback cb) { qsequentialanimationgroup_metacast_callback = cb; }
    inline void setQSequentialAnimationGroup_Metacall_Callback(QSequentialAnimationGroup_Metacall_Callback cb) { qsequentialanimationgroup_metacall_callback = cb; }
    inline void setQSequentialAnimationGroup_Duration_Callback(QSequentialAnimationGroup_Duration_Callback cb) { qsequentialanimationgroup_duration_callback = cb; }
    inline void setQSequentialAnimationGroup_Event_Callback(QSequentialAnimationGroup_Event_Callback cb) { qsequentialanimationgroup_event_callback = cb; }
    inline void setQSequentialAnimationGroup_UpdateCurrentTime_Callback(QSequentialAnimationGroup_UpdateCurrentTime_Callback cb) { qsequentialanimationgroup_updatecurrenttime_callback = cb; }
    inline void setQSequentialAnimationGroup_UpdateState_Callback(QSequentialAnimationGroup_UpdateState_Callback cb) { qsequentialanimationgroup_updatestate_callback = cb; }
    inline void setQSequentialAnimationGroup_UpdateDirection_Callback(QSequentialAnimationGroup_UpdateDirection_Callback cb) { qsequentialanimationgroup_updatedirection_callback = cb; }
    inline void setQSequentialAnimationGroup_EventFilter_Callback(QSequentialAnimationGroup_EventFilter_Callback cb) { qsequentialanimationgroup_eventfilter_callback = cb; }
    inline void setQSequentialAnimationGroup_TimerEvent_Callback(QSequentialAnimationGroup_TimerEvent_Callback cb) { qsequentialanimationgroup_timerevent_callback = cb; }
    inline void setQSequentialAnimationGroup_ChildEvent_Callback(QSequentialAnimationGroup_ChildEvent_Callback cb) { qsequentialanimationgroup_childevent_callback = cb; }
    inline void setQSequentialAnimationGroup_CustomEvent_Callback(QSequentialAnimationGroup_CustomEvent_Callback cb) { qsequentialanimationgroup_customevent_callback = cb; }
    inline void setQSequentialAnimationGroup_ConnectNotify_Callback(QSequentialAnimationGroup_ConnectNotify_Callback cb) { qsequentialanimationgroup_connectnotify_callback = cb; }
    inline void setQSequentialAnimationGroup_DisconnectNotify_Callback(QSequentialAnimationGroup_DisconnectNotify_Callback cb) { qsequentialanimationgroup_disconnectnotify_callback = cb; }
    inline void setQSequentialAnimationGroup_Sender_Callback(QSequentialAnimationGroup_Sender_Callback cb) { qsequentialanimationgroup_sender_callback = cb; }
    inline void setQSequentialAnimationGroup_SenderSignalIndex_Callback(QSequentialAnimationGroup_SenderSignalIndex_Callback cb) { qsequentialanimationgroup_sendersignalindex_callback = cb; }
    inline void setQSequentialAnimationGroup_Receivers_Callback(QSequentialAnimationGroup_Receivers_Callback cb) { qsequentialanimationgroup_receivers_callback = cb; }
    inline void setQSequentialAnimationGroup_IsSignalConnected_Callback(QSequentialAnimationGroup_IsSignalConnected_Callback cb) { qsequentialanimationgroup_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSequentialAnimationGroup_MetaObject_IsBase(bool value) const { qsequentialanimationgroup_metaobject_isbase = value; }
    inline void setQSequentialAnimationGroup_Metacast_IsBase(bool value) const { qsequentialanimationgroup_metacast_isbase = value; }
    inline void setQSequentialAnimationGroup_Metacall_IsBase(bool value) const { qsequentialanimationgroup_metacall_isbase = value; }
    inline void setQSequentialAnimationGroup_Duration_IsBase(bool value) const { qsequentialanimationgroup_duration_isbase = value; }
    inline void setQSequentialAnimationGroup_Event_IsBase(bool value) const { qsequentialanimationgroup_event_isbase = value; }
    inline void setQSequentialAnimationGroup_UpdateCurrentTime_IsBase(bool value) const { qsequentialanimationgroup_updatecurrenttime_isbase = value; }
    inline void setQSequentialAnimationGroup_UpdateState_IsBase(bool value) const { qsequentialanimationgroup_updatestate_isbase = value; }
    inline void setQSequentialAnimationGroup_UpdateDirection_IsBase(bool value) const { qsequentialanimationgroup_updatedirection_isbase = value; }
    inline void setQSequentialAnimationGroup_EventFilter_IsBase(bool value) const { qsequentialanimationgroup_eventfilter_isbase = value; }
    inline void setQSequentialAnimationGroup_TimerEvent_IsBase(bool value) const { qsequentialanimationgroup_timerevent_isbase = value; }
    inline void setQSequentialAnimationGroup_ChildEvent_IsBase(bool value) const { qsequentialanimationgroup_childevent_isbase = value; }
    inline void setQSequentialAnimationGroup_CustomEvent_IsBase(bool value) const { qsequentialanimationgroup_customevent_isbase = value; }
    inline void setQSequentialAnimationGroup_ConnectNotify_IsBase(bool value) const { qsequentialanimationgroup_connectnotify_isbase = value; }
    inline void setQSequentialAnimationGroup_DisconnectNotify_IsBase(bool value) const { qsequentialanimationgroup_disconnectnotify_isbase = value; }
    inline void setQSequentialAnimationGroup_Sender_IsBase(bool value) const { qsequentialanimationgroup_sender_isbase = value; }
    inline void setQSequentialAnimationGroup_SenderSignalIndex_IsBase(bool value) const { qsequentialanimationgroup_sendersignalindex_isbase = value; }
    inline void setQSequentialAnimationGroup_Receivers_IsBase(bool value) const { qsequentialanimationgroup_receivers_isbase = value; }
    inline void setQSequentialAnimationGroup_IsSignalConnected_IsBase(bool value) const { qsequentialanimationgroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsequentialanimationgroup_metaobject_isbase) {
            qsequentialanimationgroup_metaobject_isbase = false;
            return QSequentialAnimationGroup::metaObject();
        }
        auto metaobject_cb = qsequentialanimationgroup_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSequentialAnimationGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsequentialanimationgroup_metacast_isbase) {
            qsequentialanimationgroup_metacast_isbase = false;
            return QSequentialAnimationGroup::qt_metacast(param1);
        }
        auto metacast_cb = qsequentialanimationgroup_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSequentialAnimationGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsequentialanimationgroup_metacall_isbase) {
            qsequentialanimationgroup_metacall_isbase = false;
            return QSequentialAnimationGroup::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsequentialanimationgroup_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSequentialAnimationGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qsequentialanimationgroup_duration_isbase) {
            qsequentialanimationgroup_duration_isbase = false;
            return QSequentialAnimationGroup::duration();
        }
        auto duration_cb = qsequentialanimationgroup_duration_callback;
        if (duration_cb) {
            int callback_ret = duration_cb();
            return static_cast<int>(callback_ret);
        }
        return QSequentialAnimationGroup::duration();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsequentialanimationgroup_event_isbase) {
            qsequentialanimationgroup_event_isbase = false;
            return QSequentialAnimationGroup::event(event);
        }
        auto event_cb = qsequentialanimationgroup_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSequentialAnimationGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qsequentialanimationgroup_updatecurrenttime_isbase) {
            qsequentialanimationgroup_updatecurrenttime_isbase = false;
            QSequentialAnimationGroup::updateCurrentTime(param1);
            return;
        }
        auto updatecurrenttime_cb = qsequentialanimationgroup_updatecurrenttime_callback;
        if (updatecurrenttime_cb) {
            int cbval1 = param1;

            updatecurrenttime_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::updateCurrentTime(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qsequentialanimationgroup_updatestate_isbase) {
            qsequentialanimationgroup_updatestate_isbase = false;
            QSequentialAnimationGroup::updateState(newState, oldState);
            return;
        }
        auto updatestate_cb = qsequentialanimationgroup_updatestate_callback;
        if (updatestate_cb) {
            int cbval1 = static_cast<int>(newState);
            int cbval2 = static_cast<int>(oldState);

            updatestate_cb(this, cbval1, cbval2);
            return;
        }
        QSequentialAnimationGroup::updateState(newState, oldState);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qsequentialanimationgroup_updatedirection_isbase) {
            qsequentialanimationgroup_updatedirection_isbase = false;
            QSequentialAnimationGroup::updateDirection(direction);
            return;
        }
        auto updatedirection_cb = qsequentialanimationgroup_updatedirection_callback;
        if (updatedirection_cb) {
            int cbval1 = static_cast<int>(direction);

            updatedirection_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::updateDirection(direction);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsequentialanimationgroup_eventfilter_isbase) {
            qsequentialanimationgroup_eventfilter_isbase = false;
            return QSequentialAnimationGroup::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsequentialanimationgroup_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSequentialAnimationGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsequentialanimationgroup_timerevent_isbase) {
            qsequentialanimationgroup_timerevent_isbase = false;
            QSequentialAnimationGroup::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsequentialanimationgroup_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsequentialanimationgroup_childevent_isbase) {
            qsequentialanimationgroup_childevent_isbase = false;
            QSequentialAnimationGroup::childEvent(event);
            return;
        }
        auto childevent_cb = qsequentialanimationgroup_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsequentialanimationgroup_customevent_isbase) {
            qsequentialanimationgroup_customevent_isbase = false;
            QSequentialAnimationGroup::customEvent(event);
            return;
        }
        auto customevent_cb = qsequentialanimationgroup_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsequentialanimationgroup_connectnotify_isbase) {
            qsequentialanimationgroup_connectnotify_isbase = false;
            QSequentialAnimationGroup::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsequentialanimationgroup_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsequentialanimationgroup_disconnectnotify_isbase) {
            qsequentialanimationgroup_disconnectnotify_isbase = false;
            QSequentialAnimationGroup::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsequentialanimationgroup_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSequentialAnimationGroup::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsequentialanimationgroup_sender_isbase) {
            qsequentialanimationgroup_sender_isbase = false;
            return QSequentialAnimationGroup::sender();
        }
        auto sender_cb = qsequentialanimationgroup_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSequentialAnimationGroup::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsequentialanimationgroup_sendersignalindex_isbase) {
            qsequentialanimationgroup_sendersignalindex_isbase = false;
            return QSequentialAnimationGroup::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsequentialanimationgroup_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSequentialAnimationGroup::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsequentialanimationgroup_receivers_isbase) {
            qsequentialanimationgroup_receivers_isbase = false;
            return QSequentialAnimationGroup::receivers(signal);
        }
        auto receivers_cb = qsequentialanimationgroup_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSequentialAnimationGroup::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsequentialanimationgroup_issignalconnected_isbase) {
            qsequentialanimationgroup_issignalconnected_isbase = false;
            return QSequentialAnimationGroup::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsequentialanimationgroup_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSequentialAnimationGroup::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event);
    friend bool QSequentialAnimationGroup_SuperEvent(QSequentialAnimationGroup* self, QEvent* event);
    friend void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
    friend void QSequentialAnimationGroup_SuperUpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
    friend void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
    friend void QSequentialAnimationGroup_SuperUpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
    friend void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction);
    friend void QSequentialAnimationGroup_SuperUpdateDirection(QSequentialAnimationGroup* self, int direction);
    friend void QSequentialAnimationGroup_TimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event);
    friend void QSequentialAnimationGroup_SuperTimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event);
    friend void QSequentialAnimationGroup_ChildEvent(QSequentialAnimationGroup* self, QChildEvent* event);
    friend void QSequentialAnimationGroup_SuperChildEvent(QSequentialAnimationGroup* self, QChildEvent* event);
    friend void QSequentialAnimationGroup_CustomEvent(QSequentialAnimationGroup* self, QEvent* event);
    friend void QSequentialAnimationGroup_SuperCustomEvent(QSequentialAnimationGroup* self, QEvent* event);
    friend void QSequentialAnimationGroup_ConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
    friend void QSequentialAnimationGroup_SuperConnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
    friend void QSequentialAnimationGroup_DisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
    friend void QSequentialAnimationGroup_SuperDisconnectNotify(QSequentialAnimationGroup* self, const QMetaMethod* signal);
    friend QObject* QSequentialAnimationGroup_Sender(const QSequentialAnimationGroup* self);
    friend QObject* QSequentialAnimationGroup_SuperSender(const QSequentialAnimationGroup* self);
    friend int QSequentialAnimationGroup_SenderSignalIndex(const QSequentialAnimationGroup* self);
    friend int QSequentialAnimationGroup_SuperSenderSignalIndex(const QSequentialAnimationGroup* self);
    friend int QSequentialAnimationGroup_Receivers(const QSequentialAnimationGroup* self, const char* signal);
    friend int QSequentialAnimationGroup_SuperReceivers(const QSequentialAnimationGroup* self, const char* signal);
    friend bool QSequentialAnimationGroup_IsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal);
    friend bool QSequentialAnimationGroup_SuperIsSignalConnected(const QSequentialAnimationGroup* self, const QMetaMethod* signal);
};

#endif
