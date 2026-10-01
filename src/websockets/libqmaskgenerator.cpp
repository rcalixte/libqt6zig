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
    return self->seed();
}

unsigned int QMaskGenerator_NextMask(QMaskGenerator* self) {
    return static_cast<unsigned int>(self->nextMask());
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnSeed(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_seed_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Seed_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnNextMask(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_nextmask_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_NextMask_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* QMaskGenerator_MetaObject(const QMaskGenerator* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* QMaskGenerator_SuperMetaObject(const QMaskGenerator* self) {
    return (QMetaObject*)self->QMaskGenerator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnMetaObject(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self)))
        vqmaskgenerator->qmaskgenerator_metaobject_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* QMaskGenerator_Metacast(QMaskGenerator* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* QMaskGenerator_SuperMetacast(QMaskGenerator* self, const char* param1) {
    return self->QMaskGenerator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnMetacast(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_metacast_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Metacast_Callback>(slot);
}

// Derived class handler implementation
int QMaskGenerator_Metacall(QMaskGenerator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int QMaskGenerator_SuperMetacall(QMaskGenerator* self, int param1, int param2, void** param3) {
    return self->QMaskGenerator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnMetacall(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_metacall_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QMaskGenerator_Event(QMaskGenerator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QMaskGenerator_SuperEvent(QMaskGenerator* self, QEvent* event) {
    return self->QMaskGenerator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnEvent(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_event_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QMaskGenerator_EventFilter(QMaskGenerator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMaskGenerator_SuperEventFilter(QMaskGenerator* self, QObject* watched, QEvent* event) {
    return self->QMaskGenerator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnEventFilter(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_eventfilter_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMaskGenerator_TimerEvent(QMaskGenerator* self, QTimerEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator) {
        vqmaskgenerator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMaskGenerator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMaskGenerator_SuperTimerEvent(QMaskGenerator* self, QTimerEvent* event) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self)) {
        vqmaskgenerator->QMaskGenerator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMaskGenerator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnTimerEvent(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_timerevent_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMaskGenerator_ChildEvent(QMaskGenerator* self, QChildEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator) {
        vqmaskgenerator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMaskGenerator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMaskGenerator_SuperChildEvent(QMaskGenerator* self, QChildEvent* event) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self)) {
        vqmaskgenerator->QMaskGenerator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMaskGenerator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnChildEvent(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_childevent_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMaskGenerator_CustomEvent(QMaskGenerator* self, QEvent* event) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator) {
        vqmaskgenerator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMaskGenerator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMaskGenerator_SuperCustomEvent(QMaskGenerator* self, QEvent* event) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self)) {
        vqmaskgenerator->QMaskGenerator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMaskGenerator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnCustomEvent(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_customevent_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMaskGenerator_ConnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator) {
        vqmaskgenerator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMaskGenerator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMaskGenerator_SuperConnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self)) {
        vqmaskgenerator->QMaskGenerator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMaskGenerator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnConnectNotify(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_connectnotify_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMaskGenerator_DisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self);
    if (vqmaskgenerator) {
        vqmaskgenerator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMaskGenerator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMaskGenerator_SuperDisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self)) {
        vqmaskgenerator->QMaskGenerator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMaskGenerator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMaskGenerator_OnDisconnectNotify(QMaskGenerator* self, intptr_t slot) {
    if (auto* vqmaskgenerator = dynamic_cast<VirtualQMaskGenerator*>(self))
        vqmaskgenerator->qmaskgenerator_disconnectnotify_callback = reinterpret_cast<VirtualQMaskGenerator::QMaskGenerator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QMaskGenerator_Sender(const QMaskGenerator* self) {
    if (auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self))) {
        return vqmaskgenerator->VirtualQMaskGenerator::sender();
    } else
        qFatal("Error: Protected method QMaskGenerator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMaskGenerator_SenderSignalIndex(const QMaskGenerator* self) {
    if (auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self))) {
        return vqmaskgenerator->VirtualQMaskGenerator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMaskGenerator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMaskGenerator_Receivers(const QMaskGenerator* self, const char* signal) {
    if (auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self))) {
        return vqmaskgenerator->VirtualQMaskGenerator::receivers(signal);
    } else
        qFatal("Error: Protected method QMaskGenerator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMaskGenerator_IsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal) {
    if (auto* vqmaskgenerator = const_cast<VirtualQMaskGenerator*>(dynamic_cast<const VirtualQMaskGenerator*>(self))) {
        return vqmaskgenerator->VirtualQMaskGenerator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMaskGenerator::isSignalConnected called without a directly constructed type");
}

void QMaskGenerator_Delete(QMaskGenerator* self) {
    delete self;
}
