#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QXYLegendMarker>
#include <QXYSeries>
#include <qxylegendmarker.h>
#include "libqxylegendmarker.h"
#include "libqxylegendmarker.hxx"

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend) {
    return new VirtualQXYLegendMarker(series, legend);
}

QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQXYLegendMarker(series, legend, parent);
}

QMetaObject* QXYLegendMarker_MetaObject(const QXYLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QXYLegendMarker_Metacast(QXYLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QXYLegendMarker_Metacall(QXYLegendMarker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QXYLegendMarker_Tr(const char* s) {
    auto _ret = QXYLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QXYLegendMarker_Type(QXYLegendMarker* self) {
    return static_cast<int>(self->type());
}

QXYSeries* QXYLegendMarker_Series(QXYLegendMarker* self) {
    return self->series();
}

libqt_string QXYLegendMarker_Tr2(const char* s, const char* c) {
    auto _ret = QXYLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QXYLegendMarker_Tr3(const char* s, const char* c, int n) {
    auto _ret = QXYLegendMarker::tr(s, c, static_cast<int>(n));
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
QMetaObject* QXYLegendMarker_SuperMetaObject(const QXYLegendMarker* self) {
    return (QMetaObject*)self->QXYLegendMarker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnMetaObject(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self)))
        vqxylegendmarker->qxylegendmarker_metaobject_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QXYLegendMarker_SuperMetacast(QXYLegendMarker* self, const char* param1) {
    return self->QXYLegendMarker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnMetacast(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_metacast_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Metacast_Callback>(slot);
}

// Base class handler implementation
int QXYLegendMarker_SuperMetacall(QXYLegendMarker* self, int param1, int param2, void** param3) {
    return self->QXYLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnMetacall(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_metacall_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Metacall_Callback>(slot);
}

// Base class handler implementation
int QXYLegendMarker_SuperType(QXYLegendMarker* self) {
    return static_cast<int>(self->QXYLegendMarker::type());
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnType(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_type_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Type_Callback>(slot);
}

// Base class handler implementation
QXYSeries* QXYLegendMarker_SuperSeries(QXYLegendMarker* self) {
    return self->QXYLegendMarker::series();
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSeries(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_series_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Series_Callback>(slot);
}

// Derived class handler implementation
bool QXYLegendMarker_Event(QXYLegendMarker* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QXYLegendMarker_SuperEvent(QXYLegendMarker* self, QEvent* event) {
    return self->QXYLegendMarker::event(event);
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_event_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Event_Callback>(slot);
}

// Derived class handler implementation
bool QXYLegendMarker_EventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QXYLegendMarker_SuperEventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event) {
    return self->QXYLegendMarker::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnEventFilter(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_eventfilter_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QXYLegendMarker_TimerEvent(QXYLegendMarker* self, QTimerEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker) {
        vqxylegendmarker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QXYLegendMarker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QXYLegendMarker_SuperTimerEvent(QXYLegendMarker* self, QTimerEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->QXYLegendMarker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QXYLegendMarker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnTimerEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_timerevent_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QXYLegendMarker_ChildEvent(QXYLegendMarker* self, QChildEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker) {
        vqxylegendmarker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QXYLegendMarker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QXYLegendMarker_SuperChildEvent(QXYLegendMarker* self, QChildEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->QXYLegendMarker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QXYLegendMarker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnChildEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_childevent_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QXYLegendMarker_CustomEvent(QXYLegendMarker* self, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker) {
        vqxylegendmarker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QXYLegendMarker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QXYLegendMarker_SuperCustomEvent(QXYLegendMarker* self, QEvent* event) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->QXYLegendMarker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QXYLegendMarker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnCustomEvent(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_customevent_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QXYLegendMarker_ConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker) {
        vqxylegendmarker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QXYLegendMarker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QXYLegendMarker_SuperConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->QXYLegendMarker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QXYLegendMarker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnConnectNotify(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_connectnotify_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QXYLegendMarker_DisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker) {
        vqxylegendmarker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QXYLegendMarker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QXYLegendMarker_SuperDisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self)) {
        vqxylegendmarker->QXYLegendMarker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QXYLegendMarker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnDisconnectNotify(QXYLegendMarker* self, intptr_t slot) {
    if (auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self))
        vqxylegendmarker->qxylegendmarker_disconnectnotify_callback = reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QXYLegendMarker_Sender(const QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->VirtualQXYLegendMarker::sender();
    } else
        qFatal("Error: Protected method QXYLegendMarker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QXYLegendMarker_SenderSignalIndex(const QXYLegendMarker* self) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->VirtualQXYLegendMarker::senderSignalIndex();
    } else
        qFatal("Error: Protected method QXYLegendMarker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QXYLegendMarker_Receivers(const QXYLegendMarker* self, const char* signal) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->VirtualQXYLegendMarker::receivers(signal);
    } else
        qFatal("Error: Protected method QXYLegendMarker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QXYLegendMarker_IsSignalConnected(const QXYLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self))) {
        return vqxylegendmarker->VirtualQXYLegendMarker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QXYLegendMarker::isSignalConnected called without a directly constructed type");
}

void QXYLegendMarker_Delete(QXYLegendMarker* self) {
    delete self;
}
