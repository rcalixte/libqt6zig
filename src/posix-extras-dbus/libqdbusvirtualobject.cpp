#include <QChildEvent>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusVirtualObject>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qdbusvirtualobject.h>
#include "libqdbusvirtualobject.h"
#include "libqdbusvirtualobject.hxx"

QDBusVirtualObject* QDBusVirtualObject_new() {
    return new VirtualQDBusVirtualObject();
}

QDBusVirtualObject* QDBusVirtualObject_new2(QObject* parent) {
    return new VirtualQDBusVirtualObject(parent);
}

QMetaObject* QDBusVirtualObject_MetaObject(const QDBusVirtualObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusVirtualObject_Metacast(QDBusVirtualObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusVirtualObject_Metacall(QDBusVirtualObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDBusVirtualObject_Tr(const char* s) {
    auto _ret = QDBusVirtualObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusVirtualObject_Introspect(const QDBusVirtualObject* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    auto _ret = self->introspect(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDBusVirtualObject_HandleMessage(QDBusVirtualObject* self, const QDBusMessage* message, const QDBusConnection* connection) {
    return self->handleMessage(*message, *connection);
}

libqt_string QDBusVirtualObject_Tr2(const char* s, const char* c) {
    auto _ret = QDBusVirtualObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusVirtualObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDBusVirtualObject::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDBusVirtualObject_SuperMetaObject(const QDBusVirtualObject* self) {
    return (QMetaObject*)self->QDBusVirtualObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnMetaObject(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self)))
        vqdbusvirtualobject->qdbusvirtualobject_metaobject_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDBusVirtualObject_SuperMetacast(QDBusVirtualObject* self, const char* param1) {
    return self->QDBusVirtualObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnMetacast(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_metacast_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDBusVirtualObject_SuperMetacall(QDBusVirtualObject* self, int param1, int param2, void** param3) {
    return self->QDBusVirtualObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnMetacall(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_metacall_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnIntrospect(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self)))
        vqdbusvirtualobject->qdbusvirtualobject_introspect_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Introspect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnHandleMessage(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_handlemessage_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_HandleMessage_Callback>(slot);
}

// Derived class handler implementation
bool QDBusVirtualObject_Event(QDBusVirtualObject* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDBusVirtualObject_SuperEvent(QDBusVirtualObject* self, QEvent* event) {
    return self->QDBusVirtualObject::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnEvent(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_event_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDBusVirtualObject_EventFilter(QDBusVirtualObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDBusVirtualObject_SuperEventFilter(QDBusVirtualObject* self, QObject* watched, QEvent* event) {
    return self->QDBusVirtualObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnEventFilter(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_eventfilter_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDBusVirtualObject_TimerEvent(QDBusVirtualObject* self, QTimerEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject) {
        vqdbusvirtualobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusVirtualObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusVirtualObject_SuperTimerEvent(QDBusVirtualObject* self, QTimerEvent* event) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self)) {
        vqdbusvirtualobject->QDBusVirtualObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusVirtualObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnTimerEvent(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_timerevent_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusVirtualObject_ChildEvent(QDBusVirtualObject* self, QChildEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject) {
        vqdbusvirtualobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusVirtualObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusVirtualObject_SuperChildEvent(QDBusVirtualObject* self, QChildEvent* event) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self)) {
        vqdbusvirtualobject->QDBusVirtualObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusVirtualObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnChildEvent(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_childevent_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusVirtualObject_CustomEvent(QDBusVirtualObject* self, QEvent* event) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject) {
        vqdbusvirtualobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDBusVirtualObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusVirtualObject_SuperCustomEvent(QDBusVirtualObject* self, QEvent* event) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self)) {
        vqdbusvirtualobject->QDBusVirtualObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDBusVirtualObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnCustomEvent(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_customevent_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDBusVirtualObject_ConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject) {
        vqdbusvirtualobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusVirtualObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusVirtualObject_SuperConnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self)) {
        vqdbusvirtualobject->QDBusVirtualObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusVirtualObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnConnectNotify(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_connectnotify_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDBusVirtualObject_DisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self);
    if (vqdbusvirtualobject) {
        vqdbusvirtualobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDBusVirtualObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDBusVirtualObject_SuperDisconnectNotify(QDBusVirtualObject* self, const QMetaMethod* signal) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self)) {
        vqdbusvirtualobject->QDBusVirtualObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDBusVirtualObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDBusVirtualObject_OnDisconnectNotify(QDBusVirtualObject* self, intptr_t slot) {
    if (auto* vqdbusvirtualobject = dynamic_cast<VirtualQDBusVirtualObject*>(self))
        vqdbusvirtualobject->qdbusvirtualobject_disconnectnotify_callback = reinterpret_cast<VirtualQDBusVirtualObject::QDBusVirtualObject_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDBusVirtualObject_Sender(const QDBusVirtualObject* self) {
    if (auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self))) {
        return vqdbusvirtualobject->VirtualQDBusVirtualObject::sender();
    } else
        qFatal("Error: Protected method QDBusVirtualObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusVirtualObject_SenderSignalIndex(const QDBusVirtualObject* self) {
    if (auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self))) {
        return vqdbusvirtualobject->VirtualQDBusVirtualObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDBusVirtualObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDBusVirtualObject_Receivers(const QDBusVirtualObject* self, const char* signal) {
    if (auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self))) {
        return vqdbusvirtualobject->VirtualQDBusVirtualObject::receivers(signal);
    } else
        qFatal("Error: Protected method QDBusVirtualObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDBusVirtualObject_IsSignalConnected(const QDBusVirtualObject* self, const QMetaMethod* signal) {
    if (auto* vqdbusvirtualobject = const_cast<VirtualQDBusVirtualObject*>(dynamic_cast<const VirtualQDBusVirtualObject*>(self))) {
        return vqdbusvirtualobject->VirtualQDBusVirtualObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDBusVirtualObject::isSignalConnected called without a directly constructed type");
}

void QDBusVirtualObject_Delete(QDBusVirtualObject* self) {
    delete self;
}
