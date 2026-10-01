#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QStackedBarSeries>
#include <QString>
#include <QTimerEvent>
#include <qstackedbarseries.h>
#include "libqstackedbarseries.h"
#include "libqstackedbarseries.hxx"

QStackedBarSeries* QStackedBarSeries_new() {
    return new VirtualQStackedBarSeries();
}

QStackedBarSeries* QStackedBarSeries_new2(QObject* parent) {
    return new VirtualQStackedBarSeries(parent);
}

QMetaObject* QStackedBarSeries_MetaObject(const QStackedBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStackedBarSeries_Metacast(QStackedBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStackedBarSeries_Metacall(QStackedBarSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QStackedBarSeries_Tr(const char* s) {
    auto _ret = QStackedBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStackedBarSeries_Type(const QStackedBarSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QStackedBarSeries_Tr2(const char* s, const char* c) {
    auto _ret = QStackedBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStackedBarSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QStackedBarSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QStackedBarSeries_SuperMetaObject(const QStackedBarSeries* self) {
    return (QMetaObject*)self->QStackedBarSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnMetaObject(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self)))
        vqstackedbarseries->qstackedbarseries_metaobject_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QStackedBarSeries_SuperMetacast(QStackedBarSeries* self, const char* param1) {
    return self->QStackedBarSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnMetacast(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_metacast_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QStackedBarSeries_SuperMetacall(QStackedBarSeries* self, int param1, int param2, void** param3) {
    return self->QStackedBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnMetacall(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_metacall_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QStackedBarSeries_SuperType(const QStackedBarSeries* self) {
    return static_cast<int>(self->QStackedBarSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnType(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self)))
        vqstackedbarseries->qstackedbarseries_type_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QStackedBarSeries_Event(QStackedBarSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QStackedBarSeries_SuperEvent(QStackedBarSeries* self, QEvent* event) {
    return self->QStackedBarSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnEvent(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_event_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QStackedBarSeries_EventFilter(QStackedBarSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QStackedBarSeries_SuperEventFilter(QStackedBarSeries* self, QObject* watched, QEvent* event) {
    return self->QStackedBarSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnEventFilter(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_eventfilter_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QStackedBarSeries_TimerEvent(QStackedBarSeries* self, QTimerEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries) {
        vqstackedbarseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedBarSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedBarSeries_SuperTimerEvent(QStackedBarSeries* self, QTimerEvent* event) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self)) {
        vqstackedbarseries->QStackedBarSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedBarSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnTimerEvent(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_timerevent_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedBarSeries_ChildEvent(QStackedBarSeries* self, QChildEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries) {
        vqstackedbarseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedBarSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedBarSeries_SuperChildEvent(QStackedBarSeries* self, QChildEvent* event) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self)) {
        vqstackedbarseries->QStackedBarSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedBarSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnChildEvent(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_childevent_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedBarSeries_CustomEvent(QStackedBarSeries* self, QEvent* event) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries) {
        vqstackedbarseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QStackedBarSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedBarSeries_SuperCustomEvent(QStackedBarSeries* self, QEvent* event) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self)) {
        vqstackedbarseries->QStackedBarSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QStackedBarSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnCustomEvent(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_customevent_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QStackedBarSeries_ConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries) {
        vqstackedbarseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStackedBarSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedBarSeries_SuperConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self)) {
        vqstackedbarseries->QStackedBarSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStackedBarSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnConnectNotify(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_connectnotify_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QStackedBarSeries_DisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self);
    if (vqstackedbarseries) {
        vqstackedbarseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QStackedBarSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QStackedBarSeries_SuperDisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self)) {
        vqstackedbarseries->QStackedBarSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QStackedBarSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnDisconnectNotify(QStackedBarSeries* self, intptr_t slot) {
    if (auto* vqstackedbarseries = dynamic_cast<VirtualQStackedBarSeries*>(self))
        vqstackedbarseries->qstackedbarseries_disconnectnotify_callback = reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QStackedBarSeries_Sender(const QStackedBarSeries* self) {
    if (auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self))) {
        return vqstackedbarseries->VirtualQStackedBarSeries::sender();
    } else
        qFatal("Error: Protected method QStackedBarSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QStackedBarSeries_SenderSignalIndex(const QStackedBarSeries* self) {
    if (auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self))) {
        return vqstackedbarseries->VirtualQStackedBarSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QStackedBarSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QStackedBarSeries_Receivers(const QStackedBarSeries* self, const char* signal) {
    if (auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self))) {
        return vqstackedbarseries->VirtualQStackedBarSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QStackedBarSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QStackedBarSeries_IsSignalConnected(const QStackedBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqstackedbarseries = const_cast<VirtualQStackedBarSeries*>(dynamic_cast<const VirtualQStackedBarSeries*>(self))) {
        return vqstackedbarseries->VirtualQStackedBarSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QStackedBarSeries::isSignalConnected called without a directly constructed type");
}

void QStackedBarSeries_Delete(QStackedBarSeries* self) {
    delete self;
}
