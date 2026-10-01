#include <QChildEvent>
#include <QEvent>
#include <QGraphicsRotation>
#include <QGraphicsScale>
#include <QGraphicsTransform>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <qgraphicstransform.h>
#include "libqgraphicstransform.h"
#include "libqgraphicstransform.hxx"

QGraphicsTransform* QGraphicsTransform_new() {
    return new VirtualQGraphicsTransform();
}

QGraphicsTransform* QGraphicsTransform_new2(QObject* parent) {
    return new VirtualQGraphicsTransform(parent);
}

QMetaObject* QGraphicsTransform_MetaObject(const QGraphicsTransform* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsTransform_Metacast(QGraphicsTransform* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsTransform_Metacall(QGraphicsTransform* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsTransform_Tr(const char* s) {
    auto _ret = QGraphicsTransform::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
    self->applyTo(matrix);
}

libqt_string QGraphicsTransform_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsTransform::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsTransform::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsTransform_SuperMetaObject(const QGraphicsTransform* self) {
    return (QMetaObject*)self->QGraphicsTransform::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnMetaObject(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self)))
        vqgraphicstransform->qgraphicstransform_metaobject_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsTransform_SuperMetacast(QGraphicsTransform* self, const char* param1) {
    return self->QGraphicsTransform::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnMetacast(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_metacast_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsTransform_SuperMetacall(QGraphicsTransform* self, int param1, int param2, void** param3) {
    return self->QGraphicsTransform::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnMetacall(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_metacall_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnApplyTo(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self)))
        vqgraphicstransform->qgraphicstransform_applyto_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ApplyTo_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTransform_Event(QGraphicsTransform* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsTransform_SuperEvent(QGraphicsTransform* self, QEvent* event) {
    return self->QGraphicsTransform::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnEvent(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_event_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsTransform_EventFilter(QGraphicsTransform* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsTransform_SuperEventFilter(QGraphicsTransform* self, QObject* watched, QEvent* event) {
    return self->QGraphicsTransform::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnEventFilter(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_eventfilter_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTransform_TimerEvent(QGraphicsTransform* self, QTimerEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform) {
        vqgraphicstransform->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTransform::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTransform_SuperTimerEvent(QGraphicsTransform* self, QTimerEvent* event) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self)) {
        vqgraphicstransform->QGraphicsTransform::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTransform::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnTimerEvent(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_timerevent_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTransform_ChildEvent(QGraphicsTransform* self, QChildEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform) {
        vqgraphicstransform->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTransform::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTransform_SuperChildEvent(QGraphicsTransform* self, QChildEvent* event) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self)) {
        vqgraphicstransform->QGraphicsTransform::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTransform::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnChildEvent(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_childevent_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTransform_CustomEvent(QGraphicsTransform* self, QEvent* event) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform) {
        vqgraphicstransform->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTransform::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTransform_SuperCustomEvent(QGraphicsTransform* self, QEvent* event) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self)) {
        vqgraphicstransform->QGraphicsTransform::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsTransform::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnCustomEvent(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_customevent_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTransform_ConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform) {
        vqgraphicstransform->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTransform::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTransform_SuperConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self)) {
        vqgraphicstransform->QGraphicsTransform::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsTransform::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnConnectNotify(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_connectnotify_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsTransform_DisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self);
    if (vqgraphicstransform) {
        vqgraphicstransform->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsTransform::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsTransform_SuperDisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self)) {
        vqgraphicstransform->QGraphicsTransform::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsTransform::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTransform_OnDisconnectNotify(QGraphicsTransform* self, intptr_t slot) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self))
        vqgraphicstransform->qgraphicstransform_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsTransform::QGraphicsTransform_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsTransform_Update(QGraphicsTransform* self) {
    if (auto* vqgraphicstransform = dynamic_cast<VirtualQGraphicsTransform*>(self)) {
        vqgraphicstransform->VirtualQGraphicsTransform::update();
    } else
        qFatal("Error: Protected method QGraphicsTransform::update called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsTransform_Sender(const QGraphicsTransform* self) {
    if (auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self))) {
        return vqgraphicstransform->VirtualQGraphicsTransform::sender();
    } else
        qFatal("Error: Protected method QGraphicsTransform::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsTransform_SenderSignalIndex(const QGraphicsTransform* self) {
    if (auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self))) {
        return vqgraphicstransform->VirtualQGraphicsTransform::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsTransform::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsTransform_Receivers(const QGraphicsTransform* self, const char* signal) {
    if (auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self))) {
        return vqgraphicstransform->VirtualQGraphicsTransform::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsTransform::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsTransform_IsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal) {
    if (auto* vqgraphicstransform = const_cast<VirtualQGraphicsTransform*>(dynamic_cast<const VirtualQGraphicsTransform*>(self))) {
        return vqgraphicstransform->VirtualQGraphicsTransform::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsTransform::isSignalConnected called without a directly constructed type");
}

void QGraphicsTransform_Delete(QGraphicsTransform* self) {
    delete self;
}

QGraphicsScale* QGraphicsScale_new() {
    return new VirtualQGraphicsScale();
}

QGraphicsScale* QGraphicsScale_new2(QObject* parent) {
    return new VirtualQGraphicsScale(parent);
}

QMetaObject* QGraphicsScale_MetaObject(const QGraphicsScale* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsScale_Metacast(QGraphicsScale* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsScale_Metacall(QGraphicsScale* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsScale_Tr(const char* s) {
    auto _ret = QGraphicsScale::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self) {
    return new QVector3D(self->origin());
}

void QGraphicsScale_SetOrigin(QGraphicsScale* self, const QVector3D* point) {
    self->setOrigin(*point);
}

double QGraphicsScale_XScale(const QGraphicsScale* self) {
    return static_cast<double>(self->xScale());
}

void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale) {
    self->setXScale(static_cast<qreal>(xScale));
}

double QGraphicsScale_YScale(const QGraphicsScale* self) {
    return static_cast<double>(self->yScale());
}

void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale) {
    self->setYScale(static_cast<qreal>(yScale));
}

double QGraphicsScale_ZScale(const QGraphicsScale* self) {
    return static_cast<double>(self->zScale());
}

void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale) {
    self->setZScale(static_cast<qreal>(zScale));
}

void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
    self->applyTo(matrix);
}

void QGraphicsScale_OriginChanged(QGraphicsScale* self) {
    self->originChanged();
}

void QGraphicsScale_Connect_OriginChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self,
                            static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::originChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGraphicsScale_XScaleChanged(QGraphicsScale* self) {
    self->xScaleChanged();
}

void QGraphicsScale_Connect_XScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self,
                            static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::xScaleChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGraphicsScale_YScaleChanged(QGraphicsScale* self) {
    self->yScaleChanged();
}

void QGraphicsScale_Connect_YScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self,
                            static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::yScaleChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGraphicsScale_ZScaleChanged(QGraphicsScale* self) {
    self->zScaleChanged();
}

void QGraphicsScale_Connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self,
                            static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::zScaleChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QGraphicsScale_ScaleChanged(QGraphicsScale* self) {
    self->scaleChanged();
}

void QGraphicsScale_Connect_ScaleChanged(QGraphicsScale* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScale*) = reinterpret_cast<void (*)(QGraphicsScale*)>(slot);
    QGraphicsScale::connect(self,
                            static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::scaleChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

libqt_string QGraphicsScale_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsScale::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsScale::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsScale_SuperMetaObject(const QGraphicsScale* self) {
    return (QMetaObject*)self->QGraphicsScale::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnMetaObject(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self)))
        vqgraphicsscale->qgraphicsscale_metaobject_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsScale_SuperMetacast(QGraphicsScale* self, const char* param1) {
    return self->QGraphicsScale::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnMetacast(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_metacast_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsScale_SuperMetacall(QGraphicsScale* self, int param1, int param2, void** param3) {
    return self->QGraphicsScale::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnMetacall(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_metacall_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsScale_SuperApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
    self->QGraphicsScale::applyTo(matrix);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnApplyTo(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self)))
        vqgraphicsscale->qgraphicsscale_applyto_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ApplyTo_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsScale_Event(QGraphicsScale* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsScale_SuperEvent(QGraphicsScale* self, QEvent* event) {
    return self->QGraphicsScale::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnEvent(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_event_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsScale_EventFilter(QGraphicsScale* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsScale_SuperEventFilter(QGraphicsScale* self, QObject* watched, QEvent* event) {
    return self->QGraphicsScale::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnEventFilter(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_eventfilter_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScale_TimerEvent(QGraphicsScale* self, QTimerEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale) {
        vqgraphicsscale->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScale::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScale_SuperTimerEvent(QGraphicsScale* self, QTimerEvent* event) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self)) {
        vqgraphicsscale->QGraphicsScale::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScale::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnTimerEvent(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_timerevent_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScale_ChildEvent(QGraphicsScale* self, QChildEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale) {
        vqgraphicsscale->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScale::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScale_SuperChildEvent(QGraphicsScale* self, QChildEvent* event) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self)) {
        vqgraphicsscale->QGraphicsScale::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScale::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnChildEvent(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_childevent_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScale_CustomEvent(QGraphicsScale* self, QEvent* event) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale) {
        vqgraphicsscale->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScale::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScale_SuperCustomEvent(QGraphicsScale* self, QEvent* event) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self)) {
        vqgraphicsscale->QGraphicsScale::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsScale::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnCustomEvent(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_customevent_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScale_ConnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale) {
        vqgraphicsscale->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScale::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScale_SuperConnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self)) {
        vqgraphicsscale->QGraphicsScale::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsScale::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnConnectNotify(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_connectnotify_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsScale_DisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self);
    if (vqgraphicsscale) {
        vqgraphicsscale->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsScale::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsScale_SuperDisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self)) {
        vqgraphicsscale->QGraphicsScale::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsScale::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScale_OnDisconnectNotify(QGraphicsScale* self, intptr_t slot) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self))
        vqgraphicsscale->qgraphicsscale_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsScale::QGraphicsScale_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsScale_Update(QGraphicsScale* self) {
    if (auto* vqgraphicsscale = dynamic_cast<VirtualQGraphicsScale*>(self)) {
        vqgraphicsscale->VirtualQGraphicsScale::update();
    } else
        qFatal("Error: Protected method QGraphicsScale::update called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsScale_Sender(const QGraphicsScale* self) {
    if (auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self))) {
        return vqgraphicsscale->VirtualQGraphicsScale::sender();
    } else
        qFatal("Error: Protected method QGraphicsScale::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsScale_SenderSignalIndex(const QGraphicsScale* self) {
    if (auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self))) {
        return vqgraphicsscale->VirtualQGraphicsScale::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsScale::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsScale_Receivers(const QGraphicsScale* self, const char* signal) {
    if (auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self))) {
        return vqgraphicsscale->VirtualQGraphicsScale::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsScale::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsScale_IsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsscale = const_cast<VirtualQGraphicsScale*>(dynamic_cast<const VirtualQGraphicsScale*>(self))) {
        return vqgraphicsscale->VirtualQGraphicsScale::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsScale::isSignalConnected called without a directly constructed type");
}

void QGraphicsScale_Delete(QGraphicsScale* self) {
    delete self;
}

QGraphicsRotation* QGraphicsRotation_new() {
    return new VirtualQGraphicsRotation();
}

QGraphicsRotation* QGraphicsRotation_new2(QObject* parent) {
    return new VirtualQGraphicsRotation(parent);
}

QMetaObject* QGraphicsRotation_MetaObject(const QGraphicsRotation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsRotation_Metacast(QGraphicsRotation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsRotation_Metacall(QGraphicsRotation* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsRotation_Tr(const char* s) {
    auto _ret = QGraphicsRotation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self) {
    return new QVector3D(self->origin());
}

void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, const QVector3D* point) {
    self->setOrigin(*point);
}

double QGraphicsRotation_Angle(const QGraphicsRotation* self) {
    return static_cast<double>(self->angle());
}

void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle) {
    self->setAngle(static_cast<qreal>(angle));
}

QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self) {
    return new QVector3D(self->axis());
}

void QGraphicsRotation_SetAxis(QGraphicsRotation* self, const QVector3D* axis) {
    self->setAxis(*axis);
}

void QGraphicsRotation_SetAxis2(QGraphicsRotation* self, int axis) {
    self->setAxis(static_cast<Qt::Axis>(axis));
}

void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
    self->applyTo(matrix);
}

void QGraphicsRotation_OriginChanged(QGraphicsRotation* self) {
    self->originChanged();
}

void QGraphicsRotation_Connect_OriginChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self,
                               static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::originChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QGraphicsRotation_AngleChanged(QGraphicsRotation* self) {
    self->angleChanged();
}

void QGraphicsRotation_Connect_AngleChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self,
                               static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::angleChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QGraphicsRotation_AxisChanged(QGraphicsRotation* self) {
    self->axisChanged();
}

void QGraphicsRotation_Connect_AxisChanged(QGraphicsRotation* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsRotation*) = reinterpret_cast<void (*)(QGraphicsRotation*)>(slot);
    QGraphicsRotation::connect(self,
                               static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::axisChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

libqt_string QGraphicsRotation_Tr2(const char* s, const char* c) {
    auto _ret = QGraphicsRotation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsRotation::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGraphicsRotation_SuperMetaObject(const QGraphicsRotation* self) {
    return (QMetaObject*)self->QGraphicsRotation::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnMetaObject(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self)))
        vqgraphicsrotation->qgraphicsrotation_metaobject_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGraphicsRotation_SuperMetacast(QGraphicsRotation* self, const char* param1) {
    return self->QGraphicsRotation::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnMetacast(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_metacast_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGraphicsRotation_SuperMetacall(QGraphicsRotation* self, int param1, int param2, void** param3) {
    return self->QGraphicsRotation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnMetacall(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_metacall_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Metacall_Callback>(slot);
}

// Base class handler implementation
void QGraphicsRotation_SuperApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
    self->QGraphicsRotation::applyTo(matrix);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnApplyTo(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self)))
        vqgraphicsrotation->qgraphicsrotation_applyto_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ApplyTo_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsRotation_Event(QGraphicsRotation* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGraphicsRotation_SuperEvent(QGraphicsRotation* self, QEvent* event) {
    return self->QGraphicsRotation::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnEvent(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_event_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsRotation_EventFilter(QGraphicsRotation* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGraphicsRotation_SuperEventFilter(QGraphicsRotation* self, QObject* watched, QEvent* event) {
    return self->QGraphicsRotation::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnEventFilter(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_eventfilter_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRotation_TimerEvent(QGraphicsRotation* self, QTimerEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation) {
        vqgraphicsrotation->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRotation::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRotation_SuperTimerEvent(QGraphicsRotation* self, QTimerEvent* event) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self)) {
        vqgraphicsrotation->QGraphicsRotation::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRotation::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnTimerEvent(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_timerevent_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRotation_ChildEvent(QGraphicsRotation* self, QChildEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation) {
        vqgraphicsrotation->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRotation::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRotation_SuperChildEvent(QGraphicsRotation* self, QChildEvent* event) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self)) {
        vqgraphicsrotation->QGraphicsRotation::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRotation::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnChildEvent(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_childevent_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRotation_CustomEvent(QGraphicsRotation* self, QEvent* event) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation) {
        vqgraphicsrotation->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRotation::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRotation_SuperCustomEvent(QGraphicsRotation* self, QEvent* event) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self)) {
        vqgraphicsrotation->QGraphicsRotation::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGraphicsRotation::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnCustomEvent(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_customevent_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRotation_ConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation) {
        vqgraphicsrotation->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRotation::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRotation_SuperConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self)) {
        vqgraphicsrotation->QGraphicsRotation::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsRotation::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnConnectNotify(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_connectnotify_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsRotation_DisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self);
    if (vqgraphicsrotation) {
        vqgraphicsrotation->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGraphicsRotation::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGraphicsRotation_SuperDisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self)) {
        vqgraphicsrotation->QGraphicsRotation::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGraphicsRotation::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRotation_OnDisconnectNotify(QGraphicsRotation* self, intptr_t slot) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self))
        vqgraphicsrotation->qgraphicsrotation_disconnectnotify_callback = reinterpret_cast<VirtualQGraphicsRotation::QGraphicsRotation_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsRotation_Update(QGraphicsRotation* self) {
    if (auto* vqgraphicsrotation = dynamic_cast<VirtualQGraphicsRotation*>(self)) {
        vqgraphicsrotation->VirtualQGraphicsRotation::update();
    } else
        qFatal("Error: Protected method QGraphicsRotation::update called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGraphicsRotation_Sender(const QGraphicsRotation* self) {
    if (auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self))) {
        return vqgraphicsrotation->VirtualQGraphicsRotation::sender();
    } else
        qFatal("Error: Protected method QGraphicsRotation::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsRotation_SenderSignalIndex(const QGraphicsRotation* self) {
    if (auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self))) {
        return vqgraphicsrotation->VirtualQGraphicsRotation::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGraphicsRotation::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGraphicsRotation_Receivers(const QGraphicsRotation* self, const char* signal) {
    if (auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self))) {
        return vqgraphicsrotation->VirtualQGraphicsRotation::receivers(signal);
    } else
        qFatal("Error: Protected method QGraphicsRotation::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGraphicsRotation_IsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal) {
    if (auto* vqgraphicsrotation = const_cast<VirtualQGraphicsRotation*>(dynamic_cast<const VirtualQGraphicsRotation*>(self))) {
        return vqgraphicsrotation->VirtualQGraphicsRotation::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGraphicsRotation::isSignalConnected called without a directly constructed type");
}

void QGraphicsRotation_Delete(QGraphicsRotation* self) {
    delete self;
}
