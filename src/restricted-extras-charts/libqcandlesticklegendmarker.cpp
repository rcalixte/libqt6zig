#include <QCandlestickLegendMarker>
#include <QCandlestickSeries>
#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qcandlesticklegendmarker.h>
#include "libqcandlesticklegendmarker.h"
#include "libqcandlesticklegendmarker.hxx"

QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend) {
    return new VirtualQCandlestickLegendMarker(series, legend);
}

QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQCandlestickLegendMarker(series, legend, parent);
}

QMetaObject* QCandlestickLegendMarker_MetaObject(const QCandlestickLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCandlestickLegendMarker_Metacast(QCandlestickLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCandlestickLegendMarker_Metacall(QCandlestickLegendMarker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCandlestickLegendMarker_Tr(const char* s) {
    auto _ret = QCandlestickLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QCandlestickLegendMarker_Type(QCandlestickLegendMarker* self) {
    return static_cast<int>(self->type());
}

QCandlestickSeries* QCandlestickLegendMarker_Series(QCandlestickLegendMarker* self) {
    return self->series();
}

libqt_string QCandlestickLegendMarker_Tr2(const char* s, const char* c) {
    auto _ret = QCandlestickLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCandlestickLegendMarker_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCandlestickLegendMarker::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCandlestickLegendMarker_SuperMetaObject(const QCandlestickLegendMarker* self) {
    return (QMetaObject*)self->QCandlestickLegendMarker::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnMetaObject(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self)))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_metaobject_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCandlestickLegendMarker_SuperMetacast(QCandlestickLegendMarker* self, const char* param1) {
    return self->QCandlestickLegendMarker::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnMetacast(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_metacast_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCandlestickLegendMarker_SuperMetacall(QCandlestickLegendMarker* self, int param1, int param2, void** param3) {
    return self->QCandlestickLegendMarker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnMetacall(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_metacall_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Metacall_Callback>(slot);
}

// Base class handler implementation
int QCandlestickLegendMarker_SuperType(QCandlestickLegendMarker* self) {
    return static_cast<int>(self->QCandlestickLegendMarker::type());
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnType(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_type_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Type_Callback>(slot);
}

// Base class handler implementation
QCandlestickSeries* QCandlestickLegendMarker_SuperSeries(QCandlestickLegendMarker* self) {
    return self->QCandlestickLegendMarker::series();
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnSeries(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_series_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Series_Callback>(slot);
}

// Derived class handler implementation
bool QCandlestickLegendMarker_Event(QCandlestickLegendMarker* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCandlestickLegendMarker_SuperEvent(QCandlestickLegendMarker* self, QEvent* event) {
    return self->QCandlestickLegendMarker::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_event_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCandlestickLegendMarker_EventFilter(QCandlestickLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCandlestickLegendMarker_SuperEventFilter(QCandlestickLegendMarker* self, QObject* watched, QEvent* event) {
    return self->QCandlestickLegendMarker::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnEventFilter(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_eventfilter_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickLegendMarker_TimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker) {
        vqcandlesticklegendmarker->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_SuperTimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self)) {
        vqcandlesticklegendmarker->QCandlestickLegendMarker::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnTimerEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_timerevent_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickLegendMarker_ChildEvent(QCandlestickLegendMarker* self, QChildEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker) {
        vqcandlesticklegendmarker->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_SuperChildEvent(QCandlestickLegendMarker* self, QChildEvent* event) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self)) {
        vqcandlesticklegendmarker->QCandlestickLegendMarker::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnChildEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_childevent_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickLegendMarker_CustomEvent(QCandlestickLegendMarker* self, QEvent* event) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker) {
        vqcandlesticklegendmarker->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_SuperCustomEvent(QCandlestickLegendMarker* self, QEvent* event) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self)) {
        vqcandlesticklegendmarker->QCandlestickLegendMarker::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnCustomEvent(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_customevent_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickLegendMarker_ConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker) {
        vqcandlesticklegendmarker->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_SuperConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self)) {
        vqcandlesticklegendmarker->QCandlestickLegendMarker::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnConnectNotify(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_connectnotify_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCandlestickLegendMarker_DisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
    if (vqcandlesticklegendmarker) {
        vqcandlesticklegendmarker->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCandlestickLegendMarker_SuperDisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self)) {
        vqcandlesticklegendmarker->QCandlestickLegendMarker::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCandlestickLegendMarker::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnDisconnectNotify(QCandlestickLegendMarker* self, intptr_t slot) {
    if (auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self))
        vqcandlesticklegendmarker->qcandlesticklegendmarker_disconnectnotify_callback = reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCandlestickLegendMarker_Sender(const QCandlestickLegendMarker* self) {
    if (auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self))) {
        return vqcandlesticklegendmarker->VirtualQCandlestickLegendMarker::sender();
    } else
        qFatal("Error: Protected method QCandlestickLegendMarker::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickLegendMarker_SenderSignalIndex(const QCandlestickLegendMarker* self) {
    if (auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self))) {
        return vqcandlesticklegendmarker->VirtualQCandlestickLegendMarker::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCandlestickLegendMarker::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCandlestickLegendMarker_Receivers(const QCandlestickLegendMarker* self, const char* signal) {
    if (auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self))) {
        return vqcandlesticklegendmarker->VirtualQCandlestickLegendMarker::receivers(signal);
    } else
        qFatal("Error: Protected method QCandlestickLegendMarker::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCandlestickLegendMarker_IsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal) {
    if (auto* vqcandlesticklegendmarker = const_cast<VirtualQCandlestickLegendMarker*>(dynamic_cast<const VirtualQCandlestickLegendMarker*>(self))) {
        return vqcandlesticklegendmarker->VirtualQCandlestickLegendMarker::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCandlestickLegendMarker::isSignalConnected called without a directly constructed type");
}

void QCandlestickLegendMarker_Delete(QCandlestickLegendMarker* self) {
    delete self;
}
