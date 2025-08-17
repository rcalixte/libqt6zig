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
    return (QMetaObject*)self->metaObject();
}

void* QPieLegendMarker_Metacast(QPieLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPieLegendMarker_Metacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPieLegendMarker_OnMetacall(QPieLegendMarker* self, intptr_t slot) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPieLegendMarker_QBaseMetacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        vqpielegendmarker->setQPieLegendMarker_Metacall_IsBase(true);
        return vqpielegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPieLegendMarker_Tr(const char* s) {
    QString _ret = QPieLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self) {
    return self->slice();
}

libqt_string QPieLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QPieLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPieLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPieLegendMarker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QPieLegendMarker_Type(QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return static_cast<int>(vqpielegendmarker->type());
    } else {
        return static_cast<int>(self->QPieLegendMarker::type());
    }
}

// Base class handler implementation
int QPieLegendMarker_QBaseType(QPieLegendMarker* self) {
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

// Derived class handler implementation
QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
        return vqpielegendmarker->series();
    } else {
        return self->QPieLegendMarker::series();
    }
}

// Base class handler implementation
QPieSeries* QPieLegendMarker_QBaseSeries(QPieLegendMarker* self) {
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
bool QPieLegendMarker_QBaseEvent(QPieLegendMarker* self, QEvent* event) {
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
bool QPieLegendMarker_QBaseEventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
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
void QPieLegendMarker_QBaseTimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
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
void QPieLegendMarker_QBaseChildEvent(QPieLegendMarker* self, QChildEvent* event) {
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
void QPieLegendMarker_QBaseCustomEvent(QPieLegendMarker* self, QEvent* event) {
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
void QPieLegendMarker_QBaseConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
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
void QPieLegendMarker_QBaseDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
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
QObject* QPieLegendMarker_QBaseSender(const QPieLegendMarker* self) {
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
int QPieLegendMarker_QBaseSenderSignalIndex(const QPieLegendMarker* self) {
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
int QPieLegendMarker_QBaseReceivers(const QPieLegendMarker* self, const char* signal) {
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
bool QPieLegendMarker_QBaseIsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal) {
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
