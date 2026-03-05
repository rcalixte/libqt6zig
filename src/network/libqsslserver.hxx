#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQSSLSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQSSLSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSslServer so that we can call protected methods
class VirtualQSslServer final : public QSslServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQSslServer = true;

    // Virtual class public types (including callbacks)
    using QSslServer_MetaObject_Callback = QMetaObject* (*)();
    using QSslServer_Metacast_Callback = void* (*)(QSslServer*, const char*);
    using QSslServer_Metacall_Callback = int (*)(QSslServer*, int, int, void**);
    using QSslServer_IncomingConnection_Callback = void (*)(QSslServer*, intptr_t);
    using QSslServer_HasPendingConnections_Callback = bool (*)();
    using QSslServer_NextPendingConnection_Callback = QTcpSocket* (*)();
    using QSslServer_Event_Callback = bool (*)(QSslServer*, QEvent*);
    using QSslServer_EventFilter_Callback = bool (*)(QSslServer*, QObject*, QEvent*);
    using QSslServer_TimerEvent_Callback = void (*)(QSslServer*, QTimerEvent*);
    using QSslServer_ChildEvent_Callback = void (*)(QSslServer*, QChildEvent*);
    using QSslServer_CustomEvent_Callback = void (*)(QSslServer*, QEvent*);
    using QSslServer_ConnectNotify_Callback = void (*)(QSslServer*, QMetaMethod*);
    using QSslServer_DisconnectNotify_Callback = void (*)(QSslServer*, QMetaMethod*);
    using QSslServer_AddPendingConnection_Callback = void (*)(QSslServer*, QTcpSocket*);
    using QSslServer_Sender_Callback = QObject* (*)();
    using QSslServer_SenderSignalIndex_Callback = int (*)();
    using QSslServer_Receivers_Callback = int (*)(const QSslServer*, const char*);
    using QSslServer_IsSignalConnected_Callback = bool (*)(const QSslServer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSslServer_MetaObject_Callback qsslserver_metaobject_callback = nullptr;
    QSslServer_Metacast_Callback qsslserver_metacast_callback = nullptr;
    QSslServer_Metacall_Callback qsslserver_metacall_callback = nullptr;
    QSslServer_IncomingConnection_Callback qsslserver_incomingconnection_callback = nullptr;
    QSslServer_HasPendingConnections_Callback qsslserver_haspendingconnections_callback = nullptr;
    QSslServer_NextPendingConnection_Callback qsslserver_nextpendingconnection_callback = nullptr;
    QSslServer_Event_Callback qsslserver_event_callback = nullptr;
    QSslServer_EventFilter_Callback qsslserver_eventfilter_callback = nullptr;
    QSslServer_TimerEvent_Callback qsslserver_timerevent_callback = nullptr;
    QSslServer_ChildEvent_Callback qsslserver_childevent_callback = nullptr;
    QSslServer_CustomEvent_Callback qsslserver_customevent_callback = nullptr;
    QSslServer_ConnectNotify_Callback qsslserver_connectnotify_callback = nullptr;
    QSslServer_DisconnectNotify_Callback qsslserver_disconnectnotify_callback = nullptr;
    QSslServer_AddPendingConnection_Callback qsslserver_addpendingconnection_callback = nullptr;
    QSslServer_Sender_Callback qsslserver_sender_callback = nullptr;
    QSslServer_SenderSignalIndex_Callback qsslserver_sendersignalindex_callback = nullptr;
    QSslServer_Receivers_Callback qsslserver_receivers_callback = nullptr;
    QSslServer_IsSignalConnected_Callback qsslserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsslserver_metaobject_isbase = false;
    mutable bool qsslserver_metacast_isbase = false;
    mutable bool qsslserver_metacall_isbase = false;
    mutable bool qsslserver_incomingconnection_isbase = false;
    mutable bool qsslserver_haspendingconnections_isbase = false;
    mutable bool qsslserver_nextpendingconnection_isbase = false;
    mutable bool qsslserver_event_isbase = false;
    mutable bool qsslserver_eventfilter_isbase = false;
    mutable bool qsslserver_timerevent_isbase = false;
    mutable bool qsslserver_childevent_isbase = false;
    mutable bool qsslserver_customevent_isbase = false;
    mutable bool qsslserver_connectnotify_isbase = false;
    mutable bool qsslserver_disconnectnotify_isbase = false;
    mutable bool qsslserver_addpendingconnection_isbase = false;
    mutable bool qsslserver_sender_isbase = false;
    mutable bool qsslserver_sendersignalindex_isbase = false;
    mutable bool qsslserver_receivers_isbase = false;
    mutable bool qsslserver_issignalconnected_isbase = false;

  public:
    VirtualQSslServer() : QSslServer() {};
    VirtualQSslServer(QObject* parent) : QSslServer(parent) {};

    // Callback setters
    inline void setQSslServer_MetaObject_Callback(QSslServer_MetaObject_Callback cb) { qsslserver_metaobject_callback = cb; }
    inline void setQSslServer_Metacast_Callback(QSslServer_Metacast_Callback cb) { qsslserver_metacast_callback = cb; }
    inline void setQSslServer_Metacall_Callback(QSslServer_Metacall_Callback cb) { qsslserver_metacall_callback = cb; }
    inline void setQSslServer_IncomingConnection_Callback(QSslServer_IncomingConnection_Callback cb) { qsslserver_incomingconnection_callback = cb; }
    inline void setQSslServer_HasPendingConnections_Callback(QSslServer_HasPendingConnections_Callback cb) { qsslserver_haspendingconnections_callback = cb; }
    inline void setQSslServer_NextPendingConnection_Callback(QSslServer_NextPendingConnection_Callback cb) { qsslserver_nextpendingconnection_callback = cb; }
    inline void setQSslServer_Event_Callback(QSslServer_Event_Callback cb) { qsslserver_event_callback = cb; }
    inline void setQSslServer_EventFilter_Callback(QSslServer_EventFilter_Callback cb) { qsslserver_eventfilter_callback = cb; }
    inline void setQSslServer_TimerEvent_Callback(QSslServer_TimerEvent_Callback cb) { qsslserver_timerevent_callback = cb; }
    inline void setQSslServer_ChildEvent_Callback(QSslServer_ChildEvent_Callback cb) { qsslserver_childevent_callback = cb; }
    inline void setQSslServer_CustomEvent_Callback(QSslServer_CustomEvent_Callback cb) { qsslserver_customevent_callback = cb; }
    inline void setQSslServer_ConnectNotify_Callback(QSslServer_ConnectNotify_Callback cb) { qsslserver_connectnotify_callback = cb; }
    inline void setQSslServer_DisconnectNotify_Callback(QSslServer_DisconnectNotify_Callback cb) { qsslserver_disconnectnotify_callback = cb; }
    inline void setQSslServer_AddPendingConnection_Callback(QSslServer_AddPendingConnection_Callback cb) { qsslserver_addpendingconnection_callback = cb; }
    inline void setQSslServer_Sender_Callback(QSslServer_Sender_Callback cb) { qsslserver_sender_callback = cb; }
    inline void setQSslServer_SenderSignalIndex_Callback(QSslServer_SenderSignalIndex_Callback cb) { qsslserver_sendersignalindex_callback = cb; }
    inline void setQSslServer_Receivers_Callback(QSslServer_Receivers_Callback cb) { qsslserver_receivers_callback = cb; }
    inline void setQSslServer_IsSignalConnected_Callback(QSslServer_IsSignalConnected_Callback cb) { qsslserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSslServer_MetaObject_IsBase(bool value) const { qsslserver_metaobject_isbase = value; }
    inline void setQSslServer_Metacast_IsBase(bool value) const { qsslserver_metacast_isbase = value; }
    inline void setQSslServer_Metacall_IsBase(bool value) const { qsslserver_metacall_isbase = value; }
    inline void setQSslServer_IncomingConnection_IsBase(bool value) const { qsslserver_incomingconnection_isbase = value; }
    inline void setQSslServer_HasPendingConnections_IsBase(bool value) const { qsslserver_haspendingconnections_isbase = value; }
    inline void setQSslServer_NextPendingConnection_IsBase(bool value) const { qsslserver_nextpendingconnection_isbase = value; }
    inline void setQSslServer_Event_IsBase(bool value) const { qsslserver_event_isbase = value; }
    inline void setQSslServer_EventFilter_IsBase(bool value) const { qsslserver_eventfilter_isbase = value; }
    inline void setQSslServer_TimerEvent_IsBase(bool value) const { qsslserver_timerevent_isbase = value; }
    inline void setQSslServer_ChildEvent_IsBase(bool value) const { qsslserver_childevent_isbase = value; }
    inline void setQSslServer_CustomEvent_IsBase(bool value) const { qsslserver_customevent_isbase = value; }
    inline void setQSslServer_ConnectNotify_IsBase(bool value) const { qsslserver_connectnotify_isbase = value; }
    inline void setQSslServer_DisconnectNotify_IsBase(bool value) const { qsslserver_disconnectnotify_isbase = value; }
    inline void setQSslServer_AddPendingConnection_IsBase(bool value) const { qsslserver_addpendingconnection_isbase = value; }
    inline void setQSslServer_Sender_IsBase(bool value) const { qsslserver_sender_isbase = value; }
    inline void setQSslServer_SenderSignalIndex_IsBase(bool value) const { qsslserver_sendersignalindex_isbase = value; }
    inline void setQSslServer_Receivers_IsBase(bool value) const { qsslserver_receivers_isbase = value; }
    inline void setQSslServer_IsSignalConnected_IsBase(bool value) const { qsslserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsslserver_metaobject_isbase) {
            qsslserver_metaobject_isbase = false;
            return QSslServer::metaObject();
        }
        auto metaobject_cb = qsslserver_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSslServer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsslserver_metacast_isbase) {
            qsslserver_metacast_isbase = false;
            return QSslServer::qt_metacast(param1);
        }
        auto metacast_cb = qsslserver_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSslServer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsslserver_metacall_isbase) {
            qsslserver_metacall_isbase = false;
            return QSslServer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsslserver_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSslServer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr socket) override {
        if (qsslserver_incomingconnection_isbase) {
            qsslserver_incomingconnection_isbase = false;
            QSslServer::incomingConnection(socket);
            return;
        }
        auto incomingconnection_cb = qsslserver_incomingconnection_callback;
        if (incomingconnection_cb) {
            qintptr socket_ret = socket;
            intptr_t cbval1 = (intptr_t)(socket_ret);

            incomingconnection_cb(this, cbval1);
            return;
        }
        QSslServer::incomingConnection(socket);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qsslserver_haspendingconnections_isbase) {
            qsslserver_haspendingconnections_isbase = false;
            return QSslServer::hasPendingConnections();
        }
        auto haspendingconnections_cb = qsslserver_haspendingconnections_callback;
        if (haspendingconnections_cb) {
            bool callback_ret = haspendingconnections_cb();
            return callback_ret;
        }
        return QSslServer::hasPendingConnections();
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qsslserver_nextpendingconnection_isbase) {
            qsslserver_nextpendingconnection_isbase = false;
            return QSslServer::nextPendingConnection();
        }
        auto nextpendingconnection_cb = qsslserver_nextpendingconnection_callback;
        if (nextpendingconnection_cb) {
            QTcpSocket* callback_ret = nextpendingconnection_cb();
            return callback_ret;
        }
        return QSslServer::nextPendingConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsslserver_event_isbase) {
            qsslserver_event_isbase = false;
            return QSslServer::event(event);
        }
        auto event_cb = qsslserver_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSslServer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsslserver_eventfilter_isbase) {
            qsslserver_eventfilter_isbase = false;
            return QSslServer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsslserver_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSslServer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsslserver_timerevent_isbase) {
            qsslserver_timerevent_isbase = false;
            QSslServer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsslserver_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSslServer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsslserver_childevent_isbase) {
            qsslserver_childevent_isbase = false;
            QSslServer::childEvent(event);
            return;
        }
        auto childevent_cb = qsslserver_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSslServer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsslserver_customevent_isbase) {
            qsslserver_customevent_isbase = false;
            QSslServer::customEvent(event);
            return;
        }
        auto customevent_cb = qsslserver_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSslServer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsslserver_connectnotify_isbase) {
            qsslserver_connectnotify_isbase = false;
            QSslServer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsslserver_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSslServer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsslserver_disconnectnotify_isbase) {
            qsslserver_disconnectnotify_isbase = false;
            QSslServer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsslserver_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSslServer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QTcpSocket* socket) {
        if (qsslserver_addpendingconnection_isbase) {
            qsslserver_addpendingconnection_isbase = false;
            QSslServer::addPendingConnection(socket);
            return;
        }
        auto addpendingconnection_cb = qsslserver_addpendingconnection_callback;
        if (addpendingconnection_cb) {
            QTcpSocket* cbval1 = socket;

            addpendingconnection_cb(this, cbval1);
            return;
        }
        QSslServer::addPendingConnection(socket);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsslserver_sender_isbase) {
            qsslserver_sender_isbase = false;
            return QSslServer::sender();
        }
        auto sender_cb = qsslserver_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSslServer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsslserver_sendersignalindex_isbase) {
            qsslserver_sendersignalindex_isbase = false;
            return QSslServer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsslserver_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSslServer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsslserver_receivers_isbase) {
            qsslserver_receivers_isbase = false;
            return QSslServer::receivers(signal);
        }
        auto receivers_cb = qsslserver_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSslServer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsslserver_issignalconnected_isbase) {
            qsslserver_issignalconnected_isbase = false;
            return QSslServer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsslserver_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSslServer::isSignalConnected(signal);
    }

    // Friend functions
    friend void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket);
    friend void QSslServer_SuperIncomingConnection(QSslServer* self, intptr_t socket);
    friend void QSslServer_TimerEvent(QSslServer* self, QTimerEvent* event);
    friend void QSslServer_SuperTimerEvent(QSslServer* self, QTimerEvent* event);
    friend void QSslServer_ChildEvent(QSslServer* self, QChildEvent* event);
    friend void QSslServer_SuperChildEvent(QSslServer* self, QChildEvent* event);
    friend void QSslServer_CustomEvent(QSslServer* self, QEvent* event);
    friend void QSslServer_SuperCustomEvent(QSslServer* self, QEvent* event);
    friend void QSslServer_ConnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_SuperConnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_DisconnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_SuperDisconnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_AddPendingConnection(QSslServer* self, QTcpSocket* socket);
    friend void QSslServer_SuperAddPendingConnection(QSslServer* self, QTcpSocket* socket);
    friend QObject* QSslServer_Sender(const QSslServer* self);
    friend QObject* QSslServer_SuperSender(const QSslServer* self);
    friend int QSslServer_SenderSignalIndex(const QSslServer* self);
    friend int QSslServer_SuperSenderSignalIndex(const QSslServer* self);
    friend int QSslServer_Receivers(const QSslServer* self, const char* signal);
    friend int QSslServer_SuperReceivers(const QSslServer* self, const char* signal);
    friend bool QSslServer_IsSignalConnected(const QSslServer* self, const QMetaMethod* signal);
    friend bool QSslServer_SuperIsSignalConnected(const QSslServer* self, const QMetaMethod* signal);
};

#endif
