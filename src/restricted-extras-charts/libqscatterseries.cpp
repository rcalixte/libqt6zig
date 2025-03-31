#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChart>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QImage>
#include <QLinearGradient>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPair>
#include <QPen>
#include <QPointF>
#include <QScatterSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
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
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QScatterSeries_OnMetacall(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_Metacall_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QScatterSeries_QBaseMetacall(QScatterSeries* self, int param1, int param2, void** param3) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_Metacall_IsBase(true);
        return vqscatterseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScatterSeries_Tr(const char* s) {
    QString _ret = QScatterSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QBrush* QScatterSeries_Brush(const QScatterSeries* self) {
    return new QBrush(self->brush());
}

void QScatterSeries_SetBorderColor(QScatterSeries* self, QColor* color) {
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QScatterSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScatterSeries::tr(s, c, static_cast<int>(n));
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
int QScatterSeries_Type(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return static_cast<int>(vqscatterseries->type());
    } else {
        return static_cast<int>(vqscatterseries->type());
    }
}

// Base class handler implementation
int QScatterSeries_QBaseType(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Type_IsBase(true);
        return static_cast<int>(vqscatterseries->type());
    } else {
        return static_cast<int>(vqscatterseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnType(const QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Type_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_SetPen(QScatterSeries* self, QPen* pen) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setPen(*pen);
    } else {
        vqscatterseries->setPen(*pen);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseSetPen(QScatterSeries* self, QPen* pen) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_SetPen_IsBase(true);
        vqscatterseries->setPen(*pen);
    } else {
        vqscatterseries->setPen(*pen);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetPen(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_SetPen_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetPen_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_SetBrush(QScatterSeries* self, QBrush* brush) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setBrush(*brush);
    } else {
        vqscatterseries->setBrush(*brush);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseSetBrush(QScatterSeries* self, QBrush* brush) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_SetBrush_IsBase(true);
        vqscatterseries->setBrush(*brush);
    } else {
        vqscatterseries->setBrush(*brush);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetBrush(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_SetBrush_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetBrush_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_SetColor(QScatterSeries* self, QColor* color) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setColor(*color);
    } else {
        vqscatterseries->setColor(*color);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseSetColor(QScatterSeries* self, QColor* color) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_SetColor_IsBase(true);
        vqscatterseries->setColor(*color);
    } else {
        vqscatterseries->setColor(*color);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSetColor(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_SetColor_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QScatterSeries_Color(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return new QColor(vqscatterseries->color());
    } else {
        return new QColor(self->color());
    }
}

// Base class handler implementation
QColor* QScatterSeries_QBaseColor(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Color_IsBase(true);
        return new QColor(vqscatterseries->color());
    } else {
        return new QColor(self->color());
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnColor(const QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Color_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScatterSeries_Event(QScatterSeries* self, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        return vqscatterseries->event(event);
    } else {
        return vqscatterseries->event(event);
    }
}

// Base class handler implementation
bool QScatterSeries_QBaseEvent(QScatterSeries* self, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_Event_IsBase(true);
        return vqscatterseries->event(event);
    } else {
        return vqscatterseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_Event_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScatterSeries_EventFilter(QScatterSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        return vqscatterseries->eventFilter(watched, event);
    } else {
        return vqscatterseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QScatterSeries_QBaseEventFilter(QScatterSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_EventFilter_IsBase(true);
        return vqscatterseries->eventFilter(watched, event);
    } else {
        return vqscatterseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnEventFilter(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_EventFilter_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_TimerEvent(QScatterSeries* self, QTimerEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->timerEvent(event);
    } else {
        vqscatterseries->timerEvent(event);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseTimerEvent(QScatterSeries* self, QTimerEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_TimerEvent_IsBase(true);
        vqscatterseries->timerEvent(event);
    } else {
        vqscatterseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnTimerEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_TimerEvent_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_ChildEvent(QScatterSeries* self, QChildEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->childEvent(event);
    } else {
        vqscatterseries->childEvent(event);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseChildEvent(QScatterSeries* self, QChildEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_ChildEvent_IsBase(true);
        vqscatterseries->childEvent(event);
    } else {
        vqscatterseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnChildEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_ChildEvent_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_CustomEvent(QScatterSeries* self, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->customEvent(event);
    } else {
        vqscatterseries->customEvent(event);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseCustomEvent(QScatterSeries* self, QEvent* event) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_CustomEvent_IsBase(true);
        vqscatterseries->customEvent(event);
    } else {
        vqscatterseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnCustomEvent(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_CustomEvent_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_ConnectNotify(QScatterSeries* self, QMetaMethod* signal) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->connectNotify(*signal);
    } else {
        vqscatterseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseConnectNotify(QScatterSeries* self, QMetaMethod* signal) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_ConnectNotify_IsBase(true);
        vqscatterseries->connectNotify(*signal);
    } else {
        vqscatterseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnConnectNotify(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScatterSeries_DisconnectNotify(QScatterSeries* self, QMetaMethod* signal) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->disconnectNotify(*signal);
    } else {
        vqscatterseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScatterSeries_QBaseDisconnectNotify(QScatterSeries* self, QMetaMethod* signal) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_DisconnectNotify_IsBase(true);
        vqscatterseries->disconnectNotify(*signal);
    } else {
        vqscatterseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnDisconnectNotify(QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = dynamic_cast<VirtualQScatterSeries*>(self)) {
        vqscatterseries->setQScatterSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScatterSeries_Sender(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->sender();
    } else {
        return vqscatterseries->sender();
    }
}

// Base class handler implementation
QObject* QScatterSeries_QBaseSender(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Sender_IsBase(true);
        return vqscatterseries->sender();
    } else {
        return vqscatterseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSender(const QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Sender_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScatterSeries_SenderSignalIndex(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->senderSignalIndex();
    } else {
        return vqscatterseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QScatterSeries_QBaseSenderSignalIndex(const QScatterSeries* self) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_SenderSignalIndex_IsBase(true);
        return vqscatterseries->senderSignalIndex();
    } else {
        return vqscatterseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnSenderSignalIndex(const QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScatterSeries_Receivers(const QScatterSeries* self, const char* signal) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->receivers(signal);
    } else {
        return vqscatterseries->receivers(signal);
    }
}

// Base class handler implementation
int QScatterSeries_QBaseReceivers(const QScatterSeries* self, const char* signal) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Receivers_IsBase(true);
        return vqscatterseries->receivers(signal);
    } else {
        return vqscatterseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnReceivers(const QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_Receivers_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScatterSeries_IsSignalConnected(const QScatterSeries* self, QMetaMethod* signal) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        return vqscatterseries->isSignalConnected(*signal);
    } else {
        return vqscatterseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScatterSeries_QBaseIsSignalConnected(const QScatterSeries* self, QMetaMethod* signal) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_IsSignalConnected_IsBase(true);
        return vqscatterseries->isSignalConnected(*signal);
    } else {
        return vqscatterseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScatterSeries_OnIsSignalConnected(const QScatterSeries* self, intptr_t slot) {
    if (auto* vqscatterseries = const_cast<VirtualQScatterSeries*>(dynamic_cast<const VirtualQScatterSeries*>(self))) {
        vqscatterseries->setQScatterSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQScatterSeries::QScatterSeries_IsSignalConnected_Callback>(slot));
    }
}

void QScatterSeries_Delete(QScatterSeries* self) {
    delete self;
}
