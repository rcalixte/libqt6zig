#include <QAbstractSeries>
#include <QAnyStringView>
#include <QAreaLegendMarker>
#include <QAreaSeries>
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
#include <qarealegendmarker.h>
#include "libqarealegendmarker.h"
#include "libqarealegendmarker.hxx"

QAreaLegendMarker* QAreaLegendMarker_new(QAreaSeries* series, QLegend* legend) {
    return new VirtualQAreaLegendMarker(series, legend);
}

QAreaLegendMarker* QAreaLegendMarker_new2(QAreaSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQAreaLegendMarker(series, legend, parent);
}

QMetaObject* QAreaLegendMarker_MetaObject(const QAreaLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAreaLegendMarker_Metacast(QAreaLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAreaLegendMarker_Metacall(QAreaLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAreaLegendMarker_OnMetacall(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAreaLegendMarker_QBaseMetacall(QAreaLegendMarker* self, int param1, int param2, void** param3) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Metacall_IsBase(true);
        return vqarealegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAreaLegendMarker_Tr(const char* s) {
    QString _ret = QAreaLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAreaLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QAreaLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAreaLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAreaLegendMarker::tr(s, c, static_cast<int>(n));
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
int QAreaLegendMarker_Type(QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        return static_cast<int>(vqarealegendmarker->type());
    } else {
        return static_cast<int>(vqarealegendmarker->type());
    }
}

// Base class handler implementation
int QAreaLegendMarker_QBaseType(QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqarealegendmarker->type());
    } else {
        return static_cast<int>(vqarealegendmarker->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnType(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Type_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Type_Callback>(slot));
    }
}

// Derived class handler implementation
QAreaSeries* QAreaLegendMarker_Series(QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        return vqarealegendmarker->series();
    } else {
        return vqarealegendmarker->series();
    }
}

// Base class handler implementation
QAreaSeries* QAreaLegendMarker_QBaseSeries(QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Series_IsBase(true);
        return vqarealegendmarker->series();
    } else {
        return vqarealegendmarker->series();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnSeries(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Series_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Series_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaLegendMarker_Event(QAreaLegendMarker* self, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        return vqarealegendmarker->event(event);
    } else {
        return vqarealegendmarker->event(event);
    }
}

// Base class handler implementation
bool QAreaLegendMarker_QBaseEvent(QAreaLegendMarker* self, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Event_IsBase(true);
        return vqarealegendmarker->event(event);
    } else {
        return vqarealegendmarker->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_Event_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaLegendMarker_EventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        return vqarealegendmarker->eventFilter(watched, event);
    } else {
        return vqarealegendmarker->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAreaLegendMarker_QBaseEventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_EventFilter_IsBase(true);
        return vqarealegendmarker->eventFilter(watched, event);
    } else {
        return vqarealegendmarker->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnEventFilter(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaLegendMarker_TimerEvent(QAreaLegendMarker* self, QTimerEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->timerEvent(event);
    } else {
        vqarealegendmarker->timerEvent(event);
    }
}

// Base class handler implementation
void QAreaLegendMarker_QBaseTimerEvent(QAreaLegendMarker* self, QTimerEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_TimerEvent_IsBase(true);
        vqarealegendmarker->timerEvent(event);
    } else {
        vqarealegendmarker->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnTimerEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaLegendMarker_ChildEvent(QAreaLegendMarker* self, QChildEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->childEvent(event);
    } else {
        vqarealegendmarker->childEvent(event);
    }
}

// Base class handler implementation
void QAreaLegendMarker_QBaseChildEvent(QAreaLegendMarker* self, QChildEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_ChildEvent_IsBase(true);
        vqarealegendmarker->childEvent(event);
    } else {
        vqarealegendmarker->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnChildEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaLegendMarker_CustomEvent(QAreaLegendMarker* self, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->customEvent(event);
    } else {
        vqarealegendmarker->customEvent(event);
    }
}

// Base class handler implementation
void QAreaLegendMarker_QBaseCustomEvent(QAreaLegendMarker* self, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_CustomEvent_IsBase(true);
        vqarealegendmarker->customEvent(event);
    } else {
        vqarealegendmarker->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnCustomEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaLegendMarker_ConnectNotify(QAreaLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->connectNotify(*signal);
    } else {
        vqarealegendmarker->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAreaLegendMarker_QBaseConnectNotify(QAreaLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_ConnectNotify_IsBase(true);
        vqarealegendmarker->connectNotify(*signal);
    } else {
        vqarealegendmarker->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnConnectNotify(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAreaLegendMarker_DisconnectNotify(QAreaLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->disconnectNotify(*signal);
    } else {
        vqarealegendmarker->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAreaLegendMarker_QBaseDisconnectNotify(QAreaLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_DisconnectNotify_IsBase(true);
        vqarealegendmarker->disconnectNotify(*signal);
    } else {
        vqarealegendmarker->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnDisconnectNotify(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->setQAreaLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAreaLegendMarker_Sender(const QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->sender();
    } else {
        return vqarealegendmarker->sender();
    }
}

// Base class handler implementation
QObject* QAreaLegendMarker_QBaseSender(const QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_Sender_IsBase(true);
        return vqarealegendmarker->sender();
    } else {
        return vqarealegendmarker->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnSender(const QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_Sender_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAreaLegendMarker_SenderSignalIndex(const QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->senderSignalIndex();
    } else {
        return vqarealegendmarker->senderSignalIndex();
    }
}

// Base class handler implementation
int QAreaLegendMarker_QBaseSenderSignalIndex(const QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_SenderSignalIndex_IsBase(true);
        return vqarealegendmarker->senderSignalIndex();
    } else {
        return vqarealegendmarker->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnSenderSignalIndex(const QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAreaLegendMarker_Receivers(const QAreaLegendMarker* self, const char* signal) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->receivers(signal);
    } else {
        return vqarealegendmarker->receivers(signal);
    }
}

// Base class handler implementation
int QAreaLegendMarker_QBaseReceivers(const QAreaLegendMarker* self, const char* signal) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_Receivers_IsBase(true);
        return vqarealegendmarker->receivers(signal);
    } else {
        return vqarealegendmarker->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnReceivers(const QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAreaLegendMarker_IsSignalConnected(const QAreaLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->isSignalConnected(*signal);
    } else {
        return vqarealegendmarker->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAreaLegendMarker_QBaseIsSignalConnected(const QAreaLegendMarker* self, QMetaMethod* signal) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_IsSignalConnected_IsBase(true);
        return vqarealegendmarker->isSignalConnected(*signal);
    } else {
        return vqarealegendmarker->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnIsSignalConnected(const QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        vqarealegendmarker->setQAreaLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QAreaLegendMarker_Delete(QAreaLegendMarker* self) {
    delete self;
}
