#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QObjectCleanupHandler>
#include <QString>
#include <QTimerEvent>
#include <qobjectcleanuphandler.h>
#include "libqobjectcleanuphandler.h"
#include "libqobjectcleanuphandler.hxx"

QObjectCleanupHandler* QObjectCleanupHandler_new() {
    return new VirtualQObjectCleanupHandler();
}

QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QObjectCleanupHandler_Metacall(QObjectCleanupHandler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QObjectCleanupHandler_Tr(const char* s) {
    auto _ret = QObjectCleanupHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object) {
    return self->add(object);
}

void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object) {
    self->remove(object);
}

bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self) {
    return self->isEmpty();
}

void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self) {
    self->clear();
}

libqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c) {
    auto _ret = QObjectCleanupHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n) {
    auto _ret = QObjectCleanupHandler::tr(s, c, static_cast<int>(n));
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
QMetaObject* QObjectCleanupHandler_SuperMetaObject(const QObjectCleanupHandler* self) {
    return (QMetaObject*)self->QObjectCleanupHandler::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnMetaObject(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self)))
        vqobjectcleanuphandler->qobjectcleanuphandler_metaobject_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QObjectCleanupHandler_SuperMetacast(QObjectCleanupHandler* self, const char* param1) {
    return self->QObjectCleanupHandler::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnMetacast(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_metacast_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Metacast_Callback>(slot);
}

// Base class handler implementation
int QObjectCleanupHandler_SuperMetacall(QObjectCleanupHandler* self, int param1, int param2, void** param3) {
    return self->QObjectCleanupHandler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnMetacall(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_metacall_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QObjectCleanupHandler_Event(QObjectCleanupHandler* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QObjectCleanupHandler_SuperEvent(QObjectCleanupHandler* self, QEvent* event) {
    return self->QObjectCleanupHandler::event(event);
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_event_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Event_Callback>(slot);
}

// Derived class handler implementation
bool QObjectCleanupHandler_EventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QObjectCleanupHandler_SuperEventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event) {
    return self->QObjectCleanupHandler::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnEventFilter(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_eventfilter_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QObjectCleanupHandler_TimerEvent(QObjectCleanupHandler* self, QTimerEvent* event) {
    auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self);
    if (vqobjectcleanuphandler) {
        vqobjectcleanuphandler->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QObjectCleanupHandler::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QObjectCleanupHandler_SuperTimerEvent(QObjectCleanupHandler* self, QTimerEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->QObjectCleanupHandler::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QObjectCleanupHandler::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnTimerEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_timerevent_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QObjectCleanupHandler_ChildEvent(QObjectCleanupHandler* self, QChildEvent* event) {
    auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self);
    if (vqobjectcleanuphandler) {
        vqobjectcleanuphandler->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QObjectCleanupHandler::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QObjectCleanupHandler_SuperChildEvent(QObjectCleanupHandler* self, QChildEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->QObjectCleanupHandler::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QObjectCleanupHandler::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnChildEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_childevent_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QObjectCleanupHandler_CustomEvent(QObjectCleanupHandler* self, QEvent* event) {
    auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self);
    if (vqobjectcleanuphandler) {
        vqobjectcleanuphandler->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QObjectCleanupHandler::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QObjectCleanupHandler_SuperCustomEvent(QObjectCleanupHandler* self, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->QObjectCleanupHandler::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QObjectCleanupHandler::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnCustomEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_customevent_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QObjectCleanupHandler_ConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal) {
    auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self);
    if (vqobjectcleanuphandler) {
        vqobjectcleanuphandler->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QObjectCleanupHandler::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QObjectCleanupHandler_SuperConnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->QObjectCleanupHandler::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QObjectCleanupHandler::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnConnectNotify(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_connectnotify_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QObjectCleanupHandler_DisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal) {
    auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self);
    if (vqobjectcleanuphandler) {
        vqobjectcleanuphandler->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QObjectCleanupHandler::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QObjectCleanupHandler_SuperDisconnectNotify(QObjectCleanupHandler* self, const QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->QObjectCleanupHandler::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QObjectCleanupHandler::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnDisconnectNotify(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self))
        vqobjectcleanuphandler->qobjectcleanuphandler_disconnectnotify_callback = reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QObjectCleanupHandler_Sender(const QObjectCleanupHandler* self) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->VirtualQObjectCleanupHandler::sender();
    } else
        qFatal("Error: Protected method QObjectCleanupHandler::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QObjectCleanupHandler_SenderSignalIndex(const QObjectCleanupHandler* self) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->VirtualQObjectCleanupHandler::senderSignalIndex();
    } else
        qFatal("Error: Protected method QObjectCleanupHandler::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QObjectCleanupHandler_Receivers(const QObjectCleanupHandler* self, const char* signal) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->VirtualQObjectCleanupHandler::receivers(signal);
    } else
        qFatal("Error: Protected method QObjectCleanupHandler::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QObjectCleanupHandler_IsSignalConnected(const QObjectCleanupHandler* self, const QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->VirtualQObjectCleanupHandler::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QObjectCleanupHandler::isSignalConnected called without a directly constructed type");
}

void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self) {
    delete self;
}
