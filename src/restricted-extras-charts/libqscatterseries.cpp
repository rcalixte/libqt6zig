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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScatterSeries_Tr(const char* s) {
    auto _ret = QScatterSeries::tr(s);
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
    return static_cast<int>(self->type());
}

void QScatterSeries_SetPen(QScatterSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

void QScatterSeries_SetBrush(QScatterSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QScatterSeries_Brush(const QScatterSeries* self) {
    return new QBrush(self->brush());
}

void QScatterSeries_SetColor(QScatterSeries* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QScatterSeries_Color(const QScatterSeries* self) {
    return new QColor(self->color());
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
    QScatterSeries::connect(self,
                            static_cast<void (QScatterSeries::*)(QColor)>(&QScatterSeries::colorChanged),
                            [self, slotFunc](QColor color) {
                                QColor* sigval1 = new QColor(color);
                                slotFunc(self, sigval1);
                            });
}

void QScatterSeries_BorderColorChanged(QScatterSeries* self, QColor* color) {
    self->borderColorChanged(*color);
}

void QScatterSeries_Connect_BorderColorChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, QColor*) = reinterpret_cast<void (*)(QScatterSeries*, QColor*)>(slot);
    QScatterSeries::connect(self,
                            static_cast<void (QScatterSeries::*)(QColor)>(&QScatterSeries::borderColorChanged),
                            [self, slotFunc](QColor color) {
                                QColor* sigval1 = new QColor(color);
                                slotFunc(self, sigval1);
                            });
}

void QScatterSeries_MarkerShapeChanged(QScatterSeries* self, int shape) {
    self->markerShapeChanged(static_cast<QScatterSeries::MarkerShape>(shape));
}

void QScatterSeries_Connect_MarkerShapeChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, int) = reinterpret_cast<void (*)(QScatterSeries*, int)>(slot);
    QScatterSeries::connect(self,
                            static_cast<void (QScatterSeries::*)(QScatterSeries::MarkerShape)>(&QScatterSeries::markerShapeChanged),
                            [self, slotFunc](QScatterSeries::MarkerShape shape) {
                                int sigval1 = static_cast<int>(shape);
                                slotFunc(self, sigval1);
                            });
}

void QScatterSeries_MarkerSizeChanged(QScatterSeries* self, double size) {
    self->markerSizeChanged(static_cast<qreal>(size));
}

void QScatterSeries_Connect_MarkerSizeChanged(QScatterSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatterSeries*, double) = reinterpret_cast<void (*)(QScatterSeries*, double)>(slot);
    QScatterSeries::connect(self,
                            static_cast<void (QScatterSeries::*)(qreal)>(&QScatterSeries::markerSizeChanged),
                            [self, slotFunc](qreal size) {
                                double sigval1 = static_cast<double>(size);
                                slotFunc(self, sigval1);
                            });
}

libqt_string QScatterSeries_Tr2(const char* s, const char* c) {
    auto _ret = QScatterSeries::tr(s, c);
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
    auto _ret = QScatterSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QScatterSeries_SuperMetaObject(const QScatterSeries* self) {
    return (QMetaObject*)self->QScatterSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnMetaObject(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self)))
        vqscatterseries->qscatterseries_metaobject_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QScatterSeries_SuperMetacast(QScatterSeries* self, const char* param1) {
    return self->QScatterSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnMetacast(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_metacast_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QScatterSeries_SuperMetacall(QScatterSeries* self, int param1, int param2, void** param3) {
    return self->QScatterSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnMetacall(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_metacall_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QScatterSeries_SuperType(const QScatterSeries* self) {
    return static_cast<int>(self->QScatterSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnType(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self)))
        vqscatterseries->qscatterseries_type_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Type_Callback>(slot);
}

// Base class handler implementation
void QScatterSeries_SuperSetPen(QScatterSeries* self, const QPen* pen) {
    self->QScatterSeries::setPen(*pen);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetPen(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_setpen_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetPen_Callback>(slot);
}

// Base class handler implementation
void QScatterSeries_SuperSetBrush(QScatterSeries* self, const QBrush* brush) {
    self->QScatterSeries::setBrush(*brush);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetBrush(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_setbrush_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetBrush_Callback>(slot);
}

// Base class handler implementation
void QScatterSeries_SuperSetColor(QScatterSeries* self, const QColor* color) {
    self->QScatterSeries::setColor(*color);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetColor(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_setcolor_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetColor_Callback>(slot);
}

// Base class handler implementation
QColor* QScatterSeries_SuperColor(const QScatterSeries* self) {
    return new QColor(self->QScatterSeries::color());
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnColor(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self)))
        vqscatterseries->qscatterseries_color_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Color_Callback>(slot);
}

// Derived class handler implementation
bool QScatterSeries_Event(QScatterSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QScatterSeries_SuperEvent(QScatterSeries* self, QEvent* event) {
    return self->QScatterSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_event_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QScatterSeries_EventFilter(QScatterSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QScatterSeries_SuperEventFilter(QScatterSeries* self, QObject* watched, QEvent* event) {
    return self->QScatterSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnEventFilter(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_eventfilter_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QScatterSeries_TimerEvent(QScatterSeries* self, QTimerEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries) {
        vqscatterseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatterSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterSeries_SuperTimerEvent(QScatterSeries* self, QTimerEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->QScatterSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatterSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnTimerEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_timerevent_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatterSeries_ChildEvent(QScatterSeries* self, QChildEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries) {
        vqscatterseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatterSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterSeries_SuperChildEvent(QScatterSeries* self, QChildEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->QScatterSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatterSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnChildEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_childevent_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatterSeries_CustomEvent(QScatterSeries* self, QEvent* event) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries) {
        vqscatterseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatterSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterSeries_SuperCustomEvent(QScatterSeries* self, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->QScatterSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatterSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnCustomEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_customevent_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatterSeries_ConnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries) {
        vqscatterseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScatterSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterSeries_SuperConnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->QScatterSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScatterSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnConnectNotify(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_connectnotify_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QScatterSeries_DisconnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self);
    if (vqscatterseries) {
        vqscatterseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScatterSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterSeries_SuperDisconnectNotify(QScatterSeries* self, const QMetaMethod* signal) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->QScatterSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScatterSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnDisconnectNotify(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self))
        vqscatterseries->qscatterseries_disconnectnotify_callback = reinterpret_cast<VirtualQScatterSeries::QScatterSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QScatterSeries_Sender(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->VirtualQScatterSeries::sender();
    } else
        qFatal("Error: Protected method QScatterSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QScatterSeries_SenderSignalIndex(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->VirtualQScatterSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QScatterSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QScatterSeries_Receivers(const QScatterSeries* self, const char* signal) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->VirtualQScatterSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QScatterSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScatterSeries_IsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->VirtualQScatterSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QScatterSeries::isSignalConnected called without a directly constructed type");
}

void QScatterSeries_Delete(QScatterSeries* self) {
    delete self;
}
