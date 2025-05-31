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
#include <QSplineSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qsplineseries.h>
#include "libqsplineseries.h"
#include "libqsplineseries.hxx"

QSplineSeries* QSplineSeries_new() {
    return new VirtualQSplineSeries();
}

QSplineSeries* QSplineSeries_new2(QObject* parent) {
    return new VirtualQSplineSeries(parent);
}

QMetaObject* QSplineSeries_MetaObject(const QSplineSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplineSeries_Metacast(QSplineSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplineSeries_Metacall(QSplineSeries* self, int param1, int param2, void** param3) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSplineSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplineSeries_OnMetacall(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Metacall_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplineSeries_QBaseMetacall(QSplineSeries* self, int param1, int param2, void** param3) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Metacall_IsBase(true);
        return vqsplineseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSplineSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSplineSeries_Tr(const char* s) {
    QString _ret = QSplineSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSplineSeries_Tr2(const char* s, const char* c) {
    QString _ret = QSplineSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSplineSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSplineSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QSplineSeries_Type(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return static_cast<int>(vqsplineseries->type());
    } else {
        return static_cast<int>(self->QSplineSeries::type());
    }
}

// Base class handler implementation
int QSplineSeries_QBaseType(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Type_IsBase(true);
        return static_cast<int>(vqsplineseries->type());
    } else {
        return static_cast<int>(self->QSplineSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnType(const QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Type_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_SetPen(QSplineSeries* self, const QPen* pen) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setPen(*pen);
    } else {
        self->QSplineSeries::setPen(*pen);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseSetPen(QSplineSeries* self, const QPen* pen) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SetPen_IsBase(true);
        vqsplineseries->setPen(*pen);
    } else {
        self->QSplineSeries::setPen(*pen);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetPen(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SetPen_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetPen_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_SetBrush(QSplineSeries* self, const QBrush* brush) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setBrush(*brush);
    } else {
        self->QSplineSeries::setBrush(*brush);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseSetBrush(QSplineSeries* self, const QBrush* brush) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SetBrush_IsBase(true);
        vqsplineseries->setBrush(*brush);
    } else {
        self->QSplineSeries::setBrush(*brush);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetBrush(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SetBrush_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetBrush_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_SetColor(QSplineSeries* self, const QColor* color) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setColor(*color);
    } else {
        self->QSplineSeries::setColor(*color);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseSetColor(QSplineSeries* self, const QColor* color) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SetColor_IsBase(true);
        vqsplineseries->setColor(*color);
    } else {
        self->QSplineSeries::setColor(*color);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetColor(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SetColor_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QSplineSeries_Color(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return new QColor(vqsplineseries->color());
    } else {
        return new QColor(((VirtualQSplineSeries*)self)->color());
    }
}

// Base class handler implementation
QColor* QSplineSeries_QBaseColor(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Color_IsBase(true);
        return new QColor(vqsplineseries->color());
    } else {
        return new QColor(((VirtualQSplineSeries*)self)->color());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnColor(const QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Color_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplineSeries_Event(QSplineSeries* self, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return vqsplineseries->event(event);
    } else {
        return self->QSplineSeries::event(event);
    }
}

// Base class handler implementation
bool QSplineSeries_QBaseEvent(QSplineSeries* self, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Event_IsBase(true);
        return vqsplineseries->event(event);
    } else {
        return self->QSplineSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnEvent(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Event_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplineSeries_EventFilter(QSplineSeries* self, QObject* watched, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return vqsplineseries->eventFilter(watched, event);
    } else {
        return self->QSplineSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplineSeries_QBaseEventFilter(QSplineSeries* self, QObject* watched, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_EventFilter_IsBase(true);
        return vqsplineseries->eventFilter(watched, event);
    } else {
        return self->QSplineSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnEventFilter(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_EventFilter_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_TimerEvent(QSplineSeries* self, QTimerEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->timerEvent(event);
    } else {
        ((VirtualQSplineSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseTimerEvent(QSplineSeries* self, QTimerEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_TimerEvent_IsBase(true);
        vqsplineseries->timerEvent(event);
    } else {
        ((VirtualQSplineSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnTimerEvent(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_TimerEvent_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_ChildEvent(QSplineSeries* self, QChildEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->childEvent(event);
    } else {
        ((VirtualQSplineSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseChildEvent(QSplineSeries* self, QChildEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_ChildEvent_IsBase(true);
        vqsplineseries->childEvent(event);
    } else {
        ((VirtualQSplineSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnChildEvent(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_ChildEvent_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_CustomEvent(QSplineSeries* self, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->customEvent(event);
    } else {
        ((VirtualQSplineSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseCustomEvent(QSplineSeries* self, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_CustomEvent_IsBase(true);
        vqsplineseries->customEvent(event);
    } else {
        ((VirtualQSplineSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnCustomEvent(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_CustomEvent_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_ConnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->connectNotify(*signal);
    } else {
        ((VirtualQSplineSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseConnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_ConnectNotify_IsBase(true);
        vqsplineseries->connectNotify(*signal);
    } else {
        ((VirtualQSplineSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnConnectNotify(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_DisconnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->disconnectNotify(*signal);
    } else {
        ((VirtualQSplineSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseDisconnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_DisconnectNotify_IsBase(true);
        vqsplineseries->disconnectNotify(*signal);
    } else {
        ((VirtualQSplineSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnDisconnectNotify(QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplineSeries_Sender(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return vqsplineseries->sender();
    } else {
        return ((VirtualQSplineSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSplineSeries_QBaseSender(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Sender_IsBase(true);
        return vqsplineseries->sender();
    } else {
        return ((VirtualQSplineSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSender(const QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Sender_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplineSeries_SenderSignalIndex(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return vqsplineseries->senderSignalIndex();
    } else {
        return ((VirtualQSplineSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplineSeries_QBaseSenderSignalIndex(const QSplineSeries* self) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SenderSignalIndex_IsBase(true);
        return vqsplineseries->senderSignalIndex();
    } else {
        return ((VirtualQSplineSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSenderSignalIndex(const QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplineSeries_Receivers(const QSplineSeries* self, const char* signal) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return vqsplineseries->receivers(signal);
    } else {
        return ((VirtualQSplineSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSplineSeries_QBaseReceivers(const QSplineSeries* self, const char* signal) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Receivers_IsBase(true);
        return vqsplineseries->receivers(signal);
    } else {
        return ((VirtualQSplineSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnReceivers(const QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_Receivers_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplineSeries_IsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        return vqsplineseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQSplineSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplineSeries_QBaseIsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_IsSignalConnected_IsBase(true);
        return vqsplineseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQSplineSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnIsSignalConnected(const QSplineSeries* self, intptr_t slot) {
    auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self));
    if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
        vqsplineseries->setQSplineSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_IsSignalConnected_Callback>(slot));
    }
}

void QSplineSeries_Delete(QSplineSeries* self) {
    delete self;
}
