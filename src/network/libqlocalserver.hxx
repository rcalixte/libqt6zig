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

    ~VirtualQLocalServer() {
        qlocalserver_metacall_callback = nullptr;
        qlocalserver_haspendingconnections_callback = nullptr;
        qlocalserver_nextpendingconnection_callback = nullptr;
        qlocalserver_incomingconnection_callback = nullptr;
        qlocalserver_event_callback = nullptr;
        qlocalserver_eventfilter_callback = nullptr;
        qlocalserver_timerevent_callback = nullptr;
        qlocalserver_childevent_callback = nullptr;
        qlocalserver_customevent_callback = nullptr;
        qlocalserver_connectnotify_callback = nullptr;
        qlocalserver_disconnectnotify_callback = nullptr;
        qlocalserver_addpendingconnection_callback = nullptr;
        qlocalserver_sender_callback = nullptr;
        qlocalserver_sendersignalindex_callback = nullptr;
        qlocalserver_receivers_callback = nullptr;
        qlocalserver_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlocalserver_metacall_isbase) {
            qlocalserver_metacall_isbase = false;
            return QLocalServer::qt_metacall(param1, param2, param3);
        } else if (qlocalserver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlocalserver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QLocalServer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qlocalserver_haspendingconnections_isbase) {
            qlocalserver_haspendingconnections_isbase = false;
            return QLocalServer::hasPendingConnections();
        } else if (qlocalserver_haspendingconnections_callback != nullptr) {
            bool callback_ret = qlocalserver_haspendingconnections_callback();
            return callback_ret;
        } else {
            return QLocalServer::hasPendingConnections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLocalSocket* nextPendingConnection() override {
        if (qlocalserver_nextpendingconnection_isbase) {
            qlocalserver_nextpendingconnection_isbase = false;
            return QLocalServer::nextPendingConnection();
        } else if (qlocalserver_nextpendingconnection_callback != nullptr) {
            QLocalSocket* callback_ret = qlocalserver_nextpendingconnection_callback();
            return callback_ret;
        } else {
            return QLocalServer::nextPendingConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(quintptr socketDescriptor) override {
        if (qlocalserver_incomingconnection_isbase) {
            qlocalserver_incomingconnection_isbase = false;
            QLocalServer::incomingConnection(socketDescriptor);
        } else if (qlocalserver_incomingconnection_callback != nullptr) {
            uintptr_t cbval1 = static_cast<uintptr_t>(socketDescriptor);

            qlocalserver_incomingconnection_callback(this, cbval1);
        } else {
            QLocalServer::incomingConnection(socketDescriptor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlocalserver_event_isbase) {
            qlocalserver_event_isbase = false;
            return QLocalServer::event(event);
        } else if (qlocalserver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qlocalserver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalServer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlocalserver_eventfilter_isbase) {
            qlocalserver_eventfilter_isbase = false;
            return QLocalServer::eventFilter(watched, event);
        } else if (qlocalserver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qlocalserver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QLocalServer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlocalserver_timerevent_isbase) {
            qlocalserver_timerevent_isbase = false;
            QLocalServer::timerEvent(event);
        } else if (qlocalserver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qlocalserver_timerevent_callback(this, cbval1);
        } else {
            QLocalServer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlocalserver_childevent_isbase) {
            qlocalserver_childevent_isbase = false;
            QLocalServer::childEvent(event);
        } else if (qlocalserver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qlocalserver_childevent_callback(this, cbval1);
        } else {
            QLocalServer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlocalserver_customevent_isbase) {
            qlocalserver_customevent_isbase = false;
            QLocalServer::customEvent(event);
        } else if (qlocalserver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlocalserver_customevent_callback(this, cbval1);
        } else {
            QLocalServer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_connectnotify_isbase) {
            qlocalserver_connectnotify_isbase = false;
            QLocalServer::connectNotify(signal);
        } else if (qlocalserver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlocalserver_connectnotify_callback(this, cbval1);
        } else {
            QLocalServer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_disconnectnotify_isbase) {
            qlocalserver_disconnectnotify_isbase = false;
            QLocalServer::disconnectNotify(signal);
        } else if (qlocalserver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlocalserver_disconnectnotify_callback(this, cbval1);
        } else {
            QLocalServer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QLocalSocket* socket) {
        if (qlocalserver_addpendingconnection_isbase) {
            qlocalserver_addpendingconnection_isbase = false;
            QLocalServer::addPendingConnection(socket);
        } else if (qlocalserver_addpendingconnection_callback != nullptr) {
            QLocalSocket* cbval1 = socket;

            qlocalserver_addpendingconnection_callback(this, cbval1);
        } else {
            QLocalServer::addPendingConnection(socket);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlocalserver_sender_isbase) {
            qlocalserver_sender_isbase = false;
            return QLocalServer::sender();
        } else if (qlocalserver_sender_callback != nullptr) {
            QObject* callback_ret = qlocalserver_sender_callback();
            return callback_ret;
        } else {
            return QLocalServer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlocalserver_sendersignalindex_isbase) {
            qlocalserver_sendersignalindex_isbase = false;
            return QLocalServer::senderSignalIndex();
        } else if (qlocalserver_sendersignalindex_callback != nullptr) {
            int callback_ret = qlocalserver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLocalServer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlocalserver_receivers_isbase) {
            qlocalserver_receivers_isbase = false;
            return QLocalServer::receivers(signal);
        } else if (qlocalserver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlocalserver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLocalServer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlocalserver_issignalconnected_isbase) {
            qlocalserver_issignalconnected_isbase = false;
            return QLocalServer::isSignalConnected(signal);
        } else if (qlocalserver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlocalserver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalServer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
    friend void QLocalServer_QBaseIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
    friend void QLocalServer_TimerEvent(QLocalServer* self, QTimerEvent* event);
    friend void QLocalServer_QBaseTimerEvent(QLocalServer* self, QTimerEvent* event);
    friend void QLocalServer_ChildEvent(QLocalServer* self, QChildEvent* event);
    friend void QLocalServer_QBaseChildEvent(QLocalServer* self, QChildEvent* event);
    friend void QLocalServer_CustomEvent(QLocalServer* self, QEvent* event);
    friend void QLocalServer_QBaseCustomEvent(QLocalServer* self, QEvent* event);
    friend void QLocalServer_ConnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_QBaseConnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_DisconnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_QBaseDisconnectNotify(QLocalServer* self, const QMetaMethod* signal);
    friend void QLocalServer_AddPendingConnection(QLocalServer* self, QLocalSocket* socket);
    friend void QLocalServer_QBaseAddPendingConnection(QLocalServer* self, QLocalSocket* socket);
    friend QObject* QLocalServer_Sender(const QLocalServer* self);
    friend QObject* QLocalServer_QBaseSender(const QLocalServer* self);
    friend int QLocalServer_SenderSignalIndex(const QLocalServer* self);
    friend int QLocalServer_QBaseSenderSignalIndex(const QLocalServer* self);
    friend int QLocalServer_Receivers(const QLocalServer* self, const char* signal);
    friend int QLocalServer_QBaseReceivers(const QLocalServer* self, const char* signal);
    friend bool QLocalServer_IsSignalConnected(const QLocalServer* self, const QMetaMethod* signal);
    friend bool QLocalServer_QBaseIsSignalConnected(const QLocalServer* self, const QMetaMethod* signal);
};

#endif
