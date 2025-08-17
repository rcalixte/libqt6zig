#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQSCTPSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQSCTPSERVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSctpServer so that we can call protected methods
class VirtualQSctpServer final : public QSctpServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQSctpServer = true;

    // Virtual class public types (including callbacks)
    using QSctpServer_Metacall_Callback = int (*)(QSctpServer*, int, int, void**);
    using QSctpServer_IncomingConnection_Callback = void (*)(QSctpServer*, intptr_t);
    using QSctpServer_HasPendingConnections_Callback = bool (*)();
    using QSctpServer_NextPendingConnection_Callback = QTcpSocket* (*)();
    using QSctpServer_Event_Callback = bool (*)(QSctpServer*, QEvent*);
    using QSctpServer_EventFilter_Callback = bool (*)(QSctpServer*, QObject*, QEvent*);
    using QSctpServer_TimerEvent_Callback = void (*)(QSctpServer*, QTimerEvent*);
    using QSctpServer_ChildEvent_Callback = void (*)(QSctpServer*, QChildEvent*);
    using QSctpServer_CustomEvent_Callback = void (*)(QSctpServer*, QEvent*);
    using QSctpServer_ConnectNotify_Callback = void (*)(QSctpServer*, QMetaMethod*);
    using QSctpServer_DisconnectNotify_Callback = void (*)(QSctpServer*, QMetaMethod*);
    using QSctpServer_AddPendingConnection_Callback = void (*)(QSctpServer*, QTcpSocket*);
    using QSctpServer_Sender_Callback = QObject* (*)();
    using QSctpServer_SenderSignalIndex_Callback = int (*)();
    using QSctpServer_Receivers_Callback = int (*)(const QSctpServer*, const char*);
    using QSctpServer_IsSignalConnected_Callback = bool (*)(const QSctpServer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSctpServer_Metacall_Callback qsctpserver_metacall_callback = nullptr;
    QSctpServer_IncomingConnection_Callback qsctpserver_incomingconnection_callback = nullptr;
    QSctpServer_HasPendingConnections_Callback qsctpserver_haspendingconnections_callback = nullptr;
    QSctpServer_NextPendingConnection_Callback qsctpserver_nextpendingconnection_callback = nullptr;
    QSctpServer_Event_Callback qsctpserver_event_callback = nullptr;
    QSctpServer_EventFilter_Callback qsctpserver_eventfilter_callback = nullptr;
    QSctpServer_TimerEvent_Callback qsctpserver_timerevent_callback = nullptr;
    QSctpServer_ChildEvent_Callback qsctpserver_childevent_callback = nullptr;
    QSctpServer_CustomEvent_Callback qsctpserver_customevent_callback = nullptr;
    QSctpServer_ConnectNotify_Callback qsctpserver_connectnotify_callback = nullptr;
    QSctpServer_DisconnectNotify_Callback qsctpserver_disconnectnotify_callback = nullptr;
    QSctpServer_AddPendingConnection_Callback qsctpserver_addpendingconnection_callback = nullptr;
    QSctpServer_Sender_Callback qsctpserver_sender_callback = nullptr;
    QSctpServer_SenderSignalIndex_Callback qsctpserver_sendersignalindex_callback = nullptr;
    QSctpServer_Receivers_Callback qsctpserver_receivers_callback = nullptr;
    QSctpServer_IsSignalConnected_Callback qsctpserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsctpserver_metacall_isbase = false;
    mutable bool qsctpserver_incomingconnection_isbase = false;
    mutable bool qsctpserver_haspendingconnections_isbase = false;
    mutable bool qsctpserver_nextpendingconnection_isbase = false;
    mutable bool qsctpserver_event_isbase = false;
    mutable bool qsctpserver_eventfilter_isbase = false;
    mutable bool qsctpserver_timerevent_isbase = false;
    mutable bool qsctpserver_childevent_isbase = false;
    mutable bool qsctpserver_customevent_isbase = false;
    mutable bool qsctpserver_connectnotify_isbase = false;
    mutable bool qsctpserver_disconnectnotify_isbase = false;
    mutable bool qsctpserver_addpendingconnection_isbase = false;
    mutable bool qsctpserver_sender_isbase = false;
    mutable bool qsctpserver_sendersignalindex_isbase = false;
    mutable bool qsctpserver_receivers_isbase = false;
    mutable bool qsctpserver_issignalconnected_isbase = false;

  public:
    VirtualQSctpServer() : QSctpServer() {};
    VirtualQSctpServer(QObject* parent) : QSctpServer(parent) {};

    ~VirtualQSctpServer() {
        qsctpserver_metacall_callback = nullptr;
        qsctpserver_incomingconnection_callback = nullptr;
        qsctpserver_haspendingconnections_callback = nullptr;
        qsctpserver_nextpendingconnection_callback = nullptr;
        qsctpserver_event_callback = nullptr;
        qsctpserver_eventfilter_callback = nullptr;
        qsctpserver_timerevent_callback = nullptr;
        qsctpserver_childevent_callback = nullptr;
        qsctpserver_customevent_callback = nullptr;
        qsctpserver_connectnotify_callback = nullptr;
        qsctpserver_disconnectnotify_callback = nullptr;
        qsctpserver_addpendingconnection_callback = nullptr;
        qsctpserver_sender_callback = nullptr;
        qsctpserver_sendersignalindex_callback = nullptr;
        qsctpserver_receivers_callback = nullptr;
        qsctpserver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSctpServer_Metacall_Callback(QSctpServer_Metacall_Callback cb) { qsctpserver_metacall_callback = cb; }
    inline void setQSctpServer_IncomingConnection_Callback(QSctpServer_IncomingConnection_Callback cb) { qsctpserver_incomingconnection_callback = cb; }
    inline void setQSctpServer_HasPendingConnections_Callback(QSctpServer_HasPendingConnections_Callback cb) { qsctpserver_haspendingconnections_callback = cb; }
    inline void setQSctpServer_NextPendingConnection_Callback(QSctpServer_NextPendingConnection_Callback cb) { qsctpserver_nextpendingconnection_callback = cb; }
    inline void setQSctpServer_Event_Callback(QSctpServer_Event_Callback cb) { qsctpserver_event_callback = cb; }
    inline void setQSctpServer_EventFilter_Callback(QSctpServer_EventFilter_Callback cb) { qsctpserver_eventfilter_callback = cb; }
    inline void setQSctpServer_TimerEvent_Callback(QSctpServer_TimerEvent_Callback cb) { qsctpserver_timerevent_callback = cb; }
    inline void setQSctpServer_ChildEvent_Callback(QSctpServer_ChildEvent_Callback cb) { qsctpserver_childevent_callback = cb; }
    inline void setQSctpServer_CustomEvent_Callback(QSctpServer_CustomEvent_Callback cb) { qsctpserver_customevent_callback = cb; }
    inline void setQSctpServer_ConnectNotify_Callback(QSctpServer_ConnectNotify_Callback cb) { qsctpserver_connectnotify_callback = cb; }
    inline void setQSctpServer_DisconnectNotify_Callback(QSctpServer_DisconnectNotify_Callback cb) { qsctpserver_disconnectnotify_callback = cb; }
    inline void setQSctpServer_AddPendingConnection_Callback(QSctpServer_AddPendingConnection_Callback cb) { qsctpserver_addpendingconnection_callback = cb; }
    inline void setQSctpServer_Sender_Callback(QSctpServer_Sender_Callback cb) { qsctpserver_sender_callback = cb; }
    inline void setQSctpServer_SenderSignalIndex_Callback(QSctpServer_SenderSignalIndex_Callback cb) { qsctpserver_sendersignalindex_callback = cb; }
    inline void setQSctpServer_Receivers_Callback(QSctpServer_Receivers_Callback cb) { qsctpserver_receivers_callback = cb; }
    inline void setQSctpServer_IsSignalConnected_Callback(QSctpServer_IsSignalConnected_Callback cb) { qsctpserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSctpServer_Metacall_IsBase(bool value) const { qsctpserver_metacall_isbase = value; }
    inline void setQSctpServer_IncomingConnection_IsBase(bool value) const { qsctpserver_incomingconnection_isbase = value; }
    inline void setQSctpServer_HasPendingConnections_IsBase(bool value) const { qsctpserver_haspendingconnections_isbase = value; }
    inline void setQSctpServer_NextPendingConnection_IsBase(bool value) const { qsctpserver_nextpendingconnection_isbase = value; }
    inline void setQSctpServer_Event_IsBase(bool value) const { qsctpserver_event_isbase = value; }
    inline void setQSctpServer_EventFilter_IsBase(bool value) const { qsctpserver_eventfilter_isbase = value; }
    inline void setQSctpServer_TimerEvent_IsBase(bool value) const { qsctpserver_timerevent_isbase = value; }
    inline void setQSctpServer_ChildEvent_IsBase(bool value) const { qsctpserver_childevent_isbase = value; }
    inline void setQSctpServer_CustomEvent_IsBase(bool value) const { qsctpserver_customevent_isbase = value; }
    inline void setQSctpServer_ConnectNotify_IsBase(bool value) const { qsctpserver_connectnotify_isbase = value; }
    inline void setQSctpServer_DisconnectNotify_IsBase(bool value) const { qsctpserver_disconnectnotify_isbase = value; }
    inline void setQSctpServer_AddPendingConnection_IsBase(bool value) const { qsctpserver_addpendingconnection_isbase = value; }
    inline void setQSctpServer_Sender_IsBase(bool value) const { qsctpserver_sender_isbase = value; }
    inline void setQSctpServer_SenderSignalIndex_IsBase(bool value) const { qsctpserver_sendersignalindex_isbase = value; }
    inline void setQSctpServer_Receivers_IsBase(bool value) const { qsctpserver_receivers_isbase = value; }
    inline void setQSctpServer_IsSignalConnected_IsBase(bool value) const { qsctpserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsctpserver_metacall_isbase) {
            qsctpserver_metacall_isbase = false;
            return QSctpServer::qt_metacall(param1, param2, param3);
        } else if (qsctpserver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsctpserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSctpServer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr handle) override {
        if (qsctpserver_incomingconnection_isbase) {
            qsctpserver_incomingconnection_isbase = false;
            QSctpServer::incomingConnection(handle);
        } else if (qsctpserver_incomingconnection_callback != nullptr) {
            qintptr handle_ret = handle;
            intptr_t cbval1 = (intptr_t)(handle_ret);

            qsctpserver_incomingconnection_callback(this, cbval1);
        } else {
            QSctpServer::incomingConnection(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qsctpserver_haspendingconnections_isbase) {
            qsctpserver_haspendingconnections_isbase = false;
            return QSctpServer::hasPendingConnections();
        } else if (qsctpserver_haspendingconnections_callback != nullptr) {
            bool callback_ret = qsctpserver_haspendingconnections_callback();
            return callback_ret;
        } else {
            return QSctpServer::hasPendingConnections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qsctpserver_nextpendingconnection_isbase) {
            qsctpserver_nextpendingconnection_isbase = false;
            return QSctpServer::nextPendingConnection();
        } else if (qsctpserver_nextpendingconnection_callback != nullptr) {
            QTcpSocket* callback_ret = qsctpserver_nextpendingconnection_callback();
            return callback_ret;
        } else {
            return QSctpServer::nextPendingConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsctpserver_event_isbase) {
            qsctpserver_event_isbase = false;
            return QSctpServer::event(event);
        } else if (qsctpserver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsctpserver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpServer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsctpserver_eventfilter_isbase) {
            qsctpserver_eventfilter_isbase = false;
            return QSctpServer::eventFilter(watched, event);
        } else if (qsctpserver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsctpserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSctpServer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsctpserver_timerevent_isbase) {
            qsctpserver_timerevent_isbase = false;
            QSctpServer::timerEvent(event);
        } else if (qsctpserver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsctpserver_timerevent_callback(this, cbval1);
        } else {
            QSctpServer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsctpserver_childevent_isbase) {
            qsctpserver_childevent_isbase = false;
            QSctpServer::childEvent(event);
        } else if (qsctpserver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsctpserver_childevent_callback(this, cbval1);
        } else {
            QSctpServer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsctpserver_customevent_isbase) {
            qsctpserver_customevent_isbase = false;
            QSctpServer::customEvent(event);
        } else if (qsctpserver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsctpserver_customevent_callback(this, cbval1);
        } else {
            QSctpServer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsctpserver_connectnotify_isbase) {
            qsctpserver_connectnotify_isbase = false;
            QSctpServer::connectNotify(signal);
        } else if (qsctpserver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsctpserver_connectnotify_callback(this, cbval1);
        } else {
            QSctpServer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsctpserver_disconnectnotify_isbase) {
            qsctpserver_disconnectnotify_isbase = false;
            QSctpServer::disconnectNotify(signal);
        } else if (qsctpserver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsctpserver_disconnectnotify_callback(this, cbval1);
        } else {
            QSctpServer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QTcpSocket* socket) {
        if (qsctpserver_addpendingconnection_isbase) {
            qsctpserver_addpendingconnection_isbase = false;
            QSctpServer::addPendingConnection(socket);
        } else if (qsctpserver_addpendingconnection_callback != nullptr) {
            QTcpSocket* cbval1 = socket;

            qsctpserver_addpendingconnection_callback(this, cbval1);
        } else {
            QSctpServer::addPendingConnection(socket);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsctpserver_sender_isbase) {
            qsctpserver_sender_isbase = false;
            return QSctpServer::sender();
        } else if (qsctpserver_sender_callback != nullptr) {
            QObject* callback_ret = qsctpserver_sender_callback();
            return callback_ret;
        } else {
            return QSctpServer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsctpserver_sendersignalindex_isbase) {
            qsctpserver_sendersignalindex_isbase = false;
            return QSctpServer::senderSignalIndex();
        } else if (qsctpserver_sendersignalindex_callback != nullptr) {
            int callback_ret = qsctpserver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSctpServer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsctpserver_receivers_isbase) {
            qsctpserver_receivers_isbase = false;
            return QSctpServer::receivers(signal);
        } else if (qsctpserver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsctpserver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSctpServer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsctpserver_issignalconnected_isbase) {
            qsctpserver_issignalconnected_isbase = false;
            return QSctpServer::isSignalConnected(signal);
        } else if (qsctpserver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsctpserver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpServer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSctpServer_IncomingConnection(QSctpServer* self, intptr_t handle);
    friend void QSctpServer_QBaseIncomingConnection(QSctpServer* self, intptr_t handle);
    friend void QSctpServer_TimerEvent(QSctpServer* self, QTimerEvent* event);
    friend void QSctpServer_QBaseTimerEvent(QSctpServer* self, QTimerEvent* event);
    friend void QSctpServer_ChildEvent(QSctpServer* self, QChildEvent* event);
    friend void QSctpServer_QBaseChildEvent(QSctpServer* self, QChildEvent* event);
    friend void QSctpServer_CustomEvent(QSctpServer* self, QEvent* event);
    friend void QSctpServer_QBaseCustomEvent(QSctpServer* self, QEvent* event);
    friend void QSctpServer_ConnectNotify(QSctpServer* self, const QMetaMethod* signal);
    friend void QSctpServer_QBaseConnectNotify(QSctpServer* self, const QMetaMethod* signal);
    friend void QSctpServer_DisconnectNotify(QSctpServer* self, const QMetaMethod* signal);
    friend void QSctpServer_QBaseDisconnectNotify(QSctpServer* self, const QMetaMethod* signal);
    friend void QSctpServer_AddPendingConnection(QSctpServer* self, QTcpSocket* socket);
    friend void QSctpServer_QBaseAddPendingConnection(QSctpServer* self, QTcpSocket* socket);
    friend QObject* QSctpServer_Sender(const QSctpServer* self);
    friend QObject* QSctpServer_QBaseSender(const QSctpServer* self);
    friend int QSctpServer_SenderSignalIndex(const QSctpServer* self);
    friend int QSctpServer_QBaseSenderSignalIndex(const QSctpServer* self);
    friend int QSctpServer_Receivers(const QSctpServer* self, const char* signal);
    friend int QSctpServer_QBaseReceivers(const QSctpServer* self, const char* signal);
    friend bool QSctpServer_IsSignalConnected(const QSctpServer* self, const QMetaMethod* signal);
    friend bool QSctpServer_QBaseIsSignalConnected(const QSctpServer* self, const QMetaMethod* signal);
};

#endif
