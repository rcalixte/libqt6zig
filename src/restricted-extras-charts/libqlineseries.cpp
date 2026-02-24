#include <QAbstractSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QLineSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qlineseries.h>
#include "libqlineseries.h"
#include "libqlineseries.hxx"

QLineSeries* QLineSeries_new() {
    return new VirtualQLineSeries();
}

QLineSeries* QLineSeries_new2(QObject* parent) {
    return new VirtualQLineSeries(parent);
}

QMetaObject* QLineSeries_MetaObject(const QLineSeries* self) {
    auto* vqlineseries = dynamic_cast<const VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQLineSeries*)self)->metaObject();
    }
}

void* QLineSeries_Metacast(QLineSeries* self, const char* param1) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQLineSeries*)self)->qt_metacast(param1);
    }
}

int QLineSeries_Metacall(QLineSeries* self, int param1, int param2, void** param3) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLineSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QLineSeries_Type(const QLineSeries* self) {
    auto* vqlineseries = dynamic_cast<const VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQLineSeries*)self)->type());
    }
}

// Base class handler implementation
QMetaObject* QLineSeries_SuperMetaObject(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_MetaObject_IsBase(true);
        return (QMetaObject*)vqlineseries->metaObject();
    } else {
        return (QMetaObject*)self->QLineSeries::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnMetaObject(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_MetaObject_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QLineSeries_SuperMetacast(QLineSeries* self, const char* param1) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Metacast_IsBase(true);
        return vqlineseries->qt_metacast(param1);
    } else {
        return self->QLineSeries::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnMetacast(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Metacast_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QLineSeries_SuperMetacall(QLineSeries* self, int param1, int param2, void** param3) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Metacall_IsBase(true);
        return vqlineseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QLineSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnMetacall(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Metacall_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QLineSeries_SuperType(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Type_IsBase(true);
        return static_cast<int>(vqlineseries->type());
    } else {
        return static_cast<int>(self->QLineSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnType(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Type_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_SetPen(QLineSeries* self, const QPen* pen) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setPen(*pen);
    } else {
        self->QLineSeries::setPen(*pen);
    }
}

// Base class handler implementation
void QLineSeries_SuperSetPen(QLineSeries* self, const QPen* pen) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SetPen_IsBase(true);
        vqlineseries->setPen(*pen);
    } else {
        self->QLineSeries::setPen(*pen);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetPen(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SetPen_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SetPen_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_SetBrush(QLineSeries* self, const QBrush* brush) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setBrush(*brush);
    } else {
        self->QLineSeries::setBrush(*brush);
    }
}

// Base class handler implementation
void QLineSeries_SuperSetBrush(QLineSeries* self, const QBrush* brush) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SetBrush_IsBase(true);
        vqlineseries->setBrush(*brush);
    } else {
        self->QLineSeries::setBrush(*brush);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetBrush(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SetBrush_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SetBrush_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_SetColor(QLineSeries* self, const QColor* color) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setColor(*color);
    } else {
        self->QLineSeries::setColor(*color);
    }
}

// Base class handler implementation
void QLineSeries_SuperSetColor(QLineSeries* self, const QColor* color) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SetColor_IsBase(true);
        vqlineseries->setColor(*color);
    } else {
        self->QLineSeries::setColor(*color);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetColor(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SetColor_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QLineSeries_Color(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return new QColor(vqlineseries->color());
    } else {
        return new QColor(((VirtualQLineSeries*)self)->color());
    }
}

// Base class handler implementation
QColor* QLineSeries_SuperColor(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Color_IsBase(true);
        return new QColor(vqlineseries->color());
    } else {
        return new QColor(((VirtualQLineSeries*)self)->color());
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnColor(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Color_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineSeries_Event(QLineSeries* self, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return vqlineseries->event(event);
    } else {
        return self->QLineSeries::event(event);
    }
}

// Base class handler implementation
bool QLineSeries_SuperEvent(QLineSeries* self, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Event_IsBase(true);
        return vqlineseries->event(event);
    } else {
        return self->QLineSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnEvent(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Event_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineSeries_EventFilter(QLineSeries* self, QObject* watched, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return vqlineseries->eventFilter(watched, event);
    } else {
        return self->QLineSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLineSeries_SuperEventFilter(QLineSeries* self, QObject* watched, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_EventFilter_IsBase(true);
        return vqlineseries->eventFilter(watched, event);
    } else {
        return self->QLineSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnEventFilter(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_EventFilter_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_TimerEvent(QLineSeries* self, QTimerEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->timerEvent(event);
    } else {
        ((VirtualQLineSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QLineSeries_SuperTimerEvent(QLineSeries* self, QTimerEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_TimerEvent_IsBase(true);
        vqlineseries->timerEvent(event);
    } else {
        ((VirtualQLineSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnTimerEvent(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_TimerEvent_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_ChildEvent(QLineSeries* self, QChildEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->childEvent(event);
    } else {
        ((VirtualQLineSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QLineSeries_SuperChildEvent(QLineSeries* self, QChildEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_ChildEvent_IsBase(true);
        vqlineseries->childEvent(event);
    } else {
        ((VirtualQLineSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnChildEvent(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_ChildEvent_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_CustomEvent(QLineSeries* self, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->customEvent(event);
    } else {
        ((VirtualQLineSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLineSeries_SuperCustomEvent(QLineSeries* self, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_CustomEvent_IsBase(true);
        vqlineseries->customEvent(event);
    } else {
        ((VirtualQLineSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnCustomEvent(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_CustomEvent_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_ConnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->connectNotify(*signal);
    } else {
        ((VirtualQLineSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLineSeries_SuperConnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_ConnectNotify_IsBase(true);
        vqlineseries->connectNotify(*signal);
    } else {
        ((VirtualQLineSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnConnectNotify(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_DisconnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->disconnectNotify(*signal);
    } else {
        ((VirtualQLineSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLineSeries_SuperDisconnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_DisconnectNotify_IsBase(true);
        vqlineseries->disconnectNotify(*signal);
    } else {
        ((VirtualQLineSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnDisconnectNotify(QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLineSeries_Sender(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return vqlineseries->sender();
    } else {
        return ((VirtualQLineSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLineSeries_SuperSender(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Sender_IsBase(true);
        return vqlineseries->sender();
    } else {
        return ((VirtualQLineSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSender(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Sender_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineSeries_SenderSignalIndex(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return vqlineseries->senderSignalIndex();
    } else {
        return ((VirtualQLineSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLineSeries_SuperSenderSignalIndex(const QLineSeries* self) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SenderSignalIndex_IsBase(true);
        return vqlineseries->senderSignalIndex();
    } else {
        return ((VirtualQLineSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSenderSignalIndex(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineSeries_Receivers(const QLineSeries* self, const char* signal) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return vqlineseries->receivers(signal);
    } else {
        return ((VirtualQLineSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLineSeries_SuperReceivers(const QLineSeries* self, const char* signal) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Receivers_IsBase(true);
        return vqlineseries->receivers(signal);
    } else {
        return ((VirtualQLineSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnReceivers(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_Receivers_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineSeries_IsSignalConnected(const QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        return vqlineseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQLineSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLineSeries_SuperIsSignalConnected(const QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_IsSignalConnected_IsBase(true);
        return vqlineseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQLineSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnIsSignalConnected(const QLineSeries* self, intptr_t slot) {
    auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self));
    if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
        vqlineseries->setQLineSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_IsSignalConnected_Callback>(slot));
    }
}

void QLineSeries_Delete(QLineSeries* self) {
    delete self;
}
