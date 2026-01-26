#include <QAbstractExtensionFactory>
#include <QChildEvent>
#include <QEvent>
#include <QExtensionFactory>
#include <QExtensionManager>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <default_extensionfactory.h>
#include "libdefault_extensionfactory.h"
#include "libdefault_extensionfactory.hxx"

QExtensionFactory* QExtensionFactory_new() {
    return new VirtualQExtensionFactory();
}

QExtensionFactory* QExtensionFactory_new2(QExtensionManager* parent) {
    return new VirtualQExtensionFactory(parent);
}

QMetaObject* QExtensionFactory_MetaObject(const QExtensionFactory* self) {
    auto* vqextensionfactory = dynamic_cast<const VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQExtensionFactory*)self)->metaObject();
    }
}

void* QExtensionFactory_Metacast(QExtensionFactory* self, const char* param1) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQExtensionFactory*)self)->qt_metacast(param1);
    }
}

int QExtensionFactory_Metacall(QExtensionFactory* self, int param1, int param2, void** param3) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQExtensionFactory*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QObject* QExtensionFactory_Extension(const QExtensionFactory* self, QObject* object, const libqt_string iid) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    auto* vqextensionfactory = dynamic_cast<const VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return self->extension(object, iid_QString);
    } else {
        return ((VirtualQExtensionFactory*)self)->extension(object, iid_QString);
    }
}

QExtensionManager* QExtensionFactory_ExtensionManager(const QExtensionFactory* self) {
    return self->extensionManager();
}

QObject* QExtensionFactory_CreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent) {
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    auto* vqextensionfactory = dynamic_cast<const VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->createExtension(object, iid_QString, parent);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QExtensionFactory_QBaseMetaObject(const QExtensionFactory* self) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_MetaObject_IsBase(true);
        return (QMetaObject*)vqextensionfactory->metaObject();
    } else {
        return (QMetaObject*)self->QExtensionFactory::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnMetaObject(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_MetaObject_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QExtensionFactory_QBaseMetacast(QExtensionFactory* self, const char* param1) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Metacast_IsBase(true);
        return vqextensionfactory->qt_metacast(param1);
    } else {
        return self->QExtensionFactory::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnMetacast(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Metacast_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QExtensionFactory_QBaseMetacall(QExtensionFactory* self, int param1, int param2, void** param3) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Metacall_IsBase(true);
        return vqextensionfactory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QExtensionFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnMetacall(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Metacall_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QObject* QExtensionFactory_QBaseExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Extension_IsBase(true);
        return vqextensionfactory->extension(object, iid_QString);
    } else {
        return self->QExtensionFactory::extension(object, iid_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnExtension(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Extension_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Extension_Callback>(slot));
    }
}

// Base class handler implementation
QObject* QExtensionFactory_QBaseCreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    QString iid_QString = QString::fromUtf8(iid.data, iid.len);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_CreateExtension_IsBase(true);
        return vqextensionfactory->createExtension(object, iid_QString, parent);
    } else {
        return ((VirtualQExtensionFactory*)self)->createExtension(object, iid_QString, parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnCreateExtension(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_CreateExtension_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_CreateExtension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QExtensionFactory_Event(QExtensionFactory* self, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->event(event);
    } else {
        return self->QExtensionFactory::event(event);
    }
}

// Base class handler implementation
bool QExtensionFactory_QBaseEvent(QExtensionFactory* self, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Event_IsBase(true);
        return vqextensionfactory->event(event);
    } else {
        return self->QExtensionFactory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnEvent(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Event_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QExtensionFactory_EventFilter(QExtensionFactory* self, QObject* watched, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->eventFilter(watched, event);
    } else {
        return self->QExtensionFactory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QExtensionFactory_QBaseEventFilter(QExtensionFactory* self, QObject* watched, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_EventFilter_IsBase(true);
        return vqextensionfactory->eventFilter(watched, event);
    } else {
        return self->QExtensionFactory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnEventFilter(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_EventFilter_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionFactory_TimerEvent(QExtensionFactory* self, QTimerEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->timerEvent(event);
    } else {
        ((VirtualQExtensionFactory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QExtensionFactory_QBaseTimerEvent(QExtensionFactory* self, QTimerEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_TimerEvent_IsBase(true);
        vqextensionfactory->timerEvent(event);
    } else {
        ((VirtualQExtensionFactory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnTimerEvent(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_TimerEvent_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionFactory_ChildEvent(QExtensionFactory* self, QChildEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->childEvent(event);
    } else {
        ((VirtualQExtensionFactory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QExtensionFactory_QBaseChildEvent(QExtensionFactory* self, QChildEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_ChildEvent_IsBase(true);
        vqextensionfactory->childEvent(event);
    } else {
        ((VirtualQExtensionFactory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnChildEvent(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_ChildEvent_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionFactory_CustomEvent(QExtensionFactory* self, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->customEvent(event);
    } else {
        ((VirtualQExtensionFactory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QExtensionFactory_QBaseCustomEvent(QExtensionFactory* self, QEvent* event) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_CustomEvent_IsBase(true);
        vqextensionfactory->customEvent(event);
    } else {
        ((VirtualQExtensionFactory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnCustomEvent(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_CustomEvent_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionFactory_ConnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->connectNotify(*signal);
    } else {
        ((VirtualQExtensionFactory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QExtensionFactory_QBaseConnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_ConnectNotify_IsBase(true);
        vqextensionfactory->connectNotify(*signal);
    } else {
        ((VirtualQExtensionFactory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnConnectNotify(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_ConnectNotify_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QExtensionFactory_DisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->disconnectNotify(*signal);
    } else {
        ((VirtualQExtensionFactory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QExtensionFactory_QBaseDisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_DisconnectNotify_IsBase(true);
        vqextensionfactory->disconnectNotify(*signal);
    } else {
        ((VirtualQExtensionFactory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnDisconnectNotify(QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = dynamic_cast<VirtualQExtensionFactory*>(self);
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_DisconnectNotify_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QExtensionFactory_Sender(const QExtensionFactory* self) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->sender();
    } else {
        return ((VirtualQExtensionFactory*)self)->sender();
    }
}

// Base class handler implementation
QObject* QExtensionFactory_QBaseSender(const QExtensionFactory* self) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Sender_IsBase(true);
        return vqextensionfactory->sender();
    } else {
        return ((VirtualQExtensionFactory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnSender(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Sender_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QExtensionFactory_SenderSignalIndex(const QExtensionFactory* self) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->senderSignalIndex();
    } else {
        return ((VirtualQExtensionFactory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QExtensionFactory_QBaseSenderSignalIndex(const QExtensionFactory* self) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_SenderSignalIndex_IsBase(true);
        return vqextensionfactory->senderSignalIndex();
    } else {
        return ((VirtualQExtensionFactory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnSenderSignalIndex(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_SenderSignalIndex_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QExtensionFactory_Receivers(const QExtensionFactory* self, const char* signal) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->receivers(signal);
    } else {
        return ((VirtualQExtensionFactory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QExtensionFactory_QBaseReceivers(const QExtensionFactory* self, const char* signal) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Receivers_IsBase(true);
        return vqextensionfactory->receivers(signal);
    } else {
        return ((VirtualQExtensionFactory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnReceivers(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_Receivers_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QExtensionFactory_IsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        return vqextensionfactory->isSignalConnected(*signal);
    } else {
        return ((VirtualQExtensionFactory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QExtensionFactory_QBaseIsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_IsSignalConnected_IsBase(true);
        return vqextensionfactory->isSignalConnected(*signal);
    } else {
        return ((VirtualQExtensionFactory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QExtensionFactory_OnIsSignalConnected(const QExtensionFactory* self, intptr_t slot) {
    auto* vqextensionfactory = const_cast<VirtualQExtensionFactory*>(dynamic_cast<const VirtualQExtensionFactory*>(self));
    if (vqextensionfactory && vqextensionfactory->isVirtualQExtensionFactory) {
        vqextensionfactory->setQExtensionFactory_IsSignalConnected_Callback(reinterpret_cast<VirtualQExtensionFactory::QExtensionFactory_IsSignalConnected_Callback>(slot));
    }
}

void QExtensionFactory_Delete(QExtensionFactory* self) {
    delete self;
}
