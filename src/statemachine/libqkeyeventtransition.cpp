#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QKeyEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qkeyeventtransition.h>
#include "libqkeyeventtransition.h"
#include "libqkeyeventtransition.hxx"

QKeyEventTransition* QKeyEventTransition_new() {
    return new VirtualQKeyEventTransition();
}

QKeyEventTransition* QKeyEventTransition_new2(QObject* object, int typeVal, int key) {
    return new VirtualQKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key));
}

QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState) {
    return new VirtualQKeyEventTransition(sourceState);
}

QKeyEventTransition* QKeyEventTransition_new4(QObject* object, int typeVal, int key, QState* sourceState) {
    return new VirtualQKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key), sourceState);
}

QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self) {
    auto* vqkeyeventtransition = dynamic_cast<const VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQKeyEventTransition*)self)->metaObject();
    }
}

void* QKeyEventTransition_Metacast(QKeyEventTransition* self, const char* param1) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQKeyEventTransition*)self)->qt_metacast(param1);
    }
}

int QKeyEventTransition_Metacall(QKeyEventTransition* self, int param1, int param2, void** param3) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQKeyEventTransition*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QKeyEventTransition_Key(const QKeyEventTransition* self) {
    return self->key();
}

void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key) {
    self->setKey(static_cast<int>(key));
}

int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self) {
    return static_cast<int>(self->modifierMask());
}

void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers) {
    self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QKeyEventTransition_OnTransition(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->onTransition(event);
    }
}

bool QKeyEventTransition_EventTest(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->eventTest(event);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QKeyEventTransition_SuperMetaObject(const QKeyEventTransition* self) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_MetaObject_IsBase(true);
        return (QMetaObject*)vqkeyeventtransition->metaObject();
    } else {
        return (QMetaObject*)self->QKeyEventTransition::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnMetaObject(const QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_MetaObject_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QKeyEventTransition_SuperMetacast(QKeyEventTransition* self, const char* param1) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Metacast_IsBase(true);
        return vqkeyeventtransition->qt_metacast(param1);
    } else {
        return self->QKeyEventTransition::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnMetacast(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Metacast_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QKeyEventTransition_SuperMetacall(QKeyEventTransition* self, int param1, int param2, void** param3) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Metacall_IsBase(true);
        return vqkeyeventtransition->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QKeyEventTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnMetacall(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Metacall_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperOnTransition(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_OnTransition_IsBase(true);
        vqkeyeventtransition->onTransition(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->onTransition(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnOnTransition(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_OnTransition_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_OnTransition_Callback>(slot));
    }
}

// Base class handler implementation
bool QKeyEventTransition_SuperEventTest(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_EventTest_IsBase(true);
        return vqkeyeventtransition->eventTest(event);
    } else {
        return ((VirtualQKeyEventTransition*)self)->eventTest(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnEventTest(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_EventTest_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_EventTest_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeyEventTransition_Event(QKeyEventTransition* self, QEvent* e) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->event(e);
    } else {
        return ((VirtualQKeyEventTransition*)self)->event(e);
    }
}

// Base class handler implementation
bool QKeyEventTransition_SuperEvent(QKeyEventTransition* self, QEvent* e) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Event_IsBase(true);
        return vqkeyeventtransition->event(e);
    } else {
        return ((VirtualQKeyEventTransition*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnEvent(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Event_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeyEventTransition_EventFilter(QKeyEventTransition* self, QObject* watched, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->eventFilter(watched, event);
    } else {
        return self->QKeyEventTransition::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QKeyEventTransition_SuperEventFilter(QKeyEventTransition* self, QObject* watched, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_EventFilter_IsBase(true);
        return vqkeyeventtransition->eventFilter(watched, event);
    } else {
        return self->QKeyEventTransition::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnEventFilter(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_EventFilter_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEventTransition_TimerEvent(QKeyEventTransition* self, QTimerEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->timerEvent(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperTimerEvent(QKeyEventTransition* self, QTimerEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_TimerEvent_IsBase(true);
        vqkeyeventtransition->timerEvent(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnTimerEvent(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_TimerEvent_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEventTransition_ChildEvent(QKeyEventTransition* self, QChildEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->childEvent(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperChildEvent(QKeyEventTransition* self, QChildEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_ChildEvent_IsBase(true);
        vqkeyeventtransition->childEvent(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnChildEvent(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_ChildEvent_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEventTransition_CustomEvent(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->customEvent(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperCustomEvent(QKeyEventTransition* self, QEvent* event) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_CustomEvent_IsBase(true);
        vqkeyeventtransition->customEvent(event);
    } else {
        ((VirtualQKeyEventTransition*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnCustomEvent(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_CustomEvent_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEventTransition_ConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->connectNotify(*signal);
    } else {
        ((VirtualQKeyEventTransition*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperConnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_ConnectNotify_IsBase(true);
        vqkeyeventtransition->connectNotify(*signal);
    } else {
        ((VirtualQKeyEventTransition*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnConnectNotify(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_ConnectNotify_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeyEventTransition_DisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->disconnectNotify(*signal);
    } else {
        ((VirtualQKeyEventTransition*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QKeyEventTransition_SuperDisconnectNotify(QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_DisconnectNotify_IsBase(true);
        vqkeyeventtransition->disconnectNotify(*signal);
    } else {
        ((VirtualQKeyEventTransition*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnDisconnectNotify(QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = dynamic_cast<VirtualQKeyEventTransition*>(self);
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_DisconnectNotify_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QKeyEventTransition_Sender(const QKeyEventTransition* self) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->sender();
    } else {
        return ((VirtualQKeyEventTransition*)self)->sender();
    }
}

// Base class handler implementation
QObject* QKeyEventTransition_SuperSender(const QKeyEventTransition* self) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Sender_IsBase(true);
        return vqkeyeventtransition->sender();
    } else {
        return ((VirtualQKeyEventTransition*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnSender(const QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Sender_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeyEventTransition_SenderSignalIndex(const QKeyEventTransition* self) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->senderSignalIndex();
    } else {
        return ((VirtualQKeyEventTransition*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QKeyEventTransition_SuperSenderSignalIndex(const QKeyEventTransition* self) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_SenderSignalIndex_IsBase(true);
        return vqkeyeventtransition->senderSignalIndex();
    } else {
        return ((VirtualQKeyEventTransition*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnSenderSignalIndex(const QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_SenderSignalIndex_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeyEventTransition_Receivers(const QKeyEventTransition* self, const char* signal) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->receivers(signal);
    } else {
        return ((VirtualQKeyEventTransition*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QKeyEventTransition_SuperReceivers(const QKeyEventTransition* self, const char* signal) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Receivers_IsBase(true);
        return vqkeyeventtransition->receivers(signal);
    } else {
        return ((VirtualQKeyEventTransition*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnReceivers(const QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_Receivers_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeyEventTransition_IsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        return vqkeyeventtransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeyEventTransition*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QKeyEventTransition_SuperIsSignalConnected(const QKeyEventTransition* self, const QMetaMethod* signal) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_IsSignalConnected_IsBase(true);
        return vqkeyeventtransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeyEventTransition*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeyEventTransition_OnIsSignalConnected(const QKeyEventTransition* self, intptr_t slot) {
    auto* vqkeyeventtransition = const_cast<VirtualQKeyEventTransition*>(dynamic_cast<const VirtualQKeyEventTransition*>(self));
    if (vqkeyeventtransition && vqkeyeventtransition->isVirtualQKeyEventTransition) {
        vqkeyeventtransition->setQKeyEventTransition_IsSignalConnected_Callback(reinterpret_cast<VirtualQKeyEventTransition::QKeyEventTransition_IsSignalConnected_Callback>(slot));
    }
}

void QKeyEventTransition_Delete(QKeyEventTransition* self) {
    delete self;
}
