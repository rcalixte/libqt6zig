#include <QAbstractBarSeries>
#include <QBarLegendMarker>
#include <QBarSet>
#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbarlegendmarker.h>
#include "libqbarlegendmarker.h"
#include "libqbarlegendmarker.hxx"

QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend) {
    return new VirtualQBarLegendMarker(series, barset, legend);
}

QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent) {
    return new VirtualQBarLegendMarker(series, barset, legend, parent);
}

QMetaObject* QBarLegendMarker_MetaObject(const QBarLegendMarker* self) {
    auto* vqbarlegendmarker = dynamic_cast<const VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBarLegendMarker*)self)->metaObject();
    }
}

void* QBarLegendMarker_Metacast(QBarLegendMarker* self, const char* param1) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBarLegendMarker*)self)->qt_metacast(param1);
    }
}

int QBarLegendMarker_Metacall(QBarLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBarLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QBarLegendMarker_Type(QBarLegendMarker* self) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQBarLegendMarker*)self)->type());
    }
}

QAbstractBarSeries* QBarLegendMarker_Series(QBarLegendMarker* self) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return self->series();
    } else {
        return ((VirtualQBarLegendMarker*)self)->series();
    }
}

QBarSet* QBarLegendMarker_Barset(QBarLegendMarker* self) {
    return self->barset();
}

// Base class handler implementation
QMetaObject* QBarLegendMarker_SuperMetaObject(const QBarLegendMarker* self) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_MetaObject_IsBase(true);
        return (QMetaObject*)vqbarlegendmarker->metaObject();
    } else {
        return (QMetaObject*)self->QBarLegendMarker::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnMetaObject(const QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_MetaObject_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBarLegendMarker_SuperMetacast(QBarLegendMarker* self, const char* param1) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Metacast_IsBase(true);
        return vqbarlegendmarker->qt_metacast(param1);
    } else {
        return self->QBarLegendMarker::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnMetacast(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Metacast_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBarLegendMarker_SuperMetacall(QBarLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Metacall_IsBase(true);
        return vqbarlegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBarLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnMetacall(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QBarLegendMarker_SuperType(QBarLegendMarker* self) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqbarlegendmarker->type());
    } else {
        return static_cast<int>(self->QBarLegendMarker::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnType(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Type_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Type_Callback>(slot));
    }
}

// Base class handler implementation
QAbstractBarSeries* QBarLegendMarker_SuperSeries(QBarLegendMarker* self) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Series_IsBase(true);
        return vqbarlegendmarker->series();
    } else {
        return self->QBarLegendMarker::series();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSeries(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Series_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarLegendMarker_Event(QBarLegendMarker* self, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return vqbarlegendmarker->event(event);
    } else {
        return self->QBarLegendMarker::event(event);
    }
}

// Base class handler implementation
bool QBarLegendMarker_SuperEvent(QBarLegendMarker* self, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Event_IsBase(true);
        return vqbarlegendmarker->event(event);
    } else {
        return self->QBarLegendMarker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnEvent(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Event_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarLegendMarker_EventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return vqbarlegendmarker->eventFilter(watched, event);
    } else {
        return self->QBarLegendMarker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBarLegendMarker_SuperEventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_EventFilter_IsBase(true);
        return vqbarlegendmarker->eventFilter(watched, event);
    } else {
        return self->QBarLegendMarker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnEventFilter(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_TimerEvent(QBarLegendMarker* self, QTimerEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->timerEvent(event);
    } else {
        ((VirtualQBarLegendMarker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperTimerEvent(QBarLegendMarker* self, QTimerEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_TimerEvent_IsBase(true);
        vqbarlegendmarker->timerEvent(event);
    } else {
        ((VirtualQBarLegendMarker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnTimerEvent(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_ChildEvent(QBarLegendMarker* self, QChildEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->childEvent(event);
    } else {
        ((VirtualQBarLegendMarker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperChildEvent(QBarLegendMarker* self, QChildEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_ChildEvent_IsBase(true);
        vqbarlegendmarker->childEvent(event);
    } else {
        ((VirtualQBarLegendMarker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnChildEvent(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_CustomEvent(QBarLegendMarker* self, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->customEvent(event);
    } else {
        ((VirtualQBarLegendMarker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperCustomEvent(QBarLegendMarker* self, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_CustomEvent_IsBase(true);
        vqbarlegendmarker->customEvent(event);
    } else {
        ((VirtualQBarLegendMarker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnCustomEvent(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_ConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQBarLegendMarker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_ConnectNotify_IsBase(true);
        vqbarlegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQBarLegendMarker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnConnectNotify(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_DisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQBarLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperDisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_DisconnectNotify_IsBase(true);
        vqbarlegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQBarLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnDisconnectNotify(QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBarLegendMarker_Sender(const QBarLegendMarker* self) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return vqbarlegendmarker->sender();
    } else {
        return ((VirtualQBarLegendMarker*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBarLegendMarker_SuperSender(const QBarLegendMarker* self) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Sender_IsBase(true);
        return vqbarlegendmarker->sender();
    } else {
        return ((VirtualQBarLegendMarker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSender(const QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Sender_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarLegendMarker_SenderSignalIndex(const QBarLegendMarker* self) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return vqbarlegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQBarLegendMarker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBarLegendMarker_SuperSenderSignalIndex(const QBarLegendMarker* self) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_SenderSignalIndex_IsBase(true);
        return vqbarlegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQBarLegendMarker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSenderSignalIndex(const QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarLegendMarker_Receivers(const QBarLegendMarker* self, const char* signal) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return vqbarlegendmarker->receivers(signal);
    } else {
        return ((VirtualQBarLegendMarker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBarLegendMarker_SuperReceivers(const QBarLegendMarker* self, const char* signal) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Receivers_IsBase(true);
        return vqbarlegendmarker->receivers(signal);
    } else {
        return ((VirtualQBarLegendMarker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnReceivers(const QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarLegendMarker_IsSignalConnected(const QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        return vqbarlegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQBarLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBarLegendMarker_SuperIsSignalConnected(const QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_IsSignalConnected_IsBase(true);
        return vqbarlegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQBarLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnIsSignalConnected(const QBarLegendMarker* self, intptr_t slot) {
    auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self));
    if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
        vqbarlegendmarker->setQBarLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QBarLegendMarker_Delete(QBarLegendMarker* self) {
    delete self;
}
