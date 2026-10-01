#include <QChildEvent>
#include <QEvent>
#include <QGenericPlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qgenericplugin.h>
#include "libqgenericplugin.h"
#include "libqgenericplugin.hxx"

QGenericPlugin* QGenericPlugin_new() {
    return new VirtualQGenericPlugin();
}

QGenericPlugin* QGenericPlugin_new2(QObject* parent) {
    return new VirtualQGenericPlugin(parent);
}

QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGenericPlugin_Metacast(QGenericPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGenericPlugin_Metacall(QGenericPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGenericPlugin_Tr(const char* s) {
    auto _ret = QGenericPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QGenericPlugin_Create(QGenericPlugin* self, const libqt_string name, const libqt_string spec) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString spec_QString = QString::fromUtf8(spec.data, spec.len);
    return self->create(name_QString, spec_QString);
}

libqt_string QGenericPlugin_Tr2(const char* s, const char* c) {
    auto _ret = QGenericPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGenericPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QGenericPlugin_SuperMetaObject(const QGenericPlugin* self) {
    return (QMetaObject*)self->QGenericPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnMetaObject(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self)))
        vqgenericplugin->qgenericplugin_metaobject_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGenericPlugin_SuperMetacast(QGenericPlugin* self, const char* param1) {
    return self->QGenericPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnMetacast(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_metacast_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGenericPlugin_SuperMetacall(QGenericPlugin* self, int param1, int param2, void** param3) {
    return self->QGenericPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnMetacall(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_metacall_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnCreate(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_create_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QGenericPlugin_Event(QGenericPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGenericPlugin_SuperEvent(QGenericPlugin* self, QEvent* event) {
    return self->QGenericPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_event_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGenericPlugin_EventFilter(QGenericPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGenericPlugin_SuperEventFilter(QGenericPlugin* self, QObject* watched, QEvent* event) {
    return self->QGenericPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnEventFilter(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_eventfilter_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGenericPlugin_TimerEvent(QGenericPlugin* self, QTimerEvent* event) {
    auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
    if (vqgenericplugin) {
        vqgenericplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGenericPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGenericPlugin_SuperTimerEvent(QGenericPlugin* self, QTimerEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->QGenericPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGenericPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnTimerEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_timerevent_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGenericPlugin_ChildEvent(QGenericPlugin* self, QChildEvent* event) {
    auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
    if (vqgenericplugin) {
        vqgenericplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGenericPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGenericPlugin_SuperChildEvent(QGenericPlugin* self, QChildEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->QGenericPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QGenericPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnChildEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_childevent_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QGenericPlugin_CustomEvent(QGenericPlugin* self, QEvent* event) {
    auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
    if (vqgenericplugin) {
        vqgenericplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGenericPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGenericPlugin_SuperCustomEvent(QGenericPlugin* self, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->QGenericPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGenericPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnCustomEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_customevent_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGenericPlugin_ConnectNotify(QGenericPlugin* self, const QMetaMethod* signal) {
    auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
    if (vqgenericplugin) {
        vqgenericplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGenericPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGenericPlugin_SuperConnectNotify(QGenericPlugin* self, const QMetaMethod* signal) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->QGenericPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGenericPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnConnectNotify(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_connectnotify_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGenericPlugin_DisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal) {
    auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self);
    if (vqgenericplugin) {
        vqgenericplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGenericPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGenericPlugin_SuperDisconnectNotify(QGenericPlugin* self, const QMetaMethod* signal) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->QGenericPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGenericPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnDisconnectNotify(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self))
        vqgenericplugin->qgenericplugin_disconnectnotify_callback = reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QGenericPlugin_Sender(const QGenericPlugin* self) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->VirtualQGenericPlugin::sender();
    } else
        qFatal("Error: Protected method QGenericPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGenericPlugin_SenderSignalIndex(const QGenericPlugin* self) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->VirtualQGenericPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGenericPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGenericPlugin_Receivers(const QGenericPlugin* self, const char* signal) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->VirtualQGenericPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QGenericPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGenericPlugin_IsSignalConnected(const QGenericPlugin* self, const QMetaMethod* signal) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->VirtualQGenericPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGenericPlugin::isSignalConnected called without a directly constructed type");
}

void QGenericPlugin_Delete(QGenericPlugin* self) {
    delete self;
}
