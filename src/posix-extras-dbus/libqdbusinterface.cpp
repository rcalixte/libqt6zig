#include <QChildEvent>
#include <QDBusAbstractInterface>
#include <QDBusAbstractInterfaceBase>
#include <QDBusConnection>
#include <QDBusInterface>
#include <QDBusMessage>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qdbusinterface.h>
#include "libqdbusinterface.h"
#include "libqdbusinterface.hxx"

QDBusInterface* QDBusInterface_new(const libqt_string service, const libqt_string path) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new VirtualQDBusInterface(service_QString, path_QString);
}

QDBusInterface* QDBusInterface_new2(const libqt_string service, const libqt_string path, const libqt_string interface) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    return new VirtualQDBusInterface(service_QString, path_QString, interface_QString);
}

QDBusInterface* QDBusInterface_new3(const libqt_string service, const libqt_string path, const libqt_string interface, const QDBusConnection* connection) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    return new VirtualQDBusInterface(service_QString, path_QString, interface_QString, *connection);
}

QDBusInterface* QDBusInterface_new4(const libqt_string service, const libqt_string path, const libqt_string interface, const QDBusConnection* connection, QObject* parent) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    return new VirtualQDBusInterface(service_QString, path_QString, interface_QString, *connection, parent);
}

QMetaObject* QDBusInterface_MetaObject(const QDBusInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusInterface_Metacast(QDBusInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusInterface_Metacall(QDBusInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
QMetaObject* QDBusInterface_SuperMetaObject(const QDBusInterface* self) {
    return (QMetaObject*)self->QDBusInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnMetaObject(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self)))
        vqdbusinterface->qdbusinterface_metaobject_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDBusInterface_SuperMetacast(QDBusInterface* self, const char* param1) {
    return self->QDBusInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnMetacast(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_metacast_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDBusInterface_SuperMetacall(QDBusInterface* self, int param1, int param2, void** param3) {
    return self->QDBusInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnMetacall(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_metacall_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QDBusInterface_ConnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface) {
        vqdbusinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusInterface_SuperConnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self)) {
        vqdbusinterface->QDBusInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnConnectNotify(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_connectnotify_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDBusInterface_DisconnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface) {
        vqdbusinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusInterface_SuperDisconnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self)) {
        vqdbusinterface->QDBusInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnDisconnectNotify(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
bool QDBusInterface_Event(QDBusInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDBusInterface_SuperEvent(QDBusInterface* self, QEvent* event) {
    return self->QDBusInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnEvent(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_event_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDBusInterface_EventFilter(QDBusInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDBusInterface_SuperEventFilter(QDBusInterface* self, QObject* watched, QEvent* event) {
    return self->QDBusInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnEventFilter(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_eventfilter_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDBusInterface_TimerEvent(QDBusInterface* self, QTimerEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface) {
        vqdbusinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusInterface_SuperTimerEvent(QDBusInterface* self, QTimerEvent* event) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self)) {
        vqdbusinterface->QDBusInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnTimerEvent(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_timerevent_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusInterface_ChildEvent(QDBusInterface* self, QChildEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface) {
        vqdbusinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusInterface_SuperChildEvent(QDBusInterface* self, QChildEvent* event) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self)) {
        vqdbusinterface->QDBusInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnChildEvent(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_childevent_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusInterface_CustomEvent(QDBusInterface* self, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface) {
        vqdbusinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusInterface_SuperCustomEvent(QDBusInterface* self, QEvent* event) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self)) {
        vqdbusinterface->QDBusInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnCustomEvent(QDBusInterface* self, intptr_t slot) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self))
        vqdbusinterface->qdbusinterface_customevent_callback = reinterpret_cast<VirtualQDBusInterface::QDBusInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDBusInterface_InternalPropGet(const QDBusInterface* self, const char* propname) {
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self)))
        return new QVariant(vqdbusinterface->internalPropGet(propname));
    qFatal("Error: Protected method QDBusInterface::internalPropGet called without a directly constructed type");
}

// Derived class protected handler implementation
void QDBusInterface_InternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value) {
    if (auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self)) {
        vqdbusinterface->VirtualQDBusInterface::internalPropSet(propname, *value);
    } else
        qFatal("Error: Protected method QDBusInterface::internalPropSet called without a directly constructed type");
}

// Derived class handler implementation
QDBusMessage* QDBusInterface_InternalConstCall(const QDBusInterface* self, int mode, const libqt_string method) {
    QString method_QString = QString::fromUtf8(method.data, method.len);
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self)))
        return new QDBusMessage(vqdbusinterface->internalConstCall(static_cast<QDBus::CallMode>(mode), method_QString));
    qFatal("Error: Protected method QDBusInterface::internalConstCall called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDBusInterface_Sender(const QDBusInterface* self) {
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self))) {
        return vqdbusinterface->VirtualQDBusInterface::sender();
    } else
        qFatal("Error: Protected method QDBusInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusInterface_SenderSignalIndex(const QDBusInterface* self) {
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self))) {
        return vqdbusinterface->VirtualQDBusInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDBusInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusInterface_Receivers(const QDBusInterface* self, const char* signal) {
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self))) {
        return vqdbusinterface->VirtualQDBusInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDBusInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDBusInterface_IsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal) {
    if (auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self))) {
        return vqdbusinterface->VirtualQDBusInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDBusInterface::isSignalConnected called without a directly constructed type");
}

void QDBusInterface_Delete(QDBusInterface* self) {
    delete self;
}
