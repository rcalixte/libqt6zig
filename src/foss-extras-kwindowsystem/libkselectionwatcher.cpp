#include <KSelectionWatcher>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kselectionwatcher.h>
#include "libkselectionwatcher.h"
#include "libkselectionwatcher.hxx"

KSelectionWatcher* KSelectionWatcher_new(const char* selection) {
    return new VirtualKSelectionWatcher(selection);
}

KSelectionWatcher* KSelectionWatcher_new2(const char* selection, int screen) {
    return new VirtualKSelectionWatcher(selection, static_cast<int>(screen));
}

KSelectionWatcher* KSelectionWatcher_new3(const char* selection, int screen, QObject* parent) {
    return new VirtualKSelectionWatcher(selection, static_cast<int>(screen), parent);
}

QMetaObject* KSelectionWatcher_MetaObject(const KSelectionWatcher* self) {
    auto* vkselectionwatcher = dynamic_cast<const VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKSelectionWatcher*)self)->metaObject();
    }
}

void* KSelectionWatcher_Metacast(KSelectionWatcher* self, const char* param1) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKSelectionWatcher*)self)->qt_metacast(param1);
    }
}

int KSelectionWatcher_Metacall(KSelectionWatcher* self, int param1, int param2, void** param3) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelectionWatcher*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void KSelectionWatcher_FilterEvent(KSelectionWatcher* self, void* ev_P) {
    self->filterEvent(ev_P);
}

void KSelectionWatcher_LostOwner(KSelectionWatcher* self) {
    self->lostOwner();
}

void KSelectionWatcher_Connect_LostOwner(KSelectionWatcher* self, intptr_t slot) {
    void (*slotFunc)(KSelectionWatcher*) = reinterpret_cast<void (*)(KSelectionWatcher*)>(slot);
    KSelectionWatcher::connect(self, &KSelectionWatcher::lostOwner, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* KSelectionWatcher_QBaseMetaObject(const KSelectionWatcher* self) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_MetaObject_IsBase(true);
        return (QMetaObject*)vkselectionwatcher->metaObject();
    } else {
        return (QMetaObject*)self->KSelectionWatcher::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnMetaObject(const KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_MetaObject_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KSelectionWatcher_QBaseMetacast(KSelectionWatcher* self, const char* param1) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Metacast_IsBase(true);
        return vkselectionwatcher->qt_metacast(param1);
    } else {
        return self->KSelectionWatcher::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnMetacast(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Metacast_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KSelectionWatcher_QBaseMetacall(KSelectionWatcher* self, int param1, int param2, void** param3) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Metacall_IsBase(true);
        return vkselectionwatcher->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSelectionWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnMetacall(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Metacall_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionWatcher_Event(KSelectionWatcher* self, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return vkselectionwatcher->event(event);
    } else {
        return self->KSelectionWatcher::event(event);
    }
}

// Base class handler implementation
bool KSelectionWatcher_QBaseEvent(KSelectionWatcher* self, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Event_IsBase(true);
        return vkselectionwatcher->event(event);
    } else {
        return self->KSelectionWatcher::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnEvent(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Event_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionWatcher_EventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return vkselectionwatcher->eventFilter(watched, event);
    } else {
        return self->KSelectionWatcher::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSelectionWatcher_QBaseEventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_EventFilter_IsBase(true);
        return vkselectionwatcher->eventFilter(watched, event);
    } else {
        return self->KSelectionWatcher::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnEventFilter(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_EventFilter_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionWatcher_TimerEvent(KSelectionWatcher* self, QTimerEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->timerEvent(event);
    } else {
        ((VirtualKSelectionWatcher*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSelectionWatcher_QBaseTimerEvent(KSelectionWatcher* self, QTimerEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_TimerEvent_IsBase(true);
        vkselectionwatcher->timerEvent(event);
    } else {
        ((VirtualKSelectionWatcher*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnTimerEvent(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_TimerEvent_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionWatcher_ChildEvent(KSelectionWatcher* self, QChildEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->childEvent(event);
    } else {
        ((VirtualKSelectionWatcher*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSelectionWatcher_QBaseChildEvent(KSelectionWatcher* self, QChildEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_ChildEvent_IsBase(true);
        vkselectionwatcher->childEvent(event);
    } else {
        ((VirtualKSelectionWatcher*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnChildEvent(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_ChildEvent_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionWatcher_CustomEvent(KSelectionWatcher* self, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->customEvent(event);
    } else {
        ((VirtualKSelectionWatcher*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSelectionWatcher_QBaseCustomEvent(KSelectionWatcher* self, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_CustomEvent_IsBase(true);
        vkselectionwatcher->customEvent(event);
    } else {
        ((VirtualKSelectionWatcher*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnCustomEvent(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_CustomEvent_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionWatcher_ConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->connectNotify(*signal);
    } else {
        ((VirtualKSelectionWatcher*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectionWatcher_QBaseConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_ConnectNotify_IsBase(true);
        vkselectionwatcher->connectNotify(*signal);
    } else {
        ((VirtualKSelectionWatcher*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnConnectNotify(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_ConnectNotify_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionWatcher_DisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectionWatcher*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectionWatcher_QBaseDisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_DisconnectNotify_IsBase(true);
        vkselectionwatcher->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectionWatcher*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnDisconnectNotify(KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_DisconnectNotify_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSelectionWatcher_Sender(const KSelectionWatcher* self) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return vkselectionwatcher->sender();
    } else {
        return ((VirtualKSelectionWatcher*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSelectionWatcher_QBaseSender(const KSelectionWatcher* self) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Sender_IsBase(true);
        return vkselectionwatcher->sender();
    } else {
        return ((VirtualKSelectionWatcher*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnSender(const KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Sender_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionWatcher_SenderSignalIndex(const KSelectionWatcher* self) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return vkselectionwatcher->senderSignalIndex();
    } else {
        return ((VirtualKSelectionWatcher*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSelectionWatcher_QBaseSenderSignalIndex(const KSelectionWatcher* self) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_SenderSignalIndex_IsBase(true);
        return vkselectionwatcher->senderSignalIndex();
    } else {
        return ((VirtualKSelectionWatcher*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnSenderSignalIndex(const KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionWatcher_Receivers(const KSelectionWatcher* self, const char* signal) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return vkselectionwatcher->receivers(signal);
    } else {
        return ((VirtualKSelectionWatcher*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSelectionWatcher_QBaseReceivers(const KSelectionWatcher* self, const char* signal) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Receivers_IsBase(true);
        return vkselectionwatcher->receivers(signal);
    } else {
        return ((VirtualKSelectionWatcher*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnReceivers(const KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_Receivers_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionWatcher_IsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        return vkselectionwatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectionWatcher*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSelectionWatcher_QBaseIsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_IsSignalConnected_IsBase(true);
        return vkselectionwatcher->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectionWatcher*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnIsSignalConnected(const KSelectionWatcher* self, intptr_t slot) {
    auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self));
    if (vkselectionwatcher && vkselectionwatcher->isVirtualKSelectionWatcher) {
        vkselectionwatcher->setKSelectionWatcher_IsSignalConnected_Callback(reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_IsSignalConnected_Callback>(slot));
    }
}

void KSelectionWatcher_Delete(KSelectionWatcher* self) {
    delete self;
}
