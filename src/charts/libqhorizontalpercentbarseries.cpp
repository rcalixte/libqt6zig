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
#include <QHorizontalPercentBarSeries>
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
#include <qhorizontalpercentbarseries.h>
#include "libqhorizontalpercentbarseries.h"
#include "libqhorizontalpercentbarseries.hxx"

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new() {
    return new VirtualQHorizontalPercentBarSeries();
}

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new2(QObject* parent) {
    return new VirtualQHorizontalPercentBarSeries(parent);
}

QMetaObject* QHorizontalPercentBarSeries_MetaObject(const QHorizontalPercentBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHorizontalPercentBarSeries_Metacast(QHorizontalPercentBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHorizontalPercentBarSeries_Metacall(QHorizontalPercentBarSeries* self, int param1, int param2, void** param3) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHorizontalPercentBarSeries_OnMetacall(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Metacall_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHorizontalPercentBarSeries_QBaseMetacall(QHorizontalPercentBarSeries* self, int param1, int param2, void** param3) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Metacall_IsBase(true);
        return vqhorizontalpercentbarseries->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHorizontalPercentBarSeries_Tr(const char* s) {
    QString _ret = QHorizontalPercentBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalPercentBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QHorizontalPercentBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalPercentBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHorizontalPercentBarSeries::tr(s, c, static_cast<int>(n));
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
int QHorizontalPercentBarSeries_Type(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return static_cast<int>(vqhorizontalpercentbarseries->type());
    } else {
        return static_cast<int>(vqhorizontalpercentbarseries->type());
    }
}

// Base class handler implementation
int QHorizontalPercentBarSeries_QBaseType(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Type_IsBase(true);
        return static_cast<int>(vqhorizontalpercentbarseries->type());
    } else {
        return static_cast<int>(vqhorizontalpercentbarseries->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnType(const QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Type_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalPercentBarSeries_Event(QHorizontalPercentBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        return vqhorizontalpercentbarseries->event(event);
    } else {
        return vqhorizontalpercentbarseries->event(event);
    }
}

// Base class handler implementation
bool QHorizontalPercentBarSeries_QBaseEvent(QHorizontalPercentBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Event_IsBase(true);
        return vqhorizontalpercentbarseries->event(event);
    } else {
        return vqhorizontalpercentbarseries->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Event_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalPercentBarSeries_EventFilter(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        return vqhorizontalpercentbarseries->eventFilter(watched, event);
    } else {
        return vqhorizontalpercentbarseries->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHorizontalPercentBarSeries_QBaseEventFilter(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_EventFilter_IsBase(true);
        return vqhorizontalpercentbarseries->eventFilter(watched, event);
    } else {
        return vqhorizontalpercentbarseries->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnEventFilter(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_EventFilter_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_TimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->timerEvent(event);
    } else {
        vqhorizontalpercentbarseries->timerEvent(event);
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_QBaseTimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_TimerEvent_IsBase(true);
        vqhorizontalpercentbarseries->timerEvent(event);
    } else {
        vqhorizontalpercentbarseries->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnTimerEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_TimerEvent_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_ChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->childEvent(event);
    } else {
        vqhorizontalpercentbarseries->childEvent(event);
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_QBaseChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_ChildEvent_IsBase(true);
        vqhorizontalpercentbarseries->childEvent(event);
    } else {
        vqhorizontalpercentbarseries->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnChildEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_ChildEvent_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_CustomEvent(QHorizontalPercentBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->customEvent(event);
    } else {
        vqhorizontalpercentbarseries->customEvent(event);
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_QBaseCustomEvent(QHorizontalPercentBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_CustomEvent_IsBase(true);
        vqhorizontalpercentbarseries->customEvent(event);
    } else {
        vqhorizontalpercentbarseries->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnCustomEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_CustomEvent_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_ConnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->connectNotify(*signal);
    } else {
        vqhorizontalpercentbarseries->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_QBaseConnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_ConnectNotify_IsBase(true);
        vqhorizontalpercentbarseries->connectNotify(*signal);
    } else {
        vqhorizontalpercentbarseries->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnConnectNotify(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_ConnectNotify_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_DisconnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->disconnectNotify(*signal);
    } else {
        vqhorizontalpercentbarseries->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_QBaseDisconnectNotify(QHorizontalPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_DisconnectNotify_IsBase(true);
        vqhorizontalpercentbarseries->disconnectNotify(*signal);
    } else {
        vqhorizontalpercentbarseries->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnDisconnectNotify(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_DisconnectNotify_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHorizontalPercentBarSeries_Sender(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->sender();
    } else {
        return vqhorizontalpercentbarseries->sender();
    }
}

// Base class handler implementation
QObject* QHorizontalPercentBarSeries_QBaseSender(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Sender_IsBase(true);
        return vqhorizontalpercentbarseries->sender();
    } else {
        return vqhorizontalpercentbarseries->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnSender(const QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Sender_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalPercentBarSeries_SenderSignalIndex(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->senderSignalIndex();
    } else {
        return vqhorizontalpercentbarseries->senderSignalIndex();
    }
}

// Base class handler implementation
int QHorizontalPercentBarSeries_QBaseSenderSignalIndex(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_SenderSignalIndex_IsBase(true);
        return vqhorizontalpercentbarseries->senderSignalIndex();
    } else {
        return vqhorizontalpercentbarseries->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnSenderSignalIndex(const QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHorizontalPercentBarSeries_Receivers(const QHorizontalPercentBarSeries* self, const char* signal) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->receivers(signal);
    } else {
        return vqhorizontalpercentbarseries->receivers(signal);
    }
}

// Base class handler implementation
int QHorizontalPercentBarSeries_QBaseReceivers(const QHorizontalPercentBarSeries* self, const char* signal) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Receivers_IsBase(true);
        return vqhorizontalpercentbarseries->receivers(signal);
    } else {
        return vqhorizontalpercentbarseries->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnReceivers(const QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_Receivers_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHorizontalPercentBarSeries_IsSignalConnected(const QHorizontalPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->isSignalConnected(*signal);
    } else {
        return vqhorizontalpercentbarseries->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHorizontalPercentBarSeries_QBaseIsSignalConnected(const QHorizontalPercentBarSeries* self, QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_IsSignalConnected_IsBase(true);
        return vqhorizontalpercentbarseries->isSignalConnected(*signal);
    } else {
        return vqhorizontalpercentbarseries->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnIsSignalConnected(const QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        vqhorizontalpercentbarseries->setQHorizontalPercentBarSeries_IsSignalConnected_Callback(reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_IsSignalConnected_Callback>(slot));
    }
}

void QHorizontalPercentBarSeries_Delete(QHorizontalPercentBarSeries* self) {
    delete self;
}
