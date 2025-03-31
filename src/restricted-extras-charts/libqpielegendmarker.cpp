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
#include <QPieLegendMarker>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qpielegendmarker.h>
#include "libqpielegendmarker.h"
#include "libqpielegendmarker.hxx"

QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend) {
    return new VirtualQPieLegendMarker(series, slice, legend);
}

QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent) {
    return new VirtualQPieLegendMarker(series, slice, legend, parent);
}

QMetaObject* QPieLegendMarker_MetaObject(const QPieLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPieLegendMarker_Metacast(QPieLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPieLegendMarker_Metacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPieLegendMarker_OnMetacall(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPieLegendMarker_QBaseMetacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Metacall_IsBase(true);
        return vqpielegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPieLegendMarker_Tr(const char* s) {
    QString _ret = QPieLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self) {
    return self->slice();
}

libqt_string QPieLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QPieLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPieLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPieLegendMarker::tr(s, c, static_cast<int>(n));
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
int QPieLegendMarker_Type(QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        return static_cast<int>(vqpielegendmarker->type());
    } else {
        return static_cast<int>(vqpielegendmarker->type());
    }
}

// Base class handler implementation
int QPieLegendMarker_QBaseType(QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqpielegendmarker->type());
    } else {
        return static_cast<int>(vqpielegendmarker->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Type_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        return vqpielegendmarker->series();
    } else {
        return vqpielegendmarker->series();
    }
}

// Base class handler implementation
QPieSeries* QPieLegendMarker_QBaseSeries(QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Series_IsBase(true);
        return vqpielegendmarker->series();
    } else {
        return vqpielegendmarker->series();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Series_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieLegendMarker_Event(QPieLegendMarker* self, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        return vqpielegendmarker->event(event);
    } else {
        return vqpielegendmarker->event(event);
    }
}

// Base class handler implementation
bool QPieLegendMarker_QBaseEvent(QPieLegendMarker* self, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Event_IsBase(true);
        return vqpielegendmarker->event(event);
    } else {
        return vqpielegendmarker->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_Event_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieLegendMarker_EventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        return vqpielegendmarker->eventFilter(watched, event);
    } else {
        return vqpielegendmarker->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPieLegendMarker_QBaseEventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_EventFilter_IsBase(true);
        return vqpielegendmarker->eventFilter(watched, event);
    } else {
        return vqpielegendmarker->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnEventFilter(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_TimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->timerEvent(event);
    } else {
        vqpielegendmarker->timerEvent(event);
    }
}

// Base class handler implementation
void QPieLegendMarker_QBaseTimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_TimerEvent_IsBase(true);
        vqpielegendmarker->timerEvent(event);
    } else {
        vqpielegendmarker->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnTimerEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_ChildEvent(QPieLegendMarker* self, QChildEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->childEvent(event);
    } else {
        vqpielegendmarker->childEvent(event);
    }
}

// Base class handler implementation
void QPieLegendMarker_QBaseChildEvent(QPieLegendMarker* self, QChildEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_ChildEvent_IsBase(true);
        vqpielegendmarker->childEvent(event);
    } else {
        vqpielegendmarker->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnChildEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_CustomEvent(QPieLegendMarker* self, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->customEvent(event);
    } else {
        vqpielegendmarker->customEvent(event);
    }
}

// Base class handler implementation
void QPieLegendMarker_QBaseCustomEvent(QPieLegendMarker* self, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_CustomEvent_IsBase(true);
        vqpielegendmarker->customEvent(event);
    } else {
        vqpielegendmarker->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnCustomEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_ConnectNotify(QPieLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->connectNotify(*signal);
    } else {
        vqpielegendmarker->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPieLegendMarker_QBaseConnectNotify(QPieLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_ConnectNotify_IsBase(true);
        vqpielegendmarker->connectNotify(*signal);
    } else {
        vqpielegendmarker->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnConnectNotify(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieLegendMarker_DisconnectNotify(QPieLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->disconnectNotify(*signal);
    } else {
        vqpielegendmarker->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPieLegendMarker_QBaseDisconnectNotify(QPieLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_DisconnectNotify_IsBase(true);
        vqpielegendmarker->disconnectNotify(*signal);
    } else {
        vqpielegendmarker->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnDisconnectNotify(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->setQPieLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPieLegendMarker_Sender(const QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->sender();
    } else {
        return vqpielegendmarker->sender();
    }
}

// Base class handler implementation
QObject* QPieLegendMarker_QBaseSender(const QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_Sender_IsBase(true);
        return vqpielegendmarker->sender();
    } else {
        return vqpielegendmarker->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSender(const QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_Sender_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieLegendMarker_SenderSignalIndex(const QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->senderSignalIndex();
    } else {
        return vqpielegendmarker->senderSignalIndex();
    }
}

// Base class handler implementation
int QPieLegendMarker_QBaseSenderSignalIndex(const QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_SenderSignalIndex_IsBase(true);
        return vqpielegendmarker->senderSignalIndex();
    } else {
        return vqpielegendmarker->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSenderSignalIndex(const QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieLegendMarker_Receivers(const QPieLegendMarker* self, const char* signal) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->receivers(signal);
    } else {
        return vqpielegendmarker->receivers(signal);
    }
}

// Base class handler implementation
int QPieLegendMarker_QBaseReceivers(const QPieLegendMarker* self, const char* signal) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_Receivers_IsBase(true);
        return vqpielegendmarker->receivers(signal);
    } else {
        return vqpielegendmarker->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnReceivers(const QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieLegendMarker_IsSignalConnected(const QPieLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->isSignalConnected(*signal);
    } else {
        return vqpielegendmarker->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPieLegendMarker_QBaseIsSignalConnected(const QPieLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_IsSignalConnected_IsBase(true);
        return vqpielegendmarker->isSignalConnected(*signal);
    } else {
        return vqpielegendmarker->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnIsSignalConnected(const QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        vqpielegendmarker->setQPieLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QPieLegendMarker_Delete(QPieLegendMarker* self) {
    delete self;
}
