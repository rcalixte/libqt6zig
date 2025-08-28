#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSctpServer>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qsctpserver.h>
#include "libqsctpserver.h"
#include "libqsctpserver.hxx"

QSctpServer* QSctpServer_new() {
    return new VirtualQSctpServer();
}

QSctpServer* QSctpServer_new2(QObject* parent) {
    return new VirtualQSctpServer(parent);
}

QMetaObject* QSctpServer_MetaObject(const QSctpServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSctpServer_Metacast(QSctpServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSctpServer_Metacall(QSctpServer* self, int param1, int param2, void** param3) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSctpServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSctpServer_OnMetacall(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Metacall_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSctpServer_QBaseMetacall(QSctpServer* self, int param1, int param2, void** param3) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Metacall_IsBase(true);
        return vqsctpserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSctpServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSctpServer_Tr(const char* s) {
    QString _ret = QSctpServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count) {
    self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpServer_MaximumChannelCount(const QSctpServer* self) {
    return self->maximumChannelCount();
}

QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self) {
    return self->nextPendingDatagramConnection();
}

void QSctpServer_IncomingConnection(QSctpServer* self, intptr_t handle) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->incomingConnection((qintptr)(handle));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSctpServer_OnIncomingConnection(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_IncomingConnection_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_IncomingConnection_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QSctpServer_QBaseIncomingConnection(QSctpServer* self, intptr_t handle) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_IncomingConnection_IsBase(true);
        vqsctpserver->incomingConnection((qintptr)(handle));
    }
}

libqt_string QSctpServer_Tr2(const char* s, const char* c) {
    QString _ret = QSctpServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSctpServer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSctpServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QSctpServer_HasPendingConnections(const QSctpServer* self) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->hasPendingConnections();
    } else {
        return self->QSctpServer::hasPendingConnections();
    }
}

// Base class handler implementation
bool QSctpServer_QBaseHasPendingConnections(const QSctpServer* self) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_HasPendingConnections_IsBase(true);
        return vqsctpserver->hasPendingConnections();
    } else {
        return self->QSctpServer::hasPendingConnections();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnHasPendingConnections(const QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_HasPendingConnections_Callback>(slot));
    }
}

// Derived class handler implementation
QTcpSocket* QSctpServer_NextPendingConnection(QSctpServer* self) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->nextPendingConnection();
    } else {
        return self->QSctpServer::nextPendingConnection();
    }
}

// Base class handler implementation
QTcpSocket* QSctpServer_QBaseNextPendingConnection(QSctpServer* self) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_NextPendingConnection_IsBase(true);
        return vqsctpserver->nextPendingConnection();
    } else {
        return self->QSctpServer::nextPendingConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnNextPendingConnection(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_NextPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_Event(QSctpServer* self, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->event(event);
    } else {
        return self->QSctpServer::event(event);
    }
}

// Base class handler implementation
bool QSctpServer_QBaseEvent(QSctpServer* self, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Event_IsBase(true);
        return vqsctpserver->event(event);
    } else {
        return self->QSctpServer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnEvent(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Event_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_EventFilter(QSctpServer* self, QObject* watched, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->eventFilter(watched, event);
    } else {
        return self->QSctpServer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSctpServer_QBaseEventFilter(QSctpServer* self, QObject* watched, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_EventFilter_IsBase(true);
        return vqsctpserver->eventFilter(watched, event);
    } else {
        return self->QSctpServer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnEventFilter(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_EventFilter_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_TimerEvent(QSctpServer* self, QTimerEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->timerEvent(event);
    } else {
        ((VirtualQSctpServer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSctpServer_QBaseTimerEvent(QSctpServer* self, QTimerEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_TimerEvent_IsBase(true);
        vqsctpserver->timerEvent(event);
    } else {
        ((VirtualQSctpServer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnTimerEvent(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_TimerEvent_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_ChildEvent(QSctpServer* self, QChildEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->childEvent(event);
    } else {
        ((VirtualQSctpServer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSctpServer_QBaseChildEvent(QSctpServer* self, QChildEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_ChildEvent_IsBase(true);
        vqsctpserver->childEvent(event);
    } else {
        ((VirtualQSctpServer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnChildEvent(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_ChildEvent_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_CustomEvent(QSctpServer* self, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->customEvent(event);
    } else {
        ((VirtualQSctpServer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSctpServer_QBaseCustomEvent(QSctpServer* self, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_CustomEvent_IsBase(true);
        vqsctpserver->customEvent(event);
    } else {
        ((VirtualQSctpServer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnCustomEvent(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_CustomEvent_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_ConnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->connectNotify(*signal);
    } else {
        ((VirtualQSctpServer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSctpServer_QBaseConnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_ConnectNotify_IsBase(true);
        vqsctpserver->connectNotify(*signal);
    } else {
        ((VirtualQSctpServer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnConnectNotify(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_ConnectNotify_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_DisconnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->disconnectNotify(*signal);
    } else {
        ((VirtualQSctpServer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSctpServer_QBaseDisconnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_DisconnectNotify_IsBase(true);
        vqsctpserver->disconnectNotify(*signal);
    } else {
        ((VirtualQSctpServer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnDisconnectNotify(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_AddPendingConnection(QSctpServer* self, QTcpSocket* socket) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->addPendingConnection(socket);
    } else {
        ((VirtualQSctpServer*)self)->addPendingConnection(socket);
    }
}

// Base class handler implementation
void QSctpServer_QBaseAddPendingConnection(QSctpServer* self, QTcpSocket* socket) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_AddPendingConnection_IsBase(true);
        vqsctpserver->addPendingConnection(socket);
    } else {
        ((VirtualQSctpServer*)self)->addPendingConnection(socket);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnAddPendingConnection(QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_AddPendingConnection_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_AddPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSctpServer_Sender(const QSctpServer* self) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->sender();
    } else {
        return ((VirtualQSctpServer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSctpServer_QBaseSender(const QSctpServer* self) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Sender_IsBase(true);
        return vqsctpserver->sender();
    } else {
        return ((VirtualQSctpServer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnSender(const QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Sender_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSctpServer_SenderSignalIndex(const QSctpServer* self) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->senderSignalIndex();
    } else {
        return ((VirtualQSctpServer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSctpServer_QBaseSenderSignalIndex(const QSctpServer* self) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_SenderSignalIndex_IsBase(true);
        return vqsctpserver->senderSignalIndex();
    } else {
        return ((VirtualQSctpServer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnSenderSignalIndex(const QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSctpServer_Receivers(const QSctpServer* self, const char* signal) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->receivers(signal);
    } else {
        return ((VirtualQSctpServer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSctpServer_QBaseReceivers(const QSctpServer* self, const char* signal) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Receivers_IsBase(true);
        return vqsctpserver->receivers(signal);
    } else {
        return ((VirtualQSctpServer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnReceivers(const QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_Receivers_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_IsSignalConnected(const QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        return vqsctpserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQSctpServer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSctpServer_QBaseIsSignalConnected(const QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_IsSignalConnected_IsBase(true);
        return vqsctpserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQSctpServer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnIsSignalConnected(const QSctpServer* self, intptr_t slot) {
    auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self));
    if (vqsctpserver && vqsctpserver->isVirtualQSctpServer) {
        vqsctpserver->setQSctpServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_IsSignalConnected_Callback>(slot));
    }
}

void QSctpServer_Delete(QSctpServer* self) {
    delete self;
}
