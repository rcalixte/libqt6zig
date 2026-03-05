#pragma once
#ifndef SRCC_LIBVIRTUALQFILESYSTEMWATCHER_H
#define SRCC_LIBVIRTUALQFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSystemWatcher so that we can call protected methods
class VirtualQFileSystemWatcher final : public QFileSystemWatcher {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileSystemWatcher = true;

    // Virtual class public types (including callbacks)
    using QFileSystemWatcher_MetaObject_Callback = QMetaObject* (*)();
    using QFileSystemWatcher_Metacast_Callback = void* (*)(QFileSystemWatcher*, const char*);
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
    QFileSystemWatcher_MetaObject_Callback qfilesystemwatcher_metaobject_callback = nullptr;
    QFileSystemWatcher_Metacast_Callback qfilesystemwatcher_metacast_callback = nullptr;
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
    mutable bool qfilesystemwatcher_metaobject_isbase = false;
    mutable bool qfilesystemwatcher_metacast_isbase = false;
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
    VirtualQFileSystemWatcher() : QFileSystemWatcher() {};
    VirtualQFileSystemWatcher(const QList<QString>& paths) : QFileSystemWatcher(paths) {};
    VirtualQFileSystemWatcher(QObject* parent) : QFileSystemWatcher(parent) {};
    VirtualQFileSystemWatcher(const QList<QString>& paths, QObject* parent) : QFileSystemWatcher(paths, parent) {};

    // Callback setters
    inline void setQFileSystemWatcher_MetaObject_Callback(QFileSystemWatcher_MetaObject_Callback cb) { qfilesystemwatcher_metaobject_callback = cb; }
    inline void setQFileSystemWatcher_Metacast_Callback(QFileSystemWatcher_Metacast_Callback cb) { qfilesystemwatcher_metacast_callback = cb; }
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
    inline void setQFileSystemWatcher_MetaObject_IsBase(bool value) const { qfilesystemwatcher_metaobject_isbase = value; }
    inline void setQFileSystemWatcher_Metacast_IsBase(bool value) const { qfilesystemwatcher_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qfilesystemwatcher_metaobject_isbase) {
            qfilesystemwatcher_metaobject_isbase = false;
            return QFileSystemWatcher::metaObject();
        }
        auto metaobject_cb = qfilesystemwatcher_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QFileSystemWatcher::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfilesystemwatcher_metacast_isbase) {
            qfilesystemwatcher_metacast_isbase = false;
            return QFileSystemWatcher::qt_metacast(param1);
        }
        auto metacast_cb = qfilesystemwatcher_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemWatcher::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfilesystemwatcher_metacall_isbase) {
            qfilesystemwatcher_metacall_isbase = false;
            return QFileSystemWatcher::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qfilesystemwatcher_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemWatcher::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfilesystemwatcher_event_isbase) {
            qfilesystemwatcher_event_isbase = false;
            return QFileSystemWatcher::event(event);
        }
        auto event_cb = qfilesystemwatcher_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemWatcher::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfilesystemwatcher_eventfilter_isbase) {
            qfilesystemwatcher_eventfilter_isbase = false;
            return QFileSystemWatcher::eventFilter(watched, event);
        }
        auto eventfilter_cb = qfilesystemwatcher_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileSystemWatcher::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfilesystemwatcher_timerevent_isbase) {
            qfilesystemwatcher_timerevent_isbase = false;
            QFileSystemWatcher::timerEvent(event);
            return;
        }
        auto timerevent_cb = qfilesystemwatcher_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QFileSystemWatcher::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfilesystemwatcher_childevent_isbase) {
            qfilesystemwatcher_childevent_isbase = false;
            QFileSystemWatcher::childEvent(event);
            return;
        }
        auto childevent_cb = qfilesystemwatcher_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QFileSystemWatcher::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfilesystemwatcher_customevent_isbase) {
            qfilesystemwatcher_customevent_isbase = false;
            QFileSystemWatcher::customEvent(event);
            return;
        }
        auto customevent_cb = qfilesystemwatcher_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QFileSystemWatcher::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfilesystemwatcher_connectnotify_isbase) {
            qfilesystemwatcher_connectnotify_isbase = false;
            QFileSystemWatcher::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qfilesystemwatcher_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QFileSystemWatcher::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfilesystemwatcher_disconnectnotify_isbase) {
            qfilesystemwatcher_disconnectnotify_isbase = false;
            QFileSystemWatcher::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qfilesystemwatcher_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QFileSystemWatcher::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfilesystemwatcher_sender_isbase) {
            qfilesystemwatcher_sender_isbase = false;
            return QFileSystemWatcher::sender();
        }
        auto sender_cb = qfilesystemwatcher_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QFileSystemWatcher::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfilesystemwatcher_sendersignalindex_isbase) {
            qfilesystemwatcher_sendersignalindex_isbase = false;
            return QFileSystemWatcher::senderSignalIndex();
        }
        auto sendersignalindex_cb = qfilesystemwatcher_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QFileSystemWatcher::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfilesystemwatcher_receivers_isbase) {
            qfilesystemwatcher_receivers_isbase = false;
            return QFileSystemWatcher::receivers(signal);
        }
        auto receivers_cb = qfilesystemwatcher_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemWatcher::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfilesystemwatcher_issignalconnected_isbase) {
            qfilesystemwatcher_issignalconnected_isbase = false;
            return QFileSystemWatcher::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qfilesystemwatcher_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QFileSystemWatcher::isSignalConnected(signal);
    }

    // Friend functions
    friend void QFileSystemWatcher_TimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
    friend void QFileSystemWatcher_SuperTimerEvent(QFileSystemWatcher* self, QTimerEvent* event);
    friend void QFileSystemWatcher_ChildEvent(QFileSystemWatcher* self, QChildEvent* event);
    friend void QFileSystemWatcher_SuperChildEvent(QFileSystemWatcher* self, QChildEvent* event);
    friend void QFileSystemWatcher_CustomEvent(QFileSystemWatcher* self, QEvent* event);
    friend void QFileSystemWatcher_SuperCustomEvent(QFileSystemWatcher* self, QEvent* event);
    friend void QFileSystemWatcher_ConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_SuperConnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_DisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend void QFileSystemWatcher_SuperDisconnectNotify(QFileSystemWatcher* self, const QMetaMethod* signal);
    friend QObject* QFileSystemWatcher_Sender(const QFileSystemWatcher* self);
    friend QObject* QFileSystemWatcher_SuperSender(const QFileSystemWatcher* self);
    friend int QFileSystemWatcher_SenderSignalIndex(const QFileSystemWatcher* self);
    friend int QFileSystemWatcher_SuperSenderSignalIndex(const QFileSystemWatcher* self);
    friend int QFileSystemWatcher_Receivers(const QFileSystemWatcher* self, const char* signal);
    friend int QFileSystemWatcher_SuperReceivers(const QFileSystemWatcher* self, const char* signal);
    friend bool QFileSystemWatcher_IsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal);
    friend bool QFileSystemWatcher_SuperIsSignalConnected(const QFileSystemWatcher* self, const QMetaMethod* signal);
};

#endif
