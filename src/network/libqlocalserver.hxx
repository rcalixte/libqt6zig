#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQLOCALSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLocalServer so that we can call protected methods
class VirtualQLocalServer final : public QLocalServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQLocalServer = true;

    // Virtual class public types (including callbacks)
    using QLocalServer_MetaObject_Callback = QMetaObject* (*)();
    using QLocalServer_Metacast_Callback = void* (*)(QLocalServer*, const char*);
    using QLocalServer_Metacall_Callback = int (*)(QLocalServer*, int, int, void**);
    using QLocalServer_HasPendingConnections_Callback = bool (*)();
    using QLocalServer_NextPendingConnection_Callback = QLocalSocket* (*)();
    using QLocalServer_IncomingConnection_Callback = void (*)(QLocalServer*, uintptr_t);
    using QLocalServer_Event_Callback = bool (*)(QLocalServer*, QEvent*);
    using QLocalServer_EventFilter_Callback = bool (*)(QLocalServer*, QObject*, QEvent*);
    using QLocalServer_TimerEvent_Callback = void (*)(QLocalServer*, QTimerEvent*);
    using QLocalServer_ChildEvent_Callback = void (*)(QLocalServer*, QChildEvent*);
    using QLocalServer_CustomEvent_Callback = void (*)(QLocalServer*, QEvent*);
    using QLocalServer_ConnectNotify_Callback = void (*)(QLocalServer*, QMetaMethod*);
    using QLocalServer_DisconnectNotify_Callback = void (*)(QLocalServer*, QMetaMethod*);
    using QLocalServer_AddPendingConnection_Callback = void (*)(QLocalServer*, QLocalSocket*);
    using QLocalServer_Sender_Callback = QObject* (*)();
    using QLocalServer_SenderSignalIndex_Callback = int (*)();
    using QLocalServer_Receivers_Callback = int (*)(const QLocalServer*, const char*);
    using QLocalServer_IsSignalConnected_Callback = bool (*)(const QLocalServer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QLocalServer_MetaObject_Callback qlocalserver_metaobject_callback = nullptr;
    QLocalServer_Metacast_Callback qlocalserver_metacast_callback = nullptr;
    QLocalServer_Metacall_Callback qlocalserver_metacall_callback = nullptr;
    QLocalServer_HasPendingConnections_Callback qlocalserver_haspendingconnections_callback = nullptr;
    QLocalServer_NextPendingConnection_Callback qlocalserver_nextpendingconnection_callback = nullptr;
    QLocalServer_IncomingConnection_Callback qlocalserver_incomingconnection_callback = nullptr;
    QLocalServer_Event_Callback qlocalserver_event_callback = nullptr;
    QLocalServer_EventFilter_Callback qlocalserver_eventfilter_callback = nullptr;
    QLocalServer_TimerEvent_Callback qlocalserver_timerevent_callback = nullptr;
    QLocalServer_ChildEvent_Callback qlocalserver_childevent_callback = nullptr;
    QLocalServer_CustomEvent_Callback qlocalserver_customevent_callback = nullptr;
    QLocalServer_ConnectNotify_Callback qlocalserver_connectnotify_callback = nullptr;
    QLocalServer_DisconnectNotify_Callback qlocalserver_disconnectnotify_callback = nullptr;
    QLocalServer_AddPendingConnection_Callback qlocalserver_addpendingconnection_callback = nullptr;
    QLocalServer_Sender_Callback qlocalserver_sender_callback = nullptr;
    QLocalServer_SenderSignalIndex_Callback qlocalserver_sendersignalindex_callback = nullptr;
    QLocalServer_Receivers_Callback qlocalserver_receivers_callback = nullptr;
    QLocalServer_IsSignalConnected_Callback qlocalserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlocalserver_metaobject_isbase = false;
    mutable bool qlocalserver_metacast_isbase = false;
    mutable bool qlocalserver_metacall_isbase = false;
    mutable bool qlocalserver_haspendingconnections_isbase = false;
    mutable bool qlocalserver_nextpendingconnection_isbase = false;
    mutable bool qlocalserver_incomingconnection_isbase = false;
    mutable bool qlocalserver_event_isbase = false;
    mutable bool qlocalserver_eventfilter_isbase = false;
    mutable bool qlocalserver_timerevent_isbase = false;
    mutable bool qlocalserver_childevent_isbase = false;
    mutable bool qlocalserver_customevent_isbase = false;
    mutable bool qlocalserver_connectnotify_isbase = false;
    mutable bool qlocalserver_disconnectnotify_isbase = false;
    mutable bool qlocalserver_addpendingconnection_isbase = false;
    mutable bool qlocalserver_sender_isbase = false;
    mutable bool qlocalserver_sendersignalindex_isbase = false;
    mutable bool qlocalserver_receivers_isbase = false;
    mutable bool qlocalserver_issignalconnected_isbase = false;

  public:
    VirtualQLocalServer() : QLocalServer() {};
    VirtualQLocalServer(QObject* parent) : QLocalServer(parent) {};

    // Callback setters
    inline void setQLocalServer_MetaObject_Callback(QLocalServer_MetaObject_Callback cb) { qlocalserver_metaobject_callback = cb; }
    inline void setQLocalServer_Metacast_Callback(QLocalServer_Metacast_Callback cb) { qlocalserver_metacast_callback = cb; }
    inline void setQLocalServer_Metacall_Callback(QLocalServer_Metacall_Callback cb) { qlocalserver_metacall_callback = cb; }
    inline void setQLocalServer_HasPendingConnections_Callback(QLocalServer_HasPendingConnections_Callback cb) { qlocalserver_haspendingconnections_callback = cb; }
    inline void setQLocalServer_NextPendingConnection_Callback(QLocalServer_NextPendingConnection_Callback cb) { qlocalserver_nextpendingconnection_callback = cb; }
    inline void setQLocalServer_IncomingConnection_Callback(QLocalServer_IncomingConnection_Callback cb) { qlocalserver_incomingconnection_callback = cb; }
    inline void setQLocalServer_Event_Callback(QLocalServer_Event_Callback cb) { qlocalserver_event_callback = cb; }
    inline void setQLocalServer_EventFilter_Callback(QLocalServer_EventFilter_Callback cb) { qlocalserver_eventfilter_callback = cb; }
    inline void setQLocalServer_TimerEvent_Callback(QLocalServer_TimerEvent_Callback cb) { qlocalserver_timerevent_callback = cb; }
    inline void setQLocalServer_ChildEvent_Callback(QLocalServer_ChildEvent_Callback cb) { qlocalserver_childevent_callback = cb; }
    inline void setQLocalServer_CustomEvent_Callback(QLocalServer_CustomEvent_Callback cb) { qlocalserver_customevent_callback = cb; }
    inline void setQLocalServer_ConnectNotify_Callback(QLocalServer_ConnectNotify_Callback cb) { qlocalserver_connectnotify_callback = cb; }
    inline void setQLocalServer_DisconnectNotify_Callback(QLocalServer_DisconnectNotify_Callback cb) { qlocalserver_disconnectnotify_callback = cb; }
    inline void setQLocalServer_AddPendingConnection_Callback(QLocalServer_AddPendingConnection_Callback cb) { qlocalserver_addpendingconnection_callback = cb; }
    inline void setQLocalServer_Sender_Callback(QLocalServer_Sender_Callback cb) { qlocalserver_sender_callback = cb; }
    inline void setQLocalServer_SenderSignalIndex_Callback(QLocalServer_SenderSignalIndex_Callback cb) { qlocalserver_sendersignalindex_callback = cb; }
    inline void setQLocalServer_Receivers_Callback(QLocalServer_Receivers_Callback cb) { qlocalserver_receivers_callback = cb; }
    inline void setQLocalServer_IsSignalConnected_Callback(QLocalServer_IsSignalConnected_Callback cb) { qlocalserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQLocalServer_MetaObject_IsBase(bool value) const { qlocalserver_metaobject_isbase = value; }
    inline void setQLocalServer_Metacast_IsBase(bool value) const { qlocalserver_metacast_isbase = value; }
    inline void setQLocalServer_Metacall_IsBase(bool value) const { qlocalserver_metacall_isbase = value; }
    inline void setQLocalServer_HasPendingConnections_IsBase(bool value) const { qlocalserver_haspendingconnections_isbase = value; }
    inline void setQLocalServer_NextPendingConnection_IsBase(bool value) const { qlocalserver_nextpendingconnection_isbase = value; }
    inline void setQLocalServer_IncomingConnection_IsBase(bool value) const { qlocalserver_incomingconnection_isbase = value; }
    inline void setQLocalServer_Event_IsBase(bool value) const { qlocalserver_event_isbase = value; }
    inline void setQLocalServer_EventFilter_IsBase(bool value) const { qlocalserver_eventfilter_isbase = value; }
    inline void setQLocalServer_TimerEvent_IsBase(bool value) const { qlocalserver_timerevent_isbase = value; }
    inline void setQLocalServer_ChildEvent_IsBase(bool value) const { qlocalserver_childevent_isbase = value; }
    inline void setQLocalServer_CustomEvent_IsBase(bool value) const { qlocalserver_customevent_isbase = value; }
    inline void setQLocalServer_ConnectNotify_IsBase(bool value) const { qlocalserver_connectnotify_isbase = value; }
    inline void setQLocalServer_DisconnectNotify_IsBase(bool value) const { qlocalserver_disconnectnotify_isbase = value; }
    inline void setQLocalServer_AddPendingConnection_IsBase(bool value) const { qlocalserver_addpendingconnection_isbase = value; }
    inline void setQLocalServer_Sender_IsBase(bool value) const { qlocalserver_sender_isbase = value; }
    inline void setQLocalServer_SenderSignalIndex_IsBase(bool value) const { qlocalserver_sendersignalindex_isbase = value; }
    inline void setQLocalServer_Receivers_IsBase(bool value) const { qlocalserver_receivers_isbase = value; }
    inline void setQLocalServer_IsSignalConnected_IsBase(bool value) const { qlocalserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlocalserver_metaobject_isbase) {
            qlocalserver_metaobject_isbase = false;
            return QLocalServer::metaObject();
        }
        auto metaobject_cb = qlocalserver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QLocalServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlocalserver_metacast_isbase) {
            qlocalserver_metacast_isbase = false;
            return QLocalServer::qt_metacast(param1);
        }
        auto metacast_cb = qlocalserver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QLocalServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlocalserver_metacall_isbase) {
            qlocalserver_metacall_isbase = false;
            return QLocalServer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlocalserver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLocalServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qlocalserver_haspendingconnections_isbase) {
            qlocalserver_haspendingconnections_isbase = false;
            return QLocalServer::hasPendingConnections();
        }
        auto haspendingconnections_cb = qlocalserver_haspendingconnections_callback;
        if (haspendingconnections_cb) {
            bool callback_ret = haspendingconnections_cb();
            return callback_ret;
        }
        return QLocalServer::hasPendingConnections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLocalSocket* nextPendingConnection() override {
        if (qlocalserver_nextpendingconnection_isbase) {
            qlocalserver_nextpendingconnection_isbase = false;
            return QLocalServer::nextPendingConnection();
        }
        auto nextpendingconnection_cb = qlocalserver_nextpendingconnection_callback;
        if (nextpendingconnection_cb) {
            QLocalSocket* callback_ret = nextpendingconnection_cb();
            return callback_ret;
        }
        return QLocalServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(quintptr socketDescriptor) override {
        if (qlocalserver_incomingconnection_isbase) {
            qlocalserver_incomingconnection_isbase = false;
            QLocalServer::incomingConnection(socketDescriptor);
            return;
        }
        auto incomingconnection_cb = qlocalserver_incomingconnection_callback;
        if (incomingconnection_cb) {
            uintptr_t cbval1 = static_cast<uintptr_t>(socketDescriptor);

            incomingconnection_cb(this, cbval1);
            return;
        }
        QLocalServer::incomingConnection(socketDescriptor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlocalserver_event_isbase) {
            qlocalserver_event_isbase = false;
            return QLocalServer::event(event);
        }
        auto event_cb = qlocalserver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QLocalServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlocalserver_eventfilter_isbase) {
            qlocalserver_eventfilter_isbase = false;
            return QLocalServer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qlocalserver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLocalServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlocalserver_timerevent_isbase) {
            qlocalserver_timerevent_isbase = false;
            QLocalServer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qlocalserver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QLocalServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlocalserver_childevent_isbase) {
            qlocalserver_childevent_isbase = false;
            QLocalServer::childEvent(event);
            return;
        }
        auto childevent_cb = qlocalserver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QLocalServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlocalserver_customevent_isbase) {
            qlocalserver_customevent_isbase = false;
            QLocalServer::customEvent(event);
            return;
        }
        auto customevent_cb = qlocalserver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QLocalServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_connectnotify_isbase) {
            qlocalserver_connectnotify_isbase = false;
            QLocalServer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlocalserver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QLocalServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_disconnectnotify_isbase) {
            qlocalserver_disconnectnotify_isbase = false;
            QLocalServer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlocalserver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QLocalServer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QLocalSocket* socket) {
        if (qlocalserver_addpendingconnection_isbase) {
            qlocalserver_addpendingconnection_isbase = false;
            QLocalServer::addPendingConnection(socket);
            return;
        }
        auto addpendingconnection_cb = qlocalserver_addpendingconnection_callback;
        if (addpendingconnection_cb) {
            QLocalSocket* cbval1 = socket;

            addpendingconnection_cb(this, cbval1);
            return;
        }
        QLocalServer::addPendingConnection(socket);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlocalserver_sender_isbase) {
            qlocalserver_sender_isbase = false;
            return QLocalServer::sender();
        }
        auto sender_cb = qlocalserver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QLocalServer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlocalserver_sendersignalindex_isbase) {
            qlocalserver_sendersignalindex_isbase = false;
            return QLocalServer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlocalserver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QLocalServer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlocalserver_receivers_isbase) {
            qlocalserver_receivers_isbase = false;
            return QLocalServer::receivers(signal);
        }
        auto receivers_cb = qlocalserver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLocalServer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlocalserver_issignalconnected_isbase) {
            qlocalserver_issignalconnected_isbase = false;
            return QLocalServer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlocalserver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QLocalServer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
    friend void QLocalServer_SuperIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
    friend void QLocalServer_TimerEvent(QLocalServer* self, QTimerEvent* event);
    friend void QLocalServer_SuperTimerEvent(QLocalServer* self, QTimerEvent* event);
    friend void QLocalServer_ChildEvent(QLocalServer* self, QChildEvent* event);
    friend void QLocalServer_SuperChildEvent(QLocalServer* self, QChildEvent* event);
    friend void QLocalServer_CustomEvent(QLocalServer* self, QEvent* event);
    friend void QLocalServer_SuperCustomEvent(QLocalServer* self, QEvent* event);
    friend void QLocalServer_ConnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_SuperConnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_DisconnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_SuperDisconnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_AddPendingConnection(QLocalServer* self, QLocalSocket* socket);
    friend void QLocalServer_SuperAddPendingConnection(QLocalServer* self, QLocalSocket* socket);
    friend QObject* QLocalServer_Sender(const QLocalServer* self);
    friend QObject* QLocalServer_SuperSender(const QLocalServer* self);
    friend int QLocalServer_SenderSignalIndex(const QLocalServer* self);
    friend int QLocalServer_SuperSenderSignalIndex(const QLocalServer* self);
    friend int QLocalServer_Receivers(const QLocalServer* self, const char* signal);
    friend int QLocalServer_SuperReceivers(const QLocalServer* self, const char* signal);
    friend bool QLocalServer_IsSignalConnected(const QLocalServer* self, const QMetaMethod* signal);
    friend bool QLocalServer_SuperIsSignalConnected(const QLocalServer* self, const QMetaMethod* signal);
};

#endif
