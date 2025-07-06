#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQSSLSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQSSLSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSslServer so that we can call protected methods
class VirtualQSslServer final : public QSslServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQSslServer = true;

    // Virtual class public types (including callbacks)
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

    ~VirtualQSslServer() {
        qsslserver_metacall_callback = nullptr;
        qsslserver_incomingconnection_callback = nullptr;
        qsslserver_haspendingconnections_callback = nullptr;
        qsslserver_nextpendingconnection_callback = nullptr;
        qsslserver_event_callback = nullptr;
        qsslserver_eventfilter_callback = nullptr;
        qsslserver_timerevent_callback = nullptr;
        qsslserver_childevent_callback = nullptr;
        qsslserver_customevent_callback = nullptr;
        qsslserver_connectnotify_callback = nullptr;
        qsslserver_disconnectnotify_callback = nullptr;
        qsslserver_addpendingconnection_callback = nullptr;
        qsslserver_sender_callback = nullptr;
        qsslserver_sendersignalindex_callback = nullptr;
        qsslserver_receivers_callback = nullptr;
        qsslserver_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsslserver_metacall_isbase) {
            qsslserver_metacall_isbase = false;
            return QSslServer::qt_metacall(param1, param2, param3);
        } else if (qsslserver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsslserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSslServer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr socket) override {
        if (qsslserver_incomingconnection_isbase) {
            qsslserver_incomingconnection_isbase = false;
            QSslServer::incomingConnection(socket);
        } else if (qsslserver_incomingconnection_callback != nullptr) {
            qintptr socket_ret = socket;
            intptr_t cbval1 = (intptr_t)(socket_ret);

            qsslserver_incomingconnection_callback(this, cbval1);
        } else {
            QSslServer::incomingConnection(socket);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qsslserver_haspendingconnections_isbase) {
            qsslserver_haspendingconnections_isbase = false;
            return QSslServer::hasPendingConnections();
        } else if (qsslserver_haspendingconnections_callback != nullptr) {
            bool callback_ret = qsslserver_haspendingconnections_callback();
            return callback_ret;
        } else {
            return QSslServer::hasPendingConnections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qsslserver_nextpendingconnection_isbase) {
            qsslserver_nextpendingconnection_isbase = false;
            return QSslServer::nextPendingConnection();
        } else if (qsslserver_nextpendingconnection_callback != nullptr) {
            QTcpSocket* callback_ret = qsslserver_nextpendingconnection_callback();
            return callback_ret;
        } else {
            return QSslServer::nextPendingConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsslserver_event_isbase) {
            qsslserver_event_isbase = false;
            return QSslServer::event(event);
        } else if (qsslserver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsslserver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSslServer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsslserver_eventfilter_isbase) {
            qsslserver_eventfilter_isbase = false;
            return QSslServer::eventFilter(watched, event);
        } else if (qsslserver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsslserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSslServer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsslserver_timerevent_isbase) {
            qsslserver_timerevent_isbase = false;
            QSslServer::timerEvent(event);
        } else if (qsslserver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsslserver_timerevent_callback(this, cbval1);
        } else {
            QSslServer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsslserver_childevent_isbase) {
            qsslserver_childevent_isbase = false;
            QSslServer::childEvent(event);
        } else if (qsslserver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsslserver_childevent_callback(this, cbval1);
        } else {
            QSslServer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsslserver_customevent_isbase) {
            qsslserver_customevent_isbase = false;
            QSslServer::customEvent(event);
        } else if (qsslserver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsslserver_customevent_callback(this, cbval1);
        } else {
            QSslServer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsslserver_connectnotify_isbase) {
            qsslserver_connectnotify_isbase = false;
            QSslServer::connectNotify(signal);
        } else if (qsslserver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsslserver_connectnotify_callback(this, cbval1);
        } else {
            QSslServer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsslserver_disconnectnotify_isbase) {
            qsslserver_disconnectnotify_isbase = false;
            QSslServer::disconnectNotify(signal);
        } else if (qsslserver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsslserver_disconnectnotify_callback(this, cbval1);
        } else {
            QSslServer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QTcpSocket* socket) {
        if (qsslserver_addpendingconnection_isbase) {
            qsslserver_addpendingconnection_isbase = false;
            QSslServer::addPendingConnection(socket);
        } else if (qsslserver_addpendingconnection_callback != nullptr) {
            QTcpSocket* cbval1 = socket;

            qsslserver_addpendingconnection_callback(this, cbval1);
        } else {
            QSslServer::addPendingConnection(socket);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsslserver_sender_isbase) {
            qsslserver_sender_isbase = false;
            return QSslServer::sender();
        } else if (qsslserver_sender_callback != nullptr) {
            QObject* callback_ret = qsslserver_sender_callback();
            return callback_ret;
        } else {
            return QSslServer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsslserver_sendersignalindex_isbase) {
            qsslserver_sendersignalindex_isbase = false;
            return QSslServer::senderSignalIndex();
        } else if (qsslserver_sendersignalindex_callback != nullptr) {
            int callback_ret = qsslserver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSslServer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsslserver_receivers_isbase) {
            qsslserver_receivers_isbase = false;
            return QSslServer::receivers(signal);
        } else if (qsslserver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsslserver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSslServer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsslserver_issignalconnected_isbase) {
            qsslserver_issignalconnected_isbase = false;
            return QSslServer::isSignalConnected(signal);
        } else if (qsslserver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsslserver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSslServer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket);
    friend void QSslServer_QBaseIncomingConnection(QSslServer* self, intptr_t socket);
    friend void QSslServer_TimerEvent(QSslServer* self, QTimerEvent* event);
    friend void QSslServer_QBaseTimerEvent(QSslServer* self, QTimerEvent* event);
    friend void QSslServer_ChildEvent(QSslServer* self, QChildEvent* event);
    friend void QSslServer_QBaseChildEvent(QSslServer* self, QChildEvent* event);
    friend void QSslServer_CustomEvent(QSslServer* self, QEvent* event);
    friend void QSslServer_QBaseCustomEvent(QSslServer* self, QEvent* event);
    friend void QSslServer_ConnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_QBaseConnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_DisconnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_QBaseDisconnectNotify(QSslServer* self, const QMetaMethod* signal);
    friend void QSslServer_AddPendingConnection(QSslServer* self, QTcpSocket* socket);
    friend void QSslServer_QBaseAddPendingConnection(QSslServer* self, QTcpSocket* socket);
    friend QObject* QSslServer_Sender(const QSslServer* self);
    friend QObject* QSslServer_QBaseSender(const QSslServer* self);
    friend int QSslServer_SenderSignalIndex(const QSslServer* self);
    friend int QSslServer_QBaseSenderSignalIndex(const QSslServer* self);
    friend int QSslServer_Receivers(const QSslServer* self, const char* signal);
    friend int QSslServer_QBaseReceivers(const QSslServer* self, const char* signal);
    friend bool QSslServer_IsSignalConnected(const QSslServer* self, const QMetaMethod* signal);
    friend bool QSslServer_QBaseIsSignalConnected(const QSslServer* self, const QMetaMethod* signal);
};

#endif
