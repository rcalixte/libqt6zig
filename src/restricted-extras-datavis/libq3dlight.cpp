#include <Q3DLight>
#include <Q3DObject>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <q3dlight.h>
#include "libq3dlight.h"
#include "libq3dlight.hxx"

Q3DLight* Q3DLight_new() {
    return new VirtualQ3DLight();
}

Q3DLight* Q3DLight_new2(QObject* parent) {
    return new VirtualQ3DLight(parent);
}

QMetaObject* Q3DLight_MetaObject(const Q3DLight* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DLight_Metacast(Q3DLight* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DLight_Metacall(Q3DLight* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DLight_Tr(const char* s) {
    auto _ret = Q3DLight::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DLight_SetAutoPosition(Q3DLight* self, bool enabled) {
    self->setAutoPosition(enabled);
}

bool Q3DLight_IsAutoPosition(Q3DLight* self) {
    return self->isAutoPosition();
}

void Q3DLight_AutoPositionChanged(Q3DLight* self, bool autoPosition) {
    self->autoPositionChanged(autoPosition);
}

void Q3DLight_Connect_AutoPositionChanged(Q3DLight* self, intptr_t slot) {
    void (*slotFunc)(Q3DLight*, bool) = reinterpret_cast<void (*)(Q3DLight*, bool)>(slot);
    Q3DLight::connect(self,
                      static_cast<void (Q3DLight::*)(bool)>(&Q3DLight::autoPositionChanged),
                      [self, slotFunc](bool autoPosition) {
                          bool sigval1 = autoPosition;
                          slotFunc(self, sigval1);
                      });
}

libqt_string Q3DLight_Tr2(const char* s, const char* c) {
    auto _ret = Q3DLight::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DLight_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DLight::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DLight_SuperMetaObject(const Q3DLight* self) {
    return (QMetaObject*)self->Q3DLight::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnMetaObject(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = const_cast<VirtualQ3DLight*>(dynamic_cast<const VirtualQ3DLight*>(self)))
        vq3dlight->q3dlight_metaobject_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DLight_SuperMetacast(Q3DLight* self, const char* param1) {
    return self->Q3DLight::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnMetacast(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_metacast_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DLight_SuperMetacall(Q3DLight* self, int param1, int param2, void** param3) {
    return self->Q3DLight::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnMetacall(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_metacall_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_Metacall_Callback>(slot);
}

// Derived class handler implementation
void Q3DLight_CopyValuesFrom(Q3DLight* self, const Q3DObject* source) {
    self->copyValuesFrom(*source);
}

// Base class handler implementation
void Q3DLight_SuperCopyValuesFrom(Q3DLight* self, const Q3DObject* source) {
    self->Q3DLight::copyValuesFrom(*source);
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnCopyValuesFrom(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_copyvaluesfrom_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_CopyValuesFrom_Callback>(slot);
}

// Derived class handler implementation
bool Q3DLight_Event(Q3DLight* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Q3DLight_SuperEvent(Q3DLight* self, QEvent* event) {
    return self->Q3DLight::event(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnEvent(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_event_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_Event_Callback>(slot);
}

// Derived class handler implementation
bool Q3DLight_EventFilter(Q3DLight* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DLight_SuperEventFilter(Q3DLight* self, QObject* watched, QEvent* event) {
    return self->Q3DLight::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnEventFilter(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_eventfilter_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DLight_TimerEvent(Q3DLight* self, QTimerEvent* event) {
    auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self);
    if (vq3dlight) {
        vq3dlight->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DLight::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DLight_SuperTimerEvent(Q3DLight* self, QTimerEvent* event) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self)) {
        vq3dlight->Q3DLight::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DLight::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnTimerEvent(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_timerevent_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DLight_ChildEvent(Q3DLight* self, QChildEvent* event) {
    auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self);
    if (vq3dlight) {
        vq3dlight->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DLight::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DLight_SuperChildEvent(Q3DLight* self, QChildEvent* event) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self)) {
        vq3dlight->Q3DLight::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DLight::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnChildEvent(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_childevent_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DLight_CustomEvent(Q3DLight* self, QEvent* event) {
    auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self);
    if (vq3dlight) {
        vq3dlight->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DLight::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DLight_SuperCustomEvent(Q3DLight* self, QEvent* event) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self)) {
        vq3dlight->Q3DLight::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DLight::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnCustomEvent(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_customevent_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DLight_ConnectNotify(Q3DLight* self, const QMetaMethod* signal) {
    auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self);
    if (vq3dlight) {
        vq3dlight->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DLight::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DLight_SuperConnectNotify(Q3DLight* self, const QMetaMethod* signal) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self)) {
        vq3dlight->Q3DLight::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DLight::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnConnectNotify(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_connectnotify_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DLight_DisconnectNotify(Q3DLight* self, const QMetaMethod* signal) {
    auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self);
    if (vq3dlight) {
        vq3dlight->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DLight::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DLight_SuperDisconnectNotify(Q3DLight* self, const QMetaMethod* signal) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self)) {
        vq3dlight->Q3DLight::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DLight::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DLight_OnDisconnectNotify(Q3DLight* self, intptr_t slot) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self))
        vq3dlight->q3dlight_disconnectnotify_callback = reinterpret_cast<VirtualQ3DLight::Q3DLight_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Q3DLight_SetDirty(Q3DLight* self, bool dirty) {
    if (auto* vq3dlight = dynamic_cast<VirtualQ3DLight*>(self)) {
        vq3dlight->VirtualQ3DLight::setDirty(dirty);
    } else
        qFatal("Error: Protected method Q3DLight::setDirty called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DLight_IsDirty(const Q3DLight* self) {
    if (auto* vq3dlight = const_cast<VirtualQ3DLight*>(dynamic_cast<const VirtualQ3DLight*>(self))) {
        return vq3dlight->VirtualQ3DLight::isDirty();
    } else
        qFatal("Error: Protected method Q3DLight::isDirty called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DLight_Sender(const Q3DLight* self) {
    if (auto* vq3dlight = const_cast<VirtualQ3DLight*>(dynamic_cast<const VirtualQ3DLight*>(self))) {
        return vq3dlight->VirtualQ3DLight::sender();
    } else
        qFatal("Error: Protected method Q3DLight::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DLight_SenderSignalIndex(const Q3DLight* self) {
    if (auto* vq3dlight = const_cast<VirtualQ3DLight*>(dynamic_cast<const VirtualQ3DLight*>(self))) {
        return vq3dlight->VirtualQ3DLight::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DLight::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DLight_Receivers(const Q3DLight* self, const char* signal) {
    if (auto* vq3dlight = const_cast<VirtualQ3DLight*>(dynamic_cast<const VirtualQ3DLight*>(self))) {
        return vq3dlight->VirtualQ3DLight::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DLight::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DLight_IsSignalConnected(const Q3DLight* self, const QMetaMethod* signal) {
    if (auto* vq3dlight = const_cast<VirtualQ3DLight*>(dynamic_cast<const VirtualQ3DLight*>(self))) {
        return vq3dlight->VirtualQ3DLight::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DLight::isSignalConnected called without a directly constructed type");
}

void Q3DLight_Delete(Q3DLight* self) {
    delete self;
}
