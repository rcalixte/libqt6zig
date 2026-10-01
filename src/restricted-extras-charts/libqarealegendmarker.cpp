#include <QAreaLegendMarker>
#include <QAreaSeries>
#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAreaLegendMarker_Tr(const char* s) {
    auto _ret = QAreaLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAreaLegendMarker_Type(QAreaLegendMarker* self) {
    return static_cast<int>(self->type());
}

QAreaSeries* QAreaLegendMarker_Series(QAreaLegendMarker* self) {
    return self->series();
}

libqt_string QAreaLegendMarker_Tr2(const char* s, const char* c) {
    auto _ret = QAreaLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAreaLegendMarker_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAreaLegendMarker::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAreaLegendMarker_SuperMetaObject(const QAreaLegendMarker* self) {
    return (QMetaObject*)self->QAreaLegendMarker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnMetaObject(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self)))
        vqarealegendmarker->qarealegendmarker_metaobject_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAreaLegendMarker_SuperMetacast(QAreaLegendMarker* self, const char* param1) {
    return self->QAreaLegendMarker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnMetacast(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_metacast_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAreaLegendMarker_SuperMetacall(QAreaLegendMarker* self, int param1, int param2, void** param3) {
    return self->QAreaLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnMetacall(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_metacall_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Metacall_Callback>(slot);
}

// Base class handler implementation
int QAreaLegendMarker_SuperType(QAreaLegendMarker* self) {
    return static_cast<int>(self->QAreaLegendMarker::type());
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnType(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_type_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Type_Callback>(slot);
}

// Base class handler implementation
QAreaSeries* QAreaLegendMarker_SuperSeries(QAreaLegendMarker* self) {
    return self->QAreaLegendMarker::series();
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnSeries(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_series_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Series_Callback>(slot);
}

// Derived class handler implementation
bool QAreaLegendMarker_Event(QAreaLegendMarker* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAreaLegendMarker_SuperEvent(QAreaLegendMarker* self, QEvent* event) {
    return self->QAreaLegendMarker::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_event_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAreaLegendMarker_EventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAreaLegendMarker_SuperEventFilter(QAreaLegendMarker* self, QObject* watched, QEvent* event) {
    return self->QAreaLegendMarker::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnEventFilter(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_eventfilter_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAreaLegendMarker_TimerEvent(QAreaLegendMarker* self, QTimerEvent* event) {
    auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
    if (vqarealegendmarker) {
        vqarealegendmarker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAreaLegendMarker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaLegendMarker_SuperTimerEvent(QAreaLegendMarker* self, QTimerEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->QAreaLegendMarker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAreaLegendMarker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnTimerEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_timerevent_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAreaLegendMarker_ChildEvent(QAreaLegendMarker* self, QChildEvent* event) {
    auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
    if (vqarealegendmarker) {
        vqarealegendmarker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAreaLegendMarker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaLegendMarker_SuperChildEvent(QAreaLegendMarker* self, QChildEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->QAreaLegendMarker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAreaLegendMarker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnChildEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_childevent_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAreaLegendMarker_CustomEvent(QAreaLegendMarker* self, QEvent* event) {
    auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
    if (vqarealegendmarker) {
        vqarealegendmarker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAreaLegendMarker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaLegendMarker_SuperCustomEvent(QAreaLegendMarker* self, QEvent* event) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->QAreaLegendMarker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAreaLegendMarker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnCustomEvent(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_customevent_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAreaLegendMarker_ConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal) {
    auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
    if (vqarealegendmarker) {
        vqarealegendmarker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAreaLegendMarker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaLegendMarker_SuperConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->QAreaLegendMarker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAreaLegendMarker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnConnectNotify(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_connectnotify_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAreaLegendMarker_DisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal) {
    auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
    if (vqarealegendmarker) {
        vqarealegendmarker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAreaLegendMarker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAreaLegendMarker_SuperDisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self)) {
        vqarealegendmarker->QAreaLegendMarker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAreaLegendMarker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnDisconnectNotify(QAreaLegendMarker* self, intptr_t slot) {
    if (auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self))
        vqarealegendmarker->qarealegendmarker_disconnectnotify_callback = reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAreaLegendMarker_Sender(const QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->VirtualQAreaLegendMarker::sender();
    } else
        qFatal("Error: Protected method QAreaLegendMarker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAreaLegendMarker_SenderSignalIndex(const QAreaLegendMarker* self) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->VirtualQAreaLegendMarker::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAreaLegendMarker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAreaLegendMarker_Receivers(const QAreaLegendMarker* self, const char* signal) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->VirtualQAreaLegendMarker::receivers(signal);
    } else
        qFatal("Error: Protected method QAreaLegendMarker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAreaLegendMarker_IsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqarealegendmarker = const_cast<VirtualQAreaLegendMarker*>(dynamic_cast<const VirtualQAreaLegendMarker*>(self))) {
        return vqarealegendmarker->VirtualQAreaLegendMarker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAreaLegendMarker::isSignalConnected called without a directly constructed type");
}

void QAreaLegendMarker_Delete(QAreaLegendMarker* self) {
    delete self;
}
