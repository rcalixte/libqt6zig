#include <QAbstractTransition>
#include <QChildEvent>
#include <QEvent>
#include <QEventTransition>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEventTransition>
#include <QObject>
#include <QPainterPath>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmouseeventtransition.h>
#include "libqmouseeventtransition.h"
#include "libqmouseeventtransition.hxx"

QMouseEventTransition* QMouseEventTransition_new() {
    return new VirtualQMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QObject* object, int typeVal, int button) {
    return new VirtualQMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button));
}

QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState) {
    return new VirtualQMouseEventTransition(sourceState);
}

QMouseEventTransition* QMouseEventTransition_new4(QObject* object, int typeVal, int button, QState* sourceState) {
    return new VirtualQMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button), sourceState);
}

QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self) {
    auto* vqmouseeventtransition = dynamic_cast<const VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQMouseEventTransition*)self)->metaObject();
    }
}

void* QMouseEventTransition_Metacast(QMouseEventTransition* self, const char* param1) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQMouseEventTransition*)self)->qt_metacast(param1);
    }
}

int QMouseEventTransition_Metacall(QMouseEventTransition* self, int param1, int param2, void** param3) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMouseEventTransition*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QMouseEventTransition_Button(const QMouseEventTransition* self) {
    return static_cast<int>(self->button());
}

void QMouseEventTransition_SetButton(QMouseEventTransition* self, int button) {
    self->setButton(static_cast<Qt::MouseButton>(button));
}

int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self) {
    return static_cast<int>(self->modifierMask());
}

void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers) {
    self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self) {
    return new QPainterPath(self->hitTestPath());
}

void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, const QPainterPath* path) {
    self->setHitTestPath(*path);
}

void QMouseEventTransition_OnTransition(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->onTransition(event);
    }
}

bool QMouseEventTransition_EventTest(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->eventTest(event);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QMouseEventTransition_QBaseMetaObject(const QMouseEventTransition* self) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_MetaObject_IsBase(true);
        return (QMetaObject*)vqmouseeventtransition->metaObject();
    } else {
        return (QMetaObject*)self->QMouseEventTransition::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnMetaObject(const QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_MetaObject_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QMouseEventTransition_QBaseMetacast(QMouseEventTransition* self, const char* param1) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Metacast_IsBase(true);
        return vqmouseeventtransition->qt_metacast(param1);
    } else {
        return self->QMouseEventTransition::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnMetacast(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Metacast_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QMouseEventTransition_QBaseMetacall(QMouseEventTransition* self, int param1, int param2, void** param3) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Metacall_IsBase(true);
        return vqmouseeventtransition->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QMouseEventTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnMetacall(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Metacall_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QMouseEventTransition_QBaseOnTransition(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_OnTransition_IsBase(true);
        vqmouseeventtransition->onTransition(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->onTransition(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnOnTransition(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_OnTransition_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_OnTransition_Callback>(slot));
    }
}

// Base class handler implementation
bool QMouseEventTransition_QBaseEventTest(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_EventTest_IsBase(true);
        return vqmouseeventtransition->eventTest(event);
    } else {
        return ((VirtualQMouseEventTransition*)self)->eventTest(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnEventTest(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_EventTest_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_EventTest_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEventTransition_Event(QMouseEventTransition* self, QEvent* e) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->event(e);
    } else {
        return ((VirtualQMouseEventTransition*)self)->event(e);
    }
}

// Base class handler implementation
bool QMouseEventTransition_QBaseEvent(QMouseEventTransition* self, QEvent* e) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Event_IsBase(true);
        return vqmouseeventtransition->event(e);
    } else {
        return ((VirtualQMouseEventTransition*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnEvent(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Event_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEventTransition_EventFilter(QMouseEventTransition* self, QObject* watched, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->eventFilter(watched, event);
    } else {
        return self->QMouseEventTransition::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMouseEventTransition_QBaseEventFilter(QMouseEventTransition* self, QObject* watched, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_EventFilter_IsBase(true);
        return vqmouseeventtransition->eventFilter(watched, event);
    } else {
        return self->QMouseEventTransition::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnEventFilter(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_EventFilter_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEventTransition_TimerEvent(QMouseEventTransition* self, QTimerEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->timerEvent(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMouseEventTransition_QBaseTimerEvent(QMouseEventTransition* self, QTimerEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_TimerEvent_IsBase(true);
        vqmouseeventtransition->timerEvent(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnTimerEvent(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_TimerEvent_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEventTransition_ChildEvent(QMouseEventTransition* self, QChildEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->childEvent(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMouseEventTransition_QBaseChildEvent(QMouseEventTransition* self, QChildEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_ChildEvent_IsBase(true);
        vqmouseeventtransition->childEvent(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnChildEvent(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_ChildEvent_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEventTransition_CustomEvent(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->customEvent(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMouseEventTransition_QBaseCustomEvent(QMouseEventTransition* self, QEvent* event) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_CustomEvent_IsBase(true);
        vqmouseeventtransition->customEvent(event);
    } else {
        ((VirtualQMouseEventTransition*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnCustomEvent(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_CustomEvent_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEventTransition_ConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->connectNotify(*signal);
    } else {
        ((VirtualQMouseEventTransition*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMouseEventTransition_QBaseConnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_ConnectNotify_IsBase(true);
        vqmouseeventtransition->connectNotify(*signal);
    } else {
        ((VirtualQMouseEventTransition*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnConnectNotify(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_ConnectNotify_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMouseEventTransition_DisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->disconnectNotify(*signal);
    } else {
        ((VirtualQMouseEventTransition*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMouseEventTransition_QBaseDisconnectNotify(QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_DisconnectNotify_IsBase(true);
        vqmouseeventtransition->disconnectNotify(*signal);
    } else {
        ((VirtualQMouseEventTransition*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnDisconnectNotify(QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = dynamic_cast<VirtualQMouseEventTransition*>(self);
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_DisconnectNotify_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMouseEventTransition_Sender(const QMouseEventTransition* self) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->sender();
    } else {
        return ((VirtualQMouseEventTransition*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMouseEventTransition_QBaseSender(const QMouseEventTransition* self) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Sender_IsBase(true);
        return vqmouseeventtransition->sender();
    } else {
        return ((VirtualQMouseEventTransition*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnSender(const QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Sender_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMouseEventTransition_SenderSignalIndex(const QMouseEventTransition* self) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->senderSignalIndex();
    } else {
        return ((VirtualQMouseEventTransition*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMouseEventTransition_QBaseSenderSignalIndex(const QMouseEventTransition* self) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_SenderSignalIndex_IsBase(true);
        return vqmouseeventtransition->senderSignalIndex();
    } else {
        return ((VirtualQMouseEventTransition*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnSenderSignalIndex(const QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMouseEventTransition_Receivers(const QMouseEventTransition* self, const char* signal) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->receivers(signal);
    } else {
        return ((VirtualQMouseEventTransition*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMouseEventTransition_QBaseReceivers(const QMouseEventTransition* self, const char* signal) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Receivers_IsBase(true);
        return vqmouseeventtransition->receivers(signal);
    } else {
        return ((VirtualQMouseEventTransition*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnReceivers(const QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_Receivers_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMouseEventTransition_IsSignalConnected(const QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        return vqmouseeventtransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQMouseEventTransition*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMouseEventTransition_QBaseIsSignalConnected(const QMouseEventTransition* self, const QMetaMethod* signal) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_IsSignalConnected_IsBase(true);
        return vqmouseeventtransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQMouseEventTransition*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMouseEventTransition_OnIsSignalConnected(const QMouseEventTransition* self, intptr_t slot) {
    auto* vqmouseeventtransition = const_cast<VirtualQMouseEventTransition*>(dynamic_cast<const VirtualQMouseEventTransition*>(self));
    if (vqmouseeventtransition && vqmouseeventtransition->isVirtualQMouseEventTransition) {
        vqmouseeventtransition->setQMouseEventTransition_IsSignalConnected_Callback(reinterpret_cast<VirtualQMouseEventTransition::QMouseEventTransition_IsSignalConnected_Callback>(slot));
    }
}

void QMouseEventTransition_Delete(QMouseEventTransition* self) {
    delete self;
}
