#include <QAbstractAxis>
#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QAnyStringView>
#include <QBarSet>
#include <QBindingStorage>
#include <QByteArray>
#include <QChart>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalBarSeries>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qhorizontalbarseries.h>
#include "libqhorizontalbarseries.h"
#include "libqhorizontalbarseries.hxx"

QHorizontalBarSeries* QHorizontalBarSeries_new() {
    return new VirtualQHorizontalBarSeries();
}

QHorizontalBarSeries* QHorizontalBarSeries_new2(QObject* parent) {
    return new VirtualQHorizontalBarSeries(parent);
}

QMetaObject* QHorizontalBarSeries_MetaObject(const QHorizontalBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHorizontalBarSeries_Metacast(QHorizontalBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHorizontalBarSeries_Metacall(QHorizontalBarSeries* self, int param1, int param2, void** param3) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHorizontalBarSeries_OnMetacall(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Metacall_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHorizontalBarSeries_QBaseMetacall(QHorizontalBarSeries* self, int param1, int param2, void** param3) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Metacall_IsBase(true);
        return vqhorizontalbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHorizontalBarSeries_Tr(const char* s) {
    QString _ret = QHorizontalBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QHorizontalBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHorizontalBarSeries::tr(s, c, static_cast<int>(n));
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
int QHorizontalBarSeries_Type(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return static_cast<int>(vqhorizontalbarseries->type());
    } else {
        return static_cast<int>(vqhorizontalbarseries->type());
    }
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseType(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Type_IsBase(true);
        return static_cast<int>(vqhorizontalbarseries->type());
    } else {
        return static_cast<int>(vqhorizontalbarseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnType(const QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Type_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalBarSeries_Event(QHorizontalBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        return vqhorizontalbarseries->event(event);
    } else {
        return vqhorizontalbarseries->event(event);
    }
}

// Base class handler implementation
bool QHorizontalBarSeries_QBaseEvent(QHorizontalBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Event_IsBase(true);
        return vqhorizontalbarseries->event(event);
    } else {
        return vqhorizontalbarseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Event_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalBarSeries_EventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        return vqhorizontalbarseries->eventFilter(watched, event);
    } else {
        return vqhorizontalbarseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHorizontalBarSeries_QBaseEventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_EventFilter_IsBase(true);
        return vqhorizontalbarseries->eventFilter(watched, event);
    } else {
        return vqhorizontalbarseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnEventFilter(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_TimerEvent(QHorizontalBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->timerEvent(event);
    } else {
        vqhorizontalbarseries->timerEvent(event);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_TimerEvent_IsBase(true);
        vqhorizontalbarseries->timerEvent(event);
    } else {
        vqhorizontalbarseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnTimerEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_ChildEvent(QHorizontalBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->childEvent(event);
    } else {
        vqhorizontalbarseries->childEvent(event);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseChildEvent(QHorizontalBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ChildEvent_IsBase(true);
        vqhorizontalbarseries->childEvent(event);
    } else {
        vqhorizontalbarseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnChildEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_CustomEvent(QHorizontalBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->customEvent(event);
    } else {
        vqhorizontalbarseries->customEvent(event);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseCustomEvent(QHorizontalBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_CustomEvent_IsBase(true);
        vqhorizontalbarseries->customEvent(event);
    } else {
        vqhorizontalbarseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnCustomEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_ConnectNotify(QHorizontalBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->connectNotify(*signal);
    } else {
        vqhorizontalbarseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseConnectNotify(QHorizontalBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ConnectNotify_IsBase(true);
        vqhorizontalbarseries->connectNotify(*signal);
    } else {
        vqhorizontalbarseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnConnectNotify(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalBarSeries_DisconnectNotify(QHorizontalBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->disconnectNotify(*signal);
    } else {
        vqhorizontalbarseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalBarSeries_QBaseDisconnectNotify(QHorizontalBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_DisconnectNotify_IsBase(true);
        vqhorizontalbarseries->disconnectNotify(*signal);
    } else {
        vqhorizontalbarseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnDisconnectNotify(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->setQHorizontalBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHorizontalBarSeries_Sender(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->sender();
    } else {
        return vqhorizontalbarseries->sender();
    }
}

// Base class handler implementation
QObject* QHorizontalBarSeries_QBaseSender(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Sender_IsBase(true);
        return vqhorizontalbarseries->sender();
    } else {
        return vqhorizontalbarseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnSender(const QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Sender_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalBarSeries_SenderSignalIndex(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->senderSignalIndex();
    } else {
        return vqhorizontalbarseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseSenderSignalIndex(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_SenderSignalIndex_IsBase(true);
        return vqhorizontalbarseries->senderSignalIndex();
    } else {
        return vqhorizontalbarseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnSenderSignalIndex(const QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalBarSeries_Receivers(const QHorizontalBarSeries* self, const char* signal) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->receivers(signal);
    } else {
        return vqhorizontalbarseries->receivers(signal);
    }
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseReceivers(const QHorizontalBarSeries* self, const char* signal) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Receivers_IsBase(true);
        return vqhorizontalbarseries->receivers(signal);
    } else {
        return vqhorizontalbarseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnReceivers(const QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_Receivers_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalBarSeries_IsSignalConnected(const QHorizontalBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->isSignalConnected(*signal);
    } else {
        return vqhorizontalbarseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHorizontalBarSeries_QBaseIsSignalConnected(const QHorizontalBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_IsSignalConnected_IsBase(true);
        return vqhorizontalbarseries->isSignalConnected(*signal);
    } else {
        return vqhorizontalbarseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnIsSignalConnected(const QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        vqhorizontalbarseries->setQHorizontalBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QHorizontalBarSeries_Delete(QHorizontalBarSeries* self) {
    delete self;
}
