#include <QChildEvent>
#include <QDBusConnection>
#include <QDBusError>
#include <QDBusServer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdbusserver.h>
#include "libqdbusserver.h"
#include "libqdbusserver.hxx"

QDBusServer* QDBusServer_new(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return new VirtualQDBusServer(address_QString);
}

QDBusServer* QDBusServer_new2() {
    return new VirtualQDBusServer();
}

QDBusServer* QDBusServer_new3(const libqt_string address, QObject* parent) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return new VirtualQDBusServer(address_QString, parent);
}

QDBusServer* QDBusServer_new4(QObject* parent) {
    return new VirtualQDBusServer(parent);
}

QMetaObject* QDBusServer_MetaObject(const QDBusServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusServer_Metacast(QDBusServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusServer_Metacall(QDBusServer* self, int param1, int param2, void** param3) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDBusServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDBusServer_Tr(const char* s) {
    QString _ret = QDBusServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDBusServer_IsConnected(const QDBusServer* self) {
    return self->isConnected();
}

QDBusError* QDBusServer_LastError(const QDBusServer* self) {
    return new QDBusError(self->lastError());
}

libqt_string QDBusServer_Address(const QDBusServer* self) {
    QString _ret = self->address();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDBusServer_SetAnonymousAuthenticationAllowed(QDBusServer* self, bool value) {
    self->setAnonymousAuthenticationAllowed(value);
}

bool QDBusServer_IsAnonymousAuthenticationAllowed(const QDBusServer* self) {
    return self->isAnonymousAuthenticationAllowed();
}

void QDBusServer_NewConnection(QDBusServer* self, const QDBusConnection* connection) {
    self->newConnection(*connection);
}

void QDBusServer_Connect_NewConnection(QDBusServer* self, intptr_t slot) {
    void (*slotFunc)(QDBusServer*, QDBusConnection*) = reinterpret_cast<void (*)(QDBusServer*, QDBusConnection*)>(slot);
    QDBusServer::connect(self, &QDBusServer::newConnection, [self, slotFunc](const QDBusConnection& connection) {
        const QDBusConnection& connection_ret = connection;
        // Cast returned reference into pointer
        QDBusConnection* sigval1 = const_cast<QDBusConnection*>(&connection_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QDBusServer_Tr2(const char* s, const char* c) {
    QString _ret = QDBusServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusServer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDBusServer::tr(s, c, static_cast<int>(n));
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
int QDBusServer_QBaseMetacall(QDBusServer* self, int param1, int param2, void** param3) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Metacall_IsBase(true);
        return vqdbusserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDBusServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnMetacall(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Metacall_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusServer_Event(QDBusServer* self, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return vqdbusserver->event(event);
    } else {
        return self->QDBusServer::event(event);
    }
}

// Base class handler implementation
bool QDBusServer_QBaseEvent(QDBusServer* self, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Event_IsBase(true);
        return vqdbusserver->event(event);
    } else {
        return self->QDBusServer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnEvent(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Event_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusServer_EventFilter(QDBusServer* self, QObject* watched, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return vqdbusserver->eventFilter(watched, event);
    } else {
        return self->QDBusServer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDBusServer_QBaseEventFilter(QDBusServer* self, QObject* watched, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_EventFilter_IsBase(true);
        return vqdbusserver->eventFilter(watched, event);
    } else {
        return self->QDBusServer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnEventFilter(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_EventFilter_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServer_TimerEvent(QDBusServer* self, QTimerEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->timerEvent(event);
    } else {
        ((VirtualQDBusServer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDBusServer_QBaseTimerEvent(QDBusServer* self, QTimerEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_TimerEvent_IsBase(true);
        vqdbusserver->timerEvent(event);
    } else {
        ((VirtualQDBusServer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnTimerEvent(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_TimerEvent_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServer_ChildEvent(QDBusServer* self, QChildEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->childEvent(event);
    } else {
        ((VirtualQDBusServer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDBusServer_QBaseChildEvent(QDBusServer* self, QChildEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_ChildEvent_IsBase(true);
        vqdbusserver->childEvent(event);
    } else {
        ((VirtualQDBusServer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnChildEvent(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_ChildEvent_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServer_CustomEvent(QDBusServer* self, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->customEvent(event);
    } else {
        ((VirtualQDBusServer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDBusServer_QBaseCustomEvent(QDBusServer* self, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_CustomEvent_IsBase(true);
        vqdbusserver->customEvent(event);
    } else {
        ((VirtualQDBusServer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnCustomEvent(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_CustomEvent_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServer_ConnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->connectNotify(*signal);
    } else {
        ((VirtualQDBusServer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusServer_QBaseConnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_ConnectNotify_IsBase(true);
        vqdbusserver->connectNotify(*signal);
    } else {
        ((VirtualQDBusServer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnConnectNotify(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_ConnectNotify_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusServer_DisconnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusServer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusServer_QBaseDisconnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_DisconnectNotify_IsBase(true);
        vqdbusserver->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusServer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnDisconnectNotify(QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDBusServer_Sender(const QDBusServer* self) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return vqdbusserver->sender();
    } else {
        return ((VirtualQDBusServer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDBusServer_QBaseSender(const QDBusServer* self) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Sender_IsBase(true);
        return vqdbusserver->sender();
    } else {
        return ((VirtualQDBusServer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnSender(const QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Sender_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusServer_SenderSignalIndex(const QDBusServer* self) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return vqdbusserver->senderSignalIndex();
    } else {
        return ((VirtualQDBusServer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDBusServer_QBaseSenderSignalIndex(const QDBusServer* self) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_SenderSignalIndex_IsBase(true);
        return vqdbusserver->senderSignalIndex();
    } else {
        return ((VirtualQDBusServer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnSenderSignalIndex(const QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusServer_Receivers(const QDBusServer* self, const char* signal) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return vqdbusserver->receivers(signal);
    } else {
        return ((VirtualQDBusServer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDBusServer_QBaseReceivers(const QDBusServer* self, const char* signal) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Receivers_IsBase(true);
        return vqdbusserver->receivers(signal);
    } else {
        return ((VirtualQDBusServer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnReceivers(const QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_Receivers_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusServer_IsSignalConnected(const QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        return vqdbusserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusServer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDBusServer_QBaseIsSignalConnected(const QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_IsSignalConnected_IsBase(true);
        return vqdbusserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusServer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnIsSignalConnected(const QDBusServer* self, intptr_t slot) {
    auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self));
    if (vqdbusserver && vqdbusserver->isVirtualQDBusServer) {
        vqdbusserver->setQDBusServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQDBusServer::QDBusServer_IsSignalConnected_Callback>(slot));
    }
}

void QDBusServer_Delete(QDBusServer* self) {
    delete self;
}
