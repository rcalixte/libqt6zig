#pragma once
#ifndef SRCC_LIBVIRTUALQFILESELECTOR_H
#define SRCC_LIBVIRTUALQFILESELECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSelector so that we can call protected methods
class VirtualQFileSelector final : public QFileSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileSelector = true;

    // Virtual class public types (including callbacks)
    using QFileSelector_Metacall_Callback = int (*)(QFileSelector*, int, int, void**);
    using QFileSelector_Event_Callback = bool (*)(QFileSelector*, QEvent*);
    using QFileSelector_EventFilter_Callback = bool (*)(QFileSelector*, QObject*, QEvent*);
    using QFileSelector_TimerEvent_Callback = void (*)(QFileSelector*, QTimerEvent*);
    using QFileSelector_ChildEvent_Callback = void (*)(QFileSelector*, QChildEvent*);
    using QFileSelector_CustomEvent_Callback = void (*)(QFileSelector*, QEvent*);
    using QFileSelector_ConnectNotify_Callback = void (*)(QFileSelector*, QMetaMethod*);
    using QFileSelector_DisconnectNotify_Callback = void (*)(QFileSelector*, QMetaMethod*);
    using QFileSelector_Sender_Callback = QObject* (*)();
    using QFileSelector_SenderSignalIndex_Callback = int (*)();
    using QFileSelector_Receivers_Callback = int (*)(const QFileSelector*, const char*);
    using QFileSelector_IsSignalConnected_Callback = bool (*)(const QFileSelector*, QMetaMethod*);

  protected:
    // Instance callback storage
    QFileSelector_Metacall_Callback qfileselector_metacall_callback = nullptr;
    QFileSelector_Event_Callback qfileselector_event_callback = nullptr;
    QFileSelector_EventFilter_Callback qfileselector_eventfilter_callback = nullptr;
    QFileSelector_TimerEvent_Callback qfileselector_timerevent_callback = nullptr;
    QFileSelector_ChildEvent_Callback qfileselector_childevent_callback = nullptr;
    QFileSelector_CustomEvent_Callback qfileselector_customevent_callback = nullptr;
    QFileSelector_ConnectNotify_Callback qfileselector_connectnotify_callback = nullptr;
    QFileSelector_DisconnectNotify_Callback qfileselector_disconnectnotify_callback = nullptr;
    QFileSelector_Sender_Callback qfileselector_sender_callback = nullptr;
    QFileSelector_SenderSignalIndex_Callback qfileselector_sendersignalindex_callback = nullptr;
    QFileSelector_Receivers_Callback qfileselector_receivers_callback = nullptr;
    QFileSelector_IsSignalConnected_Callback qfileselector_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfileselector_metacall_isbase = false;
    mutable bool qfileselector_event_isbase = false;
    mutable bool qfileselector_eventfilter_isbase = false;
    mutable bool qfileselector_timerevent_isbase = false;
    mutable bool qfileselector_childevent_isbase = false;
    mutable bool qfileselector_customevent_isbase = false;
    mutable bool qfileselector_connectnotify_isbase = false;
    mutable bool qfileselector_disconnectnotify_isbase = false;
    mutable bool qfileselector_sender_isbase = false;
    mutable bool qfileselector_sendersignalindex_isbase = false;
    mutable bool qfileselector_receivers_isbase = false;
    mutable bool qfileselector_issignalconnected_isbase = false;

  public:
    VirtualQFileSelector() : QFileSelector() {};
    VirtualQFileSelector(QObject* parent) : QFileSelector(parent) {};

    ~VirtualQFileSelector() {
        qfileselector_metacall_callback = nullptr;
        qfileselector_event_callback = nullptr;
        qfileselector_eventfilter_callback = nullptr;
        qfileselector_timerevent_callback = nullptr;
        qfileselector_childevent_callback = nullptr;
        qfileselector_customevent_callback = nullptr;
        qfileselector_connectnotify_callback = nullptr;
        qfileselector_disconnectnotify_callback = nullptr;
        qfileselector_sender_callback = nullptr;
        qfileselector_sendersignalindex_callback = nullptr;
        qfileselector_receivers_callback = nullptr;
        qfileselector_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQFileSelector_Metacall_Callback(QFileSelector_Metacall_Callback cb) { qfileselector_metacall_callback = cb; }
    inline void setQFileSelector_Event_Callback(QFileSelector_Event_Callback cb) { qfileselector_event_callback = cb; }
    inline void setQFileSelector_EventFilter_Callback(QFileSelector_EventFilter_Callback cb) { qfileselector_eventfilter_callback = cb; }
    inline void setQFileSelector_TimerEvent_Callback(QFileSelector_TimerEvent_Callback cb) { qfileselector_timerevent_callback = cb; }
    inline void setQFileSelector_ChildEvent_Callback(QFileSelector_ChildEvent_Callback cb) { qfileselector_childevent_callback = cb; }
    inline void setQFileSelector_CustomEvent_Callback(QFileSelector_CustomEvent_Callback cb) { qfileselector_customevent_callback = cb; }
    inline void setQFileSelector_ConnectNotify_Callback(QFileSelector_ConnectNotify_Callback cb) { qfileselector_connectnotify_callback = cb; }
    inline void setQFileSelector_DisconnectNotify_Callback(QFileSelector_DisconnectNotify_Callback cb) { qfileselector_disconnectnotify_callback = cb; }
    inline void setQFileSelector_Sender_Callback(QFileSelector_Sender_Callback cb) { qfileselector_sender_callback = cb; }
    inline void setQFileSelector_SenderSignalIndex_Callback(QFileSelector_SenderSignalIndex_Callback cb) { qfileselector_sendersignalindex_callback = cb; }
    inline void setQFileSelector_Receivers_Callback(QFileSelector_Receivers_Callback cb) { qfileselector_receivers_callback = cb; }
    inline void setQFileSelector_IsSignalConnected_Callback(QFileSelector_IsSignalConnected_Callback cb) { qfileselector_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQFileSelector_Metacall_IsBase(bool value) const { qfileselector_metacall_isbase = value; }
    inline void setQFileSelector_Event_IsBase(bool value) const { qfileselector_event_isbase = value; }
    inline void setQFileSelector_EventFilter_IsBase(bool value) const { qfileselector_eventfilter_isbase = value; }
    inline void setQFileSelector_TimerEvent_IsBase(bool value) const { qfileselector_timerevent_isbase = value; }
    inline void setQFileSelector_ChildEvent_IsBase(bool value) const { qfileselector_childevent_isbase = value; }
    inline void setQFileSelector_CustomEvent_IsBase(bool value) const { qfileselector_customevent_isbase = value; }
    inline void setQFileSelector_ConnectNotify_IsBase(bool value) const { qfileselector_connectnotify_isbase = value; }
    inline void setQFileSelector_DisconnectNotify_IsBase(bool value) const { qfileselector_disconnectnotify_isbase = value; }
    inline void setQFileSelector_Sender_IsBase(bool value) const { qfileselector_sender_isbase = value; }
    inline void setQFileSelector_SenderSignalIndex_IsBase(bool value) const { qfileselector_sendersignalindex_isbase = value; }
    inline void setQFileSelector_Receivers_IsBase(bool value) const { qfileselector_receivers_isbase = value; }
    inline void setQFileSelector_IsSignalConnected_IsBase(bool value) const { qfileselector_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfileselector_metacall_isbase) {
            qfileselector_metacall_isbase = false;
            return QFileSelector::qt_metacall(param1, param2, param3);
        } else if (qfileselector_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qfileselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QFileSelector::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfileselector_event_isbase) {
            qfileselector_event_isbase = false;
            return QFileSelector::event(event);
        } else if (qfileselector_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qfileselector_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFileSelector::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfileselector_eventfilter_isbase) {
            qfileselector_eventfilter_isbase = false;
            return QFileSelector::eventFilter(watched, event);
        } else if (qfileselector_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qfileselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFileSelector::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfileselector_timerevent_isbase) {
            qfileselector_timerevent_isbase = false;
            QFileSelector::timerEvent(event);
        } else if (qfileselector_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qfileselector_timerevent_callback(this, cbval1);
        } else {
            QFileSelector::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfileselector_childevent_isbase) {
            qfileselector_childevent_isbase = false;
            QFileSelector::childEvent(event);
        } else if (qfileselector_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qfileselector_childevent_callback(this, cbval1);
        } else {
            QFileSelector::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfileselector_customevent_isbase) {
            qfileselector_customevent_isbase = false;
            QFileSelector::customEvent(event);
        } else if (qfileselector_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qfileselector_customevent_callback(this, cbval1);
        } else {
            QFileSelector::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfileselector_connectnotify_isbase) {
            qfileselector_connectnotify_isbase = false;
            QFileSelector::connectNotify(signal);
        } else if (qfileselector_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfileselector_connectnotify_callback(this, cbval1);
        } else {
            QFileSelector::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfileselector_disconnectnotify_isbase) {
            qfileselector_disconnectnotify_isbase = false;
            QFileSelector::disconnectNotify(signal);
        } else if (qfileselector_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfileselector_disconnectnotify_callback(this, cbval1);
        } else {
            QFileSelector::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfileselector_sender_isbase) {
            qfileselector_sender_isbase = false;
            return QFileSelector::sender();
        } else if (qfileselector_sender_callback != nullptr) {
            QObject* callback_ret = qfileselector_sender_callback();
            return callback_ret;
        } else {
            return QFileSelector::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfileselector_sendersignalindex_isbase) {
            qfileselector_sendersignalindex_isbase = false;
            return QFileSelector::senderSignalIndex();
        } else if (qfileselector_sendersignalindex_callback != nullptr) {
            int callback_ret = qfileselector_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFileSelector::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfileselector_receivers_isbase) {
            qfileselector_receivers_isbase = false;
            return QFileSelector::receivers(signal);
        } else if (qfileselector_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qfileselector_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFileSelector::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfileselector_issignalconnected_isbase) {
            qfileselector_issignalconnected_isbase = false;
            return QFileSelector::isSignalConnected(signal);
        } else if (qfileselector_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qfileselector_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFileSelector::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QFileSelector_TimerEvent(QFileSelector* self, QTimerEvent* event);
    friend void QFileSelector_QBaseTimerEvent(QFileSelector* self, QTimerEvent* event);
    friend void QFileSelector_ChildEvent(QFileSelector* self, QChildEvent* event);
    friend void QFileSelector_QBaseChildEvent(QFileSelector* self, QChildEvent* event);
    friend void QFileSelector_CustomEvent(QFileSelector* self, QEvent* event);
    friend void QFileSelector_QBaseCustomEvent(QFileSelector* self, QEvent* event);
    friend void QFileSelector_ConnectNotify(QFileSelector* self, const QMetaMethod* signal);
    friend void QFileSelector_QBaseConnectNotify(QFileSelector* self, const QMetaMethod* signal);
    friend void QFileSelector_DisconnectNotify(QFileSelector* self, const QMetaMethod* signal);
    friend void QFileSelector_QBaseDisconnectNotify(QFileSelector* self, const QMetaMethod* signal);
    friend QObject* QFileSelector_Sender(const QFileSelector* self);
    friend QObject* QFileSelector_QBaseSender(const QFileSelector* self);
    friend int QFileSelector_SenderSignalIndex(const QFileSelector* self);
    friend int QFileSelector_QBaseSenderSignalIndex(const QFileSelector* self);
    friend int QFileSelector_Receivers(const QFileSelector* self, const char* signal);
    friend int QFileSelector_QBaseReceivers(const QFileSelector* self, const char* signal);
    friend bool QFileSelector_IsSignalConnected(const QFileSelector* self, const QMetaMethod* signal);
    friend bool QFileSelector_QBaseIsSignalConnected(const QFileSelector* self, const QMetaMethod* signal);
};

#endif
