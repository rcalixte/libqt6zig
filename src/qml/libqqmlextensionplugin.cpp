#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlEngineExtensionInterface>
#include <QQmlEngineExtensionPlugin>
#include <QQmlExtensionInterface>
#include <QQmlExtensionPlugin>
#include <QQmlTypesExtensionInterface>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qqmlextensionplugin.h>
#include "libqqmlextensionplugin.h"
#include "libqqmlextensionplugin.hxx"

QQmlExtensionPlugin* QQmlExtensionPlugin_new() {
    return new VirtualQQmlExtensionPlugin();
}

QQmlExtensionPlugin* QQmlExtensionPlugin_new2(QObject* parent) {
    return new VirtualQQmlExtensionPlugin(parent);
}

QQmlExtensionInterface* QQmlExtensionPlugin_AsQQmlExtensionInterface(QQmlExtensionPlugin* self) {
    return static_cast<QQmlExtensionInterface*>(self);
}

QQmlExtensionPlugin* QQmlExtensionPlugin_FromQQmlExtensionInterface(QQmlExtensionInterface* _qqmlextensioninterface) {
    return dynamic_cast<QQmlExtensionPlugin*>(static_cast<QQmlExtensionInterface*>(_qqmlextensioninterface));
}

QMetaObject* QQmlExtensionPlugin_MetaObject(const QQmlExtensionPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlExtensionPlugin_Metacast(QQmlExtensionPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlExtensionPlugin_Metacall(QQmlExtensionPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlExtensionPlugin_Tr(const char* s) {
    auto _ret = QQmlExtensionPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QQmlExtensionPlugin_BaseUrl(const QQmlExtensionPlugin* self) {
    return new QUrl(self->baseUrl());
}

void QQmlExtensionPlugin_RegisterTypes(QQmlExtensionPlugin* self, const char* uri) {
    self->registerTypes(uri);
}

void QQmlExtensionPlugin_UnregisterTypes(QQmlExtensionPlugin* self) {
    self->unregisterTypes();
}

void QQmlExtensionPlugin_InitializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
    self->initializeEngine(engine, uri);
}

libqt_string QQmlExtensionPlugin_Tr2(const char* s, const char* c) {
    auto _ret = QQmlExtensionPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlExtensionPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlExtensionPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlExtensionPlugin_SuperMetaObject(const QQmlExtensionPlugin* self) {
    return (QMetaObject*)self->QQmlExtensionPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnMetaObject(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self)))
        vqqmlextensionplugin->qqmlextensionplugin_metaobject_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlExtensionPlugin_SuperMetacast(QQmlExtensionPlugin* self, const char* param1) {
    return self->QQmlExtensionPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnMetacast(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_metacast_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlExtensionPlugin_SuperMetacall(QQmlExtensionPlugin* self, int param1, int param2, void** param3) {
    return self->QQmlExtensionPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnMetacall(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_metacall_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnRegisterTypes(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_registertypes_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_RegisterTypes_Callback>(slot);
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperUnregisterTypes(QQmlExtensionPlugin* self) {
    self->QQmlExtensionPlugin::unregisterTypes();
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnUnregisterTypes(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_unregistertypes_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_UnregisterTypes_Callback>(slot);
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperInitializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
    self->QQmlExtensionPlugin::initializeEngine(engine, uri);
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnInitializeEngine(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_initializeengine_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_InitializeEngine_Callback>(slot);
}

// Derived class handler implementation
bool QQmlExtensionPlugin_Event(QQmlExtensionPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlExtensionPlugin_SuperEvent(QQmlExtensionPlugin* self, QEvent* event) {
    return self->QQmlExtensionPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_event_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlExtensionPlugin_EventFilter(QQmlExtensionPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlExtensionPlugin_SuperEventFilter(QQmlExtensionPlugin* self, QObject* watched, QEvent* event) {
    return self->QQmlExtensionPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnEventFilter(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_eventfilter_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlExtensionPlugin_TimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin) {
        vqqmlextensionplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperTimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self)) {
        vqqmlextensionplugin->QQmlExtensionPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnTimerEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_timerevent_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlExtensionPlugin_ChildEvent(QQmlExtensionPlugin* self, QChildEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin) {
        vqqmlextensionplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperChildEvent(QQmlExtensionPlugin* self, QChildEvent* event) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self)) {
        vqqmlextensionplugin->QQmlExtensionPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnChildEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_childevent_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlExtensionPlugin_CustomEvent(QQmlExtensionPlugin* self, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin) {
        vqqmlextensionplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperCustomEvent(QQmlExtensionPlugin* self, QEvent* event) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self)) {
        vqqmlextensionplugin->QQmlExtensionPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnCustomEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_customevent_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlExtensionPlugin_ConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin) {
        vqqmlextensionplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self)) {
        vqqmlextensionplugin->QQmlExtensionPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnConnectNotify(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_connectnotify_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlExtensionPlugin_DisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin) {
        vqqmlextensionplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperDisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self)) {
        vqqmlextensionplugin->QQmlExtensionPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlExtensionPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnDisconnectNotify(QQmlExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self))
        vqqmlextensionplugin->qqmlextensionplugin_disconnectnotify_callback = reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlExtensionPlugin_Sender(const QQmlExtensionPlugin* self) {
    if (auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self))) {
        return vqqmlextensionplugin->VirtualQQmlExtensionPlugin::sender();
    } else
        qFatal("Error: Protected method QQmlExtensionPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlExtensionPlugin_SenderSignalIndex(const QQmlExtensionPlugin* self) {
    if (auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self))) {
        return vqqmlextensionplugin->VirtualQQmlExtensionPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlExtensionPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlExtensionPlugin_Receivers(const QQmlExtensionPlugin* self, const char* signal) {
    if (auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self))) {
        return vqqmlextensionplugin->VirtualQQmlExtensionPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlExtensionPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlExtensionPlugin_IsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    if (auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self))) {
        return vqqmlextensionplugin->VirtualQQmlExtensionPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlExtensionPlugin::isSignalConnected called without a directly constructed type");
}

void QQmlExtensionPlugin_Delete(QQmlExtensionPlugin* self) {
    delete self;
}

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new() {
    return new VirtualQQmlEngineExtensionPlugin();
}

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new2(QObject* parent) {
    return new VirtualQQmlEngineExtensionPlugin(parent);
}

QQmlEngineExtensionInterface* QQmlEngineExtensionPlugin_AsQQmlEngineExtensionInterface(QQmlEngineExtensionPlugin* self) {
    return static_cast<QQmlEngineExtensionInterface*>(self);
}

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_FromQQmlEngineExtensionInterface(QQmlEngineExtensionInterface* _qqmlengineextensioninterface) {
    return dynamic_cast<QQmlEngineExtensionPlugin*>(static_cast<QQmlEngineExtensionInterface*>(_qqmlengineextensioninterface));
}

QMetaObject* QQmlEngineExtensionPlugin_MetaObject(const QQmlEngineExtensionPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlEngineExtensionPlugin_Metacast(QQmlEngineExtensionPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlEngineExtensionPlugin_Metacall(QQmlEngineExtensionPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlEngineExtensionPlugin_Tr(const char* s) {
    auto _ret = QQmlEngineExtensionPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlEngineExtensionPlugin_InitializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
    self->initializeEngine(engine, uri);
}

libqt_string QQmlEngineExtensionPlugin_Tr2(const char* s, const char* c) {
    auto _ret = QQmlEngineExtensionPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlEngineExtensionPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlEngineExtensionPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlEngineExtensionPlugin_SuperMetaObject(const QQmlEngineExtensionPlugin* self) {
    return (QMetaObject*)self->QQmlEngineExtensionPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnMetaObject(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self)))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_metaobject_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlEngineExtensionPlugin_SuperMetacast(QQmlEngineExtensionPlugin* self, const char* param1) {
    return self->QQmlEngineExtensionPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnMetacast(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_metacast_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlEngineExtensionPlugin_SuperMetacall(QQmlEngineExtensionPlugin* self, int param1, int param2, void** param3) {
    return self->QQmlEngineExtensionPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnMetacall(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_metacall_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Metacall_Callback>(slot);
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperInitializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
    self->QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnInitializeEngine(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_initializeengine_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_InitializeEngine_Callback>(slot);
}

// Derived class handler implementation
bool QQmlEngineExtensionPlugin_Event(QQmlEngineExtensionPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlEngineExtensionPlugin_SuperEvent(QQmlEngineExtensionPlugin* self, QEvent* event) {
    return self->QQmlEngineExtensionPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_event_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlEngineExtensionPlugin_EventFilter(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlEngineExtensionPlugin_SuperEventFilter(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event) {
    return self->QQmlEngineExtensionPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnEventFilter(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_eventfilter_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_TimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin) {
        vqqmlengineextensionplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperTimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self)) {
        vqqmlengineextensionplugin->QQmlEngineExtensionPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnTimerEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_timerevent_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_ChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin) {
        vqqmlengineextensionplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self)) {
        vqqmlengineextensionplugin->QQmlEngineExtensionPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnChildEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_childevent_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_CustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin) {
        vqqmlengineextensionplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperCustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self)) {
        vqqmlengineextensionplugin->QQmlEngineExtensionPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnCustomEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_customevent_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_ConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin) {
        vqqmlengineextensionplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self)) {
        vqqmlengineextensionplugin->QQmlEngineExtensionPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnConnectNotify(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_connectnotify_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_DisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin) {
        vqqmlengineextensionplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperDisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self)) {
        vqqmlengineextensionplugin->QQmlEngineExtensionPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlEngineExtensionPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnDisconnectNotify(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    if (auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self))
        vqqmlengineextensionplugin->qqmlengineextensionplugin_disconnectnotify_callback = reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlEngineExtensionPlugin_Sender(const QQmlEngineExtensionPlugin* self) {
    if (auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self))) {
        return vqqmlengineextensionplugin->VirtualQQmlEngineExtensionPlugin::sender();
    } else
        qFatal("Error: Protected method QQmlEngineExtensionPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlEngineExtensionPlugin_SenderSignalIndex(const QQmlEngineExtensionPlugin* self) {
    if (auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self))) {
        return vqqmlengineextensionplugin->VirtualQQmlEngineExtensionPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlEngineExtensionPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlEngineExtensionPlugin_Receivers(const QQmlEngineExtensionPlugin* self, const char* signal) {
    if (auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self))) {
        return vqqmlengineextensionplugin->VirtualQQmlEngineExtensionPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlEngineExtensionPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlEngineExtensionPlugin_IsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    if (auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self))) {
        return vqqmlengineextensionplugin->VirtualQQmlEngineExtensionPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlEngineExtensionPlugin::isSignalConnected called without a directly constructed type");
}

void QQmlEngineExtensionPlugin_Delete(QQmlEngineExtensionPlugin* self) {
    delete self;
}
