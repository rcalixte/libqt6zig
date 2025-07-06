#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSITEMANIMATION_H
#define SRCC_LIBVIRTUALQGRAPHICSITEMANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsItemAnimation so that we can call protected methods
class VirtualQGraphicsItemAnimation final : public QGraphicsItemAnimation {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsItemAnimation = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItemAnimation_Metacall_Callback = int (*)(QGraphicsItemAnimation*, int, int, void**);
    using QGraphicsItemAnimation_BeforeAnimationStep_Callback = void (*)(QGraphicsItemAnimation*, double);
    using QGraphicsItemAnimation_AfterAnimationStep_Callback = void (*)(QGraphicsItemAnimation*, double);
    using QGraphicsItemAnimation_Event_Callback = bool (*)(QGraphicsItemAnimation*, QEvent*);
    using QGraphicsItemAnimation_EventFilter_Callback = bool (*)(QGraphicsItemAnimation*, QObject*, QEvent*);
    using QGraphicsItemAnimation_TimerEvent_Callback = void (*)(QGraphicsItemAnimation*, QTimerEvent*);
    using QGraphicsItemAnimation_ChildEvent_Callback = void (*)(QGraphicsItemAnimation*, QChildEvent*);
    using QGraphicsItemAnimation_CustomEvent_Callback = void (*)(QGraphicsItemAnimation*, QEvent*);
    using QGraphicsItemAnimation_ConnectNotify_Callback = void (*)(QGraphicsItemAnimation*, QMetaMethod*);
    using QGraphicsItemAnimation_DisconnectNotify_Callback = void (*)(QGraphicsItemAnimation*, QMetaMethod*);
    using QGraphicsItemAnimation_Sender_Callback = QObject* (*)();
    using QGraphicsItemAnimation_SenderSignalIndex_Callback = int (*)();
    using QGraphicsItemAnimation_Receivers_Callback = int (*)(const QGraphicsItemAnimation*, const char*);
    using QGraphicsItemAnimation_IsSignalConnected_Callback = bool (*)(const QGraphicsItemAnimation*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGraphicsItemAnimation_Metacall_Callback qgraphicsitemanimation_metacall_callback = nullptr;
    QGraphicsItemAnimation_BeforeAnimationStep_Callback qgraphicsitemanimation_beforeanimationstep_callback = nullptr;
    QGraphicsItemAnimation_AfterAnimationStep_Callback qgraphicsitemanimation_afteranimationstep_callback = nullptr;
    QGraphicsItemAnimation_Event_Callback qgraphicsitemanimation_event_callback = nullptr;
    QGraphicsItemAnimation_EventFilter_Callback qgraphicsitemanimation_eventfilter_callback = nullptr;
    QGraphicsItemAnimation_TimerEvent_Callback qgraphicsitemanimation_timerevent_callback = nullptr;
    QGraphicsItemAnimation_ChildEvent_Callback qgraphicsitemanimation_childevent_callback = nullptr;
    QGraphicsItemAnimation_CustomEvent_Callback qgraphicsitemanimation_customevent_callback = nullptr;
    QGraphicsItemAnimation_ConnectNotify_Callback qgraphicsitemanimation_connectnotify_callback = nullptr;
    QGraphicsItemAnimation_DisconnectNotify_Callback qgraphicsitemanimation_disconnectnotify_callback = nullptr;
    QGraphicsItemAnimation_Sender_Callback qgraphicsitemanimation_sender_callback = nullptr;
    QGraphicsItemAnimation_SenderSignalIndex_Callback qgraphicsitemanimation_sendersignalindex_callback = nullptr;
    QGraphicsItemAnimation_Receivers_Callback qgraphicsitemanimation_receivers_callback = nullptr;
    QGraphicsItemAnimation_IsSignalConnected_Callback qgraphicsitemanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsitemanimation_metacall_isbase = false;
    mutable bool qgraphicsitemanimation_beforeanimationstep_isbase = false;
    mutable bool qgraphicsitemanimation_afteranimationstep_isbase = false;
    mutable bool qgraphicsitemanimation_event_isbase = false;
    mutable bool qgraphicsitemanimation_eventfilter_isbase = false;
    mutable bool qgraphicsitemanimation_timerevent_isbase = false;
    mutable bool qgraphicsitemanimation_childevent_isbase = false;
    mutable bool qgraphicsitemanimation_customevent_isbase = false;
    mutable bool qgraphicsitemanimation_connectnotify_isbase = false;
    mutable bool qgraphicsitemanimation_disconnectnotify_isbase = false;
    mutable bool qgraphicsitemanimation_sender_isbase = false;
    mutable bool qgraphicsitemanimation_sendersignalindex_isbase = false;
    mutable bool qgraphicsitemanimation_receivers_isbase = false;
    mutable bool qgraphicsitemanimation_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsItemAnimation() : QGraphicsItemAnimation() {};
    VirtualQGraphicsItemAnimation(QObject* parent) : QGraphicsItemAnimation(parent) {};

    ~VirtualQGraphicsItemAnimation() {
        qgraphicsitemanimation_metacall_callback = nullptr;
        qgraphicsitemanimation_beforeanimationstep_callback = nullptr;
        qgraphicsitemanimation_afteranimationstep_callback = nullptr;
        qgraphicsitemanimation_event_callback = nullptr;
        qgraphicsitemanimation_eventfilter_callback = nullptr;
        qgraphicsitemanimation_timerevent_callback = nullptr;
        qgraphicsitemanimation_childevent_callback = nullptr;
        qgraphicsitemanimation_customevent_callback = nullptr;
        qgraphicsitemanimation_connectnotify_callback = nullptr;
        qgraphicsitemanimation_disconnectnotify_callback = nullptr;
        qgraphicsitemanimation_sender_callback = nullptr;
        qgraphicsitemanimation_sendersignalindex_callback = nullptr;
        qgraphicsitemanimation_receivers_callback = nullptr;
        qgraphicsitemanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsItemAnimation_Metacall_Callback(QGraphicsItemAnimation_Metacall_Callback cb) { qgraphicsitemanimation_metacall_callback = cb; }
    inline void setQGraphicsItemAnimation_BeforeAnimationStep_Callback(QGraphicsItemAnimation_BeforeAnimationStep_Callback cb) { qgraphicsitemanimation_beforeanimationstep_callback = cb; }
    inline void setQGraphicsItemAnimation_AfterAnimationStep_Callback(QGraphicsItemAnimation_AfterAnimationStep_Callback cb) { qgraphicsitemanimation_afteranimationstep_callback = cb; }
    inline void setQGraphicsItemAnimation_Event_Callback(QGraphicsItemAnimation_Event_Callback cb) { qgraphicsitemanimation_event_callback = cb; }
    inline void setQGraphicsItemAnimation_EventFilter_Callback(QGraphicsItemAnimation_EventFilter_Callback cb) { qgraphicsitemanimation_eventfilter_callback = cb; }
    inline void setQGraphicsItemAnimation_TimerEvent_Callback(QGraphicsItemAnimation_TimerEvent_Callback cb) { qgraphicsitemanimation_timerevent_callback = cb; }
    inline void setQGraphicsItemAnimation_ChildEvent_Callback(QGraphicsItemAnimation_ChildEvent_Callback cb) { qgraphicsitemanimation_childevent_callback = cb; }
    inline void setQGraphicsItemAnimation_CustomEvent_Callback(QGraphicsItemAnimation_CustomEvent_Callback cb) { qgraphicsitemanimation_customevent_callback = cb; }
    inline void setQGraphicsItemAnimation_ConnectNotify_Callback(QGraphicsItemAnimation_ConnectNotify_Callback cb) { qgraphicsitemanimation_connectnotify_callback = cb; }
    inline void setQGraphicsItemAnimation_DisconnectNotify_Callback(QGraphicsItemAnimation_DisconnectNotify_Callback cb) { qgraphicsitemanimation_disconnectnotify_callback = cb; }
    inline void setQGraphicsItemAnimation_Sender_Callback(QGraphicsItemAnimation_Sender_Callback cb) { qgraphicsitemanimation_sender_callback = cb; }
    inline void setQGraphicsItemAnimation_SenderSignalIndex_Callback(QGraphicsItemAnimation_SenderSignalIndex_Callback cb) { qgraphicsitemanimation_sendersignalindex_callback = cb; }
    inline void setQGraphicsItemAnimation_Receivers_Callback(QGraphicsItemAnimation_Receivers_Callback cb) { qgraphicsitemanimation_receivers_callback = cb; }
    inline void setQGraphicsItemAnimation_IsSignalConnected_Callback(QGraphicsItemAnimation_IsSignalConnected_Callback cb) { qgraphicsitemanimation_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGraphicsItemAnimation_Metacall_IsBase(bool value) const { qgraphicsitemanimation_metacall_isbase = value; }
    inline void setQGraphicsItemAnimation_BeforeAnimationStep_IsBase(bool value) const { qgraphicsitemanimation_beforeanimationstep_isbase = value; }
    inline void setQGraphicsItemAnimation_AfterAnimationStep_IsBase(bool value) const { qgraphicsitemanimation_afteranimationstep_isbase = value; }
    inline void setQGraphicsItemAnimation_Event_IsBase(bool value) const { qgraphicsitemanimation_event_isbase = value; }
    inline void setQGraphicsItemAnimation_EventFilter_IsBase(bool value) const { qgraphicsitemanimation_eventfilter_isbase = value; }
    inline void setQGraphicsItemAnimation_TimerEvent_IsBase(bool value) const { qgraphicsitemanimation_timerevent_isbase = value; }
    inline void setQGraphicsItemAnimation_ChildEvent_IsBase(bool value) const { qgraphicsitemanimation_childevent_isbase = value; }
    inline void setQGraphicsItemAnimation_CustomEvent_IsBase(bool value) const { qgraphicsitemanimation_customevent_isbase = value; }
    inline void setQGraphicsItemAnimation_ConnectNotify_IsBase(bool value) const { qgraphicsitemanimation_connectnotify_isbase = value; }
    inline void setQGraphicsItemAnimation_DisconnectNotify_IsBase(bool value) const { qgraphicsitemanimation_disconnectnotify_isbase = value; }
    inline void setQGraphicsItemAnimation_Sender_IsBase(bool value) const { qgraphicsitemanimation_sender_isbase = value; }
    inline void setQGraphicsItemAnimation_SenderSignalIndex_IsBase(bool value) const { qgraphicsitemanimation_sendersignalindex_isbase = value; }
    inline void setQGraphicsItemAnimation_Receivers_IsBase(bool value) const { qgraphicsitemanimation_receivers_isbase = value; }
    inline void setQGraphicsItemAnimation_IsSignalConnected_IsBase(bool value) const { qgraphicsitemanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsitemanimation_metacall_isbase) {
            qgraphicsitemanimation_metacall_isbase = false;
            return QGraphicsItemAnimation::qt_metacall(param1, param2, param3);
        } else if (qgraphicsitemanimation_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgraphicsitemanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsItemAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void beforeAnimationStep(qreal step) override {
        if (qgraphicsitemanimation_beforeanimationstep_isbase) {
            qgraphicsitemanimation_beforeanimationstep_isbase = false;
            QGraphicsItemAnimation::beforeAnimationStep(step);
        } else if (qgraphicsitemanimation_beforeanimationstep_callback != nullptr) {
            double cbval1 = static_cast<double>(step);

            qgraphicsitemanimation_beforeanimationstep_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::beforeAnimationStep(step);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void afterAnimationStep(qreal step) override {
        if (qgraphicsitemanimation_afteranimationstep_isbase) {
            qgraphicsitemanimation_afteranimationstep_isbase = false;
            QGraphicsItemAnimation::afterAnimationStep(step);
        } else if (qgraphicsitemanimation_afteranimationstep_callback != nullptr) {
            double cbval1 = static_cast<double>(step);

            qgraphicsitemanimation_afteranimationstep_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::afterAnimationStep(step);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsitemanimation_event_isbase) {
            qgraphicsitemanimation_event_isbase = false;
            return QGraphicsItemAnimation::event(event);
        } else if (qgraphicsitemanimation_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicsitemanimation_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsItemAnimation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsitemanimation_eventfilter_isbase) {
            qgraphicsitemanimation_eventfilter_isbase = false;
            return QGraphicsItemAnimation::eventFilter(watched, event);
        } else if (qgraphicsitemanimation_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicsitemanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsItemAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsitemanimation_timerevent_isbase) {
            qgraphicsitemanimation_timerevent_isbase = false;
            QGraphicsItemAnimation::timerEvent(event);
        } else if (qgraphicsitemanimation_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgraphicsitemanimation_timerevent_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsitemanimation_childevent_isbase) {
            qgraphicsitemanimation_childevent_isbase = false;
            QGraphicsItemAnimation::childEvent(event);
        } else if (qgraphicsitemanimation_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgraphicsitemanimation_childevent_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsitemanimation_customevent_isbase) {
            qgraphicsitemanimation_customevent_isbase = false;
            QGraphicsItemAnimation::customEvent(event);
        } else if (qgraphicsitemanimation_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsitemanimation_customevent_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsitemanimation_connectnotify_isbase) {
            qgraphicsitemanimation_connectnotify_isbase = false;
            QGraphicsItemAnimation::connectNotify(signal);
        } else if (qgraphicsitemanimation_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsitemanimation_connectnotify_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsitemanimation_disconnectnotify_isbase) {
            qgraphicsitemanimation_disconnectnotify_isbase = false;
            QGraphicsItemAnimation::disconnectNotify(signal);
        } else if (qgraphicsitemanimation_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsitemanimation_disconnectnotify_callback(this, cbval1);
        } else {
            QGraphicsItemAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsitemanimation_sender_isbase) {
            qgraphicsitemanimation_sender_isbase = false;
            return QGraphicsItemAnimation::sender();
        } else if (qgraphicsitemanimation_sender_callback != nullptr) {
            QObject* callback_ret = qgraphicsitemanimation_sender_callback();
            return callback_ret;
        } else {
            return QGraphicsItemAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsitemanimation_sendersignalindex_isbase) {
            qgraphicsitemanimation_sendersignalindex_isbase = false;
            return QGraphicsItemAnimation::senderSignalIndex();
        } else if (qgraphicsitemanimation_sendersignalindex_callback != nullptr) {
            int callback_ret = qgraphicsitemanimation_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsItemAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsitemanimation_receivers_isbase) {
            qgraphicsitemanimation_receivers_isbase = false;
            return QGraphicsItemAnimation::receivers(signal);
        } else if (qgraphicsitemanimation_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgraphicsitemanimation_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsItemAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsitemanimation_issignalconnected_isbase) {
            qgraphicsitemanimation_issignalconnected_isbase = false;
            return QGraphicsItemAnimation::isSignalConnected(signal);
        } else if (qgraphicsitemanimation_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgraphicsitemanimation_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsItemAnimation::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step);
    friend void QGraphicsItemAnimation_QBaseBeforeAnimationStep(QGraphicsItemAnimation* self, double step);
    friend void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step);
    friend void QGraphicsItemAnimation_QBaseAfterAnimationStep(QGraphicsItemAnimation* self, double step);
    friend void QGraphicsItemAnimation_TimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event);
    friend void QGraphicsItemAnimation_QBaseTimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event);
    friend void QGraphicsItemAnimation_ChildEvent(QGraphicsItemAnimation* self, QChildEvent* event);
    friend void QGraphicsItemAnimation_QBaseChildEvent(QGraphicsItemAnimation* self, QChildEvent* event);
    friend void QGraphicsItemAnimation_CustomEvent(QGraphicsItemAnimation* self, QEvent* event);
    friend void QGraphicsItemAnimation_QBaseCustomEvent(QGraphicsItemAnimation* self, QEvent* event);
    friend void QGraphicsItemAnimation_ConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
    friend void QGraphicsItemAnimation_QBaseConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
    friend void QGraphicsItemAnimation_DisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
    friend void QGraphicsItemAnimation_QBaseDisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
    friend QObject* QGraphicsItemAnimation_Sender(const QGraphicsItemAnimation* self);
    friend QObject* QGraphicsItemAnimation_QBaseSender(const QGraphicsItemAnimation* self);
    friend int QGraphicsItemAnimation_SenderSignalIndex(const QGraphicsItemAnimation* self);
    friend int QGraphicsItemAnimation_QBaseSenderSignalIndex(const QGraphicsItemAnimation* self);
    friend int QGraphicsItemAnimation_Receivers(const QGraphicsItemAnimation* self, const char* signal);
    friend int QGraphicsItemAnimation_QBaseReceivers(const QGraphicsItemAnimation* self, const char* signal);
    friend bool QGraphicsItemAnimation_IsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal);
    friend bool QGraphicsItemAnimation_QBaseIsSignalConnected(const QGraphicsItemAnimation* self, const QMetaMethod* signal);
};

#endif
