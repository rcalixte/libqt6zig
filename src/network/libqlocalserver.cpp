#include <QChildEvent>
#include <QEvent>
#include <QLocalServer>
#include <QLocalSocket>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qlocalserver.h>
#include "libqlocalserver.h"
#include "libqlocalserver.hxx"

QLocalServer* QLocalServer_new() {
    return new VirtualQLocalServer();
}

QLocalServer* QLocalServer_new2(QObject* parent) {
    return new VirtualQLocalServer(parent);
}

QMetaObject* QLocalServer_MetaObject(const QLocalServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLocalServer_Metacast(QLocalServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLocalServer_Metacall(QLocalServer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLocalServer_Tr(const char* s) {
    auto _ret = QLocalServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLocalServer_NewConnection(QLocalServer* self) {
    self->newConnection();
}

void QLocalServer_Connect_NewConnection(QLocalServer* self, intptr_t slot) {
    void (*slotFunc)(QLocalServer*) = reinterpret_cast<void (*)(QLocalServer*)>(slot);
    QLocalServer::connect(self,
                          static_cast<void (QLocalServer::*)()>(&QLocalServer::newConnection),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QLocalServer_Close(QLocalServer* self) {
    self->close();
}

libqt_string QLocalServer_ErrorString(const QLocalServer* self) {
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

bool QLocalServer_HasPendingConnections(const QLocalServer* self) {
    return self->hasPendingConnections();
}

bool QLocalServer_IsListening(const QLocalServer* self) {
    return self->isListening();
}

bool QLocalServer_Listen(QLocalServer* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->listen(name_QString);
}

bool QLocalServer_Listen2(QLocalServer* self, intptr_t socketDescriptor) {
    return self->listen((qintptr)(socketDescriptor));
}

int QLocalServer_MaxPendingConnections(const QLocalServer* self) {
    return self->maxPendingConnections();
}

QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self) {
    return self->nextPendingConnection();
}

libqt_string QLocalServer_ServerName(const QLocalServer* self) {
    auto _ret = self->serverName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLocalServer_FullServerName(const QLocalServer* self) {
    auto _ret = self->fullServerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QLocalServer_RemoveServer(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return QLocalServer::removeServer(name_QString);
}

int QLocalServer_ServerError(const QLocalServer* self) {
    return static_cast<int>(self->serverError());
}

void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections) {
    self->setMaxPendingConnections(static_cast<int>(numConnections));
}

bool QLocalServer_WaitForNewConnection(QLocalServer* self) {
    return self->waitForNewConnection();
}

void QLocalServer_SetListenBacklogSize(QLocalServer* self, int size) {
    self->setListenBacklogSize(static_cast<int>(size));
}

int QLocalServer_ListenBacklogSize(const QLocalServer* self) {
    return self->listenBacklogSize();
}

void QLocalServer_SetSocketOptions(QLocalServer* self, int options) {
    self->setSocketOptions(static_cast<QLocalServer::SocketOptions>(options));
}

int QLocalServer_SocketOptions(const QLocalServer* self) {
    return static_cast<int>(self->socketOptions());
}

intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor) {
    auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
    if (vqlocalserver) {
        vqlocalserver->incomingConnection(static_cast<quintptr>(socketDescriptor));
    }
}

libqt_string QLocalServer_Tr2(const char* s, const char* c) {
    auto _ret = QLocalServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLocalServer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLocalServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec) {
    return self->waitForNewConnection(static_cast<int>(msec));
}

bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut) {
    return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

// Base class handler implementation
QMetaObject* QLocalServer_SuperMetaObject(const QLocalServer* self) {
    return (QMetaObject*)self->QLocalServer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnMetaObject(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self)))
        vqlocalserver->qlocalserver_metaobject_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLocalServer_SuperMetacast(QLocalServer* self, const char* param1) {
    return self->QLocalServer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnMetacast(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_metacast_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLocalServer_SuperMetacall(QLocalServer* self, int param1, int param2, void** param3) {
    return self->QLocalServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnMetacall(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_metacall_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QLocalServer_SuperHasPendingConnections(const QLocalServer* self) {
    return self->QLocalServer::hasPendingConnections();
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnHasPendingConnections(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self)))
        vqlocalserver->qlocalserver_haspendingconnections_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_HasPendingConnections_Callback>(slot);
}

// Base class handler implementation
QLocalSocket* QLocalServer_SuperNextPendingConnection(QLocalServer* self) {
    return self->QLocalServer::nextPendingConnection();
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnNextPendingConnection(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_nextpendingconnection_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_NextPendingConnection_Callback>(slot);
}

// Base class handler implementation
void QLocalServer_SuperIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->QLocalServer::incomingConnection(static_cast<quintptr>(socketDescriptor));
    } else
        qFatal("Error: Protected virtual method QLocalServer::incomingConnection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnIncomingConnection(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_incomingconnection_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_IncomingConnection_Callback>(slot);
}

// Derived class handler implementation
bool QLocalServer_Event(QLocalServer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLocalServer_SuperEvent(QLocalServer* self, QEvent* event) {
    return self->QLocalServer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_event_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLocalServer_EventFilter(QLocalServer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLocalServer_SuperEventFilter(QLocalServer* self, QObject* watched, QEvent* event) {
    return self->QLocalServer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnEventFilter(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_eventfilter_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLocalServer_TimerEvent(QLocalServer* self, QTimerEvent* event) {
    auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
    if (vqlocalserver) {
        vqlocalserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLocalServer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalServer_SuperTimerEvent(QLocalServer* self, QTimerEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->QLocalServer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLocalServer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnTimerEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_timerevent_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLocalServer_ChildEvent(QLocalServer* self, QChildEvent* event) {
    auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
    if (vqlocalserver) {
        vqlocalserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLocalServer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalServer_SuperChildEvent(QLocalServer* self, QChildEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->QLocalServer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLocalServer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnChildEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_childevent_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLocalServer_CustomEvent(QLocalServer* self, QEvent* event) {
    auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
    if (vqlocalserver) {
        vqlocalserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLocalServer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalServer_SuperCustomEvent(QLocalServer* self, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->QLocalServer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLocalServer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnCustomEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_customevent_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLocalServer_ConnectNotify(QLocalServer* self, const QMetaMethod* signal) {
    auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
    if (vqlocalserver) {
        vqlocalserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLocalServer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalServer_SuperConnectNotify(QLocalServer* self, const QMetaMethod* signal) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->QLocalServer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLocalServer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnConnectNotify(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_connectnotify_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLocalServer_DisconnectNotify(QLocalServer* self, const QMetaMethod* signal) {
    auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
    if (vqlocalserver) {
        vqlocalserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLocalServer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalServer_SuperDisconnectNotify(QLocalServer* self, const QMetaMethod* signal) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->QLocalServer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLocalServer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnDisconnectNotify(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self))
        vqlocalserver->qlocalserver_disconnectnotify_callback = reinterpret_cast<VirtualQLocalServer::QLocalServer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QLocalServer_AddPendingConnection(QLocalServer* self, QLocalSocket* socket) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->VirtualQLocalServer::addPendingConnection(socket);
    } else
        qFatal("Error: Protected method QLocalServer::addPendingConnection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLocalServer_Sender(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->VirtualQLocalServer::sender();
    } else
        qFatal("Error: Protected method QLocalServer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLocalServer_SenderSignalIndex(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->VirtualQLocalServer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLocalServer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLocalServer_Receivers(const QLocalServer* self, const char* signal) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->VirtualQLocalServer::receivers(signal);
    } else
        qFatal("Error: Protected method QLocalServer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLocalServer_IsSignalConnected(const QLocalServer* self, const QMetaMethod* signal) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->VirtualQLocalServer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLocalServer::isSignalConnected called without a directly constructed type");
}

void QLocalServer_Delete(QLocalServer* self) {
    delete self;
}
