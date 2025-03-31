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
#include <QSplineSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
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
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplineSeries_OnMetacall(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_Metacall_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplineSeries_QBaseMetacall(QSplineSeries* self, int param1, int param2, void** param3) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_Metacall_IsBase(true);
        return vqsplineseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
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
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return static_cast<int>(vqsplineseries->type());
    } else {
        return static_cast<int>(vqsplineseries->type());
    }
}

// Base class handler implementation
int QSplineSeries_QBaseType(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Type_IsBase(true);
        return static_cast<int>(vqsplineseries->type());
    } else {
        return static_cast<int>(vqsplineseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnType(const QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Type_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_SetPen(QSplineSeries* self, QPen* pen) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setPen(*pen);
    } else {
        vqsplineseries->setPen(*pen);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseSetPen(QSplineSeries* self, QPen* pen) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_SetPen_IsBase(true);
        vqsplineseries->setPen(*pen);
    } else {
        vqsplineseries->setPen(*pen);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetPen(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_SetPen_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetPen_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_SetBrush(QSplineSeries* self, QBrush* brush) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setBrush(*brush);
    } else {
        vqsplineseries->setBrush(*brush);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseSetBrush(QSplineSeries* self, QBrush* brush) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_SetBrush_IsBase(true);
        vqsplineseries->setBrush(*brush);
    } else {
        vqsplineseries->setBrush(*brush);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetBrush(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_SetBrush_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetBrush_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_SetColor(QSplineSeries* self, QColor* color) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setColor(*color);
    } else {
        vqsplineseries->setColor(*color);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseSetColor(QSplineSeries* self, QColor* color) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_SetColor_IsBase(true);
        vqsplineseries->setColor(*color);
    } else {
        vqsplineseries->setColor(*color);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetColor(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_SetColor_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QSplineSeries_Color(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return new QColor(vqsplineseries->color());
    } else {
        return new QColor(self->color());
    }
}

// Base class handler implementation
QColor* QSplineSeries_QBaseColor(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Color_IsBase(true);
        return new QColor(vqsplineseries->color());
    } else {
        return new QColor(self->color());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnColor(const QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Color_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplineSeries_Event(QSplineSeries* self, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        return vqsplineseries->event(event);
    } else {
        return vqsplineseries->event(event);
    }
}

// Base class handler implementation
bool QSplineSeries_QBaseEvent(QSplineSeries* self, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_Event_IsBase(true);
        return vqsplineseries->event(event);
    } else {
        return vqsplineseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_Event_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplineSeries_EventFilter(QSplineSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        return vqsplineseries->eventFilter(watched, event);
    } else {
        return vqsplineseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplineSeries_QBaseEventFilter(QSplineSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_EventFilter_IsBase(true);
        return vqsplineseries->eventFilter(watched, event);
    } else {
        return vqsplineseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnEventFilter(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_EventFilter_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_TimerEvent(QSplineSeries* self, QTimerEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->timerEvent(event);
    } else {
        vqsplineseries->timerEvent(event);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseTimerEvent(QSplineSeries* self, QTimerEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_TimerEvent_IsBase(true);
        vqsplineseries->timerEvent(event);
    } else {
        vqsplineseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnTimerEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_TimerEvent_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_ChildEvent(QSplineSeries* self, QChildEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->childEvent(event);
    } else {
        vqsplineseries->childEvent(event);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseChildEvent(QSplineSeries* self, QChildEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_ChildEvent_IsBase(true);
        vqsplineseries->childEvent(event);
    } else {
        vqsplineseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnChildEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_ChildEvent_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_CustomEvent(QSplineSeries* self, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->customEvent(event);
    } else {
        vqsplineseries->customEvent(event);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseCustomEvent(QSplineSeries* self, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_CustomEvent_IsBase(true);
        vqsplineseries->customEvent(event);
    } else {
        vqsplineseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnCustomEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_CustomEvent_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_ConnectNotify(QSplineSeries* self, QMetaMethod* signal) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->connectNotify(*signal);
    } else {
        vqsplineseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseConnectNotify(QSplineSeries* self, QMetaMethod* signal) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_ConnectNotify_IsBase(true);
        vqsplineseries->connectNotify(*signal);
    } else {
        vqsplineseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnConnectNotify(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplineSeries_DisconnectNotify(QSplineSeries* self, QMetaMethod* signal) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->disconnectNotify(*signal);
    } else {
        vqsplineseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplineSeries_QBaseDisconnectNotify(QSplineSeries* self, QMetaMethod* signal) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_DisconnectNotify_IsBase(true);
        vqsplineseries->disconnectNotify(*signal);
    } else {
        vqsplineseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnDisconnectNotify(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->setQSplineSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplineSeries_Sender(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->sender();
    } else {
        return vqsplineseries->sender();
    }
}

// Base class handler implementation
QObject* QSplineSeries_QBaseSender(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Sender_IsBase(true);
        return vqsplineseries->sender();
    } else {
        return vqsplineseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSender(const QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Sender_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplineSeries_SenderSignalIndex(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->senderSignalIndex();
    } else {
        return vqsplineseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplineSeries_QBaseSenderSignalIndex(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_SenderSignalIndex_IsBase(true);
        return vqsplineseries->senderSignalIndex();
    } else {
        return vqsplineseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSenderSignalIndex(const QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplineSeries_Receivers(const QSplineSeries* self, const char* signal) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->receivers(signal);
    } else {
        return vqsplineseries->receivers(signal);
    }
}

// Base class handler implementation
int QSplineSeries_QBaseReceivers(const QSplineSeries* self, const char* signal) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Receivers_IsBase(true);
        return vqsplineseries->receivers(signal);
    } else {
        return vqsplineseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnReceivers(const QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_Receivers_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplineSeries_IsSignalConnected(const QSplineSeries* self, QMetaMethod* signal) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->isSignalConnected(*signal);
    } else {
        return vqsplineseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplineSeries_QBaseIsSignalConnected(const QSplineSeries* self, QMetaMethod* signal) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_IsSignalConnected_IsBase(true);
        return vqsplineseries->isSignalConnected(*signal);
    } else {
        return vqsplineseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnIsSignalConnected(const QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        vqsplineseries->setQSplineSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_IsSignalConnected_Callback>(slot));
    }
}

void QSplineSeries_Delete(QSplineSeries* self) {
    delete self;
}
