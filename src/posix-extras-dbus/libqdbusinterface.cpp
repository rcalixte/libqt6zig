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
#include <QByteArray>
#include <cstring>
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
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDBusInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int QDBusInterface_QBaseMetacall(QDBusInterface* self, int param1, int param2, void** param3) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Metacall_IsBase(true);
        return vqdbusinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDBusInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnMetacall(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Metacall_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusInterface_ConnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->connectNotify(*signal);
    } else {
        ((VirtualQDBusInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusInterface_QBaseConnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_ConnectNotify_IsBase(true);
        vqdbusinterface->connectNotify(*signal);
    } else {
        ((VirtualQDBusInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnConnectNotify(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusInterface_DisconnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDBusInterface_QBaseDisconnectNotify(QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_DisconnectNotify_IsBase(true);
        vqdbusinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDBusInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnDisconnectNotify(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusInterface_Event(QDBusInterface* self, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return vqdbusinterface->event(event);
    } else {
        return self->QDBusInterface::event(event);
    }
}

// Base class handler implementation
bool QDBusInterface_QBaseEvent(QDBusInterface* self, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Event_IsBase(true);
        return vqdbusinterface->event(event);
    } else {
        return self->QDBusInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnEvent(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Event_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusInterface_EventFilter(QDBusInterface* self, QObject* watched, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return vqdbusinterface->eventFilter(watched, event);
    } else {
        return self->QDBusInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDBusInterface_QBaseEventFilter(QDBusInterface* self, QObject* watched, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_EventFilter_IsBase(true);
        return vqdbusinterface->eventFilter(watched, event);
    } else {
        return self->QDBusInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnEventFilter(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_EventFilter_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusInterface_TimerEvent(QDBusInterface* self, QTimerEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->timerEvent(event);
    } else {
        ((VirtualQDBusInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDBusInterface_QBaseTimerEvent(QDBusInterface* self, QTimerEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_TimerEvent_IsBase(true);
        vqdbusinterface->timerEvent(event);
    } else {
        ((VirtualQDBusInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnTimerEvent(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusInterface_ChildEvent(QDBusInterface* self, QChildEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->childEvent(event);
    } else {
        ((VirtualQDBusInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDBusInterface_QBaseChildEvent(QDBusInterface* self, QChildEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_ChildEvent_IsBase(true);
        vqdbusinterface->childEvent(event);
    } else {
        ((VirtualQDBusInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnChildEvent(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusInterface_CustomEvent(QDBusInterface* self, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->customEvent(event);
    } else {
        ((VirtualQDBusInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDBusInterface_QBaseCustomEvent(QDBusInterface* self, QEvent* event) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_CustomEvent_IsBase(true);
        vqdbusinterface->customEvent(event);
    } else {
        ((VirtualQDBusInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnCustomEvent(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDBusInterface_InternalPropGet(const QDBusInterface* self, const char* propname) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return new QVariant(vqdbusinterface->internalPropGet(propname));
    }
    return {};
}

// Base class handler implementation
QVariant* QDBusInterface_QBaseInternalPropGet(const QDBusInterface* self, const char* propname) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_InternalPropGet_IsBase(true);
        return new QVariant(vqdbusinterface->internalPropGet(propname));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnInternalPropGet(const QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_InternalPropGet_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_InternalPropGet_Callback>(slot));
    }
}

// Derived class handler implementation
void QDBusInterface_InternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->internalPropSet(propname, *value);
    } else {
        ((VirtualQDBusInterface*)self)->internalPropSet(propname, *value);
    }
}

// Base class handler implementation
void QDBusInterface_QBaseInternalPropSet(QDBusInterface* self, const char* propname, const QVariant* value) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_InternalPropSet_IsBase(true);
        vqdbusinterface->internalPropSet(propname, *value);
    } else {
        ((VirtualQDBusInterface*)self)->internalPropSet(propname, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnInternalPropSet(QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = dynamic_cast<VirtualQDBusInterface*>(self);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_InternalPropSet_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_InternalPropSet_Callback>(slot));
    }
}

// Derived class handler implementation
QDBusMessage* QDBusInterface_InternalConstCall(const QDBusInterface* self, int mode, const libqt_string method) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    QString method_QString = QString::fromUtf8(method.data, method.len);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return new QDBusMessage(vqdbusinterface->internalConstCall(static_cast<QDBus::CallMode>(mode), method_QString));
    }
    return {};
}

// Base class handler implementation
QDBusMessage* QDBusInterface_QBaseInternalConstCall(const QDBusInterface* self, int mode, const libqt_string method) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    QString method_QString = QString::fromUtf8(method.data, method.len);
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_InternalConstCall_IsBase(true);
        return new QDBusMessage(vqdbusinterface->internalConstCall(static_cast<QDBus::CallMode>(mode), method_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnInternalConstCall(const QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_InternalConstCall_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_InternalConstCall_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDBusInterface_Sender(const QDBusInterface* self) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return vqdbusinterface->sender();
    } else {
        return ((VirtualQDBusInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDBusInterface_QBaseSender(const QDBusInterface* self) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Sender_IsBase(true);
        return vqdbusinterface->sender();
    } else {
        return ((VirtualQDBusInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnSender(const QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Sender_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusInterface_SenderSignalIndex(const QDBusInterface* self) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return vqdbusinterface->senderSignalIndex();
    } else {
        return ((VirtualQDBusInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDBusInterface_QBaseSenderSignalIndex(const QDBusInterface* self) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_SenderSignalIndex_IsBase(true);
        return vqdbusinterface->senderSignalIndex();
    } else {
        return ((VirtualQDBusInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnSenderSignalIndex(const QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDBusInterface_Receivers(const QDBusInterface* self, const char* signal) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return vqdbusinterface->receivers(signal);
    } else {
        return ((VirtualQDBusInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDBusInterface_QBaseReceivers(const QDBusInterface* self, const char* signal) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Receivers_IsBase(true);
        return vqdbusinterface->receivers(signal);
    } else {
        return ((VirtualQDBusInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnReceivers(const QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_Receivers_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDBusInterface_IsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        return vqdbusinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDBusInterface_QBaseIsSignalConnected(const QDBusInterface* self, const QMetaMethod* signal) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_IsSignalConnected_IsBase(true);
        return vqdbusinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDBusInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDBusInterface_OnIsSignalConnected(const QDBusInterface* self, intptr_t slot) {
    auto* vqdbusinterface = const_cast<VirtualQDBusInterface*>(dynamic_cast<const VirtualQDBusInterface*>(self));
    if (vqdbusinterface && vqdbusinterface->isVirtualQDBusInterface) {
        vqdbusinterface->setQDBusInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDBusInterface::QDBusInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDBusInterface_Delete(QDBusInterface* self) {
    delete self;
}
