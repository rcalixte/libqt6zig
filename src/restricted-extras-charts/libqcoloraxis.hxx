#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCOLORAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QColorAxis so that we can call protected methods
class VirtualQColorAxis final : public QColorAxis {

  public:
    // Virtual class boolean flag
    bool isVirtualQColorAxis = true;

    // Virtual class public types (including callbacks)
    using QColorAxis_Metacall_Callback = int (*)(QColorAxis*, int, int, void**);
    using QColorAxis_Type_Callback = int (*)();
    using QColorAxis_Event_Callback = bool (*)(QColorAxis*, QEvent*);
    using QColorAxis_EventFilter_Callback = bool (*)(QColorAxis*, QObject*, QEvent*);
    using QColorAxis_TimerEvent_Callback = void (*)(QColorAxis*, QTimerEvent*);
    using QColorAxis_ChildEvent_Callback = void (*)(QColorAxis*, QChildEvent*);
    using QColorAxis_CustomEvent_Callback = void (*)(QColorAxis*, QEvent*);
    using QColorAxis_ConnectNotify_Callback = void (*)(QColorAxis*, QMetaMethod*);
    using QColorAxis_DisconnectNotify_Callback = void (*)(QColorAxis*, QMetaMethod*);
    using QColorAxis_Sender_Callback = QObject* (*)();
    using QColorAxis_SenderSignalIndex_Callback = int (*)();
    using QColorAxis_Receivers_Callback = int (*)(const QColorAxis*, const char*);
    using QColorAxis_IsSignalConnected_Callback = bool (*)(const QColorAxis*, QMetaMethod*);

  protected:
    // Instance callback storage
    QColorAxis_Metacall_Callback qcoloraxis_metacall_callback = nullptr;
    QColorAxis_Type_Callback qcoloraxis_type_callback = nullptr;
    QColorAxis_Event_Callback qcoloraxis_event_callback = nullptr;
    QColorAxis_EventFilter_Callback qcoloraxis_eventfilter_callback = nullptr;
    QColorAxis_TimerEvent_Callback qcoloraxis_timerevent_callback = nullptr;
    QColorAxis_ChildEvent_Callback qcoloraxis_childevent_callback = nullptr;
    QColorAxis_CustomEvent_Callback qcoloraxis_customevent_callback = nullptr;
    QColorAxis_ConnectNotify_Callback qcoloraxis_connectnotify_callback = nullptr;
    QColorAxis_DisconnectNotify_Callback qcoloraxis_disconnectnotify_callback = nullptr;
    QColorAxis_Sender_Callback qcoloraxis_sender_callback = nullptr;
    QColorAxis_SenderSignalIndex_Callback qcoloraxis_sendersignalindex_callback = nullptr;
    QColorAxis_Receivers_Callback qcoloraxis_receivers_callback = nullptr;
    QColorAxis_IsSignalConnected_Callback qcoloraxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcoloraxis_metacall_isbase = false;
    mutable bool qcoloraxis_type_isbase = false;
    mutable bool qcoloraxis_event_isbase = false;
    mutable bool qcoloraxis_eventfilter_isbase = false;
    mutable bool qcoloraxis_timerevent_isbase = false;
    mutable bool qcoloraxis_childevent_isbase = false;
    mutable bool qcoloraxis_customevent_isbase = false;
    mutable bool qcoloraxis_connectnotify_isbase = false;
    mutable bool qcoloraxis_disconnectnotify_isbase = false;
    mutable bool qcoloraxis_sender_isbase = false;
    mutable bool qcoloraxis_sendersignalindex_isbase = false;
    mutable bool qcoloraxis_receivers_isbase = false;
    mutable bool qcoloraxis_issignalconnected_isbase = false;

  public:
    VirtualQColorAxis() : QColorAxis(){};
    VirtualQColorAxis(QObject* parent) : QColorAxis(parent){};

    ~VirtualQColorAxis() {
        qcoloraxis_metacall_callback = nullptr;
        qcoloraxis_type_callback = nullptr;
        qcoloraxis_event_callback = nullptr;
        qcoloraxis_eventfilter_callback = nullptr;
        qcoloraxis_timerevent_callback = nullptr;
        qcoloraxis_childevent_callback = nullptr;
        qcoloraxis_customevent_callback = nullptr;
        qcoloraxis_connectnotify_callback = nullptr;
        qcoloraxis_disconnectnotify_callback = nullptr;
        qcoloraxis_sender_callback = nullptr;
        qcoloraxis_sendersignalindex_callback = nullptr;
        qcoloraxis_receivers_callback = nullptr;
        qcoloraxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQColorAxis_Metacall_Callback(QColorAxis_Metacall_Callback cb) { qcoloraxis_metacall_callback = cb; }
    inline void setQColorAxis_Type_Callback(QColorAxis_Type_Callback cb) { qcoloraxis_type_callback = cb; }
    inline void setQColorAxis_Event_Callback(QColorAxis_Event_Callback cb) { qcoloraxis_event_callback = cb; }
    inline void setQColorAxis_EventFilter_Callback(QColorAxis_EventFilter_Callback cb) { qcoloraxis_eventfilter_callback = cb; }
    inline void setQColorAxis_TimerEvent_Callback(QColorAxis_TimerEvent_Callback cb) { qcoloraxis_timerevent_callback = cb; }
    inline void setQColorAxis_ChildEvent_Callback(QColorAxis_ChildEvent_Callback cb) { qcoloraxis_childevent_callback = cb; }
    inline void setQColorAxis_CustomEvent_Callback(QColorAxis_CustomEvent_Callback cb) { qcoloraxis_customevent_callback = cb; }
    inline void setQColorAxis_ConnectNotify_Callback(QColorAxis_ConnectNotify_Callback cb) { qcoloraxis_connectnotify_callback = cb; }
    inline void setQColorAxis_DisconnectNotify_Callback(QColorAxis_DisconnectNotify_Callback cb) { qcoloraxis_disconnectnotify_callback = cb; }
    inline void setQColorAxis_Sender_Callback(QColorAxis_Sender_Callback cb) { qcoloraxis_sender_callback = cb; }
    inline void setQColorAxis_SenderSignalIndex_Callback(QColorAxis_SenderSignalIndex_Callback cb) { qcoloraxis_sendersignalindex_callback = cb; }
    inline void setQColorAxis_Receivers_Callback(QColorAxis_Receivers_Callback cb) { qcoloraxis_receivers_callback = cb; }
    inline void setQColorAxis_IsSignalConnected_Callback(QColorAxis_IsSignalConnected_Callback cb) { qcoloraxis_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQColorAxis_Metacall_IsBase(bool value) const { qcoloraxis_metacall_isbase = value; }
    inline void setQColorAxis_Type_IsBase(bool value) const { qcoloraxis_type_isbase = value; }
    inline void setQColorAxis_Event_IsBase(bool value) const { qcoloraxis_event_isbase = value; }
    inline void setQColorAxis_EventFilter_IsBase(bool value) const { qcoloraxis_eventfilter_isbase = value; }
    inline void setQColorAxis_TimerEvent_IsBase(bool value) const { qcoloraxis_timerevent_isbase = value; }
    inline void setQColorAxis_ChildEvent_IsBase(bool value) const { qcoloraxis_childevent_isbase = value; }
    inline void setQColorAxis_CustomEvent_IsBase(bool value) const { qcoloraxis_customevent_isbase = value; }
    inline void setQColorAxis_ConnectNotify_IsBase(bool value) const { qcoloraxis_connectnotify_isbase = value; }
    inline void setQColorAxis_DisconnectNotify_IsBase(bool value) const { qcoloraxis_disconnectnotify_isbase = value; }
    inline void setQColorAxis_Sender_IsBase(bool value) const { qcoloraxis_sender_isbase = value; }
    inline void setQColorAxis_SenderSignalIndex_IsBase(bool value) const { qcoloraxis_sendersignalindex_isbase = value; }
    inline void setQColorAxis_Receivers_IsBase(bool value) const { qcoloraxis_receivers_isbase = value; }
    inline void setQColorAxis_IsSignalConnected_IsBase(bool value) const { qcoloraxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcoloraxis_metacall_isbase) {
            qcoloraxis_metacall_isbase = false;
            return QColorAxis::qt_metacall(param1, param2, param3);
        } else if (qcoloraxis_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcoloraxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QColorAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qcoloraxis_type_isbase) {
            qcoloraxis_type_isbase = false;
            return QColorAxis::type();
        } else if (qcoloraxis_type_callback != nullptr) {
            int callback_ret = qcoloraxis_type_callback();
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        } else {
            return QColorAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcoloraxis_event_isbase) {
            qcoloraxis_event_isbase = false;
            return QColorAxis::event(event);
        } else if (qcoloraxis_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcoloraxis_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColorAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcoloraxis_eventfilter_isbase) {
            qcoloraxis_eventfilter_isbase = false;
            return QColorAxis::eventFilter(watched, event);
        } else if (qcoloraxis_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcoloraxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QColorAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcoloraxis_timerevent_isbase) {
            qcoloraxis_timerevent_isbase = false;
            QColorAxis::timerEvent(event);
        } else if (qcoloraxis_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcoloraxis_timerevent_callback(this, cbval1);
        } else {
            QColorAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcoloraxis_childevent_isbase) {
            qcoloraxis_childevent_isbase = false;
            QColorAxis::childEvent(event);
        } else if (qcoloraxis_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcoloraxis_childevent_callback(this, cbval1);
        } else {
            QColorAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcoloraxis_customevent_isbase) {
            qcoloraxis_customevent_isbase = false;
            QColorAxis::customEvent(event);
        } else if (qcoloraxis_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcoloraxis_customevent_callback(this, cbval1);
        } else {
            QColorAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcoloraxis_connectnotify_isbase) {
            qcoloraxis_connectnotify_isbase = false;
            QColorAxis::connectNotify(signal);
        } else if (qcoloraxis_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcoloraxis_connectnotify_callback(this, cbval1);
        } else {
            QColorAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcoloraxis_disconnectnotify_isbase) {
            qcoloraxis_disconnectnotify_isbase = false;
            QColorAxis::disconnectNotify(signal);
        } else if (qcoloraxis_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcoloraxis_disconnectnotify_callback(this, cbval1);
        } else {
            QColorAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcoloraxis_sender_isbase) {
            qcoloraxis_sender_isbase = false;
            return QColorAxis::sender();
        } else if (qcoloraxis_sender_callback != nullptr) {
            QObject* callback_ret = qcoloraxis_sender_callback();
            return callback_ret;
        } else {
            return QColorAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcoloraxis_sendersignalindex_isbase) {
            qcoloraxis_sendersignalindex_isbase = false;
            return QColorAxis::senderSignalIndex();
        } else if (qcoloraxis_sendersignalindex_callback != nullptr) {
            int callback_ret = qcoloraxis_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QColorAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcoloraxis_receivers_isbase) {
            qcoloraxis_receivers_isbase = false;
            return QColorAxis::receivers(signal);
        } else if (qcoloraxis_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcoloraxis_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QColorAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcoloraxis_issignalconnected_isbase) {
            qcoloraxis_issignalconnected_isbase = false;
            return QColorAxis::isSignalConnected(signal);
        } else if (qcoloraxis_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcoloraxis_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QColorAxis::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QColorAxis_TimerEvent(QColorAxis* self, QTimerEvent* event);
    friend void QColorAxis_QBaseTimerEvent(QColorAxis* self, QTimerEvent* event);
    friend void QColorAxis_ChildEvent(QColorAxis* self, QChildEvent* event);
    friend void QColorAxis_QBaseChildEvent(QColorAxis* self, QChildEvent* event);
    friend void QColorAxis_CustomEvent(QColorAxis* self, QEvent* event);
    friend void QColorAxis_QBaseCustomEvent(QColorAxis* self, QEvent* event);
    friend void QColorAxis_ConnectNotify(QColorAxis* self, const QMetaMethod* signal);
    friend void QColorAxis_QBaseConnectNotify(QColorAxis* self, const QMetaMethod* signal);
    friend void QColorAxis_DisconnectNotify(QColorAxis* self, const QMetaMethod* signal);
    friend void QColorAxis_QBaseDisconnectNotify(QColorAxis* self, const QMetaMethod* signal);
    friend QObject* QColorAxis_Sender(const QColorAxis* self);
    friend QObject* QColorAxis_QBaseSender(const QColorAxis* self);
    friend int QColorAxis_SenderSignalIndex(const QColorAxis* self);
    friend int QColorAxis_QBaseSenderSignalIndex(const QColorAxis* self);
    friend int QColorAxis_Receivers(const QColorAxis* self, const char* signal);
    friend int QColorAxis_QBaseReceivers(const QColorAxis* self, const char* signal);
    friend bool QColorAxis_IsSignalConnected(const QColorAxis* self, const QMetaMethod* signal);
    friend bool QColorAxis_QBaseIsSignalConnected(const QColorAxis* self, const QMetaMethod* signal);
};

#endif
