#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalStackedBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhorizontalstackedbarseries.h>
#include "libqhorizontalstackedbarseries.h"
#include "libqhorizontalstackedbarseries.hxx"

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new() {
    return new VirtualQHorizontalStackedBarSeries();
}

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new2(QObject* parent) {
    return new VirtualQHorizontalStackedBarSeries(parent);
}

QMetaObject* QHorizontalStackedBarSeries_MetaObject(const QHorizontalStackedBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHorizontalStackedBarSeries_Metacast(QHorizontalStackedBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHorizontalStackedBarSeries_Metacall(QHorizontalStackedBarSeries* self, int param1, int param2, void** param3) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHorizontalStackedBarSeries_Tr(const char* s) {
    QString _ret = QHorizontalStackedBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QHorizontalStackedBarSeries_Type(const QHorizontalStackedBarSeries* self) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQHorizontalStackedBarSeries*)self)->type());
    }
}

libqt_string QHorizontalStackedBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QHorizontalStackedBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalStackedBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHorizontalStackedBarSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int QHorizontalStackedBarSeries_QBaseMetacall(QHorizontalStackedBarSeries* self, int param1, int param2, void** param3) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Metacall_IsBase(true);
        return vqhorizontalstackedbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QHorizontalStackedBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnMetacall(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Metacall_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QHorizontalStackedBarSeries_QBaseType(const QHorizontalStackedBarSeries* self) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Type_IsBase(true);
        return static_cast<int>(vqhorizontalstackedbarseries->type());
    } else {
        return static_cast<int>(self->QHorizontalStackedBarSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnType(const QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Type_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalStackedBarSeries_Event(QHorizontalStackedBarSeries* self, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return vqhorizontalstackedbarseries->event(event);
    } else {
        return self->QHorizontalStackedBarSeries::event(event);
    }
}

// Base class handler implementation
bool QHorizontalStackedBarSeries_QBaseEvent(QHorizontalStackedBarSeries* self, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Event_IsBase(true);
        return vqhorizontalstackedbarseries->event(event);
    } else {
        return self->QHorizontalStackedBarSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Event_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalStackedBarSeries_EventFilter(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return vqhorizontalstackedbarseries->eventFilter(watched, event);
    } else {
        return self->QHorizontalStackedBarSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHorizontalStackedBarSeries_QBaseEventFilter(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_EventFilter_IsBase(true);
        return vqhorizontalstackedbarseries->eventFilter(watched, event);
    } else {
        return self->QHorizontalStackedBarSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnEventFilter(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_TimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->timerEvent(event);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_QBaseTimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_TimerEvent_IsBase(true);
        vqhorizontalstackedbarseries->timerEvent(event);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnTimerEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_ChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->childEvent(event);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_QBaseChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_ChildEvent_IsBase(true);
        vqhorizontalstackedbarseries->childEvent(event);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnChildEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_CustomEvent(QHorizontalStackedBarSeries* self, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->customEvent(event);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_QBaseCustomEvent(QHorizontalStackedBarSeries* self, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_CustomEvent_IsBase(true);
        vqhorizontalstackedbarseries->customEvent(event);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnCustomEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_ConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->connectNotify(*signal);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_QBaseConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_ConnectNotify_IsBase(true);
        vqhorizontalstackedbarseries->connectNotify(*signal);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnConnectNotify(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_DisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_QBaseDisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_DisconnectNotify_IsBase(true);
        vqhorizontalstackedbarseries->disconnectNotify(*signal);
    } else {
        ((VirtualQHorizontalStackedBarSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnDisconnectNotify(QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHorizontalStackedBarSeries_Sender(const QHorizontalStackedBarSeries* self) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return vqhorizontalstackedbarseries->sender();
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QHorizontalStackedBarSeries_QBaseSender(const QHorizontalStackedBarSeries* self) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Sender_IsBase(true);
        return vqhorizontalstackedbarseries->sender();
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnSender(const QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Sender_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalStackedBarSeries_SenderSignalIndex(const QHorizontalStackedBarSeries* self) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return vqhorizontalstackedbarseries->senderSignalIndex();
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QHorizontalStackedBarSeries_QBaseSenderSignalIndex(const QHorizontalStackedBarSeries* self) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_SenderSignalIndex_IsBase(true);
        return vqhorizontalstackedbarseries->senderSignalIndex();
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnSenderSignalIndex(const QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalStackedBarSeries_Receivers(const QHorizontalStackedBarSeries* self, const char* signal) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return vqhorizontalstackedbarseries->receivers(signal);
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QHorizontalStackedBarSeries_QBaseReceivers(const QHorizontalStackedBarSeries* self, const char* signal) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Receivers_IsBase(true);
        return vqhorizontalstackedbarseries->receivers(signal);
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnReceivers(const QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Receivers_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalStackedBarSeries_IsSignalConnected(const QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        return vqhorizontalstackedbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHorizontalStackedBarSeries_QBaseIsSignalConnected(const QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_IsSignalConnected_IsBase(true);
        return vqhorizontalstackedbarseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQHorizontalStackedBarSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnIsSignalConnected(const QHorizontalStackedBarSeries* self, intptr_t slot) {
    auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self));
    if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
        vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QHorizontalStackedBarSeries_Delete(QHorizontalStackedBarSeries* self) {
    delete self;
}
