#include <QChildEvent>
#include <QEvent>
#include <QGesture>
#include <QGestureEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QTimerEvent>
#include <QWidget>
#include <qgesture.h>
#include "libqgesture.h"
#include "libqgesture.hxx"

QGesture* QGesture_new() {
    return new VirtualQGesture();
}

QGesture* QGesture_new2(QObject* parent) {
    return new VirtualQGesture(parent);
}

QMetaObject* QGesture_MetaObject(const QGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGesture_Metacast(QGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGesture_Metacall(QGesture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGesture_Tr(const char* s) {
    auto _ret = QGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGesture_GestureType(const QGesture* self) {
    return static_cast<int>(self->gestureType());
}

int QGesture_State(const QGesture* self) {
    return static_cast<int>(self->state());
}

QPointF* QGesture_HotSpot(const QGesture* self) {
    return new QPointF(self->hotSpot());
}

void QGesture_SetHotSpot(QGesture* self, const QPointF* value) {
    self->setHotSpot(*value);
}

bool QGesture_HasHotSpot(const QGesture* self) {
    return self->hasHotSpot();
}

void QGesture_UnsetHotSpot(QGesture* self) {
    self->unsetHotSpot();
}

void QGesture_SetGestureCancelPolicy(QGesture* self, int policy) {
    self->setGestureCancelPolicy(static_cast<QGesture::GestureCancelPolicy>(policy));
}

int QGesture_GestureCancelPolicy(const QGesture* self) {
    return static_cast<int>(self->gestureCancelPolicy());
}

libqt_string QGesture_Tr2(const char* s, const char* c) {
    auto _ret = QGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGesture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGesture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGesture_SuperMetaObject(const QGesture* self) {
    return (QMetaObject*)self->QGesture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnMetaObject(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self)))
        vqgesture->qgesture_metaobject_callback = reinterpret_cast<VirtualQGesture::QGesture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGesture_SuperMetacast(QGesture* self, const char* param1) {
    return self->QGesture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnMetacast(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_metacast_callback = reinterpret_cast<VirtualQGesture::QGesture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGesture_SuperMetacall(QGesture* self, int param1, int param2, void** param3) {
    return self->QGesture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnMetacall(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_metacall_callback = reinterpret_cast<VirtualQGesture::QGesture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QGesture_Event(QGesture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGesture_SuperEvent(QGesture* self, QEvent* event) {
    return self->QGesture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_event_callback = reinterpret_cast<VirtualQGesture::QGesture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGesture_EventFilter(QGesture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGesture_SuperEventFilter(QGesture* self, QObject* watched, QEvent* event) {
    return self->QGesture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnEventFilter(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_eventfilter_callback = reinterpret_cast<VirtualQGesture::QGesture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGesture_TimerEvent(QGesture* self, QTimerEvent* event) {
    auto* vqgesture = dynamic_cast<VirtualQGesture*>(self);
    if (vqgesture) {
        vqgesture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGesture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGesture_SuperTimerEvent(QGesture* self, QTimerEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->QGesture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGesture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnTimerEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_timerevent_callback = reinterpret_cast<VirtualQGesture::QGesture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGesture_ChildEvent(QGesture* self, QChildEvent* event) {
    auto* vqgesture = dynamic_cast<VirtualQGesture*>(self);
    if (vqgesture) {
        vqgesture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGesture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGesture_SuperChildEvent(QGesture* self, QChildEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->QGesture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGesture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnChildEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_childevent_callback = reinterpret_cast<VirtualQGesture::QGesture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGesture_CustomEvent(QGesture* self, QEvent* event) {
    auto* vqgesture = dynamic_cast<VirtualQGesture*>(self);
    if (vqgesture) {
        vqgesture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGesture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGesture_SuperCustomEvent(QGesture* self, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->QGesture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGesture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnCustomEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_customevent_callback = reinterpret_cast<VirtualQGesture::QGesture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGesture_ConnectNotify(QGesture* self, const QMetaMethod* signal) {
    auto* vqgesture = dynamic_cast<VirtualQGesture*>(self);
    if (vqgesture) {
        vqgesture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGesture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGesture_SuperConnectNotify(QGesture* self, const QMetaMethod* signal) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->QGesture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGesture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnConnectNotify(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_connectnotify_callback = reinterpret_cast<VirtualQGesture::QGesture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGesture_DisconnectNotify(QGesture* self, const QMetaMethod* signal) {
    auto* vqgesture = dynamic_cast<VirtualQGesture*>(self);
    if (vqgesture) {
        vqgesture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGesture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGesture_SuperDisconnectNotify(QGesture* self, const QMetaMethod* signal) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->QGesture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGesture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnDisconnectNotify(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self))
        vqgesture->qgesture_disconnectnotify_callback = reinterpret_cast<VirtualQGesture::QGesture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGesture_Sender(const QGesture* self) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->VirtualQGesture::sender();
    } else
        qFatal("Error: Protected method QGesture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGesture_SenderSignalIndex(const QGesture* self) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->VirtualQGesture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGesture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGesture_Receivers(const QGesture* self, const char* signal) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->VirtualQGesture::receivers(signal);
    } else
        qFatal("Error: Protected method QGesture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGesture_IsSignalConnected(const QGesture* self, const QMetaMethod* signal) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->VirtualQGesture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGesture::isSignalConnected called without a directly constructed type");
}

void QGesture_Delete(QGesture* self) {
    delete self;
}

QPanGesture* QPanGesture_new() {
    return new VirtualQPanGesture();
}

QPanGesture* QPanGesture_new2(QObject* parent) {
    return new VirtualQPanGesture(parent);
}

QMetaObject* QPanGesture_MetaObject(const QPanGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPanGesture_Metacast(QPanGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPanGesture_Metacall(QPanGesture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPanGesture_Tr(const char* s) {
    auto _ret = QPanGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPointF* QPanGesture_LastOffset(const QPanGesture* self) {
    return new QPointF(self->lastOffset());
}

QPointF* QPanGesture_Offset(const QPanGesture* self) {
    return new QPointF(self->offset());
}

QPointF* QPanGesture_Delta(const QPanGesture* self) {
    return new QPointF(self->delta());
}

double QPanGesture_Acceleration(const QPanGesture* self) {
    return static_cast<double>(self->acceleration());
}

void QPanGesture_SetLastOffset(QPanGesture* self, const QPointF* value) {
    self->setLastOffset(*value);
}

void QPanGesture_SetOffset(QPanGesture* self, const QPointF* value) {
    self->setOffset(*value);
}

void QPanGesture_SetAcceleration(QPanGesture* self, double value) {
    self->setAcceleration(static_cast<qreal>(value));
}

libqt_string QPanGesture_Tr2(const char* s, const char* c) {
    auto _ret = QPanGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPanGesture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPanGesture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPanGesture_SuperMetaObject(const QPanGesture* self) {
    return (QMetaObject*)self->QPanGesture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnMetaObject(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self)))
        vqpangesture->qpangesture_metaobject_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPanGesture_SuperMetacast(QPanGesture* self, const char* param1) {
    return self->QPanGesture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnMetacast(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_metacast_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPanGesture_SuperMetacall(QPanGesture* self, int param1, int param2, void** param3) {
    return self->QPanGesture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnMetacall(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_metacall_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPanGesture_Event(QPanGesture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPanGesture_SuperEvent(QPanGesture* self, QEvent* event) {
    return self->QPanGesture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_event_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPanGesture_EventFilter(QPanGesture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPanGesture_SuperEventFilter(QPanGesture* self, QObject* watched, QEvent* event) {
    return self->QPanGesture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnEventFilter(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_eventfilter_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPanGesture_TimerEvent(QPanGesture* self, QTimerEvent* event) {
    auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self);
    if (vqpangesture) {
        vqpangesture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPanGesture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPanGesture_SuperTimerEvent(QPanGesture* self, QTimerEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->QPanGesture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPanGesture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnTimerEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_timerevent_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPanGesture_ChildEvent(QPanGesture* self, QChildEvent* event) {
    auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self);
    if (vqpangesture) {
        vqpangesture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPanGesture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPanGesture_SuperChildEvent(QPanGesture* self, QChildEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->QPanGesture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPanGesture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnChildEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_childevent_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPanGesture_CustomEvent(QPanGesture* self, QEvent* event) {
    auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self);
    if (vqpangesture) {
        vqpangesture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPanGesture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPanGesture_SuperCustomEvent(QPanGesture* self, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->QPanGesture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPanGesture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnCustomEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_customevent_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPanGesture_ConnectNotify(QPanGesture* self, const QMetaMethod* signal) {
    auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self);
    if (vqpangesture) {
        vqpangesture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPanGesture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPanGesture_SuperConnectNotify(QPanGesture* self, const QMetaMethod* signal) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->QPanGesture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPanGesture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnConnectNotify(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_connectnotify_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPanGesture_DisconnectNotify(QPanGesture* self, const QMetaMethod* signal) {
    auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self);
    if (vqpangesture) {
        vqpangesture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPanGesture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPanGesture_SuperDisconnectNotify(QPanGesture* self, const QMetaMethod* signal) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->QPanGesture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPanGesture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnDisconnectNotify(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self))
        vqpangesture->qpangesture_disconnectnotify_callback = reinterpret_cast<VirtualQPanGesture::QPanGesture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPanGesture_Sender(const QPanGesture* self) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->VirtualQPanGesture::sender();
    } else
        qFatal("Error: Protected method QPanGesture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPanGesture_SenderSignalIndex(const QPanGesture* self) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->VirtualQPanGesture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPanGesture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPanGesture_Receivers(const QPanGesture* self, const char* signal) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->VirtualQPanGesture::receivers(signal);
    } else
        qFatal("Error: Protected method QPanGesture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPanGesture_IsSignalConnected(const QPanGesture* self, const QMetaMethod* signal) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->VirtualQPanGesture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPanGesture::isSignalConnected called without a directly constructed type");
}

void QPanGesture_Delete(QPanGesture* self) {
    delete self;
}

QPinchGesture* QPinchGesture_new() {
    return new VirtualQPinchGesture();
}

QPinchGesture* QPinchGesture_new2(QObject* parent) {
    return new VirtualQPinchGesture(parent);
}

QMetaObject* QPinchGesture_MetaObject(const QPinchGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPinchGesture_Metacast(QPinchGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPinchGesture_Metacall(QPinchGesture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPinchGesture_Tr(const char* s) {
    auto _ret = QPinchGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPinchGesture_TotalChangeFlags(const QPinchGesture* self) {
    return static_cast<int>(self->totalChangeFlags());
}

void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value) {
    self->setTotalChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

int QPinchGesture_ChangeFlags(const QPinchGesture* self) {
    return static_cast<int>(self->changeFlags());
}

void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value) {
    self->setChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self) {
    return new QPointF(self->startCenterPoint());
}

QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self) {
    return new QPointF(self->lastCenterPoint());
}

QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self) {
    return new QPointF(self->centerPoint());
}

void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, const QPointF* value) {
    self->setStartCenterPoint(*value);
}

void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, const QPointF* value) {
    self->setLastCenterPoint(*value);
}

void QPinchGesture_SetCenterPoint(QPinchGesture* self, const QPointF* value) {
    self->setCenterPoint(*value);
}

double QPinchGesture_TotalScaleFactor(const QPinchGesture* self) {
    return static_cast<double>(self->totalScaleFactor());
}

double QPinchGesture_LastScaleFactor(const QPinchGesture* self) {
    return static_cast<double>(self->lastScaleFactor());
}

double QPinchGesture_ScaleFactor(const QPinchGesture* self) {
    return static_cast<double>(self->scaleFactor());
}

void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value) {
    self->setTotalScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value) {
    self->setLastScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value) {
    self->setScaleFactor(static_cast<qreal>(value));
}

double QPinchGesture_TotalRotationAngle(const QPinchGesture* self) {
    return static_cast<double>(self->totalRotationAngle());
}

double QPinchGesture_LastRotationAngle(const QPinchGesture* self) {
    return static_cast<double>(self->lastRotationAngle());
}

double QPinchGesture_RotationAngle(const QPinchGesture* self) {
    return static_cast<double>(self->rotationAngle());
}

void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value) {
    self->setTotalRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value) {
    self->setLastRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value) {
    self->setRotationAngle(static_cast<qreal>(value));
}

libqt_string QPinchGesture_Tr2(const char* s, const char* c) {
    auto _ret = QPinchGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPinchGesture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPinchGesture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPinchGesture_SuperMetaObject(const QPinchGesture* self) {
    return (QMetaObject*)self->QPinchGesture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnMetaObject(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self)))
        vqpinchgesture->qpinchgesture_metaobject_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPinchGesture_SuperMetacast(QPinchGesture* self, const char* param1) {
    return self->QPinchGesture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnMetacast(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_metacast_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPinchGesture_SuperMetacall(QPinchGesture* self, int param1, int param2, void** param3) {
    return self->QPinchGesture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnMetacall(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_metacall_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPinchGesture_Event(QPinchGesture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPinchGesture_SuperEvent(QPinchGesture* self, QEvent* event) {
    return self->QPinchGesture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_event_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPinchGesture_EventFilter(QPinchGesture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPinchGesture_SuperEventFilter(QPinchGesture* self, QObject* watched, QEvent* event) {
    return self->QPinchGesture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnEventFilter(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_eventfilter_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPinchGesture_TimerEvent(QPinchGesture* self, QTimerEvent* event) {
    auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self);
    if (vqpinchgesture) {
        vqpinchgesture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPinchGesture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPinchGesture_SuperTimerEvent(QPinchGesture* self, QTimerEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->QPinchGesture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPinchGesture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnTimerEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_timerevent_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPinchGesture_ChildEvent(QPinchGesture* self, QChildEvent* event) {
    auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self);
    if (vqpinchgesture) {
        vqpinchgesture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPinchGesture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPinchGesture_SuperChildEvent(QPinchGesture* self, QChildEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->QPinchGesture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPinchGesture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnChildEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_childevent_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPinchGesture_CustomEvent(QPinchGesture* self, QEvent* event) {
    auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self);
    if (vqpinchgesture) {
        vqpinchgesture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPinchGesture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPinchGesture_SuperCustomEvent(QPinchGesture* self, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->QPinchGesture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPinchGesture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnCustomEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_customevent_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPinchGesture_ConnectNotify(QPinchGesture* self, const QMetaMethod* signal) {
    auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self);
    if (vqpinchgesture) {
        vqpinchgesture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPinchGesture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPinchGesture_SuperConnectNotify(QPinchGesture* self, const QMetaMethod* signal) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->QPinchGesture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPinchGesture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnConnectNotify(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_connectnotify_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPinchGesture_DisconnectNotify(QPinchGesture* self, const QMetaMethod* signal) {
    auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self);
    if (vqpinchgesture) {
        vqpinchgesture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPinchGesture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPinchGesture_SuperDisconnectNotify(QPinchGesture* self, const QMetaMethod* signal) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->QPinchGesture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPinchGesture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnDisconnectNotify(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self))
        vqpinchgesture->qpinchgesture_disconnectnotify_callback = reinterpret_cast<VirtualQPinchGesture::QPinchGesture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPinchGesture_Sender(const QPinchGesture* self) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->VirtualQPinchGesture::sender();
    } else
        qFatal("Error: Protected method QPinchGesture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPinchGesture_SenderSignalIndex(const QPinchGesture* self) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->VirtualQPinchGesture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPinchGesture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPinchGesture_Receivers(const QPinchGesture* self, const char* signal) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->VirtualQPinchGesture::receivers(signal);
    } else
        qFatal("Error: Protected method QPinchGesture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPinchGesture_IsSignalConnected(const QPinchGesture* self, const QMetaMethod* signal) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->VirtualQPinchGesture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPinchGesture::isSignalConnected called without a directly constructed type");
}

void QPinchGesture_Delete(QPinchGesture* self) {
    delete self;
}

QSwipeGesture* QSwipeGesture_new() {
    return new VirtualQSwipeGesture();
}

QSwipeGesture* QSwipeGesture_new2(QObject* parent) {
    return new VirtualQSwipeGesture(parent);
}

QMetaObject* QSwipeGesture_MetaObject(const QSwipeGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSwipeGesture_Metacast(QSwipeGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSwipeGesture_Metacall(QSwipeGesture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSwipeGesture_Tr(const char* s) {
    auto _ret = QSwipeGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self) {
    return static_cast<int>(self->horizontalDirection());
}

int QSwipeGesture_VerticalDirection(const QSwipeGesture* self) {
    return static_cast<int>(self->verticalDirection());
}

double QSwipeGesture_SwipeAngle(const QSwipeGesture* self) {
    return static_cast<double>(self->swipeAngle());
}

void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value) {
    self->setSwipeAngle(static_cast<qreal>(value));
}

libqt_string QSwipeGesture_Tr2(const char* s, const char* c) {
    auto _ret = QSwipeGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSwipeGesture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSwipeGesture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSwipeGesture_SuperMetaObject(const QSwipeGesture* self) {
    return (QMetaObject*)self->QSwipeGesture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnMetaObject(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self)))
        vqswipegesture->qswipegesture_metaobject_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSwipeGesture_SuperMetacast(QSwipeGesture* self, const char* param1) {
    return self->QSwipeGesture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnMetacast(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_metacast_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSwipeGesture_SuperMetacall(QSwipeGesture* self, int param1, int param2, void** param3) {
    return self->QSwipeGesture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnMetacall(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_metacall_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QSwipeGesture_Event(QSwipeGesture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSwipeGesture_SuperEvent(QSwipeGesture* self, QEvent* event) {
    return self->QSwipeGesture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_event_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSwipeGesture_EventFilter(QSwipeGesture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSwipeGesture_SuperEventFilter(QSwipeGesture* self, QObject* watched, QEvent* event) {
    return self->QSwipeGesture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnEventFilter(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_eventfilter_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSwipeGesture_TimerEvent(QSwipeGesture* self, QTimerEvent* event) {
    auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self);
    if (vqswipegesture) {
        vqswipegesture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSwipeGesture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSwipeGesture_SuperTimerEvent(QSwipeGesture* self, QTimerEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->QSwipeGesture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSwipeGesture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnTimerEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_timerevent_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSwipeGesture_ChildEvent(QSwipeGesture* self, QChildEvent* event) {
    auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self);
    if (vqswipegesture) {
        vqswipegesture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSwipeGesture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSwipeGesture_SuperChildEvent(QSwipeGesture* self, QChildEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->QSwipeGesture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSwipeGesture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnChildEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_childevent_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSwipeGesture_CustomEvent(QSwipeGesture* self, QEvent* event) {
    auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self);
    if (vqswipegesture) {
        vqswipegesture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSwipeGesture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSwipeGesture_SuperCustomEvent(QSwipeGesture* self, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->QSwipeGesture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSwipeGesture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnCustomEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_customevent_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSwipeGesture_ConnectNotify(QSwipeGesture* self, const QMetaMethod* signal) {
    auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self);
    if (vqswipegesture) {
        vqswipegesture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSwipeGesture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSwipeGesture_SuperConnectNotify(QSwipeGesture* self, const QMetaMethod* signal) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->QSwipeGesture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSwipeGesture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnConnectNotify(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_connectnotify_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSwipeGesture_DisconnectNotify(QSwipeGesture* self, const QMetaMethod* signal) {
    auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self);
    if (vqswipegesture) {
        vqswipegesture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSwipeGesture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSwipeGesture_SuperDisconnectNotify(QSwipeGesture* self, const QMetaMethod* signal) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->QSwipeGesture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSwipeGesture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnDisconnectNotify(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self))
        vqswipegesture->qswipegesture_disconnectnotify_callback = reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSwipeGesture_Sender(const QSwipeGesture* self) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->VirtualQSwipeGesture::sender();
    } else
        qFatal("Error: Protected method QSwipeGesture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSwipeGesture_SenderSignalIndex(const QSwipeGesture* self) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->VirtualQSwipeGesture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSwipeGesture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSwipeGesture_Receivers(const QSwipeGesture* self, const char* signal) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->VirtualQSwipeGesture::receivers(signal);
    } else
        qFatal("Error: Protected method QSwipeGesture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSwipeGesture_IsSignalConnected(const QSwipeGesture* self, const QMetaMethod* signal) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->VirtualQSwipeGesture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSwipeGesture::isSignalConnected called without a directly constructed type");
}

void QSwipeGesture_Delete(QSwipeGesture* self) {
    delete self;
}

QTapGesture* QTapGesture_new() {
    return new VirtualQTapGesture();
}

QTapGesture* QTapGesture_new2(QObject* parent) {
    return new VirtualQTapGesture(parent);
}

QMetaObject* QTapGesture_MetaObject(const QTapGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTapGesture_Metacast(QTapGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTapGesture_Metacall(QTapGesture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTapGesture_Tr(const char* s) {
    auto _ret = QTapGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPointF* QTapGesture_Position(const QTapGesture* self) {
    return new QPointF(self->position());
}

void QTapGesture_SetPosition(QTapGesture* self, const QPointF* pos) {
    self->setPosition(*pos);
}

libqt_string QTapGesture_Tr2(const char* s, const char* c) {
    auto _ret = QTapGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTapGesture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTapGesture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTapGesture_SuperMetaObject(const QTapGesture* self) {
    return (QMetaObject*)self->QTapGesture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnMetaObject(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self)))
        vqtapgesture->qtapgesture_metaobject_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTapGesture_SuperMetacast(QTapGesture* self, const char* param1) {
    return self->QTapGesture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnMetacast(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_metacast_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTapGesture_SuperMetacall(QTapGesture* self, int param1, int param2, void** param3) {
    return self->QTapGesture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnMetacall(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_metacall_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QTapGesture_Event(QTapGesture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTapGesture_SuperEvent(QTapGesture* self, QEvent* event) {
    return self->QTapGesture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_event_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTapGesture_EventFilter(QTapGesture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTapGesture_SuperEventFilter(QTapGesture* self, QObject* watched, QEvent* event) {
    return self->QTapGesture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnEventFilter(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_eventfilter_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTapGesture_TimerEvent(QTapGesture* self, QTimerEvent* event) {
    auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self);
    if (vqtapgesture) {
        vqtapgesture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTapGesture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapGesture_SuperTimerEvent(QTapGesture* self, QTimerEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->QTapGesture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTapGesture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnTimerEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_timerevent_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTapGesture_ChildEvent(QTapGesture* self, QChildEvent* event) {
    auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self);
    if (vqtapgesture) {
        vqtapgesture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTapGesture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapGesture_SuperChildEvent(QTapGesture* self, QChildEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->QTapGesture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTapGesture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnChildEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_childevent_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTapGesture_CustomEvent(QTapGesture* self, QEvent* event) {
    auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self);
    if (vqtapgesture) {
        vqtapgesture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTapGesture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapGesture_SuperCustomEvent(QTapGesture* self, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->QTapGesture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTapGesture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnCustomEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_customevent_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTapGesture_ConnectNotify(QTapGesture* self, const QMetaMethod* signal) {
    auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self);
    if (vqtapgesture) {
        vqtapgesture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTapGesture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapGesture_SuperConnectNotify(QTapGesture* self, const QMetaMethod* signal) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->QTapGesture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTapGesture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnConnectNotify(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_connectnotify_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTapGesture_DisconnectNotify(QTapGesture* self, const QMetaMethod* signal) {
    auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self);
    if (vqtapgesture) {
        vqtapgesture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTapGesture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapGesture_SuperDisconnectNotify(QTapGesture* self, const QMetaMethod* signal) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->QTapGesture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTapGesture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnDisconnectNotify(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self))
        vqtapgesture->qtapgesture_disconnectnotify_callback = reinterpret_cast<VirtualQTapGesture::QTapGesture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QTapGesture_Sender(const QTapGesture* self) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->VirtualQTapGesture::sender();
    } else
        qFatal("Error: Protected method QTapGesture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTapGesture_SenderSignalIndex(const QTapGesture* self) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->VirtualQTapGesture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTapGesture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTapGesture_Receivers(const QTapGesture* self, const char* signal) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->VirtualQTapGesture::receivers(signal);
    } else
        qFatal("Error: Protected method QTapGesture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTapGesture_IsSignalConnected(const QTapGesture* self, const QMetaMethod* signal) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->VirtualQTapGesture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTapGesture::isSignalConnected called without a directly constructed type");
}

void QTapGesture_Delete(QTapGesture* self) {
    delete self;
}

QTapAndHoldGesture* QTapAndHoldGesture_new() {
    return new VirtualQTapAndHoldGesture();
}

QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent) {
    return new VirtualQTapAndHoldGesture(parent);
}

QMetaObject* QTapAndHoldGesture_MetaObject(const QTapAndHoldGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTapAndHoldGesture_Metacast(QTapAndHoldGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTapAndHoldGesture_Metacall(QTapAndHoldGesture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTapAndHoldGesture_Tr(const char* s) {
    auto _ret = QTapAndHoldGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self) {
    return new QPointF(self->position());
}

void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, const QPointF* pos) {
    self->setPosition(*pos);
}

void QTapAndHoldGesture_SetTimeout(int msecs) {
    QTapAndHoldGesture::setTimeout(static_cast<int>(msecs));
}

int QTapAndHoldGesture_Timeout() {
    return QTapAndHoldGesture::timeout();
}

libqt_string QTapAndHoldGesture_Tr2(const char* s, const char* c) {
    auto _ret = QTapAndHoldGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTapAndHoldGesture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTapAndHoldGesture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTapAndHoldGesture_SuperMetaObject(const QTapAndHoldGesture* self) {
    return (QMetaObject*)self->QTapAndHoldGesture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnMetaObject(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self)))
        vqtapandholdgesture->qtapandholdgesture_metaobject_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTapAndHoldGesture_SuperMetacast(QTapAndHoldGesture* self, const char* param1) {
    return self->QTapAndHoldGesture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnMetacast(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_metacast_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTapAndHoldGesture_SuperMetacall(QTapAndHoldGesture* self, int param1, int param2, void** param3) {
    return self->QTapAndHoldGesture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnMetacall(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_metacall_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QTapAndHoldGesture_Event(QTapAndHoldGesture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTapAndHoldGesture_SuperEvent(QTapAndHoldGesture* self, QEvent* event) {
    return self->QTapAndHoldGesture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_event_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTapAndHoldGesture_EventFilter(QTapAndHoldGesture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTapAndHoldGesture_SuperEventFilter(QTapAndHoldGesture* self, QObject* watched, QEvent* event) {
    return self->QTapAndHoldGesture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnEventFilter(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_eventfilter_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTapAndHoldGesture_TimerEvent(QTapAndHoldGesture* self, QTimerEvent* event) {
    auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self);
    if (vqtapandholdgesture) {
        vqtapandholdgesture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTapAndHoldGesture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapAndHoldGesture_SuperTimerEvent(QTapAndHoldGesture* self, QTimerEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->QTapAndHoldGesture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTapAndHoldGesture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnTimerEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_timerevent_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTapAndHoldGesture_ChildEvent(QTapAndHoldGesture* self, QChildEvent* event) {
    auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self);
    if (vqtapandholdgesture) {
        vqtapandholdgesture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTapAndHoldGesture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapAndHoldGesture_SuperChildEvent(QTapAndHoldGesture* self, QChildEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->QTapAndHoldGesture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTapAndHoldGesture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnChildEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_childevent_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTapAndHoldGesture_CustomEvent(QTapAndHoldGesture* self, QEvent* event) {
    auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self);
    if (vqtapandholdgesture) {
        vqtapandholdgesture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTapAndHoldGesture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapAndHoldGesture_SuperCustomEvent(QTapAndHoldGesture* self, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->QTapAndHoldGesture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTapAndHoldGesture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnCustomEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_customevent_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTapAndHoldGesture_ConnectNotify(QTapAndHoldGesture* self, const QMetaMethod* signal) {
    auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self);
    if (vqtapandholdgesture) {
        vqtapandholdgesture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTapAndHoldGesture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapAndHoldGesture_SuperConnectNotify(QTapAndHoldGesture* self, const QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->QTapAndHoldGesture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTapAndHoldGesture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnConnectNotify(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_connectnotify_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTapAndHoldGesture_DisconnectNotify(QTapAndHoldGesture* self, const QMetaMethod* signal) {
    auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self);
    if (vqtapandholdgesture) {
        vqtapandholdgesture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTapAndHoldGesture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTapAndHoldGesture_SuperDisconnectNotify(QTapAndHoldGesture* self, const QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->QTapAndHoldGesture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTapAndHoldGesture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnDisconnectNotify(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self))
        vqtapandholdgesture->qtapandholdgesture_disconnectnotify_callback = reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QTapAndHoldGesture_Sender(const QTapAndHoldGesture* self) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->VirtualQTapAndHoldGesture::sender();
    } else
        qFatal("Error: Protected method QTapAndHoldGesture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTapAndHoldGesture_SenderSignalIndex(const QTapAndHoldGesture* self) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->VirtualQTapAndHoldGesture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTapAndHoldGesture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTapAndHoldGesture_Receivers(const QTapAndHoldGesture* self, const char* signal) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->VirtualQTapAndHoldGesture::receivers(signal);
    } else
        qFatal("Error: Protected method QTapAndHoldGesture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTapAndHoldGesture_IsSignalConnected(const QTapAndHoldGesture* self, const QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->VirtualQTapAndHoldGesture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTapAndHoldGesture::isSignalConnected called without a directly constructed type");
}

void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self) {
    delete self;
}

QGestureEvent* QGestureEvent_new(const libqt_list /* of QGesture* */ gestures) {
    QList<QGesture*> gestures_QList;
    gestures_QList.reserve(gestures.len);
    QGesture** gestures_arr = static_cast<QGesture**>(gestures.data);
    for (size_t i = 0; i < gestures.len; ++i) {
        gestures_QList.push_back(gestures_arr[i]);
    }
    return new VirtualQGestureEvent(gestures_QList);
}

QGestureEvent* QGestureEvent_new2(const QGestureEvent* param1) {
    return new VirtualQGestureEvent(*param1);
}

libqt_list /* of QGesture* */ QGestureEvent_Gestures(const QGestureEvent* self) {
    QList<QGesture*> _ret = self->gestures();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal) {
    return self->gesture(static_cast<Qt::GestureType>(typeVal));
}

libqt_list /* of QGesture* */ QGestureEvent_ActiveGestures(const QGestureEvent* self) {
    QList<QGesture*> _ret = self->activeGestures();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGesture* */ QGestureEvent_CanceledGestures(const QGestureEvent* self) {
    QList<QGesture*> _ret = self->canceledGestures();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2) {
    self->setAccepted(param1, param2);
}

void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1) {
    self->accept(param1);
}

void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1) {
    self->ignore(param1);
}

bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1) {
    return self->isAccepted(param1);
}

void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2) {
    self->setAccepted(static_cast<Qt::GestureType>(param1), param2);
}

void QGestureEvent_Accept2(QGestureEvent* self, int param1) {
    self->accept(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_Ignore2(QGestureEvent* self, int param1) {
    self->ignore(static_cast<Qt::GestureType>(param1));
}

bool QGestureEvent_IsAccepted2(const QGestureEvent* self, int param1) {
    return self->isAccepted(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QGestureEvent_Widget(const QGestureEvent* self) {
    return self->widget();
}

QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, const QPointF* gesturePoint) {
    return new QPointF(self->mapToGraphicsScene(*gesturePoint));
}

void QGestureEvent_OperatorAssign(QGestureEvent* self, const QGestureEvent* param1) {
    self->operator=(*param1);
}

// Derived class handler implementation
QEvent* QGestureEvent_Clone(const QGestureEvent* self) {
    return self->clone();
}

// Base class handler implementation
QEvent* QGestureEvent_SuperClone(const QGestureEvent* self) {
    return self->QGestureEvent::clone();
}

// Auxiliary method to allow providing re-implementation
void QGestureEvent_OnClone(QGestureEvent* self, intptr_t slot) {
    if (auto* vqgestureevent = const_cast<VirtualQGestureEvent*>(dynamic_cast<const VirtualQGestureEvent*>(self)))
        vqgestureevent->qgestureevent_clone_callback = reinterpret_cast<VirtualQGestureEvent::QGestureEvent_Clone_Callback>(slot);
}

void QGestureEvent_Delete(QGestureEvent* self) {
    delete self;
}
