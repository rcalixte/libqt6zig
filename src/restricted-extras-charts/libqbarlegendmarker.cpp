#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QAnyStringView>
#include <QBarLegendMarker>
#include <QBarSet>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QLegend>
#include <QLegendMarker>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qbarlegendmarker.h>
#include "libqbarlegendmarker.h"
#include "libqbarlegendmarker.hxx"

QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend) {
    return new VirtualQBarLegendMarker(series, barset, legend);
}

QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent) {
    return new VirtualQBarLegendMarker(series, barset, legend, parent);
}

QMetaObject* QBarLegendMarker_MetaObject(const QBarLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarLegendMarker_Metacast(QBarLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarLegendMarker_Metacall(QBarLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBarLegendMarker_OnMetacall(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBarLegendMarker_QBaseMetacall(QBarLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Metacall_IsBase(true);
        return vqbarlegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBarLegendMarker_Tr(const char* s) {
    QString _ret = QBarLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QBarSet* QBarLegendMarker_Barset(QBarLegendMarker* self) {
    return self->barset();
}

libqt_string QBarLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QBarLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBarLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBarLegendMarker::tr(s, c, static_cast<int>(n));
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
int QBarLegendMarker_Type(QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        return static_cast<int>(vqbarlegendmarker->type());
    } else {
        return static_cast<int>(vqbarlegendmarker->type());
    }
}

// Base class handler implementation
int QBarLegendMarker_QBaseType(QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqbarlegendmarker->type());
    } else {
        return static_cast<int>(vqbarlegendmarker->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnType(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Type_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractBarSeries* QBarLegendMarker_Series(QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        return vqbarlegendmarker->series();
    } else {
        return vqbarlegendmarker->series();
    }
}

// Base class handler implementation
QAbstractBarSeries* QBarLegendMarker_QBaseSeries(QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Series_IsBase(true);
        return vqbarlegendmarker->series();
    } else {
        return vqbarlegendmarker->series();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSeries(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Series_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarLegendMarker_Event(QBarLegendMarker* self, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        return vqbarlegendmarker->event(event);
    } else {
        return vqbarlegendmarker->event(event);
    }
}

// Base class handler implementation
bool QBarLegendMarker_QBaseEvent(QBarLegendMarker* self, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Event_IsBase(true);
        return vqbarlegendmarker->event(event);
    } else {
        return vqbarlegendmarker->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_Event_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarLegendMarker_EventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        return vqbarlegendmarker->eventFilter(watched, event);
    } else {
        return vqbarlegendmarker->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBarLegendMarker_QBaseEventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_EventFilter_IsBase(true);
        return vqbarlegendmarker->eventFilter(watched, event);
    } else {
        return vqbarlegendmarker->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnEventFilter(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_TimerEvent(QBarLegendMarker* self, QTimerEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->timerEvent(event);
    } else {
        vqbarlegendmarker->timerEvent(event);
    }
}

// Base class handler implementation
void QBarLegendMarker_QBaseTimerEvent(QBarLegendMarker* self, QTimerEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_TimerEvent_IsBase(true);
        vqbarlegendmarker->timerEvent(event);
    } else {
        vqbarlegendmarker->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnTimerEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_ChildEvent(QBarLegendMarker* self, QChildEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->childEvent(event);
    } else {
        vqbarlegendmarker->childEvent(event);
    }
}

// Base class handler implementation
void QBarLegendMarker_QBaseChildEvent(QBarLegendMarker* self, QChildEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_ChildEvent_IsBase(true);
        vqbarlegendmarker->childEvent(event);
    } else {
        vqbarlegendmarker->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnChildEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_CustomEvent(QBarLegendMarker* self, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->customEvent(event);
    } else {
        vqbarlegendmarker->customEvent(event);
    }
}

// Base class handler implementation
void QBarLegendMarker_QBaseCustomEvent(QBarLegendMarker* self, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_CustomEvent_IsBase(true);
        vqbarlegendmarker->customEvent(event);
    } else {
        vqbarlegendmarker->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnCustomEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_ConnectNotify(QBarLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->connectNotify(*signal);
    } else {
        vqbarlegendmarker->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBarLegendMarker_QBaseConnectNotify(QBarLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_ConnectNotify_IsBase(true);
        vqbarlegendmarker->connectNotify(*signal);
    } else {
        vqbarlegendmarker->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnConnectNotify(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarLegendMarker_DisconnectNotify(QBarLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->disconnectNotify(*signal);
    } else {
        vqbarlegendmarker->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBarLegendMarker_QBaseDisconnectNotify(QBarLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_DisconnectNotify_IsBase(true);
        vqbarlegendmarker->disconnectNotify(*signal);
    } else {
        vqbarlegendmarker->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnDisconnectNotify(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->setQBarLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBarLegendMarker_Sender(const QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->sender();
    } else {
        return vqbarlegendmarker->sender();
    }
}

// Base class handler implementation
QObject* QBarLegendMarker_QBaseSender(const QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_Sender_IsBase(true);
        return vqbarlegendmarker->sender();
    } else {
        return vqbarlegendmarker->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSender(const QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_Sender_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarLegendMarker_SenderSignalIndex(const QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->senderSignalIndex();
    } else {
        return vqbarlegendmarker->senderSignalIndex();
    }
}

// Base class handler implementation
int QBarLegendMarker_QBaseSenderSignalIndex(const QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_SenderSignalIndex_IsBase(true);
        return vqbarlegendmarker->senderSignalIndex();
    } else {
        return vqbarlegendmarker->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSenderSignalIndex(const QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarLegendMarker_Receivers(const QBarLegendMarker* self, const char* signal) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->receivers(signal);
    } else {
        return vqbarlegendmarker->receivers(signal);
    }
}

// Base class handler implementation
int QBarLegendMarker_QBaseReceivers(const QBarLegendMarker* self, const char* signal) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_Receivers_IsBase(true);
        return vqbarlegendmarker->receivers(signal);
    } else {
        return vqbarlegendmarker->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnReceivers(const QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarLegendMarker_IsSignalConnected(const QBarLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->isSignalConnected(*signal);
    } else {
        return vqbarlegendmarker->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBarLegendMarker_QBaseIsSignalConnected(const QBarLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_IsSignalConnected_IsBase(true);
        return vqbarlegendmarker->isSignalConnected(*signal);
    } else {
        return vqbarlegendmarker->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnIsSignalConnected(const QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        vqbarlegendmarker->setQBarLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QBarLegendMarker_Delete(QBarLegendMarker* self) {
    delete self;
}
