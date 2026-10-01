#include <QAbstractBarSeries>
#include <QBarLegendMarker>
#include <QBarSet>
#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBarLegendMarker_Tr(const char* s) {
    auto _ret = QBarLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QBarLegendMarker_Type(QBarLegendMarker* self) {
    return static_cast<int>(self->type());
}

QAbstractBarSeries* QBarLegendMarker_Series(QBarLegendMarker* self) {
    return self->series();
}

QBarSet* QBarLegendMarker_Barset(QBarLegendMarker* self) {
    return self->barset();
}

libqt_string QBarLegendMarker_Tr2(const char* s, const char* c) {
    auto _ret = QBarLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBarLegendMarker_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBarLegendMarker::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBarLegendMarker_SuperMetaObject(const QBarLegendMarker* self) {
    return (QMetaObject*)self->QBarLegendMarker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnMetaObject(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self)))
        vqbarlegendmarker->qbarlegendmarker_metaobject_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBarLegendMarker_SuperMetacast(QBarLegendMarker* self, const char* param1) {
    return self->QBarLegendMarker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnMetacast(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_metacast_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBarLegendMarker_SuperMetacall(QBarLegendMarker* self, int param1, int param2, void** param3) {
    return self->QBarLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnMetacall(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_metacall_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Metacall_Callback>(slot);
}

// Base class handler implementation
int QBarLegendMarker_SuperType(QBarLegendMarker* self) {
    return static_cast<int>(self->QBarLegendMarker::type());
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnType(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_type_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Type_Callback>(slot);
}

// Base class handler implementation
QAbstractBarSeries* QBarLegendMarker_SuperSeries(QBarLegendMarker* self) {
    return self->QBarLegendMarker::series();
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSeries(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_series_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Series_Callback>(slot);
}

// Derived class handler implementation
bool QBarLegendMarker_Event(QBarLegendMarker* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBarLegendMarker_SuperEvent(QBarLegendMarker* self, QEvent* event) {
    return self->QBarLegendMarker::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_event_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBarLegendMarker_EventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBarLegendMarker_SuperEventFilter(QBarLegendMarker* self, QObject* watched, QEvent* event) {
    return self->QBarLegendMarker::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnEventFilter(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_eventfilter_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBarLegendMarker_TimerEvent(QBarLegendMarker* self, QTimerEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker) {
        vqbarlegendmarker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarLegendMarker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperTimerEvent(QBarLegendMarker* self, QTimerEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->QBarLegendMarker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarLegendMarker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnTimerEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_timerevent_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarLegendMarker_ChildEvent(QBarLegendMarker* self, QChildEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker) {
        vqbarlegendmarker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarLegendMarker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperChildEvent(QBarLegendMarker* self, QChildEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->QBarLegendMarker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarLegendMarker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnChildEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_childevent_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarLegendMarker_CustomEvent(QBarLegendMarker* self, QEvent* event) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker) {
        vqbarlegendmarker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarLegendMarker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperCustomEvent(QBarLegendMarker* self, QEvent* event) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->QBarLegendMarker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarLegendMarker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnCustomEvent(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_customevent_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarLegendMarker_ConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker) {
        vqbarlegendmarker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarLegendMarker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->QBarLegendMarker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarLegendMarker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnConnectNotify(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_connectnotify_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBarLegendMarker_DisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
    if (vqbarlegendmarker) {
        vqbarlegendmarker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarLegendMarker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarLegendMarker_SuperDisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self)) {
        vqbarlegendmarker->QBarLegendMarker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarLegendMarker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnDisconnectNotify(QBarLegendMarker* self, intptr_t slot) {
    if (auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self))
        vqbarlegendmarker->qbarlegendmarker_disconnectnotify_callback = reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBarLegendMarker_Sender(const QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->VirtualQBarLegendMarker::sender();
    } else
        qFatal("Error: Protected method QBarLegendMarker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarLegendMarker_SenderSignalIndex(const QBarLegendMarker* self) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->VirtualQBarLegendMarker::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBarLegendMarker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarLegendMarker_Receivers(const QBarLegendMarker* self, const char* signal) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->VirtualQBarLegendMarker::receivers(signal);
    } else
        qFatal("Error: Protected method QBarLegendMarker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBarLegendMarker_IsSignalConnected(const QBarLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqbarlegendmarker = const_cast<VirtualQBarLegendMarker*>(dynamic_cast<const VirtualQBarLegendMarker*>(self))) {
        return vqbarlegendmarker->VirtualQBarLegendMarker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBarLegendMarker::isSignalConnected called without a directly constructed type");
}

void QBarLegendMarker_Delete(QBarLegendMarker* self) {
    delete self;
}
