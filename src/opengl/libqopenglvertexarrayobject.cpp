#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLVertexArrayObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLVertexArrayObject__Binder
#include <QString>
#include <QTimerEvent>
#include <qopenglvertexarrayobject.h>
#include "libqopenglvertexarrayobject.h"
#include "libqopenglvertexarrayobject.hxx"

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new() {
    return new VirtualQOpenGLVertexArrayObject();
}

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new2(QObject* parent) {
    return new VirtualQOpenGLVertexArrayObject(parent);
}

QMetaObject* QOpenGLVertexArrayObject_MetaObject(const QOpenGLVertexArrayObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLVertexArrayObject_Metacast(QOpenGLVertexArrayObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLVertexArrayObject_Metacall(QOpenGLVertexArrayObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLVertexArrayObject_Tr(const char* s) {
    auto _ret = QOpenGLVertexArrayObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLVertexArrayObject_Create(QOpenGLVertexArrayObject* self) {
    return self->create();
}

void QOpenGLVertexArrayObject_Destroy(QOpenGLVertexArrayObject* self) {
    self->destroy();
}

bool QOpenGLVertexArrayObject_IsCreated(const QOpenGLVertexArrayObject* self) {
    return self->isCreated();
}

uint32_t QOpenGLVertexArrayObject_ObjectId(const QOpenGLVertexArrayObject* self) {
    return self->objectId();
}

void QOpenGLVertexArrayObject_Bind(QOpenGLVertexArrayObject* self) {
    self->bind();
}

void QOpenGLVertexArrayObject_Release(QOpenGLVertexArrayObject* self) {
    self->release();
}

libqt_string QOpenGLVertexArrayObject_Tr2(const char* s, const char* c) {
    auto _ret = QOpenGLVertexArrayObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLVertexArrayObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = QOpenGLVertexArrayObject::tr(s, c, static_cast<int>(n));
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
QMetaObject* QOpenGLVertexArrayObject_SuperMetaObject(const QOpenGLVertexArrayObject* self) {
    return (QMetaObject*)self->QOpenGLVertexArrayObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnMetaObject(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self)))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_metaobject_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOpenGLVertexArrayObject_SuperMetacast(QOpenGLVertexArrayObject* self, const char* param1) {
    return self->QOpenGLVertexArrayObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnMetacast(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_metacast_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOpenGLVertexArrayObject_SuperMetacall(QOpenGLVertexArrayObject* self, int param1, int param2, void** param3) {
    return self->QOpenGLVertexArrayObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnMetacall(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_metacall_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLVertexArrayObject_Event(QOpenGLVertexArrayObject* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QOpenGLVertexArrayObject_SuperEvent(QOpenGLVertexArrayObject* self, QEvent* event) {
    return self->QOpenGLVertexArrayObject::event(event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_event_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_Event_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLVertexArrayObject_EventFilter(QOpenGLVertexArrayObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOpenGLVertexArrayObject_SuperEventFilter(QOpenGLVertexArrayObject* self, QObject* watched, QEvent* event) {
    return self->QOpenGLVertexArrayObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnEventFilter(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_eventfilter_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_TimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject) {
        vqopenglvertexarrayobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperTimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self)) {
        vqopenglvertexarrayobject->QOpenGLVertexArrayObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnTimerEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_timerevent_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_ChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject) {
        vqopenglvertexarrayobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self)) {
        vqopenglvertexarrayobject->QOpenGLVertexArrayObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnChildEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_childevent_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_CustomEvent(QOpenGLVertexArrayObject* self, QEvent* event) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject) {
        vqopenglvertexarrayobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperCustomEvent(QOpenGLVertexArrayObject* self, QEvent* event) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self)) {
        vqopenglvertexarrayobject->QOpenGLVertexArrayObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnCustomEvent(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_customevent_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_ConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject) {
        vqopenglvertexarrayobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self)) {
        vqopenglvertexarrayobject->QOpenGLVertexArrayObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnConnectNotify(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_connectnotify_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLVertexArrayObject_DisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self);
    if (vqopenglvertexarrayobject) {
        vqopenglvertexarrayobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLVertexArrayObject_SuperDisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self)) {
        vqopenglvertexarrayobject->QOpenGLVertexArrayObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLVertexArrayObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLVertexArrayObject_OnDisconnectNotify(QOpenGLVertexArrayObject* self, intptr_t slot) {
    if (auto* vqopenglvertexarrayobject = dynamic_cast<VirtualQOpenGLVertexArrayObject*>(self))
        vqopenglvertexarrayobject->qopenglvertexarrayobject_disconnectnotify_callback = reinterpret_cast<VirtualQOpenGLVertexArrayObject::QOpenGLVertexArrayObject_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QOpenGLVertexArrayObject_Sender(const QOpenGLVertexArrayObject* self) {
    if (auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self))) {
        return vqopenglvertexarrayobject->VirtualQOpenGLVertexArrayObject::sender();
    } else
        qFatal("Error: Protected method QOpenGLVertexArrayObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLVertexArrayObject_SenderSignalIndex(const QOpenGLVertexArrayObject* self) {
    if (auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self))) {
        return vqopenglvertexarrayobject->VirtualQOpenGLVertexArrayObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOpenGLVertexArrayObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLVertexArrayObject_Receivers(const QOpenGLVertexArrayObject* self, const char* signal) {
    if (auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self))) {
        return vqopenglvertexarrayobject->VirtualQOpenGLVertexArrayObject::receivers(signal);
    } else
        qFatal("Error: Protected method QOpenGLVertexArrayObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLVertexArrayObject_IsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal) {
    if (auto* vqopenglvertexarrayobject = const_cast<VirtualQOpenGLVertexArrayObject*>(dynamic_cast<const VirtualQOpenGLVertexArrayObject*>(self))) {
        return vqopenglvertexarrayobject->VirtualQOpenGLVertexArrayObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOpenGLVertexArrayObject::isSignalConnected called without a directly constructed type");
}

void QOpenGLVertexArrayObject_Delete(QOpenGLVertexArrayObject* self) {
    delete self;
}

QOpenGLVertexArrayObject__Binder* QOpenGLVertexArrayObject__Binder_new(QOpenGLVertexArrayObject* v) {
    return new QOpenGLVertexArrayObject::Binder(v);
}

void QOpenGLVertexArrayObject__Binder_Release(QOpenGLVertexArrayObject__Binder* self) {
    self->release();
}

void QOpenGLVertexArrayObject__Binder_Rebind(QOpenGLVertexArrayObject__Binder* self) {
    self->rebind();
}

void QOpenGLVertexArrayObject__Binder_Delete(QOpenGLVertexArrayObject__Binder* self) {
    delete self;
}
