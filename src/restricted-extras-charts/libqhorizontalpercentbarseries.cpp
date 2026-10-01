#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalPercentBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHorizontalPercentBarSeries_Tr(const char* s) {
    auto _ret = QHorizontalPercentBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QHorizontalPercentBarSeries_Type(const QHorizontalPercentBarSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QHorizontalPercentBarSeries_Tr2(const char* s, const char* c) {
    auto _ret = QHorizontalPercentBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHorizontalPercentBarSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHorizontalPercentBarSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHorizontalPercentBarSeries_SuperMetaObject(const QHorizontalPercentBarSeries* self) {
    return (QMetaObject*)self->QHorizontalPercentBarSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnMetaObject(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self)))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_metaobject_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHorizontalPercentBarSeries_SuperMetacast(QHorizontalPercentBarSeries* self, const char* param1) {
    return self->QHorizontalPercentBarSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnMetacast(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_metacast_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHorizontalPercentBarSeries_SuperMetacall(QHorizontalPercentBarSeries* self, int param1, int param2, void** param3) {
    return self->QHorizontalPercentBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnMetacall(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_metacall_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QHorizontalPercentBarSeries_SuperType(const QHorizontalPercentBarSeries* self) {
    return static_cast<int>(self->QHorizontalPercentBarSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnType(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self)))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_type_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QHorizontalPercentBarSeries_Event(QHorizontalPercentBarSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHorizontalPercentBarSeries_SuperEvent(QHorizontalPercentBarSeries* self, QEvent* event) {
    return self->QHorizontalPercentBarSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_event_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHorizontalPercentBarSeries_EventFilter(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHorizontalPercentBarSeries_SuperEventFilter(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event) {
    return self->QHorizontalPercentBarSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnEventFilter(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_eventfilter_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_TimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event) {
    auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self);
    if (vqhorizontalpercentbarseries) {
        vqhorizontalpercentbarseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_SuperTimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->QHorizontalPercentBarSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnTimerEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_timerevent_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_ChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event) {
    auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self);
    if (vqhorizontalpercentbarseries) {
        vqhorizontalpercentbarseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_SuperChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->QHorizontalPercentBarSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnChildEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_childevent_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_CustomEvent(QHorizontalPercentBarSeries* self, QEvent* event) {
    auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self);
    if (vqhorizontalpercentbarseries) {
        vqhorizontalpercentbarseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_SuperCustomEvent(QHorizontalPercentBarSeries* self, QEvent* event) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->QHorizontalPercentBarSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnCustomEvent(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_customevent_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_ConnectNotify(QHorizontalPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self);
    if (vqhorizontalpercentbarseries) {
        vqhorizontalpercentbarseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_SuperConnectNotify(QHorizontalPercentBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->QHorizontalPercentBarSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnConnectNotify(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_connectnotify_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHorizontalPercentBarSeries_DisconnectNotify(QHorizontalPercentBarSeries* self, const QMetaMethod* signal) {
    auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self);
    if (vqhorizontalpercentbarseries) {
        vqhorizontalpercentbarseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHorizontalPercentBarSeries_SuperDisconnectNotify(QHorizontalPercentBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self)) {
        vqhorizontalpercentbarseries->QHorizontalPercentBarSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHorizontalPercentBarSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHorizontalPercentBarSeries_OnDisconnectNotify(QHorizontalPercentBarSeries* self, intptr_t slot) {
    if (auto* vqhorizontalpercentbarseries = dynamic_cast<VirtualQHorizontalPercentBarSeries*>(self))
        vqhorizontalpercentbarseries->qhorizontalpercentbarseries_disconnectnotify_callback = reinterpret_cast<VirtualQHorizontalPercentBarSeries::QHorizontalPercentBarSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QHorizontalPercentBarSeries_Sender(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->VirtualQHorizontalPercentBarSeries::sender();
    } else
        qFatal("Error: Protected method QHorizontalPercentBarSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHorizontalPercentBarSeries_SenderSignalIndex(const QHorizontalPercentBarSeries* self) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->VirtualQHorizontalPercentBarSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHorizontalPercentBarSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHorizontalPercentBarSeries_Receivers(const QHorizontalPercentBarSeries* self, const char* signal) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->VirtualQHorizontalPercentBarSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QHorizontalPercentBarSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHorizontalPercentBarSeries_IsSignalConnected(const QHorizontalPercentBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqhorizontalpercentbarseries = const_cast<VirtualQHorizontalPercentBarSeries*>(dynamic_cast<const VirtualQHorizontalPercentBarSeries*>(self))) {
        return vqhorizontalpercentbarseries->VirtualQHorizontalPercentBarSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHorizontalPercentBarSeries::isSignalConnected called without a directly constructed type");
}

void QHorizontalPercentBarSeries_Delete(QHorizontalPercentBarSeries* self) {
    delete self;
}
