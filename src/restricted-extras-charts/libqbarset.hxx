#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBARSET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarSet so that we can call protected methods
class VirtualQBarSet final : public QBarSet {

  public:
    // Virtual class boolean flag
    bool isVirtualQBarSet = true;

    // Virtual class public types (including callbacks)
    using QBarSet_MetaObject_Callback = QMetaObject* (*)();
    using QBarSet_Metacast_Callback = void* (*)(QBarSet*, const char*);
    using QBarSet_Metacall_Callback = int (*)(QBarSet*, int, int, void**);
    using QBarSet_Event_Callback = bool (*)(QBarSet*, QEvent*);
    using QBarSet_EventFilter_Callback = bool (*)(QBarSet*, QObject*, QEvent*);
    using QBarSet_TimerEvent_Callback = void (*)(QBarSet*, QTimerEvent*);
    using QBarSet_ChildEvent_Callback = void (*)(QBarSet*, QChildEvent*);
    using QBarSet_CustomEvent_Callback = void (*)(QBarSet*, QEvent*);
    using QBarSet_ConnectNotify_Callback = void (*)(QBarSet*, QMetaMethod*);
    using QBarSet_DisconnectNotify_Callback = void (*)(QBarSet*, QMetaMethod*);
    using QBarSet_Sender_Callback = QObject* (*)();
    using QBarSet_SenderSignalIndex_Callback = int (*)();
    using QBarSet_Receivers_Callback = int (*)(const QBarSet*, const char*);
    using QBarSet_IsSignalConnected_Callback = bool (*)(const QBarSet*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBarSet_MetaObject_Callback qbarset_metaobject_callback = nullptr;
    QBarSet_Metacast_Callback qbarset_metacast_callback = nullptr;
    QBarSet_Metacall_Callback qbarset_metacall_callback = nullptr;
    QBarSet_Event_Callback qbarset_event_callback = nullptr;
    QBarSet_EventFilter_Callback qbarset_eventfilter_callback = nullptr;
    QBarSet_TimerEvent_Callback qbarset_timerevent_callback = nullptr;
    QBarSet_ChildEvent_Callback qbarset_childevent_callback = nullptr;
    QBarSet_CustomEvent_Callback qbarset_customevent_callback = nullptr;
    QBarSet_ConnectNotify_Callback qbarset_connectnotify_callback = nullptr;
    QBarSet_DisconnectNotify_Callback qbarset_disconnectnotify_callback = nullptr;
    QBarSet_Sender_Callback qbarset_sender_callback = nullptr;
    QBarSet_SenderSignalIndex_Callback qbarset_sendersignalindex_callback = nullptr;
    QBarSet_Receivers_Callback qbarset_receivers_callback = nullptr;
    QBarSet_IsSignalConnected_Callback qbarset_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbarset_metaobject_isbase = false;
    mutable bool qbarset_metacast_isbase = false;
    mutable bool qbarset_metacall_isbase = false;
    mutable bool qbarset_event_isbase = false;
    mutable bool qbarset_eventfilter_isbase = false;
    mutable bool qbarset_timerevent_isbase = false;
    mutable bool qbarset_childevent_isbase = false;
    mutable bool qbarset_customevent_isbase = false;
    mutable bool qbarset_connectnotify_isbase = false;
    mutable bool qbarset_disconnectnotify_isbase = false;
    mutable bool qbarset_sender_isbase = false;
    mutable bool qbarset_sendersignalindex_isbase = false;
    mutable bool qbarset_receivers_isbase = false;
    mutable bool qbarset_issignalconnected_isbase = false;

  public:
    VirtualQBarSet(const QString label) : QBarSet(label) {};
    VirtualQBarSet(const QString label, QObject* parent) : QBarSet(label, parent) {};

    // Callback setters
    inline void setQBarSet_MetaObject_Callback(QBarSet_MetaObject_Callback cb) { qbarset_metaobject_callback = cb; }
    inline void setQBarSet_Metacast_Callback(QBarSet_Metacast_Callback cb) { qbarset_metacast_callback = cb; }
    inline void setQBarSet_Metacall_Callback(QBarSet_Metacall_Callback cb) { qbarset_metacall_callback = cb; }
    inline void setQBarSet_Event_Callback(QBarSet_Event_Callback cb) { qbarset_event_callback = cb; }
    inline void setQBarSet_EventFilter_Callback(QBarSet_EventFilter_Callback cb) { qbarset_eventfilter_callback = cb; }
    inline void setQBarSet_TimerEvent_Callback(QBarSet_TimerEvent_Callback cb) { qbarset_timerevent_callback = cb; }
    inline void setQBarSet_ChildEvent_Callback(QBarSet_ChildEvent_Callback cb) { qbarset_childevent_callback = cb; }
    inline void setQBarSet_CustomEvent_Callback(QBarSet_CustomEvent_Callback cb) { qbarset_customevent_callback = cb; }
    inline void setQBarSet_ConnectNotify_Callback(QBarSet_ConnectNotify_Callback cb) { qbarset_connectnotify_callback = cb; }
    inline void setQBarSet_DisconnectNotify_Callback(QBarSet_DisconnectNotify_Callback cb) { qbarset_disconnectnotify_callback = cb; }
    inline void setQBarSet_Sender_Callback(QBarSet_Sender_Callback cb) { qbarset_sender_callback = cb; }
    inline void setQBarSet_SenderSignalIndex_Callback(QBarSet_SenderSignalIndex_Callback cb) { qbarset_sendersignalindex_callback = cb; }
    inline void setQBarSet_Receivers_Callback(QBarSet_Receivers_Callback cb) { qbarset_receivers_callback = cb; }
    inline void setQBarSet_IsSignalConnected_Callback(QBarSet_IsSignalConnected_Callback cb) { qbarset_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBarSet_MetaObject_IsBase(bool value) const { qbarset_metaobject_isbase = value; }
    inline void setQBarSet_Metacast_IsBase(bool value) const { qbarset_metacast_isbase = value; }
    inline void setQBarSet_Metacall_IsBase(bool value) const { qbarset_metacall_isbase = value; }
    inline void setQBarSet_Event_IsBase(bool value) const { qbarset_event_isbase = value; }
    inline void setQBarSet_EventFilter_IsBase(bool value) const { qbarset_eventfilter_isbase = value; }
    inline void setQBarSet_TimerEvent_IsBase(bool value) const { qbarset_timerevent_isbase = value; }
    inline void setQBarSet_ChildEvent_IsBase(bool value) const { qbarset_childevent_isbase = value; }
    inline void setQBarSet_CustomEvent_IsBase(bool value) const { qbarset_customevent_isbase = value; }
    inline void setQBarSet_ConnectNotify_IsBase(bool value) const { qbarset_connectnotify_isbase = value; }
    inline void setQBarSet_DisconnectNotify_IsBase(bool value) const { qbarset_disconnectnotify_isbase = value; }
    inline void setQBarSet_Sender_IsBase(bool value) const { qbarset_sender_isbase = value; }
    inline void setQBarSet_SenderSignalIndex_IsBase(bool value) const { qbarset_sendersignalindex_isbase = value; }
    inline void setQBarSet_Receivers_IsBase(bool value) const { qbarset_receivers_isbase = value; }
    inline void setQBarSet_IsSignalConnected_IsBase(bool value) const { qbarset_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbarset_metaobject_isbase) {
            qbarset_metaobject_isbase = false;
            return QBarSet::metaObject();
        }
        auto metaobject_cb = qbarset_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBarSet::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbarset_metacast_isbase) {
            qbarset_metacast_isbase = false;
            return QBarSet::qt_metacast(param1);
        }
        auto metacast_cb = qbarset_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBarSet::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarset_metacall_isbase) {
            qbarset_metacall_isbase = false;
            return QBarSet::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbarset_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarSet::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarset_event_isbase) {
            qbarset_event_isbase = false;
            return QBarSet::event(event);
        }
        auto event_cb = qbarset_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBarSet::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarset_eventfilter_isbase) {
            qbarset_eventfilter_isbase = false;
            return QBarSet::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbarset_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarSet::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarset_timerevent_isbase) {
            qbarset_timerevent_isbase = false;
            QBarSet::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbarset_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBarSet::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarset_childevent_isbase) {
            qbarset_childevent_isbase = false;
            QBarSet::childEvent(event);
            return;
        }
        auto childevent_cb = qbarset_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBarSet::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarset_customevent_isbase) {
            qbarset_customevent_isbase = false;
            QBarSet::customEvent(event);
            return;
        }
        auto customevent_cb = qbarset_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBarSet::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarset_connectnotify_isbase) {
            qbarset_connectnotify_isbase = false;
            QBarSet::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbarset_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBarSet::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarset_disconnectnotify_isbase) {
            qbarset_disconnectnotify_isbase = false;
            QBarSet::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbarset_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBarSet::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbarset_sender_isbase) {
            qbarset_sender_isbase = false;
            return QBarSet::sender();
        }
        auto sender_cb = qbarset_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBarSet::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbarset_sendersignalindex_isbase) {
            qbarset_sendersignalindex_isbase = false;
            return QBarSet::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbarset_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBarSet::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbarset_receivers_isbase) {
            qbarset_receivers_isbase = false;
            return QBarSet::receivers(signal);
        }
        auto receivers_cb = qbarset_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBarSet::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbarset_issignalconnected_isbase) {
            qbarset_issignalconnected_isbase = false;
            return QBarSet::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbarset_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBarSet::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBarSet_TimerEvent(QBarSet* self, QTimerEvent* event);
    friend void QBarSet_SuperTimerEvent(QBarSet* self, QTimerEvent* event);
    friend void QBarSet_ChildEvent(QBarSet* self, QChildEvent* event);
    friend void QBarSet_SuperChildEvent(QBarSet* self, QChildEvent* event);
    friend void QBarSet_CustomEvent(QBarSet* self, QEvent* event);
    friend void QBarSet_SuperCustomEvent(QBarSet* self, QEvent* event);
    friend void QBarSet_ConnectNotify(QBarSet* self, const QMetaMethod* signal);
    friend void QBarSet_SuperConnectNotify(QBarSet* self, const QMetaMethod* signal);
    friend void QBarSet_DisconnectNotify(QBarSet* self, const QMetaMethod* signal);
    friend void QBarSet_SuperDisconnectNotify(QBarSet* self, const QMetaMethod* signal);
    friend QObject* QBarSet_Sender(const QBarSet* self);
    friend QObject* QBarSet_SuperSender(const QBarSet* self);
    friend int QBarSet_SenderSignalIndex(const QBarSet* self);
    friend int QBarSet_SuperSenderSignalIndex(const QBarSet* self);
    friend int QBarSet_Receivers(const QBarSet* self, const char* signal);
    friend int QBarSet_SuperReceivers(const QBarSet* self, const char* signal);
    friend bool QBarSet_IsSignalConnected(const QBarSet* self, const QMetaMethod* signal);
    friend bool QBarSet_SuperIsSignalConnected(const QBarSet* self, const QMetaMethod* signal);
};

#endif
