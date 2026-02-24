#include <QAbstractExtensionFactory>
#include <QAbstractExtensionManager>
#include <QChildEvent>
#include <QEvent>
#include <QExtensionManager>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qextensionmanager.h>
#include "libqextensionmanager.h"
#include "libqextensionmanager.hxx"

QExtensionManager* QExtensionManager_new() {
    return new VirtualQExtensionManager();
}

QExtensionManager* QExtensionManager_new2(QObject* parent) {
    return new VirtualQExtensionManager(parent);
}

QMetaObject* QExtensionManager_MetaObject(const QExtensionManager* self) {
    auto* vqextensionmanager = dynamic_cast<const VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQExtensionManager*)self)->metaObject();
    }
}

void* QExtensionManager_Metacast(QExtensionManager* self, const char* param1) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQExtensionManager*)self)->qt_metacast(param1);
    }
}

int QExtensionManager_Metacall(QExtensionManager* self, int param1, int param2, void** param3) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQExtensionManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QExtensionManager_RegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        self->registerExtensions(factory, iid_QString);
    } else {
        ((VirtualQExtensionManager*)self)->registerExtensions(factory, iid_QString);
    }
}

void QExtensionManager_UnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        self->unregisterExtensions(factory, iid_QString);
    } else {
        ((VirtualQExtensionManager*)self)->unregisterExtensions(factory, iid_QString);
    }
}

QObject* QExtensionManager_Extension(const QExtensionManager* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    auto* vqextensionmanager = dynamic_cast<const VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return self->extension(object, iid_QString);
    } else {
        return ((VirtualQExtensionManager*)self)->extension(object, iid_QString);
    }
}

// Base class handler implementation
QMetaObject* QExtensionManager_SuperMetaObject(const QExtensionManager* self) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_MetaObject_IsBase(true);
        return (QMetaObject*)vqextensionmanager->metaObject();
    } else {
        return (QMetaObject*)self->QExtensionManager::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnMetaObject(const QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_MetaObject_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QExtensionManager_SuperMetacast(QExtensionManager* self, const char* param1) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Metacast_IsBase(true);
        return vqextensionmanager->qt_metacast(param1);
    } else {
        return self->QExtensionManager::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnMetacast(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Metacast_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QExtensionManager_SuperMetacall(QExtensionManager* self, int param1, int param2, void** param3) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Metacall_IsBase(true);
        return vqextensionmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QExtensionManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnMetacall(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Metacall_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QExtensionManager_SuperRegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_RegisterExtensions_IsBase(true);
        vqextensionmanager->registerExtensions(factory, iid_QString);
    } else {
        self->QExtensionManager::registerExtensions(factory, iid_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnRegisterExtensions(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_RegisterExtensions_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_RegisterExtensions_Callback>(slot));
    }
}

// Base class handler implementation
void QExtensionManager_SuperUnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_UnregisterExtensions_IsBase(true);
        vqextensionmanager->unregisterExtensions(factory, iid_QString);
    } else {
        self->QExtensionManager::unregisterExtensions(factory, iid_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnUnregisterExtensions(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_UnregisterExtensions_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_UnregisterExtensions_Callback>(slot));
    }
}

// Base class handler implementation
QObject* QExtensionManager_SuperExtension(const QExtensionManager* self, QObject* object, const libqt_string iid) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Extension_IsBase(true);
        return vqextensionmanager->extension(object, iid_QString);
    } else {
        return self->QExtensionManager::extension(object, iid_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnExtension(const QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Extension_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QExtensionManager_Event(QExtensionManager* self, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return vqextensionmanager->event(event);
    } else {
        return self->QExtensionManager::event(event);
    }
}

// Base class handler implementation
bool QExtensionManager_SuperEvent(QExtensionManager* self, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Event_IsBase(true);
        return vqextensionmanager->event(event);
    } else {
        return self->QExtensionManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnEvent(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Event_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QExtensionManager_EventFilter(QExtensionManager* self, QObject* watched, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return vqextensionmanager->eventFilter(watched, event);
    } else {
        return self->QExtensionManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QExtensionManager_SuperEventFilter(QExtensionManager* self, QObject* watched, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_EventFilter_IsBase(true);
        return vqextensionmanager->eventFilter(watched, event);
    } else {
        return self->QExtensionManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnEventFilter(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_EventFilter_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionManager_TimerEvent(QExtensionManager* self, QTimerEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->timerEvent(event);
    } else {
        ((VirtualQExtensionManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QExtensionManager_SuperTimerEvent(QExtensionManager* self, QTimerEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_TimerEvent_IsBase(true);
        vqextensionmanager->timerEvent(event);
    } else {
        ((VirtualQExtensionManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnTimerEvent(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_TimerEvent_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionManager_ChildEvent(QExtensionManager* self, QChildEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->childEvent(event);
    } else {
        ((VirtualQExtensionManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QExtensionManager_SuperChildEvent(QExtensionManager* self, QChildEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_ChildEvent_IsBase(true);
        vqextensionmanager->childEvent(event);
    } else {
        ((VirtualQExtensionManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnChildEvent(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_ChildEvent_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionManager_CustomEvent(QExtensionManager* self, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->customEvent(event);
    } else {
        ((VirtualQExtensionManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QExtensionManager_SuperCustomEvent(QExtensionManager* self, QEvent* event) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_CustomEvent_IsBase(true);
        vqextensionmanager->customEvent(event);
    } else {
        ((VirtualQExtensionManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnCustomEvent(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_CustomEvent_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionManager_ConnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->connectNotify(*signal);
    } else {
        ((VirtualQExtensionManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QExtensionManager_SuperConnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_ConnectNotify_IsBase(true);
        vqextensionmanager->connectNotify(*signal);
    } else {
        ((VirtualQExtensionManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnConnectNotify(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_ConnectNotify_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionManager_DisconnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->disconnectNotify(*signal);
    } else {
        ((VirtualQExtensionManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QExtensionManager_SuperDisconnectNotify(QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_DisconnectNotify_IsBase(true);
        vqextensionmanager->disconnectNotify(*signal);
    } else {
        ((VirtualQExtensionManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnDisconnectNotify(QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = dynamic_cast<VirtualQExtensionManager*>(self);
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_DisconnectNotify_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QExtensionManager_Sender(const QExtensionManager* self) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return vqextensionmanager->sender();
    } else {
        return ((VirtualQExtensionManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* QExtensionManager_SuperSender(const QExtensionManager* self) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Sender_IsBase(true);
        return vqextensionmanager->sender();
    } else {
        return ((VirtualQExtensionManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnSender(const QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Sender_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QExtensionManager_SenderSignalIndex(const QExtensionManager* self) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return vqextensionmanager->senderSignalIndex();
    } else {
        return ((VirtualQExtensionManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QExtensionManager_SuperSenderSignalIndex(const QExtensionManager* self) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_SenderSignalIndex_IsBase(true);
        return vqextensionmanager->senderSignalIndex();
    } else {
        return ((VirtualQExtensionManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnSenderSignalIndex(const QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QExtensionManager_Receivers(const QExtensionManager* self, const char* signal) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return vqextensionmanager->receivers(signal);
    } else {
        return ((VirtualQExtensionManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QExtensionManager_SuperReceivers(const QExtensionManager* self, const char* signal) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Receivers_IsBase(true);
        return vqextensionmanager->receivers(signal);
    } else {
        return ((VirtualQExtensionManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnReceivers(const QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_Receivers_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QExtensionManager_IsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        return vqextensionmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualQExtensionManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QExtensionManager_SuperIsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_IsSignalConnected_IsBase(true);
        return vqextensionmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualQExtensionManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionManager_OnIsSignalConnected(const QExtensionManager* self, intptr_t slot) {
    auto* vqextensionmanager = const_cast<VirtualQExtensionManager*>(dynamic_cast<const VirtualQExtensionManager*>(self));
    if (vqextensionmanager && vqextensionmanager->isVirtualQExtensionManager) {
        vqextensionmanager->setQExtensionManager_IsSignalConnected_Callback(reinterpret_cast<VirtualQExtensionManager::QExtensionManager_IsSignalConnected_Callback>(slot));
    }
}

void QExtensionManager_Delete(QExtensionManager* self) {
    delete self;
}
