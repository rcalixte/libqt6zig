#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbarseries.h>
#include "libqbarseries.h"
#include "libqbarseries.hxx"

QBarSeries* QBarSeries_new() {
    return new VirtualQBarSeries();
}

QBarSeries* QBarSeries_new2(QObject* parent) {
    return new VirtualQBarSeries(parent);
}

QMetaObject* QBarSeries_MetaObject(const QBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarSeries_Metacast(QBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarSeries_Metacall(QBarSeries* self, int param1, int param2, void** param3) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBarSeries_OnMetacall(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Metacall_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBarSeries_QBaseMetacall(QBarSeries* self, int param1, int param2, void** param3) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Metacall_IsBase(true);
        return vqbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBarSeries_Tr(const char* s) {
    QString _ret = QBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBarSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QBarSeries_Type(const QBarSeries* self) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return static_cast<int>(vqbarseries->type());
    } else {
        return static_cast<int>(self->QBarSeries::type());
    }
}

// Base class handler implementation
int QBarSeries_QBaseType(const QBarSeries* self) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Type_IsBase(true);
        return static_cast<int>(vqbarseries->type());
    } else {
        return static_cast<int>(self->QBarSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnType(const QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Type_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarSeries_Event(QBarSeries* self, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return vqbarseries->event(event);
    } else {
        return self->QBarSeries::event(event);
    }
}

// Base class handler implementation
bool QBarSeries_QBaseEvent(QBarSeries* self, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Event_IsBase(true);
        return vqbarseries->event(event);
    } else {
        return self->QBarSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnEvent(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Event_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarSeries_EventFilter(QBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return vqbarseries->eventFilter(watched, event);
    } else {
        return self->QBarSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBarSeries_QBaseEventFilter(QBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_EventFilter_IsBase(true);
        return vqbarseries->eventFilter(watched, event);
    } else {
        return self->QBarSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnEventFilter(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSeries_TimerEvent(QBarSeries* self, QTimerEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->timerEvent(event);
    } else {
        ((VirtualQBarSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBarSeries_QBaseTimerEvent(QBarSeries* self, QTimerEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_TimerEvent_IsBase(true);
        vqbarseries->timerEvent(event);
    } else {
        ((VirtualQBarSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnTimerEvent(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSeries_ChildEvent(QBarSeries* self, QChildEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->childEvent(event);
    } else {
        ((VirtualQBarSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBarSeries_QBaseChildEvent(QBarSeries* self, QChildEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_ChildEvent_IsBase(true);
        vqbarseries->childEvent(event);
    } else {
        ((VirtualQBarSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnChildEvent(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSeries_CustomEvent(QBarSeries* self, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->customEvent(event);
    } else {
        ((VirtualQBarSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBarSeries_QBaseCustomEvent(QBarSeries* self, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_CustomEvent_IsBase(true);
        vqbarseries->customEvent(event);
    } else {
        ((VirtualQBarSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnCustomEvent(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSeries_ConnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->connectNotify(*signal);
    } else {
        ((VirtualQBarSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBarSeries_QBaseConnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_ConnectNotify_IsBase(true);
        vqbarseries->connectNotify(*signal);
    } else {
        ((VirtualQBarSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnConnectNotify(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarSeries_DisconnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBarSeries_QBaseDisconnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_DisconnectNotify_IsBase(true);
        vqbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnDisconnectNotify(QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBarSeries_Sender(const QBarSeries* self) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return vqbarseries->sender();
    } else {
        return ((VirtualQBarSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBarSeries_QBaseSender(const QBarSeries* self) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Sender_IsBase(true);
        return vqbarseries->sender();
    } else {
        return ((VirtualQBarSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnSender(const QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Sender_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarSeries_SenderSignalIndex(const QBarSeries* self) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return vqbarseries->senderSignalIndex();
    } else {
        return ((VirtualQBarSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBarSeries_QBaseSenderSignalIndex(const QBarSeries* self) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_SenderSignalIndex_IsBase(true);
        return vqbarseries->senderSignalIndex();
    } else {
        return ((VirtualQBarSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnSenderSignalIndex(const QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarSeries_Receivers(const QBarSeries* self, const char* signal) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return vqbarseries->receivers(signal);
    } else {
        return ((VirtualQBarSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBarSeries_QBaseReceivers(const QBarSeries* self, const char* signal) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Receivers_IsBase(true);
        return vqbarseries->receivers(signal);
    } else {
        return ((VirtualQBarSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnReceivers(const QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_Receivers_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarSeries_IsSignalConnected(const QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        return vqbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBarSeries_QBaseIsSignalConnected(const QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_IsSignalConnected_IsBase(true);
        return vqbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnIsSignalConnected(const QBarSeries* self, intptr_t slot) {
    auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self));
    if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
        vqbarseries->setQBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QBarSeries_Delete(QBarSeries* self) {
    delete self;
}
