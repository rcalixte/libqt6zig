#include <QAbstractSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QLineSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QTimerEvent>
#include <QXYSeries>
#include <qlineseries.h>
#include "libqlineseries.h"
#include "libqlineseries.hxx"

QLineSeries* QLineSeries_new() {
    return new VirtualQLineSeries();
}

QLineSeries* QLineSeries_new2(QObject* parent) {
    return new VirtualQLineSeries(parent);
}

QMetaObject* QLineSeries_MetaObject(const QLineSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLineSeries_Metacast(QLineSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLineSeries_Metacall(QLineSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLineSeries_Tr(const char* s) {
    auto _ret = QLineSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLineSeries_Type(const QLineSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QLineSeries_Tr2(const char* s, const char* c) {
    auto _ret = QLineSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLineSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLineSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLineSeries_SuperMetaObject(const QLineSeries* self) {
    return (QMetaObject*)self->QLineSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnMetaObject(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self)))
        vqlineseries->qlineseries_metaobject_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLineSeries_SuperMetacast(QLineSeries* self, const char* param1) {
    return self->QLineSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnMetacast(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_metacast_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLineSeries_SuperMetacall(QLineSeries* self, int param1, int param2, void** param3) {
    return self->QLineSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnMetacall(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_metacall_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QLineSeries_SuperType(const QLineSeries* self) {
    return static_cast<int>(self->QLineSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnType(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self)))
        vqlineseries->qlineseries_type_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_Type_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_SetPen(QLineSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

// Base class handler implementation
void QLineSeries_SuperSetPen(QLineSeries* self, const QPen* pen) {
    self->QLineSeries::setPen(*pen);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetPen(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_setpen_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_SetPen_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_SetBrush(QLineSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

// Base class handler implementation
void QLineSeries_SuperSetBrush(QLineSeries* self, const QBrush* brush) {
    self->QLineSeries::setBrush(*brush);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetBrush(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_setbrush_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_SetBrush_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_SetColor(QLineSeries* self, const QColor* color) {
    self->setColor(*color);
}

// Base class handler implementation
void QLineSeries_SuperSetColor(QLineSeries* self, const QColor* color) {
    self->QLineSeries::setColor(*color);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnSetColor(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_setcolor_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_SetColor_Callback>(slot);
}

// Derived class handler implementation
QColor* QLineSeries_Color(const QLineSeries* self) {
    return new QColor(self->color());
}

// Base class handler implementation
QColor* QLineSeries_SuperColor(const QLineSeries* self) {
    return new QColor(self->QLineSeries::color());
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnColor(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self)))
        vqlineseries->qlineseries_color_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_Color_Callback>(slot);
}

// Derived class handler implementation
bool QLineSeries_Event(QLineSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLineSeries_SuperEvent(QLineSeries* self, QEvent* event) {
    return self->QLineSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_event_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLineSeries_EventFilter(QLineSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLineSeries_SuperEventFilter(QLineSeries* self, QObject* watched, QEvent* event) {
    return self->QLineSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnEventFilter(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_eventfilter_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_TimerEvent(QLineSeries* self, QTimerEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries) {
        vqlineseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineSeries_SuperTimerEvent(QLineSeries* self, QTimerEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->QLineSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnTimerEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_timerevent_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_ChildEvent(QLineSeries* self, QChildEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries) {
        vqlineseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineSeries_SuperChildEvent(QLineSeries* self, QChildEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->QLineSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnChildEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_childevent_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_CustomEvent(QLineSeries* self, QEvent* event) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries) {
        vqlineseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineSeries_SuperCustomEvent(QLineSeries* self, QEvent* event) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->QLineSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnCustomEvent(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_customevent_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_ConnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries) {
        vqlineseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLineSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineSeries_SuperConnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->QLineSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLineSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnConnectNotify(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_connectnotify_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLineSeries_DisconnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self);
    if (vqlineseries) {
        vqlineseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLineSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineSeries_SuperDisconnectNotify(QLineSeries* self, const QMetaMethod* signal) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self)) {
        vqlineseries->QLineSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLineSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnDisconnectNotify(QLineSeries* self, intptr_t slot) {
    if (auto* vqlineseries = dynamic_cast<VirtualQLineSeries*>(self))
        vqlineseries->qlineseries_disconnectnotify_callback = reinterpret_cast<VirtualQLineSeries::QLineSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QLineSeries_Sender(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->VirtualQLineSeries::sender();
    } else
        qFatal("Error: Protected method QLineSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLineSeries_SenderSignalIndex(const QLineSeries* self) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->VirtualQLineSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLineSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLineSeries_Receivers(const QLineSeries* self, const char* signal) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->VirtualQLineSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QLineSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLineSeries_IsSignalConnected(const QLineSeries* self, const QMetaMethod* signal) {
    if (auto* vqlineseries = const_cast<VirtualQLineSeries*>(dynamic_cast<const VirtualQLineSeries*>(self))) {
        return vqlineseries->VirtualQLineSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLineSeries::isSignalConnected called without a directly constructed type");
}

void QLineSeries_Delete(QLineSeries* self) {
    delete self;
}
