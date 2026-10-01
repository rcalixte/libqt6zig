#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPercentBarSeries>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPercentBarSeries_Tr(const char* s) {
    auto _ret = QPercentBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPercentBarSeries_Type(const QPercentBarSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QPercentBarSeries_Tr2(const char* s, const char* c) {
    auto _ret = QPercentBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPercentBarSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPercentBarSeries_SuperMetaObject(const QPercentBarSeries* self) {
    return (QMetaObject*)self->QPercentBarSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnMetaObject(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self)))
        vqpercentbarseries->qpercentbarseries_metaobject_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPercentBarSeries_SuperMetacast(QPercentBarSeries* self, const char* param1) {
    return self->QPercentBarSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnMetacast(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_metacast_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPercentBarSeries_SuperMetacall(QPercentBarSeries* self, int param1, int param2, void** param3) {
    return self->QPercentBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnMetacall(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_metacall_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPercentBarSeries_SuperType(const QPercentBarSeries* self) {
    return static_cast<int>(self->QPercentBarSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnType(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self)))
        vqpercentbarseries->qpercentbarseries_type_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QPercentBarSeries_Event(QPercentBarSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPercentBarSeries_SuperEvent(QPercentBarSeries* self, QEvent* event) {
    return self->QPercentBarSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_event_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPercentBarSeries_EventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPercentBarSeries_SuperEventFilter(QPercentBarSeries* self, QObject* watched, QEvent* event) {
    return self->QPercentBarSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnEventFilter(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_eventfilter_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPercentBarSeries_TimerEvent(QPercentBarSeries* self, QTimerEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries) {
        vqpercentbarseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPercentBarSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPercentBarSeries_SuperTimerEvent(QPercentBarSeries* self, QTimerEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->QPercentBarSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPercentBarSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnTimerEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_timerevent_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPercentBarSeries_ChildEvent(QPercentBarSeries* self, QChildEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries) {
        vqpercentbarseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPercentBarSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPercentBarSeries_SuperChildEvent(QPercentBarSeries* self, QChildEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->QPercentBarSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPercentBarSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnChildEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_childevent_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPercentBarSeries_CustomEvent(QPercentBarSeries* self, QEvent* event) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries) {
        vqpercentbarseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPercentBarSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPercentBarSeries_SuperCustomEvent(QPercentBarSeries* self, QEvent* event) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->QPercentBarSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPercentBarSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnCustomEvent(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_customevent_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPercentBarSeries_ConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries) {
        vqpercentbarseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPercentBarSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPercentBarSeries_SuperConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->QPercentBarSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPercentBarSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnConnectNotify(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_connectnotify_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPercentBarSeries_DisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self);
    if (vqpercentbarseries) {
        vqpercentbarseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPercentBarSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPercentBarSeries_SuperDisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self)) {
        vqpercentbarseries->QPercentBarSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPercentBarSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnDisconnectNotify(QPercentBarSeries* self, intptr_t slot) {
    if (auto* vqpercentbarseries = dynamic_cast<VirtualQPercentBarSeries*>(self))
        vqpercentbarseries->qpercentbarseries_disconnectnotify_callback = reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPercentBarSeries_Sender(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->VirtualQPercentBarSeries::sender();
    } else
        qFatal("Error: Protected method QPercentBarSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPercentBarSeries_SenderSignalIndex(const QPercentBarSeries* self) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->VirtualQPercentBarSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPercentBarSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPercentBarSeries_Receivers(const QPercentBarSeries* self, const char* signal) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->VirtualQPercentBarSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QPercentBarSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPercentBarSeries_IsSignalConnected(const QPercentBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqpercentbarseries = const_cast<VirtualQPercentBarSeries*>(dynamic_cast<const VirtualQPercentBarSeries*>(self))) {
        return vqpercentbarseries->VirtualQPercentBarSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPercentBarSeries::isSignalConnected called without a directly constructed type");
}

void QPercentBarSeries_Delete(QPercentBarSeries* self) {
    delete self;
}
