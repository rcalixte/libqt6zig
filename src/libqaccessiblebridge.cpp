#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaccessiblebridge.h>
#include "libqaccessiblebridge.h"
#include "libqaccessiblebridge.hxx"

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
    self->setRootObject(rootObject);
}

void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
    self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, const QAccessibleBridge* param1) {
    self->operator=(*param1);
}

void QAccessibleBridge_Delete(QAccessibleBridge* self) {
    delete self;
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new() {
    return new VirtualQAccessibleBridgePlugin();
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent) {
    return new VirtualQAccessibleBridgePlugin(parent);
}

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAccessibleBridgePlugin_Metacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAccessibleBridgePlugin_Tr(const char* s) {
    auto _ret = QAccessibleBridgePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->create(key_QString);
}

libqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c) {
    auto _ret = QAccessibleBridgePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAccessibleBridgePlugin_SuperMetaObject(const QAccessibleBridgePlugin* self) {
    return (QMetaObject*)self->QAccessibleBridgePlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnMetaObject(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self)))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_metaobject_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAccessibleBridgePlugin_SuperMetacast(QAccessibleBridgePlugin* self, const char* param1) {
    return self->QAccessibleBridgePlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnMetacast(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_metacast_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAccessibleBridgePlugin_SuperMetacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3) {
    return self->QAccessibleBridgePlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnMetacall(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_metacall_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnCreate(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_create_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_Event(QAccessibleBridgePlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAccessibleBridgePlugin_SuperEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    return self->QAccessibleBridgePlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_event_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_EventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAccessibleBridgePlugin_SuperEventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event) {
    return self->QAccessibleBridgePlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnEventFilter(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_eventfilter_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin) {
        vqaccessiblebridgeplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_SuperTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->QAccessibleBridgePlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnTimerEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_timerevent_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin) {
        vqaccessiblebridgeplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_SuperChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->QAccessibleBridgePlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnChildEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_childevent_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin) {
        vqaccessiblebridgeplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_SuperCustomEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->QAccessibleBridgePlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnCustomEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_customevent_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin) {
        vqaccessiblebridgeplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_SuperConnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->QAccessibleBridgePlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnConnectNotify(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_connectnotify_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self);
    if (vqaccessiblebridgeplugin) {
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_SuperDisconnectNotify(QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->QAccessibleBridgePlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAccessibleBridgePlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnDisconnectNotify(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self))
        vqaccessiblebridgeplugin->qaccessiblebridgeplugin_disconnectnotify_callback = reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAccessibleBridgePlugin_Sender(const QAccessibleBridgePlugin* self) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->VirtualQAccessibleBridgePlugin::sender();
    } else
        qFatal("Error: Protected method QAccessibleBridgePlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAccessibleBridgePlugin_SenderSignalIndex(const QAccessibleBridgePlugin* self) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->VirtualQAccessibleBridgePlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAccessibleBridgePlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAccessibleBridgePlugin_Receivers(const QAccessibleBridgePlugin* self, const char* signal) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->VirtualQAccessibleBridgePlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QAccessibleBridgePlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAccessibleBridgePlugin_IsSignalConnected(const QAccessibleBridgePlugin* self, const QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->VirtualQAccessibleBridgePlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAccessibleBridgePlugin::isSignalConnected called without a directly constructed type");
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
    delete self;
}
