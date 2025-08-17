#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQRESTACCESSMANAGER_H
#define SRC_NETWORKC_LIBVIRTUALQRESTACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QRestAccessManager so that we can call protected methods
class VirtualQRestAccessManager final : public QRestAccessManager {

  public:
    // Virtual class boolean flag
    bool isVirtualQRestAccessManager = true;

    // Virtual class public types (including callbacks)
    using QRestAccessManager_Metacall_Callback = int (*)(QRestAccessManager*, int, int, void**);
    using QRestAccessManager_Event_Callback = bool (*)(QRestAccessManager*, QEvent*);
    using QRestAccessManager_EventFilter_Callback = bool (*)(QRestAccessManager*, QObject*, QEvent*);
    using QRestAccessManager_TimerEvent_Callback = void (*)(QRestAccessManager*, QTimerEvent*);
    using QRestAccessManager_ChildEvent_Callback = void (*)(QRestAccessManager*, QChildEvent*);
    using QRestAccessManager_CustomEvent_Callback = void (*)(QRestAccessManager*, QEvent*);
    using QRestAccessManager_ConnectNotify_Callback = void (*)(QRestAccessManager*, QMetaMethod*);
    using QRestAccessManager_DisconnectNotify_Callback = void (*)(QRestAccessManager*, QMetaMethod*);
    using QRestAccessManager_Sender_Callback = QObject* (*)();
    using QRestAccessManager_SenderSignalIndex_Callback = int (*)();
    using QRestAccessManager_Receivers_Callback = int (*)(const QRestAccessManager*, const char*);
    using QRestAccessManager_IsSignalConnected_Callback = bool (*)(const QRestAccessManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    QRestAccessManager_Metacall_Callback qrestaccessmanager_metacall_callback = nullptr;
    QRestAccessManager_Event_Callback qrestaccessmanager_event_callback = nullptr;
    QRestAccessManager_EventFilter_Callback qrestaccessmanager_eventfilter_callback = nullptr;
    QRestAccessManager_TimerEvent_Callback qrestaccessmanager_timerevent_callback = nullptr;
    QRestAccessManager_ChildEvent_Callback qrestaccessmanager_childevent_callback = nullptr;
    QRestAccessManager_CustomEvent_Callback qrestaccessmanager_customevent_callback = nullptr;
    QRestAccessManager_ConnectNotify_Callback qrestaccessmanager_connectnotify_callback = nullptr;
    QRestAccessManager_DisconnectNotify_Callback qrestaccessmanager_disconnectnotify_callback = nullptr;
    QRestAccessManager_Sender_Callback qrestaccessmanager_sender_callback = nullptr;
    QRestAccessManager_SenderSignalIndex_Callback qrestaccessmanager_sendersignalindex_callback = nullptr;
    QRestAccessManager_Receivers_Callback qrestaccessmanager_receivers_callback = nullptr;
    QRestAccessManager_IsSignalConnected_Callback qrestaccessmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qrestaccessmanager_metacall_isbase = false;
    mutable bool qrestaccessmanager_event_isbase = false;
    mutable bool qrestaccessmanager_eventfilter_isbase = false;
    mutable bool qrestaccessmanager_timerevent_isbase = false;
    mutable bool qrestaccessmanager_childevent_isbase = false;
    mutable bool qrestaccessmanager_customevent_isbase = false;
    mutable bool qrestaccessmanager_connectnotify_isbase = false;
    mutable bool qrestaccessmanager_disconnectnotify_isbase = false;
    mutable bool qrestaccessmanager_sender_isbase = false;
    mutable bool qrestaccessmanager_sendersignalindex_isbase = false;
    mutable bool qrestaccessmanager_receivers_isbase = false;
    mutable bool qrestaccessmanager_issignalconnected_isbase = false;

  public:
    VirtualQRestAccessManager(QNetworkAccessManager* manager) : QRestAccessManager(manager) {};
    VirtualQRestAccessManager(QNetworkAccessManager* manager, QObject* parent) : QRestAccessManager(manager, parent) {};

    ~VirtualQRestAccessManager() {
        qrestaccessmanager_metacall_callback = nullptr;
        qrestaccessmanager_event_callback = nullptr;
        qrestaccessmanager_eventfilter_callback = nullptr;
        qrestaccessmanager_timerevent_callback = nullptr;
        qrestaccessmanager_childevent_callback = nullptr;
        qrestaccessmanager_customevent_callback = nullptr;
        qrestaccessmanager_connectnotify_callback = nullptr;
        qrestaccessmanager_disconnectnotify_callback = nullptr;
        qrestaccessmanager_sender_callback = nullptr;
        qrestaccessmanager_sendersignalindex_callback = nullptr;
        qrestaccessmanager_receivers_callback = nullptr;
        qrestaccessmanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQRestAccessManager_Metacall_Callback(QRestAccessManager_Metacall_Callback cb) { qrestaccessmanager_metacall_callback = cb; }
    inline void setQRestAccessManager_Event_Callback(QRestAccessManager_Event_Callback cb) { qrestaccessmanager_event_callback = cb; }
    inline void setQRestAccessManager_EventFilter_Callback(QRestAccessManager_EventFilter_Callback cb) { qrestaccessmanager_eventfilter_callback = cb; }
    inline void setQRestAccessManager_TimerEvent_Callback(QRestAccessManager_TimerEvent_Callback cb) { qrestaccessmanager_timerevent_callback = cb; }
    inline void setQRestAccessManager_ChildEvent_Callback(QRestAccessManager_ChildEvent_Callback cb) { qrestaccessmanager_childevent_callback = cb; }
    inline void setQRestAccessManager_CustomEvent_Callback(QRestAccessManager_CustomEvent_Callback cb) { qrestaccessmanager_customevent_callback = cb; }
    inline void setQRestAccessManager_ConnectNotify_Callback(QRestAccessManager_ConnectNotify_Callback cb) { qrestaccessmanager_connectnotify_callback = cb; }
    inline void setQRestAccessManager_DisconnectNotify_Callback(QRestAccessManager_DisconnectNotify_Callback cb) { qrestaccessmanager_disconnectnotify_callback = cb; }
    inline void setQRestAccessManager_Sender_Callback(QRestAccessManager_Sender_Callback cb) { qrestaccessmanager_sender_callback = cb; }
    inline void setQRestAccessManager_SenderSignalIndex_Callback(QRestAccessManager_SenderSignalIndex_Callback cb) { qrestaccessmanager_sendersignalindex_callback = cb; }
    inline void setQRestAccessManager_Receivers_Callback(QRestAccessManager_Receivers_Callback cb) { qrestaccessmanager_receivers_callback = cb; }
    inline void setQRestAccessManager_IsSignalConnected_Callback(QRestAccessManager_IsSignalConnected_Callback cb) { qrestaccessmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQRestAccessManager_Metacall_IsBase(bool value) const { qrestaccessmanager_metacall_isbase = value; }
    inline void setQRestAccessManager_Event_IsBase(bool value) const { qrestaccessmanager_event_isbase = value; }
    inline void setQRestAccessManager_EventFilter_IsBase(bool value) const { qrestaccessmanager_eventfilter_isbase = value; }
    inline void setQRestAccessManager_TimerEvent_IsBase(bool value) const { qrestaccessmanager_timerevent_isbase = value; }
    inline void setQRestAccessManager_ChildEvent_IsBase(bool value) const { qrestaccessmanager_childevent_isbase = value; }
    inline void setQRestAccessManager_CustomEvent_IsBase(bool value) const { qrestaccessmanager_customevent_isbase = value; }
    inline void setQRestAccessManager_ConnectNotify_IsBase(bool value) const { qrestaccessmanager_connectnotify_isbase = value; }
    inline void setQRestAccessManager_DisconnectNotify_IsBase(bool value) const { qrestaccessmanager_disconnectnotify_isbase = value; }
    inline void setQRestAccessManager_Sender_IsBase(bool value) const { qrestaccessmanager_sender_isbase = value; }
    inline void setQRestAccessManager_SenderSignalIndex_IsBase(bool value) const { qrestaccessmanager_sendersignalindex_isbase = value; }
    inline void setQRestAccessManager_Receivers_IsBase(bool value) const { qrestaccessmanager_receivers_isbase = value; }
    inline void setQRestAccessManager_IsSignalConnected_IsBase(bool value) const { qrestaccessmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrestaccessmanager_metacall_isbase) {
            qrestaccessmanager_metacall_isbase = false;
            return QRestAccessManager::qt_metacall(param1, param2, param3);
        } else if (qrestaccessmanager_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qrestaccessmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QRestAccessManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qrestaccessmanager_event_isbase) {
            qrestaccessmanager_event_isbase = false;
            return QRestAccessManager::event(event);
        } else if (qrestaccessmanager_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qrestaccessmanager_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QRestAccessManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrestaccessmanager_eventfilter_isbase) {
            qrestaccessmanager_eventfilter_isbase = false;
            return QRestAccessManager::eventFilter(watched, event);
        } else if (qrestaccessmanager_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qrestaccessmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QRestAccessManager::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrestaccessmanager_timerevent_isbase) {
            qrestaccessmanager_timerevent_isbase = false;
            QRestAccessManager::timerEvent(event);
        } else if (qrestaccessmanager_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qrestaccessmanager_timerevent_callback(this, cbval1);
        } else {
            QRestAccessManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrestaccessmanager_childevent_isbase) {
            qrestaccessmanager_childevent_isbase = false;
            QRestAccessManager::childEvent(event);
        } else if (qrestaccessmanager_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qrestaccessmanager_childevent_callback(this, cbval1);
        } else {
            QRestAccessManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrestaccessmanager_customevent_isbase) {
            qrestaccessmanager_customevent_isbase = false;
            QRestAccessManager::customEvent(event);
        } else if (qrestaccessmanager_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qrestaccessmanager_customevent_callback(this, cbval1);
        } else {
            QRestAccessManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrestaccessmanager_connectnotify_isbase) {
            qrestaccessmanager_connectnotify_isbase = false;
            QRestAccessManager::connectNotify(signal);
        } else if (qrestaccessmanager_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qrestaccessmanager_connectnotify_callback(this, cbval1);
        } else {
            QRestAccessManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrestaccessmanager_disconnectnotify_isbase) {
            qrestaccessmanager_disconnectnotify_isbase = false;
            QRestAccessManager::disconnectNotify(signal);
        } else if (qrestaccessmanager_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qrestaccessmanager_disconnectnotify_callback(this, cbval1);
        } else {
            QRestAccessManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qrestaccessmanager_sender_isbase) {
            qrestaccessmanager_sender_isbase = false;
            return QRestAccessManager::sender();
        } else if (qrestaccessmanager_sender_callback != nullptr) {
            QObject* callback_ret = qrestaccessmanager_sender_callback();
            return callback_ret;
        } else {
            return QRestAccessManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qrestaccessmanager_sendersignalindex_isbase) {
            qrestaccessmanager_sendersignalindex_isbase = false;
            return QRestAccessManager::senderSignalIndex();
        } else if (qrestaccessmanager_sendersignalindex_callback != nullptr) {
            int callback_ret = qrestaccessmanager_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QRestAccessManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qrestaccessmanager_receivers_isbase) {
            qrestaccessmanager_receivers_isbase = false;
            return QRestAccessManager::receivers(signal);
        } else if (qrestaccessmanager_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qrestaccessmanager_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QRestAccessManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qrestaccessmanager_issignalconnected_isbase) {
            qrestaccessmanager_issignalconnected_isbase = false;
            return QRestAccessManager::isSignalConnected(signal);
        } else if (qrestaccessmanager_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qrestaccessmanager_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QRestAccessManager::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QRestAccessManager_TimerEvent(QRestAccessManager* self, QTimerEvent* event);
    friend void QRestAccessManager_QBaseTimerEvent(QRestAccessManager* self, QTimerEvent* event);
    friend void QRestAccessManager_ChildEvent(QRestAccessManager* self, QChildEvent* event);
    friend void QRestAccessManager_QBaseChildEvent(QRestAccessManager* self, QChildEvent* event);
    friend void QRestAccessManager_CustomEvent(QRestAccessManager* self, QEvent* event);
    friend void QRestAccessManager_QBaseCustomEvent(QRestAccessManager* self, QEvent* event);
    friend void QRestAccessManager_ConnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
    friend void QRestAccessManager_QBaseConnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
    friend void QRestAccessManager_DisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
    friend void QRestAccessManager_QBaseDisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
    friend QObject* QRestAccessManager_Sender(const QRestAccessManager* self);
    friend QObject* QRestAccessManager_QBaseSender(const QRestAccessManager* self);
    friend int QRestAccessManager_SenderSignalIndex(const QRestAccessManager* self);
    friend int QRestAccessManager_QBaseSenderSignalIndex(const QRestAccessManager* self);
    friend int QRestAccessManager_Receivers(const QRestAccessManager* self, const char* signal);
    friend int QRestAccessManager_QBaseReceivers(const QRestAccessManager* self, const char* signal);
    friend bool QRestAccessManager_IsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal);
    friend bool QRestAccessManager_QBaseIsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal);
};

#endif
