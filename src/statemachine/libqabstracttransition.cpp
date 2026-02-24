#include <QAbstractAnimation>
#include <QAbstractState>
#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qabstracttransition.h>
#include "libqabstracttransition.h"
#include "libqabstracttransition.hxx"

QAbstractTransition* QAbstractTransition_new() {
    return new VirtualQAbstractTransition();
}

QAbstractTransition* QAbstractTransition_new2(QState* sourceState) {
    return new VirtualQAbstractTransition(sourceState);
}

QMetaObject* QAbstractTransition_MetaObject(const QAbstractTransition* self) {
    auto* vqabstracttransition = dynamic_cast<const VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQAbstractTransition*)self)->metaObject();
    }
}

void* QAbstractTransition_Metacast(QAbstractTransition* self, const char* param1) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQAbstractTransition*)self)->qt_metacast(param1);
    }
}

int QAbstractTransition_Metacall(QAbstractTransition* self, int param1, int param2, void** param3) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractTransition*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QState* QAbstractTransition_SourceState(const QAbstractTransition* self) {
    return self->sourceState();
}

QAbstractState* QAbstractTransition_TargetState(const QAbstractTransition* self) {
    return self->targetState();
}

void QAbstractTransition_SetTargetState(QAbstractTransition* self, QAbstractState* target) {
    self->setTargetState(target);
}

libqt_list /* of QAbstractState* */ QAbstractTransition_TargetStates(const QAbstractTransition* self) {
    QList<QAbstractState*> _ret = self->targetStates();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractState** _arr = static_cast<QAbstractState**>(malloc(sizeof(QAbstractState*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstractTransition_SetTargetStates(QAbstractTransition* self, const libqt_list /* of QAbstractState* */ targets) {
    QList<QAbstractState*> targets_QList;
    targets_QList.reserve(targets.len);
    QAbstractState** targets_arr = static_cast<QAbstractState**>(targets.data);
    for (size_t i = 0; i < targets.len; ++i) {
        targets_QList.push_back(targets_arr[i]);
    }
    self->setTargetStates(targets_QList);
}

int QAbstractTransition_TransitionType(const QAbstractTransition* self) {
    return static_cast<int>(self->transitionType());
}

void QAbstractTransition_SetTransitionType(QAbstractTransition* self, int typeVal) {
    self->setTransitionType(static_cast<QAbstractTransition::TransitionType>(typeVal));
}

QStateMachine* QAbstractTransition_Machine(const QAbstractTransition* self) {
    return self->machine();
}

void QAbstractTransition_AddAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
    self->addAnimation(animation);
}

void QAbstractTransition_RemoveAnimation(QAbstractTransition* self, QAbstractAnimation* animation) {
    self->removeAnimation(animation);
}

libqt_list /* of QAbstractAnimation* */ QAbstractTransition_Animations(const QAbstractTransition* self) {
    QList<QAbstractAnimation*> _ret = self->animations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractAnimation** _arr = static_cast<QAbstractAnimation**>(malloc(sizeof(QAbstractAnimation*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QAbstractTransition_EventTest(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->eventTest(event);
    }
    return {};
}

void QAbstractTransition_OnTransition(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->onTransition(event);
    }
}

bool QAbstractTransition_Event(QAbstractTransition* self, QEvent* e) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->event(e);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QAbstractTransition_SuperMetaObject(const QAbstractTransition* self) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_MetaObject_IsBase(true);
        return (QMetaObject*)vqabstracttransition->metaObject();
    } else {
        return (QMetaObject*)self->QAbstractTransition::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnMetaObject(const QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_MetaObject_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QAbstractTransition_SuperMetacast(QAbstractTransition* self, const char* param1) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Metacast_IsBase(true);
        return vqabstracttransition->qt_metacast(param1);
    } else {
        return self->QAbstractTransition::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnMetacast(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Metacast_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QAbstractTransition_SuperMetacall(QAbstractTransition* self, int param1, int param2, void** param3) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Metacall_IsBase(true);
        return vqabstracttransition->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAbstractTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnMetacall(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Metacall_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractTransition_SuperEventTest(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_EventTest_IsBase(true);
        return vqabstracttransition->eventTest(event);
    } else {
        return ((VirtualQAbstractTransition*)self)->eventTest(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnEventTest(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_EventTest_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_EventTest_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractTransition_SuperOnTransition(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_OnTransition_IsBase(true);
        vqabstracttransition->onTransition(event);
    } else {
        ((VirtualQAbstractTransition*)self)->onTransition(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnOnTransition(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_OnTransition_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_OnTransition_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractTransition_SuperEvent(QAbstractTransition* self, QEvent* e) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Event_IsBase(true);
        return vqabstracttransition->event(e);
    } else {
        return ((VirtualQAbstractTransition*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnEvent(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Event_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTransition_EventFilter(QAbstractTransition* self, QObject* watched, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->eventFilter(watched, event);
    } else {
        return self->QAbstractTransition::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractTransition_SuperEventFilter(QAbstractTransition* self, QObject* watched, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_EventFilter_IsBase(true);
        return vqabstracttransition->eventFilter(watched, event);
    } else {
        return self->QAbstractTransition::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnEventFilter(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_EventFilter_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTransition_TimerEvent(QAbstractTransition* self, QTimerEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->timerEvent(event);
    } else {
        ((VirtualQAbstractTransition*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractTransition_SuperTimerEvent(QAbstractTransition* self, QTimerEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_TimerEvent_IsBase(true);
        vqabstracttransition->timerEvent(event);
    } else {
        ((VirtualQAbstractTransition*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnTimerEvent(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTransition_ChildEvent(QAbstractTransition* self, QChildEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->childEvent(event);
    } else {
        ((VirtualQAbstractTransition*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractTransition_SuperChildEvent(QAbstractTransition* self, QChildEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_ChildEvent_IsBase(true);
        vqabstracttransition->childEvent(event);
    } else {
        ((VirtualQAbstractTransition*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnChildEvent(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTransition_CustomEvent(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->customEvent(event);
    } else {
        ((VirtualQAbstractTransition*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractTransition_SuperCustomEvent(QAbstractTransition* self, QEvent* event) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_CustomEvent_IsBase(true);
        vqabstracttransition->customEvent(event);
    } else {
        ((VirtualQAbstractTransition*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnCustomEvent(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTransition_ConnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->connectNotify(*signal);
    } else {
        ((VirtualQAbstractTransition*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractTransition_SuperConnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_ConnectNotify_IsBase(true);
        vqabstracttransition->connectNotify(*signal);
    } else {
        ((VirtualQAbstractTransition*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnConnectNotify(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTransition_DisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractTransition*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractTransition_SuperDisconnectNotify(QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_DisconnectNotify_IsBase(true);
        vqabstracttransition->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractTransition*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnDisconnectNotify(QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = dynamic_cast<VirtualQAbstractTransition*>(self);
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractTransition_Sender(const QAbstractTransition* self) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->sender();
    } else {
        return ((VirtualQAbstractTransition*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractTransition_SuperSender(const QAbstractTransition* self) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Sender_IsBase(true);
        return vqabstracttransition->sender();
    } else {
        return ((VirtualQAbstractTransition*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnSender(const QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Sender_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTransition_SenderSignalIndex(const QAbstractTransition* self) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->senderSignalIndex();
    } else {
        return ((VirtualQAbstractTransition*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractTransition_SuperSenderSignalIndex(const QAbstractTransition* self) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_SenderSignalIndex_IsBase(true);
        return vqabstracttransition->senderSignalIndex();
    } else {
        return ((VirtualQAbstractTransition*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnSenderSignalIndex(const QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTransition_Receivers(const QAbstractTransition* self, const char* signal) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->receivers(signal);
    } else {
        return ((VirtualQAbstractTransition*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractTransition_SuperReceivers(const QAbstractTransition* self, const char* signal) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Receivers_IsBase(true);
        return vqabstracttransition->receivers(signal);
    } else {
        return ((VirtualQAbstractTransition*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnReceivers(const QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_Receivers_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTransition_IsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        return vqabstracttransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractTransition*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractTransition_SuperIsSignalConnected(const QAbstractTransition* self, const QMetaMethod* signal) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_IsSignalConnected_IsBase(true);
        return vqabstracttransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractTransition*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTransition_OnIsSignalConnected(const QAbstractTransition* self, intptr_t slot) {
    auto* vqabstracttransition = const_cast<VirtualQAbstractTransition*>(dynamic_cast<const VirtualQAbstractTransition*>(self));
    if (vqabstracttransition && vqabstracttransition->isVirtualQAbstractTransition) {
        vqabstracttransition->setQAbstractTransition_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractTransition::QAbstractTransition_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractTransition_Connect_Triggered(QAbstractTransition* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTransition*) = reinterpret_cast<void (*)(QAbstractTransition*)>(slot);
    QAbstractTransition::connect(self, &QAbstractTransition::triggered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTransition_Connect_TargetStateChanged(QAbstractTransition* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTransition*) = reinterpret_cast<void (*)(QAbstractTransition*)>(slot);
    QAbstractTransition::connect(self, &QAbstractTransition::targetStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTransition_Connect_TargetStatesChanged(QAbstractTransition* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTransition*) = reinterpret_cast<void (*)(QAbstractTransition*)>(slot);
    QAbstractTransition::connect(self, &QAbstractTransition::targetStatesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTransition_Delete(QAbstractTransition* self) {
    delete self;
}
