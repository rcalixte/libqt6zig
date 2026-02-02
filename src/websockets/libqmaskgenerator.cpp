#include <QChildEvent>
#include <QEvent>
#include <QMaskGenerator>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QTimerEvent>
#include <qmaskgenerator.h>
#include "libqmaskgenerator.h"
#include "libqmaskgenerator.hxx"

QMaskGenerator* QMaskGenerator_new() {
    return new VirtualQMaskGenerator();
}

QMaskGenerator* QMaskGenerator_new2(QObject* parent) {
    return new VirtualQMaskGenerator(parent);
}

bool QMaskGenerator_Seed(QMaskGenerator* self) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->seed();
    } else {
        return ((VirtualQMaskGenerator*)self)->seed();
    }
}

unsigned int QMaskGenerator_NextMask(QMaskGenerator* self) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return static_cast<unsigned int>(vqmaskgenerator->nextMask());
    } else {
        return static_cast<unsigned int>(((VirtualQMaskGenerator*)self)->nextMask());
    }
}

// Base class handler implementation
bool QMaskGenerator_QBaseSeed(QMaskGenerator* self) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Seed_IsBase(true);
        return vqmaskgenerator->seed();
    } else {
        return ((VirtualQMaskGenerator*)self)->seed();
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnSeed(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Seed_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Seed_Callback>(slot));
    }
}

// Base class handler implementation
unsigned int QMaskGenerator_QBaseNextMask(QMaskGenerator* self) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_NextMask_IsBase(true);
        return static_cast<unsigned int>(vqmaskgenerator->nextMask());
    } else {
        return static_cast<unsigned int>(((VirtualQMaskGenerator*)self)->nextMask());
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnNextMask(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_NextMask_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_NextMask_Callback>(slot));
    }
}

// Derived class handler implementation
QMetaObject* QMaskGenerator_MetaObject(const QMaskGenerator* self) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return (QMetaObject*)vqmaskgenerator->metaObject();
    } else {
        return (QMetaObject*)self->QMaskGenerator::metaObject();
    }
}

// Base class handler implementation
QMetaObject* QMaskGenerator_QBaseMetaObject(const QMaskGenerator* self) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_MetaObject_IsBase(true);
        return (QMetaObject*)vqmaskgenerator->metaObject();
    } else {
        return (QMetaObject*)self->QMaskGenerator::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnMetaObject(const QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_MetaObject_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_MetaObject_Callback>(slot));
    }
}

// Derived class handler implementation
void* QMaskGenerator_Metacast(QMaskGenerator* self, const char* param1) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->qt_metacast(param1);
    } else {
        return self->QMaskGenerator::qt_metacast(param1);
    }
}

// Base class handler implementation
void* QMaskGenerator_QBaseMetacast(QMaskGenerator* self, const char* param1) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Metacast_IsBase(true);
        return vqmaskgenerator->qt_metacast(param1);
    } else {
        return self->QMaskGenerator::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnMetacast(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Metacast_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Metacast_Callback>(slot));
    }
}

// Derived class handler implementation
int QMaskGenerator_Metacall(QMaskGenerator* self, int param1, int param2, void** param3) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QMaskGenerator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int QMaskGenerator_QBaseMetacall(QMaskGenerator* self, int param1, int param2, void** param3) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Metacall_IsBase(true);
        return vqmaskgenerator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QMaskGenerator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnMetacall(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Metacall_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMaskGenerator_Event(QMaskGenerator* self, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->event(event);
    } else {
        return self->QMaskGenerator::event(event);
    }
}

// Base class handler implementation
bool QMaskGenerator_QBaseEvent(QMaskGenerator* self, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Event_IsBase(true);
        return vqmaskgenerator->event(event);
    } else {
        return self->QMaskGenerator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnEvent(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Event_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMaskGenerator_EventFilter(QMaskGenerator* self, QObject* watched, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->eventFilter(watched, event);
    } else {
        return self->QMaskGenerator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMaskGenerator_QBaseEventFilter(QMaskGenerator* self, QObject* watched, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_EventFilter_IsBase(true);
        return vqmaskgenerator->eventFilter(watched, event);
    } else {
        return self->QMaskGenerator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnEventFilter(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_EventFilter_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMaskGenerator_TimerEvent(QMaskGenerator* self, QTimerEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->timerEvent(event);
    } else {
        ((VirtualQMaskGenerator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMaskGenerator_QBaseTimerEvent(QMaskGenerator* self, QTimerEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_TimerEvent_IsBase(true);
        vqmaskgenerator->timerEvent(event);
    } else {
        ((VirtualQMaskGenerator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnTimerEvent(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_TimerEvent_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMaskGenerator_ChildEvent(QMaskGenerator* self, QChildEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->childEvent(event);
    } else {
        ((VirtualQMaskGenerator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMaskGenerator_QBaseChildEvent(QMaskGenerator* self, QChildEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_ChildEvent_IsBase(true);
        vqmaskgenerator->childEvent(event);
    } else {
        ((VirtualQMaskGenerator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnChildEvent(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_ChildEvent_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMaskGenerator_CustomEvent(QMaskGenerator* self, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->customEvent(event);
    } else {
        ((VirtualQMaskGenerator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMaskGenerator_QBaseCustomEvent(QMaskGenerator* self, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_CustomEvent_IsBase(true);
        vqmaskgenerator->customEvent(event);
    } else {
        ((VirtualQMaskGenerator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnCustomEvent(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_CustomEvent_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMaskGenerator_ConnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->connectNotify(*signal);
    } else {
        ((VirtualQMaskGenerator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMaskGenerator_QBaseConnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_ConnectNotify_IsBase(true);
        vqmaskgenerator->connectNotify(*signal);
    } else {
        ((VirtualQMaskGenerator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnConnectNotify(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_ConnectNotify_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMaskGenerator_DisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->disconnectNotify(*signal);
    } else {
        ((VirtualQMaskGenerator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMaskGenerator_QBaseDisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_DisconnectNotify_IsBase(true);
        vqmaskgenerator->disconnectNotify(*signal);
    } else {
        ((VirtualQMaskGenerator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnDisconnectNotify(QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_DisconnectNotify_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMaskGenerator_Sender(const QMaskGenerator* self) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->sender();
    } else {
        return ((VirtualQMaskGenerator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMaskGenerator_QBaseSender(const QMaskGenerator* self) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Sender_IsBase(true);
        return vqmaskgenerator->sender();
    } else {
        return ((VirtualQMaskGenerator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnSender(const QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Sender_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMaskGenerator_SenderSignalIndex(const QMaskGenerator* self) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->senderSignalIndex();
    } else {
        return ((VirtualQMaskGenerator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMaskGenerator_QBaseSenderSignalIndex(const QMaskGenerator* self) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_SenderSignalIndex_IsBase(true);
        return vqmaskgenerator->senderSignalIndex();
    } else {
        return ((VirtualQMaskGenerator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnSenderSignalIndex(const QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMaskGenerator_Receivers(const QMaskGenerator* self, const char* signal) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->receivers(signal);
    } else {
        return ((VirtualQMaskGenerator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMaskGenerator_QBaseReceivers(const QMaskGenerator* self, const char* signal) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Receivers_IsBase(true);
        return vqmaskgenerator->receivers(signal);
    } else {
        return ((VirtualQMaskGenerator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnReceivers(const QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_Receivers_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMaskGenerator_IsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        return vqmaskgenerator->isSignalConnected(*signal);
    } else {
        return ((VirtualQMaskGenerator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMaskGenerator_QBaseIsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_IsSignalConnected_IsBase(true);
        return vqmaskgenerator->isSignalConnected(*signal);
    } else {
        return ((VirtualQMaskGenerator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnIsSignalConnected(const QMaskGenerator* self, intptr_t slot) {
    auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self));
    if (vqmaskgenerator && vqmaskgenerator->isVirtualQMaskGenerator) {
        vqmaskgenerator->setQMaskGenerator_IsSignalConnected_Callback(reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_IsSignalConnected_Callback>(slot));
    }
}

void QMaskGenerator_Delete(QMaskGenerator* self) {
    delete self;
}
