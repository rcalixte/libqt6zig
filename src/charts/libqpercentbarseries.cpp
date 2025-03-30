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
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPercentBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
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
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPercentBarSeries_OnMetacall(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_Metacall_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPercentBarSeries_QBaseMetacall(QPercentBarSeries* self, int param1, int param2, void** param3) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_Metacall_IsBase(true);
        return vqpercentbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPercentBarSeries_Tr(const char* s) {
    QString _ret = QPercentBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPercentBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QPercentBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPercentBarSeries::tr(s, c, static_cast<int>(n));
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
int QPercentBarSeries_Type(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return static_cast<int>(vqpercentbarseries->type());
    } else {
        return static_cast<int>(vqpercentbarseries->type());
    }
}

// Base class handler implementation
int QPercentBarSeries_QBaseType(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_Type_IsBase(true);
        return static_cast<int>(vqpercentbarseries->type());
    } else {
        return static_cast<int>(vqpercentbarseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnType(const QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_Type_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPercentBarSeries_Event(QPercentBarSeries* self, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        return vqpercentbarseries->event(event);
    } else {
        return vqpercentbarseries->event(event);
    }
}

// Base class handler implementation
bool QPercentBarSeries_QBaseEvent(QPercentBarSeries* self, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_Event_IsBase(true);
        return vqpercentbarseries->event(event);
    } else {
        return vqpercentbarseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_Event_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPercentBarSeries_EventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        return vqpercentbarseries->eventFilter(watched, event);
    } else {
        return vqpercentbarseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPercentBarSeries_QBaseEventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_EventFilter_IsBase(true);
        return vqpercentbarseries->eventFilter(watched, event);
    } else {
        return vqpercentbarseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnEventFilter(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_TimerEvent(QPercentBarSeries* self, QTimerEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->timerEvent(event);
    } else {
        vqpercentbarseries->timerEvent(event);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseTimerEvent(QPercentBarSeries* self, QTimerEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_TimerEvent_IsBase(true);
        vqpercentbarseries->timerEvent(event);
    } else {
        vqpercentbarseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnTimerEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_ChildEvent(QPercentBarSeries* self, QChildEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->childEvent(event);
    } else {
        vqpercentbarseries->childEvent(event);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseChildEvent(QPercentBarSeries* self, QChildEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_ChildEvent_IsBase(true);
        vqpercentbarseries->childEvent(event);
    } else {
        vqpercentbarseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnChildEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_CustomEvent(QPercentBarSeries* self, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->customEvent(event);
    } else {
        vqpercentbarseries->customEvent(event);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseCustomEvent(QPercentBarSeries* self, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_CustomEvent_IsBase(true);
        vqpercentbarseries->customEvent(event);
    } else {
        vqpercentbarseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnCustomEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_ConnectNotify(QPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->connectNotify(*signal);
    } else {
        vqpercentbarseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseConnectNotify(QPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_ConnectNotify_IsBase(true);
        vqpercentbarseries->connectNotify(*signal);
    } else {
        vqpercentbarseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnConnectNotify(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPercentBarSeries_DisconnectNotify(QPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->disconnectNotify(*signal);
    } else {
        vqpercentbarseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPercentBarSeries_QBaseDisconnectNotify(QPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_DisconnectNotify_IsBase(true);
        vqpercentbarseries->disconnectNotify(*signal);
    } else {
        vqpercentbarseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnDisconnectNotify(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->setQPercentBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPercentBarSeries_Sender(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->sender();
    } else {
        return vqpercentbarseries->sender();
    }
}

// Base class handler implementation
QObject* QPercentBarSeries_QBaseSender(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_Sender_IsBase(true);
        return vqpercentbarseries->sender();
    } else {
        return vqpercentbarseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnSender(const QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_Sender_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPercentBarSeries_SenderSignalIndex(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->senderSignalIndex();
    } else {
        return vqpercentbarseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QPercentBarSeries_QBaseSenderSignalIndex(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_SenderSignalIndex_IsBase(true);
        return vqpercentbarseries->senderSignalIndex();
    } else {
        return vqpercentbarseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnSenderSignalIndex(const QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPercentBarSeries_Receivers(const QPercentBarSeries* self, const char* signal) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->receivers(signal);
    } else {
        return vqpercentbarseries->receivers(signal);
    }
}

// Base class handler implementation
int QPercentBarSeries_QBaseReceivers(const QPercentBarSeries* self, const char* signal) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_Receivers_IsBase(true);
        return vqpercentbarseries->receivers(signal);
    } else {
        return vqpercentbarseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnReceivers(const QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_Receivers_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPercentBarSeries_IsSignalConnected(const QPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->isSignalConnected(*signal);
    } else {
        return vqpercentbarseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPercentBarSeries_QBaseIsSignalConnected(const QPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_IsSignalConnected_IsBase(true);
        return vqpercentbarseries->isSignalConnected(*signal);
    } else {
        return vqpercentbarseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnIsSignalConnected(const QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        vqpercentbarseries->setQPercentBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QPercentBarSeries_Delete(QPercentBarSeries* self) {
    delete self;
}
