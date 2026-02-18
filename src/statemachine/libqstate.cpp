#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qstate.h>
#include "libqstate.h"
#include "libqstate.hxx"

QState* QState_new() {
    return new VirtualQState();
}

QState* QState_new2(int childMode) {
    return new VirtualQState(static_cast<QState::ChildMode>(childMode));
}

QState* QState_new3(QState* parent) {
    return new VirtualQState(parent);
}

QState* QState_new4(int childMode, QState* parent) {
    return new VirtualQState(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QState_MetaObject(const QState* self) {
    auto* vqstate = dynamic_cast<const VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQState*)self)->metaObject();
    }
}

void* QState_Metacast(QState* self, const char* param1) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQState*)self)->qt_metacast(param1);
    }
}

int QState_Metacall(QState* self, int param1, int param2, void** param3) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQState*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QAbstractState* QState_ErrorState(const QState* self) {
    return self->errorState();
}

void QState_SetErrorState(QState* self, QAbstractState* state) {
    self->setErrorState(state);
}

void QState_AddTransition(QState* self, QAbstractTransition* transition) {
    self->addTransition(transition);
}

QSignalTransition* QState_AddTransition2(QState* self, const QObject* sender, const char* signal, QAbstractState* target) {
    return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_AddTransition3(QState* self, QAbstractState* target) {
    return self->addTransition(target);
}

void QState_RemoveTransition(QState* self, QAbstractTransition* transition) {
    self->removeTransition(transition);
}

libqt_list /* of QAbstractTransition* */ QState_Transitions(const QState* self) {
    QList<QAbstractTransition*> _ret = self->transitions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractTransition** _arr = static_cast<QAbstractTransition**>(malloc(sizeof(QAbstractTransition*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAbstractState* QState_InitialState(const QState* self) {
    return self->initialState();
}

void QState_SetInitialState(QState* self, QAbstractState* state) {
    self->setInitialState(state);
}

int QState_ChildMode(const QState* self) {
    return static_cast<int>(self->childMode());
}

void QState_SetChildMode(QState* self, int mode) {
    self->setChildMode(static_cast<QState::ChildMode>(mode));
}

void QState_AssignProperty(QState* self, QObject* object, const char* name, const QVariant* value) {
    self->assignProperty(object, name, *value);
}

void QState_OnEntry(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->onEntry(event);
    }
}

void QState_OnExit(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->onExit(event);
    }
}

bool QState_Event(QState* self, QEvent* e) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        return vqstate->event(e);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QState_QBaseMetaObject(const QState* self) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_MetaObject_IsBase(true);
        return (QMetaObject*)vqstate->metaObject();
    } else {
        return (QMetaObject*)self->QState::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnMetaObject(const QState* self, intptr_t slot) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_MetaObject_Callback(reinterpret_cast<VirtualQState::QState_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QState_QBaseMetacast(QState* self, const char* param1) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Metacast_IsBase(true);
        return vqstate->qt_metacast(param1);
    } else {
        return self->QState::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnMetacast(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Metacast_Callback(reinterpret_cast<VirtualQState::QState_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QState_QBaseMetacall(QState* self, int param1, int param2, void** param3) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Metacall_IsBase(true);
        return vqstate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QState::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnMetacall(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Metacall_Callback(reinterpret_cast<VirtualQState::QState_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QState_QBaseOnEntry(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_OnEntry_IsBase(true);
        vqstate->onEntry(event);
    } else {
        ((VirtualQState*)self)->onEntry(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnOnEntry(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_OnEntry_Callback(reinterpret_cast<VirtualQState::QState_OnEntry_Callback>(slot));
    }
}

// Base class handler implementation
void QState_QBaseOnExit(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_OnExit_IsBase(true);
        vqstate->onExit(event);
    } else {
        ((VirtualQState*)self)->onExit(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnOnExit(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_OnExit_Callback(reinterpret_cast<VirtualQState::QState_OnExit_Callback>(slot));
    }
}

// Base class handler implementation
bool QState_QBaseEvent(QState* self, QEvent* e) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Event_IsBase(true);
        return vqstate->event(e);
    } else {
        return ((VirtualQState*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnEvent(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Event_Callback(reinterpret_cast<VirtualQState::QState_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QState_EventFilter(QState* self, QObject* watched, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        return vqstate->eventFilter(watched, event);
    } else {
        return self->QState::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QState_QBaseEventFilter(QState* self, QObject* watched, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_EventFilter_IsBase(true);
        return vqstate->eventFilter(watched, event);
    } else {
        return self->QState::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnEventFilter(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_EventFilter_Callback(reinterpret_cast<VirtualQState::QState_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QState_TimerEvent(QState* self, QTimerEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->timerEvent(event);
    } else {
        ((VirtualQState*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QState_QBaseTimerEvent(QState* self, QTimerEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_TimerEvent_IsBase(true);
        vqstate->timerEvent(event);
    } else {
        ((VirtualQState*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnTimerEvent(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_TimerEvent_Callback(reinterpret_cast<VirtualQState::QState_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QState_ChildEvent(QState* self, QChildEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->childEvent(event);
    } else {
        ((VirtualQState*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QState_QBaseChildEvent(QState* self, QChildEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_ChildEvent_IsBase(true);
        vqstate->childEvent(event);
    } else {
        ((VirtualQState*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnChildEvent(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_ChildEvent_Callback(reinterpret_cast<VirtualQState::QState_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QState_CustomEvent(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->customEvent(event);
    } else {
        ((VirtualQState*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QState_QBaseCustomEvent(QState* self, QEvent* event) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_CustomEvent_IsBase(true);
        vqstate->customEvent(event);
    } else {
        ((VirtualQState*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnCustomEvent(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_CustomEvent_Callback(reinterpret_cast<VirtualQState::QState_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QState_ConnectNotify(QState* self, const QMetaMethod* signal) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->connectNotify(*signal);
    } else {
        ((VirtualQState*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QState_QBaseConnectNotify(QState* self, const QMetaMethod* signal) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_ConnectNotify_IsBase(true);
        vqstate->connectNotify(*signal);
    } else {
        ((VirtualQState*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnConnectNotify(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_ConnectNotify_Callback(reinterpret_cast<VirtualQState::QState_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QState_DisconnectNotify(QState* self, const QMetaMethod* signal) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->disconnectNotify(*signal);
    } else {
        ((VirtualQState*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QState_QBaseDisconnectNotify(QState* self, const QMetaMethod* signal) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_DisconnectNotify_IsBase(true);
        vqstate->disconnectNotify(*signal);
    } else {
        ((VirtualQState*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnDisconnectNotify(QState* self, intptr_t slot) {
    auto* vqstate = dynamic_cast<VirtualQState*>(self);
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_DisconnectNotify_Callback(reinterpret_cast<VirtualQState::QState_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QState_Sender(const QState* self) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        return vqstate->sender();
    } else {
        return ((VirtualQState*)self)->sender();
    }
}

// Base class handler implementation
QObject* QState_QBaseSender(const QState* self) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Sender_IsBase(true);
        return vqstate->sender();
    } else {
        return ((VirtualQState*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnSender(const QState* self, intptr_t slot) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Sender_Callback(reinterpret_cast<VirtualQState::QState_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QState_SenderSignalIndex(const QState* self) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        return vqstate->senderSignalIndex();
    } else {
        return ((VirtualQState*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QState_QBaseSenderSignalIndex(const QState* self) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_SenderSignalIndex_IsBase(true);
        return vqstate->senderSignalIndex();
    } else {
        return ((VirtualQState*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnSenderSignalIndex(const QState* self, intptr_t slot) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_SenderSignalIndex_Callback(reinterpret_cast<VirtualQState::QState_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QState_Receivers(const QState* self, const char* signal) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        return vqstate->receivers(signal);
    } else {
        return ((VirtualQState*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QState_QBaseReceivers(const QState* self, const char* signal) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Receivers_IsBase(true);
        return vqstate->receivers(signal);
    } else {
        return ((VirtualQState*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnReceivers(const QState* self, intptr_t slot) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_Receivers_Callback(reinterpret_cast<VirtualQState::QState_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QState_IsSignalConnected(const QState* self, const QMetaMethod* signal) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        return vqstate->isSignalConnected(*signal);
    } else {
        return ((VirtualQState*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QState_QBaseIsSignalConnected(const QState* self, const QMetaMethod* signal) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_IsSignalConnected_IsBase(true);
        return vqstate->isSignalConnected(*signal);
    } else {
        return ((VirtualQState*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QState_OnIsSignalConnected(const QState* self, intptr_t slot) {
    auto* vqstate = const_cast<VirtualQState*>(dynamic_cast<const VirtualQState*>(self));
    if (vqstate && vqstate->isVirtualQState) {
        vqstate->setQState_IsSignalConnected_Callback(reinterpret_cast<VirtualQState::QState_IsSignalConnected_Callback>(slot));
    }
}

void QState_Connect_Finished(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_PropertiesAssigned(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::propertiesAssigned, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_ChildModeChanged(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::childModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_InitialStateChanged(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::initialStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Connect_ErrorStateChanged(QState* self, intptr_t slot) {
    void (*slotFunc)(QState*) = reinterpret_cast<void (*)(QState*)>(slot);
    QState::connect(self, &QState::errorStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QState_Delete(QState* self) {
    delete self;
}
