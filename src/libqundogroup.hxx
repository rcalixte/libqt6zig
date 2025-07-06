#pragma once
#ifndef SRCC_LIBVIRTUALQUNDOGROUP_H
#define SRCC_LIBVIRTUALQUNDOGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoGroup so that we can call protected methods
class VirtualQUndoGroup final : public QUndoGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQUndoGroup = true;

    // Virtual class public types (including callbacks)
    using QUndoGroup_Metacall_Callback = int (*)(QUndoGroup*, int, int, void**);
    using QUndoGroup_Event_Callback = bool (*)(QUndoGroup*, QEvent*);
    using QUndoGroup_EventFilter_Callback = bool (*)(QUndoGroup*, QObject*, QEvent*);
    using QUndoGroup_TimerEvent_Callback = void (*)(QUndoGroup*, QTimerEvent*);
    using QUndoGroup_ChildEvent_Callback = void (*)(QUndoGroup*, QChildEvent*);
    using QUndoGroup_CustomEvent_Callback = void (*)(QUndoGroup*, QEvent*);
    using QUndoGroup_ConnectNotify_Callback = void (*)(QUndoGroup*, QMetaMethod*);
    using QUndoGroup_DisconnectNotify_Callback = void (*)(QUndoGroup*, QMetaMethod*);
    using QUndoGroup_Sender_Callback = QObject* (*)();
    using QUndoGroup_SenderSignalIndex_Callback = int (*)();
    using QUndoGroup_Receivers_Callback = int (*)(const QUndoGroup*, const char*);
    using QUndoGroup_IsSignalConnected_Callback = bool (*)(const QUndoGroup*, QMetaMethod*);

  protected:
    // Instance callback storage
    QUndoGroup_Metacall_Callback qundogroup_metacall_callback = nullptr;
    QUndoGroup_Event_Callback qundogroup_event_callback = nullptr;
    QUndoGroup_EventFilter_Callback qundogroup_eventfilter_callback = nullptr;
    QUndoGroup_TimerEvent_Callback qundogroup_timerevent_callback = nullptr;
    QUndoGroup_ChildEvent_Callback qundogroup_childevent_callback = nullptr;
    QUndoGroup_CustomEvent_Callback qundogroup_customevent_callback = nullptr;
    QUndoGroup_ConnectNotify_Callback qundogroup_connectnotify_callback = nullptr;
    QUndoGroup_DisconnectNotify_Callback qundogroup_disconnectnotify_callback = nullptr;
    QUndoGroup_Sender_Callback qundogroup_sender_callback = nullptr;
    QUndoGroup_SenderSignalIndex_Callback qundogroup_sendersignalindex_callback = nullptr;
    QUndoGroup_Receivers_Callback qundogroup_receivers_callback = nullptr;
    QUndoGroup_IsSignalConnected_Callback qundogroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qundogroup_metacall_isbase = false;
    mutable bool qundogroup_event_isbase = false;
    mutable bool qundogroup_eventfilter_isbase = false;
    mutable bool qundogroup_timerevent_isbase = false;
    mutable bool qundogroup_childevent_isbase = false;
    mutable bool qundogroup_customevent_isbase = false;
    mutable bool qundogroup_connectnotify_isbase = false;
    mutable bool qundogroup_disconnectnotify_isbase = false;
    mutable bool qundogroup_sender_isbase = false;
    mutable bool qundogroup_sendersignalindex_isbase = false;
    mutable bool qundogroup_receivers_isbase = false;
    mutable bool qundogroup_issignalconnected_isbase = false;

  public:
    VirtualQUndoGroup() : QUndoGroup() {};
    VirtualQUndoGroup(QObject* parent) : QUndoGroup(parent) {};

    ~VirtualQUndoGroup() {
        qundogroup_metacall_callback = nullptr;
        qundogroup_event_callback = nullptr;
        qundogroup_eventfilter_callback = nullptr;
        qundogroup_timerevent_callback = nullptr;
        qundogroup_childevent_callback = nullptr;
        qundogroup_customevent_callback = nullptr;
        qundogroup_connectnotify_callback = nullptr;
        qundogroup_disconnectnotify_callback = nullptr;
        qundogroup_sender_callback = nullptr;
        qundogroup_sendersignalindex_callback = nullptr;
        qundogroup_receivers_callback = nullptr;
        qundogroup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQUndoGroup_Metacall_Callback(QUndoGroup_Metacall_Callback cb) { qundogroup_metacall_callback = cb; }
    inline void setQUndoGroup_Event_Callback(QUndoGroup_Event_Callback cb) { qundogroup_event_callback = cb; }
    inline void setQUndoGroup_EventFilter_Callback(QUndoGroup_EventFilter_Callback cb) { qundogroup_eventfilter_callback = cb; }
    inline void setQUndoGroup_TimerEvent_Callback(QUndoGroup_TimerEvent_Callback cb) { qundogroup_timerevent_callback = cb; }
    inline void setQUndoGroup_ChildEvent_Callback(QUndoGroup_ChildEvent_Callback cb) { qundogroup_childevent_callback = cb; }
    inline void setQUndoGroup_CustomEvent_Callback(QUndoGroup_CustomEvent_Callback cb) { qundogroup_customevent_callback = cb; }
    inline void setQUndoGroup_ConnectNotify_Callback(QUndoGroup_ConnectNotify_Callback cb) { qundogroup_connectnotify_callback = cb; }
    inline void setQUndoGroup_DisconnectNotify_Callback(QUndoGroup_DisconnectNotify_Callback cb) { qundogroup_disconnectnotify_callback = cb; }
    inline void setQUndoGroup_Sender_Callback(QUndoGroup_Sender_Callback cb) { qundogroup_sender_callback = cb; }
    inline void setQUndoGroup_SenderSignalIndex_Callback(QUndoGroup_SenderSignalIndex_Callback cb) { qundogroup_sendersignalindex_callback = cb; }
    inline void setQUndoGroup_Receivers_Callback(QUndoGroup_Receivers_Callback cb) { qundogroup_receivers_callback = cb; }
    inline void setQUndoGroup_IsSignalConnected_Callback(QUndoGroup_IsSignalConnected_Callback cb) { qundogroup_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQUndoGroup_Metacall_IsBase(bool value) const { qundogroup_metacall_isbase = value; }
    inline void setQUndoGroup_Event_IsBase(bool value) const { qundogroup_event_isbase = value; }
    inline void setQUndoGroup_EventFilter_IsBase(bool value) const { qundogroup_eventfilter_isbase = value; }
    inline void setQUndoGroup_TimerEvent_IsBase(bool value) const { qundogroup_timerevent_isbase = value; }
    inline void setQUndoGroup_ChildEvent_IsBase(bool value) const { qundogroup_childevent_isbase = value; }
    inline void setQUndoGroup_CustomEvent_IsBase(bool value) const { qundogroup_customevent_isbase = value; }
    inline void setQUndoGroup_ConnectNotify_IsBase(bool value) const { qundogroup_connectnotify_isbase = value; }
    inline void setQUndoGroup_DisconnectNotify_IsBase(bool value) const { qundogroup_disconnectnotify_isbase = value; }
    inline void setQUndoGroup_Sender_IsBase(bool value) const { qundogroup_sender_isbase = value; }
    inline void setQUndoGroup_SenderSignalIndex_IsBase(bool value) const { qundogroup_sendersignalindex_isbase = value; }
    inline void setQUndoGroup_Receivers_IsBase(bool value) const { qundogroup_receivers_isbase = value; }
    inline void setQUndoGroup_IsSignalConnected_IsBase(bool value) const { qundogroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundogroup_metacall_isbase) {
            qundogroup_metacall_isbase = false;
            return QUndoGroup::qt_metacall(param1, param2, param3);
        } else if (qundogroup_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qundogroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoGroup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qundogroup_event_isbase) {
            qundogroup_event_isbase = false;
            return QUndoGroup::event(event);
        } else if (qundogroup_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qundogroup_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoGroup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qundogroup_eventfilter_isbase) {
            qundogroup_eventfilter_isbase = false;
            return QUndoGroup::eventFilter(watched, event);
        } else if (qundogroup_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qundogroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QUndoGroup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qundogroup_timerevent_isbase) {
            qundogroup_timerevent_isbase = false;
            QUndoGroup::timerEvent(event);
        } else if (qundogroup_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qundogroup_timerevent_callback(this, cbval1);
        } else {
            QUndoGroup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundogroup_childevent_isbase) {
            qundogroup_childevent_isbase = false;
            QUndoGroup::childEvent(event);
        } else if (qundogroup_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qundogroup_childevent_callback(this, cbval1);
        } else {
            QUndoGroup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundogroup_customevent_isbase) {
            qundogroup_customevent_isbase = false;
            QUndoGroup::customEvent(event);
        } else if (qundogroup_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qundogroup_customevent_callback(this, cbval1);
        } else {
            QUndoGroup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundogroup_connectnotify_isbase) {
            qundogroup_connectnotify_isbase = false;
            QUndoGroup::connectNotify(signal);
        } else if (qundogroup_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qundogroup_connectnotify_callback(this, cbval1);
        } else {
            QUndoGroup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundogroup_disconnectnotify_isbase) {
            qundogroup_disconnectnotify_isbase = false;
            QUndoGroup::disconnectNotify(signal);
        } else if (qundogroup_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qundogroup_disconnectnotify_callback(this, cbval1);
        } else {
            QUndoGroup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qundogroup_sender_isbase) {
            qundogroup_sender_isbase = false;
            return QUndoGroup::sender();
        } else if (qundogroup_sender_callback != nullptr) {
            QObject* callback_ret = qundogroup_sender_callback();
            return callback_ret;
        } else {
            return QUndoGroup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qundogroup_sendersignalindex_isbase) {
            qundogroup_sendersignalindex_isbase = false;
            return QUndoGroup::senderSignalIndex();
        } else if (qundogroup_sendersignalindex_callback != nullptr) {
            int callback_ret = qundogroup_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUndoGroup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qundogroup_receivers_isbase) {
            qundogroup_receivers_isbase = false;
            return QUndoGroup::receivers(signal);
        } else if (qundogroup_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qundogroup_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUndoGroup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qundogroup_issignalconnected_isbase) {
            qundogroup_issignalconnected_isbase = false;
            return QUndoGroup::isSignalConnected(signal);
        } else if (qundogroup_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qundogroup_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUndoGroup::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QUndoGroup_TimerEvent(QUndoGroup* self, QTimerEvent* event);
    friend void QUndoGroup_QBaseTimerEvent(QUndoGroup* self, QTimerEvent* event);
    friend void QUndoGroup_ChildEvent(QUndoGroup* self, QChildEvent* event);
    friend void QUndoGroup_QBaseChildEvent(QUndoGroup* self, QChildEvent* event);
    friend void QUndoGroup_CustomEvent(QUndoGroup* self, QEvent* event);
    friend void QUndoGroup_QBaseCustomEvent(QUndoGroup* self, QEvent* event);
    friend void QUndoGroup_ConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_QBaseConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_DisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_QBaseDisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend QObject* QUndoGroup_Sender(const QUndoGroup* self);
    friend QObject* QUndoGroup_QBaseSender(const QUndoGroup* self);
    friend int QUndoGroup_SenderSignalIndex(const QUndoGroup* self);
    friend int QUndoGroup_QBaseSenderSignalIndex(const QUndoGroup* self);
    friend int QUndoGroup_Receivers(const QUndoGroup* self, const char* signal);
    friend int QUndoGroup_QBaseReceivers(const QUndoGroup* self, const char* signal);
    friend bool QUndoGroup_IsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal);
    friend bool QUndoGroup_QBaseIsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal);
};

#endif
