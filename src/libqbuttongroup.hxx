#pragma once
#ifndef SRCC_LIBVIRTUALQBUTTONGROUP_H
#define SRCC_LIBVIRTUALQBUTTONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QButtonGroup so that we can call protected methods
class VirtualQButtonGroup final : public QButtonGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualQButtonGroup = true;

    // Virtual class public types (including callbacks)
    using QButtonGroup_Metacall_Callback = int (*)(QButtonGroup*, int, int, void**);
    using QButtonGroup_Event_Callback = bool (*)(QButtonGroup*, QEvent*);
    using QButtonGroup_EventFilter_Callback = bool (*)(QButtonGroup*, QObject*, QEvent*);
    using QButtonGroup_TimerEvent_Callback = void (*)(QButtonGroup*, QTimerEvent*);
    using QButtonGroup_ChildEvent_Callback = void (*)(QButtonGroup*, QChildEvent*);
    using QButtonGroup_CustomEvent_Callback = void (*)(QButtonGroup*, QEvent*);
    using QButtonGroup_ConnectNotify_Callback = void (*)(QButtonGroup*, QMetaMethod*);
    using QButtonGroup_DisconnectNotify_Callback = void (*)(QButtonGroup*, QMetaMethod*);
    using QButtonGroup_Sender_Callback = QObject* (*)();
    using QButtonGroup_SenderSignalIndex_Callback = int (*)();
    using QButtonGroup_Receivers_Callback = int (*)(const QButtonGroup*, const char*);
    using QButtonGroup_IsSignalConnected_Callback = bool (*)(const QButtonGroup*, QMetaMethod*);

  protected:
    // Instance callback storage
    QButtonGroup_Metacall_Callback qbuttongroup_metacall_callback = nullptr;
    QButtonGroup_Event_Callback qbuttongroup_event_callback = nullptr;
    QButtonGroup_EventFilter_Callback qbuttongroup_eventfilter_callback = nullptr;
    QButtonGroup_TimerEvent_Callback qbuttongroup_timerevent_callback = nullptr;
    QButtonGroup_ChildEvent_Callback qbuttongroup_childevent_callback = nullptr;
    QButtonGroup_CustomEvent_Callback qbuttongroup_customevent_callback = nullptr;
    QButtonGroup_ConnectNotify_Callback qbuttongroup_connectnotify_callback = nullptr;
    QButtonGroup_DisconnectNotify_Callback qbuttongroup_disconnectnotify_callback = nullptr;
    QButtonGroup_Sender_Callback qbuttongroup_sender_callback = nullptr;
    QButtonGroup_SenderSignalIndex_Callback qbuttongroup_sendersignalindex_callback = nullptr;
    QButtonGroup_Receivers_Callback qbuttongroup_receivers_callback = nullptr;
    QButtonGroup_IsSignalConnected_Callback qbuttongroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbuttongroup_metacall_isbase = false;
    mutable bool qbuttongroup_event_isbase = false;
    mutable bool qbuttongroup_eventfilter_isbase = false;
    mutable bool qbuttongroup_timerevent_isbase = false;
    mutable bool qbuttongroup_childevent_isbase = false;
    mutable bool qbuttongroup_customevent_isbase = false;
    mutable bool qbuttongroup_connectnotify_isbase = false;
    mutable bool qbuttongroup_disconnectnotify_isbase = false;
    mutable bool qbuttongroup_sender_isbase = false;
    mutable bool qbuttongroup_sendersignalindex_isbase = false;
    mutable bool qbuttongroup_receivers_isbase = false;
    mutable bool qbuttongroup_issignalconnected_isbase = false;

  public:
    VirtualQButtonGroup() : QButtonGroup(){};
    VirtualQButtonGroup(QObject* parent) : QButtonGroup(parent){};

    ~VirtualQButtonGroup() {
        qbuttongroup_metacall_callback = nullptr;
        qbuttongroup_event_callback = nullptr;
        qbuttongroup_eventfilter_callback = nullptr;
        qbuttongroup_timerevent_callback = nullptr;
        qbuttongroup_childevent_callback = nullptr;
        qbuttongroup_customevent_callback = nullptr;
        qbuttongroup_connectnotify_callback = nullptr;
        qbuttongroup_disconnectnotify_callback = nullptr;
        qbuttongroup_sender_callback = nullptr;
        qbuttongroup_sendersignalindex_callback = nullptr;
        qbuttongroup_receivers_callback = nullptr;
        qbuttongroup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQButtonGroup_Metacall_Callback(QButtonGroup_Metacall_Callback cb) { qbuttongroup_metacall_callback = cb; }
    inline void setQButtonGroup_Event_Callback(QButtonGroup_Event_Callback cb) { qbuttongroup_event_callback = cb; }
    inline void setQButtonGroup_EventFilter_Callback(QButtonGroup_EventFilter_Callback cb) { qbuttongroup_eventfilter_callback = cb; }
    inline void setQButtonGroup_TimerEvent_Callback(QButtonGroup_TimerEvent_Callback cb) { qbuttongroup_timerevent_callback = cb; }
    inline void setQButtonGroup_ChildEvent_Callback(QButtonGroup_ChildEvent_Callback cb) { qbuttongroup_childevent_callback = cb; }
    inline void setQButtonGroup_CustomEvent_Callback(QButtonGroup_CustomEvent_Callback cb) { qbuttongroup_customevent_callback = cb; }
    inline void setQButtonGroup_ConnectNotify_Callback(QButtonGroup_ConnectNotify_Callback cb) { qbuttongroup_connectnotify_callback = cb; }
    inline void setQButtonGroup_DisconnectNotify_Callback(QButtonGroup_DisconnectNotify_Callback cb) { qbuttongroup_disconnectnotify_callback = cb; }
    inline void setQButtonGroup_Sender_Callback(QButtonGroup_Sender_Callback cb) { qbuttongroup_sender_callback = cb; }
    inline void setQButtonGroup_SenderSignalIndex_Callback(QButtonGroup_SenderSignalIndex_Callback cb) { qbuttongroup_sendersignalindex_callback = cb; }
    inline void setQButtonGroup_Receivers_Callback(QButtonGroup_Receivers_Callback cb) { qbuttongroup_receivers_callback = cb; }
    inline void setQButtonGroup_IsSignalConnected_Callback(QButtonGroup_IsSignalConnected_Callback cb) { qbuttongroup_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQButtonGroup_Metacall_IsBase(bool value) const { qbuttongroup_metacall_isbase = value; }
    inline void setQButtonGroup_Event_IsBase(bool value) const { qbuttongroup_event_isbase = value; }
    inline void setQButtonGroup_EventFilter_IsBase(bool value) const { qbuttongroup_eventfilter_isbase = value; }
    inline void setQButtonGroup_TimerEvent_IsBase(bool value) const { qbuttongroup_timerevent_isbase = value; }
    inline void setQButtonGroup_ChildEvent_IsBase(bool value) const { qbuttongroup_childevent_isbase = value; }
    inline void setQButtonGroup_CustomEvent_IsBase(bool value) const { qbuttongroup_customevent_isbase = value; }
    inline void setQButtonGroup_ConnectNotify_IsBase(bool value) const { qbuttongroup_connectnotify_isbase = value; }
    inline void setQButtonGroup_DisconnectNotify_IsBase(bool value) const { qbuttongroup_disconnectnotify_isbase = value; }
    inline void setQButtonGroup_Sender_IsBase(bool value) const { qbuttongroup_sender_isbase = value; }
    inline void setQButtonGroup_SenderSignalIndex_IsBase(bool value) const { qbuttongroup_sendersignalindex_isbase = value; }
    inline void setQButtonGroup_Receivers_IsBase(bool value) const { qbuttongroup_receivers_isbase = value; }
    inline void setQButtonGroup_IsSignalConnected_IsBase(bool value) const { qbuttongroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbuttongroup_metacall_isbase) {
            qbuttongroup_metacall_isbase = false;
            return QButtonGroup::qt_metacall(param1, param2, param3);
        } else if (qbuttongroup_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qbuttongroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QButtonGroup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbuttongroup_event_isbase) {
            qbuttongroup_event_isbase = false;
            return QButtonGroup::event(event);
        } else if (qbuttongroup_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qbuttongroup_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QButtonGroup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbuttongroup_eventfilter_isbase) {
            qbuttongroup_eventfilter_isbase = false;
            return QButtonGroup::eventFilter(watched, event);
        } else if (qbuttongroup_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qbuttongroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QButtonGroup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbuttongroup_timerevent_isbase) {
            qbuttongroup_timerevent_isbase = false;
            QButtonGroup::timerEvent(event);
        } else if (qbuttongroup_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qbuttongroup_timerevent_callback(this, cbval1);
        } else {
            QButtonGroup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbuttongroup_childevent_isbase) {
            qbuttongroup_childevent_isbase = false;
            QButtonGroup::childEvent(event);
        } else if (qbuttongroup_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qbuttongroup_childevent_callback(this, cbval1);
        } else {
            QButtonGroup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbuttongroup_customevent_isbase) {
            qbuttongroup_customevent_isbase = false;
            QButtonGroup::customEvent(event);
        } else if (qbuttongroup_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qbuttongroup_customevent_callback(this, cbval1);
        } else {
            QButtonGroup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbuttongroup_connectnotify_isbase) {
            qbuttongroup_connectnotify_isbase = false;
            QButtonGroup::connectNotify(signal);
        } else if (qbuttongroup_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qbuttongroup_connectnotify_callback(this, cbval1);
        } else {
            QButtonGroup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbuttongroup_disconnectnotify_isbase) {
            qbuttongroup_disconnectnotify_isbase = false;
            QButtonGroup::disconnectNotify(signal);
        } else if (qbuttongroup_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qbuttongroup_disconnectnotify_callback(this, cbval1);
        } else {
            QButtonGroup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbuttongroup_sender_isbase) {
            qbuttongroup_sender_isbase = false;
            return QButtonGroup::sender();
        } else if (qbuttongroup_sender_callback != nullptr) {
            QObject* callback_ret = qbuttongroup_sender_callback();
            return callback_ret;
        } else {
            return QButtonGroup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbuttongroup_sendersignalindex_isbase) {
            qbuttongroup_sendersignalindex_isbase = false;
            return QButtonGroup::senderSignalIndex();
        } else if (qbuttongroup_sendersignalindex_callback != nullptr) {
            int callback_ret = qbuttongroup_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QButtonGroup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbuttongroup_receivers_isbase) {
            qbuttongroup_receivers_isbase = false;
            return QButtonGroup::receivers(signal);
        } else if (qbuttongroup_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qbuttongroup_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QButtonGroup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbuttongroup_issignalconnected_isbase) {
            qbuttongroup_issignalconnected_isbase = false;
            return QButtonGroup::isSignalConnected(signal);
        } else if (qbuttongroup_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qbuttongroup_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QButtonGroup::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QButtonGroup_TimerEvent(QButtonGroup* self, QTimerEvent* event);
    friend void QButtonGroup_QBaseTimerEvent(QButtonGroup* self, QTimerEvent* event);
    friend void QButtonGroup_ChildEvent(QButtonGroup* self, QChildEvent* event);
    friend void QButtonGroup_QBaseChildEvent(QButtonGroup* self, QChildEvent* event);
    friend void QButtonGroup_CustomEvent(QButtonGroup* self, QEvent* event);
    friend void QButtonGroup_QBaseCustomEvent(QButtonGroup* self, QEvent* event);
    friend void QButtonGroup_ConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_QBaseConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_DisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_QBaseDisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend QObject* QButtonGroup_Sender(const QButtonGroup* self);
    friend QObject* QButtonGroup_QBaseSender(const QButtonGroup* self);
    friend int QButtonGroup_SenderSignalIndex(const QButtonGroup* self);
    friend int QButtonGroup_QBaseSenderSignalIndex(const QButtonGroup* self);
    friend int QButtonGroup_Receivers(const QButtonGroup* self, const char* signal);
    friend int QButtonGroup_QBaseReceivers(const QButtonGroup* self, const char* signal);
    friend bool QButtonGroup_IsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal);
    friend bool QButtonGroup_QBaseIsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal);
};

#endif
