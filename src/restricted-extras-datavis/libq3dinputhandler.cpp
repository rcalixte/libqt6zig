#include <Q3DInputHandler>
#include <QAbstract3DInputHandler>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <q3dinputhandler.h>
#include "libq3dinputhandler.h"
#include "libq3dinputhandler.hxx"

Q3DInputHandler* Q3DInputHandler_new() {
    return new VirtualQ3DInputHandler();
}

Q3DInputHandler* Q3DInputHandler_new2(QObject* parent) {
    return new VirtualQ3DInputHandler(parent);
}

QMetaObject* Q3DInputHandler_MetaObject(const Q3DInputHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DInputHandler_Metacast(Q3DInputHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DInputHandler_Metacall(Q3DInputHandler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DInputHandler_Tr(const char* s) {
    auto _ret = Q3DInputHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DInputHandler_SetRotationEnabled(Q3DInputHandler* self, bool enable) {
    self->setRotationEnabled(enable);
}

bool Q3DInputHandler_IsRotationEnabled(const Q3DInputHandler* self) {
    return self->isRotationEnabled();
}

void Q3DInputHandler_SetZoomEnabled(Q3DInputHandler* self, bool enable) {
    self->setZoomEnabled(enable);
}

bool Q3DInputHandler_IsZoomEnabled(const Q3DInputHandler* self) {
    return self->isZoomEnabled();
}

void Q3DInputHandler_SetSelectionEnabled(Q3DInputHandler* self, bool enable) {
    self->setSelectionEnabled(enable);
}

bool Q3DInputHandler_IsSelectionEnabled(const Q3DInputHandler* self) {
    return self->isSelectionEnabled();
}

void Q3DInputHandler_SetZoomAtTargetEnabled(Q3DInputHandler* self, bool enable) {
    self->setZoomAtTargetEnabled(enable);
}

bool Q3DInputHandler_IsZoomAtTargetEnabled(const Q3DInputHandler* self) {
    return self->isZoomAtTargetEnabled();
}

void Q3DInputHandler_MousePressEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mousePressEvent(event, *mousePos);
}

void Q3DInputHandler_MouseReleaseEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mouseReleaseEvent(event, *mousePos);
}

void Q3DInputHandler_MouseMoveEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mouseMoveEvent(event, *mousePos);
}

void Q3DInputHandler_WheelEvent(Q3DInputHandler* self, QWheelEvent* event) {
    self->wheelEvent(event);
}

void Q3DInputHandler_RotationEnabledChanged(Q3DInputHandler* self, bool enable) {
    self->rotationEnabledChanged(enable);
}

void Q3DInputHandler_Connect_RotationEnabledChanged(Q3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(Q3DInputHandler*, bool) = reinterpret_cast<void (*)(Q3DInputHandler*, bool)>(slot);
    Q3DInputHandler::connect(self,
                             static_cast<void (Q3DInputHandler::*)(bool)>(&Q3DInputHandler::rotationEnabledChanged),
                             [self, slotFunc](bool enable) {
                                 bool sigval1 = enable;
                                 slotFunc(self, sigval1);
                             });
}

void Q3DInputHandler_ZoomEnabledChanged(Q3DInputHandler* self, bool enable) {
    self->zoomEnabledChanged(enable);
}

void Q3DInputHandler_Connect_ZoomEnabledChanged(Q3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(Q3DInputHandler*, bool) = reinterpret_cast<void (*)(Q3DInputHandler*, bool)>(slot);
    Q3DInputHandler::connect(self,
                             static_cast<void (Q3DInputHandler::*)(bool)>(&Q3DInputHandler::zoomEnabledChanged),
                             [self, slotFunc](bool enable) {
                                 bool sigval1 = enable;
                                 slotFunc(self, sigval1);
                             });
}

void Q3DInputHandler_SelectionEnabledChanged(Q3DInputHandler* self, bool enable) {
    self->selectionEnabledChanged(enable);
}

void Q3DInputHandler_Connect_SelectionEnabledChanged(Q3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(Q3DInputHandler*, bool) = reinterpret_cast<void (*)(Q3DInputHandler*, bool)>(slot);
    Q3DInputHandler::connect(self,
                             static_cast<void (Q3DInputHandler::*)(bool)>(&Q3DInputHandler::selectionEnabledChanged),
                             [self, slotFunc](bool enable) {
                                 bool sigval1 = enable;
                                 slotFunc(self, sigval1);
                             });
}

void Q3DInputHandler_ZoomAtTargetEnabledChanged(Q3DInputHandler* self, bool enable) {
    self->zoomAtTargetEnabledChanged(enable);
}

void Q3DInputHandler_Connect_ZoomAtTargetEnabledChanged(Q3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(Q3DInputHandler*, bool) = reinterpret_cast<void (*)(Q3DInputHandler*, bool)>(slot);
    Q3DInputHandler::connect(self,
                             static_cast<void (Q3DInputHandler::*)(bool)>(&Q3DInputHandler::zoomAtTargetEnabledChanged),
                             [self, slotFunc](bool enable) {
                                 bool sigval1 = enable;
                                 slotFunc(self, sigval1);
                             });
}

libqt_string Q3DInputHandler_Tr2(const char* s, const char* c) {
    auto _ret = Q3DInputHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DInputHandler_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DInputHandler::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DInputHandler_SuperMetaObject(const Q3DInputHandler* self) {
    return (QMetaObject*)self->Q3DInputHandler::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMetaObject(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self)))
        vq3dinputhandler->q3dinputhandler_metaobject_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DInputHandler_SuperMetacast(Q3DInputHandler* self, const char* param1) {
    return self->Q3DInputHandler::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMetacast(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_metacast_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DInputHandler_SuperMetacall(Q3DInputHandler* self, int param1, int param2, void** param3) {
    return self->Q3DInputHandler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMetacall(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_metacall_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_Metacall_Callback>(slot);
}

// Base class handler implementation
void Q3DInputHandler_SuperMousePressEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->Q3DInputHandler::mousePressEvent(event, *mousePos);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMousePressEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_mousepressevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void Q3DInputHandler_SuperMouseReleaseEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->Q3DInputHandler::mouseReleaseEvent(event, *mousePos);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMouseReleaseEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_mousereleaseevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void Q3DInputHandler_SuperMouseMoveEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->Q3DInputHandler::mouseMoveEvent(event, *mousePos);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMouseMoveEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_mousemoveevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void Q3DInputHandler_SuperWheelEvent(Q3DInputHandler* self, QWheelEvent* event) {
    self->Q3DInputHandler::wheelEvent(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnWheelEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_wheelevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_MouseDoubleClickEvent(Q3DInputHandler* self, QMouseEvent* event) {
    self->mouseDoubleClickEvent(event);
}

// Base class handler implementation
void Q3DInputHandler_SuperMouseDoubleClickEvent(Q3DInputHandler* self, QMouseEvent* event) {
    self->Q3DInputHandler::mouseDoubleClickEvent(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnMouseDoubleClickEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_mousedoubleclickevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_TouchEvent(Q3DInputHandler* self, QTouchEvent* event) {
    self->touchEvent(event);
}

// Base class handler implementation
void Q3DInputHandler_SuperTouchEvent(Q3DInputHandler* self, QTouchEvent* event) {
    self->Q3DInputHandler::touchEvent(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnTouchEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_touchevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DInputHandler_Event(Q3DInputHandler* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Q3DInputHandler_SuperEvent(Q3DInputHandler* self, QEvent* event) {
    return self->Q3DInputHandler::event(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_event_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_Event_Callback>(slot);
}

// Derived class handler implementation
bool Q3DInputHandler_EventFilter(Q3DInputHandler* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DInputHandler_SuperEventFilter(Q3DInputHandler* self, QObject* watched, QEvent* event) {
    return self->Q3DInputHandler::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnEventFilter(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_eventfilter_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_TimerEvent(Q3DInputHandler* self, QTimerEvent* event) {
    auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self);
    if (vq3dinputhandler) {
        vq3dinputhandler->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DInputHandler::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DInputHandler_SuperTimerEvent(Q3DInputHandler* self, QTimerEvent* event) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->Q3DInputHandler::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DInputHandler::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnTimerEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_timerevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_ChildEvent(Q3DInputHandler* self, QChildEvent* event) {
    auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self);
    if (vq3dinputhandler) {
        vq3dinputhandler->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DInputHandler::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DInputHandler_SuperChildEvent(Q3DInputHandler* self, QChildEvent* event) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->Q3DInputHandler::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DInputHandler::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnChildEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_childevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_CustomEvent(Q3DInputHandler* self, QEvent* event) {
    auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self);
    if (vq3dinputhandler) {
        vq3dinputhandler->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DInputHandler::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DInputHandler_SuperCustomEvent(Q3DInputHandler* self, QEvent* event) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->Q3DInputHandler::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DInputHandler::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnCustomEvent(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_customevent_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_ConnectNotify(Q3DInputHandler* self, const QMetaMethod* signal) {
    auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self);
    if (vq3dinputhandler) {
        vq3dinputhandler->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DInputHandler::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DInputHandler_SuperConnectNotify(Q3DInputHandler* self, const QMetaMethod* signal) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->Q3DInputHandler::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DInputHandler::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnConnectNotify(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_connectnotify_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DInputHandler_DisconnectNotify(Q3DInputHandler* self, const QMetaMethod* signal) {
    auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self);
    if (vq3dinputhandler) {
        vq3dinputhandler->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DInputHandler::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DInputHandler_SuperDisconnectNotify(Q3DInputHandler* self, const QMetaMethod* signal) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->Q3DInputHandler::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DInputHandler::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DInputHandler_OnDisconnectNotify(Q3DInputHandler* self, intptr_t slot) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self))
        vq3dinputhandler->q3dinputhandler_disconnectnotify_callback = reinterpret_cast<VirtualQ3DInputHandler::Q3DInputHandler_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Q3DInputHandler_SetPrevDistance(Q3DInputHandler* self, int distance) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->VirtualQ3DInputHandler::setPrevDistance(static_cast<int>(distance));
    } else
        qFatal("Error: Protected method Q3DInputHandler::setPrevDistance called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DInputHandler_PrevDistance(const Q3DInputHandler* self) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self))) {
        return vq3dinputhandler->VirtualQ3DInputHandler::prevDistance();
    } else
        qFatal("Error: Protected method Q3DInputHandler::prevDistance called without a directly constructed type");
}

// Derived class protected handler implementation
void Q3DInputHandler_SetPreviousInputPos(Q3DInputHandler* self, const QPoint* position) {
    if (auto* vq3dinputhandler = dynamic_cast<VirtualQ3DInputHandler*>(self)) {
        vq3dinputhandler->VirtualQ3DInputHandler::setPreviousInputPos(*position);
    } else
        qFatal("Error: Protected method Q3DInputHandler::setPreviousInputPos called without a directly constructed type");
}

// Derived class handler implementation
QPoint* Q3DInputHandler_PreviousInputPos(const Q3DInputHandler* self) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self)))
        return new QPoint(vq3dinputhandler->previousInputPos());
    qFatal("Error: Protected method Q3DInputHandler::previousInputPos called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DInputHandler_Sender(const Q3DInputHandler* self) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self))) {
        return vq3dinputhandler->VirtualQ3DInputHandler::sender();
    } else
        qFatal("Error: Protected method Q3DInputHandler::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DInputHandler_SenderSignalIndex(const Q3DInputHandler* self) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self))) {
        return vq3dinputhandler->VirtualQ3DInputHandler::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DInputHandler::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DInputHandler_Receivers(const Q3DInputHandler* self, const char* signal) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self))) {
        return vq3dinputhandler->VirtualQ3DInputHandler::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DInputHandler::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DInputHandler_IsSignalConnected(const Q3DInputHandler* self, const QMetaMethod* signal) {
    if (auto* vq3dinputhandler = const_cast<VirtualQ3DInputHandler*>(dynamic_cast<const VirtualQ3DInputHandler*>(self))) {
        return vq3dinputhandler->VirtualQ3DInputHandler::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DInputHandler::isSignalConnected called without a directly constructed type");
}

void Q3DInputHandler_Delete(Q3DInputHandler* self) {
    delete self;
}
