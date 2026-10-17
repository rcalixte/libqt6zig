#include <Q3DCamera>
#include <Q3DObject>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <q3dcamera.h>
#include "libq3dcamera.h"
#include "libq3dcamera.hxx"

Q3DCamera* Q3DCamera_new() {
    return new VirtualQ3DCamera();
}

Q3DCamera* Q3DCamera_new2(QObject* parent) {
    return new VirtualQ3DCamera(parent);
}

QMetaObject* Q3DCamera_MetaObject(const Q3DCamera* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DCamera_Metacast(Q3DCamera* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DCamera_Metacall(Q3DCamera* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DCamera_Tr(const char* s) {
    auto _ret = Q3DCamera::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

float Q3DCamera_XRotation(const Q3DCamera* self) {
    return self->xRotation();
}

void Q3DCamera_SetXRotation(Q3DCamera* self, float rotation) {
    self->setXRotation(static_cast<float>(rotation));
}

float Q3DCamera_YRotation(const Q3DCamera* self) {
    return self->yRotation();
}

void Q3DCamera_SetYRotation(Q3DCamera* self, float rotation) {
    self->setYRotation(static_cast<float>(rotation));
}

bool Q3DCamera_WrapXRotation(const Q3DCamera* self) {
    return self->wrapXRotation();
}

void Q3DCamera_SetWrapXRotation(Q3DCamera* self, bool isEnabled) {
    self->setWrapXRotation(isEnabled);
}

bool Q3DCamera_WrapYRotation(const Q3DCamera* self) {
    return self->wrapYRotation();
}

void Q3DCamera_SetWrapYRotation(Q3DCamera* self, bool isEnabled) {
    self->setWrapYRotation(isEnabled);
}

void Q3DCamera_CopyValuesFrom(Q3DCamera* self, const Q3DObject* source) {
    self->copyValuesFrom(*source);
}

int Q3DCamera_CameraPreset(const Q3DCamera* self) {
    return static_cast<int>(self->cameraPreset());
}

void Q3DCamera_SetCameraPreset(Q3DCamera* self, int preset) {
    self->setCameraPreset(static_cast<Q3DCamera::CameraPreset>(preset));
}

float Q3DCamera_ZoomLevel(const Q3DCamera* self) {
    return self->zoomLevel();
}

void Q3DCamera_SetZoomLevel(Q3DCamera* self, float zoomLevel) {
    self->setZoomLevel(static_cast<float>(zoomLevel));
}

float Q3DCamera_MinZoomLevel(const Q3DCamera* self) {
    return self->minZoomLevel();
}

void Q3DCamera_SetMinZoomLevel(Q3DCamera* self, float zoomLevel) {
    self->setMinZoomLevel(static_cast<float>(zoomLevel));
}

float Q3DCamera_MaxZoomLevel(const Q3DCamera* self) {
    return self->maxZoomLevel();
}

void Q3DCamera_SetMaxZoomLevel(Q3DCamera* self, float zoomLevel) {
    self->setMaxZoomLevel(static_cast<float>(zoomLevel));
}

void Q3DCamera_SetCameraPosition(Q3DCamera* self, float horizontal, float vertical) {
    self->setCameraPosition(static_cast<float>(horizontal), static_cast<float>(vertical));
}

QVector3D* Q3DCamera_Target(const Q3DCamera* self) {
    return new QVector3D(self->target());
}

void Q3DCamera_SetTarget(Q3DCamera* self, const QVector3D* target) {
    self->setTarget(*target);
}

void Q3DCamera_XRotationChanged(Q3DCamera* self, float rotation) {
    self->xRotationChanged(static_cast<float>(rotation));
}

void Q3DCamera_Connect_XRotationChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, float) = reinterpret_cast<void (*)(Q3DCamera*, float)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(float)>(&Q3DCamera::xRotationChanged),
                       [self, slotFunc](float rotation) {
                           float sigval1 = rotation;
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_YRotationChanged(Q3DCamera* self, float rotation) {
    self->yRotationChanged(static_cast<float>(rotation));
}

void Q3DCamera_Connect_YRotationChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, float) = reinterpret_cast<void (*)(Q3DCamera*, float)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(float)>(&Q3DCamera::yRotationChanged),
                       [self, slotFunc](float rotation) {
                           float sigval1 = rotation;
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_ZoomLevelChanged(Q3DCamera* self, float zoomLevel) {
    self->zoomLevelChanged(static_cast<float>(zoomLevel));
}

void Q3DCamera_Connect_ZoomLevelChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, float) = reinterpret_cast<void (*)(Q3DCamera*, float)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(float)>(&Q3DCamera::zoomLevelChanged),
                       [self, slotFunc](float zoomLevel) {
                           float sigval1 = zoomLevel;
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_CameraPresetChanged(Q3DCamera* self, int preset) {
    self->cameraPresetChanged(static_cast<Q3DCamera::CameraPreset>(preset));
}

void Q3DCamera_Connect_CameraPresetChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, int) = reinterpret_cast<void (*)(Q3DCamera*, int)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(Q3DCamera::CameraPreset)>(&Q3DCamera::cameraPresetChanged),
                       [self, slotFunc](Q3DCamera::CameraPreset preset) {
                           int sigval1 = static_cast<int>(preset);
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_WrapXRotationChanged(Q3DCamera* self, bool isEnabled) {
    self->wrapXRotationChanged(isEnabled);
}

void Q3DCamera_Connect_WrapXRotationChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, bool) = reinterpret_cast<void (*)(Q3DCamera*, bool)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(bool)>(&Q3DCamera::wrapXRotationChanged),
                       [self, slotFunc](bool isEnabled) {
                           bool sigval1 = isEnabled;
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_WrapYRotationChanged(Q3DCamera* self, bool isEnabled) {
    self->wrapYRotationChanged(isEnabled);
}

void Q3DCamera_Connect_WrapYRotationChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, bool) = reinterpret_cast<void (*)(Q3DCamera*, bool)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(bool)>(&Q3DCamera::wrapYRotationChanged),
                       [self, slotFunc](bool isEnabled) {
                           bool sigval1 = isEnabled;
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_TargetChanged(Q3DCamera* self, const QVector3D* target) {
    self->targetChanged(*target);
}

void Q3DCamera_Connect_TargetChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, QVector3D*) = reinterpret_cast<void (*)(Q3DCamera*, QVector3D*)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(const QVector3D&)>(&Q3DCamera::targetChanged),
                       [self, slotFunc](const QVector3D& target) {
                           const QVector3D& target_ret = target;
                           // Cast returned reference into pointer
                           QVector3D* sigval1 = const_cast<QVector3D*>(&target_ret);
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_MinZoomLevelChanged(Q3DCamera* self, float zoomLevel) {
    self->minZoomLevelChanged(static_cast<float>(zoomLevel));
}

void Q3DCamera_Connect_MinZoomLevelChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, float) = reinterpret_cast<void (*)(Q3DCamera*, float)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(float)>(&Q3DCamera::minZoomLevelChanged),
                       [self, slotFunc](float zoomLevel) {
                           float sigval1 = zoomLevel;
                           slotFunc(self, sigval1);
                       });
}

void Q3DCamera_MaxZoomLevelChanged(Q3DCamera* self, float zoomLevel) {
    self->maxZoomLevelChanged(static_cast<float>(zoomLevel));
}

void Q3DCamera_Connect_MaxZoomLevelChanged(Q3DCamera* self, intptr_t slot) {
    void (*slotFunc)(Q3DCamera*, float) = reinterpret_cast<void (*)(Q3DCamera*, float)>(slot);
    Q3DCamera::connect(self,
                       static_cast<void (Q3DCamera::*)(float)>(&Q3DCamera::maxZoomLevelChanged),
                       [self, slotFunc](float zoomLevel) {
                           float sigval1 = zoomLevel;
                           slotFunc(self, sigval1);
                       });
}

libqt_string Q3DCamera_Tr2(const char* s, const char* c) {
    auto _ret = Q3DCamera::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DCamera_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DCamera::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DCamera_SetCameraPosition3(Q3DCamera* self, float horizontal, float vertical, float zoom) {
    self->setCameraPosition(static_cast<float>(horizontal), static_cast<float>(vertical), static_cast<float>(zoom));
}

// Base class handler implementation
QMetaObject* Q3DCamera_SuperMetaObject(const Q3DCamera* self) {
    return (QMetaObject*)self->Q3DCamera::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnMetaObject(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = const_cast<VirtualQ3DCamera*>(dynamic_cast<const VirtualQ3DCamera*>(self)))
        vq3dcamera->q3dcamera_metaobject_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DCamera_SuperMetacast(Q3DCamera* self, const char* param1) {
    return self->Q3DCamera::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnMetacast(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_metacast_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DCamera_SuperMetacall(Q3DCamera* self, int param1, int param2, void** param3) {
    return self->Q3DCamera::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnMetacall(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_metacall_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_Metacall_Callback>(slot);
}

// Base class handler implementation
void Q3DCamera_SuperCopyValuesFrom(Q3DCamera* self, const Q3DObject* source) {
    self->Q3DCamera::copyValuesFrom(*source);
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnCopyValuesFrom(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_copyvaluesfrom_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_CopyValuesFrom_Callback>(slot);
}

// Derived class handler implementation
bool Q3DCamera_Event(Q3DCamera* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Q3DCamera_SuperEvent(Q3DCamera* self, QEvent* event) {
    return self->Q3DCamera::event(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnEvent(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_event_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_Event_Callback>(slot);
}

// Derived class handler implementation
bool Q3DCamera_EventFilter(Q3DCamera* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DCamera_SuperEventFilter(Q3DCamera* self, QObject* watched, QEvent* event) {
    return self->Q3DCamera::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnEventFilter(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_eventfilter_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DCamera_TimerEvent(Q3DCamera* self, QTimerEvent* event) {
    auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self);
    if (vq3dcamera) {
        vq3dcamera->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DCamera::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DCamera_SuperTimerEvent(Q3DCamera* self, QTimerEvent* event) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self)) {
        vq3dcamera->Q3DCamera::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DCamera::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnTimerEvent(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_timerevent_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DCamera_ChildEvent(Q3DCamera* self, QChildEvent* event) {
    auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self);
    if (vq3dcamera) {
        vq3dcamera->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DCamera::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DCamera_SuperChildEvent(Q3DCamera* self, QChildEvent* event) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self)) {
        vq3dcamera->Q3DCamera::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DCamera::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnChildEvent(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_childevent_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DCamera_CustomEvent(Q3DCamera* self, QEvent* event) {
    auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self);
    if (vq3dcamera) {
        vq3dcamera->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DCamera::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DCamera_SuperCustomEvent(Q3DCamera* self, QEvent* event) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self)) {
        vq3dcamera->Q3DCamera::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DCamera::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnCustomEvent(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_customevent_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DCamera_ConnectNotify(Q3DCamera* self, const QMetaMethod* signal) {
    auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self);
    if (vq3dcamera) {
        vq3dcamera->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DCamera::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DCamera_SuperConnectNotify(Q3DCamera* self, const QMetaMethod* signal) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self)) {
        vq3dcamera->Q3DCamera::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DCamera::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnConnectNotify(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_connectnotify_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DCamera_DisconnectNotify(Q3DCamera* self, const QMetaMethod* signal) {
    auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self);
    if (vq3dcamera) {
        vq3dcamera->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DCamera::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DCamera_SuperDisconnectNotify(Q3DCamera* self, const QMetaMethod* signal) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self)) {
        vq3dcamera->Q3DCamera::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DCamera::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DCamera_OnDisconnectNotify(Q3DCamera* self, intptr_t slot) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self))
        vq3dcamera->q3dcamera_disconnectnotify_callback = reinterpret_cast<VirtualQ3DCamera::Q3DCamera_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Q3DCamera_SetDirty(Q3DCamera* self, bool dirty) {
    if (auto* vq3dcamera = dynamic_cast<VirtualQ3DCamera*>(self)) {
        vq3dcamera->VirtualQ3DCamera::setDirty(dirty);
    } else
        qFatal("Error: Protected method Q3DCamera::setDirty called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DCamera_IsDirty(const Q3DCamera* self) {
    if (auto* vq3dcamera = const_cast<VirtualQ3DCamera*>(dynamic_cast<const VirtualQ3DCamera*>(self))) {
        return vq3dcamera->VirtualQ3DCamera::isDirty();
    } else
        qFatal("Error: Protected method Q3DCamera::isDirty called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DCamera_Sender(const Q3DCamera* self) {
    if (auto* vq3dcamera = const_cast<VirtualQ3DCamera*>(dynamic_cast<const VirtualQ3DCamera*>(self))) {
        return vq3dcamera->VirtualQ3DCamera::sender();
    } else
        qFatal("Error: Protected method Q3DCamera::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DCamera_SenderSignalIndex(const Q3DCamera* self) {
    if (auto* vq3dcamera = const_cast<VirtualQ3DCamera*>(dynamic_cast<const VirtualQ3DCamera*>(self))) {
        return vq3dcamera->VirtualQ3DCamera::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DCamera::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DCamera_Receivers(const Q3DCamera* self, const char* signal) {
    if (auto* vq3dcamera = const_cast<VirtualQ3DCamera*>(dynamic_cast<const VirtualQ3DCamera*>(self))) {
        return vq3dcamera->VirtualQ3DCamera::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DCamera::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DCamera_IsSignalConnected(const Q3DCamera* self, const QMetaMethod* signal) {
    if (auto* vq3dcamera = const_cast<VirtualQ3DCamera*>(dynamic_cast<const VirtualQ3DCamera*>(self))) {
        return vq3dcamera->VirtualQ3DCamera::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DCamera::isSignalConnected called without a directly constructed type");
}

void Q3DCamera_Delete(Q3DCamera* self) {
    delete self;
}
