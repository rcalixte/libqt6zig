#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieLegendMarker>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpielegendmarker.h>
#include "libqpielegendmarker.h"
#include "libqpielegendmarker.hxx"

QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend) {
    return new VirtualQPieLegendMarker(series, slice, legend);
}

QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent) {
    return new VirtualQPieLegendMarker(series, slice, legend, parent);
}

QMetaObject* QPieLegendMarker_MetaObject(const QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<const VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPieLegendMarker*)self)->metaObject();
    }
}

void* QPieLegendMarker_Metacast(QPieLegendMarker* self, const char* param1) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPieLegendMarker*)self)->qt_metacast(param1);
    }
}

int QPieLegendMarker_Metacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QPieLegendMarker_Type(QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPieLegendMarker*)self)->type());
    }
}

QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return self->series();
    } else {
        return ((VirtualQPieLegendMarker*)self)->series();
    }
}

QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self) {
    return self->slice();
}

// Base class handler implementation
QMetaObject* QPieLegendMarker_SuperMetaObject(const QPieLegendMarker* self) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_MetaObject_IsBase(true);
        return (QMetaObject*)vqpielegendmarker->metaObject();
    } else {
        return (QMetaObject*)self->QPieLegendMarker::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnMetaObject(const QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_MetaObject_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPieLegendMarker_SuperMetacast(QPieLegendMarker* self, const char* param1) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Metacast_IsBase(true);
        return vqpielegendmarker->qt_metacast(param1);
    } else {
        return self->QPieLegendMarker::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnMetacast(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Metacast_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPieLegendMarker_SuperMetacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Metacall_IsBase(true);
        return vqpielegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPieLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnMetacall(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPieLegendMarker_SuperType(QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqpielegendmarker->type());
    } else {
        return static_cast<int>(self->QPieLegendMarker::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Type_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Type_Callback>(slot));
    }
}

// Base class handler implementation
QPieSeries* QPieLegendMarker_SuperSeries(QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Series_IsBase(true);
        return vqpielegendmarker->series();
    } else {
        return self->QPieLegendMarker::series();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Series_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieLegendMarker_Event(QPieLegendMarker* self, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->event(event);
    } else {
        return self->QPieLegendMarker::event(event);
    }
}

// Base class handler implementation
bool QPieLegendMarker_SuperEvent(QPieLegendMarker* self, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Event_IsBase(true);
        return vqpielegendmarker->event(event);
    } else {
        return self->QPieLegendMarker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnEvent(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Event_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieLegendMarker_EventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->eventFilter(watched, event);
    } else {
        return self->QPieLegendMarker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPieLegendMarker_SuperEventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_EventFilter_IsBase(true);
        return vqpielegendmarker->eventFilter(watched, event);
    } else {
        return self->QPieLegendMarker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnEventFilter(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_TimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->timerEvent(event);
    } else {
        ((VirtualQPieLegendMarker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperTimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_TimerEvent_IsBase(true);
        vqpielegendmarker->timerEvent(event);
    } else {
        ((VirtualQPieLegendMarker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnTimerEvent(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_ChildEvent(QPieLegendMarker* self, QChildEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->childEvent(event);
    } else {
        ((VirtualQPieLegendMarker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperChildEvent(QPieLegendMarker* self, QChildEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_ChildEvent_IsBase(true);
        vqpielegendmarker->childEvent(event);
    } else {
        ((VirtualQPieLegendMarker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnChildEvent(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_CustomEvent(QPieLegendMarker* self, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->customEvent(event);
    } else {
        ((VirtualQPieLegendMarker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperCustomEvent(QPieLegendMarker* self, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_CustomEvent_IsBase(true);
        vqpielegendmarker->customEvent(event);
    } else {
        ((VirtualQPieLegendMarker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnCustomEvent(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_ConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQPieLegendMarker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_ConnectNotify_IsBase(true);
        vqpielegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQPieLegendMarker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnConnectNotify(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_DisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQPieLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_DisconnectNotify_IsBase(true);
        vqpielegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQPieLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnDisconnectNotify(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPieLegendMarker_Sender(const QPieLegendMarker* self) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->sender();
    } else {
        return ((VirtualQPieLegendMarker*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPieLegendMarker_SuperSender(const QPieLegendMarker* self) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Sender_IsBase(true);
        return vqpielegendmarker->sender();
    } else {
        return ((VirtualQPieLegendMarker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSender(const QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Sender_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieLegendMarker_SenderSignalIndex(const QPieLegendMarker* self) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQPieLegendMarker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPieLegendMarker_SuperSenderSignalIndex(const QPieLegendMarker* self) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_SenderSignalIndex_IsBase(true);
        return vqpielegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQPieLegendMarker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSenderSignalIndex(const QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieLegendMarker_Receivers(const QPieLegendMarker* self, const char* signal) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->receivers(signal);
    } else {
        return ((VirtualQPieLegendMarker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPieLegendMarker_SuperReceivers(const QPieLegendMarker* self, const char* signal) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Receivers_IsBase(true);
        return vqpielegendmarker->receivers(signal);
    } else {
        return ((VirtualQPieLegendMarker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnReceivers(const QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieLegendMarker_IsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQPieLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPieLegendMarker_SuperIsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_IsSignalConnected_IsBase(true);
        return vqpielegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQPieLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnIsSignalConnected(const QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self));
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QPieLegendMarker_Delete(QPieLegendMarker* self) {
    delete self;
}
