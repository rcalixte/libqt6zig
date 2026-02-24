#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QHistoryState>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhistorystate.h>
#include "libqhistorystate.h"
#include "libqhistorystate.hxx"

QHistoryState* QHistoryState_new() {
    return new VirtualQHistoryState();
}

QHistoryState* QHistoryState_new2(int typeVal) {
    return new VirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal));
}

QHistoryState* QHistoryState_new3(QState* parent) {
    return new VirtualQHistoryState(parent);
}

QHistoryState* QHistoryState_new4(int typeVal, QState* parent) {
    return new VirtualQHistoryState(static_cast<QHistoryState::HistoryType>(typeVal), parent);
}

QMetaObject* QHistoryState_MetaObject(const QHistoryState* self) {
    auto* vqhistorystate = dynamic_cast<const VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQHistoryState*)self)->metaObject();
    }
}

void* QHistoryState_Metacast(QHistoryState* self, const char* param1) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQHistoryState*)self)->qt_metacast(param1);
    }
}

int QHistoryState_Metacall(QHistoryState* self, int param1, int param2, void** param3) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHistoryState*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QAbstractTransition* QHistoryState_DefaultTransition(const QHistoryState* self) {
    return self->defaultTransition();
}

void QHistoryState_SetDefaultTransition(QHistoryState* self, QAbstractTransition* transition) {
    self->setDefaultTransition(transition);
}

QAbstractState* QHistoryState_DefaultState(const QHistoryState* self) {
    return self->defaultState();
}

void QHistoryState_SetDefaultState(QHistoryState* self, QAbstractState* state) {
    self->setDefaultState(state);
}

int QHistoryState_HistoryType(const QHistoryState* self) {
    return static_cast<int>(self->historyType());
}

void QHistoryState_SetHistoryType(QHistoryState* self, int typeVal) {
    self->setHistoryType(static_cast<QHistoryState::HistoryType>(typeVal));
}

void QHistoryState_OnEntry(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->onEntry(event);
    }
}

void QHistoryState_OnExit(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->onExit(event);
    }
}

bool QHistoryState_Event(QHistoryState* self, QEvent* e) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return vqhistorystate->event(e);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QHistoryState_SuperMetaObject(const QHistoryState* self) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_MetaObject_IsBase(true);
        return (QMetaObject*)vqhistorystate->metaObject();
    } else {
        return (QMetaObject*)self->QHistoryState::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnMetaObject(const QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_MetaObject_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QHistoryState_SuperMetacast(QHistoryState* self, const char* param1) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Metacast_IsBase(true);
        return vqhistorystate->qt_metacast(param1);
    } else {
        return self->QHistoryState::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnMetacast(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Metacast_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QHistoryState_SuperMetacall(QHistoryState* self, int param1, int param2, void** param3) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Metacall_IsBase(true);
        return vqhistorystate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QHistoryState::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnMetacall(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Metacall_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QHistoryState_SuperOnEntry(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_OnEntry_IsBase(true);
        vqhistorystate->onEntry(event);
    } else {
        ((VirtualQHistoryState*)self)->onEntry(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnOnEntry(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_OnEntry_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_OnEntry_Callback>(slot));
    }
}

// Base class handler implementation
void QHistoryState_SuperOnExit(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_OnExit_IsBase(true);
        vqhistorystate->onExit(event);
    } else {
        ((VirtualQHistoryState*)self)->onExit(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnOnExit(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_OnExit_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_OnExit_Callback>(slot));
    }
}

// Base class handler implementation
bool QHistoryState_SuperEvent(QHistoryState* self, QEvent* e) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Event_IsBase(true);
        return vqhistorystate->event(e);
    } else {
        return ((VirtualQHistoryState*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnEvent(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Event_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHistoryState_EventFilter(QHistoryState* self, QObject* watched, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return vqhistorystate->eventFilter(watched, event);
    } else {
        return self->QHistoryState::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHistoryState_SuperEventFilter(QHistoryState* self, QObject* watched, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_EventFilter_IsBase(true);
        return vqhistorystate->eventFilter(watched, event);
    } else {
        return self->QHistoryState::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnEventFilter(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_EventFilter_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHistoryState_TimerEvent(QHistoryState* self, QTimerEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->timerEvent(event);
    } else {
        ((VirtualQHistoryState*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QHistoryState_SuperTimerEvent(QHistoryState* self, QTimerEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_TimerEvent_IsBase(true);
        vqhistorystate->timerEvent(event);
    } else {
        ((VirtualQHistoryState*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnTimerEvent(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_TimerEvent_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHistoryState_ChildEvent(QHistoryState* self, QChildEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->childEvent(event);
    } else {
        ((VirtualQHistoryState*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QHistoryState_SuperChildEvent(QHistoryState* self, QChildEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_ChildEvent_IsBase(true);
        vqhistorystate->childEvent(event);
    } else {
        ((VirtualQHistoryState*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnChildEvent(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_ChildEvent_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHistoryState_CustomEvent(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->customEvent(event);
    } else {
        ((VirtualQHistoryState*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QHistoryState_SuperCustomEvent(QHistoryState* self, QEvent* event) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_CustomEvent_IsBase(true);
        vqhistorystate->customEvent(event);
    } else {
        ((VirtualQHistoryState*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnCustomEvent(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_CustomEvent_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHistoryState_ConnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->connectNotify(*signal);
    } else {
        ((VirtualQHistoryState*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHistoryState_SuperConnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_ConnectNotify_IsBase(true);
        vqhistorystate->connectNotify(*signal);
    } else {
        ((VirtualQHistoryState*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnConnectNotify(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_ConnectNotify_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHistoryState_DisconnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->disconnectNotify(*signal);
    } else {
        ((VirtualQHistoryState*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHistoryState_SuperDisconnectNotify(QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_DisconnectNotify_IsBase(true);
        vqhistorystate->disconnectNotify(*signal);
    } else {
        ((VirtualQHistoryState*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnDisconnectNotify(QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = dynamic_cast<VirtualQHistoryState*>(self);
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_DisconnectNotify_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHistoryState_Sender(const QHistoryState* self) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return vqhistorystate->sender();
    } else {
        return ((VirtualQHistoryState*)self)->sender();
    }
}

// Base class handler implementation
QObject* QHistoryState_SuperSender(const QHistoryState* self) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Sender_IsBase(true);
        return vqhistorystate->sender();
    } else {
        return ((VirtualQHistoryState*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnSender(const QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Sender_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHistoryState_SenderSignalIndex(const QHistoryState* self) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return vqhistorystate->senderSignalIndex();
    } else {
        return ((VirtualQHistoryState*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QHistoryState_SuperSenderSignalIndex(const QHistoryState* self) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_SenderSignalIndex_IsBase(true);
        return vqhistorystate->senderSignalIndex();
    } else {
        return ((VirtualQHistoryState*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnSenderSignalIndex(const QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHistoryState_Receivers(const QHistoryState* self, const char* signal) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return vqhistorystate->receivers(signal);
    } else {
        return ((VirtualQHistoryState*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QHistoryState_SuperReceivers(const QHistoryState* self, const char* signal) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Receivers_IsBase(true);
        return vqhistorystate->receivers(signal);
    } else {
        return ((VirtualQHistoryState*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnReceivers(const QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_Receivers_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHistoryState_IsSignalConnected(const QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        return vqhistorystate->isSignalConnected(*signal);
    } else {
        return ((VirtualQHistoryState*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHistoryState_SuperIsSignalConnected(const QHistoryState* self, const QMetaMethod* signal) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_IsSignalConnected_IsBase(true);
        return vqhistorystate->isSignalConnected(*signal);
    } else {
        return ((VirtualQHistoryState*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHistoryState_OnIsSignalConnected(const QHistoryState* self, intptr_t slot) {
    auto* vqhistorystate = const_cast<VirtualQHistoryState*>(dynamic_cast<const VirtualQHistoryState*>(self));
    if (vqhistorystate && vqhistorystate->isVirtualQHistoryState) {
        vqhistorystate->setQHistoryState_IsSignalConnected_Callback(reinterpret_cast<VirtualQHistoryState::QHistoryState_IsSignalConnected_Callback>(slot));
    }
}

void QHistoryState_Connect_DefaultTransitionChanged(QHistoryState* self, intptr_t slot) {
    void (*slotFunc)(QHistoryState*) = reinterpret_cast<void (*)(QHistoryState*)>(slot);
    QHistoryState::connect(self, &QHistoryState::defaultTransitionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHistoryState_Connect_DefaultStateChanged(QHistoryState* self, intptr_t slot) {
    void (*slotFunc)(QHistoryState*) = reinterpret_cast<void (*)(QHistoryState*)>(slot);
    QHistoryState::connect(self, &QHistoryState::defaultStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHistoryState_Connect_HistoryTypeChanged(QHistoryState* self, intptr_t slot) {
    void (*slotFunc)(QHistoryState*) = reinterpret_cast<void (*)(QHistoryState*)>(slot);
    QHistoryState::connect(self, &QHistoryState::historyTypeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHistoryState_Delete(QHistoryState* self) {
    delete self;
}
