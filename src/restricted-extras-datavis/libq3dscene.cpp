#include <Q3DCamera>
#include <Q3DLight>
#include <Q3DScene>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QTimerEvent>
#include <q3dscene.h>
#include "libq3dscene.h"
#include "libq3dscene.hxx"

Q3DScene* Q3DScene_new() {
    return new VirtualQ3DScene();
}

Q3DScene* Q3DScene_new2(QObject* parent) {
    return new VirtualQ3DScene(parent);
}

QMetaObject* Q3DScene_MetaObject(const Q3DScene* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DScene_Metacast(Q3DScene* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DScene_Metacall(Q3DScene* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DScene_Tr(const char* s) {
    auto _ret = Q3DScene::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRect* Q3DScene_Viewport(const Q3DScene* self) {
    return new QRect(self->viewport());
}

QRect* Q3DScene_PrimarySubViewport(const Q3DScene* self) {
    return new QRect(self->primarySubViewport());
}

void Q3DScene_SetPrimarySubViewport(Q3DScene* self, const QRect* primarySubViewport) {
    self->setPrimarySubViewport(*primarySubViewport);
}

bool Q3DScene_IsPointInPrimarySubView(Q3DScene* self, const QPoint* point) {
    return self->isPointInPrimarySubView(*point);
}

QRect* Q3DScene_SecondarySubViewport(const Q3DScene* self) {
    return new QRect(self->secondarySubViewport());
}

void Q3DScene_SetSecondarySubViewport(Q3DScene* self, const QRect* secondarySubViewport) {
    self->setSecondarySubViewport(*secondarySubViewport);
}

bool Q3DScene_IsPointInSecondarySubView(Q3DScene* self, const QPoint* point) {
    return self->isPointInSecondarySubView(*point);
}

void Q3DScene_SetSelectionQueryPosition(Q3DScene* self, const QPoint* point) {
    self->setSelectionQueryPosition(*point);
}

QPoint* Q3DScene_SelectionQueryPosition(const Q3DScene* self) {
    return new QPoint(self->selectionQueryPosition());
}

QPoint* Q3DScene_InvalidSelectionPoint() {
    return new QPoint(Q3DScene::invalidSelectionPoint());
}

void Q3DScene_SetGraphPositionQuery(Q3DScene* self, const QPoint* point) {
    self->setGraphPositionQuery(*point);
}

QPoint* Q3DScene_GraphPositionQuery(const Q3DScene* self) {
    return new QPoint(self->graphPositionQuery());
}

void Q3DScene_SetSlicingActive(Q3DScene* self, bool isSlicing) {
    self->setSlicingActive(isSlicing);
}

bool Q3DScene_IsSlicingActive(const Q3DScene* self) {
    return self->isSlicingActive();
}

void Q3DScene_SetSecondarySubviewOnTop(Q3DScene* self, bool isSecondaryOnTop) {
    self->setSecondarySubviewOnTop(isSecondaryOnTop);
}

bool Q3DScene_IsSecondarySubviewOnTop(const Q3DScene* self) {
    return self->isSecondarySubviewOnTop();
}

Q3DCamera* Q3DScene_ActiveCamera(const Q3DScene* self) {
    return self->activeCamera();
}

void Q3DScene_SetActiveCamera(Q3DScene* self, Q3DCamera* camera) {
    self->setActiveCamera(camera);
}

Q3DLight* Q3DScene_ActiveLight(const Q3DScene* self) {
    return self->activeLight();
}

void Q3DScene_SetActiveLight(Q3DScene* self, Q3DLight* light) {
    self->setActiveLight(light);
}

float Q3DScene_DevicePixelRatio(const Q3DScene* self) {
    return self->devicePixelRatio();
}

void Q3DScene_SetDevicePixelRatio(Q3DScene* self, float pixelRatio) {
    self->setDevicePixelRatio(static_cast<float>(pixelRatio));
}

void Q3DScene_ViewportChanged(Q3DScene* self, const QRect* viewport) {
    self->viewportChanged(*viewport);
}

void Q3DScene_Connect_ViewportChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, QRect*) = reinterpret_cast<void (*)(Q3DScene*, QRect*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(const QRect&)>(&Q3DScene::viewportChanged),
                      [self, slotFunc](const QRect& viewport) {
                          const QRect& viewport_ret = viewport;
                          // Cast returned reference into pointer
                          QRect* sigval1 = const_cast<QRect*>(&viewport_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_PrimarySubViewportChanged(Q3DScene* self, const QRect* subViewport) {
    self->primarySubViewportChanged(*subViewport);
}

void Q3DScene_Connect_PrimarySubViewportChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, QRect*) = reinterpret_cast<void (*)(Q3DScene*, QRect*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(const QRect&)>(&Q3DScene::primarySubViewportChanged),
                      [self, slotFunc](const QRect& subViewport) {
                          const QRect& subViewport_ret = subViewport;
                          // Cast returned reference into pointer
                          QRect* sigval1 = const_cast<QRect*>(&subViewport_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_SecondarySubViewportChanged(Q3DScene* self, const QRect* subViewport) {
    self->secondarySubViewportChanged(*subViewport);
}

void Q3DScene_Connect_SecondarySubViewportChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, QRect*) = reinterpret_cast<void (*)(Q3DScene*, QRect*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(const QRect&)>(&Q3DScene::secondarySubViewportChanged),
                      [self, slotFunc](const QRect& subViewport) {
                          const QRect& subViewport_ret = subViewport;
                          // Cast returned reference into pointer
                          QRect* sigval1 = const_cast<QRect*>(&subViewport_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_SecondarySubviewOnTopChanged(Q3DScene* self, bool isSecondaryOnTop) {
    self->secondarySubviewOnTopChanged(isSecondaryOnTop);
}

void Q3DScene_Connect_SecondarySubviewOnTopChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, bool) = reinterpret_cast<void (*)(Q3DScene*, bool)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(bool)>(&Q3DScene::secondarySubviewOnTopChanged),
                      [self, slotFunc](bool isSecondaryOnTop) {
                          bool sigval1 = isSecondaryOnTop;
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_SlicingActiveChanged(Q3DScene* self, bool isSlicingActive) {
    self->slicingActiveChanged(isSlicingActive);
}

void Q3DScene_Connect_SlicingActiveChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, bool) = reinterpret_cast<void (*)(Q3DScene*, bool)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(bool)>(&Q3DScene::slicingActiveChanged),
                      [self, slotFunc](bool isSlicingActive) {
                          bool sigval1 = isSlicingActive;
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_ActiveCameraChanged(Q3DScene* self, Q3DCamera* camera) {
    self->activeCameraChanged(camera);
}

void Q3DScene_Connect_ActiveCameraChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, Q3DCamera*) = reinterpret_cast<void (*)(Q3DScene*, Q3DCamera*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(Q3DCamera*)>(&Q3DScene::activeCameraChanged),
                      [self, slotFunc](Q3DCamera* camera) {
                          Q3DCamera* sigval1 = camera;
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_ActiveLightChanged(Q3DScene* self, Q3DLight* light) {
    self->activeLightChanged(light);
}

void Q3DScene_Connect_ActiveLightChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, Q3DLight*) = reinterpret_cast<void (*)(Q3DScene*, Q3DLight*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(Q3DLight*)>(&Q3DScene::activeLightChanged),
                      [self, slotFunc](Q3DLight* light) {
                          Q3DLight* sigval1 = light;
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_DevicePixelRatioChanged(Q3DScene* self, float pixelRatio) {
    self->devicePixelRatioChanged(static_cast<float>(pixelRatio));
}

void Q3DScene_Connect_DevicePixelRatioChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, float) = reinterpret_cast<void (*)(Q3DScene*, float)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(float)>(&Q3DScene::devicePixelRatioChanged),
                      [self, slotFunc](float pixelRatio) {
                          float sigval1 = pixelRatio;
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_SelectionQueryPositionChanged(Q3DScene* self, const QPoint* position) {
    self->selectionQueryPositionChanged(*position);
}

void Q3DScene_Connect_SelectionQueryPositionChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, QPoint*) = reinterpret_cast<void (*)(Q3DScene*, QPoint*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(const QPoint&)>(&Q3DScene::selectionQueryPositionChanged),
                      [self, slotFunc](const QPoint& position) {
                          const QPoint& position_ret = position;
                          // Cast returned reference into pointer
                          QPoint* sigval1 = const_cast<QPoint*>(&position_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DScene_GraphPositionQueryChanged(Q3DScene* self, const QPoint* position) {
    self->graphPositionQueryChanged(*position);
}

void Q3DScene_Connect_GraphPositionQueryChanged(Q3DScene* self, intptr_t slot) {
    void (*slotFunc)(Q3DScene*, QPoint*) = reinterpret_cast<void (*)(Q3DScene*, QPoint*)>(slot);
    Q3DScene::connect(self,
                      static_cast<void (Q3DScene::*)(const QPoint&)>(&Q3DScene::graphPositionQueryChanged),
                      [self, slotFunc](const QPoint& position) {
                          const QPoint& position_ret = position;
                          // Cast returned reference into pointer
                          QPoint* sigval1 = const_cast<QPoint*>(&position_ret);
                          slotFunc(self, sigval1);
                      });
}

libqt_string Q3DScene_Tr2(const char* s, const char* c) {
    auto _ret = Q3DScene::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DScene_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DScene::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DScene_SuperMetaObject(const Q3DScene* self) {
    return (QMetaObject*)self->Q3DScene::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnMetaObject(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = const_cast<VirtualQ3DScene*>(dynamic_cast<const VirtualQ3DScene*>(self)))
        vq3dscene->q3dscene_metaobject_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DScene_SuperMetacast(Q3DScene* self, const char* param1) {
    return self->Q3DScene::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnMetacast(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_metacast_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DScene_SuperMetacall(Q3DScene* self, int param1, int param2, void** param3) {
    return self->Q3DScene::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnMetacall(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_metacall_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Q3DScene_Event(Q3DScene* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Q3DScene_SuperEvent(Q3DScene* self, QEvent* event) {
    return self->Q3DScene::event(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnEvent(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_event_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_Event_Callback>(slot);
}

// Derived class handler implementation
bool Q3DScene_EventFilter(Q3DScene* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DScene_SuperEventFilter(Q3DScene* self, QObject* watched, QEvent* event) {
    return self->Q3DScene::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnEventFilter(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_eventfilter_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DScene_TimerEvent(Q3DScene* self, QTimerEvent* event) {
    auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self);
    if (vq3dscene) {
        vq3dscene->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScene::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScene_SuperTimerEvent(Q3DScene* self, QTimerEvent* event) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self)) {
        vq3dscene->Q3DScene::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScene::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnTimerEvent(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_timerevent_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScene_ChildEvent(Q3DScene* self, QChildEvent* event) {
    auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self);
    if (vq3dscene) {
        vq3dscene->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScene::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScene_SuperChildEvent(Q3DScene* self, QChildEvent* event) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self)) {
        vq3dscene->Q3DScene::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScene::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnChildEvent(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_childevent_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScene_CustomEvent(Q3DScene* self, QEvent* event) {
    auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self);
    if (vq3dscene) {
        vq3dscene->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScene::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScene_SuperCustomEvent(Q3DScene* self, QEvent* event) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self)) {
        vq3dscene->Q3DScene::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScene::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnCustomEvent(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_customevent_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScene_ConnectNotify(Q3DScene* self, const QMetaMethod* signal) {
    auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self);
    if (vq3dscene) {
        vq3dscene->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DScene::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScene_SuperConnectNotify(Q3DScene* self, const QMetaMethod* signal) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self)) {
        vq3dscene->Q3DScene::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DScene::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnConnectNotify(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_connectnotify_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DScene_DisconnectNotify(Q3DScene* self, const QMetaMethod* signal) {
    auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self);
    if (vq3dscene) {
        vq3dscene->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DScene::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScene_SuperDisconnectNotify(Q3DScene* self, const QMetaMethod* signal) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self)) {
        vq3dscene->Q3DScene::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DScene::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScene_OnDisconnectNotify(Q3DScene* self, intptr_t slot) {
    if (auto* vq3dscene = dynamic_cast<VirtualQ3DScene*>(self))
        vq3dscene->q3dscene_disconnectnotify_callback = reinterpret_cast<VirtualQ3DScene::Q3DScene_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Q3DScene_Sender(const Q3DScene* self) {
    if (auto* vq3dscene = const_cast<VirtualQ3DScene*>(dynamic_cast<const VirtualQ3DScene*>(self))) {
        return vq3dscene->VirtualQ3DScene::sender();
    } else
        qFatal("Error: Protected method Q3DScene::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DScene_SenderSignalIndex(const Q3DScene* self) {
    if (auto* vq3dscene = const_cast<VirtualQ3DScene*>(dynamic_cast<const VirtualQ3DScene*>(self))) {
        return vq3dscene->VirtualQ3DScene::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DScene::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DScene_Receivers(const Q3DScene* self, const char* signal) {
    if (auto* vq3dscene = const_cast<VirtualQ3DScene*>(dynamic_cast<const VirtualQ3DScene*>(self))) {
        return vq3dscene->VirtualQ3DScene::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DScene::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DScene_IsSignalConnected(const Q3DScene* self, const QMetaMethod* signal) {
    if (auto* vq3dscene = const_cast<VirtualQ3DScene*>(dynamic_cast<const VirtualQ3DScene*>(self))) {
        return vq3dscene->VirtualQ3DScene::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DScene::isSignalConnected called without a directly constructed type");
}

void Q3DScene_Delete(Q3DScene* self) {
    delete self;
}
