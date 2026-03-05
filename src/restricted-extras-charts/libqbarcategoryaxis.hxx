#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARCATEGORYAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARCATEGORYAXIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarCategoryAxis so that we can call protected methods
class VirtualQBarCategoryAxis final : public QBarCategoryAxis {

  public:
    // Virtual class boolean flag
    bool isVirtualQBarCategoryAxis = true;

    // Virtual class public types (including callbacks)
    using QBarCategoryAxis_MetaObject_Callback = QMetaObject* (*)();
    using QBarCategoryAxis_Metacast_Callback = void* (*)(QBarCategoryAxis*, const char*);
    using QBarCategoryAxis_Metacall_Callback = int (*)(QBarCategoryAxis*, int, int, void**);
    using QBarCategoryAxis_Type_Callback = int (*)();
    using QBarCategoryAxis_Event_Callback = bool (*)(QBarCategoryAxis*, QEvent*);
    using QBarCategoryAxis_EventFilter_Callback = bool (*)(QBarCategoryAxis*, QObject*, QEvent*);
    using QBarCategoryAxis_TimerEvent_Callback = void (*)(QBarCategoryAxis*, QTimerEvent*);
    using QBarCategoryAxis_ChildEvent_Callback = void (*)(QBarCategoryAxis*, QChildEvent*);
    using QBarCategoryAxis_CustomEvent_Callback = void (*)(QBarCategoryAxis*, QEvent*);
    using QBarCategoryAxis_ConnectNotify_Callback = void (*)(QBarCategoryAxis*, QMetaMethod*);
    using QBarCategoryAxis_DisconnectNotify_Callback = void (*)(QBarCategoryAxis*, QMetaMethod*);
    using QBarCategoryAxis_Sender_Callback = QObject* (*)();
    using QBarCategoryAxis_SenderSignalIndex_Callback = int (*)();
    using QBarCategoryAxis_Receivers_Callback = int (*)(const QBarCategoryAxis*, const char*);
    using QBarCategoryAxis_IsSignalConnected_Callback = bool (*)(const QBarCategoryAxis*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBarCategoryAxis_MetaObject_Callback qbarcategoryaxis_metaobject_callback = nullptr;
    QBarCategoryAxis_Metacast_Callback qbarcategoryaxis_metacast_callback = nullptr;
    QBarCategoryAxis_Metacall_Callback qbarcategoryaxis_metacall_callback = nullptr;
    QBarCategoryAxis_Type_Callback qbarcategoryaxis_type_callback = nullptr;
    QBarCategoryAxis_Event_Callback qbarcategoryaxis_event_callback = nullptr;
    QBarCategoryAxis_EventFilter_Callback qbarcategoryaxis_eventfilter_callback = nullptr;
    QBarCategoryAxis_TimerEvent_Callback qbarcategoryaxis_timerevent_callback = nullptr;
    QBarCategoryAxis_ChildEvent_Callback qbarcategoryaxis_childevent_callback = nullptr;
    QBarCategoryAxis_CustomEvent_Callback qbarcategoryaxis_customevent_callback = nullptr;
    QBarCategoryAxis_ConnectNotify_Callback qbarcategoryaxis_connectnotify_callback = nullptr;
    QBarCategoryAxis_DisconnectNotify_Callback qbarcategoryaxis_disconnectnotify_callback = nullptr;
    QBarCategoryAxis_Sender_Callback qbarcategoryaxis_sender_callback = nullptr;
    QBarCategoryAxis_SenderSignalIndex_Callback qbarcategoryaxis_sendersignalindex_callback = nullptr;
    QBarCategoryAxis_Receivers_Callback qbarcategoryaxis_receivers_callback = nullptr;
    QBarCategoryAxis_IsSignalConnected_Callback qbarcategoryaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbarcategoryaxis_metaobject_isbase = false;
    mutable bool qbarcategoryaxis_metacast_isbase = false;
    mutable bool qbarcategoryaxis_metacall_isbase = false;
    mutable bool qbarcategoryaxis_type_isbase = false;
    mutable bool qbarcategoryaxis_event_isbase = false;
    mutable bool qbarcategoryaxis_eventfilter_isbase = false;
    mutable bool qbarcategoryaxis_timerevent_isbase = false;
    mutable bool qbarcategoryaxis_childevent_isbase = false;
    mutable bool qbarcategoryaxis_customevent_isbase = false;
    mutable bool qbarcategoryaxis_connectnotify_isbase = false;
    mutable bool qbarcategoryaxis_disconnectnotify_isbase = false;
    mutable bool qbarcategoryaxis_sender_isbase = false;
    mutable bool qbarcategoryaxis_sendersignalindex_isbase = false;
    mutable bool qbarcategoryaxis_receivers_isbase = false;
    mutable bool qbarcategoryaxis_issignalconnected_isbase = false;

  public:
    VirtualQBarCategoryAxis() : QBarCategoryAxis() {};
    VirtualQBarCategoryAxis(QObject* parent) : QBarCategoryAxis(parent) {};

    // Callback setters
    inline void setQBarCategoryAxis_MetaObject_Callback(QBarCategoryAxis_MetaObject_Callback cb) { qbarcategoryaxis_metaobject_callback = cb; }
    inline void setQBarCategoryAxis_Metacast_Callback(QBarCategoryAxis_Metacast_Callback cb) { qbarcategoryaxis_metacast_callback = cb; }
    inline void setQBarCategoryAxis_Metacall_Callback(QBarCategoryAxis_Metacall_Callback cb) { qbarcategoryaxis_metacall_callback = cb; }
    inline void setQBarCategoryAxis_Type_Callback(QBarCategoryAxis_Type_Callback cb) { qbarcategoryaxis_type_callback = cb; }
    inline void setQBarCategoryAxis_Event_Callback(QBarCategoryAxis_Event_Callback cb) { qbarcategoryaxis_event_callback = cb; }
    inline void setQBarCategoryAxis_EventFilter_Callback(QBarCategoryAxis_EventFilter_Callback cb) { qbarcategoryaxis_eventfilter_callback = cb; }
    inline void setQBarCategoryAxis_TimerEvent_Callback(QBarCategoryAxis_TimerEvent_Callback cb) { qbarcategoryaxis_timerevent_callback = cb; }
    inline void setQBarCategoryAxis_ChildEvent_Callback(QBarCategoryAxis_ChildEvent_Callback cb) { qbarcategoryaxis_childevent_callback = cb; }
    inline void setQBarCategoryAxis_CustomEvent_Callback(QBarCategoryAxis_CustomEvent_Callback cb) { qbarcategoryaxis_customevent_callback = cb; }
    inline void setQBarCategoryAxis_ConnectNotify_Callback(QBarCategoryAxis_ConnectNotify_Callback cb) { qbarcategoryaxis_connectnotify_callback = cb; }
    inline void setQBarCategoryAxis_DisconnectNotify_Callback(QBarCategoryAxis_DisconnectNotify_Callback cb) { qbarcategoryaxis_disconnectnotify_callback = cb; }
    inline void setQBarCategoryAxis_Sender_Callback(QBarCategoryAxis_Sender_Callback cb) { qbarcategoryaxis_sender_callback = cb; }
    inline void setQBarCategoryAxis_SenderSignalIndex_Callback(QBarCategoryAxis_SenderSignalIndex_Callback cb) { qbarcategoryaxis_sendersignalindex_callback = cb; }
    inline void setQBarCategoryAxis_Receivers_Callback(QBarCategoryAxis_Receivers_Callback cb) { qbarcategoryaxis_receivers_callback = cb; }
    inline void setQBarCategoryAxis_IsSignalConnected_Callback(QBarCategoryAxis_IsSignalConnected_Callback cb) { qbarcategoryaxis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBarCategoryAxis_MetaObject_IsBase(bool value) const { qbarcategoryaxis_metaobject_isbase = value; }
    inline void setQBarCategoryAxis_Metacast_IsBase(bool value) const { qbarcategoryaxis_metacast_isbase = value; }
    inline void setQBarCategoryAxis_Metacall_IsBase(bool value) const { qbarcategoryaxis_metacall_isbase = value; }
    inline void setQBarCategoryAxis_Type_IsBase(bool value) const { qbarcategoryaxis_type_isbase = value; }
    inline void setQBarCategoryAxis_Event_IsBase(bool value) const { qbarcategoryaxis_event_isbase = value; }
    inline void setQBarCategoryAxis_EventFilter_IsBase(bool value) const { qbarcategoryaxis_eventfilter_isbase = value; }
    inline void setQBarCategoryAxis_TimerEvent_IsBase(bool value) const { qbarcategoryaxis_timerevent_isbase = value; }
    inline void setQBarCategoryAxis_ChildEvent_IsBase(bool value) const { qbarcategoryaxis_childevent_isbase = value; }
    inline void setQBarCategoryAxis_CustomEvent_IsBase(bool value) const { qbarcategoryaxis_customevent_isbase = value; }
    inline void setQBarCategoryAxis_ConnectNotify_IsBase(bool value) const { qbarcategoryaxis_connectnotify_isbase = value; }
    inline void setQBarCategoryAxis_DisconnectNotify_IsBase(bool value) const { qbarcategoryaxis_disconnectnotify_isbase = value; }
    inline void setQBarCategoryAxis_Sender_IsBase(bool value) const { qbarcategoryaxis_sender_isbase = value; }
    inline void setQBarCategoryAxis_SenderSignalIndex_IsBase(bool value) const { qbarcategoryaxis_sendersignalindex_isbase = value; }
    inline void setQBarCategoryAxis_Receivers_IsBase(bool value) const { qbarcategoryaxis_receivers_isbase = value; }
    inline void setQBarCategoryAxis_IsSignalConnected_IsBase(bool value) const { qbarcategoryaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbarcategoryaxis_metaobject_isbase) {
            qbarcategoryaxis_metaobject_isbase = false;
            return QBarCategoryAxis::metaObject();
        }
        auto metaobject_cb = qbarcategoryaxis_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBarCategoryAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbarcategoryaxis_metacast_isbase) {
            qbarcategoryaxis_metacast_isbase = false;
            return QBarCategoryAxis::qt_metacast(param1);
        }
        auto metacast_cb = qbarcategoryaxis_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBarCategoryAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarcategoryaxis_metacall_isbase) {
            qbarcategoryaxis_metacall_isbase = false;
            return QBarCategoryAxis::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbarcategoryaxis_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarCategoryAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qbarcategoryaxis_type_isbase) {
            qbarcategoryaxis_type_isbase = false;
            return QBarCategoryAxis::type();
        }
        auto type_cb = qbarcategoryaxis_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QBarCategoryAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarcategoryaxis_event_isbase) {
            qbarcategoryaxis_event_isbase = false;
            return QBarCategoryAxis::event(event);
        }
        auto event_cb = qbarcategoryaxis_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBarCategoryAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarcategoryaxis_eventfilter_isbase) {
            qbarcategoryaxis_eventfilter_isbase = false;
            return QBarCategoryAxis::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbarcategoryaxis_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarCategoryAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarcategoryaxis_timerevent_isbase) {
            qbarcategoryaxis_timerevent_isbase = false;
            QBarCategoryAxis::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbarcategoryaxis_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBarCategoryAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarcategoryaxis_childevent_isbase) {
            qbarcategoryaxis_childevent_isbase = false;
            QBarCategoryAxis::childEvent(event);
            return;
        }
        auto childevent_cb = qbarcategoryaxis_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBarCategoryAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarcategoryaxis_customevent_isbase) {
            qbarcategoryaxis_customevent_isbase = false;
            QBarCategoryAxis::customEvent(event);
            return;
        }
        auto customevent_cb = qbarcategoryaxis_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBarCategoryAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarcategoryaxis_connectnotify_isbase) {
            qbarcategoryaxis_connectnotify_isbase = false;
            QBarCategoryAxis::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbarcategoryaxis_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBarCategoryAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarcategoryaxis_disconnectnotify_isbase) {
            qbarcategoryaxis_disconnectnotify_isbase = false;
            QBarCategoryAxis::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbarcategoryaxis_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBarCategoryAxis::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbarcategoryaxis_sender_isbase) {
            qbarcategoryaxis_sender_isbase = false;
            return QBarCategoryAxis::sender();
        }
        auto sender_cb = qbarcategoryaxis_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBarCategoryAxis::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbarcategoryaxis_sendersignalindex_isbase) {
            qbarcategoryaxis_sendersignalindex_isbase = false;
            return QBarCategoryAxis::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbarcategoryaxis_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBarCategoryAxis::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbarcategoryaxis_receivers_isbase) {
            qbarcategoryaxis_receivers_isbase = false;
            return QBarCategoryAxis::receivers(signal);
        }
        auto receivers_cb = qbarcategoryaxis_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBarCategoryAxis::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbarcategoryaxis_issignalconnected_isbase) {
            qbarcategoryaxis_issignalconnected_isbase = false;
            return QBarCategoryAxis::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbarcategoryaxis_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBarCategoryAxis::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBarCategoryAxis_TimerEvent(QBarCategoryAxis* self, QTimerEvent* event);
    friend void QBarCategoryAxis_SuperTimerEvent(QBarCategoryAxis* self, QTimerEvent* event);
    friend void QBarCategoryAxis_ChildEvent(QBarCategoryAxis* self, QChildEvent* event);
    friend void QBarCategoryAxis_SuperChildEvent(QBarCategoryAxis* self, QChildEvent* event);
    friend void QBarCategoryAxis_CustomEvent(QBarCategoryAxis* self, QEvent* event);
    friend void QBarCategoryAxis_SuperCustomEvent(QBarCategoryAxis* self, QEvent* event);
    friend void QBarCategoryAxis_ConnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal);
    friend void QBarCategoryAxis_SuperConnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal);
    friend void QBarCategoryAxis_DisconnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal);
    friend void QBarCategoryAxis_SuperDisconnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal);
    friend QObject* QBarCategoryAxis_Sender(const QBarCategoryAxis* self);
    friend QObject* QBarCategoryAxis_SuperSender(const QBarCategoryAxis* self);
    friend int QBarCategoryAxis_SenderSignalIndex(const QBarCategoryAxis* self);
    friend int QBarCategoryAxis_SuperSenderSignalIndex(const QBarCategoryAxis* self);
    friend int QBarCategoryAxis_Receivers(const QBarCategoryAxis* self, const char* signal);
    friend int QBarCategoryAxis_SuperReceivers(const QBarCategoryAxis* self, const char* signal);
    friend bool QBarCategoryAxis_IsSignalConnected(const QBarCategoryAxis* self, const QMetaMethod* signal);
    friend bool QBarCategoryAxis_SuperIsSignalConnected(const QBarCategoryAxis* self, const QMetaMethod* signal);
};

#endif
