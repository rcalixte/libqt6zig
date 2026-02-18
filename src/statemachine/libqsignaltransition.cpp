#include <QAbstractTransition>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsignaltransition.h>
#include "libqsignaltransition.h"
#include "libqsignaltransition.hxx"

QSignalTransition* QSignalTransition_new() {
    return new VirtualQSignalTransition();
}

QSignalTransition* QSignalTransition_new2(const QObject* sender, const char* signal) {
    return new VirtualQSignalTransition(sender, signal);
}

QSignalTransition* QSignalTransition_new3(QState* sourceState) {
    return new VirtualQSignalTransition(sourceState);
}

QSignalTransition* QSignalTransition_new4(const QObject* sender, const char* signal, QState* sourceState) {
    return new VirtualQSignalTransition(sender, signal, sourceState);
}

QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self) {
    auto* vqsignaltransition = dynamic_cast<const VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQSignalTransition*)self)->metaObject();
    }
}

void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQSignalTransition*)self)->qt_metacast(param1);
    }
}

int QSignalTransition_Metacall(QSignalTransition* self, int param1, int param2, void** param3) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSignalTransition*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QObject* QSignalTransition_SenderObject(const QSignalTransition* self) {
    return (QObject*)self->senderObject();
}

void QSignalTransition_SetSenderObject(QSignalTransition* self, const QObject* sender) {
    self->setSenderObject(sender);
}

libqt_string QSignalTransition_Signal(const QSignalTransition* self) {
    QByteArray _qb = self->signal();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QSignalTransition_SetSignal(QSignalTransition* self, const libqt_string signal) {
    QByteArray signal_QByteArray(signal.data, signal.len);
    self->setSignal(signal_QByteArray);
}

bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->eventTest(event);
    }
    return {};
}

void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->onTransition(event);
    }
}

bool QSignalTransition_Event(QSignalTransition* self, QEvent* e) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->event(e);
    }
    return {};
}

// Base class handler implementation
QMetaObject* QSignalTransition_QBaseMetaObject(const QSignalTransition* self) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_MetaObject_IsBase(true);
        return (QMetaObject*)vqsignaltransition->metaObject();
    } else {
        return (QMetaObject*)self->QSignalTransition::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnMetaObject(const QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_MetaObject_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QSignalTransition_QBaseMetacast(QSignalTransition* self, const char* param1) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Metacast_IsBase(true);
        return vqsignaltransition->qt_metacast(param1);
    } else {
        return self->QSignalTransition::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnMetacast(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Metacast_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QSignalTransition_QBaseMetacall(QSignalTransition* self, int param1, int param2, void** param3) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Metacall_IsBase(true);
        return vqsignaltransition->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSignalTransition::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnMetacall(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Metacall_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QSignalTransition_QBaseEventTest(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_EventTest_IsBase(true);
        return vqsignaltransition->eventTest(event);
    } else {
        return ((VirtualQSignalTransition*)self)->eventTest(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnEventTest(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_EventTest_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_EventTest_Callback>(slot));
    }
}

// Base class handler implementation
void QSignalTransition_QBaseOnTransition(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_OnTransition_IsBase(true);
        vqsignaltransition->onTransition(event);
    } else {
        ((VirtualQSignalTransition*)self)->onTransition(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnOnTransition(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_OnTransition_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_OnTransition_Callback>(slot));
    }
}

// Base class handler implementation
bool QSignalTransition_QBaseEvent(QSignalTransition* self, QEvent* e) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Event_IsBase(true);
        return vqsignaltransition->event(e);
    } else {
        return ((VirtualQSignalTransition*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnEvent(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Event_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSignalTransition_EventFilter(QSignalTransition* self, QObject* watched, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->eventFilter(watched, event);
    } else {
        return self->QSignalTransition::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSignalTransition_QBaseEventFilter(QSignalTransition* self, QObject* watched, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_EventFilter_IsBase(true);
        return vqsignaltransition->eventFilter(watched, event);
    } else {
        return self->QSignalTransition::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnEventFilter(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_EventFilter_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalTransition_TimerEvent(QSignalTransition* self, QTimerEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->timerEvent(event);
    } else {
        ((VirtualQSignalTransition*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSignalTransition_QBaseTimerEvent(QSignalTransition* self, QTimerEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_TimerEvent_IsBase(true);
        vqsignaltransition->timerEvent(event);
    } else {
        ((VirtualQSignalTransition*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnTimerEvent(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_TimerEvent_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalTransition_ChildEvent(QSignalTransition* self, QChildEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->childEvent(event);
    } else {
        ((VirtualQSignalTransition*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSignalTransition_QBaseChildEvent(QSignalTransition* self, QChildEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_ChildEvent_IsBase(true);
        vqsignaltransition->childEvent(event);
    } else {
        ((VirtualQSignalTransition*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnChildEvent(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_ChildEvent_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalTransition_CustomEvent(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->customEvent(event);
    } else {
        ((VirtualQSignalTransition*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSignalTransition_QBaseCustomEvent(QSignalTransition* self, QEvent* event) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_CustomEvent_IsBase(true);
        vqsignaltransition->customEvent(event);
    } else {
        ((VirtualQSignalTransition*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnCustomEvent(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_CustomEvent_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalTransition_ConnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->connectNotify(*signal);
    } else {
        ((VirtualQSignalTransition*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSignalTransition_QBaseConnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_ConnectNotify_IsBase(true);
        vqsignaltransition->connectNotify(*signal);
    } else {
        ((VirtualQSignalTransition*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnConnectNotify(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_ConnectNotify_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSignalTransition_DisconnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->disconnectNotify(*signal);
    } else {
        ((VirtualQSignalTransition*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSignalTransition_QBaseDisconnectNotify(QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_DisconnectNotify_IsBase(true);
        vqsignaltransition->disconnectNotify(*signal);
    } else {
        ((VirtualQSignalTransition*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnDisconnectNotify(QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = dynamic_cast<VirtualQSignalTransition*>(self);
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_DisconnectNotify_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSignalTransition_Sender(const QSignalTransition* self) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->sender();
    } else {
        return ((VirtualQSignalTransition*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSignalTransition_QBaseSender(const QSignalTransition* self) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Sender_IsBase(true);
        return vqsignaltransition->sender();
    } else {
        return ((VirtualQSignalTransition*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnSender(const QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Sender_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSignalTransition_SenderSignalIndex(const QSignalTransition* self) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->senderSignalIndex();
    } else {
        return ((VirtualQSignalTransition*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSignalTransition_QBaseSenderSignalIndex(const QSignalTransition* self) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_SenderSignalIndex_IsBase(true);
        return vqsignaltransition->senderSignalIndex();
    } else {
        return ((VirtualQSignalTransition*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnSenderSignalIndex(const QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSignalTransition_Receivers(const QSignalTransition* self, const char* signal) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->receivers(signal);
    } else {
        return ((VirtualQSignalTransition*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSignalTransition_QBaseReceivers(const QSignalTransition* self, const char* signal) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Receivers_IsBase(true);
        return vqsignaltransition->receivers(signal);
    } else {
        return ((VirtualQSignalTransition*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnReceivers(const QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_Receivers_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSignalTransition_IsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        return vqsignaltransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQSignalTransition*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSignalTransition_QBaseIsSignalConnected(const QSignalTransition* self, const QMetaMethod* signal) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_IsSignalConnected_IsBase(true);
        return vqsignaltransition->isSignalConnected(*signal);
    } else {
        return ((VirtualQSignalTransition*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSignalTransition_OnIsSignalConnected(const QSignalTransition* self, intptr_t slot) {
    auto* vqsignaltransition = const_cast<VirtualQSignalTransition*>(dynamic_cast<const VirtualQSignalTransition*>(self));
    if (vqsignaltransition && vqsignaltransition->isVirtualQSignalTransition) {
        vqsignaltransition->setQSignalTransition_IsSignalConnected_Callback(reinterpret_cast<VirtualQSignalTransition::QSignalTransition_IsSignalConnected_Callback>(slot));
    }
}

void QSignalTransition_Connect_SenderObjectChanged(QSignalTransition* self, intptr_t slot) {
    void (*slotFunc)(QSignalTransition*) = reinterpret_cast<void (*)(QSignalTransition*)>(slot);
    QSignalTransition::connect(self, &QSignalTransition::senderObjectChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSignalTransition_Connect_SignalChanged(QSignalTransition* self, intptr_t slot) {
    void (*slotFunc)(QSignalTransition*) = reinterpret_cast<void (*)(QSignalTransition*)>(slot);
    QSignalTransition::connect(self, &QSignalTransition::signalChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSignalTransition_Delete(QSignalTransition* self) {
    delete self;
}
