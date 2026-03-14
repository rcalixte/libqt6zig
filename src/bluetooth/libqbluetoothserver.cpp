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
#include <QByteArray>
#include <cstring>
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
    auto* vqbluetoothserver = dynamic_cast<const VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBluetoothServer*)self)->metaObject();
    }
}

void* QBluetoothServer_Metacast(QBluetoothServer* self, const char* param1) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBluetoothServer*)self)->qt_metacast(param1);
    }
}

int QBluetoothServer_Metacall(QBluetoothServer* self, int param1, int param2, void** param3) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBluetoothServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    QBluetoothServer::connect(self, &QBluetoothServer::newConnection, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBluetoothServer_ErrorOccurred(QBluetoothServer* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothServer::Error>(errorVal));
}

void QBluetoothServer_Connect_ErrorOccurred(QBluetoothServer* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothServer*, int) = reinterpret_cast<void (*)(QBluetoothServer*, int)>(slot);
    QBluetoothServer::connect(self, &QBluetoothServer::errorOccurred, [self, slotFunc](QBluetoothServer::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
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
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_MetaObject_IsBase(true);
        return (QMetaObject*)vqbluetoothserver->metaObject();
    } else {
        return (QMetaObject*)self->QBluetoothServer::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnMetaObject(const QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_MetaObject_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBluetoothServer_SuperMetacast(QBluetoothServer* self, const char* param1) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Metacast_IsBase(true);
        return vqbluetoothserver->qt_metacast(param1);
    } else {
        return self->QBluetoothServer::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnMetacast(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Metacast_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBluetoothServer_SuperMetacall(QBluetoothServer* self, int param1, int param2, void** param3) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Metacall_IsBase(true);
        return vqbluetoothserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBluetoothServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnMetacall(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Metacall_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothServer_Event(QBluetoothServer* self, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return vqbluetoothserver->event(event);
    } else {
        return self->QBluetoothServer::event(event);
    }
}

// Base class handler implementation
bool QBluetoothServer_SuperEvent(QBluetoothServer* self, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Event_IsBase(true);
        return vqbluetoothserver->event(event);
    } else {
        return self->QBluetoothServer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnEvent(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Event_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothServer_EventFilter(QBluetoothServer* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return vqbluetoothserver->eventFilter(watched, event);
    } else {
        return self->QBluetoothServer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBluetoothServer_SuperEventFilter(QBluetoothServer* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_EventFilter_IsBase(true);
        return vqbluetoothserver->eventFilter(watched, event);
    } else {
        return self->QBluetoothServer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnEventFilter(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_EventFilter_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServer_TimerEvent(QBluetoothServer* self, QTimerEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->timerEvent(event);
    } else {
        ((VirtualQBluetoothServer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBluetoothServer_SuperTimerEvent(QBluetoothServer* self, QTimerEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_TimerEvent_IsBase(true);
        vqbluetoothserver->timerEvent(event);
    } else {
        ((VirtualQBluetoothServer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnTimerEvent(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_TimerEvent_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServer_ChildEvent(QBluetoothServer* self, QChildEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->childEvent(event);
    } else {
        ((VirtualQBluetoothServer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBluetoothServer_SuperChildEvent(QBluetoothServer* self, QChildEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_ChildEvent_IsBase(true);
        vqbluetoothserver->childEvent(event);
    } else {
        ((VirtualQBluetoothServer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnChildEvent(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_ChildEvent_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServer_CustomEvent(QBluetoothServer* self, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->customEvent(event);
    } else {
        ((VirtualQBluetoothServer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBluetoothServer_SuperCustomEvent(QBluetoothServer* self, QEvent* event) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_CustomEvent_IsBase(true);
        vqbluetoothserver->customEvent(event);
    } else {
        ((VirtualQBluetoothServer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnCustomEvent(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_CustomEvent_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServer_ConnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothServer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothServer_SuperConnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_ConnectNotify_IsBase(true);
        vqbluetoothserver->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothServer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnConnectNotify(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_ConnectNotify_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothServer_DisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothServer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothServer_SuperDisconnectNotify(QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_DisconnectNotify_IsBase(true);
        vqbluetoothserver->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothServer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnDisconnectNotify(QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = dynamic_cast<VirtualQBluetoothServer*>(self);
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBluetoothServer_Sender(const QBluetoothServer* self) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return vqbluetoothserver->sender();
    } else {
        return ((VirtualQBluetoothServer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBluetoothServer_SuperSender(const QBluetoothServer* self) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Sender_IsBase(true);
        return vqbluetoothserver->sender();
    } else {
        return ((VirtualQBluetoothServer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnSender(const QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Sender_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothServer_SenderSignalIndex(const QBluetoothServer* self) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return vqbluetoothserver->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothServer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBluetoothServer_SuperSenderSignalIndex(const QBluetoothServer* self) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_SenderSignalIndex_IsBase(true);
        return vqbluetoothserver->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothServer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnSenderSignalIndex(const QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothServer_Receivers(const QBluetoothServer* self, const char* signal) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return vqbluetoothserver->receivers(signal);
    } else {
        return ((VirtualQBluetoothServer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBluetoothServer_SuperReceivers(const QBluetoothServer* self, const char* signal) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Receivers_IsBase(true);
        return vqbluetoothserver->receivers(signal);
    } else {
        return ((VirtualQBluetoothServer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnReceivers(const QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_Receivers_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothServer_IsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        return vqbluetoothserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothServer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBluetoothServer_SuperIsSignalConnected(const QBluetoothServer* self, const QMetaMethod* signal) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_IsSignalConnected_IsBase(true);
        return vqbluetoothserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothServer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothServer_OnIsSignalConnected(const QBluetoothServer* self, intptr_t slot) {
    auto* vqbluetoothserver = const_cast<VirtualQBluetoothServer*>(dynamic_cast<const VirtualQBluetoothServer*>(self));
    if (vqbluetoothserver && vqbluetoothserver->isVirtualQBluetoothServer) {
        vqbluetoothserver->setQBluetoothServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQBluetoothServer::QBluetoothServer_IsSignalConnected_Callback>(slot));
    }
}

void QBluetoothServer_Delete(QBluetoothServer* self) {
    delete self;
}
