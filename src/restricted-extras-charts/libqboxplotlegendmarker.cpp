#include <QBoxPlotLegendMarker>
#include <QBoxPlotSeries>
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
#include <qboxplotlegendmarker.h>
#include "libqboxplotlegendmarker.h"
#include "libqboxplotlegendmarker.hxx"

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend) {
    return new VirtualQBoxPlotLegendMarker(series, legend);
}

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQBoxPlotLegendMarker(series, legend, parent);
}

QMetaObject* QBoxPlotLegendMarker_MetaObject(const QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBoxPlotLegendMarker*)self)->metaObject();
    }
}

void* QBoxPlotLegendMarker_Metacast(QBoxPlotLegendMarker* self, const char* param1) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->qt_metacast(param1);
    }
}

int QBoxPlotLegendMarker_Metacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QBoxPlotLegendMarker_Type(QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQBoxPlotLegendMarker*)self)->type());
    }
}

QBoxPlotSeries* QBoxPlotLegendMarker_Series(QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return self->series();
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->series();
    }
}

// Base class handler implementation
QMetaObject* QBoxPlotLegendMarker_QBaseMetaObject(const QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_MetaObject_IsBase(true);
        return (QMetaObject*)vqboxplotlegendmarker->metaObject();
    } else {
        return (QMetaObject*)self->QBoxPlotLegendMarker::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnMetaObject(const QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_MetaObject_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBoxPlotLegendMarker_QBaseMetacast(QBoxPlotLegendMarker* self, const char* param1) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Metacast_IsBase(true);
        return vqboxplotlegendmarker->qt_metacast(param1);
    } else {
        return self->QBoxPlotLegendMarker::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnMetacast(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Metacast_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseMetacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Metacall_IsBase(true);
        return vqboxplotlegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBoxPlotLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnMetacall(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseType(QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqboxplotlegendmarker->type());
    } else {
        return static_cast<int>(self->QBoxPlotLegendMarker::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnType(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Type_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Type_Callback>(slot));
    }
}

// Base class handler implementation
QBoxPlotSeries* QBoxPlotLegendMarker_QBaseSeries(QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Series_IsBase(true);
        return vqboxplotlegendmarker->series();
    } else {
        return self->QBoxPlotLegendMarker::series();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSeries(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Series_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_Event(QBoxPlotLegendMarker* self, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return vqboxplotlegendmarker->event(event);
    } else {
        return self->QBoxPlotLegendMarker::event(event);
    }
}

// Base class handler implementation
bool QBoxPlotLegendMarker_QBaseEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Event_IsBase(true);
        return vqboxplotlegendmarker->event(event);
    } else {
        return self->QBoxPlotLegendMarker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Event_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_EventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return vqboxplotlegendmarker->eventFilter(watched, event);
    } else {
        return self->QBoxPlotLegendMarker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBoxPlotLegendMarker_QBaseEventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_EventFilter_IsBase(true);
        return vqboxplotlegendmarker->eventFilter(watched, event);
    } else {
        return self->QBoxPlotLegendMarker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnEventFilter(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_TimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->timerEvent(event);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseTimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_TimerEvent_IsBase(true);
        vqboxplotlegendmarker->timerEvent(event);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnTimerEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_ChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->childEvent(event);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ChildEvent_IsBase(true);
        vqboxplotlegendmarker->childEvent(event);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnChildEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_CustomEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->customEvent(event);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseCustomEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_CustomEvent_IsBase(true);
        vqboxplotlegendmarker->customEvent(event);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnCustomEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_ConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ConnectNotify_IsBase(true);
        vqboxplotlegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnConnectNotify(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_DisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseDisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_DisconnectNotify_IsBase(true);
        vqboxplotlegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxPlotLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnDisconnectNotify(QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBoxPlotLegendMarker_Sender(const QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return vqboxplotlegendmarker->sender();
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBoxPlotLegendMarker_QBaseSender(const QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Sender_IsBase(true);
        return vqboxplotlegendmarker->sender();
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSender(const QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Sender_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxPlotLegendMarker_SenderSignalIndex(const QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return vqboxplotlegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseSenderSignalIndex(const QBoxPlotLegendMarker* self) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_SenderSignalIndex_IsBase(true);
        return vqboxplotlegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSenderSignalIndex(const QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxPlotLegendMarker_Receivers(const QBoxPlotLegendMarker* self, const char* signal) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return vqboxplotlegendmarker->receivers(signal);
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseReceivers(const QBoxPlotLegendMarker* self, const char* signal) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Receivers_IsBase(true);
        return vqboxplotlegendmarker->receivers(signal);
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnReceivers(const QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_IsSignalConnected(const QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        return vqboxplotlegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBoxPlotLegendMarker_QBaseIsSignalConnected(const QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_IsSignalConnected_IsBase(true);
        return vqboxplotlegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxPlotLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnIsSignalConnected(const QBoxPlotLegendMarker* self, intptr_t slot) {
    auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self));
    if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QBoxPlotLegendMarker_Delete(QBoxPlotLegendMarker* self) {
    delete self;
}
