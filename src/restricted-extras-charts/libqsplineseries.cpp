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
#include <QSplineSeries>
#include <QString>
#include <QTimerEvent>
#include <QXYSeries>
#include <qsplineseries.h>
#include "libqsplineseries.h"
#include "libqsplineseries.hxx"

QSplineSeries* QSplineSeries_new() {
    return new VirtualQSplineSeries();
}

QSplineSeries* QSplineSeries_new2(QObject* parent) {
    return new VirtualQSplineSeries(parent);
}

QMetaObject* QSplineSeries_MetaObject(const QSplineSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplineSeries_Metacast(QSplineSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplineSeries_Metacall(QSplineSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSplineSeries_Tr(const char* s) {
    auto _ret = QSplineSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSplineSeries_Type(const QSplineSeries* self) {
    return static_cast<int>(self->type());
}

libqt_string QSplineSeries_Tr2(const char* s, const char* c) {
    auto _ret = QSplineSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSplineSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSplineSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSplineSeries_SuperMetaObject(const QSplineSeries* self) {
    return (QMetaObject*)self->QSplineSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnMetaObject(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self)))
        vqsplineseries->qsplineseries_metaobject_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSplineSeries_SuperMetacast(QSplineSeries* self, const char* param1) {
    return self->QSplineSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnMetacast(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_metacast_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSplineSeries_SuperMetacall(QSplineSeries* self, int param1, int param2, void** param3) {
    return self->QSplineSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnMetacall(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_metacall_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QSplineSeries_SuperType(const QSplineSeries* self) {
    return static_cast<int>(self->QSplineSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnType(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self)))
        vqsplineseries->qsplineseries_type_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Type_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_SetPen(QSplineSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

// Base class handler implementation
void QSplineSeries_SuperSetPen(QSplineSeries* self, const QPen* pen) {
    self->QSplineSeries::setPen(*pen);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetPen(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_setpen_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetPen_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_SetBrush(QSplineSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

// Base class handler implementation
void QSplineSeries_SuperSetBrush(QSplineSeries* self, const QBrush* brush) {
    self->QSplineSeries::setBrush(*brush);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetBrush(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_setbrush_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetBrush_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_SetColor(QSplineSeries* self, const QColor* color) {
    self->setColor(*color);
}

// Base class handler implementation
void QSplineSeries_SuperSetColor(QSplineSeries* self, const QColor* color) {
    self->QSplineSeries::setColor(*color);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnSetColor(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_setcolor_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_SetColor_Callback>(slot);
}

// Derived class handler implementation
QColor* QSplineSeries_Color(const QSplineSeries* self) {
    return new QColor(self->color());
}

// Base class handler implementation
QColor* QSplineSeries_SuperColor(const QSplineSeries* self) {
    return new QColor(self->QSplineSeries::color());
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnColor(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self)))
        vqsplineseries->qsplineseries_color_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Color_Callback>(slot);
}

// Derived class handler implementation
bool QSplineSeries_Event(QSplineSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSplineSeries_SuperEvent(QSplineSeries* self, QEvent* event) {
    return self->QSplineSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_event_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSplineSeries_EventFilter(QSplineSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSplineSeries_SuperEventFilter(QSplineSeries* self, QObject* watched, QEvent* event) {
    return self->QSplineSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnEventFilter(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_eventfilter_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_TimerEvent(QSplineSeries* self, QTimerEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries) {
        vqsplineseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplineSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplineSeries_SuperTimerEvent(QSplineSeries* self, QTimerEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->QSplineSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplineSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnTimerEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_timerevent_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_ChildEvent(QSplineSeries* self, QChildEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries) {
        vqsplineseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplineSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplineSeries_SuperChildEvent(QSplineSeries* self, QChildEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->QSplineSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplineSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnChildEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_childevent_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_CustomEvent(QSplineSeries* self, QEvent* event) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries) {
        vqsplineseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplineSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplineSeries_SuperCustomEvent(QSplineSeries* self, QEvent* event) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->QSplineSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplineSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnCustomEvent(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_customevent_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_ConnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries) {
        vqsplineseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplineSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplineSeries_SuperConnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->QSplineSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplineSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnConnectNotify(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_connectnotify_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSplineSeries_DisconnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self);
    if (vqsplineseries) {
        vqsplineseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplineSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplineSeries_SuperDisconnectNotify(QSplineSeries* self, const QMetaMethod* signal) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self)) {
        vqsplineseries->QSplineSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplineSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnDisconnectNotify(QSplineSeries* self, intptr_t slot) {
    if (auto* vqsplineseries = dynamic_cast<VirtualQSplineSeries*>(self))
        vqsplineseries->qsplineseries_disconnectnotify_callback = reinterpret_cast<VirtualQSplineSeries::QSplineSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSplineSeries_Sender(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->VirtualQSplineSeries::sender();
    } else
        qFatal("Error: Protected method QSplineSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplineSeries_SenderSignalIndex(const QSplineSeries* self) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->VirtualQSplineSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSplineSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplineSeries_Receivers(const QSplineSeries* self, const char* signal) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->VirtualQSplineSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QSplineSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplineSeries_IsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal) {
    if (auto* vqsplineseries = const_cast<VirtualQSplineSeries*>(dynamic_cast<const VirtualQSplineSeries*>(self))) {
        return vqsplineseries->VirtualQSplineSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSplineSeries::isSignalConnected called without a directly constructed type");
}

void QSplineSeries_Delete(QSplineSeries* self) {
    delete self;
}
