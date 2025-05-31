#pragma once
#ifndef SRCC_LIBVIRTUALQFILESYSTEMWATCHER_H
#define SRCC_LIBVIRTUALQFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSystemWatcher so that we can call protected methods
class VirtualQFileSystemWatcher final : public QFileSystemWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileSystemWatcher = true;

    // Virtual class public types (including callbacks)
    using QFileSystemWatcher_Metacall_Callback = int (*)(QFileSystemWatcher*, int, int, void**);
    using QFileSystemWatcher_Event_Callback = bool (*)(QFileSystemWatcher*, QEvent*);
    using QFileSystemWatcher_EventFilter_Callback = bool (*)(QFileSystemWatcher*, QObject*, QEvent*);
    using QFileSystemWatcher_TimerEvent_Callback = void (*)(QFileSystemWatcher*, QTimerEvent*);
    using QFileSystemWatcher_ChildEvent_Callback = void (*)(QFileSystemWatcher*, QChildEvent*);
    using QFileSystemWatcher_CustomEvent_Callback = void (*)(QFileSystemWatcher*, QEvent*);
    using QFileSystemWatcher_ConnectNotify_Callback = void (*)(QFileSystemWatcher*, QMetaMethod*);
    using QFileSystemWatcher_DisconnectNotify_Callback = void (*)(QFileSystemWatcher*, QMetaMethod*);
    using QFileSystemWatcher_Sender_Callback = QObject* (*)();
    using QFileSystemWatcher_SenderSignalIndex_Callback = int (*)();
    using QFileSystemWatcher_Receivers_Callback = int (*)(const QFileSystemWatcher*, const char*);
    using QFileSystemWatcher_IsSignalConnected_Callback = bool (*)(const QFileSystemWatcher*, QMetaMethod*);

  protected:
    // Instance callback storage
    QFileSystemWatcher_Metacall_Callback qfilesystemwatcher_metacall_callback = nullptr;
    QFileSystemWatcher_Event_Callback qfilesystemwatcher_event_callback = nullptr;
    QFileSystemWatcher_EventFilter_Callback qfilesystemwatcher_eventfilter_callback = nullptr;
    QFileSystemWatcher_TimerEvent_Callback qfilesystemwatcher_timerevent_callback = nullptr;
    QFileSystemWatcher_ChildEvent_Callback qfilesystemwatcher_childevent_callback = nullptr;
    QFileSystemWatcher_CustomEvent_Callback qfilesystemwatcher_customevent_callback = nullptr;
    QFileSystemWatcher_ConnectNotify_Callback qfilesystemwatcher_connectnotify_callback = nullptr;
    QFileSystemWatcher_DisconnectNotify_Callback qfilesystemwatcher_disconnectnotify_callback = nullptr;
    QFileSystemWatcher_Sender_Callback qfilesystemwatcher_sender_callback = nullptr;
    QFileSystemWatcher_SenderSignalIndex_Callback qfilesystemwatcher_sendersignalindex_callback = nullptr;
    QFileSystemWatcher_Receivers_Callback qfilesystemwatcher_receivers_callback = nullptr;
    QFileSystemWatcher_IsSignalConnected_Callback qfilesystemwatcher_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfilesystemwatcher_metacall_isbase = false;
    mutable bool qfilesystemwatcher_event_isbase = false;
    mutable bool qfilesystemwatcher_eventfilter_isbase = false;
    mutable bool qfilesystemwatcher_timerevent_isbase = false;
    mutable bool qfilesystemwatcher_childevent_isbase = false;
    mutable bool qfilesystemwatcher_customevent_isbase = false;
    mutable bool qfilesystemwatcher_connectnotify_isbase = false;
    mutable bool qfilesystemwatcher_disconnectnotify_isbase = false;
    mutable bool qfilesystemwatcher_sender_isbase = false;
    mutable bool qfilesystemwatcher_sendersignalindex_isbase = false;
    mutable bool qfilesystemwatcher_receivers_isbase = false;
    mutable bool qfilesystemwatcher_issignalconnected_isbase = false;

  public:
    VirtualQFileSystemWatcher() : QFileSystemWatcher(){};
    VirtualQFileSystemWatcher(const QStringList& paths) : QFileSystemWatcher(paths){};
    VirtualQFileSystemWatcher(QObject* parent) : QFileSystemWatcher(parent){};
    VirtualQFileSystemWatcher(const QStringList& paths, QObject* parent) : QFileSystemWatcher(paths, parent){};

    ~VirtualQFileSystemWatcher() {
        qfilesystemwatcher_metacall_callback = nullptr;
        qfilesystemwatcher_event_callback = nullptr;
        qfilesystemwatcher_eventfilter_callback = nullptr;
        qfilesystemwatcher_timerevent_callback = nullptr;
        qfilesystemwatcher_childevent_callback = nullptr;
        qfilesystemwatcher_customevent_callback = nullptr;
        qfilesystemwatcher_connectnotify_callback = nullptr;
        qfilesystemwatcher_disconnectnotify_callback = nullptr;
        qfilesystemwatcher_sender_callback = nullptr;
        qfilesystemwatcher_sendersignalindex_callback = nullptr;
        qfilesystemwatcher_receivers_callback = nullptr;
        qfilesystemwatcher_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQFileSystemWatcher_Metacall_Callback(QFileSystemWatcher_Metacall_Callback cb) { qfilesystemwatcher_metacall_callback = cb; }
    inline void setQFileSystemWatcher_Event_Callback(QFileSystemWatcher_Event_Callback cb) { qfilesystemwatcher_event_callback = cb; }
    inline void setQFileSystemWatcher_EventFilter_Callback(QFileSystemWatcher_EventFilter_Callback cb) { qfilesystemwatcher_eventfilter_callback = cb; }
    inline void setQFileSystemWatcher_TimerEvent_Callback(QFileSystemWatcher_TimerEvent_Callback cb) { qfilesystemwatcher_timerevent_callback = cb; }
    inline void setQFileSystemWatcher_ChildEvent_Callback(QFileSystemWatcher_ChildEvent_Callback cb) { qfilesystemwatcher_childevent_callback = cb; }
    inline void setQFileSystemWatcher_CustomEvent_Callback(QFileSystemWatcher_CustomEvent_Callback cb) { qfilesystemwatcher_customevent_callback = cb; }
    inline void setQFileSystemWatcher_ConnectNotify_Callback(QFileSystemWatcher_ConnectNotify_Callback cb) { qfilesystemwatcher_connectnotify_callback = cb; }
    inline void setQFileSystemWatcher_DisconnectNotify_Callback(QFileSystemWatcher_DisconnectNotify_Callback cb) { qfilesystemwatcher_disconnectnotify_callback = cb; }
    inline void setQFileSystemWatcher_Sender_Callback(QFileSystemWatcher_Sender_Callback cb) { qfilesystemwatcher_sender_callback = cb; }
    inline void setQFileSystemWatcher_SenderSignalIndex_Callback(QFileSystemWatcher_SenderSignalIndex_Callback cb) { qfilesystemwatcher_sendersignalindex_callback = cb; }
    inline void setQFileSystemWatcher_Receivers_Callback(QFileSystemWatcher_Receivers_Callback cb) { qfilesystemwatcher_receivers_callback = cb; }
    inline void setQFileSystemWatcher_IsSignalConnected_Callback(QFileSystemWatcher_IsSignalConnected_Callback cb) { qfilesystemwatcher_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQFileSystemWatcher_Metacall_IsBase(bool value) const { qfilesystemwatcher_metacall_isbase = value; }
    inline void setQFileSystemWatcher_Event_IsBase(bool value) const { qfilesystemwatcher_event_isbase = value; }
    inline void setQFileSystemWatcher_EventFilter_IsBase(bool value) const { qfilesystemwatcher_eventfilter_isbase = value; }
    inline void setQFileSystemWatcher_TimerEvent_IsBase(bool value) const { qfilesystemwatcher_timerevent_isbase = value; }
    inline void setQFileSystemWatcher_ChildEvent_IsBase(bool value) const { qfilesystemwatcher_childevent_isbase = value; }
    inline void setQFileSystemWatcher_CustomEvent_IsBase(bool value) const { qfilesystemwatcher_customevent_isbase = value; }
    inline void setQFileSystemWatcher_ConnectNotify_IsBase(bool value) const { qfilesystemwatcher_connectnotify_isbase = value; }
    inline void setQFileSystemWatcher_DisconnectNotify_IsBase(bool value) const { qfilesystemwatcher_disconnectnotify_isbase = value; }
    inline void setQFileSystemWatcher_Sender_IsBase(bool value) const { qfilesystemwatcher_sender_isbase = value; }
    inline void setQFileSystemWatcher_SenderSignalIndex_IsBase(bool value) const { qfilesystemwatcher_sendersignalindex_isbase = value; }
    inline void setQFileSystemWatcher_Receivers_IsBase(bool value) const { qfilesystemwatcher_receivers_isbase = value; }
    inline void setQFileSystemWatcher_IsSignalConnected_IsBase(bool value) const { qfilesystemwatcher_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfilesystemwatcher_metacall_isbase) {
            qfilesystemwatcher_metacall_isbase = false;
            return QFileSystemWatcher::qt_metacall(param1, param2, param3);
        } else if (qfilesystemwatcher_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qfilesystemwatcher_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QFileSystemWatcher::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfilesystemwatcher_event_isbase) {
            qfilesystemwatcher_event_isbase = false;
            return QFileSystemWatcher::event(event);
        } else if (qfilesystemwatcher_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qfilesystemwatcher_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFileSystemWatcher::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfilesystemwatcher_eventfilter_isbase) {
            qfilesystemwatcher_eventfilter_isbase = false;
            return QFileSystemWatcher::eventFilter(watched, event);
        } else if (qfilesystemwatcher_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qfilesystemwatcher_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFileSystemWatcher::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfilesystemwatcher_timerevent_isbase) {
            qfilesystemwatcher_timerevent_isbase = false;
            QFileSystemWatcher::timerEvent(event);
        } else if (qfilesystemwatcher_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qfilesystemwatcher_timerevent_callback(this, cbval1);
        } else {
            QFileSystemWatcher::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfilesystemwatcher_childevent_isbase) {
            qfilesystemwatcher_childevent_isbase = false;
            QFileSystemWatcher::childEvent(event);
        } else if (qfilesystemwatcher_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qfilesystemwatcher_childevent_callback(this, cbval1);
        } else {
            QFileSystemWatcher::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfilesystemwatcher_customevent_isbase) {
            qfilesystemwatcher_customevent_isbase = false;
            QFileSystemWatcher::customEvent(event);
        } else if (qfilesystemwatcher_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qfilesystemwatcher_customevent_callback(this, cbval1);
        } else {
            QFileSystemWatcher::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfilesystemwatcher_connectnotify_isbase) {
            qfilesystemwatcher_connectnotify_isbase = false;
            QFileSystemWatcher::connectNotify(signal);
        } else if (qfilesystemwatcher_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfilesystemwatcher_connectnotify_callback(this, cbval1);
        } else {
            QFileSystemWatcher::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfilesystemwatcher_disconnectnotify_isbase) {
            qfilesystemwatcher_disconnectnotify_isbase = false;
            QFileSystemWatcher::disconnectNotify(signal);
        } else if (qfilesystemwatcher_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfilesystemwatcher_disconnectnotify_callback(this, cbval1);
        } else {
            QFileSystemWatcher::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfilesystemwatcher_sender_isbase) {
            qfilesystemwatcher_sender_isbase = false;
            return QFileSystemWatcher::sender();
        } else if (qfilesystemwatcher_sender_callback != nullptr) {
            QObject* callback_ret = qfilesystemwatcher_sender_callback();
            return callback_ret;
        } else {
            return QFileSystemWatcher::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfilesystemwatcher_sendersignalindex_isbase) {
            qfilesystemwatcher_sendersignalindex_isbase = false;
            return QFileSystemWatcher::senderSignalIndex();
        } else if (qfilesystemwatcher_sendersignalindex_callback != nullptr) {
            int callback_ret = qfilesystemwatcher_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFileSystemWatcher::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfilesystemwatcher_receivers_isbase) {
            qfilesystemwatcher_receivers_isbase = false;
            return QFileSystemWatcher::receivers(signal);
        } else if (qfilesystemwatcher_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qfilesystemwatcher_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFileSystemWatcher::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfilesystemwatcher_issignalconnected_isbase) {
            qfilesystemwatcher_issignalconnected_isbase = false;
            return QFileSystemWatcher::isSignalConnected(signal);
        } else if (qfilesystemwatcher_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qfilesystemwatcher_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFileSystemWatcher::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QFileSystemWatcher_TimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
    friend void QFileSystemWatcher_QBaseTimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
    friend void QFileSystemWatcher_ChildEvent(QFileSystemWatcher* self, QChildEvent* event);
    friend void QFileSystemWatcher_QBaseChildEvent(QFileSystemWatcher* self, QChildEvent* event);
    friend void QFileSystemWatcher_CustomEvent(QFileSystemWatcher* self, QEvent* event);
    friend void QFileSystemWatcher_QBaseCustomEvent(QFileSystemWatcher* self, QEvent* event);
    friend void QFileSystemWatcher_ConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_QBaseConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_DisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_QBaseDisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend QObject* QFileSystemWatcher_Sender(const QFileSystemWatcher* self);
    friend QObject* QFileSystemWatcher_QBaseSender(const QFileSystemWatcher* self);
    friend int QFileSystemWatcher_SenderSignalIndex(const QFileSystemWatcher* self);
    friend int QFileSystemWatcher_QBaseSenderSignalIndex(const QFileSystemWatcher* self);
    friend int QFileSystemWatcher_Receivers(const QFileSystemWatcher* self, const char* signal);
    friend int QFileSystemWatcher_QBaseReceivers(const QFileSystemWatcher* self, const char* signal);
    friend bool QFileSystemWatcher_IsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal);
    friend bool QFileSystemWatcher_QBaseIsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal);
};

#endif
