#include <QChildEvent>
#include <QDBusConnection>
#include <QDBusError>
#include <QDBusServer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDBusServer_Tr(const char* s) {
    auto _ret = QDBusServer::tr(s);
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
    auto _ret = self->address();
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
    QDBusServer::connect(self,
                         static_cast<void (QDBusServer::*)(const QDBusConnection&)>(&QDBusServer::newConnection),
                         [self, slotFunc](const QDBusConnection& connection) {
                             const QDBusConnection& connection_ret = connection;
                             // Cast returned reference into pointer
                             QDBusConnection* sigval1 = const_cast<QDBusConnection*>(&connection_ret);
                             slotFunc(self, sigval1);
                         });
}

libqt_string QDBusServer_Tr2(const char* s, const char* c) {
    auto _ret = QDBusServer::tr(s, c);
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
    auto _ret = QDBusServer::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDBusServer_SuperMetaObject(const QDBusServer* self) {
    return (QMetaObject*)self->QDBusServer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnMetaObject(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self)))
        vqdbusserver->qdbusserver_metaobject_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDBusServer_SuperMetacast(QDBusServer* self, const char* param1) {
    return self->QDBusServer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnMetacast(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_metacast_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDBusServer_SuperMetacall(QDBusServer* self, int param1, int param2, void** param3) {
    return self->QDBusServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnMetacall(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_metacall_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QDBusServer_Event(QDBusServer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDBusServer_SuperEvent(QDBusServer* self, QEvent* event) {
    return self->QDBusServer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnEvent(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_event_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDBusServer_EventFilter(QDBusServer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDBusServer_SuperEventFilter(QDBusServer* self, QObject* watched, QEvent* event) {
    return self->QDBusServer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnEventFilter(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_eventfilter_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDBusServer_TimerEvent(QDBusServer* self, QTimerEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver) {
        vqdbusserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusServer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusServer_SuperTimerEvent(QDBusServer* self, QTimerEvent* event) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self)) {
        vqdbusserver->QDBusServer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusServer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnTimerEvent(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_timerevent_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusServer_ChildEvent(QDBusServer* self, QChildEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver) {
        vqdbusserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusServer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusServer_SuperChildEvent(QDBusServer* self, QChildEvent* event) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self)) {
        vqdbusserver->QDBusServer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusServer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnChildEvent(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_childevent_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusServer_CustomEvent(QDBusServer* self, QEvent* event) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver) {
        vqdbusserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusServer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusServer_SuperCustomEvent(QDBusServer* self, QEvent* event) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self)) {
        vqdbusserver->QDBusServer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusServer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnCustomEvent(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_customevent_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusServer_ConnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver) {
        vqdbusserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusServer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusServer_SuperConnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self)) {
        vqdbusserver->QDBusServer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusServer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnConnectNotify(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_connectnotify_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDBusServer_DisconnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self);
    if (vqdbusserver) {
        vqdbusserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusServer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusServer_SuperDisconnectNotify(QDBusServer* self, const QMetaMethod* signal) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self)) {
        vqdbusserver->QDBusServer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusServer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusServer_OnDisconnectNotify(QDBusServer* self, intptr_t slot) {
    if (auto* vqdbusserver = dynamic_cast<VirtualQDBusServer*>(self))
        vqdbusserver->qdbusserver_disconnectnotify_callback = reinterpret_cast<VirtualQDBusServer::QDBusServer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDBusServer_Sender(const QDBusServer* self) {
    if (auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self))) {
        return vqdbusserver->VirtualQDBusServer::sender();
    } else
        qFatal("Error: Protected method QDBusServer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusServer_SenderSignalIndex(const QDBusServer* self) {
    if (auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self))) {
        return vqdbusserver->VirtualQDBusServer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDBusServer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusServer_Receivers(const QDBusServer* self, const char* signal) {
    if (auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self))) {
        return vqdbusserver->VirtualQDBusServer::receivers(signal);
    } else
        qFatal("Error: Protected method QDBusServer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDBusServer_IsSignalConnected(const QDBusServer* self, const QMetaMethod* signal) {
    if (auto* vqdbusserver = const_cast<VirtualQDBusServer*>(dynamic_cast<const VirtualQDBusServer*>(self))) {
        return vqdbusserver->VirtualQDBusServer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDBusServer::isSignalConnected called without a directly constructed type");
}

void QDBusServer_Delete(QDBusServer* self) {
    delete self;
}
