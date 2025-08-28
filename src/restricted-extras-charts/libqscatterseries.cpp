#include <QAbstractSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QScatterSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qscatterseries.h>
#include "libqscatterseries.h"
#include "libqscatterseries.hxx"

QScatterSeries* QScatterSeries_new() {
    return new VirtualQScatterSeries();
}

QScatterSeries* QScatterSeries_new2(QObject* parent) {
    return new VirtualQScatterSeries(parent);
}

QMetaObject* QScatterSeries_MetaObject(const QScatterSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScatterSeries_Metacast(QScatterSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScatterSeries_Metacall(QScatterSeries* self, int param1, int param2, void** param3) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScatterSeries*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScatterSeries_Tr(const char* s) {
    QString _ret = QScatterSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QScatterSeries_Type(const QScatterSeries* self) {
    auto* vqscatterseries = dynamic_cast<const VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQScatterSeries*)self)->type());
    }
}

void QScatterSeries_SetPen(QScatterSeries* self, const QPen* pen) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        self->setPen(*pen);
    } else {
        ((VirtualQScatterSeries*)self)->setPen(*pen);
    }
}

void QScatterSeries_SetBrush(QScatterSeries* self, const QBrush* brush) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        self->setBrush(*brush);
    } else {
        ((VirtualQScatterSeries*)self)->setBrush(*brush);
    }
}

QBrush* QScatterSeries_Brush(const QScatterSeries* self) {
    return new QBrush(self->brush());
}

void QScatterSeries_SetColor(QScatterSeries* self, const QColor* color) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        self->setColor(*color);
    } else {
        ((VirtualQScatterSeries*)self)->setColor(*color);
    }
}

QColor* QScatterSeries_Color(const QScatterSeries* self) {
    auto* vqscatterseries = dynamic_cast<const VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return new QColor(self->color());
    } else {
        return new QColor(((VirtualQScatterSeries*)self)->color());
    }
}

void QScatterSeries_SetBorderColor(QScatterSeries* self, const QColor* color) {
    self->setBorderColor(*color);
}

QColor* QScatterSeries_BorderColor(const QScatterSeries* self) {
    return new QColor(self->borderColor());
}

int QScatterSeries_MarkerShape(const QScatterSeries* self) {
    return static_cast<int>(self->markerShape());
}

void QScatterSeries_SetMarkerShape(QScatterSeries* self, int shape) {
    self->setMarkerShape(static_cast<QScatterSeries::MarkerShape>(shape));
}

double QScatterSeries_MarkerSize(const QScatterSeries* self) {
    return static_cast<double>(self->markerSize());
}

void QScatterSeries_SetMarkerSize(QScatterSeries* self, double size) {
    self->setMarkerSize(static_cast<qreal>(size));
}

void QScatterSeries_ColorChanged(QScatterSeries* self, QColor* color) {
    self->colorChanged(*color);
}

void QScatterSeries_Connect_ColorChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, QColor*) = reinterpret_cast<void (*)(QScatterSeries*, QColor*)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::colorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QScatterSeries_BorderColorChanged(QScatterSeries* self, QColor* color) {
    self->borderColorChanged(*color);
}

void QScatterSeries_Connect_BorderColorChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, QColor*) = reinterpret_cast<void (*)(QScatterSeries*, QColor*)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::borderColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QScatterSeries_MarkerShapeChanged(QScatterSeries* self, int shape) {
    self->markerShapeChanged(static_cast<QScatterSeries::MarkerShape>(shape));
}

void QScatterSeries_Connect_MarkerShapeChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, int) = reinterpret_cast<void (*)(QScatterSeries*, int)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::markerShapeChanged, [self, slotFunc](QScatterSeries::MarkerShape shape) {
        int sigval1 = static_cast<int>(shape);
        slotFunc(self, sigval1);
    });
}

void QScatterSeries_MarkerSizeChanged(QScatterSeries* self, double size) {
    self->markerSizeChanged(static_cast<qreal>(size));
}

void QScatterSeries_Connect_MarkerSizeChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, double) = reinterpret_cast<void (*)(QScatterSeries*, double)>(slot);
    QScatterSeries::connect(self, &QScatterSeries::markerSizeChanged, [self, slotFunc](qreal size) {
        double sigval1 = static_cast<double>(size);
        slotFunc(self, sigval1);
    });
}

libqt_string QScatterSeries_Tr2(const char* s, const char* c) {
    QString _ret = QScatterSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScatterSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScatterSeries::tr(s, c, static_cast<int>(n));
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
int QScatterSeries_QBaseMetacall(QScatterSeries* self, int param1, int param2, void** param3) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Metacall_IsBase(true);
        return vqscatterseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QScatterSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnMetacall(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Metacall_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QScatterSeries_QBaseType(const QScatterSeries* self) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Type_IsBase(true);
        return static_cast<int>(vqscatterseries->type());
    } else {
        return static_cast<int>(self->QScatterSeries::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnType(const QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Type_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Type_Callback>(slot));
    }
}

// Base class handler implementation
void QScatterSeries_QBaseSetPen(QScatterSeries* self, const QPen* pen) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SetPen_IsBase(true);
        vqscatterseries->setPen(*pen);
    } else {
        self->QScatterSeries::setPen(*pen);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetPen(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SetPen_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetPen_Callback>(slot));
    }
}

// Base class handler implementation
void QScatterSeries_QBaseSetBrush(QScatterSeries* self, const QBrush* brush) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SetBrush_IsBase(true);
        vqscatterseries->setBrush(*brush);
    } else {
        self->QScatterSeries::setBrush(*brush);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetBrush(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SetBrush_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetBrush_Callback>(slot));
    }
}

// Base class handler implementation
void QScatterSeries_QBaseSetColor(QScatterSeries* self, const QColor* color) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SetColor_IsBase(true);
        vqscatterseries->setColor(*color);
    } else {
        self->QScatterSeries::setColor(*color);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetColor(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SetColor_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetColor_Callback>(slot));
    }
}

// Base class handler implementation
QColor* QScatterSeries_QBaseColor(const QScatterSeries* self) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Color_IsBase(true);
        return new QColor(vqscatterseries->color());
    } else {
        return new QColor(((VirtualQScatterSeries*)self)->color());
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnColor(const QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Color_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScatterSeries_Event(QScatterSeries* self, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return vqscatterseries->event(event);
    } else {
        return self->QScatterSeries::event(event);
    }
}

// Base class handler implementation
bool QScatterSeries_QBaseEvent(QScatterSeries* self, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Event_IsBase(true);
        return vqscatterseries->event(event);
    } else {
        return self->QScatterSeries::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnEvent(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Event_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScatterSeries_EventFilter(QScatterSeries* self, QObject* watched, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return vqscatterseries->eventFilter(watched, event);
    } else {
        return self->QScatterSeries::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QScatterSeries_QBaseEventFilter(QScatterSeries* self, QObject* watched, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_EventFilter_IsBase(true);
        return vqscatterseries->eventFilter(watched, event);
    } else {
        return self->QScatterSeries::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnEventFilter(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_EventFilter_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_TimerEvent(QScatterSeries* self, QTimerEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->timerEvent(event);
    } else {
        ((VirtualQScatterSeries*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseTimerEvent(QScatterSeries* self, QTimerEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_TimerEvent_IsBase(true);
        vqscatterseries->timerEvent(event);
    } else {
        ((VirtualQScatterSeries*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnTimerEvent(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_TimerEvent_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_ChildEvent(QScatterSeries* self, QChildEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->childEvent(event);
    } else {
        ((VirtualQScatterSeries*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseChildEvent(QScatterSeries* self, QChildEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_ChildEvent_IsBase(true);
        vqscatterseries->childEvent(event);
    } else {
        ((VirtualQScatterSeries*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnChildEvent(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_ChildEvent_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_CustomEvent(QScatterSeries* self, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->customEvent(event);
    } else {
        ((VirtualQScatterSeries*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseCustomEvent(QScatterSeries* self, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_CustomEvent_IsBase(true);
        vqscatterseries->customEvent(event);
    } else {
        ((VirtualQScatterSeries*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnCustomEvent(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_CustomEvent_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_ConnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->connectNotify(*signal);
    } else {
        ((VirtualQScatterSeries*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseConnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_ConnectNotify_IsBase(true);
        vqscatterseries->connectNotify(*signal);
    } else {
        ((VirtualQScatterSeries*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnConnectNotify(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_DisconnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->disconnectNotify(*signal);
    } else {
        ((VirtualQScatterSeries*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseDisconnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_DisconnectNotify_IsBase(true);
        vqscatterseries->disconnectNotify(*signal);
    } else {
        ((VirtualQScatterSeries*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnDisconnectNotify(QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScatterSeries_Sender(const QScatterSeries* self) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return vqscatterseries->sender();
    } else {
        return ((VirtualQScatterSeries*)self)->sender();
    }
}

// Base class handler implementation
QObject* QScatterSeries_QBaseSender(const QScatterSeries* self) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Sender_IsBase(true);
        return vqscatterseries->sender();
    } else {
        return ((VirtualQScatterSeries*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSender(const QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Sender_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScatterSeries_SenderSignalIndex(const QScatterSeries* self) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return vqscatterseries->senderSignalIndex();
    } else {
        return ((VirtualQScatterSeries*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QScatterSeries_QBaseSenderSignalIndex(const QScatterSeries* self) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SenderSignalIndex_IsBase(true);
        return vqscatterseries->senderSignalIndex();
    } else {
        return ((VirtualQScatterSeries*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSenderSignalIndex(const QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScatterSeries_Receivers(const QScatterSeries* self, const char* signal) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return vqscatterseries->receivers(signal);
    } else {
        return ((VirtualQScatterSeries*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QScatterSeries_QBaseReceivers(const QScatterSeries* self, const char* signal) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Receivers_IsBase(true);
        return vqscatterseries->receivers(signal);
    } else {
        return ((VirtualQScatterSeries*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnReceivers(const QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_Receivers_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScatterSeries_IsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        return vqscatterseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQScatterSeries*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScatterSeries_QBaseIsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_IsSignalConnected_IsBase(true);
        return vqscatterseries->isSignalConnected(*signal);
    } else {
        return ((VirtualQScatterSeries*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnIsSignalConnected(const QScatterSeries* self, intptr_t slot) {
    auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self));
    if (vqscatterseries && vqscatterseries->isVirtualQScatterSeries) {
        vqscatterseries->setQScatterSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_IsSignalConnected_Callback>(slot));
    }
}

void QScatterSeries_Delete(QScatterSeries* self) {
    delete self;
}
