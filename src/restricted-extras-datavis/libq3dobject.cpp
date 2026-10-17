#include <Q3DObject>
#include <Q3DScene>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <q3dobject.h>
#include "libq3dobject.h"
#include "libq3dobject.hxx"

Q3DObject* Q3DObject_new() {
    return new VirtualQ3DObject();
}

Q3DObject* Q3DObject_new2(QObject* parent) {
    return new VirtualQ3DObject(parent);
}

QMetaObject* Q3DObject_MetaObject(const Q3DObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DObject_Metacast(Q3DObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DObject_Metacall(Q3DObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DObject_Tr(const char* s) {
    auto _ret = Q3DObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DObject_CopyValuesFrom(Q3DObject* self, const Q3DObject* source) {
    self->copyValuesFrom(*source);
}

Q3DScene* Q3DObject_ParentScene(Q3DObject* self) {
    return self->parentScene();
}

QVector3D* Q3DObject_Position(const Q3DObject* self) {
    return new QVector3D(self->position());
}

void Q3DObject_SetPosition(Q3DObject* self, const QVector3D* position) {
    self->setPosition(*position);
}

void Q3DObject_PositionChanged(Q3DObject* self, const QVector3D* position) {
    self->positionChanged(*position);
}

void Q3DObject_Connect_PositionChanged(Q3DObject* self, intptr_t slot) {
    void (*slotFunc)(Q3DObject*, QVector3D*) = reinterpret_cast<void (*)(Q3DObject*, QVector3D*)>(slot);
    Q3DObject::connect(self,
                       static_cast<void (Q3DObject::*)(const QVector3D&)>(&Q3DObject::positionChanged),
                       [self, slotFunc](const QVector3D& position) {
                           const QVector3D& position_ret = position;
                           // Cast returned reference into pointer
                           QVector3D* sigval1 = const_cast<QVector3D*>(&position_ret);
                           slotFunc(self, sigval1);
                       });
}

libqt_string Q3DObject_Tr2(const char* s, const char* c) {
    auto _ret = Q3DObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DObject::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DObject_SuperMetaObject(const Q3DObject* self) {
    return (QMetaObject*)self->Q3DObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnMetaObject(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = const_cast<VirtualQ3DObject*>(dynamic_cast<const VirtualQ3DObject*>(self)))
        vq3dobject->q3dobject_metaobject_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DObject_SuperMetacast(Q3DObject* self, const char* param1) {
    return self->Q3DObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnMetacast(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_metacast_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DObject_SuperMetacall(Q3DObject* self, int param1, int param2, void** param3) {
    return self->Q3DObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnMetacall(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_metacall_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_Metacall_Callback>(slot);
}

// Base class handler implementation
void Q3DObject_SuperCopyValuesFrom(Q3DObject* self, const Q3DObject* source) {
    self->Q3DObject::copyValuesFrom(*source);
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnCopyValuesFrom(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_copyvaluesfrom_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_CopyValuesFrom_Callback>(slot);
}

// Derived class handler implementation
bool Q3DObject_Event(Q3DObject* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Q3DObject_SuperEvent(Q3DObject* self, QEvent* event) {
    return self->Q3DObject::event(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnEvent(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_event_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_Event_Callback>(slot);
}

// Derived class handler implementation
bool Q3DObject_EventFilter(Q3DObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DObject_SuperEventFilter(Q3DObject* self, QObject* watched, QEvent* event) {
    return self->Q3DObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnEventFilter(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_eventfilter_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DObject_TimerEvent(Q3DObject* self, QTimerEvent* event) {
    auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self);
    if (vq3dobject) {
        vq3dobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DObject_SuperTimerEvent(Q3DObject* self, QTimerEvent* event) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self)) {
        vq3dobject->Q3DObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnTimerEvent(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_timerevent_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DObject_ChildEvent(Q3DObject* self, QChildEvent* event) {
    auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self);
    if (vq3dobject) {
        vq3dobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DObject_SuperChildEvent(Q3DObject* self, QChildEvent* event) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self)) {
        vq3dobject->Q3DObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnChildEvent(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_childevent_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DObject_CustomEvent(Q3DObject* self, QEvent* event) {
    auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self);
    if (vq3dobject) {
        vq3dobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DObject_SuperCustomEvent(Q3DObject* self, QEvent* event) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self)) {
        vq3dobject->Q3DObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnCustomEvent(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_customevent_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DObject_ConnectNotify(Q3DObject* self, const QMetaMethod* signal) {
    auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self);
    if (vq3dobject) {
        vq3dobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DObject_SuperConnectNotify(Q3DObject* self, const QMetaMethod* signal) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self)) {
        vq3dobject->Q3DObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnConnectNotify(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_connectnotify_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DObject_DisconnectNotify(Q3DObject* self, const QMetaMethod* signal) {
    auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self);
    if (vq3dobject) {
        vq3dobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DObject_SuperDisconnectNotify(Q3DObject* self, const QMetaMethod* signal) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self)) {
        vq3dobject->Q3DObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DObject_OnDisconnectNotify(Q3DObject* self, intptr_t slot) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self))
        vq3dobject->q3dobject_disconnectnotify_callback = reinterpret_cast<VirtualQ3DObject::Q3DObject_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Q3DObject_SetDirty(Q3DObject* self, bool dirty) {
    if (auto* vq3dobject = dynamic_cast<VirtualQ3DObject*>(self)) {
        vq3dobject->VirtualQ3DObject::setDirty(dirty);
    } else
        qFatal("Error: Protected method Q3DObject::setDirty called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DObject_IsDirty(const Q3DObject* self) {
    if (auto* vq3dobject = const_cast<VirtualQ3DObject*>(dynamic_cast<const VirtualQ3DObject*>(self))) {
        return vq3dobject->VirtualQ3DObject::isDirty();
    } else
        qFatal("Error: Protected method Q3DObject::isDirty called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DObject_Sender(const Q3DObject* self) {
    if (auto* vq3dobject = const_cast<VirtualQ3DObject*>(dynamic_cast<const VirtualQ3DObject*>(self))) {
        return vq3dobject->VirtualQ3DObject::sender();
    } else
        qFatal("Error: Protected method Q3DObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DObject_SenderSignalIndex(const Q3DObject* self) {
    if (auto* vq3dobject = const_cast<VirtualQ3DObject*>(dynamic_cast<const VirtualQ3DObject*>(self))) {
        return vq3dobject->VirtualQ3DObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DObject_Receivers(const Q3DObject* self, const char* signal) {
    if (auto* vq3dobject = const_cast<VirtualQ3DObject*>(dynamic_cast<const VirtualQ3DObject*>(self))) {
        return vq3dobject->VirtualQ3DObject::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DObject_IsSignalConnected(const Q3DObject* self, const QMetaMethod* signal) {
    if (auto* vq3dobject = const_cast<VirtualQ3DObject*>(dynamic_cast<const VirtualQ3DObject*>(self))) {
        return vq3dobject->VirtualQ3DObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DObject::isSignalConnected called without a directly constructed type");
}

void Q3DObject_Delete(Q3DObject* self) {
    delete self;
}
