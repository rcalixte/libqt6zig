#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPercentBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpercentbarseries.h>
#include "libqpercentbarseries.h"
#include "libqpercentbarseries.hxx"

QPercentBarSeries* QPercentBarSeries_new() {
    return new VirtualQPercentBarSeries();
}

QPercentBarSeries* QPercentBarSeries_new2(QObject* parent) {
    return new VirtualQPercentBarSeries(parent);
}

QMetaObject* QPercentBarSeries_MetaObject(const QPercentBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPercentBarSeries_Metacast(QPercentBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPercentBarSeries_Metacall(QPercentBarSeries* self, int param1, int param2, void** param3) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPercentBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPercentBarSeries_OnMetacall(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Metacall_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPercentBarSeries_QBaseMetacall(QPercentBarSeries* self, int param1, int param2, void** param3) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Metacall_IsBase(true);
        return vqpercentbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPercentBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPercentBarSeries_Tr(const char* s) {
    QString _ret = QPercentBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPercentBarSeries_Type(const QPercentBarSeries* self) {
    auto* vqpercentbarseries = dynamic_cast<const VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPercentBarSeries*)self)->type());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPercentBarSeries_OnType(const QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Type_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Type_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPercentBarSeries_QBaseType(const QPercentBarSeries* self) {
    auto* vqpercentbarseries = dynamic_cast<const VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Type_IsBase(true);
        return static_cast<int>(vqpercentbarseries->type());
    } else {
        return static_cast<int>(((VirtualQPercentBarSeries*)self)->type());
    }
}

libqt_string QPercentBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QPercentBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPercentBarSeries::tr(s, c, static_cast<int>(n));
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
bool QPercentBarSeries_Event(QPercentBarSeries* self, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return vqpercentbarseries->event(event);
    } else {
        return self->QPercentBarSeries::event(event);
    }
}

// Base class handler implementation
bool QPercentBarSeries_QBaseEvent(QPercentBarSeries* self, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Event_IsBase(true);
        return vqpercentbarseries->event(event);
    } else {
        return self->QPercentBarSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnEvent(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Event_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPercentBarSeries_EventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return vqpercentbarseries->eventFilter(watched, event);
    } else {
        return self->QPercentBarSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPercentBarSeries_QBaseEventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_EventFilter_IsBase(true);
        return vqpercentbarseries->eventFilter(watched, event);
    } else {
        return self->QPercentBarSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnEventFilter(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_TimerEvent(QPercentBarSeries* self, QTimerEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->timerEvent(event);
    } else {
        ((VirtualQPercentBarSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseTimerEvent(QPercentBarSeries* self, QTimerEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_TimerEvent_IsBase(true);
        vqpercentbarseries->timerEvent(event);
    } else {
        ((VirtualQPercentBarSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnTimerEvent(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_ChildEvent(QPercentBarSeries* self, QChildEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->childEvent(event);
    } else {
        ((VirtualQPercentBarSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseChildEvent(QPercentBarSeries* self, QChildEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_ChildEvent_IsBase(true);
        vqpercentbarseries->childEvent(event);
    } else {
        ((VirtualQPercentBarSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnChildEvent(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_CustomEvent(QPercentBarSeries* self, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->customEvent(event);
    } else {
        ((VirtualQPercentBarSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseCustomEvent(QPercentBarSeries* self, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_CustomEvent_IsBase(true);
        vqpercentbarseries->customEvent(event);
    } else {
        ((VirtualQPercentBarSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnCustomEvent(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_ConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->connectNotify(*signal);
    } else {
        ((VirtualQPercentBarSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_ConnectNotify_IsBase(true);
        vqpercentbarseries->connectNotify(*signal);
    } else {
        ((VirtualQPercentBarSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnConnectNotify(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_DisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQPercentBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseDisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_DisconnectNotify_IsBase(true);
        vqpercentbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQPercentBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnDisconnectNotify(QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPercentBarSeries_Sender(const QPercentBarSeries* self) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return vqpercentbarseries->sender();
    } else {
        return ((VirtualQPercentBarSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPercentBarSeries_QBaseSender(const QPercentBarSeries* self) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Sender_IsBase(true);
        return vqpercentbarseries->sender();
    } else {
        return ((VirtualQPercentBarSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnSender(const QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Sender_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPercentBarSeries_SenderSignalIndex(const QPercentBarSeries* self) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return vqpercentbarseries->senderSignalIndex();
    } else {
        return ((VirtualQPercentBarSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPercentBarSeries_QBaseSenderSignalIndex(const QPercentBarSeries* self) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_SenderSignalIndex_IsBase(true);
        return vqpercentbarseries->senderSignalIndex();
    } else {
        return ((VirtualQPercentBarSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnSenderSignalIndex(const QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPercentBarSeries_Receivers(const QPercentBarSeries* self, const char* signal) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return vqpercentbarseries->receivers(signal);
    } else {
        return ((VirtualQPercentBarSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPercentBarSeries_QBaseReceivers(const QPercentBarSeries* self, const char* signal) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Receivers_IsBase(true);
        return vqpercentbarseries->receivers(signal);
    } else {
        return ((VirtualQPercentBarSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnReceivers(const QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_Receivers_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPercentBarSeries_IsSignalConnected(const QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        return vqpercentbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQPercentBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPercentBarSeries_QBaseIsSignalConnected(const QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_IsSignalConnected_IsBase(true);
        return vqpercentbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQPercentBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnIsSignalConnected(const QPercentBarSeries* self, intptr_t slot) {
    auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self));
    if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
        vqpercentbarseries->setQPercentBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QPercentBarSeries_Delete(QPercentBarSeries* self) {
    delete self;
}
