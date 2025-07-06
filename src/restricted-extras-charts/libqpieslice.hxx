#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPIESLICE_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPIESLICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieSlice so that we can call protected methods
class VirtualQPieSlice final : public QPieSlice {

  public:
    // Virtual class boolean flag
    bool isVirtualQPieSlice = true;

    // Virtual class public types (including callbacks)
    using QPieSlice_Metacall_Callback = int (*)(QPieSlice*, int, int, void**);
    using QPieSlice_Event_Callback = bool (*)(QPieSlice*, QEvent*);
    using QPieSlice_EventFilter_Callback = bool (*)(QPieSlice*, QObject*, QEvent*);
    using QPieSlice_TimerEvent_Callback = void (*)(QPieSlice*, QTimerEvent*);
    using QPieSlice_ChildEvent_Callback = void (*)(QPieSlice*, QChildEvent*);
    using QPieSlice_CustomEvent_Callback = void (*)(QPieSlice*, QEvent*);
    using QPieSlice_ConnectNotify_Callback = void (*)(QPieSlice*, QMetaMethod*);
    using QPieSlice_DisconnectNotify_Callback = void (*)(QPieSlice*, QMetaMethod*);
    using QPieSlice_Sender_Callback = QObject* (*)();
    using QPieSlice_SenderSignalIndex_Callback = int (*)();
    using QPieSlice_Receivers_Callback = int (*)(const QPieSlice*, const char*);
    using QPieSlice_IsSignalConnected_Callback = bool (*)(const QPieSlice*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPieSlice_Metacall_Callback qpieslice_metacall_callback = nullptr;
    QPieSlice_Event_Callback qpieslice_event_callback = nullptr;
    QPieSlice_EventFilter_Callback qpieslice_eventfilter_callback = nullptr;
    QPieSlice_TimerEvent_Callback qpieslice_timerevent_callback = nullptr;
    QPieSlice_ChildEvent_Callback qpieslice_childevent_callback = nullptr;
    QPieSlice_CustomEvent_Callback qpieslice_customevent_callback = nullptr;
    QPieSlice_ConnectNotify_Callback qpieslice_connectnotify_callback = nullptr;
    QPieSlice_DisconnectNotify_Callback qpieslice_disconnectnotify_callback = nullptr;
    QPieSlice_Sender_Callback qpieslice_sender_callback = nullptr;
    QPieSlice_SenderSignalIndex_Callback qpieslice_sendersignalindex_callback = nullptr;
    QPieSlice_Receivers_Callback qpieslice_receivers_callback = nullptr;
    QPieSlice_IsSignalConnected_Callback qpieslice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpieslice_metacall_isbase = false;
    mutable bool qpieslice_event_isbase = false;
    mutable bool qpieslice_eventfilter_isbase = false;
    mutable bool qpieslice_timerevent_isbase = false;
    mutable bool qpieslice_childevent_isbase = false;
    mutable bool qpieslice_customevent_isbase = false;
    mutable bool qpieslice_connectnotify_isbase = false;
    mutable bool qpieslice_disconnectnotify_isbase = false;
    mutable bool qpieslice_sender_isbase = false;
    mutable bool qpieslice_sendersignalindex_isbase = false;
    mutable bool qpieslice_receivers_isbase = false;
    mutable bool qpieslice_issignalconnected_isbase = false;

  public:
    VirtualQPieSlice() : QPieSlice() {};
    VirtualQPieSlice(QString label, qreal value) : QPieSlice(label, value) {};
    VirtualQPieSlice(QObject* parent) : QPieSlice(parent) {};
    VirtualQPieSlice(QString label, qreal value, QObject* parent) : QPieSlice(label, value, parent) {};

    ~VirtualQPieSlice() {
        qpieslice_metacall_callback = nullptr;
        qpieslice_event_callback = nullptr;
        qpieslice_eventfilter_callback = nullptr;
        qpieslice_timerevent_callback = nullptr;
        qpieslice_childevent_callback = nullptr;
        qpieslice_customevent_callback = nullptr;
        qpieslice_connectnotify_callback = nullptr;
        qpieslice_disconnectnotify_callback = nullptr;
        qpieslice_sender_callback = nullptr;
        qpieslice_sendersignalindex_callback = nullptr;
        qpieslice_receivers_callback = nullptr;
        qpieslice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPieSlice_Metacall_Callback(QPieSlice_Metacall_Callback cb) { qpieslice_metacall_callback = cb; }
    inline void setQPieSlice_Event_Callback(QPieSlice_Event_Callback cb) { qpieslice_event_callback = cb; }
    inline void setQPieSlice_EventFilter_Callback(QPieSlice_EventFilter_Callback cb) { qpieslice_eventfilter_callback = cb; }
    inline void setQPieSlice_TimerEvent_Callback(QPieSlice_TimerEvent_Callback cb) { qpieslice_timerevent_callback = cb; }
    inline void setQPieSlice_ChildEvent_Callback(QPieSlice_ChildEvent_Callback cb) { qpieslice_childevent_callback = cb; }
    inline void setQPieSlice_CustomEvent_Callback(QPieSlice_CustomEvent_Callback cb) { qpieslice_customevent_callback = cb; }
    inline void setQPieSlice_ConnectNotify_Callback(QPieSlice_ConnectNotify_Callback cb) { qpieslice_connectnotify_callback = cb; }
    inline void setQPieSlice_DisconnectNotify_Callback(QPieSlice_DisconnectNotify_Callback cb) { qpieslice_disconnectnotify_callback = cb; }
    inline void setQPieSlice_Sender_Callback(QPieSlice_Sender_Callback cb) { qpieslice_sender_callback = cb; }
    inline void setQPieSlice_SenderSignalIndex_Callback(QPieSlice_SenderSignalIndex_Callback cb) { qpieslice_sendersignalindex_callback = cb; }
    inline void setQPieSlice_Receivers_Callback(QPieSlice_Receivers_Callback cb) { qpieslice_receivers_callback = cb; }
    inline void setQPieSlice_IsSignalConnected_Callback(QPieSlice_IsSignalConnected_Callback cb) { qpieslice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPieSlice_Metacall_IsBase(bool value) const { qpieslice_metacall_isbase = value; }
    inline void setQPieSlice_Event_IsBase(bool value) const { qpieslice_event_isbase = value; }
    inline void setQPieSlice_EventFilter_IsBase(bool value) const { qpieslice_eventfilter_isbase = value; }
    inline void setQPieSlice_TimerEvent_IsBase(bool value) const { qpieslice_timerevent_isbase = value; }
    inline void setQPieSlice_ChildEvent_IsBase(bool value) const { qpieslice_childevent_isbase = value; }
    inline void setQPieSlice_CustomEvent_IsBase(bool value) const { qpieslice_customevent_isbase = value; }
    inline void setQPieSlice_ConnectNotify_IsBase(bool value) const { qpieslice_connectnotify_isbase = value; }
    inline void setQPieSlice_DisconnectNotify_IsBase(bool value) const { qpieslice_disconnectnotify_isbase = value; }
    inline void setQPieSlice_Sender_IsBase(bool value) const { qpieslice_sender_isbase = value; }
    inline void setQPieSlice_SenderSignalIndex_IsBase(bool value) const { qpieslice_sendersignalindex_isbase = value; }
    inline void setQPieSlice_Receivers_IsBase(bool value) const { qpieslice_receivers_isbase = value; }
    inline void setQPieSlice_IsSignalConnected_IsBase(bool value) const { qpieslice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpieslice_metacall_isbase) {
            qpieslice_metacall_isbase = false;
            return QPieSlice::qt_metacall(param1, param2, param3);
        } else if (qpieslice_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpieslice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPieSlice::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpieslice_event_isbase) {
            qpieslice_event_isbase = false;
            return QPieSlice::event(event);
        } else if (qpieslice_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpieslice_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPieSlice::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpieslice_eventfilter_isbase) {
            qpieslice_eventfilter_isbase = false;
            return QPieSlice::eventFilter(watched, event);
        } else if (qpieslice_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpieslice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPieSlice::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpieslice_timerevent_isbase) {
            qpieslice_timerevent_isbase = false;
            QPieSlice::timerEvent(event);
        } else if (qpieslice_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpieslice_timerevent_callback(this, cbval1);
        } else {
            QPieSlice::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpieslice_childevent_isbase) {
            qpieslice_childevent_isbase = false;
            QPieSlice::childEvent(event);
        } else if (qpieslice_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpieslice_childevent_callback(this, cbval1);
        } else {
            QPieSlice::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpieslice_customevent_isbase) {
            qpieslice_customevent_isbase = false;
            QPieSlice::customEvent(event);
        } else if (qpieslice_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpieslice_customevent_callback(this, cbval1);
        } else {
            QPieSlice::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpieslice_connectnotify_isbase) {
            qpieslice_connectnotify_isbase = false;
            QPieSlice::connectNotify(signal);
        } else if (qpieslice_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpieslice_connectnotify_callback(this, cbval1);
        } else {
            QPieSlice::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpieslice_disconnectnotify_isbase) {
            qpieslice_disconnectnotify_isbase = false;
            QPieSlice::disconnectNotify(signal);
        } else if (qpieslice_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpieslice_disconnectnotify_callback(this, cbval1);
        } else {
            QPieSlice::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpieslice_sender_isbase) {
            qpieslice_sender_isbase = false;
            return QPieSlice::sender();
        } else if (qpieslice_sender_callback != nullptr) {
            QObject* callback_ret = qpieslice_sender_callback();
            return callback_ret;
        } else {
            return QPieSlice::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpieslice_sendersignalindex_isbase) {
            qpieslice_sendersignalindex_isbase = false;
            return QPieSlice::senderSignalIndex();
        } else if (qpieslice_sendersignalindex_callback != nullptr) {
            int callback_ret = qpieslice_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPieSlice::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpieslice_receivers_isbase) {
            qpieslice_receivers_isbase = false;
            return QPieSlice::receivers(signal);
        } else if (qpieslice_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpieslice_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPieSlice::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpieslice_issignalconnected_isbase) {
            qpieslice_issignalconnected_isbase = false;
            return QPieSlice::isSignalConnected(signal);
        } else if (qpieslice_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpieslice_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPieSlice::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPieSlice_TimerEvent(QPieSlice* self, QTimerEvent* event);
    friend void QPieSlice_QBaseTimerEvent(QPieSlice* self, QTimerEvent* event);
    friend void QPieSlice_ChildEvent(QPieSlice* self, QChildEvent* event);
    friend void QPieSlice_QBaseChildEvent(QPieSlice* self, QChildEvent* event);
    friend void QPieSlice_CustomEvent(QPieSlice* self, QEvent* event);
    friend void QPieSlice_QBaseCustomEvent(QPieSlice* self, QEvent* event);
    friend void QPieSlice_ConnectNotify(QPieSlice* self, const QMetaMethod* signal);
    friend void QPieSlice_QBaseConnectNotify(QPieSlice* self, const QMetaMethod* signal);
    friend void QPieSlice_DisconnectNotify(QPieSlice* self, const QMetaMethod* signal);
    friend void QPieSlice_QBaseDisconnectNotify(QPieSlice* self, const QMetaMethod* signal);
    friend QObject* QPieSlice_Sender(const QPieSlice* self);
    friend QObject* QPieSlice_QBaseSender(const QPieSlice* self);
    friend int QPieSlice_SenderSignalIndex(const QPieSlice* self);
    friend int QPieSlice_QBaseSenderSignalIndex(const QPieSlice* self);
    friend int QPieSlice_Receivers(const QPieSlice* self, const char* signal);
    friend int QPieSlice_QBaseReceivers(const QPieSlice* self, const char* signal);
    friend bool QPieSlice_IsSignalConnected(const QPieSlice* self, const QMetaMethod* signal);
    friend bool QPieSlice_QBaseIsSignalConnected(const QPieSlice* self, const QMetaMethod* signal);
};

#endif
