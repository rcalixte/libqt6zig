#pragma once
#ifndef SRCC_LIBVIRTUALQOPENGLCONTEXT_H
#define SRCC_LIBVIRTUALQOPENGLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QOpenGLContext so that we can call protected methods
class VirtualQOpenGLContext final : public QOpenGLContext {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLContext = true;

    // Virtual class public types (including callbacks)
    using QOpenGLContext_Metacall_Callback = int (*)(QOpenGLContext*, int, int, void**);
    using QOpenGLContext_Event_Callback = bool (*)(QOpenGLContext*, QEvent*);
    using QOpenGLContext_EventFilter_Callback = bool (*)(QOpenGLContext*, QObject*, QEvent*);
    using QOpenGLContext_TimerEvent_Callback = void (*)(QOpenGLContext*, QTimerEvent*);
    using QOpenGLContext_ChildEvent_Callback = void (*)(QOpenGLContext*, QChildEvent*);
    using QOpenGLContext_CustomEvent_Callback = void (*)(QOpenGLContext*, QEvent*);
    using QOpenGLContext_ConnectNotify_Callback = void (*)(QOpenGLContext*, QMetaMethod*);
    using QOpenGLContext_DisconnectNotify_Callback = void (*)(QOpenGLContext*, QMetaMethod*);
    using QOpenGLContext_ResolveInterface_Callback = void* (*)(const QOpenGLContext*, const char*, int);
    using QOpenGLContext_Sender_Callback = QObject* (*)();
    using QOpenGLContext_SenderSignalIndex_Callback = int (*)();
    using QOpenGLContext_Receivers_Callback = int (*)(const QOpenGLContext*, const char*);
    using QOpenGLContext_IsSignalConnected_Callback = bool (*)(const QOpenGLContext*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLContext_Metacall_Callback qopenglcontext_metacall_callback = nullptr;
    QOpenGLContext_Event_Callback qopenglcontext_event_callback = nullptr;
    QOpenGLContext_EventFilter_Callback qopenglcontext_eventfilter_callback = nullptr;
    QOpenGLContext_TimerEvent_Callback qopenglcontext_timerevent_callback = nullptr;
    QOpenGLContext_ChildEvent_Callback qopenglcontext_childevent_callback = nullptr;
    QOpenGLContext_CustomEvent_Callback qopenglcontext_customevent_callback = nullptr;
    QOpenGLContext_ConnectNotify_Callback qopenglcontext_connectnotify_callback = nullptr;
    QOpenGLContext_DisconnectNotify_Callback qopenglcontext_disconnectnotify_callback = nullptr;
    QOpenGLContext_ResolveInterface_Callback qopenglcontext_resolveinterface_callback = nullptr;
    QOpenGLContext_Sender_Callback qopenglcontext_sender_callback = nullptr;
    QOpenGLContext_SenderSignalIndex_Callback qopenglcontext_sendersignalindex_callback = nullptr;
    QOpenGLContext_Receivers_Callback qopenglcontext_receivers_callback = nullptr;
    QOpenGLContext_IsSignalConnected_Callback qopenglcontext_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopenglcontext_metacall_isbase = false;
    mutable bool qopenglcontext_event_isbase = false;
    mutable bool qopenglcontext_eventfilter_isbase = false;
    mutable bool qopenglcontext_timerevent_isbase = false;
    mutable bool qopenglcontext_childevent_isbase = false;
    mutable bool qopenglcontext_customevent_isbase = false;
    mutable bool qopenglcontext_connectnotify_isbase = false;
    mutable bool qopenglcontext_disconnectnotify_isbase = false;
    mutable bool qopenglcontext_resolveinterface_isbase = false;
    mutable bool qopenglcontext_sender_isbase = false;
    mutable bool qopenglcontext_sendersignalindex_isbase = false;
    mutable bool qopenglcontext_receivers_isbase = false;
    mutable bool qopenglcontext_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLContext() : QOpenGLContext() {};
    VirtualQOpenGLContext(QObject* parent) : QOpenGLContext(parent) {};

    ~VirtualQOpenGLContext() {
        qopenglcontext_metacall_callback = nullptr;
        qopenglcontext_event_callback = nullptr;
        qopenglcontext_eventfilter_callback = nullptr;
        qopenglcontext_timerevent_callback = nullptr;
        qopenglcontext_childevent_callback = nullptr;
        qopenglcontext_customevent_callback = nullptr;
        qopenglcontext_connectnotify_callback = nullptr;
        qopenglcontext_disconnectnotify_callback = nullptr;
        qopenglcontext_resolveinterface_callback = nullptr;
        qopenglcontext_sender_callback = nullptr;
        qopenglcontext_sendersignalindex_callback = nullptr;
        qopenglcontext_receivers_callback = nullptr;
        qopenglcontext_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLContext_Metacall_Callback(QOpenGLContext_Metacall_Callback cb) { qopenglcontext_metacall_callback = cb; }
    inline void setQOpenGLContext_Event_Callback(QOpenGLContext_Event_Callback cb) { qopenglcontext_event_callback = cb; }
    inline void setQOpenGLContext_EventFilter_Callback(QOpenGLContext_EventFilter_Callback cb) { qopenglcontext_eventfilter_callback = cb; }
    inline void setQOpenGLContext_TimerEvent_Callback(QOpenGLContext_TimerEvent_Callback cb) { qopenglcontext_timerevent_callback = cb; }
    inline void setQOpenGLContext_ChildEvent_Callback(QOpenGLContext_ChildEvent_Callback cb) { qopenglcontext_childevent_callback = cb; }
    inline void setQOpenGLContext_CustomEvent_Callback(QOpenGLContext_CustomEvent_Callback cb) { qopenglcontext_customevent_callback = cb; }
    inline void setQOpenGLContext_ConnectNotify_Callback(QOpenGLContext_ConnectNotify_Callback cb) { qopenglcontext_connectnotify_callback = cb; }
    inline void setQOpenGLContext_DisconnectNotify_Callback(QOpenGLContext_DisconnectNotify_Callback cb) { qopenglcontext_disconnectnotify_callback = cb; }
    inline void setQOpenGLContext_ResolveInterface_Callback(QOpenGLContext_ResolveInterface_Callback cb) { qopenglcontext_resolveinterface_callback = cb; }
    inline void setQOpenGLContext_Sender_Callback(QOpenGLContext_Sender_Callback cb) { qopenglcontext_sender_callback = cb; }
    inline void setQOpenGLContext_SenderSignalIndex_Callback(QOpenGLContext_SenderSignalIndex_Callback cb) { qopenglcontext_sendersignalindex_callback = cb; }
    inline void setQOpenGLContext_Receivers_Callback(QOpenGLContext_Receivers_Callback cb) { qopenglcontext_receivers_callback = cb; }
    inline void setQOpenGLContext_IsSignalConnected_Callback(QOpenGLContext_IsSignalConnected_Callback cb) { qopenglcontext_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLContext_Metacall_IsBase(bool value) const { qopenglcontext_metacall_isbase = value; }
    inline void setQOpenGLContext_Event_IsBase(bool value) const { qopenglcontext_event_isbase = value; }
    inline void setQOpenGLContext_EventFilter_IsBase(bool value) const { qopenglcontext_eventfilter_isbase = value; }
    inline void setQOpenGLContext_TimerEvent_IsBase(bool value) const { qopenglcontext_timerevent_isbase = value; }
    inline void setQOpenGLContext_ChildEvent_IsBase(bool value) const { qopenglcontext_childevent_isbase = value; }
    inline void setQOpenGLContext_CustomEvent_IsBase(bool value) const { qopenglcontext_customevent_isbase = value; }
    inline void setQOpenGLContext_ConnectNotify_IsBase(bool value) const { qopenglcontext_connectnotify_isbase = value; }
    inline void setQOpenGLContext_DisconnectNotify_IsBase(bool value) const { qopenglcontext_disconnectnotify_isbase = value; }
    inline void setQOpenGLContext_ResolveInterface_IsBase(bool value) const { qopenglcontext_resolveinterface_isbase = value; }
    inline void setQOpenGLContext_Sender_IsBase(bool value) const { qopenglcontext_sender_isbase = value; }
    inline void setQOpenGLContext_SenderSignalIndex_IsBase(bool value) const { qopenglcontext_sendersignalindex_isbase = value; }
    inline void setQOpenGLContext_Receivers_IsBase(bool value) const { qopenglcontext_receivers_isbase = value; }
    inline void setQOpenGLContext_IsSignalConnected_IsBase(bool value) const { qopenglcontext_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglcontext_metacall_isbase) {
            qopenglcontext_metacall_isbase = false;
            return QOpenGLContext::qt_metacall(param1, param2, param3);
        } else if (qopenglcontext_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopenglcontext_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLContext::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglcontext_event_isbase) {
            qopenglcontext_event_isbase = false;
            return QOpenGLContext::event(event);
        } else if (qopenglcontext_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopenglcontext_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLContext::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglcontext_eventfilter_isbase) {
            qopenglcontext_eventfilter_isbase = false;
            return QOpenGLContext::eventFilter(watched, event);
        } else if (qopenglcontext_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopenglcontext_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLContext::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglcontext_timerevent_isbase) {
            qopenglcontext_timerevent_isbase = false;
            QOpenGLContext::timerEvent(event);
        } else if (qopenglcontext_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopenglcontext_timerevent_callback(this, cbval1);
        } else {
            QOpenGLContext::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglcontext_childevent_isbase) {
            qopenglcontext_childevent_isbase = false;
            QOpenGLContext::childEvent(event);
        } else if (qopenglcontext_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopenglcontext_childevent_callback(this, cbval1);
        } else {
            QOpenGLContext::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglcontext_customevent_isbase) {
            qopenglcontext_customevent_isbase = false;
            QOpenGLContext::customEvent(event);
        } else if (qopenglcontext_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglcontext_customevent_callback(this, cbval1);
        } else {
            QOpenGLContext::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglcontext_connectnotify_isbase) {
            qopenglcontext_connectnotify_isbase = false;
            QOpenGLContext::connectNotify(signal);
        } else if (qopenglcontext_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglcontext_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLContext::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglcontext_disconnectnotify_isbase) {
            qopenglcontext_disconnectnotify_isbase = false;
            QOpenGLContext::disconnectNotify(signal);
        } else if (qopenglcontext_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglcontext_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLContext::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qopenglcontext_resolveinterface_isbase) {
            qopenglcontext_resolveinterface_isbase = false;
            return QOpenGLContext::resolveInterface(name, revision);
        } else if (qopenglcontext_resolveinterface_callback != nullptr) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = qopenglcontext_resolveinterface_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLContext::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglcontext_sender_isbase) {
            qopenglcontext_sender_isbase = false;
            return QOpenGLContext::sender();
        } else if (qopenglcontext_sender_callback != nullptr) {
            QObject* callback_ret = qopenglcontext_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLContext::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglcontext_sendersignalindex_isbase) {
            qopenglcontext_sendersignalindex_isbase = false;
            return QOpenGLContext::senderSignalIndex();
        } else if (qopenglcontext_sendersignalindex_callback != nullptr) {
            int callback_ret = qopenglcontext_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLContext::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglcontext_receivers_isbase) {
            qopenglcontext_receivers_isbase = false;
            return QOpenGLContext::receivers(signal);
        } else if (qopenglcontext_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopenglcontext_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLContext::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglcontext_issignalconnected_isbase) {
            qopenglcontext_issignalconnected_isbase = false;
            return QOpenGLContext::isSignalConnected(signal);
        } else if (qopenglcontext_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopenglcontext_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLContext::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLContext_TimerEvent(QOpenGLContext* self, QTimerEvent* event);
    friend void QOpenGLContext_QBaseTimerEvent(QOpenGLContext* self, QTimerEvent* event);
    friend void QOpenGLContext_ChildEvent(QOpenGLContext* self, QChildEvent* event);
    friend void QOpenGLContext_QBaseChildEvent(QOpenGLContext* self, QChildEvent* event);
    friend void QOpenGLContext_CustomEvent(QOpenGLContext* self, QEvent* event);
    friend void QOpenGLContext_QBaseCustomEvent(QOpenGLContext* self, QEvent* event);
    friend void QOpenGLContext_ConnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
    friend void QOpenGLContext_QBaseConnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
    friend void QOpenGLContext_DisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
    friend void QOpenGLContext_QBaseDisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal);
    friend void* QOpenGLContext_ResolveInterface(const QOpenGLContext* self, const char* name, int revision);
    friend void* QOpenGLContext_QBaseResolveInterface(const QOpenGLContext* self, const char* name, int revision);
    friend QObject* QOpenGLContext_Sender(const QOpenGLContext* self);
    friend QObject* QOpenGLContext_QBaseSender(const QOpenGLContext* self);
    friend int QOpenGLContext_SenderSignalIndex(const QOpenGLContext* self);
    friend int QOpenGLContext_QBaseSenderSignalIndex(const QOpenGLContext* self);
    friend int QOpenGLContext_Receivers(const QOpenGLContext* self, const char* signal);
    friend int QOpenGLContext_QBaseReceivers(const QOpenGLContext* self, const char* signal);
    friend bool QOpenGLContext_IsSignalConnected(const QOpenGLContext* self, const QMetaMethod* signal);
    friend bool QOpenGLContext_QBaseIsSignalConnected(const QOpenGLContext* self, const QMetaMethod* signal);
};

#endif
