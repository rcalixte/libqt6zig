#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalStackedBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qhorizontalstackedbarseries.h>
#include "libqhorizontalstackedbarseries.h"
#include "libqhorizontalstackedbarseries.hxx"

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new() {
    return new VirtualQHorizontalStackedBarSeries();
}

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new2(QObject* parent) {
    return new VirtualQHorizontalStackedBarSeries(parent);
}

QMetaObject* QHorizontalStackedBarSeries_MetaObject(const QHorizontalStackedBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHorizontalStackedBarSeries_Metacast(QHorizontalStackedBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHorizontalStackedBarSeries_Metacall(QHorizontalStackedBarSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHorizontalStackedBarSeries_Tr(const char* s) {
    auto _ret = QHorizontalStackedBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QHorizontalStackedBarSeries_Type(const QHorizontalStackedBarSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QHorizontalStackedBarSeries_Tr2(const char* s, const char* c) {
    auto _ret = QHorizontalStackedBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalStackedBarSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHorizontalStackedBarSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHorizontalStackedBarSeries_SuperMetaObject(const QHorizontalStackedBarSeries* self) {
    return (QMetaObject*)self->QHorizontalStackedBarSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnMetaObject(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self)))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_metaobject_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHorizontalStackedBarSeries_SuperMetacast(QHorizontalStackedBarSeries* self, const char* param1) {
    return self->QHorizontalStackedBarSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnMetacast(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_metacast_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHorizontalStackedBarSeries_SuperMetacall(QHorizontalStackedBarSeries* self, int param1, int param2, void** param3) {
    return self->QHorizontalStackedBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnMetacall(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_metacall_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QHorizontalStackedBarSeries_SuperType(const QHorizontalStackedBarSeries* self) {
    return static_cast<int>(self->QHorizontalStackedBarSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnType(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self)))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_type_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QHorizontalStackedBarSeries_Event(QHorizontalStackedBarSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHorizontalStackedBarSeries_SuperEvent(QHorizontalStackedBarSeries* self, QEvent* event) {
    return self->QHorizontalStackedBarSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_event_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHorizontalStackedBarSeries_EventFilter(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHorizontalStackedBarSeries_SuperEventFilter(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event) {
    return self->QHorizontalStackedBarSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnEventFilter(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_eventfilter_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_TimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries) {
        vqhorizontalstackedbarseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_SuperTimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self)) {
        vqhorizontalstackedbarseries->QHorizontalStackedBarSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnTimerEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_timerevent_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_ChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries) {
        vqhorizontalstackedbarseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_SuperChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self)) {
        vqhorizontalstackedbarseries->QHorizontalStackedBarSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnChildEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_childevent_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_CustomEvent(QHorizontalStackedBarSeries* self, QEvent* event) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries) {
        vqhorizontalstackedbarseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_SuperCustomEvent(QHorizontalStackedBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self)) {
        vqhorizontalstackedbarseries->QHorizontalStackedBarSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnCustomEvent(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_customevent_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_ConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries) {
        vqhorizontalstackedbarseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_SuperConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self)) {
        vqhorizontalstackedbarseries->QHorizontalStackedBarSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnConnectNotify(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_connectnotify_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalStackedBarSeries_DisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self);
    if (vqhorizontalstackedbarseries) {
        vqhorizontalstackedbarseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalStackedBarSeries_SuperDisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self)) {
        vqhorizontalstackedbarseries->QHorizontalStackedBarSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHorizontalStackedBarSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnDisconnectNotify(QHorizontalStackedBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalstackedbarseries = dynamic_cast<VirtualQHorizontalStackedBarSeries*>(self))
        vqhorizontalstackedbarseries->qhorizontalstackedbarseries_disconnectnotify_callback = reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QHorizontalStackedBarSeries_Sender(const QHorizontalStackedBarSeries* self) {
    if (auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self))) {
        return vqhorizontalstackedbarseries->VirtualQHorizontalStackedBarSeries::sender();
    } else
        qFatal("Error: Protected method QHorizontalStackedBarSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHorizontalStackedBarSeries_SenderSignalIndex(const QHorizontalStackedBarSeries* self) {
    if (auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self))) {
        return vqhorizontalstackedbarseries->VirtualQHorizontalStackedBarSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHorizontalStackedBarSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHorizontalStackedBarSeries_Receivers(const QHorizontalStackedBarSeries* self, const char* signal) {
    if (auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self))) {
        return vqhorizontalstackedbarseries->VirtualQHorizontalStackedBarSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QHorizontalStackedBarSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHorizontalStackedBarSeries_IsSignalConnected(const QHorizontalStackedBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalstackedbarseries = const_cast<VirtualQHorizontalStackedBarSeries*>(dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self))) {
        return vqhorizontalstackedbarseries->VirtualQHorizontalStackedBarSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHorizontalStackedBarSeries::isSignalConnected called without a directly constructed type");
}

void QHorizontalStackedBarSeries_Delete(QHorizontalStackedBarSeries* self) {
    delete self;
}
