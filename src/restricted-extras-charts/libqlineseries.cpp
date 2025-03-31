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
#include <QLineSeries>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QXYSeries>
#include <qlineseries.h>
#include "libqlineseries.h"
#include "libqlineseries.hxx"

QLineSeries* QLineSeries_new() {
    return new VirtualQLineSeries();
}

QLineSeries* QLineSeries_new2(QObject* parent) {
    return new VirtualQLineSeries(parent);
}

QMetaObject* QLineSeries_MetaObject(const QLineSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLineSeries_Metacast(QLineSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLineSeries_Metacall(QLineSeries* self, int param1, int param2, void** param3) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLineSeries_OnMetacall(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_Metacall_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLineSeries_QBaseMetacall(QLineSeries* self, int param1, int param2, void** param3) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_Metacall_IsBase(true);
        return vqlineseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLineSeries_Tr(const char* s) {
    QString _ret = QLineSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLineSeries_Tr2(const char* s, const char* c) {
    QString _ret = QLineSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLineSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLineSeries::tr(s, c, static_cast<int>(n));
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
int QLineSeries_Type(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return static_cast<int>(vqlineseries->type());
    } else {
        return static_cast<int>(vqlineseries->type());
    }
}

// Base class handler implementation
int QLineSeries_QBaseType(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Type_IsBase(true);
        return static_cast<int>(vqlineseries->type());
    } else {
        return static_cast<int>(vqlineseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnType(const QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Type_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_SetPen(QLineSeries* self, QPen* pen) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setPen(*pen);
    } else {
        vqlineseries->setPen(*pen);
    }
}

// Base class handler implementation
void QLineSeries_QBaseSetPen(QLineSeries* self, QPen* pen) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_SetPen_IsBase(true);
        vqlineseries->setPen(*pen);
    } else {
        vqlineseries->setPen(*pen);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetPen(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_SetPen_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SetPen_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_SetBrush(QLineSeries* self, QBrush* brush) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setBrush(*brush);
    } else {
        vqlineseries->setBrush(*brush);
    }
}

// Base class handler implementation
void QLineSeries_QBaseSetBrush(QLineSeries* self, QBrush* brush) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_SetBrush_IsBase(true);
        vqlineseries->setBrush(*brush);
    } else {
        vqlineseries->setBrush(*brush);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetBrush(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_SetBrush_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SetBrush_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_SetColor(QLineSeries* self, QColor* color) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setColor(*color);
    } else {
        vqlineseries->setColor(*color);
    }
}

// Base class handler implementation
void QLineSeries_QBaseSetColor(QLineSeries* self, QColor* color) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_SetColor_IsBase(true);
        vqlineseries->setColor(*color);
    } else {
        vqlineseries->setColor(*color);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetColor(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_SetColor_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QLineSeries_Color(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return new QColor(vqlineseries->color());
    } else {
        return new QColor(self->color());
    }
}

// Base class handler implementation
QColor* QLineSeries_QBaseColor(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Color_IsBase(true);
        return new QColor(vqlineseries->color());
    } else {
        return new QColor(self->color());
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnColor(const QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Color_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineSeries_Event(QLineSeries* self, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        return vqlineseries->event(event);
    } else {
        return vqlineseries->event(event);
    }
}

// Base class handler implementation
bool QLineSeries_QBaseEvent(QLineSeries* self, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_Event_IsBase(true);
        return vqlineseries->event(event);
    } else {
        return vqlineseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_Event_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineSeries_EventFilter(QLineSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        return vqlineseries->eventFilter(watched, event);
    } else {
        return vqlineseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLineSeries_QBaseEventFilter(QLineSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_EventFilter_IsBase(true);
        return vqlineseries->eventFilter(watched, event);
    } else {
        return vqlineseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnEventFilter(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_EventFilter_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_TimerEvent(QLineSeries* self, QTimerEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->timerEvent(event);
    } else {
        vqlineseries->timerEvent(event);
    }
}

// Base class handler implementation
void QLineSeries_QBaseTimerEvent(QLineSeries* self, QTimerEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_TimerEvent_IsBase(true);
        vqlineseries->timerEvent(event);
    } else {
        vqlineseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnTimerEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_TimerEvent_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_ChildEvent(QLineSeries* self, QChildEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->childEvent(event);
    } else {
        vqlineseries->childEvent(event);
    }
}

// Base class handler implementation
void QLineSeries_QBaseChildEvent(QLineSeries* self, QChildEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_ChildEvent_IsBase(true);
        vqlineseries->childEvent(event);
    } else {
        vqlineseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnChildEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_ChildEvent_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_CustomEvent(QLineSeries* self, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->customEvent(event);
    } else {
        vqlineseries->customEvent(event);
    }
}

// Base class handler implementation
void QLineSeries_QBaseCustomEvent(QLineSeries* self, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_CustomEvent_IsBase(true);
        vqlineseries->customEvent(event);
    } else {
        vqlineseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnCustomEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_CustomEvent_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_ConnectNotify(QLineSeries* self, QMetaMethod* signal) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->connectNotify(*signal);
    } else {
        vqlineseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLineSeries_QBaseConnectNotify(QLineSeries* self, QMetaMethod* signal) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_ConnectNotify_IsBase(true);
        vqlineseries->connectNotify(*signal);
    } else {
        vqlineseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnConnectNotify(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineSeries_DisconnectNotify(QLineSeries* self, QMetaMethod* signal) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->disconnectNotify(*signal);
    } else {
        vqlineseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLineSeries_QBaseDisconnectNotify(QLineSeries* self, QMetaMethod* signal) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_DisconnectNotify_IsBase(true);
        vqlineseries->disconnectNotify(*signal);
    } else {
        vqlineseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnDisconnectNotify(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->setQLineSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLineSeries_Sender(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->sender();
    } else {
        return vqlineseries->sender();
    }
}

// Base class handler implementation
QObject* QLineSeries_QBaseSender(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Sender_IsBase(true);
        return vqlineseries->sender();
    } else {
        return vqlineseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSender(const QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Sender_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineSeries_SenderSignalIndex(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->senderSignalIndex();
    } else {
        return vqlineseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QLineSeries_QBaseSenderSignalIndex(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_SenderSignalIndex_IsBase(true);
        return vqlineseries->senderSignalIndex();
    } else {
        return vqlineseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSenderSignalIndex(const QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineSeries_Receivers(const QLineSeries* self, const char* signal) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->receivers(signal);
    } else {
        return vqlineseries->receivers(signal);
    }
}

// Base class handler implementation
int QLineSeries_QBaseReceivers(const QLineSeries* self, const char* signal) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Receivers_IsBase(true);
        return vqlineseries->receivers(signal);
    } else {
        return vqlineseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnReceivers(const QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_Receivers_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineSeries_IsSignalConnected(const QLineSeries* self, QMetaMethod* signal) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->isSignalConnected(*signal);
    } else {
        return vqlineseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLineSeries_QBaseIsSignalConnected(const QLineSeries* self, QMetaMethod* signal) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_IsSignalConnected_IsBase(true);
        return vqlineseries->isSignalConnected(*signal);
    } else {
        return vqlineseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnIsSignalConnected(const QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        vqlineseries->setQLineSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_IsSignalConnected_Callback>(slot));
    }
}

void QLineSeries_Delete(QLineSeries* self) {
    delete self;
}
