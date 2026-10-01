#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHorizontalBarSeries_Tr(const char* s) {
    auto _ret = QHorizontalBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QHorizontalBarSeries_Type(const QHorizontalBarSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QHorizontalBarSeries_Tr2(const char* s, const char* c) {
    auto _ret = QHorizontalBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalBarSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHorizontalBarSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QHorizontalBarSeries_SuperMetaObject(const QHorizontalBarSeries* self) {
    return (QMetaObject*)self->QHorizontalBarSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnMetaObject(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self)))
        vqhorizontalbarseries->qhorizontalbarseries_metaobject_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHorizontalBarSeries_SuperMetacast(QHorizontalBarSeries* self, const char* param1) {
    return self->QHorizontalBarSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnMetacast(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_metacast_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHorizontalBarSeries_SuperMetacall(QHorizontalBarSeries* self, int param1, int param2, void** param3) {
    return self->QHorizontalBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnMetacall(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_metacall_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QHorizontalBarSeries_SuperType(const QHorizontalBarSeries* self) {
    return static_cast<int>(self->QHorizontalBarSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnType(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self)))
        vqhorizontalbarseries->qhorizontalbarseries_type_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QHorizontalBarSeries_Event(QHorizontalBarSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHorizontalBarSeries_SuperEvent(QHorizontalBarSeries* self, QEvent* event) {
    return self->QHorizontalBarSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_event_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHorizontalBarSeries_EventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHorizontalBarSeries_SuperEventFilter(QHorizontalBarSeries* self, QObject* watched, QEvent* event) {
    return self->QHorizontalBarSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnEventFilter(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_eventfilter_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalBarSeries_TimerEvent(QHorizontalBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries) {
        vqhorizontalbarseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalBarSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalBarSeries_SuperTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->QHorizontalBarSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalBarSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnTimerEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_timerevent_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalBarSeries_ChildEvent(QHorizontalBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries) {
        vqhorizontalbarseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalBarSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalBarSeries_SuperChildEvent(QHorizontalBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->QHorizontalBarSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalBarSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnChildEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_childevent_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalBarSeries_CustomEvent(QHorizontalBarSeries* self, QEvent* event) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries) {
        vqhorizontalbarseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalBarSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalBarSeries_SuperCustomEvent(QHorizontalBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->QHorizontalBarSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalBarSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnCustomEvent(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_customevent_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalBarSeries_ConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries) {
        vqhorizontalbarseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHorizontalBarSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalBarSeries_SuperConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->QHorizontalBarSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHorizontalBarSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnConnectNotify(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_connectnotify_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalBarSeries_DisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self);
    if (vqhorizontalbarseries) {
        vqhorizontalbarseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHorizontalBarSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalBarSeries_SuperDisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self)) {
        vqhorizontalbarseries->QHorizontalBarSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHorizontalBarSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnDisconnectNotify(QHorizontalBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalbarseries = dynamic_cast<VirtualQHorizontalBarSeries*>(self))
        vqhorizontalbarseries->qhorizontalbarseries_disconnectnotify_callback = reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QHorizontalBarSeries_Sender(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->VirtualQHorizontalBarSeries::sender();
    } else
        qFatal("Error: Protected method QHorizontalBarSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHorizontalBarSeries_SenderSignalIndex(const QHorizontalBarSeries* self) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->VirtualQHorizontalBarSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHorizontalBarSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHorizontalBarSeries_Receivers(const QHorizontalBarSeries* self, const char* signal) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->VirtualQHorizontalBarSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QHorizontalBarSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHorizontalBarSeries_IsSignalConnected(const QHorizontalBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalbarseries = const_cast<VirtualQHorizontalBarSeries*>(dynamic_cast<const VirtualQHorizontalBarSeries*>(self))) {
        return vqhorizontalbarseries->VirtualQHorizontalBarSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHorizontalBarSeries::isSignalConnected called without a directly constructed type");
}

void QHorizontalBarSeries_Delete(QHorizontalBarSeries* self) {
    delete self;
}
