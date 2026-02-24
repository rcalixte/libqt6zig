#include <KWindowInsetsController>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kwindowinsetscontroller.h>
#include "libkwindowinsetscontroller.h"
#include "libkwindowinsetscontroller.hxx"

KWindowInsetsController* KWindowInsetsController_new() {
    return new VirtualKWindowInsetsController();
}

KWindowInsetsController* KWindowInsetsController_new2(QObject* parent) {
    return new VirtualKWindowInsetsController(parent);
}

QMetaObject* KWindowInsetsController_MetaObject(const KWindowInsetsController* self) {
    auto* vkwindowinsetscontroller = dynamic_cast<const VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKWindowInsetsController*)self)->metaObject();
    }
}

void* KWindowInsetsController_Metacast(KWindowInsetsController* self, const char* param1) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKWindowInsetsController*)self)->qt_metacast(param1);
    }
}

int KWindowInsetsController_Metacall(KWindowInsetsController* self, int param1, int param2, void** param3) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWindowInsetsController*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QColor* KWindowInsetsController_StatusBarBackgroundColor(const KWindowInsetsController* self) {
    return new QColor(self->statusBarBackgroundColor());
}

void KWindowInsetsController_SetStatusBarBackgroundColor(KWindowInsetsController* self, const QColor* color) {
    self->setStatusBarBackgroundColor(*color);
}

QColor* KWindowInsetsController_NavigationBarBackgroundColor(const KWindowInsetsController* self) {
    return new QColor(self->navigationBarBackgroundColor());
}

void KWindowInsetsController_SetNavigationBarBackgroundColor(KWindowInsetsController* self, const QColor* color) {
    self->setNavigationBarBackgroundColor(*color);
}

void KWindowInsetsController_StatusBarBackgroundColorChanged(KWindowInsetsController* self) {
    self->statusBarBackgroundColorChanged();
}

void KWindowInsetsController_Connect_StatusBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot) {
    void (*slotFunc)(KWindowInsetsController*) = reinterpret_cast<void (*)(KWindowInsetsController*)>(slot);
    KWindowInsetsController::connect(self, &KWindowInsetsController::statusBarBackgroundColorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KWindowInsetsController_NavigationBarBackgroundColorChanged(KWindowInsetsController* self) {
    self->navigationBarBackgroundColorChanged();
}

void KWindowInsetsController_Connect_NavigationBarBackgroundColorChanged(KWindowInsetsController* self, intptr_t slot) {
    void (*slotFunc)(KWindowInsetsController*) = reinterpret_cast<void (*)(KWindowInsetsController*)>(slot);
    KWindowInsetsController::connect(self, &KWindowInsetsController::navigationBarBackgroundColorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* KWindowInsetsController_SuperMetaObject(const KWindowInsetsController* self) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_MetaObject_IsBase(true);
        return (QMetaObject*)vkwindowinsetscontroller->metaObject();
    } else {
        return (QMetaObject*)self->KWindowInsetsController::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnMetaObject(const KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_MetaObject_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KWindowInsetsController_SuperMetacast(KWindowInsetsController* self, const char* param1) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Metacast_IsBase(true);
        return vkwindowinsetscontroller->qt_metacast(param1);
    } else {
        return self->KWindowInsetsController::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnMetacast(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Metacast_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KWindowInsetsController_SuperMetacall(KWindowInsetsController* self, int param1, int param2, void** param3) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Metacall_IsBase(true);
        return vkwindowinsetscontroller->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KWindowInsetsController::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnMetacall(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Metacall_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowInsetsController_Event(KWindowInsetsController* self, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return vkwindowinsetscontroller->event(event);
    } else {
        return self->KWindowInsetsController::event(event);
    }
}

// Base class handler implementation
bool KWindowInsetsController_SuperEvent(KWindowInsetsController* self, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Event_IsBase(true);
        return vkwindowinsetscontroller->event(event);
    } else {
        return self->KWindowInsetsController::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnEvent(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Event_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowInsetsController_EventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return vkwindowinsetscontroller->eventFilter(watched, event);
    } else {
        return self->KWindowInsetsController::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KWindowInsetsController_SuperEventFilter(KWindowInsetsController* self, QObject* watched, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_EventFilter_IsBase(true);
        return vkwindowinsetscontroller->eventFilter(watched, event);
    } else {
        return self->KWindowInsetsController::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnEventFilter(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_EventFilter_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowInsetsController_TimerEvent(KWindowInsetsController* self, QTimerEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->timerEvent(event);
    } else {
        ((VirtualKWindowInsetsController*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperTimerEvent(KWindowInsetsController* self, QTimerEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_TimerEvent_IsBase(true);
        vkwindowinsetscontroller->timerEvent(event);
    } else {
        ((VirtualKWindowInsetsController*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnTimerEvent(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_TimerEvent_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowInsetsController_ChildEvent(KWindowInsetsController* self, QChildEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->childEvent(event);
    } else {
        ((VirtualKWindowInsetsController*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperChildEvent(KWindowInsetsController* self, QChildEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_ChildEvent_IsBase(true);
        vkwindowinsetscontroller->childEvent(event);
    } else {
        ((VirtualKWindowInsetsController*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnChildEvent(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_ChildEvent_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowInsetsController_CustomEvent(KWindowInsetsController* self, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->customEvent(event);
    } else {
        ((VirtualKWindowInsetsController*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperCustomEvent(KWindowInsetsController* self, QEvent* event) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_CustomEvent_IsBase(true);
        vkwindowinsetscontroller->customEvent(event);
    } else {
        ((VirtualKWindowInsetsController*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnCustomEvent(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_CustomEvent_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowInsetsController_ConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->connectNotify(*signal);
    } else {
        ((VirtualKWindowInsetsController*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperConnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_ConnectNotify_IsBase(true);
        vkwindowinsetscontroller->connectNotify(*signal);
    } else {
        ((VirtualKWindowInsetsController*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnConnectNotify(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_ConnectNotify_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowInsetsController_DisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->disconnectNotify(*signal);
    } else {
        ((VirtualKWindowInsetsController*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KWindowInsetsController_SuperDisconnectNotify(KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_DisconnectNotify_IsBase(true);
        vkwindowinsetscontroller->disconnectNotify(*signal);
    } else {
        ((VirtualKWindowInsetsController*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnDisconnectNotify(KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = dynamic_cast<VirtualKWindowInsetsController*>(self);
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_DisconnectNotify_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KWindowInsetsController_Sender(const KWindowInsetsController* self) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return vkwindowinsetscontroller->sender();
    } else {
        return ((VirtualKWindowInsetsController*)self)->sender();
    }
}

// Base class handler implementation
QObject* KWindowInsetsController_SuperSender(const KWindowInsetsController* self) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Sender_IsBase(true);
        return vkwindowinsetscontroller->sender();
    } else {
        return ((VirtualKWindowInsetsController*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnSender(const KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Sender_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KWindowInsetsController_SenderSignalIndex(const KWindowInsetsController* self) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return vkwindowinsetscontroller->senderSignalIndex();
    } else {
        return ((VirtualKWindowInsetsController*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KWindowInsetsController_SuperSenderSignalIndex(const KWindowInsetsController* self) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_SenderSignalIndex_IsBase(true);
        return vkwindowinsetscontroller->senderSignalIndex();
    } else {
        return ((VirtualKWindowInsetsController*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnSenderSignalIndex(const KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_SenderSignalIndex_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KWindowInsetsController_Receivers(const KWindowInsetsController* self, const char* signal) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return vkwindowinsetscontroller->receivers(signal);
    } else {
        return ((VirtualKWindowInsetsController*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KWindowInsetsController_SuperReceivers(const KWindowInsetsController* self, const char* signal) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Receivers_IsBase(true);
        return vkwindowinsetscontroller->receivers(signal);
    } else {
        return ((VirtualKWindowInsetsController*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnReceivers(const KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_Receivers_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowInsetsController_IsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        return vkwindowinsetscontroller->isSignalConnected(*signal);
    } else {
        return ((VirtualKWindowInsetsController*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KWindowInsetsController_SuperIsSignalConnected(const KWindowInsetsController* self, const QMetaMethod* signal) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_IsSignalConnected_IsBase(true);
        return vkwindowinsetscontroller->isSignalConnected(*signal);
    } else {
        return ((VirtualKWindowInsetsController*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowInsetsController_OnIsSignalConnected(const KWindowInsetsController* self, intptr_t slot) {
    auto* vkwindowinsetscontroller = const_cast<VirtualKWindowInsetsController*>(dynamic_cast<const VirtualKWindowInsetsController*>(self));
    if (vkwindowinsetscontroller && vkwindowinsetscontroller->isVirtualKWindowInsetsController) {
        vkwindowinsetscontroller->setKWindowInsetsController_IsSignalConnected_Callback(reinterpret_cast<VirtualKWindowInsetsController::KWindowInsetsController_IsSignalConnected_Callback>(slot));
    }
}

void KWindowInsetsController_Delete(KWindowInsetsController* self) {
    delete self;
}
