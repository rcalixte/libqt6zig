#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQBOXSET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxSet so that we can call protected methods
class VirtualQBoxSet final : public QBoxSet {

  public:
    // Virtual class boolean flag
    bool isVirtualQBoxSet = true;

    // Virtual class public types (including callbacks)
    using QBoxSet_MetaObject_Callback = QMetaObject* (*)();
    using QBoxSet_Metacast_Callback = void* (*)(QBoxSet*, const char*);
    using QBoxSet_Metacall_Callback = int (*)(QBoxSet*, int, int, void**);
    using QBoxSet_Event_Callback = bool (*)(QBoxSet*, QEvent*);
    using QBoxSet_EventFilter_Callback = bool (*)(QBoxSet*, QObject*, QEvent*);
    using QBoxSet_TimerEvent_Callback = void (*)(QBoxSet*, QTimerEvent*);
    using QBoxSet_ChildEvent_Callback = void (*)(QBoxSet*, QChildEvent*);
    using QBoxSet_CustomEvent_Callback = void (*)(QBoxSet*, QEvent*);
    using QBoxSet_ConnectNotify_Callback = void (*)(QBoxSet*, QMetaMethod*);
    using QBoxSet_DisconnectNotify_Callback = void (*)(QBoxSet*, QMetaMethod*);
    using QBoxSet_Sender_Callback = QObject* (*)();
    using QBoxSet_SenderSignalIndex_Callback = int (*)();
    using QBoxSet_Receivers_Callback = int (*)(const QBoxSet*, const char*);
    using QBoxSet_IsSignalConnected_Callback = bool (*)(const QBoxSet*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBoxSet_MetaObject_Callback qboxset_metaobject_callback = nullptr;
    QBoxSet_Metacast_Callback qboxset_metacast_callback = nullptr;
    QBoxSet_Metacall_Callback qboxset_metacall_callback = nullptr;
    QBoxSet_Event_Callback qboxset_event_callback = nullptr;
    QBoxSet_EventFilter_Callback qboxset_eventfilter_callback = nullptr;
    QBoxSet_TimerEvent_Callback qboxset_timerevent_callback = nullptr;
    QBoxSet_ChildEvent_Callback qboxset_childevent_callback = nullptr;
    QBoxSet_CustomEvent_Callback qboxset_customevent_callback = nullptr;
    QBoxSet_ConnectNotify_Callback qboxset_connectnotify_callback = nullptr;
    QBoxSet_DisconnectNotify_Callback qboxset_disconnectnotify_callback = nullptr;
    QBoxSet_Sender_Callback qboxset_sender_callback = nullptr;
    QBoxSet_SenderSignalIndex_Callback qboxset_sendersignalindex_callback = nullptr;
    QBoxSet_Receivers_Callback qboxset_receivers_callback = nullptr;
    QBoxSet_IsSignalConnected_Callback qboxset_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qboxset_metaobject_isbase = false;
    mutable bool qboxset_metacast_isbase = false;
    mutable bool qboxset_metacall_isbase = false;
    mutable bool qboxset_event_isbase = false;
    mutable bool qboxset_eventfilter_isbase = false;
    mutable bool qboxset_timerevent_isbase = false;
    mutable bool qboxset_childevent_isbase = false;
    mutable bool qboxset_customevent_isbase = false;
    mutable bool qboxset_connectnotify_isbase = false;
    mutable bool qboxset_disconnectnotify_isbase = false;
    mutable bool qboxset_sender_isbase = false;
    mutable bool qboxset_sendersignalindex_isbase = false;
    mutable bool qboxset_receivers_isbase = false;
    mutable bool qboxset_issignalconnected_isbase = false;

  public:
    VirtualQBoxSet() : QBoxSet() {};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue) : QBoxSet(le, lq, m, uq, ue) {};
    VirtualQBoxSet(const QString label) : QBoxSet(label) {};
    VirtualQBoxSet(const QString label, QObject* parent) : QBoxSet(label, parent) {};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label) : QBoxSet(le, lq, m, uq, ue, label) {};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label, QObject* parent) : QBoxSet(le, lq, m, uq, ue, label, parent) {};

    // Callback setters
    inline void setQBoxSet_MetaObject_Callback(QBoxSet_MetaObject_Callback cb) { qboxset_metaobject_callback = cb; }
    inline void setQBoxSet_Metacast_Callback(QBoxSet_Metacast_Callback cb) { qboxset_metacast_callback = cb; }
    inline void setQBoxSet_Metacall_Callback(QBoxSet_Metacall_Callback cb) { qboxset_metacall_callback = cb; }
    inline void setQBoxSet_Event_Callback(QBoxSet_Event_Callback cb) { qboxset_event_callback = cb; }
    inline void setQBoxSet_EventFilter_Callback(QBoxSet_EventFilter_Callback cb) { qboxset_eventfilter_callback = cb; }
    inline void setQBoxSet_TimerEvent_Callback(QBoxSet_TimerEvent_Callback cb) { qboxset_timerevent_callback = cb; }
    inline void setQBoxSet_ChildEvent_Callback(QBoxSet_ChildEvent_Callback cb) { qboxset_childevent_callback = cb; }
    inline void setQBoxSet_CustomEvent_Callback(QBoxSet_CustomEvent_Callback cb) { qboxset_customevent_callback = cb; }
    inline void setQBoxSet_ConnectNotify_Callback(QBoxSet_ConnectNotify_Callback cb) { qboxset_connectnotify_callback = cb; }
    inline void setQBoxSet_DisconnectNotify_Callback(QBoxSet_DisconnectNotify_Callback cb) { qboxset_disconnectnotify_callback = cb; }
    inline void setQBoxSet_Sender_Callback(QBoxSet_Sender_Callback cb) { qboxset_sender_callback = cb; }
    inline void setQBoxSet_SenderSignalIndex_Callback(QBoxSet_SenderSignalIndex_Callback cb) { qboxset_sendersignalindex_callback = cb; }
    inline void setQBoxSet_Receivers_Callback(QBoxSet_Receivers_Callback cb) { qboxset_receivers_callback = cb; }
    inline void setQBoxSet_IsSignalConnected_Callback(QBoxSet_IsSignalConnected_Callback cb) { qboxset_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBoxSet_MetaObject_IsBase(bool value) const { qboxset_metaobject_isbase = value; }
    inline void setQBoxSet_Metacast_IsBase(bool value) const { qboxset_metacast_isbase = value; }
    inline void setQBoxSet_Metacall_IsBase(bool value) const { qboxset_metacall_isbase = value; }
    inline void setQBoxSet_Event_IsBase(bool value) const { qboxset_event_isbase = value; }
    inline void setQBoxSet_EventFilter_IsBase(bool value) const { qboxset_eventfilter_isbase = value; }
    inline void setQBoxSet_TimerEvent_IsBase(bool value) const { qboxset_timerevent_isbase = value; }
    inline void setQBoxSet_ChildEvent_IsBase(bool value) const { qboxset_childevent_isbase = value; }
    inline void setQBoxSet_CustomEvent_IsBase(bool value) const { qboxset_customevent_isbase = value; }
    inline void setQBoxSet_ConnectNotify_IsBase(bool value) const { qboxset_connectnotify_isbase = value; }
    inline void setQBoxSet_DisconnectNotify_IsBase(bool value) const { qboxset_disconnectnotify_isbase = value; }
    inline void setQBoxSet_Sender_IsBase(bool value) const { qboxset_sender_isbase = value; }
    inline void setQBoxSet_SenderSignalIndex_IsBase(bool value) const { qboxset_sendersignalindex_isbase = value; }
    inline void setQBoxSet_Receivers_IsBase(bool value) const { qboxset_receivers_isbase = value; }
    inline void setQBoxSet_IsSignalConnected_IsBase(bool value) const { qboxset_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qboxset_metaobject_isbase) {
            qboxset_metaobject_isbase = false;
            return QBoxSet::metaObject();
        }
        auto metaobject_cb = qboxset_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBoxSet::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qboxset_metacast_isbase) {
            qboxset_metacast_isbase = false;
            return QBoxSet::qt_metacast(param1);
        }
        auto metacast_cb = qboxset_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBoxSet::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxset_metacall_isbase) {
            qboxset_metacall_isbase = false;
            return QBoxSet::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qboxset_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBoxSet::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxset_event_isbase) {
            qboxset_event_isbase = false;
            return QBoxSet::event(event);
        }
        auto event_cb = qboxset_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBoxSet::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxset_eventfilter_isbase) {
            qboxset_eventfilter_isbase = false;
            return QBoxSet::eventFilter(watched, event);
        }
        auto eventfilter_cb = qboxset_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBoxSet::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxset_timerevent_isbase) {
            qboxset_timerevent_isbase = false;
            QBoxSet::timerEvent(event);
            return;
        }
        auto timerevent_cb = qboxset_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBoxSet::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxset_childevent_isbase) {
            qboxset_childevent_isbase = false;
            QBoxSet::childEvent(event);
            return;
        }
        auto childevent_cb = qboxset_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBoxSet::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxset_customevent_isbase) {
            qboxset_customevent_isbase = false;
            QBoxSet::customEvent(event);
            return;
        }
        auto customevent_cb = qboxset_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBoxSet::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxset_connectnotify_isbase) {
            qboxset_connectnotify_isbase = false;
            QBoxSet::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qboxset_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBoxSet::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxset_disconnectnotify_isbase) {
            qboxset_disconnectnotify_isbase = false;
            QBoxSet::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qboxset_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBoxSet::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qboxset_sender_isbase) {
            qboxset_sender_isbase = false;
            return QBoxSet::sender();
        }
        auto sender_cb = qboxset_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBoxSet::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qboxset_sendersignalindex_isbase) {
            qboxset_sendersignalindex_isbase = false;
            return QBoxSet::senderSignalIndex();
        }
        auto sendersignalindex_cb = qboxset_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBoxSet::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qboxset_receivers_isbase) {
            qboxset_receivers_isbase = false;
            return QBoxSet::receivers(signal);
        }
        auto receivers_cb = qboxset_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBoxSet::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qboxset_issignalconnected_isbase) {
            qboxset_issignalconnected_isbase = false;
            return QBoxSet::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qboxset_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBoxSet::isSignalConnected(signal);
    }

    // Friend functions
    friend void QBoxSet_TimerEvent(QBoxSet* self, QTimerEvent* event);
    friend void QBoxSet_SuperTimerEvent(QBoxSet* self, QTimerEvent* event);
    friend void QBoxSet_ChildEvent(QBoxSet* self, QChildEvent* event);
    friend void QBoxSet_SuperChildEvent(QBoxSet* self, QChildEvent* event);
    friend void QBoxSet_CustomEvent(QBoxSet* self, QEvent* event);
    friend void QBoxSet_SuperCustomEvent(QBoxSet* self, QEvent* event);
    friend void QBoxSet_ConnectNotify(QBoxSet* self, const QMetaMethod* signal);
    friend void QBoxSet_SuperConnectNotify(QBoxSet* self, const QMetaMethod* signal);
    friend void QBoxSet_DisconnectNotify(QBoxSet* self, const QMetaMethod* signal);
    friend void QBoxSet_SuperDisconnectNotify(QBoxSet* self, const QMetaMethod* signal);
    friend QObject* QBoxSet_Sender(const QBoxSet* self);
    friend QObject* QBoxSet_SuperSender(const QBoxSet* self);
    friend int QBoxSet_SenderSignalIndex(const QBoxSet* self);
    friend int QBoxSet_SuperSenderSignalIndex(const QBoxSet* self);
    friend int QBoxSet_Receivers(const QBoxSet* self, const char* signal);
    friend int QBoxSet_SuperReceivers(const QBoxSet* self, const char* signal);
    friend bool QBoxSet_IsSignalConnected(const QBoxSet* self, const QMetaMethod* signal);
    friend bool QBoxSet_SuperIsSignalConnected(const QBoxSet* self, const QMetaMethod* signal);
};

#endif
