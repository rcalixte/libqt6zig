#pragma once
#ifndef SRCC_LIBVIRTUALQSHORTCUT_H
#define SRCC_LIBVIRTUALQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QShortcut so that we can call protected methods
class VirtualQShortcut final : public QShortcut {

  public:
    // Virtual class boolean flag
    bool isVirtualQShortcut = true;

    // Virtual class public types (including callbacks)
    using QShortcut_MetaObject_Callback = QMetaObject* (*)();
    using QShortcut_Metacast_Callback = void* (*)(QShortcut*, const char*);
    using QShortcut_Metacall_Callback = int (*)(QShortcut*, int, int, void**);
    using QShortcut_Event_Callback = bool (*)(QShortcut*, QEvent*);
    using QShortcut_EventFilter_Callback = bool (*)(QShortcut*, QObject*, QEvent*);
    using QShortcut_TimerEvent_Callback = void (*)(QShortcut*, QTimerEvent*);
    using QShortcut_ChildEvent_Callback = void (*)(QShortcut*, QChildEvent*);
    using QShortcut_CustomEvent_Callback = void (*)(QShortcut*, QEvent*);
    using QShortcut_ConnectNotify_Callback = void (*)(QShortcut*, QMetaMethod*);
    using QShortcut_DisconnectNotify_Callback = void (*)(QShortcut*, QMetaMethod*);
    using QShortcut_Sender_Callback = QObject* (*)();
    using QShortcut_SenderSignalIndex_Callback = int (*)();
    using QShortcut_Receivers_Callback = int (*)(const QShortcut*, const char*);
    using QShortcut_IsSignalConnected_Callback = bool (*)(const QShortcut*, QMetaMethod*);

  protected:
    // Instance callback storage
    QShortcut_MetaObject_Callback qshortcut_metaobject_callback = nullptr;
    QShortcut_Metacast_Callback qshortcut_metacast_callback = nullptr;
    QShortcut_Metacall_Callback qshortcut_metacall_callback = nullptr;
    QShortcut_Event_Callback qshortcut_event_callback = nullptr;
    QShortcut_EventFilter_Callback qshortcut_eventfilter_callback = nullptr;
    QShortcut_TimerEvent_Callback qshortcut_timerevent_callback = nullptr;
    QShortcut_ChildEvent_Callback qshortcut_childevent_callback = nullptr;
    QShortcut_CustomEvent_Callback qshortcut_customevent_callback = nullptr;
    QShortcut_ConnectNotify_Callback qshortcut_connectnotify_callback = nullptr;
    QShortcut_DisconnectNotify_Callback qshortcut_disconnectnotify_callback = nullptr;
    QShortcut_Sender_Callback qshortcut_sender_callback = nullptr;
    QShortcut_SenderSignalIndex_Callback qshortcut_sendersignalindex_callback = nullptr;
    QShortcut_Receivers_Callback qshortcut_receivers_callback = nullptr;
    QShortcut_IsSignalConnected_Callback qshortcut_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qshortcut_metaobject_isbase = false;
    mutable bool qshortcut_metacast_isbase = false;
    mutable bool qshortcut_metacall_isbase = false;
    mutable bool qshortcut_event_isbase = false;
    mutable bool qshortcut_eventfilter_isbase = false;
    mutable bool qshortcut_timerevent_isbase = false;
    mutable bool qshortcut_childevent_isbase = false;
    mutable bool qshortcut_customevent_isbase = false;
    mutable bool qshortcut_connectnotify_isbase = false;
    mutable bool qshortcut_disconnectnotify_isbase = false;
    mutable bool qshortcut_sender_isbase = false;
    mutable bool qshortcut_sendersignalindex_isbase = false;
    mutable bool qshortcut_receivers_isbase = false;
    mutable bool qshortcut_issignalconnected_isbase = false;

  public:
    VirtualQShortcut(QObject* parent) : QShortcut(parent) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent) : QShortcut(key, parent) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent) : QShortcut(key, parent) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member) : QShortcut(key, parent, member) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember) : QShortcut(key, parent, member, ambiguousMember) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member) : QShortcut(key, parent, member) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember) : QShortcut(key, parent, member, ambiguousMember) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context) {};

    // Callback setters
    inline void setQShortcut_MetaObject_Callback(QShortcut_MetaObject_Callback cb) { qshortcut_metaobject_callback = cb; }
    inline void setQShortcut_Metacast_Callback(QShortcut_Metacast_Callback cb) { qshortcut_metacast_callback = cb; }
    inline void setQShortcut_Metacall_Callback(QShortcut_Metacall_Callback cb) { qshortcut_metacall_callback = cb; }
    inline void setQShortcut_Event_Callback(QShortcut_Event_Callback cb) { qshortcut_event_callback = cb; }
    inline void setQShortcut_EventFilter_Callback(QShortcut_EventFilter_Callback cb) { qshortcut_eventfilter_callback = cb; }
    inline void setQShortcut_TimerEvent_Callback(QShortcut_TimerEvent_Callback cb) { qshortcut_timerevent_callback = cb; }
    inline void setQShortcut_ChildEvent_Callback(QShortcut_ChildEvent_Callback cb) { qshortcut_childevent_callback = cb; }
    inline void setQShortcut_CustomEvent_Callback(QShortcut_CustomEvent_Callback cb) { qshortcut_customevent_callback = cb; }
    inline void setQShortcut_ConnectNotify_Callback(QShortcut_ConnectNotify_Callback cb) { qshortcut_connectnotify_callback = cb; }
    inline void setQShortcut_DisconnectNotify_Callback(QShortcut_DisconnectNotify_Callback cb) { qshortcut_disconnectnotify_callback = cb; }
    inline void setQShortcut_Sender_Callback(QShortcut_Sender_Callback cb) { qshortcut_sender_callback = cb; }
    inline void setQShortcut_SenderSignalIndex_Callback(QShortcut_SenderSignalIndex_Callback cb) { qshortcut_sendersignalindex_callback = cb; }
    inline void setQShortcut_Receivers_Callback(QShortcut_Receivers_Callback cb) { qshortcut_receivers_callback = cb; }
    inline void setQShortcut_IsSignalConnected_Callback(QShortcut_IsSignalConnected_Callback cb) { qshortcut_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQShortcut_MetaObject_IsBase(bool value) const { qshortcut_metaobject_isbase = value; }
    inline void setQShortcut_Metacast_IsBase(bool value) const { qshortcut_metacast_isbase = value; }
    inline void setQShortcut_Metacall_IsBase(bool value) const { qshortcut_metacall_isbase = value; }
    inline void setQShortcut_Event_IsBase(bool value) const { qshortcut_event_isbase = value; }
    inline void setQShortcut_EventFilter_IsBase(bool value) const { qshortcut_eventfilter_isbase = value; }
    inline void setQShortcut_TimerEvent_IsBase(bool value) const { qshortcut_timerevent_isbase = value; }
    inline void setQShortcut_ChildEvent_IsBase(bool value) const { qshortcut_childevent_isbase = value; }
    inline void setQShortcut_CustomEvent_IsBase(bool value) const { qshortcut_customevent_isbase = value; }
    inline void setQShortcut_ConnectNotify_IsBase(bool value) const { qshortcut_connectnotify_isbase = value; }
    inline void setQShortcut_DisconnectNotify_IsBase(bool value) const { qshortcut_disconnectnotify_isbase = value; }
    inline void setQShortcut_Sender_IsBase(bool value) const { qshortcut_sender_isbase = value; }
    inline void setQShortcut_SenderSignalIndex_IsBase(bool value) const { qshortcut_sendersignalindex_isbase = value; }
    inline void setQShortcut_Receivers_IsBase(bool value) const { qshortcut_receivers_isbase = value; }
    inline void setQShortcut_IsSignalConnected_IsBase(bool value) const { qshortcut_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qshortcut_metaobject_isbase) {
            qshortcut_metaobject_isbase = false;
            return QShortcut::metaObject();
        }
        auto metaobject_cb = qshortcut_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QShortcut::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qshortcut_metacast_isbase) {
            qshortcut_metacast_isbase = false;
            return QShortcut::qt_metacast(param1);
        }
        auto metacast_cb = qshortcut_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QShortcut::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qshortcut_metacall_isbase) {
            qshortcut_metacall_isbase = false;
            return QShortcut::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qshortcut_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QShortcut::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qshortcut_event_isbase) {
            qshortcut_event_isbase = false;
            return QShortcut::event(e);
        }
        auto event_cb = qshortcut_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QShortcut::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qshortcut_eventfilter_isbase) {
            qshortcut_eventfilter_isbase = false;
            return QShortcut::eventFilter(watched, event);
        }
        auto eventfilter_cb = qshortcut_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QShortcut::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qshortcut_timerevent_isbase) {
            qshortcut_timerevent_isbase = false;
            QShortcut::timerEvent(event);
            return;
        }
        auto timerevent_cb = qshortcut_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QShortcut::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qshortcut_childevent_isbase) {
            qshortcut_childevent_isbase = false;
            QShortcut::childEvent(event);
            return;
        }
        auto childevent_cb = qshortcut_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QShortcut::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qshortcut_customevent_isbase) {
            qshortcut_customevent_isbase = false;
            QShortcut::customEvent(event);
            return;
        }
        auto customevent_cb = qshortcut_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QShortcut::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qshortcut_connectnotify_isbase) {
            qshortcut_connectnotify_isbase = false;
            QShortcut::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qshortcut_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QShortcut::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qshortcut_disconnectnotify_isbase) {
            qshortcut_disconnectnotify_isbase = false;
            QShortcut::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qshortcut_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QShortcut::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qshortcut_sender_isbase) {
            qshortcut_sender_isbase = false;
            return QShortcut::sender();
        }
        auto sender_cb = qshortcut_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QShortcut::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qshortcut_sendersignalindex_isbase) {
            qshortcut_sendersignalindex_isbase = false;
            return QShortcut::senderSignalIndex();
        }
        auto sendersignalindex_cb = qshortcut_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QShortcut::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qshortcut_receivers_isbase) {
            qshortcut_receivers_isbase = false;
            return QShortcut::receivers(signal);
        }
        auto receivers_cb = qshortcut_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QShortcut::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qshortcut_issignalconnected_isbase) {
            qshortcut_issignalconnected_isbase = false;
            return QShortcut::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qshortcut_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QShortcut::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QShortcut_Event(QShortcut* self, QEvent* e);
    friend bool QShortcut_SuperEvent(QShortcut* self, QEvent* e);
    friend void QShortcut_TimerEvent(QShortcut* self, QTimerEvent* event);
    friend void QShortcut_SuperTimerEvent(QShortcut* self, QTimerEvent* event);
    friend void QShortcut_ChildEvent(QShortcut* self, QChildEvent* event);
    friend void QShortcut_SuperChildEvent(QShortcut* self, QChildEvent* event);
    friend void QShortcut_CustomEvent(QShortcut* self, QEvent* event);
    friend void QShortcut_SuperCustomEvent(QShortcut* self, QEvent* event);
    friend void QShortcut_ConnectNotify(QShortcut* self, const QMetaMethod* signal);
    friend void QShortcut_SuperConnectNotify(QShortcut* self, const QMetaMethod* signal);
    friend void QShortcut_DisconnectNotify(QShortcut* self, const QMetaMethod* signal);
    friend void QShortcut_SuperDisconnectNotify(QShortcut* self, const QMetaMethod* signal);
    friend QObject* QShortcut_Sender(const QShortcut* self);
    friend QObject* QShortcut_SuperSender(const QShortcut* self);
    friend int QShortcut_SenderSignalIndex(const QShortcut* self);
    friend int QShortcut_SuperSenderSignalIndex(const QShortcut* self);
    friend int QShortcut_Receivers(const QShortcut* self, const char* signal);
    friend int QShortcut_SuperReceivers(const QShortcut* self, const char* signal);
    friend bool QShortcut_IsSignalConnected(const QShortcut* self, const QMetaMethod* signal);
    friend bool QShortcut_SuperIsSignalConnected(const QShortcut* self, const QMetaMethod* signal);
};

#endif
