#include <QCandlestickLegendMarker>
#include <QCandlestickSeries>
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
#include <qcandlesticklegendmarker.h>
#include "libqcandlesticklegendmarker.h"
#include "libqcandlesticklegendmarker.hxx"

QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend) {
    return new VirtualQCandlestickLegendMarker(series, legend);
}

QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQCandlestickLegendMarker(series, legend, parent);
}

QMetaObject* QCandlestickLegendMarker_MetaObject(const QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = dynamic_cast<const VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQCandlestickLegendMarker*)self)->metaObject();
    }
}

void* QCandlestickLegendMarker_Metacast(QCandlestickLegendMarker* self, const char* param1) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->qt_metacast(param1);
    }
}

int QCandlestickLegendMarker_Metacall(QCandlestickLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QCandlestickLegendMarker_Type(QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQCandlestickLegendMarker*)self)->type());
    }
}

QCandlestickSeries* QCandlestickLegendMarker_Series(QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return self->series();
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->series();
    }
}

// Base class handler implementation
QMetaObject* QCandlestickLegendMarker_QBaseMetaObject(const QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_MetaObject_IsBase(true);
        return (QMetaObject*)vqcandlesticklegendmarker->metaObject();
    } else {
        return (QMetaObject*)self->QCandlestickLegendMarker::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnMetaObject(const QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_MetaObject_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QCandlestickLegendMarker_QBaseMetacast(QCandlestickLegendMarker* self, const char* param1) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Metacast_IsBase(true);
        return vqcandlesticklegendmarker->qt_metacast(param1);
    } else {
        return self->QCandlestickLegendMarker::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnMetacast(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Metacast_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QCandlestickLegendMarker_QBaseMetacall(QCandlestickLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Metacall_IsBase(true);
        return vqcandlesticklegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QCandlestickLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnMetacall(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QCandlestickLegendMarker_QBaseType(QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqcandlesticklegendmarker->type());
    } else {
        return static_cast<int>(self->QCandlestickLegendMarker::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnType(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Type_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Type_Callback>(slot));
    }
}

// Base class handler implementation
QCandlestickSeries* QCandlestickLegendMarker_QBaseSeries(QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Series_IsBase(true);
        return vqcandlesticklegendmarker->series();
    } else {
        return self->QCandlestickLegendMarker::series();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnSeries(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Series_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickLegendMarker_Event(QCandlestickLegendMarker* self, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return vqcandlesticklegendmarker->event(event);
    } else {
        return self->QCandlestickLegendMarker::event(event);
    }
}

// Base class handler implementation
bool QCandlestickLegendMarker_QBaseEvent(QCandlestickLegendMarker* self, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Event_IsBase(true);
        return vqcandlesticklegendmarker->event(event);
    } else {
        return self->QCandlestickLegendMarker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Event_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickLegendMarker_EventFilter(QCandlestickLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return vqcandlesticklegendmarker->eventFilter(watched, event);
    } else {
        return self->QCandlestickLegendMarker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCandlestickLegendMarker_QBaseEventFilter(QCandlestickLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_EventFilter_IsBase(true);
        return vqcandlesticklegendmarker->eventFilter(watched, event);
    } else {
        return self->QCandlestickLegendMarker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnEventFilter(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickLegendMarker_TimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->timerEvent(event);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_QBaseTimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_TimerEvent_IsBase(true);
        vqcandlesticklegendmarker->timerEvent(event);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnTimerEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickLegendMarker_ChildEvent(QCandlestickLegendMarker* self, QChildEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->childEvent(event);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_QBaseChildEvent(QCandlestickLegendMarker* self, QChildEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_ChildEvent_IsBase(true);
        vqcandlesticklegendmarker->childEvent(event);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnChildEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickLegendMarker_CustomEvent(QCandlestickLegendMarker* self, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->customEvent(event);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_QBaseCustomEvent(QCandlestickLegendMarker* self, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_CustomEvent_IsBase(true);
        vqcandlesticklegendmarker->customEvent(event);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnCustomEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickLegendMarker_ConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_QBaseConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_ConnectNotify_IsBase(true);
        vqcandlesticklegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnConnectNotify(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCandlestickLegendMarker_DisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_QBaseDisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_DisconnectNotify_IsBase(true);
        vqcandlesticklegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQCandlestickLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnDisconnectNotify(QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCandlestickLegendMarker_Sender(const QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return vqcandlesticklegendmarker->sender();
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCandlestickLegendMarker_QBaseSender(const QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Sender_IsBase(true);
        return vqcandlesticklegendmarker->sender();
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnSender(const QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Sender_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickLegendMarker_SenderSignalIndex(const QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return vqcandlesticklegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCandlestickLegendMarker_QBaseSenderSignalIndex(const QCandlestickLegendMarker* self) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_SenderSignalIndex_IsBase(true);
        return vqcandlesticklegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnSenderSignalIndex(const QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCandlestickLegendMarker_Receivers(const QCandlestickLegendMarker* self, const char* signal) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return vqcandlesticklegendmarker->receivers(signal);
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCandlestickLegendMarker_QBaseReceivers(const QCandlestickLegendMarker* self, const char* signal) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Receivers_IsBase(true);
        return vqcandlesticklegendmarker->receivers(signal);
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnReceivers(const QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCandlestickLegendMarker_IsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        return vqcandlesticklegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCandlestickLegendMarker_QBaseIsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_IsSignalConnected_IsBase(true);
        return vqcandlesticklegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQCandlestickLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnIsSignalConnected(const QCandlestickLegendMarker* self, intptr_t slot) {
    auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self));
    if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
        vqcandlesticklegendmarker->setQCandlestickLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QCandlestickLegendMarker_Delete(QCandlestickLegendMarker* self) {
    delete self;
}
