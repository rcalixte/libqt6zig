#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qeventtransition.h>
#include "libqeventtransition.h"
#include "libqeventtransition.hxx"

QEventTransition* QEventTransition_new() {
    return new VirtualQEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, int typeVal) {
    return new VirtualQEventTransition(object, static_cast<QEvent::Type>(typeVal));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
    return new VirtualQEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState) {
    return new VirtualQEventTransition(object, static_cast<QEvent::Type>(typeVal), sourceState);
}

QMetaObject* QEventTransition_MetaObject(const QEventTransition* self) {
    auto* vqeventtransition = dynamic_cast<const VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQEventTransition*)self)->metaObject();
    }
}

void* QEventTransition_Metacast(QEventTransition* self, const char* param1) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQEventTransition*)self)->qt_metacast(param1);
    }
}

int QEventTransition_Metacall(QEventTransition* self, int param1, int param2, void** param3) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQEventTransition*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QObject* QEventTransition_EventSource(const QEventTransition* self) {
    return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
    self->setEventSource(object);
}

int QEventTransition_EventType(const QEventTransition* self) {
    return static_cast<int>(self->eventType());
}

void QEventTransition_SetEventType(QEventTransition* self, int typeVal) {
    self->setEventType(static_cast<QEvent::Type>(typeVal));
}

bool QEventTransition_EventTest(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->eventTest(event);
    }
    return {};
}

void QEventTransition_OnTransition(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->onTransition(event);
    }
}

bool QEventTransition_Event(QEventTransition* self, QEvent* e) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->event(e);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QEventTransition_QBaseMetaObject(const QEventTransition* self) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_MetaObject_IsBase(true);
        return (QMetaObject*)vqeventtransition->metaObject();
    } else {
        return (QMetaObject*)self->QEventTransition::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnMetaObject(const QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_MetaObject_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QEventTransition_QBaseMetacast(QEventTransition* self, const char* param1) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Metacast_IsBase(true);
        return vqeventtransition->qt_metacast(param1);
    } else {
        return self->QEventTransition::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnMetacast(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Metacast_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QEventTransition_QBaseMetacall(QEventTransition* self, int param1, int param2, void** param3) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Metacall_IsBase(true);
        return vqeventtransition->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QEventTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnMetacall(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Metacall_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QEventTransition_QBaseEventTest(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_EventTest_IsBase(true);
        return vqeventtransition->eventTest(event);
    } else {
        return ((VirtualQEventTransition*)self)->eventTest(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnEventTest(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_EventTest_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_EventTest_Callback>(slot));
    }
}

// Base class handler implementation
void QEventTransition_QBaseOnTransition(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_OnTransition_IsBase(true);
        vqeventtransition->onTransition(event);
    } else {
        ((VirtualQEventTransition*)self)->onTransition(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnOnTransition(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_OnTransition_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_OnTransition_Callback>(slot));
    }
}

// Base class handler implementation
bool QEventTransition_QBaseEvent(QEventTransition* self, QEvent* e) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Event_IsBase(true);
        return vqeventtransition->event(e);
    } else {
        return ((VirtualQEventTransition*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnEvent(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Event_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEventTransition_EventFilter(QEventTransition* self, QObject* watched, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->eventFilter(watched, event);
    } else {
        return self->QEventTransition::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QEventTransition_QBaseEventFilter(QEventTransition* self, QObject* watched, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_EventFilter_IsBase(true);
        return vqeventtransition->eventFilter(watched, event);
    } else {
        return self->QEventTransition::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnEventFilter(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_EventFilter_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QEventTransition_TimerEvent(QEventTransition* self, QTimerEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->timerEvent(event);
    } else {
        ((VirtualQEventTransition*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QEventTransition_QBaseTimerEvent(QEventTransition* self, QTimerEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_TimerEvent_IsBase(true);
        vqeventtransition->timerEvent(event);
    } else {
        ((VirtualQEventTransition*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnTimerEvent(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_TimerEvent_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QEventTransition_ChildEvent(QEventTransition* self, QChildEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->childEvent(event);
    } else {
        ((VirtualQEventTransition*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QEventTransition_QBaseChildEvent(QEventTransition* self, QChildEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_ChildEvent_IsBase(true);
        vqeventtransition->childEvent(event);
    } else {
        ((VirtualQEventTransition*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnChildEvent(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_ChildEvent_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QEventTransition_CustomEvent(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->customEvent(event);
    } else {
        ((VirtualQEventTransition*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QEventTransition_QBaseCustomEvent(QEventTransition* self, QEvent* event) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_CustomEvent_IsBase(true);
        vqeventtransition->customEvent(event);
    } else {
        ((VirtualQEventTransition*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnCustomEvent(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_CustomEvent_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QEventTransition_ConnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->connectNotify(*signal);
    } else {
        ((VirtualQEventTransition*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QEventTransition_QBaseConnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_ConnectNotify_IsBase(true);
        vqeventtransition->connectNotify(*signal);
    } else {
        ((VirtualQEventTransition*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnConnectNotify(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_ConnectNotify_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QEventTransition_DisconnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->disconnectNotify(*signal);
    } else {
        ((VirtualQEventTransition*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QEventTransition_QBaseDisconnectNotify(QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_DisconnectNotify_IsBase(true);
        vqeventtransition->disconnectNotify(*signal);
    } else {
        ((VirtualQEventTransition*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnDisconnectNotify(QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = dynamic_cast<VirtualQEventTransition*>(self);
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_DisconnectNotify_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QEventTransition_Sender(const QEventTransition* self) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->sender();
    } else {
        return ((VirtualQEventTransition*)self)->sender();
    }
}

// Base class handler implementation
QObject* QEventTransition_QBaseSender(const QEventTransition* self) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Sender_IsBase(true);
        return vqeventtransition->sender();
    } else {
        return ((VirtualQEventTransition*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnSender(const QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Sender_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QEventTransition_SenderSignalIndex(const QEventTransition* self) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->senderSignalIndex();
    } else {
        return ((VirtualQEventTransition*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QEventTransition_QBaseSenderSignalIndex(const QEventTransition* self) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_SenderSignalIndex_IsBase(true);
        return vqeventtransition->senderSignalIndex();
    } else {
        return ((VirtualQEventTransition*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnSenderSignalIndex(const QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_SenderSignalIndex_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QEventTransition_Receivers(const QEventTransition* self, const char* signal) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->receivers(signal);
    } else {
        return ((VirtualQEventTransition*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QEventTransition_QBaseReceivers(const QEventTransition* self, const char* signal) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Receivers_IsBase(true);
        return vqeventtransition->receivers(signal);
    } else {
        return ((VirtualQEventTransition*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnReceivers(const QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_Receivers_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QEventTransition_IsSignalConnected(const QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        return vqeventtransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQEventTransition*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QEventTransition_QBaseIsSignalConnected(const QEventTransition* self, const QMetaMethod* signal) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_IsSignalConnected_IsBase(true);
        return vqeventtransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQEventTransition*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QEventTransition_OnIsSignalConnected(const QEventTransition* self, intptr_t slot) {
    auto* vqeventtransition = const_cast<VirtualQEventTransition*>(dynamic_cast<const VirtualQEventTransition*>(self));
    if (vqeventtransition && vqeventtransition->isVirtualQEventTransition) {
        vqeventtransition->setQEventTransition_IsSignalConnected_Callback(reinterpret_cast<VirtualQEventTransition::QEventTransition_IsSignalConnected_Callback>(slot));
    }
}

void QEventTransition_Delete(QEventTransition* self) {
    delete self;
}
