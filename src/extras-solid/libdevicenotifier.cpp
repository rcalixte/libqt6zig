#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceNotifier
#include <devicenotifier.h>
#include "libdevicenotifier.h"
#include "libdevicenotifier.hxx"

Solid__DeviceNotifier* Solid__DeviceNotifier_new() {
    return new VirtualSolidDeviceNotifier();
}

QMetaObject* Solid__DeviceNotifier_MetaObject(const Solid__DeviceNotifier* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__DeviceNotifier_Metacast(Solid__DeviceNotifier* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__DeviceNotifier_Metacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

Solid__DeviceNotifier* Solid__DeviceNotifier_Instance() {
    return Solid::DeviceNotifier::instance();
}

void Solid__DeviceNotifier_DeviceAdded(Solid__DeviceNotifier* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->deviceAdded(udi_QString);
}

void Solid__DeviceNotifier_Connect_DeviceAdded(Solid__DeviceNotifier* self, intptr_t slot) {
    void (*slotFunc)(Solid__DeviceNotifier*, const char*) = reinterpret_cast<void (*)(Solid__DeviceNotifier*, const char*)>(slot);
    Solid::DeviceNotifier::connect(self, &Solid::DeviceNotifier::deviceAdded, [self, slotFunc](const QString& udi) {
        const auto udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        auto udi_str_len = udi_b.length();
        const char* udi_str = static_cast<const char*>(malloc(udi_str_len + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_str_len);
        ((char*)udi_str)[udi_str_len] = '\0';
        const char* sigval1 = udi_str;
        slotFunc(self, sigval1);
        libqt_free(udi_str);
    });
}

void Solid__DeviceNotifier_DeviceRemoved(Solid__DeviceNotifier* self, const libqt_string udi) {
    QString udi_QString = QString::fromUtf8(udi.data, udi.len);
    self->deviceRemoved(udi_QString);
}

void Solid__DeviceNotifier_Connect_DeviceRemoved(Solid__DeviceNotifier* self, intptr_t slot) {
    void (*slotFunc)(Solid__DeviceNotifier*, const char*) = reinterpret_cast<void (*)(Solid__DeviceNotifier*, const char*)>(slot);
    Solid::DeviceNotifier::connect(self, &Solid::DeviceNotifier::deviceRemoved, [self, slotFunc](const QString& udi) {
        const auto udi_ret = udi;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray udi_b = udi_ret.toUtf8();
        auto udi_str_len = udi_b.length();
        const char* udi_str = static_cast<const char*>(malloc(udi_str_len + 1));
        memcpy((void*)udi_str, udi_b.data(), udi_str_len);
        ((char*)udi_str)[udi_str_len] = '\0';
        const char* sigval1 = udi_str;
        slotFunc(self, sigval1);
        libqt_free(udi_str);
    });
}

// Base class handler implementation
QMetaObject* Solid__DeviceNotifier_SuperMetaObject(const Solid__DeviceNotifier* self) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_MetaObject_IsBase(true);
        return (QMetaObject*)vsoliddevicenotifier->metaObject();
    } else {
        return (QMetaObject*)self->Solid::DeviceNotifier::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnMetaObject(const Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_MetaObject_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* Solid__DeviceNotifier_SuperMetacast(Solid__DeviceNotifier* self, const char* param1) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_Metacast_IsBase(true);
        return vsoliddevicenotifier->qt_metacast(param1);
    } else {
        return self->Solid::DeviceNotifier::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnMetacast(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_Metacast_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Metacast_Callback>(slot));
}

// Base class handler implementation
int Solid__DeviceNotifier_SuperMetacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_Metacall_IsBase(true);
        return vsoliddevicenotifier->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Solid::DeviceNotifier::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnMetacall(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_Metacall_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool Solid__DeviceNotifier_Event(Solid__DeviceNotifier* self, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        return vsoliddevicenotifier->event(event);
    } else {
        return self->Solid::DeviceNotifier::event(event);
    }
}

// Base class handler implementation
bool Solid__DeviceNotifier_SuperEvent(Solid__DeviceNotifier* self, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_Event_IsBase(true);
        return vsoliddevicenotifier->event(event);
    } else {
        return self->Solid::DeviceNotifier::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_Event_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Event_Callback>(slot));
}

// Derived class handler implementation
bool Solid__DeviceNotifier_EventFilter(Solid__DeviceNotifier* self, QObject* watched, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        return vsoliddevicenotifier->eventFilter(watched, event);
    } else {
        return self->Solid::DeviceNotifier::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Solid__DeviceNotifier_SuperEventFilter(Solid__DeviceNotifier* self, QObject* watched, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_EventFilter_IsBase(true);
        return vsoliddevicenotifier->eventFilter(watched, event);
    } else {
        return self->Solid::DeviceNotifier::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnEventFilter(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_EventFilter_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void Solid__DeviceNotifier_TimerEvent(Solid__DeviceNotifier* self, QTimerEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->timerEvent(event);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperTimerEvent(Solid__DeviceNotifier* self, QTimerEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_TimerEvent_IsBase(true);
        vsoliddevicenotifier->timerEvent(event);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnTimerEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_TimerEvent_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void Solid__DeviceNotifier_ChildEvent(Solid__DeviceNotifier* self, QChildEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->childEvent(event);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperChildEvent(Solid__DeviceNotifier* self, QChildEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_ChildEvent_IsBase(true);
        vsoliddevicenotifier->childEvent(event);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnChildEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_ChildEvent_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void Solid__DeviceNotifier_CustomEvent(Solid__DeviceNotifier* self, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->customEvent(event);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperCustomEvent(Solid__DeviceNotifier* self, QEvent* event) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_CustomEvent_IsBase(true);
        vsoliddevicenotifier->customEvent(event);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnCustomEvent(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_CustomEvent_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void Solid__DeviceNotifier_ConnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->connectNotify(*signal);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperConnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_ConnectNotify_IsBase(true);
        vsoliddevicenotifier->connectNotify(*signal);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnConnectNotify(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_ConnectNotify_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void Solid__DeviceNotifier_DisconnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->disconnectNotify(*signal);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Solid__DeviceNotifier_SuperDisconnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_DisconnectNotify_IsBase(true);
        vsoliddevicenotifier->disconnectNotify(*signal);
    } else {
        ((VirtualSolidDeviceNotifier*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnDisconnectNotify(Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = dynamic_cast<VirtualSolidDeviceNotifier*>(self);
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_DisconnectNotify_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* Solid__DeviceNotifier_Sender(const Solid__DeviceNotifier* self) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        return vsoliddevicenotifier->sender();
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->sender();
    }
}

// Base class handler implementation
QObject* Solid__DeviceNotifier_SuperSender(const Solid__DeviceNotifier* self) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_Sender_IsBase(true);
        return vsoliddevicenotifier->sender();
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnSender(const Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_Sender_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Sender_Callback>(slot));
}

// Derived class handler implementation
int Solid__DeviceNotifier_SenderSignalIndex(const Solid__DeviceNotifier* self) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        return vsoliddevicenotifier->senderSignalIndex();
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Solid__DeviceNotifier_SuperSenderSignalIndex(const Solid__DeviceNotifier* self) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_SenderSignalIndex_IsBase(true);
        return vsoliddevicenotifier->senderSignalIndex();
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnSenderSignalIndex(const Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_SenderSignalIndex_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int Solid__DeviceNotifier_Receivers(const Solid__DeviceNotifier* self, const char* signal) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        return vsoliddevicenotifier->receivers(signal);
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Solid__DeviceNotifier_SuperReceivers(const Solid__DeviceNotifier* self, const char* signal) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_Receivers_IsBase(true);
        return vsoliddevicenotifier->receivers(signal);
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnReceivers(const Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_Receivers_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool Solid__DeviceNotifier_IsSignalConnected(const Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        return vsoliddevicenotifier->isSignalConnected(*signal);
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Solid__DeviceNotifier_SuperIsSignalConnected(const Solid__DeviceNotifier* self, const QMetaMethod* signal) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier) {
        vsoliddevicenotifier->setSolid__DeviceNotifier_IsSignalConnected_IsBase(true);
        return vsoliddevicenotifier->isSignalConnected(*signal);
    } else {
        return ((VirtualSolidDeviceNotifier*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Solid__DeviceNotifier_OnIsSignalConnected(const Solid__DeviceNotifier* self, intptr_t slot) {
    auto* vsoliddevicenotifier = const_cast<VirtualSolidDeviceNotifier*>(dynamic_cast<const VirtualSolidDeviceNotifier*>(self));
    if (vsoliddevicenotifier && vsoliddevicenotifier->isVirtualSolidDeviceNotifier)
        vsoliddevicenotifier->setSolid__DeviceNotifier_IsSignalConnected_Callback(reinterpret_cast<VirtualSolidDeviceNotifier::Solid__DeviceNotifier_IsSignalConnected_Callback>(slot));
}

void Solid__DeviceNotifier_Delete(Solid__DeviceNotifier* self) {
    delete self;
}
