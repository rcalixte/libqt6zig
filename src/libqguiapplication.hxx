#pragma once
#ifndef SRCC_LIBVIRTUALQGUIAPPLICATION_H
#define SRCC_LIBVIRTUALQGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGuiApplication so that we can call protected methods
class VirtualQGuiApplication final : public QGuiApplication {

  public:
    // Virtual class boolean flag
    bool isVirtualQGuiApplication = true;

    // Virtual class public types (including callbacks)
    using QGuiApplication_MetaObject_Callback = QMetaObject* (*)();
    using QGuiApplication_Metacast_Callback = void* (*)(QGuiApplication*, const char*);
    using QGuiApplication_Metacall_Callback = int (*)(QGuiApplication*, int, int, void**);
    using QGuiApplication_Notify_Callback = bool (*)(QGuiApplication*, QObject*, QEvent*);
    using QGuiApplication_Event_Callback = bool (*)(QGuiApplication*, QEvent*);
    using QGuiApplication_EventFilter_Callback = bool (*)(QGuiApplication*, QObject*, QEvent*);
    using QGuiApplication_TimerEvent_Callback = void (*)(QGuiApplication*, QTimerEvent*);
    using QGuiApplication_ChildEvent_Callback = void (*)(QGuiApplication*, QChildEvent*);
    using QGuiApplication_CustomEvent_Callback = void (*)(QGuiApplication*, QEvent*);
    using QGuiApplication_ConnectNotify_Callback = void (*)(QGuiApplication*, QMetaMethod*);
    using QGuiApplication_DisconnectNotify_Callback = void (*)(QGuiApplication*, QMetaMethod*);
    using QGuiApplication_ResolveInterface_Callback = void* (*)(const QGuiApplication*, const char*, int);
    using QGuiApplication_Sender_Callback = QObject* (*)();
    using QGuiApplication_SenderSignalIndex_Callback = int (*)();
    using QGuiApplication_Receivers_Callback = int (*)(const QGuiApplication*, const char*);
    using QGuiApplication_IsSignalConnected_Callback = bool (*)(const QGuiApplication*, QMetaMethod*);

  protected:
    // Instance callback storage
    QGuiApplication_MetaObject_Callback qguiapplication_metaobject_callback = nullptr;
    QGuiApplication_Metacast_Callback qguiapplication_metacast_callback = nullptr;
    QGuiApplication_Metacall_Callback qguiapplication_metacall_callback = nullptr;
    QGuiApplication_Notify_Callback qguiapplication_notify_callback = nullptr;
    QGuiApplication_Event_Callback qguiapplication_event_callback = nullptr;
    QGuiApplication_EventFilter_Callback qguiapplication_eventfilter_callback = nullptr;
    QGuiApplication_TimerEvent_Callback qguiapplication_timerevent_callback = nullptr;
    QGuiApplication_ChildEvent_Callback qguiapplication_childevent_callback = nullptr;
    QGuiApplication_CustomEvent_Callback qguiapplication_customevent_callback = nullptr;
    QGuiApplication_ConnectNotify_Callback qguiapplication_connectnotify_callback = nullptr;
    QGuiApplication_DisconnectNotify_Callback qguiapplication_disconnectnotify_callback = nullptr;
    QGuiApplication_ResolveInterface_Callback qguiapplication_resolveinterface_callback = nullptr;
    QGuiApplication_Sender_Callback qguiapplication_sender_callback = nullptr;
    QGuiApplication_SenderSignalIndex_Callback qguiapplication_sendersignalindex_callback = nullptr;
    QGuiApplication_Receivers_Callback qguiapplication_receivers_callback = nullptr;
    QGuiApplication_IsSignalConnected_Callback qguiapplication_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qguiapplication_metaobject_isbase = false;
    mutable bool qguiapplication_metacast_isbase = false;
    mutable bool qguiapplication_metacall_isbase = false;
    mutable bool qguiapplication_notify_isbase = false;
    mutable bool qguiapplication_event_isbase = false;
    mutable bool qguiapplication_eventfilter_isbase = false;
    mutable bool qguiapplication_timerevent_isbase = false;
    mutable bool qguiapplication_childevent_isbase = false;
    mutable bool qguiapplication_customevent_isbase = false;
    mutable bool qguiapplication_connectnotify_isbase = false;
    mutable bool qguiapplication_disconnectnotify_isbase = false;
    mutable bool qguiapplication_resolveinterface_isbase = false;
    mutable bool qguiapplication_sender_isbase = false;
    mutable bool qguiapplication_sendersignalindex_isbase = false;
    mutable bool qguiapplication_receivers_isbase = false;
    mutable bool qguiapplication_issignalconnected_isbase = false;

  public:
    VirtualQGuiApplication(int& argc, char** argv) : QGuiApplication(argc, argv) {};
    VirtualQGuiApplication(int& argc, char** argv, int param3) : QGuiApplication(argc, argv, param3) {};

    // Callback setters
    inline void setQGuiApplication_MetaObject_Callback(QGuiApplication_MetaObject_Callback cb) { qguiapplication_metaobject_callback = cb; }
    inline void setQGuiApplication_Metacast_Callback(QGuiApplication_Metacast_Callback cb) { qguiapplication_metacast_callback = cb; }
    inline void setQGuiApplication_Metacall_Callback(QGuiApplication_Metacall_Callback cb) { qguiapplication_metacall_callback = cb; }
    inline void setQGuiApplication_Notify_Callback(QGuiApplication_Notify_Callback cb) { qguiapplication_notify_callback = cb; }
    inline void setQGuiApplication_Event_Callback(QGuiApplication_Event_Callback cb) { qguiapplication_event_callback = cb; }
    inline void setQGuiApplication_EventFilter_Callback(QGuiApplication_EventFilter_Callback cb) { qguiapplication_eventfilter_callback = cb; }
    inline void setQGuiApplication_TimerEvent_Callback(QGuiApplication_TimerEvent_Callback cb) { qguiapplication_timerevent_callback = cb; }
    inline void setQGuiApplication_ChildEvent_Callback(QGuiApplication_ChildEvent_Callback cb) { qguiapplication_childevent_callback = cb; }
    inline void setQGuiApplication_CustomEvent_Callback(QGuiApplication_CustomEvent_Callback cb) { qguiapplication_customevent_callback = cb; }
    inline void setQGuiApplication_ConnectNotify_Callback(QGuiApplication_ConnectNotify_Callback cb) { qguiapplication_connectnotify_callback = cb; }
    inline void setQGuiApplication_DisconnectNotify_Callback(QGuiApplication_DisconnectNotify_Callback cb) { qguiapplication_disconnectnotify_callback = cb; }
    inline void setQGuiApplication_ResolveInterface_Callback(QGuiApplication_ResolveInterface_Callback cb) { qguiapplication_resolveinterface_callback = cb; }
    inline void setQGuiApplication_Sender_Callback(QGuiApplication_Sender_Callback cb) { qguiapplication_sender_callback = cb; }
    inline void setQGuiApplication_SenderSignalIndex_Callback(QGuiApplication_SenderSignalIndex_Callback cb) { qguiapplication_sendersignalindex_callback = cb; }
    inline void setQGuiApplication_Receivers_Callback(QGuiApplication_Receivers_Callback cb) { qguiapplication_receivers_callback = cb; }
    inline void setQGuiApplication_IsSignalConnected_Callback(QGuiApplication_IsSignalConnected_Callback cb) { qguiapplication_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQGuiApplication_MetaObject_IsBase(bool value) const { qguiapplication_metaobject_isbase = value; }
    inline void setQGuiApplication_Metacast_IsBase(bool value) const { qguiapplication_metacast_isbase = value; }
    inline void setQGuiApplication_Metacall_IsBase(bool value) const { qguiapplication_metacall_isbase = value; }
    inline void setQGuiApplication_Notify_IsBase(bool value) const { qguiapplication_notify_isbase = value; }
    inline void setQGuiApplication_Event_IsBase(bool value) const { qguiapplication_event_isbase = value; }
    inline void setQGuiApplication_EventFilter_IsBase(bool value) const { qguiapplication_eventfilter_isbase = value; }
    inline void setQGuiApplication_TimerEvent_IsBase(bool value) const { qguiapplication_timerevent_isbase = value; }
    inline void setQGuiApplication_ChildEvent_IsBase(bool value) const { qguiapplication_childevent_isbase = value; }
    inline void setQGuiApplication_CustomEvent_IsBase(bool value) const { qguiapplication_customevent_isbase = value; }
    inline void setQGuiApplication_ConnectNotify_IsBase(bool value) const { qguiapplication_connectnotify_isbase = value; }
    inline void setQGuiApplication_DisconnectNotify_IsBase(bool value) const { qguiapplication_disconnectnotify_isbase = value; }
    inline void setQGuiApplication_ResolveInterface_IsBase(bool value) const { qguiapplication_resolveinterface_isbase = value; }
    inline void setQGuiApplication_Sender_IsBase(bool value) const { qguiapplication_sender_isbase = value; }
    inline void setQGuiApplication_SenderSignalIndex_IsBase(bool value) const { qguiapplication_sendersignalindex_isbase = value; }
    inline void setQGuiApplication_Receivers_IsBase(bool value) const { qguiapplication_receivers_isbase = value; }
    inline void setQGuiApplication_IsSignalConnected_IsBase(bool value) const { qguiapplication_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qguiapplication_metaobject_isbase) {
            qguiapplication_metaobject_isbase = false;
            return QGuiApplication::metaObject();
        }
        auto metaobject_cb = qguiapplication_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGuiApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qguiapplication_metacast_isbase) {
            qguiapplication_metacast_isbase = false;
            return QGuiApplication::qt_metacast(param1);
        }
        auto metacast_cb = qguiapplication_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGuiApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qguiapplication_metacall_isbase) {
            qguiapplication_metacall_isbase = false;
            return QGuiApplication::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qguiapplication_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGuiApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qguiapplication_notify_isbase) {
            qguiapplication_notify_isbase = false;
            return QGuiApplication::notify(param1, param2);
        }
        auto notify_cb = qguiapplication_notify_callback;
        if (notify_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = notify_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGuiApplication::notify(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qguiapplication_event_isbase) {
            qguiapplication_event_isbase = false;
            return QGuiApplication::event(param1);
        }
        auto event_cb = qguiapplication_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGuiApplication::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qguiapplication_eventfilter_isbase) {
            qguiapplication_eventfilter_isbase = false;
            return QGuiApplication::eventFilter(watched, event);
        }
        auto eventfilter_cb = qguiapplication_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGuiApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qguiapplication_timerevent_isbase) {
            qguiapplication_timerevent_isbase = false;
            QGuiApplication::timerEvent(event);
            return;
        }
        auto timerevent_cb = qguiapplication_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGuiApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qguiapplication_childevent_isbase) {
            qguiapplication_childevent_isbase = false;
            QGuiApplication::childEvent(event);
            return;
        }
        auto childevent_cb = qguiapplication_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGuiApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qguiapplication_customevent_isbase) {
            qguiapplication_customevent_isbase = false;
            QGuiApplication::customEvent(event);
            return;
        }
        auto customevent_cb = qguiapplication_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGuiApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qguiapplication_connectnotify_isbase) {
            qguiapplication_connectnotify_isbase = false;
            QGuiApplication::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qguiapplication_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGuiApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qguiapplication_disconnectnotify_isbase) {
            qguiapplication_disconnectnotify_isbase = false;
            QGuiApplication::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qguiapplication_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGuiApplication::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qguiapplication_resolveinterface_isbase) {
            qguiapplication_resolveinterface_isbase = false;
            return QGuiApplication::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qguiapplication_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGuiApplication::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qguiapplication_sender_isbase) {
            qguiapplication_sender_isbase = false;
            return QGuiApplication::sender();
        }
        auto sender_cb = qguiapplication_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGuiApplication::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qguiapplication_sendersignalindex_isbase) {
            qguiapplication_sendersignalindex_isbase = false;
            return QGuiApplication::senderSignalIndex();
        }
        auto sendersignalindex_cb = qguiapplication_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGuiApplication::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qguiapplication_receivers_isbase) {
            qguiapplication_receivers_isbase = false;
            return QGuiApplication::receivers(signal);
        }
        auto receivers_cb = qguiapplication_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGuiApplication::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qguiapplication_issignalconnected_isbase) {
            qguiapplication_issignalconnected_isbase = false;
            return QGuiApplication::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qguiapplication_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGuiApplication::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1);
    friend bool QGuiApplication_SuperEvent(QGuiApplication* self, QEvent* param1);
    friend void QGuiApplication_TimerEvent(QGuiApplication* self, QTimerEvent* event);
    friend void QGuiApplication_SuperTimerEvent(QGuiApplication* self, QTimerEvent* event);
    friend void QGuiApplication_ChildEvent(QGuiApplication* self, QChildEvent* event);
    friend void QGuiApplication_SuperChildEvent(QGuiApplication* self, QChildEvent* event);
    friend void QGuiApplication_CustomEvent(QGuiApplication* self, QEvent* event);
    friend void QGuiApplication_SuperCustomEvent(QGuiApplication* self, QEvent* event);
    friend void QGuiApplication_ConnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_SuperConnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_DisconnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_SuperDisconnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision);
    friend void* QGuiApplication_SuperResolveInterface(const QGuiApplication* self, const char* name, int revision);
    friend QObject* QGuiApplication_Sender(const QGuiApplication* self);
    friend QObject* QGuiApplication_SuperSender(const QGuiApplication* self);
    friend int QGuiApplication_SenderSignalIndex(const QGuiApplication* self);
    friend int QGuiApplication_SuperSenderSignalIndex(const QGuiApplication* self);
    friend int QGuiApplication_Receivers(const QGuiApplication* self, const char* signal);
    friend int QGuiApplication_SuperReceivers(const QGuiApplication* self, const char* signal);
    friend bool QGuiApplication_IsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal);
    friend bool QGuiApplication_SuperIsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal);
};

#endif
