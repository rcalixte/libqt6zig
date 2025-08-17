#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QStackedBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qstackedbarseries.h>
#include "libqstackedbarseries.h"
#include "libqstackedbarseries.hxx"

QStackedBarSeries* QStackedBarSeries_new() {
    return new VirtualQStackedBarSeries();
}

QStackedBarSeries* QStackedBarSeries_new2(QObject* parent) {
    return new VirtualQStackedBarSeries(parent);
}

QMetaObject* QStackedBarSeries_MetaObject(const QStackedBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStackedBarSeries_Metacast(QStackedBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStackedBarSeries_Metacall(QStackedBarSeries* self, int param1, int param2, void** param3) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStackedBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStackedBarSeries_OnMetacall(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Metacall_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStackedBarSeries_QBaseMetacall(QStackedBarSeries* self, int param1, int param2, void** param3) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Metacall_IsBase(true);
        return vqstackedbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStackedBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStackedBarSeries_Tr(const char* s) {
    QString _ret = QStackedBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStackedBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QStackedBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStackedBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStackedBarSeries::tr(s, c, static_cast<int>(n));
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
int QStackedBarSeries_Type(const QStackedBarSeries* self) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return static_cast<int>(vqstackedbarseries->type());
    } else {
        return static_cast<int>(self->QStackedBarSeries::type());
    }
}

// Base class handler implementation
int QStackedBarSeries_QBaseType(const QStackedBarSeries* self) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Type_IsBase(true);
        return static_cast<int>(vqstackedbarseries->type());
    } else {
        return static_cast<int>(self->QStackedBarSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnType(const QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Type_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedBarSeries_Event(QStackedBarSeries* self, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return vqstackedbarseries->event(event);
    } else {
        return self->QStackedBarSeries::event(event);
    }
}

// Base class handler implementation
bool QStackedBarSeries_QBaseEvent(QStackedBarSeries* self, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Event_IsBase(true);
        return vqstackedbarseries->event(event);
    } else {
        return self->QStackedBarSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnEvent(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Event_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedBarSeries_EventFilter(QStackedBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return vqstackedbarseries->eventFilter(watched, event);
    } else {
        return self->QStackedBarSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStackedBarSeries_QBaseEventFilter(QStackedBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_EventFilter_IsBase(true);
        return vqstackedbarseries->eventFilter(watched, event);
    } else {
        return self->QStackedBarSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnEventFilter(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedBarSeries_TimerEvent(QStackedBarSeries* self, QTimerEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->timerEvent(event);
    } else {
        ((VirtualQStackedBarSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStackedBarSeries_QBaseTimerEvent(QStackedBarSeries* self, QTimerEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_TimerEvent_IsBase(true);
        vqstackedbarseries->timerEvent(event);
    } else {
        ((VirtualQStackedBarSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnTimerEvent(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedBarSeries_ChildEvent(QStackedBarSeries* self, QChildEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->childEvent(event);
    } else {
        ((VirtualQStackedBarSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStackedBarSeries_QBaseChildEvent(QStackedBarSeries* self, QChildEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_ChildEvent_IsBase(true);
        vqstackedbarseries->childEvent(event);
    } else {
        ((VirtualQStackedBarSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnChildEvent(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedBarSeries_CustomEvent(QStackedBarSeries* self, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->customEvent(event);
    } else {
        ((VirtualQStackedBarSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStackedBarSeries_QBaseCustomEvent(QStackedBarSeries* self, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_CustomEvent_IsBase(true);
        vqstackedbarseries->customEvent(event);
    } else {
        ((VirtualQStackedBarSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnCustomEvent(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedBarSeries_ConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->connectNotify(*signal);
    } else {
        ((VirtualQStackedBarSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedBarSeries_QBaseConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_ConnectNotify_IsBase(true);
        vqstackedbarseries->connectNotify(*signal);
    } else {
        ((VirtualQStackedBarSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnConnectNotify(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedBarSeries_DisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQStackedBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedBarSeries_QBaseDisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_DisconnectNotify_IsBase(true);
        vqstackedbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQStackedBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnDisconnectNotify(QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStackedBarSeries_Sender(const QStackedBarSeries* self) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return vqstackedbarseries->sender();
    } else {
        return ((VirtualQStackedBarSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStackedBarSeries_QBaseSender(const QStackedBarSeries* self) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Sender_IsBase(true);
        return vqstackedbarseries->sender();
    } else {
        return ((VirtualQStackedBarSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnSender(const QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Sender_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedBarSeries_SenderSignalIndex(const QStackedBarSeries* self) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return vqstackedbarseries->senderSignalIndex();
    } else {
        return ((VirtualQStackedBarSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStackedBarSeries_QBaseSenderSignalIndex(const QStackedBarSeries* self) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_SenderSignalIndex_IsBase(true);
        return vqstackedbarseries->senderSignalIndex();
    } else {
        return ((VirtualQStackedBarSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnSenderSignalIndex(const QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedBarSeries_Receivers(const QStackedBarSeries* self, const char* signal) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return vqstackedbarseries->receivers(signal);
    } else {
        return ((VirtualQStackedBarSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStackedBarSeries_QBaseReceivers(const QStackedBarSeries* self, const char* signal) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Receivers_IsBase(true);
        return vqstackedbarseries->receivers(signal);
    } else {
        return ((VirtualQStackedBarSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnReceivers(const QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_Receivers_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedBarSeries_IsSignalConnected(const QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        return vqstackedbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQStackedBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStackedBarSeries_QBaseIsSignalConnected(const QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_IsSignalConnected_IsBase(true);
        return vqstackedbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQStackedBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnIsSignalConnected(const QStackedBarSeries* self, intptr_t slot) {
    auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self));
    if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
        vqstackedbarseries->setQStackedBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QStackedBarSeries_Delete(QStackedBarSeries* self) {
    delete self;
}
