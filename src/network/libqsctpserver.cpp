#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSctpServer>
#include <QSctpSocket>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSctpServer_Tr(const char* s) {
    auto _ret = QSctpServer::tr(s);
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
    if (vqsctpserver) {
        vqsctpserver->incomingConnection((qintptr)(handle));
    }
}

libqt_string QSctpServer_Tr2(const char* s, const char* c) {
    auto _ret = QSctpServer::tr(s, c);
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
    auto _ret = QSctpServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QSctpServer_SuperMetaObject(const QSctpServer* self) {
    return (QMetaObject*)self->QSctpServer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnMetaObject(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self)))
        vqsctpserver->qsctpserver_metaobject_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSctpServer_SuperMetacast(QSctpServer* self, const char* param1) {
    return self->QSctpServer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnMetacast(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_metacast_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSctpServer_SuperMetacall(QSctpServer* self, int param1, int param2, void** param3) {
    return self->QSctpServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnMetacall(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_metacall_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_Metacall_Callback>(slot);
}

// Base class handler implementation
void QSctpServer_SuperIncomingConnection(QSctpServer* self, intptr_t handle) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->QSctpServer::incomingConnection((qintptr)(handle));
    } else
        qFatal("Error: Protected virtual method QSctpServer::incomingConnection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnIncomingConnection(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_incomingconnection_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_IncomingConnection_Callback>(slot);
}

// Derived class handler implementation
bool QSctpServer_HasPendingConnections(const QSctpServer* self) {
    return self->hasPendingConnections();
}

// Base class handler implementation
bool QSctpServer_SuperHasPendingConnections(const QSctpServer* self) {
    return self->QSctpServer::hasPendingConnections();
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnHasPendingConnections(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self)))
        vqsctpserver->qsctpserver_haspendingconnections_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_HasPendingConnections_Callback>(slot);
}

// Derived class handler implementation
QTcpSocket* QSctpServer_NextPendingConnection(QSctpServer* self) {
    return self->nextPendingConnection();
}

// Base class handler implementation
QTcpSocket* QSctpServer_SuperNextPendingConnection(QSctpServer* self) {
    return self->QSctpServer::nextPendingConnection();
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnNextPendingConnection(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_nextpendingconnection_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_NextPendingConnection_Callback>(slot);
}

// Derived class handler implementation
bool QSctpServer_Event(QSctpServer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSctpServer_SuperEvent(QSctpServer* self, QEvent* event) {
    return self->QSctpServer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_event_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSctpServer_EventFilter(QSctpServer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSctpServer_SuperEventFilter(QSctpServer* self, QObject* watched, QEvent* event) {
    return self->QSctpServer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnEventFilter(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_eventfilter_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSctpServer_TimerEvent(QSctpServer* self, QTimerEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver) {
        vqsctpserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSctpServer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpServer_SuperTimerEvent(QSctpServer* self, QTimerEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->QSctpServer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSctpServer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnTimerEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_timerevent_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSctpServer_ChildEvent(QSctpServer* self, QChildEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver) {
        vqsctpserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSctpServer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpServer_SuperChildEvent(QSctpServer* self, QChildEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->QSctpServer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSctpServer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnChildEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_childevent_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSctpServer_CustomEvent(QSctpServer* self, QEvent* event) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver) {
        vqsctpserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSctpServer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpServer_SuperCustomEvent(QSctpServer* self, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->QSctpServer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSctpServer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnCustomEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_customevent_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSctpServer_ConnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver) {
        vqsctpserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSctpServer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpServer_SuperConnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->QSctpServer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSctpServer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnConnectNotify(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_connectnotify_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSctpServer_DisconnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self);
    if (vqsctpserver) {
        vqsctpserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSctpServer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpServer_SuperDisconnectNotify(QSctpServer* self, const QMetaMethod* signal) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->QSctpServer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSctpServer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnDisconnectNotify(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self))
        vqsctpserver->qsctpserver_disconnectnotify_callback = reinterpret_cast<VirtualQSctpServer::QSctpServer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSctpServer_AddPendingConnection(QSctpServer* self, QTcpSocket* socket) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->VirtualQSctpServer::addPendingConnection(socket);
    } else
        qFatal("Error: Protected method QSctpServer::addPendingConnection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSctpServer_Sender(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->VirtualQSctpServer::sender();
    } else
        qFatal("Error: Protected method QSctpServer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSctpServer_SenderSignalIndex(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->VirtualQSctpServer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSctpServer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSctpServer_Receivers(const QSctpServer* self, const char* signal) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->VirtualQSctpServer::receivers(signal);
    } else
        qFatal("Error: Protected method QSctpServer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSctpServer_IsSignalConnected(const QSctpServer* self, const QMetaMethod* signal) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->VirtualQSctpServer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSctpServer::isSignalConnected called without a directly constructed type");
}

void QSctpServer_Delete(QSctpServer* self) {
    delete self;
}
