#include <QAbstractSeries>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBoxPlotLegendMarker>
#include <QBoxPlotSeries>
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
#include <qboxplotlegendmarker.h>
#include "libqboxplotlegendmarker.h"
#include "libqboxplotlegendmarker.hxx"

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend) {
    return new VirtualQBoxPlotLegendMarker(series, legend);
}

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQBoxPlotLegendMarker(series, legend, parent);
}

QMetaObject* QBoxPlotLegendMarker_MetaObject(const QBoxPlotLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBoxPlotLegendMarker_Metacast(QBoxPlotLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBoxPlotLegendMarker_Metacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBoxPlotLegendMarker_OnMetacall(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBoxPlotLegendMarker_QBaseMetacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Metacall_IsBase(true);
        return vqboxplotlegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBoxPlotLegendMarker_Tr(const char* s) {
    QString _ret = QBoxPlotLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBoxPlotLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QBoxPlotLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBoxPlotLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBoxPlotLegendMarker::tr(s, c, static_cast<int>(n));
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
int QBoxPlotLegendMarker_Type(QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        return static_cast<int>(vqboxplotlegendmarker->type());
    } else {
        return static_cast<int>(vqboxplotlegendmarker->type());
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseType(QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqboxplotlegendmarker->type());
    } else {
        return static_cast<int>(vqboxplotlegendmarker->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnType(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Type_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QBoxPlotSeries* QBoxPlotLegendMarker_Series(QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        return vqboxplotlegendmarker->series();
    } else {
        return vqboxplotlegendmarker->series();
    }
}

// Base class handler implementation
QBoxPlotSeries* QBoxPlotLegendMarker_QBaseSeries(QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Series_IsBase(true);
        return vqboxplotlegendmarker->series();
    } else {
        return vqboxplotlegendmarker->series();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSeries(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Series_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_Event(QBoxPlotLegendMarker* self, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        return vqboxplotlegendmarker->event(event);
    } else {
        return vqboxplotlegendmarker->event(event);
    }
}

// Base class handler implementation
bool QBoxPlotLegendMarker_QBaseEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Event_IsBase(true);
        return vqboxplotlegendmarker->event(event);
    } else {
        return vqboxplotlegendmarker->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Event_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_EventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        return vqboxplotlegendmarker->eventFilter(watched, event);
    } else {
        return vqboxplotlegendmarker->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBoxPlotLegendMarker_QBaseEventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_EventFilter_IsBase(true);
        return vqboxplotlegendmarker->eventFilter(watched, event);
    } else {
        return vqboxplotlegendmarker->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnEventFilter(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_TimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->timerEvent(event);
    } else {
        vqboxplotlegendmarker->timerEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseTimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_TimerEvent_IsBase(true);
        vqboxplotlegendmarker->timerEvent(event);
    } else {
        vqboxplotlegendmarker->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnTimerEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_ChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->childEvent(event);
    } else {
        vqboxplotlegendmarker->childEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ChildEvent_IsBase(true);
        vqboxplotlegendmarker->childEvent(event);
    } else {
        vqboxplotlegendmarker->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnChildEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_CustomEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->customEvent(event);
    } else {
        vqboxplotlegendmarker->customEvent(event);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseCustomEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_CustomEvent_IsBase(true);
        vqboxplotlegendmarker->customEvent(event);
    } else {
        vqboxplotlegendmarker->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnCustomEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_ConnectNotify(QBoxPlotLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->connectNotify(*signal);
    } else {
        vqboxplotlegendmarker->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseConnectNotify(QBoxPlotLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ConnectNotify_IsBase(true);
        vqboxplotlegendmarker->connectNotify(*signal);
    } else {
        vqboxplotlegendmarker->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnConnectNotify(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxPlotLegendMarker_DisconnectNotify(QBoxPlotLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->disconnectNotify(*signal);
    } else {
        vqboxplotlegendmarker->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_QBaseDisconnectNotify(QBoxPlotLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_DisconnectNotify_IsBase(true);
        vqboxplotlegendmarker->disconnectNotify(*signal);
    } else {
        vqboxplotlegendmarker->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnDisconnectNotify(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBoxPlotLegendMarker_Sender(const QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->sender();
    } else {
        return vqboxplotlegendmarker->sender();
    }
}

// Base class handler implementation
QObject* QBoxPlotLegendMarker_QBaseSender(const QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Sender_IsBase(true);
        return vqboxplotlegendmarker->sender();
    } else {
        return vqboxplotlegendmarker->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSender(const QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Sender_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxPlotLegendMarker_SenderSignalIndex(const QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->senderSignalIndex();
    } else {
        return vqboxplotlegendmarker->senderSignalIndex();
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseSenderSignalIndex(const QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_SenderSignalIndex_IsBase(true);
        return vqboxplotlegendmarker->senderSignalIndex();
    } else {
        return vqboxplotlegendmarker->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSenderSignalIndex(const QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxPlotLegendMarker_Receivers(const QBoxPlotLegendMarker* self, const char* signal) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->receivers(signal);
    } else {
        return vqboxplotlegendmarker->receivers(signal);
    }
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseReceivers(const QBoxPlotLegendMarker* self, const char* signal) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Receivers_IsBase(true);
        return vqboxplotlegendmarker->receivers(signal);
    } else {
        return vqboxplotlegendmarker->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnReceivers(const QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_IsSignalConnected(const QBoxPlotLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->isSignalConnected(*signal);
    } else {
        return vqboxplotlegendmarker->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBoxPlotLegendMarker_QBaseIsSignalConnected(const QBoxPlotLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_IsSignalConnected_IsBase(true);
        return vqboxplotlegendmarker->isSignalConnected(*signal);
    } else {
        return vqboxplotlegendmarker->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnIsSignalConnected(const QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        vqboxplotlegendmarker->setQBoxPlotLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QBoxPlotLegendMarker_Delete(QBoxPlotLegendMarker* self) {
    delete self;
}
