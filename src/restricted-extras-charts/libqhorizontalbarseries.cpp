#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhorizontalbarseries.h>
#include "libqhorizontalbarseries.h"
#include "libqhorizontalbarseries.hxx"

QHorizontalBarSeries* QHorizontalBarSeries_new() {
    return new VirtualQHorizontalBarSeries();
}

QHorizontalBarSeries* QHorizontalBarSeries_new2(QObject* parent) {
    return new VirtualQHorizontalBarSeries(parent);
}

QMetaObject* QHorizontalBarSeries_MetaObject(const QHorizontalBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHorizontalBarSeries_Metacast(QHorizontalBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHorizontalBarSeries_Metacall(QHorizontalBarSeries* self, int param1, int param2, void** param3) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHorizontalBarSeries_OnMetacall(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Metacall_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHorizontalBarSeries_QBaseMetacall(QHorizontalBarSeries* self, int param1, int param2, void** param3) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Metacall_IsBase(true);
        return vqhorizontalbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHorizontalBarSeries_Tr(const char* s) {
    QString _ret = QHorizontalBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QHorizontalBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHorizontalBarSeries::tr(s, c, static_cast<int>(n));
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
int QHorizontalBarSeries_Type(const QHorizontalBarSeries* self) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return static_cast<int>(vqhorizontalbarseries->type());
    } else {
        return static_cast<int>(self->QHorizontalBarSeries::type());
    }
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseType(const QHorizontalBarSeries* self) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Type_IsBase(true);
        return static_cast<int>(vqhorizontalbarseries->type());
    } else {
        return static_cast<int>(self->QHorizontalBarSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnType(const QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Type_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalBarSeries_Event(QHorizontalBarSeries* self, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return vqhorizontalbarseries->event(event);
    } else {
        return self->QHorizontalBarSeries::event(event);
    }
}

// Base class handler implementation
bool QHorizontalBarSeries_QBaseEvent(QHorizontalBarSeries* self, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Event_IsBase(true);
        return vqhorizontalbarseries->event(event);
    } else {
        return self->QHorizontalBarSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnEvent(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Event_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalBarSeries_EventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return vqhorizontalbarseries->eventFilter(watched, event);
    } else {
        return self->QHorizontalBarSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHorizontalBarSeries_QBaseEventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_EventFilter_IsBase(true);
        return vqhorizontalbarseries->eventFilter(watched, event);
    } else {
        return self->QHorizontalBarSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnEventFilter(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_TimerEvent(QHorizontalBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->timerEvent(event);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_TimerEvent_IsBase(true);
        vqhorizontalbarseries->timerEvent(event);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnTimerEvent(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_ChildEvent(QHorizontalBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->childEvent(event);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseChildEvent(QHorizontalBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ChildEvent_IsBase(true);
        vqhorizontalbarseries->childEvent(event);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnChildEvent(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_CustomEvent(QHorizontalBarSeries* self, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->customEvent(event);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseCustomEvent(QHorizontalBarSeries* self, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_CustomEvent_IsBase(true);
        vqhorizontalbarseries->customEvent(event);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnCustomEvent(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_ConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->connectNotify(*signal);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ConnectNotify_IsBase(true);
        vqhorizontalbarseries->connectNotify(*signal);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnConnectNotify(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_DisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseDisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_DisconnectNotify_IsBase(true);
        vqhorizontalbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQHorizontalBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnDisconnectNotify(QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHorizontalBarSeries_Sender(const QHorizontalBarSeries* self) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return vqhorizontalbarseries->sender();
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QHorizontalBarSeries_QBaseSender(const QHorizontalBarSeries* self) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Sender_IsBase(true);
        return vqhorizontalbarseries->sender();
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnSender(const QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Sender_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalBarSeries_SenderSignalIndex(const QHorizontalBarSeries* self) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return vqhorizontalbarseries->senderSignalIndex();
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseSenderSignalIndex(const QHorizontalBarSeries* self) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_SenderSignalIndex_IsBase(true);
        return vqhorizontalbarseries->senderSignalIndex();
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnSenderSignalIndex(const QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalBarSeries_Receivers(const QHorizontalBarSeries* self, const char* signal) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return vqhorizontalbarseries->receivers(signal);
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseReceivers(const QHorizontalBarSeries* self, const char* signal) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Receivers_IsBase(true);
        return vqhorizontalbarseries->receivers(signal);
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnReceivers(const QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Receivers_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalBarSeries_IsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        return vqhorizontalbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHorizontalBarSeries_QBaseIsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_IsSignalConnected_IsBase(true);
        return vqhorizontalbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQHorizontalBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnIsSignalConnected(const QHorizontalBarSeries* self, intptr_t slot) {
    auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self));
    if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
        vqhorizontalbarseries->setQHorizontalBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QHorizontalBarSeries_Delete(QHorizontalBarSeries* self) {
    delete self;
}
