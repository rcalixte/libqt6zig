#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSVIRTUALOBJECT_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBVIRTUALQDBUSVIRTUALOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDBusVirtualObject so that we can call protected methods
class VirtualQDBusVirtualObject : public QDBusVirtualObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQDBusVirtualObject = true;

    // Virtual class public types (including callbacks)
    using QDBusVirtualObject_Metacall_Callback = int (*)(QDBusVirtualObject*, int, int, void**);
    using QDBusVirtualObject_Introspect_Callback = const char* (*)(const QDBusVirtualObject*, libqt_string);
    using QDBusVirtualObject_HandleMessage_Callback = bool (*)(QDBusVirtualObject*, QDBusMessage*, QDBusConnection*);
    using QDBusVirtualObject_Event_Callback = bool (*)(QDBusVirtualObject*, QEvent*);
    using QDBusVirtualObject_EventFilter_Callback = bool (*)(QDBusVirtualObject*, QObject*, QEvent*);
    using QDBusVirtualObject_TimerEvent_Callback = void (*)(QDBusVirtualObject*, QTimerEvent*);
    using QDBusVirtualObject_ChildEvent_Callback = void (*)(QDBusVirtualObject*, QChildEvent*);
    using QDBusVirtualObject_CustomEvent_Callback = void (*)(QDBusVirtualObject*, QEvent*);
    using QDBusVirtualObject_ConnectNotify_Callback = void (*)(QDBusVirtualObject*, QMetaMethod*);
    using QDBusVirtualObject_DisconnectNotify_Callback = void (*)(QDBusVirtualObject*, QMetaMethod*);
    using QDBusVirtualObject_Sender_Callback = QObject* (*)();
    using QDBusVirtualObject_SenderSignalIndex_Callback = int (*)();
    using QDBusVirtualObject_Receivers_Callback = int (*)(const QDBusVirtualObject*, const char*);
    using QDBusVirtualObject_IsSignalConnected_Callback = bool (*)(const QDBusVirtualObject*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDBusVirtualObject_Metacall_Callback qdbusvirtualobject_metacall_callback = nullptr;
    QDBusVirtualObject_Introspect_Callback qdbusvirtualobject_introspect_callback = nullptr;
    QDBusVirtualObject_HandleMessage_Callback qdbusvirtualobject_handlemessage_callback = nullptr;
    QDBusVirtualObject_Event_Callback qdbusvirtualobject_event_callback = nullptr;
    QDBusVirtualObject_EventFilter_Callback qdbusvirtualobject_eventfilter_callback = nullptr;
    QDBusVirtualObject_TimerEvent_Callback qdbusvirtualobject_timerevent_callback = nullptr;
    QDBusVirtualObject_ChildEvent_Callback qdbusvirtualobject_childevent_callback = nullptr;
    QDBusVirtualObject_CustomEvent_Callback qdbusvirtualobject_customevent_callback = nullptr;
    QDBusVirtualObject_ConnectNotify_Callback qdbusvirtualobject_connectnotify_callback = nullptr;
    QDBusVirtualObject_DisconnectNotify_Callback qdbusvirtualobject_disconnectnotify_callback = nullptr;
    QDBusVirtualObject_Sender_Callback qdbusvirtualobject_sender_callback = nullptr;
    QDBusVirtualObject_SenderSignalIndex_Callback qdbusvirtualobject_sendersignalindex_callback = nullptr;
    QDBusVirtualObject_Receivers_Callback qdbusvirtualobject_receivers_callback = nullptr;
    QDBusVirtualObject_IsSignalConnected_Callback qdbusvirtualobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdbusvirtualobject_metacall_isbase = false;
    mutable bool qdbusvirtualobject_introspect_isbase = false;
    mutable bool qdbusvirtualobject_handlemessage_isbase = false;
    mutable bool qdbusvirtualobject_event_isbase = false;
    mutable bool qdbusvirtualobject_eventfilter_isbase = false;
    mutable bool qdbusvirtualobject_timerevent_isbase = false;
    mutable bool qdbusvirtualobject_childevent_isbase = false;
    mutable bool qdbusvirtualobject_customevent_isbase = false;
    mutable bool qdbusvirtualobject_connectnotify_isbase = false;
    mutable bool qdbusvirtualobject_disconnectnotify_isbase = false;
    mutable bool qdbusvirtualobject_sender_isbase = false;
    mutable bool qdbusvirtualobject_sendersignalindex_isbase = false;
    mutable bool qdbusvirtualobject_receivers_isbase = false;
    mutable bool qdbusvirtualobject_issignalconnected_isbase = false;

  public:
    VirtualQDBusVirtualObject() : QDBusVirtualObject() {};
    VirtualQDBusVirtualObject(QObject* parent) : QDBusVirtualObject(parent) {};

    ~VirtualQDBusVirtualObject() {
        qdbusvirtualobject_metacall_callback = nullptr;
        qdbusvirtualobject_introspect_callback = nullptr;
        qdbusvirtualobject_handlemessage_callback = nullptr;
        qdbusvirtualobject_event_callback = nullptr;
        qdbusvirtualobject_eventfilter_callback = nullptr;
        qdbusvirtualobject_timerevent_callback = nullptr;
        qdbusvirtualobject_childevent_callback = nullptr;
        qdbusvirtualobject_customevent_callback = nullptr;
        qdbusvirtualobject_connectnotify_callback = nullptr;
        qdbusvirtualobject_disconnectnotify_callback = nullptr;
        qdbusvirtualobject_sender_callback = nullptr;
        qdbusvirtualobject_sendersignalindex_callback = nullptr;
        qdbusvirtualobject_receivers_callback = nullptr;
        qdbusvirtualobject_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDBusVirtualObject_Metacall_Callback(QDBusVirtualObject_Metacall_Callback cb) { qdbusvirtualobject_metacall_callback = cb; }
    inline void setQDBusVirtualObject_Introspect_Callback(QDBusVirtualObject_Introspect_Callback cb) { qdbusvirtualobject_introspect_callback = cb; }
    inline void setQDBusVirtualObject_HandleMessage_Callback(QDBusVirtualObject_HandleMessage_Callback cb) { qdbusvirtualobject_handlemessage_callback = cb; }
    inline void setQDBusVirtualObject_Event_Callback(QDBusVirtualObject_Event_Callback cb) { qdbusvirtualobject_event_callback = cb; }
    inline void setQDBusVirtualObject_EventFilter_Callback(QDBusVirtualObject_EventFilter_Callback cb) { qdbusvirtualobject_eventfilter_callback = cb; }
    inline void setQDBusVirtualObject_TimerEvent_Callback(QDBusVirtualObject_TimerEvent_Callback cb) { qdbusvirtualobject_timerevent_callback = cb; }
    inline void setQDBusVirtualObject_ChildEvent_Callback(QDBusVirtualObject_ChildEvent_Callback cb) { qdbusvirtualobject_childevent_callback = cb; }
    inline void setQDBusVirtualObject_CustomEvent_Callback(QDBusVirtualObject_CustomEvent_Callback cb) { qdbusvirtualobject_customevent_callback = cb; }
    inline void setQDBusVirtualObject_ConnectNotify_Callback(QDBusVirtualObject_ConnectNotify_Callback cb) { qdbusvirtualobject_connectnotify_callback = cb; }
    inline void setQDBusVirtualObject_DisconnectNotify_Callback(QDBusVirtualObject_DisconnectNotify_Callback cb) { qdbusvirtualobject_disconnectnotify_callback = cb; }
    inline void setQDBusVirtualObject_Sender_Callback(QDBusVirtualObject_Sender_Callback cb) { qdbusvirtualobject_sender_callback = cb; }
    inline void setQDBusVirtualObject_SenderSignalIndex_Callback(QDBusVirtualObject_SenderSignalIndex_Callback cb) { qdbusvirtualobject_sendersignalindex_callback = cb; }
    inline void setQDBusVirtualObject_Receivers_Callback(QDBusVirtualObject_Receivers_Callback cb) { qdbusvirtualobject_receivers_callback = cb; }
    inline void setQDBusVirtualObject_IsSignalConnected_Callback(QDBusVirtualObject_IsSignalConnected_Callback cb) { qdbusvirtualobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDBusVirtualObject_Metacall_IsBase(bool value) const { qdbusvirtualobject_metacall_isbase = value; }
    inline void setQDBusVirtualObject_Introspect_IsBase(bool value) const { qdbusvirtualobject_introspect_isbase = value; }
    inline void setQDBusVirtualObject_HandleMessage_IsBase(bool value) const { qdbusvirtualobject_handlemessage_isbase = value; }
    inline void setQDBusVirtualObject_Event_IsBase(bool value) const { qdbusvirtualobject_event_isbase = value; }
    inline void setQDBusVirtualObject_EventFilter_IsBase(bool value) const { qdbusvirtualobject_eventfilter_isbase = value; }
    inline void setQDBusVirtualObject_TimerEvent_IsBase(bool value) const { qdbusvirtualobject_timerevent_isbase = value; }
    inline void setQDBusVirtualObject_ChildEvent_IsBase(bool value) const { qdbusvirtualobject_childevent_isbase = value; }
    inline void setQDBusVirtualObject_CustomEvent_IsBase(bool value) const { qdbusvirtualobject_customevent_isbase = value; }
    inline void setQDBusVirtualObject_ConnectNotify_IsBase(bool value) const { qdbusvirtualobject_connectnotify_isbase = value; }
    inline void setQDBusVirtualObject_DisconnectNotify_IsBase(bool value) const { qdbusvirtualobject_disconnectnotify_isbase = value; }
    inline void setQDBusVirtualObject_Sender_IsBase(bool value) const { qdbusvirtualobject_sender_isbase = value; }
    inline void setQDBusVirtualObject_SenderSignalIndex_IsBase(bool value) const { qdbusvirtualobject_sendersignalindex_isbase = value; }
    inline void setQDBusVirtualObject_Receivers_IsBase(bool value) const { qdbusvirtualobject_receivers_isbase = value; }
    inline void setQDBusVirtualObject_IsSignalConnected_IsBase(bool value) const { qdbusvirtualobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdbusvirtualobject_metacall_isbase) {
            qdbusvirtualobject_metacall_isbase = false;
            return QDBusVirtualObject::qt_metacall(param1, param2, param3);
        } else if (qdbusvirtualobject_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdbusvirtualobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusVirtualObject::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString introspect(const QString& path) const override {
        if (qdbusvirtualobject_introspect_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            libqt_string path_str;
            path_str.len = path_b.length();
            path_str.data = static_cast<const char*>(malloc(path_str.len + 1));
            memcpy((void*)path_str.data, path_b.data(), path_str.len);
            ((char*)path_str.data)[path_str.len] = '\0';
            libqt_string cbval1 = path_str;

            const char* callback_ret = qdbusvirtualobject_introspect_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool handleMessage(const QDBusMessage& message, const QDBusConnection& connection) override {
        if (qdbusvirtualobject_handlemessage_callback != nullptr) {
            const QDBusMessage& message_ret = message;
            // Cast returned reference into pointer
            QDBusMessage* cbval1 = const_cast<QDBusMessage*>(&message_ret);
            const QDBusConnection& connection_ret = connection;
            // Cast returned reference into pointer
            QDBusConnection* cbval2 = const_cast<QDBusConnection*>(&connection_ret);

            bool callback_ret = qdbusvirtualobject_handlemessage_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdbusvirtualobject_event_isbase) {
            qdbusvirtualobject_event_isbase = false;
            return QDBusVirtualObject::event(event);
        } else if (qdbusvirtualobject_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdbusvirtualobject_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusVirtualObject::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdbusvirtualobject_eventfilter_isbase) {
            qdbusvirtualobject_eventfilter_isbase = false;
            return QDBusVirtualObject::eventFilter(watched, event);
        } else if (qdbusvirtualobject_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdbusvirtualobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDBusVirtualObject::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdbusvirtualobject_timerevent_isbase) {
            qdbusvirtualobject_timerevent_isbase = false;
            QDBusVirtualObject::timerEvent(event);
        } else if (qdbusvirtualobject_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdbusvirtualobject_timerevent_callback(this, cbval1);
        } else {
            QDBusVirtualObject::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdbusvirtualobject_childevent_isbase) {
            qdbusvirtualobject_childevent_isbase = false;
            QDBusVirtualObject::childEvent(event);
        } else if (qdbusvirtualobject_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdbusvirtualobject_childevent_callback(this, cbval1);
        } else {
            QDBusVirtualObject::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdbusvirtualobject_customevent_isbase) {
            qdbusvirtualobject_customevent_isbase = false;
            QDBusVirtualObject::customEvent(event);
        } else if (qdbusvirtualobject_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdbusvirtualobject_customevent_callback(this, cbval1);
        } else {
            QDBusVirtualObject::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdbusvirtualobject_connectnotify_isbase) {
            qdbusvirtualobject_connectnotify_isbase = false;
            QDBusVirtualObject::connectNotify(signal);
        } else if (qdbusvirtualobject_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbusvirtualobject_connectnotify_callback(this, cbval1);
        } else {
            QDBusVirtualObject::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdbusvirtualobject_disconnectnotify_isbase) {
            qdbusvirtualobject_disconnectnotify_isbase = false;
            QDBusVirtualObject::disconnectNotify(signal);
        } else if (qdbusvirtualobject_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdbusvirtualobject_disconnectnotify_callback(this, cbval1);
        } else {
            QDBusVirtualObject::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdbusvirtualobject_sender_isbase) {
            qdbusvirtualobject_sender_isbase = false;
            return QDBusVirtualObject::sender();
        } else if (qdbusvirtualobject_sender_callback != nullptr) {
            QObject* callback_ret = qdbusvirtualobject_sender_callback();
            return callback_ret;
        } else {
            return QDBusVirtualObject::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdbusvirtualobject_sendersignalindex_isbase) {
            qdbusvirtualobject_sendersignalindex_isbase = false;
            return QDBusVirtualObject::senderSignalIndex();
        } else if (qdbusvirtualobject_sendersignalindex_callback != nullptr) {
            int callback_ret = qdbusvirtualobject_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDBusVirtualObject::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdbusvirtualobject_receivers_isbase) {
            qdbusvirtualobject_receivers_isbase = false;
            return QDBusVirtualObject::receivers(signal);
        } else if (qdbusvirtualobject_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdbusvirtualobject_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDBusVirtualObject::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdbusvirtualobject_issignalconnected_isbase) {
            qdbusvirtualobject_issignalconnected_isbase = false;
            return QDBusVirtualObject::isSignalConnected(signal);
        } else if (qdbusvirtualobject_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdbusvirtualobject_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDBusVirtualObject::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDBusVirtualObject_TimerEvent(QDBusVirtualObject* self, QTimerEvent* event);
    friend void QDBusVirtualObject_QBaseTimerEvent(QDBusVirtualObject* self, QTimerEvent* event);
    friend void QDBusVirtualObject_ChildEvent(QDBusVirtualObject* self, QChildEvent* event);
    friend void QDBusVirtualObject_QBaseChildEvent(QDBusVirtualObject* self, QChildEvent* event);
    friend void QDBusVirtualObject_CustomEvent(QDBusVirtualObject* self, QEvent* event);
    friend void QDBusVirtualObject_QBaseCustomEvent(QDBusVirtualObject* self, QEvent* event);
    friend void QDBusVirtualObject_ConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
    friend void QDBusVirtualObject_QBaseConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
    friend void QDBusVirtualObject_DisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
    friend void QDBusVirtualObject_QBaseDisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal);
    friend QObject* QDBusVirtualObject_Sender(const QDBusVirtualObject* self);
    friend QObject* QDBusVirtualObject_QBaseSender(const QDBusVirtualObject* self);
    friend int QDBusVirtualObject_SenderSignalIndex(const QDBusVirtualObject* self);
    friend int QDBusVirtualObject_QBaseSenderSignalIndex(const QDBusVirtualObject* self);
    friend int QDBusVirtualObject_Receivers(const QDBusVirtualObject* self, const char* signal);
    friend int QDBusVirtualObject_QBaseReceivers(const QDBusVirtualObject* self, const char* signal);
    friend bool QDBusVirtualObject_IsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal);
    friend bool QDBusVirtualObject_QBaseIsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal);
};

#endif
