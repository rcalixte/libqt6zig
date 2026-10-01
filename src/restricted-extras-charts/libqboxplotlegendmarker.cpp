#include <QBoxPlotLegendMarker>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBoxPlotLegendMarker_Tr(const char* s) {
    auto _ret = QBoxPlotLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QBoxPlotLegendMarker_Type(QBoxPlotLegendMarker* self) {
    return static_cast<int>(self->type());
}

QBoxPlotSeries* QBoxPlotLegendMarker_Series(QBoxPlotLegendMarker* self) {
    return self->series();
}

libqt_string QBoxPlotLegendMarker_Tr2(const char* s, const char* c) {
    auto _ret = QBoxPlotLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBoxPlotLegendMarker_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBoxPlotLegendMarker::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBoxPlotLegendMarker_SuperMetaObject(const QBoxPlotLegendMarker* self) {
    return (QMetaObject*)self->QBoxPlotLegendMarker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnMetaObject(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self)))
        vqboxplotlegendmarker->qboxplotlegendmarker_metaobject_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBoxPlotLegendMarker_SuperMetacast(QBoxPlotLegendMarker* self, const char* param1) {
    return self->QBoxPlotLegendMarker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnMetacast(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_metacast_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBoxPlotLegendMarker_SuperMetacall(QBoxPlotLegendMarker* self, int param1, int param2, void** param3) {
    return self->QBoxPlotLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnMetacall(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_metacall_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Metacall_Callback>(slot);
}

// Base class handler implementation
int QBoxPlotLegendMarker_SuperType(QBoxPlotLegendMarker* self) {
    return static_cast<int>(self->QBoxPlotLegendMarker::type());
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnType(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_type_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Type_Callback>(slot);
}

// Base class handler implementation
QBoxPlotSeries* QBoxPlotLegendMarker_SuperSeries(QBoxPlotLegendMarker* self) {
    return self->QBoxPlotLegendMarker::series();
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSeries(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_series_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Series_Callback>(slot);
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_Event(QBoxPlotLegendMarker* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBoxPlotLegendMarker_SuperEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    return self->QBoxPlotLegendMarker::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_event_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBoxPlotLegendMarker_EventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBoxPlotLegendMarker_SuperEventFilter(QBoxPlotLegendMarker* self, QObject* watched, QEvent* event) {
    return self->QBoxPlotLegendMarker::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnEventFilter(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_eventfilter_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBoxPlotLegendMarker_TimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker) {
        vqboxplotlegendmarker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_SuperTimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->QBoxPlotLegendMarker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnTimerEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_timerevent_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBoxPlotLegendMarker_ChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker) {
        vqboxplotlegendmarker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_SuperChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->QBoxPlotLegendMarker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnChildEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_childevent_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBoxPlotLegendMarker_CustomEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker) {
        vqboxplotlegendmarker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_SuperCustomEvent(QBoxPlotLegendMarker* self, QEvent* event) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->QBoxPlotLegendMarker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnCustomEvent(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_customevent_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBoxPlotLegendMarker_ConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker) {
        vqboxplotlegendmarker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_SuperConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->QBoxPlotLegendMarker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnConnectNotify(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_connectnotify_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBoxPlotLegendMarker_DisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
    if (vqboxplotlegendmarker) {
        vqboxplotlegendmarker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBoxPlotLegendMarker_SuperDisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self)) {
        vqboxplotlegendmarker->QBoxPlotLegendMarker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBoxPlotLegendMarker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnDisconnectNotify(QBoxPlotLegendMarker* self, intptr_t slot) {
    if (auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self))
        vqboxplotlegendmarker->qboxplotlegendmarker_disconnectnotify_callback = reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBoxPlotLegendMarker_Sender(const QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->VirtualQBoxPlotLegendMarker::sender();
    } else
        qFatal("Error: Protected method QBoxPlotLegendMarker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBoxPlotLegendMarker_SenderSignalIndex(const QBoxPlotLegendMarker* self) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->VirtualQBoxPlotLegendMarker::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBoxPlotLegendMarker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBoxPlotLegendMarker_Receivers(const QBoxPlotLegendMarker* self, const char* signal) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->VirtualQBoxPlotLegendMarker::receivers(signal);
    } else
        qFatal("Error: Protected method QBoxPlotLegendMarker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBoxPlotLegendMarker_IsSignalConnected(const QBoxPlotLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqboxplotlegendmarker = const_cast<VirtualQBoxPlotLegendMarker*>(dynamic_cast<const VirtualQBoxPlotLegendMarker*>(self))) {
        return vqboxplotlegendmarker->VirtualQBoxPlotLegendMarker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBoxPlotLegendMarker::isSignalConnected called without a directly constructed type");
}

void QBoxPlotLegendMarker_Delete(QBoxPlotLegendMarker* self) {
    delete self;
}
