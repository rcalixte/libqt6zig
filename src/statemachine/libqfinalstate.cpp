#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QFinalState>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qfinalstate.h>
#include "libqfinalstate.h"
#include "libqfinalstate.hxx"

QFinalState* QFinalState_new() {
    return new VirtualQFinalState();
}

QFinalState* QFinalState_new2(QState* parent) {
    return new VirtualQFinalState(parent);
}

QMetaObject* QFinalState_MetaObject(const QFinalState* self) {
    auto* vqfinalstate = dynamic_cast<const VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQFinalState*)self)->metaObject();
    }
}

void* QFinalState_Metacast(QFinalState* self, const char* param1) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQFinalState*)self)->qt_metacast(param1);
    }
}

int QFinalState_Metacall(QFinalState* self, int param1, int param2, void** param3) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFinalState*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QFinalState_OnEntry(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->onEntry(event);
    }
}

void QFinalState_OnExit(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->onExit(event);
    }
}

bool QFinalState_Event(QFinalState* self, QEvent* e) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return vqfinalstate->event(e);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QFinalState_SuperMetaObject(const QFinalState* self) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_MetaObject_IsBase(true);
        return (QMetaObject*)vqfinalstate->metaObject();
    } else {
        return (QMetaObject*)self->QFinalState::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnMetaObject(const QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_MetaObject_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QFinalState_SuperMetacast(QFinalState* self, const char* param1) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Metacast_IsBase(true);
        return vqfinalstate->qt_metacast(param1);
    } else {
        return self->QFinalState::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnMetacast(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Metacast_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QFinalState_SuperMetacall(QFinalState* self, int param1, int param2, void** param3) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Metacall_IsBase(true);
        return vqfinalstate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QFinalState::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnMetacall(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Metacall_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QFinalState_SuperOnEntry(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_OnEntry_IsBase(true);
        vqfinalstate->onEntry(event);
    } else {
        ((VirtualQFinalState*)self)->onEntry(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnOnEntry(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_OnEntry_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_OnEntry_Callback>(slot));
    }
}

// Base class handler implementation
void QFinalState_SuperOnExit(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_OnExit_IsBase(true);
        vqfinalstate->onExit(event);
    } else {
        ((VirtualQFinalState*)self)->onExit(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnOnExit(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_OnExit_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_OnExit_Callback>(slot));
    }
}

// Base class handler implementation
bool QFinalState_SuperEvent(QFinalState* self, QEvent* e) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Event_IsBase(true);
        return vqfinalstate->event(e);
    } else {
        return ((VirtualQFinalState*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnEvent(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Event_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFinalState_EventFilter(QFinalState* self, QObject* watched, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return vqfinalstate->eventFilter(watched, event);
    } else {
        return self->QFinalState::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFinalState_SuperEventFilter(QFinalState* self, QObject* watched, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_EventFilter_IsBase(true);
        return vqfinalstate->eventFilter(watched, event);
    } else {
        return self->QFinalState::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnEventFilter(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_EventFilter_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFinalState_TimerEvent(QFinalState* self, QTimerEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->timerEvent(event);
    } else {
        ((VirtualQFinalState*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFinalState_SuperTimerEvent(QFinalState* self, QTimerEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_TimerEvent_IsBase(true);
        vqfinalstate->timerEvent(event);
    } else {
        ((VirtualQFinalState*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnTimerEvent(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_TimerEvent_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFinalState_ChildEvent(QFinalState* self, QChildEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->childEvent(event);
    } else {
        ((VirtualQFinalState*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFinalState_SuperChildEvent(QFinalState* self, QChildEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_ChildEvent_IsBase(true);
        vqfinalstate->childEvent(event);
    } else {
        ((VirtualQFinalState*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnChildEvent(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_ChildEvent_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFinalState_CustomEvent(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->customEvent(event);
    } else {
        ((VirtualQFinalState*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFinalState_SuperCustomEvent(QFinalState* self, QEvent* event) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_CustomEvent_IsBase(true);
        vqfinalstate->customEvent(event);
    } else {
        ((VirtualQFinalState*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnCustomEvent(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_CustomEvent_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFinalState_ConnectNotify(QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->connectNotify(*signal);
    } else {
        ((VirtualQFinalState*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFinalState_SuperConnectNotify(QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_ConnectNotify_IsBase(true);
        vqfinalstate->connectNotify(*signal);
    } else {
        ((VirtualQFinalState*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnConnectNotify(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_ConnectNotify_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFinalState_DisconnectNotify(QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->disconnectNotify(*signal);
    } else {
        ((VirtualQFinalState*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFinalState_SuperDisconnectNotify(QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_DisconnectNotify_IsBase(true);
        vqfinalstate->disconnectNotify(*signal);
    } else {
        ((VirtualQFinalState*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnDisconnectNotify(QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = dynamic_cast<VirtualQFinalState*>(self);
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_DisconnectNotify_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFinalState_Sender(const QFinalState* self) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return vqfinalstate->sender();
    } else {
        return ((VirtualQFinalState*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFinalState_SuperSender(const QFinalState* self) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Sender_IsBase(true);
        return vqfinalstate->sender();
    } else {
        return ((VirtualQFinalState*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnSender(const QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Sender_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFinalState_SenderSignalIndex(const QFinalState* self) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return vqfinalstate->senderSignalIndex();
    } else {
        return ((VirtualQFinalState*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFinalState_SuperSenderSignalIndex(const QFinalState* self) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_SenderSignalIndex_IsBase(true);
        return vqfinalstate->senderSignalIndex();
    } else {
        return ((VirtualQFinalState*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnSenderSignalIndex(const QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFinalState_Receivers(const QFinalState* self, const char* signal) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return vqfinalstate->receivers(signal);
    } else {
        return ((VirtualQFinalState*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFinalState_SuperReceivers(const QFinalState* self, const char* signal) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Receivers_IsBase(true);
        return vqfinalstate->receivers(signal);
    } else {
        return ((VirtualQFinalState*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnReceivers(const QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_Receivers_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFinalState_IsSignalConnected(const QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        return vqfinalstate->isSignalConnected(*signal);
    } else {
        return ((VirtualQFinalState*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFinalState_SuperIsSignalConnected(const QFinalState* self, const QMetaMethod* signal) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_IsSignalConnected_IsBase(true);
        return vqfinalstate->isSignalConnected(*signal);
    } else {
        return ((VirtualQFinalState*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFinalState_OnIsSignalConnected(const QFinalState* self, intptr_t slot) {
    auto* vqfinalstate = const_cast<VirtualQFinalState*>(dynamic_cast<const VirtualQFinalState*>(self));
    if (vqfinalstate && vqfinalstate->isVirtualQFinalState) {
        vqfinalstate->setQFinalState_IsSignalConnected_Callback(reinterpret_cast<VirtualQFinalState::QFinalState_IsSignalConnected_Callback>(slot));
    }
}

void QFinalState_Delete(QFinalState* self) {
    delete self;
}
