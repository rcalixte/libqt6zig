#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQTCPSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQTCPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTcpServer so that we can call protected methods
class VirtualQTcpServer final : public QTcpServer {

  public:
    // Virtual class boolean flag
    bool isVirtualQTcpServer = true;

    // Virtual class public types (including callbacks)
    using QTcpServer_Metacall_Callback = int (*)(QTcpServer*, int, int, void**);
    using QTcpServer_HasPendingConnections_Callback = bool (*)();
    using QTcpServer_NextPendingConnection_Callback = QTcpSocket* (*)();
    using QTcpServer_IncomingConnection_Callback = void (*)(QTcpServer*, intptr_t);
    using QTcpServer_Event_Callback = bool (*)(QTcpServer*, QEvent*);
    using QTcpServer_EventFilter_Callback = bool (*)(QTcpServer*, QObject*, QEvent*);
    using QTcpServer_TimerEvent_Callback = void (*)(QTcpServer*, QTimerEvent*);
    using QTcpServer_ChildEvent_Callback = void (*)(QTcpServer*, QChildEvent*);
    using QTcpServer_CustomEvent_Callback = void (*)(QTcpServer*, QEvent*);
    using QTcpServer_ConnectNotify_Callback = void (*)(QTcpServer*, QMetaMethod*);
    using QTcpServer_DisconnectNotify_Callback = void (*)(QTcpServer*, QMetaMethod*);
    using QTcpServer_AddPendingConnection_Callback = void (*)(QTcpServer*, QTcpSocket*);
    using QTcpServer_Sender_Callback = QObject* (*)();
    using QTcpServer_SenderSignalIndex_Callback = int (*)();
    using QTcpServer_Receivers_Callback = int (*)(const QTcpServer*, const char*);
    using QTcpServer_IsSignalConnected_Callback = bool (*)(const QTcpServer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTcpServer_Metacall_Callback qtcpserver_metacall_callback = nullptr;
    QTcpServer_HasPendingConnections_Callback qtcpserver_haspendingconnections_callback = nullptr;
    QTcpServer_NextPendingConnection_Callback qtcpserver_nextpendingconnection_callback = nullptr;
    QTcpServer_IncomingConnection_Callback qtcpserver_incomingconnection_callback = nullptr;
    QTcpServer_Event_Callback qtcpserver_event_callback = nullptr;
    QTcpServer_EventFilter_Callback qtcpserver_eventfilter_callback = nullptr;
    QTcpServer_TimerEvent_Callback qtcpserver_timerevent_callback = nullptr;
    QTcpServer_ChildEvent_Callback qtcpserver_childevent_callback = nullptr;
    QTcpServer_CustomEvent_Callback qtcpserver_customevent_callback = nullptr;
    QTcpServer_ConnectNotify_Callback qtcpserver_connectnotify_callback = nullptr;
    QTcpServer_DisconnectNotify_Callback qtcpserver_disconnectnotify_callback = nullptr;
    QTcpServer_AddPendingConnection_Callback qtcpserver_addpendingconnection_callback = nullptr;
    QTcpServer_Sender_Callback qtcpserver_sender_callback = nullptr;
    QTcpServer_SenderSignalIndex_Callback qtcpserver_sendersignalindex_callback = nullptr;
    QTcpServer_Receivers_Callback qtcpserver_receivers_callback = nullptr;
    QTcpServer_IsSignalConnected_Callback qtcpserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtcpserver_metacall_isbase = false;
    mutable bool qtcpserver_haspendingconnections_isbase = false;
    mutable bool qtcpserver_nextpendingconnection_isbase = false;
    mutable bool qtcpserver_incomingconnection_isbase = false;
    mutable bool qtcpserver_event_isbase = false;
    mutable bool qtcpserver_eventfilter_isbase = false;
    mutable bool qtcpserver_timerevent_isbase = false;
    mutable bool qtcpserver_childevent_isbase = false;
    mutable bool qtcpserver_customevent_isbase = false;
    mutable bool qtcpserver_connectnotify_isbase = false;
    mutable bool qtcpserver_disconnectnotify_isbase = false;
    mutable bool qtcpserver_addpendingconnection_isbase = false;
    mutable bool qtcpserver_sender_isbase = false;
    mutable bool qtcpserver_sendersignalindex_isbase = false;
    mutable bool qtcpserver_receivers_isbase = false;
    mutable bool qtcpserver_issignalconnected_isbase = false;

  public:
    VirtualQTcpServer() : QTcpServer() {};
    VirtualQTcpServer(QObject* parent) : QTcpServer(parent) {};

    ~VirtualQTcpServer() {
        qtcpserver_metacall_callback = nullptr;
        qtcpserver_haspendingconnections_callback = nullptr;
        qtcpserver_nextpendingconnection_callback = nullptr;
        qtcpserver_incomingconnection_callback = nullptr;
        qtcpserver_event_callback = nullptr;
        qtcpserver_eventfilter_callback = nullptr;
        qtcpserver_timerevent_callback = nullptr;
        qtcpserver_childevent_callback = nullptr;
        qtcpserver_customevent_callback = nullptr;
        qtcpserver_connectnotify_callback = nullptr;
        qtcpserver_disconnectnotify_callback = nullptr;
        qtcpserver_addpendingconnection_callback = nullptr;
        qtcpserver_sender_callback = nullptr;
        qtcpserver_sendersignalindex_callback = nullptr;
        qtcpserver_receivers_callback = nullptr;
        qtcpserver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTcpServer_Metacall_Callback(QTcpServer_Metacall_Callback cb) { qtcpserver_metacall_callback = cb; }
    inline void setQTcpServer_HasPendingConnections_Callback(QTcpServer_HasPendingConnections_Callback cb) { qtcpserver_haspendingconnections_callback = cb; }
    inline void setQTcpServer_NextPendingConnection_Callback(QTcpServer_NextPendingConnection_Callback cb) { qtcpserver_nextpendingconnection_callback = cb; }
    inline void setQTcpServer_IncomingConnection_Callback(QTcpServer_IncomingConnection_Callback cb) { qtcpserver_incomingconnection_callback = cb; }
    inline void setQTcpServer_Event_Callback(QTcpServer_Event_Callback cb) { qtcpserver_event_callback = cb; }
    inline void setQTcpServer_EventFilter_Callback(QTcpServer_EventFilter_Callback cb) { qtcpserver_eventfilter_callback = cb; }
    inline void setQTcpServer_TimerEvent_Callback(QTcpServer_TimerEvent_Callback cb) { qtcpserver_timerevent_callback = cb; }
    inline void setQTcpServer_ChildEvent_Callback(QTcpServer_ChildEvent_Callback cb) { qtcpserver_childevent_callback = cb; }
    inline void setQTcpServer_CustomEvent_Callback(QTcpServer_CustomEvent_Callback cb) { qtcpserver_customevent_callback = cb; }
    inline void setQTcpServer_ConnectNotify_Callback(QTcpServer_ConnectNotify_Callback cb) { qtcpserver_connectnotify_callback = cb; }
    inline void setQTcpServer_DisconnectNotify_Callback(QTcpServer_DisconnectNotify_Callback cb) { qtcpserver_disconnectnotify_callback = cb; }
    inline void setQTcpServer_AddPendingConnection_Callback(QTcpServer_AddPendingConnection_Callback cb) { qtcpserver_addpendingconnection_callback = cb; }
    inline void setQTcpServer_Sender_Callback(QTcpServer_Sender_Callback cb) { qtcpserver_sender_callback = cb; }
    inline void setQTcpServer_SenderSignalIndex_Callback(QTcpServer_SenderSignalIndex_Callback cb) { qtcpserver_sendersignalindex_callback = cb; }
    inline void setQTcpServer_Receivers_Callback(QTcpServer_Receivers_Callback cb) { qtcpserver_receivers_callback = cb; }
    inline void setQTcpServer_IsSignalConnected_Callback(QTcpServer_IsSignalConnected_Callback cb) { qtcpserver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTcpServer_Metacall_IsBase(bool value) const { qtcpserver_metacall_isbase = value; }
    inline void setQTcpServer_HasPendingConnections_IsBase(bool value) const { qtcpserver_haspendingconnections_isbase = value; }
    inline void setQTcpServer_NextPendingConnection_IsBase(bool value) const { qtcpserver_nextpendingconnection_isbase = value; }
    inline void setQTcpServer_IncomingConnection_IsBase(bool value) const { qtcpserver_incomingconnection_isbase = value; }
    inline void setQTcpServer_Event_IsBase(bool value) const { qtcpserver_event_isbase = value; }
    inline void setQTcpServer_EventFilter_IsBase(bool value) const { qtcpserver_eventfilter_isbase = value; }
    inline void setQTcpServer_TimerEvent_IsBase(bool value) const { qtcpserver_timerevent_isbase = value; }
    inline void setQTcpServer_ChildEvent_IsBase(bool value) const { qtcpserver_childevent_isbase = value; }
    inline void setQTcpServer_CustomEvent_IsBase(bool value) const { qtcpserver_customevent_isbase = value; }
    inline void setQTcpServer_ConnectNotify_IsBase(bool value) const { qtcpserver_connectnotify_isbase = value; }
    inline void setQTcpServer_DisconnectNotify_IsBase(bool value) const { qtcpserver_disconnectnotify_isbase = value; }
    inline void setQTcpServer_AddPendingConnection_IsBase(bool value) const { qtcpserver_addpendingconnection_isbase = value; }
    inline void setQTcpServer_Sender_IsBase(bool value) const { qtcpserver_sender_isbase = value; }
    inline void setQTcpServer_SenderSignalIndex_IsBase(bool value) const { qtcpserver_sendersignalindex_isbase = value; }
    inline void setQTcpServer_Receivers_IsBase(bool value) const { qtcpserver_receivers_isbase = value; }
    inline void setQTcpServer_IsSignalConnected_IsBase(bool value) const { qtcpserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtcpserver_metacall_isbase) {
            qtcpserver_metacall_isbase = false;
            return QTcpServer::qt_metacall(param1, param2, param3);
        } else if (qtcpserver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtcpserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTcpServer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qtcpserver_haspendingconnections_isbase) {
            qtcpserver_haspendingconnections_isbase = false;
            return QTcpServer::hasPendingConnections();
        } else if (qtcpserver_haspendingconnections_callback != nullptr) {
            bool callback_ret = qtcpserver_haspendingconnections_callback();
            return callback_ret;
        } else {
            return QTcpServer::hasPendingConnections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qtcpserver_nextpendingconnection_isbase) {
            qtcpserver_nextpendingconnection_isbase = false;
            return QTcpServer::nextPendingConnection();
        } else if (qtcpserver_nextpendingconnection_callback != nullptr) {
            QTcpSocket* callback_ret = qtcpserver_nextpendingconnection_callback();
            return callback_ret;
        } else {
            return QTcpServer::nextPendingConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr handle) override {
        if (qtcpserver_incomingconnection_isbase) {
            qtcpserver_incomingconnection_isbase = false;
            QTcpServer::incomingConnection(handle);
        } else if (qtcpserver_incomingconnection_callback != nullptr) {
            qintptr handle_ret = handle;
            intptr_t cbval1 = (intptr_t)(handle_ret);

            qtcpserver_incomingconnection_callback(this, cbval1);
        } else {
            QTcpServer::incomingConnection(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtcpserver_event_isbase) {
            qtcpserver_event_isbase = false;
            return QTcpServer::event(event);
        } else if (qtcpserver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtcpserver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTcpServer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtcpserver_eventfilter_isbase) {
            qtcpserver_eventfilter_isbase = false;
            return QTcpServer::eventFilter(watched, event);
        } else if (qtcpserver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtcpserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTcpServer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtcpserver_timerevent_isbase) {
            qtcpserver_timerevent_isbase = false;
            QTcpServer::timerEvent(event);
        } else if (qtcpserver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtcpserver_timerevent_callback(this, cbval1);
        } else {
            QTcpServer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtcpserver_childevent_isbase) {
            qtcpserver_childevent_isbase = false;
            QTcpServer::childEvent(event);
        } else if (qtcpserver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtcpserver_childevent_callback(this, cbval1);
        } else {
            QTcpServer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtcpserver_customevent_isbase) {
            qtcpserver_customevent_isbase = false;
            QTcpServer::customEvent(event);
        } else if (qtcpserver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtcpserver_customevent_callback(this, cbval1);
        } else {
            QTcpServer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtcpserver_connectnotify_isbase) {
            qtcpserver_connectnotify_isbase = false;
            QTcpServer::connectNotify(signal);
        } else if (qtcpserver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtcpserver_connectnotify_callback(this, cbval1);
        } else {
            QTcpServer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtcpserver_disconnectnotify_isbase) {
            qtcpserver_disconnectnotify_isbase = false;
            QTcpServer::disconnectNotify(signal);
        } else if (qtcpserver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtcpserver_disconnectnotify_callback(this, cbval1);
        } else {
            QTcpServer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QTcpSocket* socket) {
        if (qtcpserver_addpendingconnection_isbase) {
            qtcpserver_addpendingconnection_isbase = false;
            QTcpServer::addPendingConnection(socket);
        } else if (qtcpserver_addpendingconnection_callback != nullptr) {
            QTcpSocket* cbval1 = socket;

            qtcpserver_addpendingconnection_callback(this, cbval1);
        } else {
            QTcpServer::addPendingConnection(socket);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtcpserver_sender_isbase) {
            qtcpserver_sender_isbase = false;
            return QTcpServer::sender();
        } else if (qtcpserver_sender_callback != nullptr) {
            QObject* callback_ret = qtcpserver_sender_callback();
            return callback_ret;
        } else {
            return QTcpServer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtcpserver_sendersignalindex_isbase) {
            qtcpserver_sendersignalindex_isbase = false;
            return QTcpServer::senderSignalIndex();
        } else if (qtcpserver_sendersignalindex_callback != nullptr) {
            int callback_ret = qtcpserver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTcpServer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtcpserver_receivers_isbase) {
            qtcpserver_receivers_isbase = false;
            return QTcpServer::receivers(signal);
        } else if (qtcpserver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtcpserver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTcpServer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtcpserver_issignalconnected_isbase) {
            qtcpserver_issignalconnected_isbase = false;
            return QTcpServer::isSignalConnected(signal);
        } else if (qtcpserver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtcpserver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTcpServer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTcpServer_IncomingConnection(QTcpServer* self, intptr_t handle);
    friend void QTcpServer_QBaseIncomingConnection(QTcpServer* self, intptr_t handle);
    friend void QTcpServer_TimerEvent(QTcpServer* self, QTimerEvent* event);
    friend void QTcpServer_QBaseTimerEvent(QTcpServer* self, QTimerEvent* event);
    friend void QTcpServer_ChildEvent(QTcpServer* self, QChildEvent* event);
    friend void QTcpServer_QBaseChildEvent(QTcpServer* self, QChildEvent* event);
    friend void QTcpServer_CustomEvent(QTcpServer* self, QEvent* event);
    friend void QTcpServer_QBaseCustomEvent(QTcpServer* self, QEvent* event);
    friend void QTcpServer_ConnectNotify(QTcpServer* self, const QMetaMethod* signal);
    friend void QTcpServer_QBaseConnectNotify(QTcpServer* self, const QMetaMethod* signal);
    friend void QTcpServer_DisconnectNotify(QTcpServer* self, const QMetaMethod* signal);
    friend void QTcpServer_QBaseDisconnectNotify(QTcpServer* self, const QMetaMethod* signal);
    friend void QTcpServer_AddPendingConnection(QTcpServer* self, QTcpSocket* socket);
    friend void QTcpServer_QBaseAddPendingConnection(QTcpServer* self, QTcpSocket* socket);
    friend QObject* QTcpServer_Sender(const QTcpServer* self);
    friend QObject* QTcpServer_QBaseSender(const QTcpServer* self);
    friend int QTcpServer_SenderSignalIndex(const QTcpServer* self);
    friend int QTcpServer_QBaseSenderSignalIndex(const QTcpServer* self);
    friend int QTcpServer_Receivers(const QTcpServer* self, const char* signal);
    friend int QTcpServer_QBaseReceivers(const QTcpServer* self, const char* signal);
    friend bool QTcpServer_IsSignalConnected(const QTcpServer* self, const QMetaMethod* signal);
    friend bool QTcpServer_QBaseIsSignalConnected(const QTcpServer* self, const QMetaMethod* signal);
};

#endif
