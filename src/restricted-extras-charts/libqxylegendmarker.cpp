#include <QAbstractSeries>
#include <QAnyStringView>
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
#include <QXYLegendMarker>
#include <QXYSeries>
#include <qxylegendmarker.h>
#include "libqxylegendmarker.h"
#include "libqxylegendmarker.hxx"

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend) {
    return new VirtualQXYLegendMarker(series, legend);
}

QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQXYLegendMarker(series, legend, parent);
}

QMetaObject* QXYLegendMarker_MetaObject(const QXYLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QXYLegendMarker_Metacast(QXYLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QXYLegendMarker_Metacall(QXYLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QXYLegendMarker_OnMetacall(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QXYLegendMarker_QBaseMetacall(QXYLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Metacall_IsBase(true);
        return vqxylegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QXYLegendMarker_Tr(const char* s) {
    QString _ret = QXYLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QXYLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QXYLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QXYLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QXYLegendMarker::tr(s, c, static_cast<int>(n));
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
int QXYLegendMarker_Type(QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        return static_cast<int>(vqxylegendmarker->type());
    } else {
        return static_cast<int>(vqxylegendmarker->type());
    }
}

// Base class handler implementation
int QXYLegendMarker_QBaseType(QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqxylegendmarker->type());
    } else {
        return static_cast<int>(vqxylegendmarker->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnType(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Type_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QXYSeries* QXYLegendMarker_Series(QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        return vqxylegendmarker->series();
    } else {
        return vqxylegendmarker->series();
    }
}

// Base class handler implementation
QXYSeries* QXYLegendMarker_QBaseSeries(QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Series_IsBase(true);
        return vqxylegendmarker->series();
    } else {
        return vqxylegendmarker->series();
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSeries(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Series_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QXYLegendMarker_Event(QXYLegendMarker* self, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        return vqxylegendmarker->event(event);
    } else {
        return vqxylegendmarker->event(event);
    }
}

// Base class handler implementation
bool QXYLegendMarker_QBaseEvent(QXYLegendMarker* self, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Event_IsBase(true);
        return vqxylegendmarker->event(event);
    } else {
        return vqxylegendmarker->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_Event_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QXYLegendMarker_EventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        return vqxylegendmarker->eventFilter(watched, event);
    } else {
        return vqxylegendmarker->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QXYLegendMarker_QBaseEventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_EventFilter_IsBase(true);
        return vqxylegendmarker->eventFilter(watched, event);
    } else {
        return vqxylegendmarker->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnEventFilter(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_TimerEvent(QXYLegendMarker* self, QTimerEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->timerEvent(event);
    } else {
        vqxylegendmarker->timerEvent(event);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseTimerEvent(QXYLegendMarker* self, QTimerEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_TimerEvent_IsBase(true);
        vqxylegendmarker->timerEvent(event);
    } else {
        vqxylegendmarker->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnTimerEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_ChildEvent(QXYLegendMarker* self, QChildEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->childEvent(event);
    } else {
        vqxylegendmarker->childEvent(event);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseChildEvent(QXYLegendMarker* self, QChildEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_ChildEvent_IsBase(true);
        vqxylegendmarker->childEvent(event);
    } else {
        vqxylegendmarker->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnChildEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_CustomEvent(QXYLegendMarker* self, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->customEvent(event);
    } else {
        vqxylegendmarker->customEvent(event);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseCustomEvent(QXYLegendMarker* self, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_CustomEvent_IsBase(true);
        vqxylegendmarker->customEvent(event);
    } else {
        vqxylegendmarker->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnCustomEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_ConnectNotify(QXYLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->connectNotify(*signal);
    } else {
        vqxylegendmarker->connectNotify(*signal);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseConnectNotify(QXYLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_ConnectNotify_IsBase(true);
        vqxylegendmarker->connectNotify(*signal);
    } else {
        vqxylegendmarker->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnConnectNotify(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_DisconnectNotify(QXYLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->disconnectNotify(*signal);
    } else {
        vqxylegendmarker->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseDisconnectNotify(QXYLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_DisconnectNotify_IsBase(true);
        vqxylegendmarker->disconnectNotify(*signal);
    } else {
        vqxylegendmarker->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnDisconnectNotify(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->setQXYLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QXYLegendMarker_Sender(const QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->sender();
    } else {
        return vqxylegendmarker->sender();
    }
}

// Base class handler implementation
QObject* QXYLegendMarker_QBaseSender(const QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_Sender_IsBase(true);
        return vqxylegendmarker->sender();
    } else {
        return vqxylegendmarker->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSender(const QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_Sender_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QXYLegendMarker_SenderSignalIndex(const QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->senderSignalIndex();
    } else {
        return vqxylegendmarker->senderSignalIndex();
    }
}

// Base class handler implementation
int QXYLegendMarker_QBaseSenderSignalIndex(const QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_SenderSignalIndex_IsBase(true);
        return vqxylegendmarker->senderSignalIndex();
    } else {
        return vqxylegendmarker->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSenderSignalIndex(const QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QXYLegendMarker_Receivers(const QXYLegendMarker* self, const char* signal) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->receivers(signal);
    } else {
        return vqxylegendmarker->receivers(signal);
    }
}

// Base class handler implementation
int QXYLegendMarker_QBaseReceivers(const QXYLegendMarker* self, const char* signal) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_Receivers_IsBase(true);
        return vqxylegendmarker->receivers(signal);
    } else {
        return vqxylegendmarker->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnReceivers(const QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QXYLegendMarker_IsSignalConnected(const QXYLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->isSignalConnected(*signal);
    } else {
        return vqxylegendmarker->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QXYLegendMarker_QBaseIsSignalConnected(const QXYLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_IsSignalConnected_IsBase(true);
        return vqxylegendmarker->isSignalConnected(*signal);
    } else {
        return vqxylegendmarker->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnIsSignalConnected(const QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        vqxylegendmarker->setQXYLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QXYLegendMarker_Delete(QXYLegendMarker* self) {
    delete self;
}
