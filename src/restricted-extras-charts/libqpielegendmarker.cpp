#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieLegendMarker>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPieLegendMarker_Tr(const char* s) {
    auto _ret = QPieLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPieLegendMarker_Type(QPieLegendMarker* self) {
    return static_cast<int>(self->type());
}

QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self) {
    return self->series();
}

QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self) {
    return self->slice();
}

libqt_string QPieLegendMarker_Tr2(const char* s, const char* c) {
    auto _ret = QPieLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPieLegendMarker_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPieLegendMarker::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPieLegendMarker_SuperMetaObject(const QPieLegendMarker* self) {
    return (QMetaObject*)self->QPieLegendMarker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnMetaObject(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self)))
        vqpielegendmarker->qpielegendmarker_metaobject_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPieLegendMarker_SuperMetacast(QPieLegendMarker* self, const char* param1) {
    return self->QPieLegendMarker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnMetacast(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_metacast_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPieLegendMarker_SuperMetacall(QPieLegendMarker* self, int param1, int param2, void** param3) {
    return self->QPieLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnMetacall(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_metacall_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPieLegendMarker_SuperType(QPieLegendMarker* self) {
    return static_cast<int>(self->QPieLegendMarker::type());
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_type_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Type_Callback>(slot);
}

// Base class handler implementation
QPieSeries* QPieLegendMarker_SuperSeries(QPieLegendMarker* self) {
    return self->QPieLegendMarker::series();
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_series_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Series_Callback>(slot);
}

// Derived class handler implementation
bool QPieLegendMarker_Event(QPieLegendMarker* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPieLegendMarker_SuperEvent(QPieLegendMarker* self, QEvent* event) {
    return self->QPieLegendMarker::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_event_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPieLegendMarker_EventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPieLegendMarker_SuperEventFilter(QPieLegendMarker* self, QObject* watched, QEvent* event) {
    return self->QPieLegendMarker::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnEventFilter(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_eventfilter_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPieLegendMarker_TimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker) {
        vqpielegendmarker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPieLegendMarker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperTimerEvent(QPieLegendMarker* self, QTimerEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->QPieLegendMarker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPieLegendMarker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnTimerEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_timerevent_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPieLegendMarker_ChildEvent(QPieLegendMarker* self, QChildEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker) {
        vqpielegendmarker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPieLegendMarker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperChildEvent(QPieLegendMarker* self, QChildEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->QPieLegendMarker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPieLegendMarker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnChildEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_childevent_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPieLegendMarker_CustomEvent(QPieLegendMarker* self, QEvent* event) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker) {
        vqpielegendmarker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPieLegendMarker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperCustomEvent(QPieLegendMarker* self, QEvent* event) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->QPieLegendMarker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPieLegendMarker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnCustomEvent(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_customevent_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPieLegendMarker_ConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker) {
        vqpielegendmarker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPieLegendMarker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->QPieLegendMarker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPieLegendMarker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnConnectNotify(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_connectnotify_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPieLegendMarker_DisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
    if (vqpielegendmarker) {
        vqpielegendmarker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPieLegendMarker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPieLegendMarker_SuperDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self)) {
        vqpielegendmarker->QPieLegendMarker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPieLegendMarker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnDisconnectNotify(QPieLegendMarker* self, intptr_t slot) {
    if (auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self))
        vqpielegendmarker->qpielegendmarker_disconnectnotify_callback = reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPieLegendMarker_Sender(const QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->VirtualQPieLegendMarker::sender();
    } else
        qFatal("Error: Protected method QPieLegendMarker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPieLegendMarker_SenderSignalIndex(const QPieLegendMarker* self) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->VirtualQPieLegendMarker::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPieLegendMarker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPieLegendMarker_Receivers(const QPieLegendMarker* self, const char* signal) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->VirtualQPieLegendMarker::receivers(signal);
    } else
        qFatal("Error: Protected method QPieLegendMarker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPieLegendMarker_IsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqpielegendmarker = const_cast<VirtualQPieLegendMarker*>(dynamic_cast<const VirtualQPieLegendMarker*>(self))) {
        return vqpielegendmarker->VirtualQPieLegendMarker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPieLegendMarker::isSignalConnected called without a directly constructed type");
}

void QPieLegendMarker_Delete(QPieLegendMarker* self) {
    delete self;
}
