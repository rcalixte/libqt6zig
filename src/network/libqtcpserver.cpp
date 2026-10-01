#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTcpServer_Tr(const char* s) {
    auto _ret = QTcpServer::tr(s);
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

bool QTcpServer_HasPendingConnections(const QTcpServer* self) {
    return self->hasPendingConnections();
}

QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self) {
    return self->nextPendingConnection();
}

int QTcpServer_ServerError(const QTcpServer* self) {
    return static_cast<int>(self->serverError());
}

libqt_string QTcpServer_ErrorString(const QTcpServer* self) {
    auto _ret = self->errorString();
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

void QTcpServer_IncomingConnection(QTcpServer* self, intptr_t handle) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver) {
        vqtcpserver->incomingConnection((qintptr)(handle));
    }
}

void QTcpServer_NewConnection(QTcpServer* self) {
    self->newConnection();
}

void QTcpServer_Connect_NewConnection(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*) = reinterpret_cast<void (*)(QTcpServer*)>(slot);
    QTcpServer::connect(self,
                        static_cast<void (QTcpServer::*)()>(&QTcpServer::newConnection),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QTcpServer_AcceptError(QTcpServer* self, int socketError) {
    self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QTcpServer_Connect_AcceptError(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*, int) = reinterpret_cast<void (*)(QTcpServer*, int)>(slot);
    QTcpServer::connect(self,
                        static_cast<void (QTcpServer::*)(QAbstractSocket::SocketError)>(&QTcpServer::acceptError),
                        [self, slotFunc](QAbstractSocket::SocketError socketError) {
                            int sigval1 = static_cast<int>(socketError);
                            slotFunc(self, sigval1);
                        });
}

libqt_string QTcpServer_Tr2(const char* s, const char* c) {
    auto _ret = QTcpServer::tr(s, c);
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
    auto _ret = QTcpServer::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QTcpServer_SuperMetaObject(const QTcpServer* self) {
    return (QMetaObject*)self->QTcpServer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnMetaObject(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self)))
        vqtcpserver->qtcpserver_metaobject_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTcpServer_SuperMetacast(QTcpServer* self, const char* param1) {
    return self->QTcpServer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnMetacast(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_metacast_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTcpServer_SuperMetacall(QTcpServer* self, int param1, int param2, void** param3) {
    return self->QTcpServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnMetacall(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_metacall_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QTcpServer_SuperHasPendingConnections(const QTcpServer* self) {
    return self->QTcpServer::hasPendingConnections();
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnHasPendingConnections(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self)))
        vqtcpserver->qtcpserver_haspendingconnections_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_HasPendingConnections_Callback>(slot);
}

// Base class handler implementation
QTcpSocket* QTcpServer_SuperNextPendingConnection(QTcpServer* self) {
    return self->QTcpServer::nextPendingConnection();
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnNextPendingConnection(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_nextpendingconnection_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_NextPendingConnection_Callback>(slot);
}

// Base class handler implementation
void QTcpServer_SuperIncomingConnection(QTcpServer* self, intptr_t handle) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->QTcpServer::incomingConnection((qintptr)(handle));
    } else
        qFatal("Error: Protected virtual method QTcpServer::incomingConnection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnIncomingConnection(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_incomingconnection_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_IncomingConnection_Callback>(slot);
}

// Derived class handler implementation
bool QTcpServer_Event(QTcpServer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTcpServer_SuperEvent(QTcpServer* self, QEvent* event) {
    return self->QTcpServer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnEvent(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_event_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTcpServer_EventFilter(QTcpServer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTcpServer_SuperEventFilter(QTcpServer* self, QObject* watched, QEvent* event) {
    return self->QTcpServer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnEventFilter(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_eventfilter_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTcpServer_TimerEvent(QTcpServer* self, QTimerEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver) {
        vqtcpserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTcpServer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpServer_SuperTimerEvent(QTcpServer* self, QTimerEvent* event) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->QTcpServer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTcpServer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnTimerEvent(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_timerevent_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTcpServer_ChildEvent(QTcpServer* self, QChildEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver) {
        vqtcpserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTcpServer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpServer_SuperChildEvent(QTcpServer* self, QChildEvent* event) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->QTcpServer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTcpServer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnChildEvent(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_childevent_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTcpServer_CustomEvent(QTcpServer* self, QEvent* event) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver) {
        vqtcpserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTcpServer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpServer_SuperCustomEvent(QTcpServer* self, QEvent* event) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->QTcpServer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTcpServer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnCustomEvent(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_customevent_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTcpServer_ConnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver) {
        vqtcpserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTcpServer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpServer_SuperConnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->QTcpServer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTcpServer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnConnectNotify(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_connectnotify_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTcpServer_DisconnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
    if (vqtcpserver) {
        vqtcpserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTcpServer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpServer_SuperDisconnectNotify(QTcpServer* self, const QMetaMethod* signal) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->QTcpServer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTcpServer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnDisconnectNotify(QTcpServer* self, intptr_t slot) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self))
        vqtcpserver->qtcpserver_disconnectnotify_callback = reinterpret_cast<VirtualQTcpServer::QTcpServer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTcpServer_AddPendingConnection(QTcpServer* self, QTcpSocket* socket) {
    if (auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self)) {
        vqtcpserver->VirtualQTcpServer::addPendingConnection(socket);
    } else
        qFatal("Error: Protected method QTcpServer::addPendingConnection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTcpServer_Sender(const QTcpServer* self) {
    if (auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self))) {
        return vqtcpserver->VirtualQTcpServer::sender();
    } else
        qFatal("Error: Protected method QTcpServer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTcpServer_SenderSignalIndex(const QTcpServer* self) {
    if (auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self))) {
        return vqtcpserver->VirtualQTcpServer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTcpServer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTcpServer_Receivers(const QTcpServer* self, const char* signal) {
    if (auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self))) {
        return vqtcpserver->VirtualQTcpServer::receivers(signal);
    } else
        qFatal("Error: Protected method QTcpServer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTcpServer_IsSignalConnected(const QTcpServer* self, const QMetaMethod* signal) {
    if (auto* vqtcpserver = const_cast<VirtualQTcpServer*>(dynamic_cast<const VirtualQTcpServer*>(self))) {
        return vqtcpserver->VirtualQTcpServer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTcpServer::isSignalConnected called without a directly constructed type");
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
