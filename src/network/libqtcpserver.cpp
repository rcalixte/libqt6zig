#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qtcpserver.h>
#include "libqtcpserver.h"
#include "libqtcpserver.hxx"

QTcpServer* QTcpServer_new() {
    return new VirtualQTcpServer();
}

QTcpServer* QTcpServer_new2(QObject* parent) {
    return new VirtualQTcpServer(parent);
}

QMetaObject* QTcpServer_MetaObject(const QTcpServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTcpServer_Metacast(QTcpServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTcpServer_Metacall(QTcpServer* self, int param1, int param2, void** param3) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTcpServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTcpServer_OnMetacall(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Metacall_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTcpServer_QBaseMetacall(QTcpServer* self, int param1, int param2, void** param3) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Metacall_IsBase(true);
        return vqtcpserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTcpServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTcpServer_Tr(const char* s) {
    QString _ret = QTcpServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTcpServer_Listen(QTcpServer* self) {
    return self->listen();
}

void QTcpServer_Close(QTcpServer* self) {
    self->close();
}

bool QTcpServer_IsListening(const QTcpServer* self) {
    return self->isListening();
}

void QTcpServer_SetMaxPendingConnections(QTcpServer* self, int numConnections) {
    self->setMaxPendingConnections(static_cast<int>(numConnections));
}

int QTcpServer_MaxPendingConnections(const QTcpServer* self) {
    return self->maxPendingConnections();
}

void QTcpServer_SetListenBacklogSize(QTcpServer* self, int size) {
    self->setListenBacklogSize(static_cast<int>(size));
}

int QTcpServer_ListenBacklogSize(const QTcpServer* self) {
    return self->listenBacklogSize();
}

uint16_t QTcpServer_ServerPort(const QTcpServer* self) {
    return static_cast<uint16_t>(self->serverPort());
}

QHostAddress* QTcpServer_ServerAddress(const QTcpServer* self) {
    return new QHostAddress(self->serverAddress());
}

intptr_t QTcpServer_SocketDescriptor(const QTcpServer* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

bool QTcpServer_SetSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

bool QTcpServer_WaitForNewConnection(QTcpServer* self) {
    return self->waitForNewConnection();
}

int QTcpServer_ServerError(const QTcpServer* self) {
    return static_cast<int>(self->serverError());
}

libqt_string QTcpServer_ErrorString(const QTcpServer* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTcpServer_PauseAccepting(QTcpServer* self) {
    self->pauseAccepting();
}

void QTcpServer_ResumeAccepting(QTcpServer* self) {
    self->resumeAccepting();
}

void QTcpServer_SetProxy(QTcpServer* self, const QNetworkProxy* networkProxy) {
    self->setProxy(*networkProxy);
}

QNetworkProxy* QTcpServer_Proxy(const QTcpServer* self) {
    return new QNetworkProxy(self->proxy());
}

void QTcpServer_NewConnection(QTcpServer* self) {
    self->newConnection();
}

void QTcpServer_Connect_NewConnection(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*) = reinterpret_cast<void (*)(QTcpServer*)>(slot);
    QTcpServer::connect(self, &QTcpServer::newConnection, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTcpServer_AcceptError(QTcpServer* self, int socketError) {
    self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QTcpServer_Connect_AcceptError(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*, int) = reinterpret_cast<void (*)(QTcpServer*, int)>(slot);
    QTcpServer::connect(self, &QTcpServer::acceptError, [self, slotFunc](QAbstractSocket::SocketError socketError) {
        int sigval1 = static_cast<int>(socketError);
        slotFunc(self, sigval1);
    });
}

libqt_string QTcpServer_Tr2(const char* s, const char* c) {
    QString _ret = QTcpServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTcpServer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTcpServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTcpServer_Listen1(QTcpServer* self, const QHostAddress* address) {
    return self->listen(*address);
}

bool QTcpServer_Listen2(QTcpServer* self, const QHostAddress* address, uint16_t port) {
    return self->listen(*address, static_cast<quint16>(port));
}

bool QTcpServer_WaitForNewConnection1(QTcpServer* self, int msec) {
    return self->waitForNewConnection(static_cast<int>(msec));
}

bool QTcpServer_WaitForNewConnection2(QTcpServer* self, int msec, bool* timedOut) {
    return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

// Derived class handler implementation
bool QTcpServer_HasPendingConnections(const QTcpServer* self) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->hasPendingConnections();
    } else {
        return self->QTcpServer::hasPendingConnections();
    }
}

// Base class handler implementation
bool QTcpServer_QBaseHasPendingConnections(const QTcpServer* self) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_HasPendingConnections_IsBase(true);
        return vqtcpserver->hasPendingConnections();
    } else {
        return self->QTcpServer::hasPendingConnections();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnHasPendingConnections(const QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_HasPendingConnections_Callback>(slot));
    }
}

// Derived class handler implementation
QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->nextPendingConnection();
    } else {
        return self->QTcpServer::nextPendingConnection();
    }
}

// Base class handler implementation
QTcpSocket* QTcpServer_QBaseNextPendingConnection(QTcpServer* self) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_NextPendingConnection_IsBase(true);
        return vqtcpserver->nextPendingConnection();
    } else {
        return self->QTcpServer::nextPendingConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnNextPendingConnection(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_NextPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_IncomingConnection(QTcpServer* self, intptr_t handle) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->incomingConnection((qintptr)(handle));
    } else {
        ((VirtualQTcpServer*)self)->incomingConnection((qintptr)(handle));
    }
}

// Base class handler implementation
void QTcpServer_QBaseIncomingConnection(QTcpServer* self, intptr_t handle) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_IncomingConnection_IsBase(true);
        vqtcpserver->incomingConnection((qintptr)(handle));
    } else {
        ((VirtualQTcpServer*)self)->incomingConnection((qintptr)(handle));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnIncomingConnection(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_IncomingConnection_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_IncomingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpServer_Event(QTcpServer* self, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->event(event);
    } else {
        return self->QTcpServer::event(event);
    }
}

// Base class handler implementation
bool QTcpServer_QBaseEvent(QTcpServer* self, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Event_IsBase(true);
        return vqtcpserver->event(event);
    } else {
        return self->QTcpServer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnEvent(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Event_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpServer_EventFilter(QTcpServer* self, QObject* watched, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->eventFilter(watched, event);
    } else {
        return self->QTcpServer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTcpServer_QBaseEventFilter(QTcpServer* self, QObject* watched, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_EventFilter_IsBase(true);
        return vqtcpserver->eventFilter(watched, event);
    } else {
        return self->QTcpServer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnEventFilter(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_EventFilter_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_TimerEvent(QTcpServer* self, QTimerEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->timerEvent(event);
    } else {
        ((VirtualQTcpServer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTcpServer_QBaseTimerEvent(QTcpServer* self, QTimerEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_TimerEvent_IsBase(true);
        vqtcpserver->timerEvent(event);
    } else {
        ((VirtualQTcpServer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnTimerEvent(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_TimerEvent_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_ChildEvent(QTcpServer* self, QChildEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->childEvent(event);
    } else {
        ((VirtualQTcpServer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTcpServer_QBaseChildEvent(QTcpServer* self, QChildEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_ChildEvent_IsBase(true);
        vqtcpserver->childEvent(event);
    } else {
        ((VirtualQTcpServer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnChildEvent(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_ChildEvent_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_CustomEvent(QTcpServer* self, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->customEvent(event);
    } else {
        ((VirtualQTcpServer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTcpServer_QBaseCustomEvent(QTcpServer* self, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_CustomEvent_IsBase(true);
        vqtcpserver->customEvent(event);
    } else {
        ((VirtualQTcpServer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnCustomEvent(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_CustomEvent_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_ConnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->connectNotify(*signal);
    } else {
        ((VirtualQTcpServer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTcpServer_QBaseConnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_ConnectNotify_IsBase(true);
        vqtcpserver->connectNotify(*signal);
    } else {
        ((VirtualQTcpServer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnConnectNotify(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_ConnectNotify_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_DisconnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->disconnectNotify(*signal);
    } else {
        ((VirtualQTcpServer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTcpServer_QBaseDisconnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_DisconnectNotify_IsBase(true);
        vqtcpserver->disconnectNotify(*signal);
    } else {
        ((VirtualQTcpServer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnDisconnectNotify(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpServer_AddPendingConnection(QTcpServer* self, QTcpSocket* socket) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->addPendingConnection(socket);
    } else {
        ((VirtualQTcpServer*)self)->addPendingConnection(socket);
    }
}

// Base class handler implementation
void QTcpServer_QBaseAddPendingConnection(QTcpServer* self, QTcpSocket* socket) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_AddPendingConnection_IsBase(true);
        vqtcpserver->addPendingConnection(socket);
    } else {
        ((VirtualQTcpServer*)self)->addPendingConnection(socket);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnAddPendingConnection(QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_AddPendingConnection_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_AddPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTcpServer_Sender(const QTcpServer* self) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->sender();
    } else {
        return ((VirtualQTcpServer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTcpServer_QBaseSender(const QTcpServer* self) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Sender_IsBase(true);
        return vqtcpserver->sender();
    } else {
        return ((VirtualQTcpServer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnSender(const QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Sender_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTcpServer_SenderSignalIndex(const QTcpServer* self) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->senderSignalIndex();
    } else {
        return ((VirtualQTcpServer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTcpServer_QBaseSenderSignalIndex(const QTcpServer* self) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_SenderSignalIndex_IsBase(true);
        return vqtcpserver->senderSignalIndex();
    } else {
        return ((VirtualQTcpServer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnSenderSignalIndex(const QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTcpServer_Receivers(const QTcpServer* self, const char* signal) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->receivers(signal);
    } else {
        return ((VirtualQTcpServer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTcpServer_QBaseReceivers(const QTcpServer* self, const char* signal) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Receivers_IsBase(true);
        return vqtcpserver->receivers(signal);
    } else {
        return ((VirtualQTcpServer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnReceivers(const QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_Receivers_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpServer_IsSignalConnected(const QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        return vqtcpserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQTcpServer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTcpServer_QBaseIsSignalConnected(const QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_IsSignalConnected_IsBase(true);
        return vqtcpserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQTcpServer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnIsSignalConnected(const QTcpServer* self, intptr_t slot) {
    auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self));
    if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
        vqtcpserver->setQTcpServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_IsSignalConnected_Callback>(slot));
    }
}

void QTcpServer_Connect_PendingConnectionAvailable(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*) = reinterpret_cast<void (*)(QTcpServer*)>(slot);
    QTcpServer::connect(self, &QTcpServer::pendingConnectionAvailable, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTcpServer_Delete(QTcpServer* self) {
    delete self;
}
