#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__StatusBarExtension
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <statusbarextension.h>
#include "libstatusbarextension.h"
#include "libstatusbarextension.hxx"

KParts__StatusBarExtension* KParts__StatusBarExtension_new(KParts__Part* parent) {
    return new VirtualKPartsStatusBarExtension(parent);
}

KParts__StatusBarExtension* KParts__StatusBarExtension_new2(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsStatusBarExtension(parent);
}

QMetaObject* KParts__StatusBarExtension_MetaObject(const KParts__StatusBarExtension* self) {
    auto* vkparts__statusbarextension = dynamic_cast<const VirtualKPartsStatusBarExtension*>(self);
    if (vkparts__statusbarextension && vkparts__statusbarextension->isVirtualKPartsStatusBarExtension) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKPartsStatusBarExtension*)self)->metaObject();
    }
}

void* KParts__StatusBarExtension_Metacast(KParts__StatusBarExtension* self, const char* param1) {
    auto* vkparts__statusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkparts__statusbarextension && vkparts__statusbarextension->isVirtualKPartsStatusBarExtension) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->qt_metacast(param1);
    }
}

int KParts__StatusBarExtension_Metacall(KParts__StatusBarExtension* self, int param1, int param2, void** param3) {
    auto* vkparts__statusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkparts__statusbarextension && vkparts__statusbarextension->isVirtualKPartsStatusBarExtension) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void KParts__StatusBarExtension_AddStatusBarItem(KParts__StatusBarExtension* self, QWidget* widget, int stretch, bool permanent) {
    self->addStatusBarItem(widget, static_cast<int>(stretch), permanent);
}

void KParts__StatusBarExtension_RemoveStatusBarItem(KParts__StatusBarExtension* self, QWidget* widget) {
    self->removeStatusBarItem(widget);
}

QStatusBar* KParts__StatusBarExtension_StatusBar(const KParts__StatusBarExtension* self) {
    return self->statusBar();
}

void KParts__StatusBarExtension_SetStatusBar(KParts__StatusBarExtension* self, QStatusBar* status) {
    self->setStatusBar(status);
}

KParts__StatusBarExtension* KParts__StatusBarExtension_ChildObject(QObject* obj) {
    return KParts::StatusBarExtension::childObject(obj);
}

bool KParts__StatusBarExtension_EventFilter(KParts__StatusBarExtension* self, QObject* watched, QEvent* ev) {
    auto* vkparts__statusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkparts__statusbarextension && vkparts__statusbarextension->isVirtualKPartsStatusBarExtension) {
        return self->eventFilter(watched, ev);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->eventFilter(watched, ev);
    }
}

// Base class handler implementation
QMetaObject* KParts__StatusBarExtension_SuperMetaObject(const KParts__StatusBarExtension* self) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_MetaObject_IsBase(true);
        return (QMetaObject*)vkpartsstatusbarextension->metaObject();
    } else {
        return (QMetaObject*)self->KParts::StatusBarExtension::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnMetaObject(const KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_MetaObject_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KParts__StatusBarExtension_SuperMetacast(KParts__StatusBarExtension* self, const char* param1) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Metacast_IsBase(true);
        return vkpartsstatusbarextension->qt_metacast(param1);
    } else {
        return self->KParts::StatusBarExtension::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnMetacast(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Metacast_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KParts__StatusBarExtension_SuperMetacall(KParts__StatusBarExtension* self, int param1, int param2, void** param3) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Metacall_IsBase(true);
        return vkpartsstatusbarextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::StatusBarExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnMetacall(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Metacall_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__StatusBarExtension_SuperEventFilter(KParts__StatusBarExtension* self, QObject* watched, QEvent* ev) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_EventFilter_IsBase(true);
        return vkpartsstatusbarextension->eventFilter(watched, ev);
    } else {
        return self->KParts::StatusBarExtension::eventFilter(watched, ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnEventFilter(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_EventFilter_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__StatusBarExtension_Event(KParts__StatusBarExtension* self, QEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        return vkpartsstatusbarextension->event(event);
    } else {
        return self->KParts::StatusBarExtension::event(event);
    }
}

// Base class handler implementation
bool KParts__StatusBarExtension_SuperEvent(KParts__StatusBarExtension* self, QEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Event_IsBase(true);
        return vkpartsstatusbarextension->event(event);
    } else {
        return self->KParts::StatusBarExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Event_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__StatusBarExtension_TimerEvent(KParts__StatusBarExtension* self, QTimerEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->timerEvent(event);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperTimerEvent(KParts__StatusBarExtension* self, QTimerEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_TimerEvent_IsBase(true);
        vkpartsstatusbarextension->timerEvent(event);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnTimerEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_TimerEvent_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__StatusBarExtension_ChildEvent(KParts__StatusBarExtension* self, QChildEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->childEvent(event);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperChildEvent(KParts__StatusBarExtension* self, QChildEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_ChildEvent_IsBase(true);
        vkpartsstatusbarextension->childEvent(event);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnChildEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_ChildEvent_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__StatusBarExtension_CustomEvent(KParts__StatusBarExtension* self, QEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->customEvent(event);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperCustomEvent(KParts__StatusBarExtension* self, QEvent* event) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_CustomEvent_IsBase(true);
        vkpartsstatusbarextension->customEvent(event);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnCustomEvent(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_CustomEvent_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__StatusBarExtension_ConnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperConnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_ConnectNotify_IsBase(true);
        vkpartsstatusbarextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnConnectNotify(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__StatusBarExtension_DisconnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__StatusBarExtension_SuperDisconnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_DisconnectNotify_IsBase(true);
        vkpartsstatusbarextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsStatusBarExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnDisconnectNotify(KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = dynamic_cast<VirtualKPartsStatusBarExtension*>(self);
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__StatusBarExtension_Sender(const KParts__StatusBarExtension* self) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        return vkpartsstatusbarextension->sender();
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__StatusBarExtension_SuperSender(const KParts__StatusBarExtension* self) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Sender_IsBase(true);
        return vkpartsstatusbarextension->sender();
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnSender(const KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Sender_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__StatusBarExtension_SenderSignalIndex(const KParts__StatusBarExtension* self) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        return vkpartsstatusbarextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__StatusBarExtension_SuperSenderSignalIndex(const KParts__StatusBarExtension* self) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_SenderSignalIndex_IsBase(true);
        return vkpartsstatusbarextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnSenderSignalIndex(const KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__StatusBarExtension_Receivers(const KParts__StatusBarExtension* self, const char* signal) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        return vkpartsstatusbarextension->receivers(signal);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__StatusBarExtension_SuperReceivers(const KParts__StatusBarExtension* self, const char* signal) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Receivers_IsBase(true);
        return vkpartsstatusbarextension->receivers(signal);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnReceivers(const KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_Receivers_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__StatusBarExtension_IsSignalConnected(const KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        return vkpartsstatusbarextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__StatusBarExtension_SuperIsSignalConnected(const KParts__StatusBarExtension* self, const QMetaMethod* signal) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_IsSignalConnected_IsBase(true);
        return vkpartsstatusbarextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsStatusBarExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__StatusBarExtension_OnIsSignalConnected(const KParts__StatusBarExtension* self, intptr_t slot) {
    auto* vkpartsstatusbarextension = const_cast<VirtualKPartsStatusBarExtension*>(dynamic_cast<const VirtualKPartsStatusBarExtension*>(self));
    if (vkpartsstatusbarextension && vkpartsstatusbarextension->isVirtualKPartsStatusBarExtension) {
        vkpartsstatusbarextension->setKParts__StatusBarExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsStatusBarExtension::KParts__StatusBarExtension_IsSignalConnected_Callback>(slot));
    }
}

void KParts__StatusBarExtension_Delete(KParts__StatusBarExtension* self) {
    delete self;
}
