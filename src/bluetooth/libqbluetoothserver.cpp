#include <QBluetoothAddress>
#include <QBluetoothServer>
#include <QBluetoothServiceInfo>
#include <QBluetoothSocket>
#include <QBluetoothUuid>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qbluetoothserver.h>
#include "libqbluetoothserver.h"
#include "libqbluetoothserver.hxx"

QBluetoothServer* QBluetoothServer_new(int serverType) {
    return new VirtualQBluetoothServer(static_cast<QBluetoothServiceInfo::Protocol>(serverType));
}

QBluetoothServer* QBluetoothServer_new2(int serverType, QObject* parent) {
    return new VirtualQBluetoothServer(static_cast<QBluetoothServiceInfo::Protocol>(serverType), parent);
}

QMetaObject* QBluetoothServer_MetaObject(const QBluetoothServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBluetoothServer_Metacast(QBluetoothServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBluetoothServer_Metacall(QBluetoothServer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBluetoothServer_Tr(const char* s) {
    auto _ret = QBluetoothServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBluetoothServer_Close(QBluetoothServer* self) {
    self->close();
}

bool QBluetoothServer_Listen(QBluetoothServer* self) {
    return self->listen();
}

QBluetoothServiceInfo* QBluetoothServer_Listen2(QBluetoothServer* self, const QBluetoothUuid* uuid) {
    return new QBluetoothServiceInfo(self->listen(*uuid));
}

bool QBluetoothServer_IsListening(const QBluetoothServer* self) {
    return self->isListening();
}

void QBluetoothServer_SetMaxPendingConnections(QBluetoothServer* self, int numConnections) {
    self->setMaxPendingConnections(static_cast<int>(numConnections));
}

int QBluetoothServer_MaxPendingConnections(const QBluetoothServer* self) {
    return self->maxPendingConnections();
}

bool QBluetoothServer_HasPendingConnections(const QBluetoothServer* self) {
    return self->hasPendingConnections();
}

QBluetoothSocket* QBluetoothServer_NextPendingConnection(QBluetoothServer* self) {
    return self->nextPendingConnection();
}

QBluetoothAddress* QBluetoothServer_ServerAddress(const QBluetoothServer* self) {
    return new QBluetoothAddress(self->serverAddress());
}

uint16_t QBluetoothServer_ServerPort(const QBluetoothServer* self) {
    return static_cast<uint16_t>(self->serverPort());
}

void QBluetoothServer_SetSecurityFlags(QBluetoothServer* self, int security) {
    self->setSecurityFlags(static_cast<QBluetooth::SecurityFlags>(security));
}

int QBluetoothServer_SecurityFlags(const QBluetoothServer* self) {
    return static_cast<int>(self->securityFlags());
}

int QBluetoothServer_ServerType(const QBluetoothServer* self) {
    return static_cast<int>(self->serverType());
}

int QBluetoothServer_Error(const QBluetoothServer* self) {
    return static_cast<int>(self->error());
}

void QBluetoothServer_NewConnection(QBluetoothServer* self) {
    self->newConnection();
}

void QBluetoothServer_Connect_NewConnection(QBluetoothServer* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServer*) = reinterpret_cast<void (*)(QBluetoothServer*)>(slot);
    QBluetoothServer::connect(self,
                              static_cast<void (QBluetoothServer::*)()>(&QBluetoothServer::newConnection),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QBluetoothServer_ErrorOccurred(QBluetoothServer* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothServer::Error>(errorVal));
}

void QBluetoothServer_Connect_ErrorOccurred(QBluetoothServer* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServer*, int) = reinterpret_cast<void (*)(QBluetoothServer*, int)>(slot);
    QBluetoothServer::connect(self,
                              static_cast<void (QBluetoothServer::*)(QBluetoothServer::Error)>(&QBluetoothServer::errorOccurred),
                              [self, slotFunc](QBluetoothServer::Error errorVal) {
                                  int sigval1 = static_cast<int>(errorVal);
                                  slotFunc(self, sigval1);
                              });
}

libqt_string QBluetoothServer_Tr2(const char* s, const char* c) {
    auto _ret = QBluetoothServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothServer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBluetoothServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QBluetoothServer_Listen1(QBluetoothServer* self, const QBluetoothAddress* address) {
    return self->listen(*address);
}

bool QBluetoothServer_Listen22(QBluetoothServer* self, const QBluetoothAddress* address, uint16_t port) {
    return self->listen(*address, static_cast<quint16>(port));
}

QBluetoothServiceInfo* QBluetoothServer_Listen23(QBluetoothServer* self, const QBluetoothUuid* uuid, const libqt_string serviceName) {
    QString serviceName_QString = QString::fromUtf8(serviceName.data, serviceName.len);
    return new QBluetoothServiceInfo(self->listen(*uuid, serviceName_QString));
}

// Base class handler implementation
QMetaObject* QBluetoothServer_SuperMetaObject(const QBluetoothServer* self) {
    return (QMetaObject*)self->QBluetoothServer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnMetaObject(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self)))
        vqbluetoothserver->qbluetoothserver_metaobject_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBluetoothServer_SuperMetacast(QBluetoothServer* self, const char* param1) {
    return self->QBluetoothServer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnMetacast(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_metacast_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBluetoothServer_SuperMetacall(QBluetoothServer* self, int param1, int param2, void** param3) {
    return self->QBluetoothServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnMetacall(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_metacall_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothServer_Event(QBluetoothServer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBluetoothServer_SuperEvent(QBluetoothServer* self, QEvent* event) {
    return self->QBluetoothServer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnEvent(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_event_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothServer_EventFilter(QBluetoothServer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBluetoothServer_SuperEventFilter(QBluetoothServer* self, QObject* watched, QEvent* event) {
    return self->QBluetoothServer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnEventFilter(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_eventfilter_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServer_TimerEvent(QBluetoothServer* self, QTimerEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver) {
        vqbluetoothserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServer_SuperTimerEvent(QBluetoothServer* self, QTimerEvent* event) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self)) {
        vqbluetoothserver->QBluetoothServer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothServer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnTimerEvent(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_timerevent_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServer_ChildEvent(QBluetoothServer* self, QChildEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver) {
        vqbluetoothserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServer_SuperChildEvent(QBluetoothServer* self, QChildEvent* event) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self)) {
        vqbluetoothserver->QBluetoothServer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothServer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnChildEvent(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_childevent_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServer_CustomEvent(QBluetoothServer* self, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver) {
        vqbluetoothserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServer_SuperCustomEvent(QBluetoothServer* self, QEvent* event) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self)) {
        vqbluetoothserver->QBluetoothServer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothServer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnCustomEvent(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_customevent_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServer_ConnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver) {
        vqbluetoothserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServer_SuperConnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self)) {
        vqbluetoothserver->QBluetoothServer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothServer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnConnectNotify(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_connectnotify_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothServer_DisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver) {
        vqbluetoothserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothServer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothServer_SuperDisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self)) {
        vqbluetoothserver->QBluetoothServer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothServer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnDisconnectNotify(QBluetoothServer* self, intptr_t slot) {
    if (auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self))
        vqbluetoothserver->qbluetoothserver_disconnectnotify_callback = reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBluetoothServer_Sender(const QBluetoothServer* self) {
    if (auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self))) {
        return vqbluetoothserver->VirtualQBluetoothServer::sender();
    } else
        qFatal("Error: Protected method QBluetoothServer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothServer_SenderSignalIndex(const QBluetoothServer* self) {
    if (auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self))) {
        return vqbluetoothserver->VirtualQBluetoothServer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBluetoothServer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothServer_Receivers(const QBluetoothServer* self, const char* signal) {
    if (auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self))) {
        return vqbluetoothserver->VirtualQBluetoothServer::receivers(signal);
    } else
        qFatal("Error: Protected method QBluetoothServer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBluetoothServer_IsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self))) {
        return vqbluetoothserver->VirtualQBluetoothServer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBluetoothServer::isSignalConnected called without a directly constructed type");
}

void QBluetoothServer_Delete(QBluetoothServer* self) {
    delete self;
}
