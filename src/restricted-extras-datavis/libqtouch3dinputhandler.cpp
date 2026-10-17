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
#include <QTouch3DInputHandler>
#include <QTouchEvent>
#include <QWheelEvent>
#include <qtouch3dinputhandler.h>
#include "libqtouch3dinputhandler.h"
#include "libqtouch3dinputhandler.hxx"

QTouch3DInputHandler* QTouch3DInputHandler_new() {
    return new VirtualQTouch3DInputHandler();
}

QTouch3DInputHandler* QTouch3DInputHandler_new2(QObject* parent) {
    return new VirtualQTouch3DInputHandler(parent);
}

QMetaObject* QTouch3DInputHandler_MetaObject(const QTouch3DInputHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTouch3DInputHandler_Metacast(QTouch3DInputHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTouch3DInputHandler_Metacall(QTouch3DInputHandler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTouch3DInputHandler_Tr(const char* s) {
    auto _ret = QTouch3DInputHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTouch3DInputHandler_TouchEvent(QTouch3DInputHandler* self, QTouchEvent* event) {
    self->touchEvent(event);
}

libqt_string QTouch3DInputHandler_Tr2(const char* s, const char* c) {
    auto _ret = QTouch3DInputHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTouch3DInputHandler_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTouch3DInputHandler::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTouch3DInputHandler_SuperMetaObject(const QTouch3DInputHandler* self) {
    return (QMetaObject*)self->QTouch3DInputHandler::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMetaObject(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self)))
        vqtouch3dinputhandler->qtouch3dinputhandler_metaobject_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTouch3DInputHandler_SuperMetacast(QTouch3DInputHandler* self, const char* param1) {
    return self->QTouch3DInputHandler::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMetacast(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_metacast_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTouch3DInputHandler_SuperMetacall(QTouch3DInputHandler* self, int param1, int param2, void** param3) {
    return self->QTouch3DInputHandler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMetacall(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_metacall_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_Metacall_Callback>(slot);
}

// Base class handler implementation
void QTouch3DInputHandler_SuperTouchEvent(QTouch3DInputHandler* self, QTouchEvent* event) {
    self->QTouch3DInputHandler::touchEvent(event);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnTouchEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_touchevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_MousePressEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mousePressEvent(event, *mousePos);
}

// Base class handler implementation
void QTouch3DInputHandler_SuperMousePressEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->QTouch3DInputHandler::mousePressEvent(event, *mousePos);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMousePressEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_mousepressevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_MouseReleaseEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mouseReleaseEvent(event, *mousePos);
}

// Base class handler implementation
void QTouch3DInputHandler_SuperMouseReleaseEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->QTouch3DInputHandler::mouseReleaseEvent(event, *mousePos);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMouseReleaseEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_mousereleaseevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_MouseMoveEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mouseMoveEvent(event, *mousePos);
}

// Base class handler implementation
void QTouch3DInputHandler_SuperMouseMoveEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->QTouch3DInputHandler::mouseMoveEvent(event, *mousePos);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMouseMoveEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_mousemoveevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_WheelEvent(QTouch3DInputHandler* self, QWheelEvent* event) {
    self->wheelEvent(event);
}

// Base class handler implementation
void QTouch3DInputHandler_SuperWheelEvent(QTouch3DInputHandler* self, QWheelEvent* event) {
    self->QTouch3DInputHandler::wheelEvent(event);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnWheelEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_wheelevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_MouseDoubleClickEvent(QTouch3DInputHandler* self, QMouseEvent* event) {
    self->mouseDoubleClickEvent(event);
}

// Base class handler implementation
void QTouch3DInputHandler_SuperMouseDoubleClickEvent(QTouch3DInputHandler* self, QMouseEvent* event) {
    self->QTouch3DInputHandler::mouseDoubleClickEvent(event);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnMouseDoubleClickEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTouch3DInputHandler_Event(QTouch3DInputHandler* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTouch3DInputHandler_SuperEvent(QTouch3DInputHandler* self, QEvent* event) {
    return self->QTouch3DInputHandler::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_event_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTouch3DInputHandler_EventFilter(QTouch3DInputHandler* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTouch3DInputHandler_SuperEventFilter(QTouch3DInputHandler* self, QObject* watched, QEvent* event) {
    return self->QTouch3DInputHandler::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnEventFilter(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_eventfilter_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_TimerEvent(QTouch3DInputHandler* self, QTimerEvent* event) {
    auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self);
    if (vqtouch3dinputhandler) {
        vqtouch3dinputhandler->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTouch3DInputHandler::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTouch3DInputHandler_SuperTimerEvent(QTouch3DInputHandler* self, QTimerEvent* event) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->QTouch3DInputHandler::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTouch3DInputHandler::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnTimerEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_timerevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_ChildEvent(QTouch3DInputHandler* self, QChildEvent* event) {
    auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self);
    if (vqtouch3dinputhandler) {
        vqtouch3dinputhandler->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTouch3DInputHandler::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTouch3DInputHandler_SuperChildEvent(QTouch3DInputHandler* self, QChildEvent* event) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->QTouch3DInputHandler::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTouch3DInputHandler::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnChildEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_childevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_CustomEvent(QTouch3DInputHandler* self, QEvent* event) {
    auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self);
    if (vqtouch3dinputhandler) {
        vqtouch3dinputhandler->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTouch3DInputHandler::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTouch3DInputHandler_SuperCustomEvent(QTouch3DInputHandler* self, QEvent* event) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->QTouch3DInputHandler::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTouch3DInputHandler::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnCustomEvent(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_customevent_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_ConnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal) {
    auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self);
    if (vqtouch3dinputhandler) {
        vqtouch3dinputhandler->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTouch3DInputHandler::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTouch3DInputHandler_SuperConnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->QTouch3DInputHandler::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTouch3DInputHandler::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnConnectNotify(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_connectnotify_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTouch3DInputHandler_DisconnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal) {
    auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self);
    if (vqtouch3dinputhandler) {
        vqtouch3dinputhandler->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTouch3DInputHandler::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTouch3DInputHandler_SuperDisconnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->QTouch3DInputHandler::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTouch3DInputHandler::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTouch3DInputHandler_OnDisconnectNotify(QTouch3DInputHandler* self, intptr_t slot) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self))
        vqtouch3dinputhandler->qtouch3dinputhandler_disconnectnotify_callback = reinterpret_cast<VirtualQTouch3DInputHandler::QTouch3DInputHandler_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTouch3DInputHandler_SetPrevDistance(QTouch3DInputHandler* self, int distance) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->VirtualQTouch3DInputHandler::setPrevDistance(static_cast<int>(distance));
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::setPrevDistance called without a directly constructed type");
}

// Derived class protected handler implementation
int QTouch3DInputHandler_PrevDistance(const QTouch3DInputHandler* self) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self))) {
        return vqtouch3dinputhandler->VirtualQTouch3DInputHandler::prevDistance();
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::prevDistance called without a directly constructed type");
}

// Derived class protected handler implementation
void QTouch3DInputHandler_SetPreviousInputPos(QTouch3DInputHandler* self, const QPoint* position) {
    if (auto* vqtouch3dinputhandler = dynamic_cast<VirtualQTouch3DInputHandler*>(self)) {
        vqtouch3dinputhandler->VirtualQTouch3DInputHandler::setPreviousInputPos(*position);
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::setPreviousInputPos called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QTouch3DInputHandler_PreviousInputPos(const QTouch3DInputHandler* self) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self)))
        return new QPoint(vqtouch3dinputhandler->previousInputPos());
    qFatal("Error: Protected method QTouch3DInputHandler::previousInputPos called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTouch3DInputHandler_Sender(const QTouch3DInputHandler* self) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self))) {
        return vqtouch3dinputhandler->VirtualQTouch3DInputHandler::sender();
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTouch3DInputHandler_SenderSignalIndex(const QTouch3DInputHandler* self) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self))) {
        return vqtouch3dinputhandler->VirtualQTouch3DInputHandler::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTouch3DInputHandler_Receivers(const QTouch3DInputHandler* self, const char* signal) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self))) {
        return vqtouch3dinputhandler->VirtualQTouch3DInputHandler::receivers(signal);
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTouch3DInputHandler_IsSignalConnected(const QTouch3DInputHandler* self, const QMetaMethod* signal) {
    if (auto* vqtouch3dinputhandler = const_cast<VirtualQTouch3DInputHandler*>(dynamic_cast<const VirtualQTouch3DInputHandler*>(self))) {
        return vqtouch3dinputhandler->VirtualQTouch3DInputHandler::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTouch3DInputHandler::isSignalConnected called without a directly constructed type");
}

void QTouch3DInputHandler_Delete(QTouch3DInputHandler* self) {
    delete self;
}
