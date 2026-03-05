#pragma once
#ifndef SRCC_LIBVIRTUALQCOREAPPLICATION_H
#define SRCC_LIBVIRTUALQCOREAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCoreApplication so that we can call protected methods
class VirtualQCoreApplication final : public QCoreApplication {

  public:
    // Virtual class boolean flag
    bool isVirtualQCoreApplication = true;

    // Virtual class public types (including callbacks)
    using QCoreApplication_MetaObject_Callback = QMetaObject* (*)();
    using QCoreApplication_Metacast_Callback = void* (*)(QCoreApplication*, const char*);
    using QCoreApplication_Metacall_Callback = int (*)(QCoreApplication*, int, int, void**);
    using QCoreApplication_Notify_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
    using QCoreApplication_Event_Callback = bool (*)(QCoreApplication*, QEvent*);
    using QCoreApplication_EventFilter_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
    using QCoreApplication_TimerEvent_Callback = void (*)(QCoreApplication*, QTimerEvent*);
    using QCoreApplication_ChildEvent_Callback = void (*)(QCoreApplication*, QChildEvent*);
    using QCoreApplication_CustomEvent_Callback = void (*)(QCoreApplication*, QEvent*);
    using QCoreApplication_ConnectNotify_Callback = void (*)(QCoreApplication*, QMetaMethod*);
    using QCoreApplication_DisconnectNotify_Callback = void (*)(QCoreApplication*, QMetaMethod*);
    using QCoreApplication_ResolveInterface_Callback = void* (*)(const QCoreApplication*, const char*, int);
    using QCoreApplication_Sender_Callback = QObject* (*)();
    using QCoreApplication_SenderSignalIndex_Callback = int (*)();
    using QCoreApplication_Receivers_Callback = int (*)(const QCoreApplication*, const char*);
    using QCoreApplication_IsSignalConnected_Callback = bool (*)(const QCoreApplication*, QMetaMethod*);

  protected:
    // Instance callback storage
    QCoreApplication_MetaObject_Callback qcoreapplication_metaobject_callback = nullptr;
    QCoreApplication_Metacast_Callback qcoreapplication_metacast_callback = nullptr;
    QCoreApplication_Metacall_Callback qcoreapplication_metacall_callback = nullptr;
    QCoreApplication_Notify_Callback qcoreapplication_notify_callback = nullptr;
    QCoreApplication_Event_Callback qcoreapplication_event_callback = nullptr;
    QCoreApplication_EventFilter_Callback qcoreapplication_eventfilter_callback = nullptr;
    QCoreApplication_TimerEvent_Callback qcoreapplication_timerevent_callback = nullptr;
    QCoreApplication_ChildEvent_Callback qcoreapplication_childevent_callback = nullptr;
    QCoreApplication_CustomEvent_Callback qcoreapplication_customevent_callback = nullptr;
    QCoreApplication_ConnectNotify_Callback qcoreapplication_connectnotify_callback = nullptr;
    QCoreApplication_DisconnectNotify_Callback qcoreapplication_disconnectnotify_callback = nullptr;
    QCoreApplication_ResolveInterface_Callback qcoreapplication_resolveinterface_callback = nullptr;
    QCoreApplication_Sender_Callback qcoreapplication_sender_callback = nullptr;
    QCoreApplication_SenderSignalIndex_Callback qcoreapplication_sendersignalindex_callback = nullptr;
    QCoreApplication_Receivers_Callback qcoreapplication_receivers_callback = nullptr;
    QCoreApplication_IsSignalConnected_Callback qcoreapplication_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcoreapplication_metaobject_isbase = false;
    mutable bool qcoreapplication_metacast_isbase = false;
    mutable bool qcoreapplication_metacall_isbase = false;
    mutable bool qcoreapplication_notify_isbase = false;
    mutable bool qcoreapplication_event_isbase = false;
    mutable bool qcoreapplication_eventfilter_isbase = false;
    mutable bool qcoreapplication_timerevent_isbase = false;
    mutable bool qcoreapplication_childevent_isbase = false;
    mutable bool qcoreapplication_customevent_isbase = false;
    mutable bool qcoreapplication_connectnotify_isbase = false;
    mutable bool qcoreapplication_disconnectnotify_isbase = false;
    mutable bool qcoreapplication_resolveinterface_isbase = false;
    mutable bool qcoreapplication_sender_isbase = false;
    mutable bool qcoreapplication_sendersignalindex_isbase = false;
    mutable bool qcoreapplication_receivers_isbase = false;
    mutable bool qcoreapplication_issignalconnected_isbase = false;

  public:
    VirtualQCoreApplication(int& argc, char** argv) : QCoreApplication(argc, argv) {};
    VirtualQCoreApplication(int& argc, char** argv, int param3) : QCoreApplication(argc, argv, param3) {};

    // Callback setters
    inline void setQCoreApplication_MetaObject_Callback(QCoreApplication_MetaObject_Callback cb) { qcoreapplication_metaobject_callback = cb; }
    inline void setQCoreApplication_Metacast_Callback(QCoreApplication_Metacast_Callback cb) { qcoreapplication_metacast_callback = cb; }
    inline void setQCoreApplication_Metacall_Callback(QCoreApplication_Metacall_Callback cb) { qcoreapplication_metacall_callback = cb; }
    inline void setQCoreApplication_Notify_Callback(QCoreApplication_Notify_Callback cb) { qcoreapplication_notify_callback = cb; }
    inline void setQCoreApplication_Event_Callback(QCoreApplication_Event_Callback cb) { qcoreapplication_event_callback = cb; }
    inline void setQCoreApplication_EventFilter_Callback(QCoreApplication_EventFilter_Callback cb) { qcoreapplication_eventfilter_callback = cb; }
    inline void setQCoreApplication_TimerEvent_Callback(QCoreApplication_TimerEvent_Callback cb) { qcoreapplication_timerevent_callback = cb; }
    inline void setQCoreApplication_ChildEvent_Callback(QCoreApplication_ChildEvent_Callback cb) { qcoreapplication_childevent_callback = cb; }
    inline void setQCoreApplication_CustomEvent_Callback(QCoreApplication_CustomEvent_Callback cb) { qcoreapplication_customevent_callback = cb; }
    inline void setQCoreApplication_ConnectNotify_Callback(QCoreApplication_ConnectNotify_Callback cb) { qcoreapplication_connectnotify_callback = cb; }
    inline void setQCoreApplication_DisconnectNotify_Callback(QCoreApplication_DisconnectNotify_Callback cb) { qcoreapplication_disconnectnotify_callback = cb; }
    inline void setQCoreApplication_ResolveInterface_Callback(QCoreApplication_ResolveInterface_Callback cb) { qcoreapplication_resolveinterface_callback = cb; }
    inline void setQCoreApplication_Sender_Callback(QCoreApplication_Sender_Callback cb) { qcoreapplication_sender_callback = cb; }
    inline void setQCoreApplication_SenderSignalIndex_Callback(QCoreApplication_SenderSignalIndex_Callback cb) { qcoreapplication_sendersignalindex_callback = cb; }
    inline void setQCoreApplication_Receivers_Callback(QCoreApplication_Receivers_Callback cb) { qcoreapplication_receivers_callback = cb; }
    inline void setQCoreApplication_IsSignalConnected_Callback(QCoreApplication_IsSignalConnected_Callback cb) { qcoreapplication_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCoreApplication_MetaObject_IsBase(bool value) const { qcoreapplication_metaobject_isbase = value; }
    inline void setQCoreApplication_Metacast_IsBase(bool value) const { qcoreapplication_metacast_isbase = value; }
    inline void setQCoreApplication_Metacall_IsBase(bool value) const { qcoreapplication_metacall_isbase = value; }
    inline void setQCoreApplication_Notify_IsBase(bool value) const { qcoreapplication_notify_isbase = value; }
    inline void setQCoreApplication_Event_IsBase(bool value) const { qcoreapplication_event_isbase = value; }
    inline void setQCoreApplication_EventFilter_IsBase(bool value) const { qcoreapplication_eventfilter_isbase = value; }
    inline void setQCoreApplication_TimerEvent_IsBase(bool value) const { qcoreapplication_timerevent_isbase = value; }
    inline void setQCoreApplication_ChildEvent_IsBase(bool value) const { qcoreapplication_childevent_isbase = value; }
    inline void setQCoreApplication_CustomEvent_IsBase(bool value) const { qcoreapplication_customevent_isbase = value; }
    inline void setQCoreApplication_ConnectNotify_IsBase(bool value) const { qcoreapplication_connectnotify_isbase = value; }
    inline void setQCoreApplication_DisconnectNotify_IsBase(bool value) const { qcoreapplication_disconnectnotify_isbase = value; }
    inline void setQCoreApplication_ResolveInterface_IsBase(bool value) const { qcoreapplication_resolveinterface_isbase = value; }
    inline void setQCoreApplication_Sender_IsBase(bool value) const { qcoreapplication_sender_isbase = value; }
    inline void setQCoreApplication_SenderSignalIndex_IsBase(bool value) const { qcoreapplication_sendersignalindex_isbase = value; }
    inline void setQCoreApplication_Receivers_IsBase(bool value) const { qcoreapplication_receivers_isbase = value; }
    inline void setQCoreApplication_IsSignalConnected_IsBase(bool value) const { qcoreapplication_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcoreapplication_metaobject_isbase) {
            qcoreapplication_metaobject_isbase = false;
            return QCoreApplication::metaObject();
        }
        auto metaobject_cb = qcoreapplication_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QCoreApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcoreapplication_metacast_isbase) {
            qcoreapplication_metacast_isbase = false;
            return QCoreApplication::qt_metacast(param1);
        }
        auto metacast_cb = qcoreapplication_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QCoreApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcoreapplication_metacall_isbase) {
            qcoreapplication_metacall_isbase = false;
            return QCoreApplication::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qcoreapplication_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCoreApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qcoreapplication_notify_isbase) {
            qcoreapplication_notify_isbase = false;
            return QCoreApplication::notify(param1, param2);
        }
        auto notify_cb = qcoreapplication_notify_callback;
        if (notify_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = notify_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCoreApplication::notify(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qcoreapplication_event_isbase) {
            qcoreapplication_event_isbase = false;
            return QCoreApplication::event(param1);
        }
        auto event_cb = qcoreapplication_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QCoreApplication::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcoreapplication_eventfilter_isbase) {
            qcoreapplication_eventfilter_isbase = false;
            return QCoreApplication::eventFilter(watched, event);
        }
        auto eventfilter_cb = qcoreapplication_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCoreApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcoreapplication_timerevent_isbase) {
            qcoreapplication_timerevent_isbase = false;
            QCoreApplication::timerEvent(event);
            return;
        }
        auto timerevent_cb = qcoreapplication_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QCoreApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcoreapplication_childevent_isbase) {
            qcoreapplication_childevent_isbase = false;
            QCoreApplication::childEvent(event);
            return;
        }
        auto childevent_cb = qcoreapplication_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QCoreApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcoreapplication_customevent_isbase) {
            qcoreapplication_customevent_isbase = false;
            QCoreApplication::customEvent(event);
            return;
        }
        auto customevent_cb = qcoreapplication_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QCoreApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcoreapplication_connectnotify_isbase) {
            qcoreapplication_connectnotify_isbase = false;
            QCoreApplication::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qcoreapplication_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QCoreApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcoreapplication_disconnectnotify_isbase) {
            qcoreapplication_disconnectnotify_isbase = false;
            QCoreApplication::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qcoreapplication_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QCoreApplication::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qcoreapplication_resolveinterface_isbase) {
            qcoreapplication_resolveinterface_isbase = false;
            return QCoreApplication::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qcoreapplication_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCoreApplication::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcoreapplication_sender_isbase) {
            qcoreapplication_sender_isbase = false;
            return QCoreApplication::sender();
        }
        auto sender_cb = qcoreapplication_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QCoreApplication::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcoreapplication_sendersignalindex_isbase) {
            qcoreapplication_sendersignalindex_isbase = false;
            return QCoreApplication::senderSignalIndex();
        }
        auto sendersignalindex_cb = qcoreapplication_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QCoreApplication::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcoreapplication_receivers_isbase) {
            qcoreapplication_receivers_isbase = false;
            return QCoreApplication::receivers(signal);
        }
        auto receivers_cb = qcoreapplication_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCoreApplication::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcoreapplication_issignalconnected_isbase) {
            qcoreapplication_issignalconnected_isbase = false;
            return QCoreApplication::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qcoreapplication_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QCoreApplication::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QCoreApplication_Event(QCoreApplication* self, QEvent* param1);
    friend bool QCoreApplication_SuperEvent(QCoreApplication* self, QEvent* param1);
    friend void QCoreApplication_TimerEvent(QCoreApplication* self, QTimerEvent* event);
    friend void QCoreApplication_SuperTimerEvent(QCoreApplication* self, QTimerEvent* event);
    friend void QCoreApplication_ChildEvent(QCoreApplication* self, QChildEvent* event);
    friend void QCoreApplication_SuperChildEvent(QCoreApplication* self, QChildEvent* event);
    friend void QCoreApplication_CustomEvent(QCoreApplication* self, QEvent* event);
    friend void QCoreApplication_SuperCustomEvent(QCoreApplication* self, QEvent* event);
    friend void QCoreApplication_ConnectNotify(QCoreApplication* self, const QMetaMethod* signal);
    friend void QCoreApplication_SuperConnectNotify(QCoreApplication* self, const QMetaMethod* signal);
    friend void QCoreApplication_DisconnectNotify(QCoreApplication* self, const QMetaMethod* signal);
    friend void QCoreApplication_SuperDisconnectNotify(QCoreApplication* self, const QMetaMethod* signal);
    friend void* QCoreApplication_ResolveInterface(const QCoreApplication* self, const char* name, int revision);
    friend void* QCoreApplication_SuperResolveInterface(const QCoreApplication* self, const char* name, int revision);
    friend QObject* QCoreApplication_Sender(const QCoreApplication* self);
    friend QObject* QCoreApplication_SuperSender(const QCoreApplication* self);
    friend int QCoreApplication_SenderSignalIndex(const QCoreApplication* self);
    friend int QCoreApplication_SuperSenderSignalIndex(const QCoreApplication* self);
    friend int QCoreApplication_Receivers(const QCoreApplication* self, const char* signal);
    friend int QCoreApplication_SuperReceivers(const QCoreApplication* self, const char* signal);
    friend bool QCoreApplication_IsSignalConnected(const QCoreApplication* self, const QMetaMethod* signal);
    friend bool QCoreApplication_SuperIsSignalConnected(const QCoreApplication* self, const QMetaMethod* signal);
};

#endif
