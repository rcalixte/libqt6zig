#include <KColorSchemeWatcher>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kcolorschemewatcher.h>
#include "libkcolorschemewatcher.h"
#include "libkcolorschemewatcher.hxx"

KColorSchemeWatcher* KColorSchemeWatcher_new() {
    return new VirtualKColorSchemeWatcher();
}

KColorSchemeWatcher* KColorSchemeWatcher_new2(QObject* parent) {
    return new VirtualKColorSchemeWatcher(parent);
}

QMetaObject* KColorSchemeWatcher_MetaObject(const KColorSchemeWatcher* self) {
    auto* vkcolorschemewatcher = dynamic_cast<const VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKColorSchemeWatcher*)self)->metaObject();
    }
}

void* KColorSchemeWatcher_Metacast(KColorSchemeWatcher* self, const char* param1) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->qt_metacast(param1);
    }
}

int KColorSchemeWatcher_Metacall(KColorSchemeWatcher* self, int param1, int param2, void** param3) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int KColorSchemeWatcher_SystemPreference(const KColorSchemeWatcher* self) {
    return static_cast<int>(self->systemPreference());
}

void KColorSchemeWatcher_SystemPreferenceChanged(KColorSchemeWatcher* self) {
    self->systemPreferenceChanged();
}

void KColorSchemeWatcher_Connect_SystemPreferenceChanged(KColorSchemeWatcher* self, intptr_t slot) {
    void (*slotFunc)(KColorSchemeWatcher*) = reinterpret_cast<void (*)(KColorSchemeWatcher*)>(slot);
    KColorSchemeWatcher::connect(self, &KColorSchemeWatcher::systemPreferenceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* KColorSchemeWatcher_SuperMetaObject(const KColorSchemeWatcher* self) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_MetaObject_IsBase(true);
        return (QMetaObject*)vkcolorschemewatcher->metaObject();
    } else {
        return (QMetaObject*)self->KColorSchemeWatcher::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnMetaObject(const KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_MetaObject_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KColorSchemeWatcher_SuperMetacast(KColorSchemeWatcher* self, const char* param1) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Metacast_IsBase(true);
        return vkcolorschemewatcher->qt_metacast(param1);
    } else {
        return self->KColorSchemeWatcher::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnMetacast(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Metacast_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KColorSchemeWatcher_SuperMetacall(KColorSchemeWatcher* self, int param1, int param2, void** param3) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Metacall_IsBase(true);
        return vkcolorschemewatcher->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KColorSchemeWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnMetacall(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Metacall_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeWatcher_Event(KColorSchemeWatcher* self, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return vkcolorschemewatcher->event(event);
    } else {
        return self->KColorSchemeWatcher::event(event);
    }
}

// Base class handler implementation
bool KColorSchemeWatcher_SuperEvent(KColorSchemeWatcher* self, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Event_IsBase(true);
        return vkcolorschemewatcher->event(event);
    } else {
        return self->KColorSchemeWatcher::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnEvent(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Event_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeWatcher_EventFilter(KColorSchemeWatcher* self, QObject* watched, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return vkcolorschemewatcher->eventFilter(watched, event);
    } else {
        return self->KColorSchemeWatcher::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KColorSchemeWatcher_SuperEventFilter(KColorSchemeWatcher* self, QObject* watched, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_EventFilter_IsBase(true);
        return vkcolorschemewatcher->eventFilter(watched, event);
    } else {
        return self->KColorSchemeWatcher::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnEventFilter(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_EventFilter_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeWatcher_TimerEvent(KColorSchemeWatcher* self, QTimerEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->timerEvent(event);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperTimerEvent(KColorSchemeWatcher* self, QTimerEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_TimerEvent_IsBase(true);
        vkcolorschemewatcher->timerEvent(event);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnTimerEvent(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_TimerEvent_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeWatcher_ChildEvent(KColorSchemeWatcher* self, QChildEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->childEvent(event);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperChildEvent(KColorSchemeWatcher* self, QChildEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_ChildEvent_IsBase(true);
        vkcolorschemewatcher->childEvent(event);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnChildEvent(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_ChildEvent_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeWatcher_CustomEvent(KColorSchemeWatcher* self, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->customEvent(event);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperCustomEvent(KColorSchemeWatcher* self, QEvent* event) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_CustomEvent_IsBase(true);
        vkcolorschemewatcher->customEvent(event);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnCustomEvent(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_CustomEvent_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeWatcher_ConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->connectNotify(*signal);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperConnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_ConnectNotify_IsBase(true);
        vkcolorschemewatcher->connectNotify(*signal);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnConnectNotify(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_ConnectNotify_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeWatcher_DisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->disconnectNotify(*signal);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColorSchemeWatcher_SuperDisconnectNotify(KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_DisconnectNotify_IsBase(true);
        vkcolorschemewatcher->disconnectNotify(*signal);
    } else {
        ((VirtualKColorSchemeWatcher*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnDisconnectNotify(KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = dynamic_cast<VirtualKColorSchemeWatcher*>(self);
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_DisconnectNotify_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColorSchemeWatcher_Sender(const KColorSchemeWatcher* self) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return vkcolorschemewatcher->sender();
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColorSchemeWatcher_SuperSender(const KColorSchemeWatcher* self) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Sender_IsBase(true);
        return vkcolorschemewatcher->sender();
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnSender(const KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Sender_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeWatcher_SenderSignalIndex(const KColorSchemeWatcher* self) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return vkcolorschemewatcher->senderSignalIndex();
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColorSchemeWatcher_SuperSenderSignalIndex(const KColorSchemeWatcher* self) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_SenderSignalIndex_IsBase(true);
        return vkcolorschemewatcher->senderSignalIndex();
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnSenderSignalIndex(const KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeWatcher_Receivers(const KColorSchemeWatcher* self, const char* signal) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return vkcolorschemewatcher->receivers(signal);
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColorSchemeWatcher_SuperReceivers(const KColorSchemeWatcher* self, const char* signal) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Receivers_IsBase(true);
        return vkcolorschemewatcher->receivers(signal);
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnReceivers(const KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_Receivers_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeWatcher_IsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        return vkcolorschemewatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColorSchemeWatcher_SuperIsSignalConnected(const KColorSchemeWatcher* self, const QMetaMethod* signal) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_IsSignalConnected_IsBase(true);
        return vkcolorschemewatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorSchemeWatcher*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeWatcher_OnIsSignalConnected(const KColorSchemeWatcher* self, intptr_t slot) {
    auto* vkcolorschemewatcher = const_cast<VirtualKColorSchemeWatcher*>(dynamic_cast<const VirtualKColorSchemeWatcher*>(self));
    if (vkcolorschemewatcher && vkcolorschemewatcher->isVirtualKColorSchemeWatcher) {
        vkcolorschemewatcher->setKColorSchemeWatcher_IsSignalConnected_Callback(reinterpret_cast<VirtualKColorSchemeWatcher::KColorSchemeWatcher_IsSignalConnected_Callback>(slot));
    }
}

void KColorSchemeWatcher_Delete(KColorSchemeWatcher* self) {
    delete self;
}
