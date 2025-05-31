#pragma once
#ifndef SRCC_LIBVIRTUALQGUIAPPLICATION_H
#define SRCC_LIBVIRTUALQGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGuiApplication so that we can call protected methods
class VirtualQGuiApplication final : public QGuiApplication {

  public:
    // Virtual class boolean flag
    bool isVirtualQGuiApplication = true;

    // Virtual class public types (including callbacks)
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
    VirtualQGuiApplication(int& argc, char** argv) : QGuiApplication(argc, argv){};
    VirtualQGuiApplication(int& argc, char** argv, int param3) : QGuiApplication(argc, argv, param3){};

    ~VirtualQGuiApplication() {
        qguiapplication_metacall_callback = nullptr;
        qguiapplication_notify_callback = nullptr;
        qguiapplication_event_callback = nullptr;
        qguiapplication_eventfilter_callback = nullptr;
        qguiapplication_timerevent_callback = nullptr;
        qguiapplication_childevent_callback = nullptr;
        qguiapplication_customevent_callback = nullptr;
        qguiapplication_connectnotify_callback = nullptr;
        qguiapplication_disconnectnotify_callback = nullptr;
        qguiapplication_resolveinterface_callback = nullptr;
        qguiapplication_sender_callback = nullptr;
        qguiapplication_sendersignalindex_callback = nullptr;
        qguiapplication_receivers_callback = nullptr;
        qguiapplication_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qguiapplication_metacall_isbase) {
            qguiapplication_metacall_isbase = false;
            return QGuiApplication::qt_metacall(param1, param2, param3);
        } else if (qguiapplication_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qguiapplication_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGuiApplication::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qguiapplication_notify_isbase) {
            qguiapplication_notify_isbase = false;
            return QGuiApplication::notify(param1, param2);
        } else if (qguiapplication_notify_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qguiapplication_notify_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGuiApplication::notify(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qguiapplication_event_isbase) {
            qguiapplication_event_isbase = false;
            return QGuiApplication::event(param1);
        } else if (qguiapplication_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qguiapplication_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGuiApplication::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qguiapplication_eventfilter_isbase) {
            qguiapplication_eventfilter_isbase = false;
            return QGuiApplication::eventFilter(watched, event);
        } else if (qguiapplication_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qguiapplication_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGuiApplication::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qguiapplication_timerevent_isbase) {
            qguiapplication_timerevent_isbase = false;
            QGuiApplication::timerEvent(event);
        } else if (qguiapplication_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qguiapplication_timerevent_callback(this, cbval1);
        } else {
            QGuiApplication::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qguiapplication_childevent_isbase) {
            qguiapplication_childevent_isbase = false;
            QGuiApplication::childEvent(event);
        } else if (qguiapplication_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qguiapplication_childevent_callback(this, cbval1);
        } else {
            QGuiApplication::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qguiapplication_customevent_isbase) {
            qguiapplication_customevent_isbase = false;
            QGuiApplication::customEvent(event);
        } else if (qguiapplication_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qguiapplication_customevent_callback(this, cbval1);
        } else {
            QGuiApplication::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qguiapplication_connectnotify_isbase) {
            qguiapplication_connectnotify_isbase = false;
            QGuiApplication::connectNotify(signal);
        } else if (qguiapplication_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qguiapplication_connectnotify_callback(this, cbval1);
        } else {
            QGuiApplication::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qguiapplication_disconnectnotify_isbase) {
            qguiapplication_disconnectnotify_isbase = false;
            QGuiApplication::disconnectNotify(signal);
        } else if (qguiapplication_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qguiapplication_disconnectnotify_callback(this, cbval1);
        } else {
            QGuiApplication::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qguiapplication_resolveinterface_isbase) {
            qguiapplication_resolveinterface_isbase = false;
            return QGuiApplication::resolveInterface(name, revision);
        } else if (qguiapplication_resolveinterface_callback != nullptr) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = qguiapplication_resolveinterface_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGuiApplication::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qguiapplication_sender_isbase) {
            qguiapplication_sender_isbase = false;
            return QGuiApplication::sender();
        } else if (qguiapplication_sender_callback != nullptr) {
            QObject* callback_ret = qguiapplication_sender_callback();
            return callback_ret;
        } else {
            return QGuiApplication::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qguiapplication_sendersignalindex_isbase) {
            qguiapplication_sendersignalindex_isbase = false;
            return QGuiApplication::senderSignalIndex();
        } else if (qguiapplication_sendersignalindex_callback != nullptr) {
            int callback_ret = qguiapplication_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGuiApplication::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qguiapplication_receivers_isbase) {
            qguiapplication_receivers_isbase = false;
            return QGuiApplication::receivers(signal);
        } else if (qguiapplication_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qguiapplication_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGuiApplication::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qguiapplication_issignalconnected_isbase) {
            qguiapplication_issignalconnected_isbase = false;
            return QGuiApplication::isSignalConnected(signal);
        } else if (qguiapplication_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qguiapplication_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGuiApplication::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1);
    friend bool QGuiApplication_QBaseEvent(QGuiApplication* self, QEvent* param1);
    friend void QGuiApplication_TimerEvent(QGuiApplication* self, QTimerEvent* event);
    friend void QGuiApplication_QBaseTimerEvent(QGuiApplication* self, QTimerEvent* event);
    friend void QGuiApplication_ChildEvent(QGuiApplication* self, QChildEvent* event);
    friend void QGuiApplication_QBaseChildEvent(QGuiApplication* self, QChildEvent* event);
    friend void QGuiApplication_CustomEvent(QGuiApplication* self, QEvent* event);
    friend void QGuiApplication_QBaseCustomEvent(QGuiApplication* self, QEvent* event);
    friend void QGuiApplication_ConnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_QBaseConnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_DisconnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void QGuiApplication_QBaseDisconnectNotify(QGuiApplication* self, const QMetaMethod* signal);
    friend void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision);
    friend void* QGuiApplication_QBaseResolveInterface(const QGuiApplication* self, const char* name, int revision);
    friend QObject* QGuiApplication_Sender(const QGuiApplication* self);
    friend QObject* QGuiApplication_QBaseSender(const QGuiApplication* self);
    friend int QGuiApplication_SenderSignalIndex(const QGuiApplication* self);
    friend int QGuiApplication_QBaseSenderSignalIndex(const QGuiApplication* self);
    friend int QGuiApplication_Receivers(const QGuiApplication* self, const char* signal);
    friend int QGuiApplication_QBaseReceivers(const QGuiApplication* self, const char* signal);
    friend bool QGuiApplication_IsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal);
    friend bool QGuiApplication_QBaseIsSignalConnected(const QGuiApplication* self, const QMetaMethod* signal);
};

#endif
