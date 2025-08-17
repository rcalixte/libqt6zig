#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSTRANSFORM_H
#define SRCC_LIBVIRTUALQGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsTransform so that we can call protected methods
class VirtualQGraphicsTransform final : public QGraphicsTransform {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsTransform = true;

    // Virtual class public types (including callbacks)
    using QGraphicsTransform_Metacall_Callback = int (*)(QGraphicsTransform*, int, int, void**);
    using QGraphicsTransform_ApplyTo_Callback = void (*)(const QGraphicsTransform*, QMatrix4x4*);
    using QGraphicsTransform_Event_Callback = bool (*)(QGraphicsTransform*, QEvent*);
    using QGraphicsTransform_EventFilter_Callback = bool (*)(QGraphicsTransform*, QObject*, QEvent*);
    using QGraphicsTransform_TimerEvent_Callback = void (*)(QGraphicsTransform*, QTimerEvent*);
    using QGraphicsTransform_ChildEvent_Callback = void (*)(QGraphicsTransform*, QChildEvent*);
    using QGraphicsTransform_CustomEvent_Callback = void (*)(QGraphicsTransform*, QEvent*);
    using QGraphicsTransform_ConnectNotify_Callback = void (*)(QGraphicsTransform*, QMetaMethod*);
    using QGraphicsTransform_DisconnectNotify_Callback = void (*)(QGraphicsTransform*, QMetaMethod*);
    using QGraphicsTransform_Update_Callback = void (*)();
    using QGraphicsTransform_Sender_Callback = QObject* (*)();
    using QGraphicsTransform_SenderSignalIndex_Callback = int (*)();
    using QGraphicsTransform_Receivers_Callback = int (*)(const QGraphicsTransform*, const char*);
    using QGraphicsTransform_IsSignalConnected_Callback = bool (*)(const QGraphicsTransform*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGraphicsTransform_Metacall_Callback qgraphicstransform_metacall_callback = nullptr;
    QGraphicsTransform_ApplyTo_Callback qgraphicstransform_applyto_callback = nullptr;
    QGraphicsTransform_Event_Callback qgraphicstransform_event_callback = nullptr;
    QGraphicsTransform_EventFilter_Callback qgraphicstransform_eventfilter_callback = nullptr;
    QGraphicsTransform_TimerEvent_Callback qgraphicstransform_timerevent_callback = nullptr;
    QGraphicsTransform_ChildEvent_Callback qgraphicstransform_childevent_callback = nullptr;
    QGraphicsTransform_CustomEvent_Callback qgraphicstransform_customevent_callback = nullptr;
    QGraphicsTransform_ConnectNotify_Callback qgraphicstransform_connectnotify_callback = nullptr;
    QGraphicsTransform_DisconnectNotify_Callback qgraphicstransform_disconnectnotify_callback = nullptr;
    QGraphicsTransform_Update_Callback qgraphicstransform_update_callback = nullptr;
    QGraphicsTransform_Sender_Callback qgraphicstransform_sender_callback = nullptr;
    QGraphicsTransform_SenderSignalIndex_Callback qgraphicstransform_sendersignalindex_callback = nullptr;
    QGraphicsTransform_Receivers_Callback qgraphicstransform_receivers_callback = nullptr;
    QGraphicsTransform_IsSignalConnected_Callback qgraphicstransform_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicstransform_metacall_isbase = false;
    mutable bool qgraphicstransform_applyto_isbase = false;
    mutable bool qgraphicstransform_event_isbase = false;
    mutable bool qgraphicstransform_eventfilter_isbase = false;
    mutable bool qgraphicstransform_timerevent_isbase = false;
    mutable bool qgraphicstransform_childevent_isbase = false;
    mutable bool qgraphicstransform_customevent_isbase = false;
    mutable bool qgraphicstransform_connectnotify_isbase = false;
    mutable bool qgraphicstransform_disconnectnotify_isbase = false;
    mutable bool qgraphicstransform_update_isbase = false;
    mutable bool qgraphicstransform_sender_isbase = false;
    mutable bool qgraphicstransform_sendersignalindex_isbase = false;
    mutable bool qgraphicstransform_receivers_isbase = false;
    mutable bool qgraphicstransform_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsTransform() : QGraphicsTransform() {};
    VirtualQGraphicsTransform(QObject* parent) : QGraphicsTransform(parent) {};

    ~VirtualQGraphicsTransform() {
        qgraphicstransform_metacall_callback = nullptr;
        qgraphicstransform_applyto_callback = nullptr;
        qgraphicstransform_event_callback = nullptr;
        qgraphicstransform_eventfilter_callback = nullptr;
        qgraphicstransform_timerevent_callback = nullptr;
        qgraphicstransform_childevent_callback = nullptr;
        qgraphicstransform_customevent_callback = nullptr;
        qgraphicstransform_connectnotify_callback = nullptr;
        qgraphicstransform_disconnectnotify_callback = nullptr;
        qgraphicstransform_update_callback = nullptr;
        qgraphicstransform_sender_callback = nullptr;
        qgraphicstransform_sendersignalindex_callback = nullptr;
        qgraphicstransform_receivers_callback = nullptr;
        qgraphicstransform_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsTransform_Metacall_Callback(QGraphicsTransform_Metacall_Callback cb) { qgraphicstransform_metacall_callback = cb; }
    inline void setQGraphicsTransform_ApplyTo_Callback(QGraphicsTransform_ApplyTo_Callback cb) { qgraphicstransform_applyto_callback = cb; }
    inline void setQGraphicsTransform_Event_Callback(QGraphicsTransform_Event_Callback cb) { qgraphicstransform_event_callback = cb; }
    inline void setQGraphicsTransform_EventFilter_Callback(QGraphicsTransform_EventFilter_Callback cb) { qgraphicstransform_eventfilter_callback = cb; }
    inline void setQGraphicsTransform_TimerEvent_Callback(QGraphicsTransform_TimerEvent_Callback cb) { qgraphicstransform_timerevent_callback = cb; }
    inline void setQGraphicsTransform_ChildEvent_Callback(QGraphicsTransform_ChildEvent_Callback cb) { qgraphicstransform_childevent_callback = cb; }
    inline void setQGraphicsTransform_CustomEvent_Callback(QGraphicsTransform_CustomEvent_Callback cb) { qgraphicstransform_customevent_callback = cb; }
    inline void setQGraphicsTransform_ConnectNotify_Callback(QGraphicsTransform_ConnectNotify_Callback cb) { qgraphicstransform_connectnotify_callback = cb; }
    inline void setQGraphicsTransform_DisconnectNotify_Callback(QGraphicsTransform_DisconnectNotify_Callback cb) { qgraphicstransform_disconnectnotify_callback = cb; }
    inline void setQGraphicsTransform_Update_Callback(QGraphicsTransform_Update_Callback cb) { qgraphicstransform_update_callback = cb; }
    inline void setQGraphicsTransform_Sender_Callback(QGraphicsTransform_Sender_Callback cb) { qgraphicstransform_sender_callback = cb; }
    inline void setQGraphicsTransform_SenderSignalIndex_Callback(QGraphicsTransform_SenderSignalIndex_Callback cb) { qgraphicstransform_sendersignalindex_callback = cb; }
    inline void setQGraphicsTransform_Receivers_Callback(QGraphicsTransform_Receivers_Callback cb) { qgraphicstransform_receivers_callback = cb; }
    inline void setQGraphicsTransform_IsSignalConnected_Callback(QGraphicsTransform_IsSignalConnected_Callback cb) { qgraphicstransform_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGraphicsTransform_Metacall_IsBase(bool value) const { qgraphicstransform_metacall_isbase = value; }
    inline void setQGraphicsTransform_ApplyTo_IsBase(bool value) const { qgraphicstransform_applyto_isbase = value; }
    inline void setQGraphicsTransform_Event_IsBase(bool value) const { qgraphicstransform_event_isbase = value; }
    inline void setQGraphicsTransform_EventFilter_IsBase(bool value) const { qgraphicstransform_eventfilter_isbase = value; }
    inline void setQGraphicsTransform_TimerEvent_IsBase(bool value) const { qgraphicstransform_timerevent_isbase = value; }
    inline void setQGraphicsTransform_ChildEvent_IsBase(bool value) const { qgraphicstransform_childevent_isbase = value; }
    inline void setQGraphicsTransform_CustomEvent_IsBase(bool value) const { qgraphicstransform_customevent_isbase = value; }
    inline void setQGraphicsTransform_ConnectNotify_IsBase(bool value) const { qgraphicstransform_connectnotify_isbase = value; }
    inline void setQGraphicsTransform_DisconnectNotify_IsBase(bool value) const { qgraphicstransform_disconnectnotify_isbase = value; }
    inline void setQGraphicsTransform_Update_IsBase(bool value) const { qgraphicstransform_update_isbase = value; }
    inline void setQGraphicsTransform_Sender_IsBase(bool value) const { qgraphicstransform_sender_isbase = value; }
    inline void setQGraphicsTransform_SenderSignalIndex_IsBase(bool value) const { qgraphicstransform_sendersignalindex_isbase = value; }
    inline void setQGraphicsTransform_Receivers_IsBase(bool value) const { qgraphicstransform_receivers_isbase = value; }
    inline void setQGraphicsTransform_IsSignalConnected_IsBase(bool value) const { qgraphicstransform_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicstransform_metacall_isbase) {
            qgraphicstransform_metacall_isbase = false;
            return QGraphicsTransform::qt_metacall(param1, param2, param3);
        } else if (qgraphicstransform_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgraphicstransform_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsTransform::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicstransform_applyto_callback != nullptr) {
            QMatrix4x4* cbval1 = matrix;

            qgraphicstransform_applyto_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicstransform_event_isbase) {
            qgraphicstransform_event_isbase = false;
            return QGraphicsTransform::event(event);
        } else if (qgraphicstransform_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicstransform_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsTransform::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicstransform_eventfilter_isbase) {
            qgraphicstransform_eventfilter_isbase = false;
            return QGraphicsTransform::eventFilter(watched, event);
        } else if (qgraphicstransform_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicstransform_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsTransform::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicstransform_timerevent_isbase) {
            qgraphicstransform_timerevent_isbase = false;
            QGraphicsTransform::timerEvent(event);
        } else if (qgraphicstransform_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgraphicstransform_timerevent_callback(this, cbval1);
        } else {
            QGraphicsTransform::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicstransform_childevent_isbase) {
            qgraphicstransform_childevent_isbase = false;
            QGraphicsTransform::childEvent(event);
        } else if (qgraphicstransform_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgraphicstransform_childevent_callback(this, cbval1);
        } else {
            QGraphicsTransform::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicstransform_customevent_isbase) {
            qgraphicstransform_customevent_isbase = false;
            QGraphicsTransform::customEvent(event);
        } else if (qgraphicstransform_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicstransform_customevent_callback(this, cbval1);
        } else {
            QGraphicsTransform::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicstransform_connectnotify_isbase) {
            qgraphicstransform_connectnotify_isbase = false;
            QGraphicsTransform::connectNotify(signal);
        } else if (qgraphicstransform_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicstransform_connectnotify_callback(this, cbval1);
        } else {
            QGraphicsTransform::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicstransform_disconnectnotify_isbase) {
            qgraphicstransform_disconnectnotify_isbase = false;
            QGraphicsTransform::disconnectNotify(signal);
        } else if (qgraphicstransform_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicstransform_disconnectnotify_callback(this, cbval1);
        } else {
            QGraphicsTransform::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qgraphicstransform_update_isbase) {
            qgraphicstransform_update_isbase = false;
            QGraphicsTransform::update();
        } else if (qgraphicstransform_update_callback != nullptr) {
            qgraphicstransform_update_callback();
        } else {
            QGraphicsTransform::update();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicstransform_sender_isbase) {
            qgraphicstransform_sender_isbase = false;
            return QGraphicsTransform::sender();
        } else if (qgraphicstransform_sender_callback != nullptr) {
            QObject* callback_ret = qgraphicstransform_sender_callback();
            return callback_ret;
        } else {
            return QGraphicsTransform::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicstransform_sendersignalindex_isbase) {
            qgraphicstransform_sendersignalindex_isbase = false;
            return QGraphicsTransform::senderSignalIndex();
        } else if (qgraphicstransform_sendersignalindex_callback != nullptr) {
            int callback_ret = qgraphicstransform_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsTransform::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicstransform_receivers_isbase) {
            qgraphicstransform_receivers_isbase = false;
            return QGraphicsTransform::receivers(signal);
        } else if (qgraphicstransform_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgraphicstransform_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsTransform::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicstransform_issignalconnected_isbase) {
            qgraphicstransform_issignalconnected_isbase = false;
            return QGraphicsTransform::isSignalConnected(signal);
        } else if (qgraphicstransform_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgraphicstransform_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsTransform::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGraphicsTransform_TimerEvent(QGraphicsTransform* self, QTimerEvent* event);
    friend void QGraphicsTransform_QBaseTimerEvent(QGraphicsTransform* self, QTimerEvent* event);
    friend void QGraphicsTransform_ChildEvent(QGraphicsTransform* self, QChildEvent* event);
    friend void QGraphicsTransform_QBaseChildEvent(QGraphicsTransform* self, QChildEvent* event);
    friend void QGraphicsTransform_CustomEvent(QGraphicsTransform* self, QEvent* event);
    friend void QGraphicsTransform_QBaseCustomEvent(QGraphicsTransform* self, QEvent* event);
    friend void QGraphicsTransform_ConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
    friend void QGraphicsTransform_QBaseConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
    friend void QGraphicsTransform_DisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
    friend void QGraphicsTransform_QBaseDisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
    friend void QGraphicsTransform_Update(QGraphicsTransform* self);
    friend void QGraphicsTransform_QBaseUpdate(QGraphicsTransform* self);
    friend QObject* QGraphicsTransform_Sender(const QGraphicsTransform* self);
    friend QObject* QGraphicsTransform_QBaseSender(const QGraphicsTransform* self);
    friend int QGraphicsTransform_SenderSignalIndex(const QGraphicsTransform* self);
    friend int QGraphicsTransform_QBaseSenderSignalIndex(const QGraphicsTransform* self);
    friend int QGraphicsTransform_Receivers(const QGraphicsTransform* self, const char* signal);
    friend int QGraphicsTransform_QBaseReceivers(const QGraphicsTransform* self, const char* signal);
    friend bool QGraphicsTransform_IsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal);
    friend bool QGraphicsTransform_QBaseIsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsScale so that we can call protected methods
class VirtualQGraphicsScale final : public QGraphicsScale {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsScale = true;

    // Virtual class public types (including callbacks)
    using QGraphicsScale_Metacall_Callback = int (*)(QGraphicsScale*, int, int, void**);
    using QGraphicsScale_ApplyTo_Callback = void (*)(const QGraphicsScale*, QMatrix4x4*);
    using QGraphicsScale_Event_Callback = bool (*)(QGraphicsScale*, QEvent*);
    using QGraphicsScale_EventFilter_Callback = bool (*)(QGraphicsScale*, QObject*, QEvent*);
    using QGraphicsScale_TimerEvent_Callback = void (*)(QGraphicsScale*, QTimerEvent*);
    using QGraphicsScale_ChildEvent_Callback = void (*)(QGraphicsScale*, QChildEvent*);
    using QGraphicsScale_CustomEvent_Callback = void (*)(QGraphicsScale*, QEvent*);
    using QGraphicsScale_ConnectNotify_Callback = void (*)(QGraphicsScale*, QMetaMethod*);
    using QGraphicsScale_DisconnectNotify_Callback = void (*)(QGraphicsScale*, QMetaMethod*);
    using QGraphicsScale_Update_Callback = void (*)();
    using QGraphicsScale_Sender_Callback = QObject* (*)();
    using QGraphicsScale_SenderSignalIndex_Callback = int (*)();
    using QGraphicsScale_Receivers_Callback = int (*)(const QGraphicsScale*, const char*);
    using QGraphicsScale_IsSignalConnected_Callback = bool (*)(const QGraphicsScale*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGraphicsScale_Metacall_Callback qgraphicsscale_metacall_callback = nullptr;
    QGraphicsScale_ApplyTo_Callback qgraphicsscale_applyto_callback = nullptr;
    QGraphicsScale_Event_Callback qgraphicsscale_event_callback = nullptr;
    QGraphicsScale_EventFilter_Callback qgraphicsscale_eventfilter_callback = nullptr;
    QGraphicsScale_TimerEvent_Callback qgraphicsscale_timerevent_callback = nullptr;
    QGraphicsScale_ChildEvent_Callback qgraphicsscale_childevent_callback = nullptr;
    QGraphicsScale_CustomEvent_Callback qgraphicsscale_customevent_callback = nullptr;
    QGraphicsScale_ConnectNotify_Callback qgraphicsscale_connectnotify_callback = nullptr;
    QGraphicsScale_DisconnectNotify_Callback qgraphicsscale_disconnectnotify_callback = nullptr;
    QGraphicsScale_Update_Callback qgraphicsscale_update_callback = nullptr;
    QGraphicsScale_Sender_Callback qgraphicsscale_sender_callback = nullptr;
    QGraphicsScale_SenderSignalIndex_Callback qgraphicsscale_sendersignalindex_callback = nullptr;
    QGraphicsScale_Receivers_Callback qgraphicsscale_receivers_callback = nullptr;
    QGraphicsScale_IsSignalConnected_Callback qgraphicsscale_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscale_metacall_isbase = false;
    mutable bool qgraphicsscale_applyto_isbase = false;
    mutable bool qgraphicsscale_event_isbase = false;
    mutable bool qgraphicsscale_eventfilter_isbase = false;
    mutable bool qgraphicsscale_timerevent_isbase = false;
    mutable bool qgraphicsscale_childevent_isbase = false;
    mutable bool qgraphicsscale_customevent_isbase = false;
    mutable bool qgraphicsscale_connectnotify_isbase = false;
    mutable bool qgraphicsscale_disconnectnotify_isbase = false;
    mutable bool qgraphicsscale_update_isbase = false;
    mutable bool qgraphicsscale_sender_isbase = false;
    mutable bool qgraphicsscale_sendersignalindex_isbase = false;
    mutable bool qgraphicsscale_receivers_isbase = false;
    mutable bool qgraphicsscale_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsScale() : QGraphicsScale() {};
    VirtualQGraphicsScale(QObject* parent) : QGraphicsScale(parent) {};

    ~VirtualQGraphicsScale() {
        qgraphicsscale_metacall_callback = nullptr;
        qgraphicsscale_applyto_callback = nullptr;
        qgraphicsscale_event_callback = nullptr;
        qgraphicsscale_eventfilter_callback = nullptr;
        qgraphicsscale_timerevent_callback = nullptr;
        qgraphicsscale_childevent_callback = nullptr;
        qgraphicsscale_customevent_callback = nullptr;
        qgraphicsscale_connectnotify_callback = nullptr;
        qgraphicsscale_disconnectnotify_callback = nullptr;
        qgraphicsscale_update_callback = nullptr;
        qgraphicsscale_sender_callback = nullptr;
        qgraphicsscale_sendersignalindex_callback = nullptr;
        qgraphicsscale_receivers_callback = nullptr;
        qgraphicsscale_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsScale_Metacall_Callback(QGraphicsScale_Metacall_Callback cb) { qgraphicsscale_metacall_callback = cb; }
    inline void setQGraphicsScale_ApplyTo_Callback(QGraphicsScale_ApplyTo_Callback cb) { qgraphicsscale_applyto_callback = cb; }
    inline void setQGraphicsScale_Event_Callback(QGraphicsScale_Event_Callback cb) { qgraphicsscale_event_callback = cb; }
    inline void setQGraphicsScale_EventFilter_Callback(QGraphicsScale_EventFilter_Callback cb) { qgraphicsscale_eventfilter_callback = cb; }
    inline void setQGraphicsScale_TimerEvent_Callback(QGraphicsScale_TimerEvent_Callback cb) { qgraphicsscale_timerevent_callback = cb; }
    inline void setQGraphicsScale_ChildEvent_Callback(QGraphicsScale_ChildEvent_Callback cb) { qgraphicsscale_childevent_callback = cb; }
    inline void setQGraphicsScale_CustomEvent_Callback(QGraphicsScale_CustomEvent_Callback cb) { qgraphicsscale_customevent_callback = cb; }
    inline void setQGraphicsScale_ConnectNotify_Callback(QGraphicsScale_ConnectNotify_Callback cb) { qgraphicsscale_connectnotify_callback = cb; }
    inline void setQGraphicsScale_DisconnectNotify_Callback(QGraphicsScale_DisconnectNotify_Callback cb) { qgraphicsscale_disconnectnotify_callback = cb; }
    inline void setQGraphicsScale_Update_Callback(QGraphicsScale_Update_Callback cb) { qgraphicsscale_update_callback = cb; }
    inline void setQGraphicsScale_Sender_Callback(QGraphicsScale_Sender_Callback cb) { qgraphicsscale_sender_callback = cb; }
    inline void setQGraphicsScale_SenderSignalIndex_Callback(QGraphicsScale_SenderSignalIndex_Callback cb) { qgraphicsscale_sendersignalindex_callback = cb; }
    inline void setQGraphicsScale_Receivers_Callback(QGraphicsScale_Receivers_Callback cb) { qgraphicsscale_receivers_callback = cb; }
    inline void setQGraphicsScale_IsSignalConnected_Callback(QGraphicsScale_IsSignalConnected_Callback cb) { qgraphicsscale_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGraphicsScale_Metacall_IsBase(bool value) const { qgraphicsscale_metacall_isbase = value; }
    inline void setQGraphicsScale_ApplyTo_IsBase(bool value) const { qgraphicsscale_applyto_isbase = value; }
    inline void setQGraphicsScale_Event_IsBase(bool value) const { qgraphicsscale_event_isbase = value; }
    inline void setQGraphicsScale_EventFilter_IsBase(bool value) const { qgraphicsscale_eventfilter_isbase = value; }
    inline void setQGraphicsScale_TimerEvent_IsBase(bool value) const { qgraphicsscale_timerevent_isbase = value; }
    inline void setQGraphicsScale_ChildEvent_IsBase(bool value) const { qgraphicsscale_childevent_isbase = value; }
    inline void setQGraphicsScale_CustomEvent_IsBase(bool value) const { qgraphicsscale_customevent_isbase = value; }
    inline void setQGraphicsScale_ConnectNotify_IsBase(bool value) const { qgraphicsscale_connectnotify_isbase = value; }
    inline void setQGraphicsScale_DisconnectNotify_IsBase(bool value) const { qgraphicsscale_disconnectnotify_isbase = value; }
    inline void setQGraphicsScale_Update_IsBase(bool value) const { qgraphicsscale_update_isbase = value; }
    inline void setQGraphicsScale_Sender_IsBase(bool value) const { qgraphicsscale_sender_isbase = value; }
    inline void setQGraphicsScale_SenderSignalIndex_IsBase(bool value) const { qgraphicsscale_sendersignalindex_isbase = value; }
    inline void setQGraphicsScale_Receivers_IsBase(bool value) const { qgraphicsscale_receivers_isbase = value; }
    inline void setQGraphicsScale_IsSignalConnected_IsBase(bool value) const { qgraphicsscale_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsscale_metacall_isbase) {
            qgraphicsscale_metacall_isbase = false;
            return QGraphicsScale::qt_metacall(param1, param2, param3);
        } else if (qgraphicsscale_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgraphicsscale_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsScale::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicsscale_applyto_isbase) {
            qgraphicsscale_applyto_isbase = false;
            QGraphicsScale::applyTo(matrix);
        } else if (qgraphicsscale_applyto_callback != nullptr) {
            QMatrix4x4* cbval1 = matrix;

            qgraphicsscale_applyto_callback(this, cbval1);
        } else {
            QGraphicsScale::applyTo(matrix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsscale_event_isbase) {
            qgraphicsscale_event_isbase = false;
            return QGraphicsScale::event(event);
        } else if (qgraphicsscale_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicsscale_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsScale::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsscale_eventfilter_isbase) {
            qgraphicsscale_eventfilter_isbase = false;
            return QGraphicsScale::eventFilter(watched, event);
        } else if (qgraphicsscale_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicsscale_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsScale::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsscale_timerevent_isbase) {
            qgraphicsscale_timerevent_isbase = false;
            QGraphicsScale::timerEvent(event);
        } else if (qgraphicsscale_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgraphicsscale_timerevent_callback(this, cbval1);
        } else {
            QGraphicsScale::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsscale_childevent_isbase) {
            qgraphicsscale_childevent_isbase = false;
            QGraphicsScale::childEvent(event);
        } else if (qgraphicsscale_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgraphicsscale_childevent_callback(this, cbval1);
        } else {
            QGraphicsScale::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsscale_customevent_isbase) {
            qgraphicsscale_customevent_isbase = false;
            QGraphicsScale::customEvent(event);
        } else if (qgraphicsscale_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsscale_customevent_callback(this, cbval1);
        } else {
            QGraphicsScale::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscale_connectnotify_isbase) {
            qgraphicsscale_connectnotify_isbase = false;
            QGraphicsScale::connectNotify(signal);
        } else if (qgraphicsscale_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsscale_connectnotify_callback(this, cbval1);
        } else {
            QGraphicsScale::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscale_disconnectnotify_isbase) {
            qgraphicsscale_disconnectnotify_isbase = false;
            QGraphicsScale::disconnectNotify(signal);
        } else if (qgraphicsscale_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsscale_disconnectnotify_callback(this, cbval1);
        } else {
            QGraphicsScale::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qgraphicsscale_update_isbase) {
            qgraphicsscale_update_isbase = false;
            QGraphicsScale::update();
        } else if (qgraphicsscale_update_callback != nullptr) {
            qgraphicsscale_update_callback();
        } else {
            QGraphicsScale::update();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsscale_sender_isbase) {
            qgraphicsscale_sender_isbase = false;
            return QGraphicsScale::sender();
        } else if (qgraphicsscale_sender_callback != nullptr) {
            QObject* callback_ret = qgraphicsscale_sender_callback();
            return callback_ret;
        } else {
            return QGraphicsScale::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsscale_sendersignalindex_isbase) {
            qgraphicsscale_sendersignalindex_isbase = false;
            return QGraphicsScale::senderSignalIndex();
        } else if (qgraphicsscale_sendersignalindex_callback != nullptr) {
            int callback_ret = qgraphicsscale_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsScale::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsscale_receivers_isbase) {
            qgraphicsscale_receivers_isbase = false;
            return QGraphicsScale::receivers(signal);
        } else if (qgraphicsscale_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgraphicsscale_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsScale::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsscale_issignalconnected_isbase) {
            qgraphicsscale_issignalconnected_isbase = false;
            return QGraphicsScale::isSignalConnected(signal);
        } else if (qgraphicsscale_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgraphicsscale_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsScale::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGraphicsScale_TimerEvent(QGraphicsScale* self, QTimerEvent* event);
    friend void QGraphicsScale_QBaseTimerEvent(QGraphicsScale* self, QTimerEvent* event);
    friend void QGraphicsScale_ChildEvent(QGraphicsScale* self, QChildEvent* event);
    friend void QGraphicsScale_QBaseChildEvent(QGraphicsScale* self, QChildEvent* event);
    friend void QGraphicsScale_CustomEvent(QGraphicsScale* self, QEvent* event);
    friend void QGraphicsScale_QBaseCustomEvent(QGraphicsScale* self, QEvent* event);
    friend void QGraphicsScale_ConnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
    friend void QGraphicsScale_QBaseConnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
    friend void QGraphicsScale_DisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
    friend void QGraphicsScale_QBaseDisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
    friend void QGraphicsScale_Update(QGraphicsScale* self);
    friend void QGraphicsScale_QBaseUpdate(QGraphicsScale* self);
    friend QObject* QGraphicsScale_Sender(const QGraphicsScale* self);
    friend QObject* QGraphicsScale_QBaseSender(const QGraphicsScale* self);
    friend int QGraphicsScale_SenderSignalIndex(const QGraphicsScale* self);
    friend int QGraphicsScale_QBaseSenderSignalIndex(const QGraphicsScale* self);
    friend int QGraphicsScale_Receivers(const QGraphicsScale* self, const char* signal);
    friend int QGraphicsScale_QBaseReceivers(const QGraphicsScale* self, const char* signal);
    friend bool QGraphicsScale_IsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal);
    friend bool QGraphicsScale_QBaseIsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsRotation so that we can call protected methods
class VirtualQGraphicsRotation final : public QGraphicsRotation {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsRotation = true;

    // Virtual class public types (including callbacks)
    using QGraphicsRotation_Metacall_Callback = int (*)(QGraphicsRotation*, int, int, void**);
    using QGraphicsRotation_ApplyTo_Callback = void (*)(const QGraphicsRotation*, QMatrix4x4*);
    using QGraphicsRotation_Event_Callback = bool (*)(QGraphicsRotation*, QEvent*);
    using QGraphicsRotation_EventFilter_Callback = bool (*)(QGraphicsRotation*, QObject*, QEvent*);
    using QGraphicsRotation_TimerEvent_Callback = void (*)(QGraphicsRotation*, QTimerEvent*);
    using QGraphicsRotation_ChildEvent_Callback = void (*)(QGraphicsRotation*, QChildEvent*);
    using QGraphicsRotation_CustomEvent_Callback = void (*)(QGraphicsRotation*, QEvent*);
    using QGraphicsRotation_ConnectNotify_Callback = void (*)(QGraphicsRotation*, QMetaMethod*);
    using QGraphicsRotation_DisconnectNotify_Callback = void (*)(QGraphicsRotation*, QMetaMethod*);
    using QGraphicsRotation_Update_Callback = void (*)();
    using QGraphicsRotation_Sender_Callback = QObject* (*)();
    using QGraphicsRotation_SenderSignalIndex_Callback = int (*)();
    using QGraphicsRotation_Receivers_Callback = int (*)(const QGraphicsRotation*, const char*);
    using QGraphicsRotation_IsSignalConnected_Callback = bool (*)(const QGraphicsRotation*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGraphicsRotation_Metacall_Callback qgraphicsrotation_metacall_callback = nullptr;
    QGraphicsRotation_ApplyTo_Callback qgraphicsrotation_applyto_callback = nullptr;
    QGraphicsRotation_Event_Callback qgraphicsrotation_event_callback = nullptr;
    QGraphicsRotation_EventFilter_Callback qgraphicsrotation_eventfilter_callback = nullptr;
    QGraphicsRotation_TimerEvent_Callback qgraphicsrotation_timerevent_callback = nullptr;
    QGraphicsRotation_ChildEvent_Callback qgraphicsrotation_childevent_callback = nullptr;
    QGraphicsRotation_CustomEvent_Callback qgraphicsrotation_customevent_callback = nullptr;
    QGraphicsRotation_ConnectNotify_Callback qgraphicsrotation_connectnotify_callback = nullptr;
    QGraphicsRotation_DisconnectNotify_Callback qgraphicsrotation_disconnectnotify_callback = nullptr;
    QGraphicsRotation_Update_Callback qgraphicsrotation_update_callback = nullptr;
    QGraphicsRotation_Sender_Callback qgraphicsrotation_sender_callback = nullptr;
    QGraphicsRotation_SenderSignalIndex_Callback qgraphicsrotation_sendersignalindex_callback = nullptr;
    QGraphicsRotation_Receivers_Callback qgraphicsrotation_receivers_callback = nullptr;
    QGraphicsRotation_IsSignalConnected_Callback qgraphicsrotation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsrotation_metacall_isbase = false;
    mutable bool qgraphicsrotation_applyto_isbase = false;
    mutable bool qgraphicsrotation_event_isbase = false;
    mutable bool qgraphicsrotation_eventfilter_isbase = false;
    mutable bool qgraphicsrotation_timerevent_isbase = false;
    mutable bool qgraphicsrotation_childevent_isbase = false;
    mutable bool qgraphicsrotation_customevent_isbase = false;
    mutable bool qgraphicsrotation_connectnotify_isbase = false;
    mutable bool qgraphicsrotation_disconnectnotify_isbase = false;
    mutable bool qgraphicsrotation_update_isbase = false;
    mutable bool qgraphicsrotation_sender_isbase = false;
    mutable bool qgraphicsrotation_sendersignalindex_isbase = false;
    mutable bool qgraphicsrotation_receivers_isbase = false;
    mutable bool qgraphicsrotation_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsRotation() : QGraphicsRotation() {};
    VirtualQGraphicsRotation(QObject* parent) : QGraphicsRotation(parent) {};

    ~VirtualQGraphicsRotation() {
        qgraphicsrotation_metacall_callback = nullptr;
        qgraphicsrotation_applyto_callback = nullptr;
        qgraphicsrotation_event_callback = nullptr;
        qgraphicsrotation_eventfilter_callback = nullptr;
        qgraphicsrotation_timerevent_callback = nullptr;
        qgraphicsrotation_childevent_callback = nullptr;
        qgraphicsrotation_customevent_callback = nullptr;
        qgraphicsrotation_connectnotify_callback = nullptr;
        qgraphicsrotation_disconnectnotify_callback = nullptr;
        qgraphicsrotation_update_callback = nullptr;
        qgraphicsrotation_sender_callback = nullptr;
        qgraphicsrotation_sendersignalindex_callback = nullptr;
        qgraphicsrotation_receivers_callback = nullptr;
        qgraphicsrotation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsRotation_Metacall_Callback(QGraphicsRotation_Metacall_Callback cb) { qgraphicsrotation_metacall_callback = cb; }
    inline void setQGraphicsRotation_ApplyTo_Callback(QGraphicsRotation_ApplyTo_Callback cb) { qgraphicsrotation_applyto_callback = cb; }
    inline void setQGraphicsRotation_Event_Callback(QGraphicsRotation_Event_Callback cb) { qgraphicsrotation_event_callback = cb; }
    inline void setQGraphicsRotation_EventFilter_Callback(QGraphicsRotation_EventFilter_Callback cb) { qgraphicsrotation_eventfilter_callback = cb; }
    inline void setQGraphicsRotation_TimerEvent_Callback(QGraphicsRotation_TimerEvent_Callback cb) { qgraphicsrotation_timerevent_callback = cb; }
    inline void setQGraphicsRotation_ChildEvent_Callback(QGraphicsRotation_ChildEvent_Callback cb) { qgraphicsrotation_childevent_callback = cb; }
    inline void setQGraphicsRotation_CustomEvent_Callback(QGraphicsRotation_CustomEvent_Callback cb) { qgraphicsrotation_customevent_callback = cb; }
    inline void setQGraphicsRotation_ConnectNotify_Callback(QGraphicsRotation_ConnectNotify_Callback cb) { qgraphicsrotation_connectnotify_callback = cb; }
    inline void setQGraphicsRotation_DisconnectNotify_Callback(QGraphicsRotation_DisconnectNotify_Callback cb) { qgraphicsrotation_disconnectnotify_callback = cb; }
    inline void setQGraphicsRotation_Update_Callback(QGraphicsRotation_Update_Callback cb) { qgraphicsrotation_update_callback = cb; }
    inline void setQGraphicsRotation_Sender_Callback(QGraphicsRotation_Sender_Callback cb) { qgraphicsrotation_sender_callback = cb; }
    inline void setQGraphicsRotation_SenderSignalIndex_Callback(QGraphicsRotation_SenderSignalIndex_Callback cb) { qgraphicsrotation_sendersignalindex_callback = cb; }
    inline void setQGraphicsRotation_Receivers_Callback(QGraphicsRotation_Receivers_Callback cb) { qgraphicsrotation_receivers_callback = cb; }
    inline void setQGraphicsRotation_IsSignalConnected_Callback(QGraphicsRotation_IsSignalConnected_Callback cb) { qgraphicsrotation_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGraphicsRotation_Metacall_IsBase(bool value) const { qgraphicsrotation_metacall_isbase = value; }
    inline void setQGraphicsRotation_ApplyTo_IsBase(bool value) const { qgraphicsrotation_applyto_isbase = value; }
    inline void setQGraphicsRotation_Event_IsBase(bool value) const { qgraphicsrotation_event_isbase = value; }
    inline void setQGraphicsRotation_EventFilter_IsBase(bool value) const { qgraphicsrotation_eventfilter_isbase = value; }
    inline void setQGraphicsRotation_TimerEvent_IsBase(bool value) const { qgraphicsrotation_timerevent_isbase = value; }
    inline void setQGraphicsRotation_ChildEvent_IsBase(bool value) const { qgraphicsrotation_childevent_isbase = value; }
    inline void setQGraphicsRotation_CustomEvent_IsBase(bool value) const { qgraphicsrotation_customevent_isbase = value; }
    inline void setQGraphicsRotation_ConnectNotify_IsBase(bool value) const { qgraphicsrotation_connectnotify_isbase = value; }
    inline void setQGraphicsRotation_DisconnectNotify_IsBase(bool value) const { qgraphicsrotation_disconnectnotify_isbase = value; }
    inline void setQGraphicsRotation_Update_IsBase(bool value) const { qgraphicsrotation_update_isbase = value; }
    inline void setQGraphicsRotation_Sender_IsBase(bool value) const { qgraphicsrotation_sender_isbase = value; }
    inline void setQGraphicsRotation_SenderSignalIndex_IsBase(bool value) const { qgraphicsrotation_sendersignalindex_isbase = value; }
    inline void setQGraphicsRotation_Receivers_IsBase(bool value) const { qgraphicsrotation_receivers_isbase = value; }
    inline void setQGraphicsRotation_IsSignalConnected_IsBase(bool value) const { qgraphicsrotation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsrotation_metacall_isbase) {
            qgraphicsrotation_metacall_isbase = false;
            return QGraphicsRotation::qt_metacall(param1, param2, param3);
        } else if (qgraphicsrotation_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgraphicsrotation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsRotation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicsrotation_applyto_isbase) {
            qgraphicsrotation_applyto_isbase = false;
            QGraphicsRotation::applyTo(matrix);
        } else if (qgraphicsrotation_applyto_callback != nullptr) {
            QMatrix4x4* cbval1 = matrix;

            qgraphicsrotation_applyto_callback(this, cbval1);
        } else {
            QGraphicsRotation::applyTo(matrix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsrotation_event_isbase) {
            qgraphicsrotation_event_isbase = false;
            return QGraphicsRotation::event(event);
        } else if (qgraphicsrotation_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicsrotation_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsRotation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsrotation_eventfilter_isbase) {
            qgraphicsrotation_eventfilter_isbase = false;
            return QGraphicsRotation::eventFilter(watched, event);
        } else if (qgraphicsrotation_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicsrotation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsRotation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsrotation_timerevent_isbase) {
            qgraphicsrotation_timerevent_isbase = false;
            QGraphicsRotation::timerEvent(event);
        } else if (qgraphicsrotation_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgraphicsrotation_timerevent_callback(this, cbval1);
        } else {
            QGraphicsRotation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsrotation_childevent_isbase) {
            qgraphicsrotation_childevent_isbase = false;
            QGraphicsRotation::childEvent(event);
        } else if (qgraphicsrotation_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgraphicsrotation_childevent_callback(this, cbval1);
        } else {
            QGraphicsRotation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsrotation_customevent_isbase) {
            qgraphicsrotation_customevent_isbase = false;
            QGraphicsRotation::customEvent(event);
        } else if (qgraphicsrotation_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsrotation_customevent_callback(this, cbval1);
        } else {
            QGraphicsRotation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsrotation_connectnotify_isbase) {
            qgraphicsrotation_connectnotify_isbase = false;
            QGraphicsRotation::connectNotify(signal);
        } else if (qgraphicsrotation_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsrotation_connectnotify_callback(this, cbval1);
        } else {
            QGraphicsRotation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsrotation_disconnectnotify_isbase) {
            qgraphicsrotation_disconnectnotify_isbase = false;
            QGraphicsRotation::disconnectNotify(signal);
        } else if (qgraphicsrotation_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsrotation_disconnectnotify_callback(this, cbval1);
        } else {
            QGraphicsRotation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qgraphicsrotation_update_isbase) {
            qgraphicsrotation_update_isbase = false;
            QGraphicsRotation::update();
        } else if (qgraphicsrotation_update_callback != nullptr) {
            qgraphicsrotation_update_callback();
        } else {
            QGraphicsRotation::update();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsrotation_sender_isbase) {
            qgraphicsrotation_sender_isbase = false;
            return QGraphicsRotation::sender();
        } else if (qgraphicsrotation_sender_callback != nullptr) {
            QObject* callback_ret = qgraphicsrotation_sender_callback();
            return callback_ret;
        } else {
            return QGraphicsRotation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsrotation_sendersignalindex_isbase) {
            qgraphicsrotation_sendersignalindex_isbase = false;
            return QGraphicsRotation::senderSignalIndex();
        } else if (qgraphicsrotation_sendersignalindex_callback != nullptr) {
            int callback_ret = qgraphicsrotation_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsRotation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsrotation_receivers_isbase) {
            qgraphicsrotation_receivers_isbase = false;
            return QGraphicsRotation::receivers(signal);
        } else if (qgraphicsrotation_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgraphicsrotation_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsRotation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsrotation_issignalconnected_isbase) {
            qgraphicsrotation_issignalconnected_isbase = false;
            return QGraphicsRotation::isSignalConnected(signal);
        } else if (qgraphicsrotation_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgraphicsrotation_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsRotation::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QGraphicsRotation_TimerEvent(QGraphicsRotation* self, QTimerEvent* event);
    friend void QGraphicsRotation_QBaseTimerEvent(QGraphicsRotation* self, QTimerEvent* event);
    friend void QGraphicsRotation_ChildEvent(QGraphicsRotation* self, QChildEvent* event);
    friend void QGraphicsRotation_QBaseChildEvent(QGraphicsRotation* self, QChildEvent* event);
    friend void QGraphicsRotation_CustomEvent(QGraphicsRotation* self, QEvent* event);
    friend void QGraphicsRotation_QBaseCustomEvent(QGraphicsRotation* self, QEvent* event);
    friend void QGraphicsRotation_ConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
    friend void QGraphicsRotation_QBaseConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
    friend void QGraphicsRotation_DisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
    friend void QGraphicsRotation_QBaseDisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
    friend void QGraphicsRotation_Update(QGraphicsRotation* self);
    friend void QGraphicsRotation_QBaseUpdate(QGraphicsRotation* self);
    friend QObject* QGraphicsRotation_Sender(const QGraphicsRotation* self);
    friend QObject* QGraphicsRotation_QBaseSender(const QGraphicsRotation* self);
    friend int QGraphicsRotation_SenderSignalIndex(const QGraphicsRotation* self);
    friend int QGraphicsRotation_QBaseSenderSignalIndex(const QGraphicsRotation* self);
    friend int QGraphicsRotation_Receivers(const QGraphicsRotation* self, const char* signal);
    friend int QGraphicsRotation_QBaseReceivers(const QGraphicsRotation* self, const char* signal);
    friend bool QGraphicsRotation_IsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal);
    friend bool QGraphicsRotation_QBaseIsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal);
};

#endif
