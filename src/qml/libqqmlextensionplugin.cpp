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
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlextensionplugin->metaObject();
    } else {
        return (QMetaObject*)self->QQmlExtensionPlugin::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnMetaObject(const QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_MetaObject_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlExtensionPlugin_SuperMetacast(QQmlExtensionPlugin* self, const char* param1) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_Metacast_IsBase(true);
        return vqqmlextensionplugin->qt_metacast(param1);
    } else {
        return self->QQmlExtensionPlugin::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnMetacast(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_Metacast_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlExtensionPlugin_SuperMetacall(QQmlExtensionPlugin* self, int param1, int param2, void** param3) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_Metacall_IsBase(true);
        return vqqmlextensionplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlExtensionPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnMetacall(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_Metacall_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperRegisterTypes(QQmlExtensionPlugin* self, const char* uri) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_RegisterTypes_IsBase(true);
        vqqmlextensionplugin->registerTypes(uri);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->registerTypes(uri);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnRegisterTypes(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_RegisterTypes_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_RegisterTypes_Callback>(slot));
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperUnregisterTypes(QQmlExtensionPlugin* self) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_UnregisterTypes_IsBase(true);
        vqqmlextensionplugin->unregisterTypes();
    } else {
        self->QQmlExtensionPlugin::unregisterTypes();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnUnregisterTypes(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_UnregisterTypes_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_UnregisterTypes_Callback>(slot));
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperInitializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_InitializeEngine_IsBase(true);
        vqqmlextensionplugin->initializeEngine(engine, uri);
    } else {
        self->QQmlExtensionPlugin::initializeEngine(engine, uri);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnInitializeEngine(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_InitializeEngine_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_InitializeEngine_Callback>(slot));
}

// Derived class handler implementation
bool QQmlExtensionPlugin_Event(QQmlExtensionPlugin* self, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        return vqqmlextensionplugin->event(event);
    } else {
        return self->QQmlExtensionPlugin::event(event);
    }
}

// Base class handler implementation
bool QQmlExtensionPlugin_SuperEvent(QQmlExtensionPlugin* self, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_Event_IsBase(true);
        return vqqmlextensionplugin->event(event);
    } else {
        return self->QQmlExtensionPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_Event_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlExtensionPlugin_EventFilter(QQmlExtensionPlugin* self, QObject* watched, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        return vqqmlextensionplugin->eventFilter(watched, event);
    } else {
        return self->QQmlExtensionPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlExtensionPlugin_SuperEventFilter(QQmlExtensionPlugin* self, QObject* watched, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_EventFilter_IsBase(true);
        return vqqmlextensionplugin->eventFilter(watched, event);
    } else {
        return self->QQmlExtensionPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnEventFilter(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_EventFilter_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlExtensionPlugin_TimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->timerEvent(event);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperTimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_TimerEvent_IsBase(true);
        vqqmlextensionplugin->timerEvent(event);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnTimerEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_TimerEvent_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlExtensionPlugin_ChildEvent(QQmlExtensionPlugin* self, QChildEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->childEvent(event);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperChildEvent(QQmlExtensionPlugin* self, QChildEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_ChildEvent_IsBase(true);
        vqqmlextensionplugin->childEvent(event);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnChildEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_ChildEvent_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlExtensionPlugin_CustomEvent(QQmlExtensionPlugin* self, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->customEvent(event);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperCustomEvent(QQmlExtensionPlugin* self, QEvent* event) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_CustomEvent_IsBase(true);
        vqqmlextensionplugin->customEvent(event);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnCustomEvent(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_CustomEvent_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlExtensionPlugin_ConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->connectNotify(*signal);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_ConnectNotify_IsBase(true);
        vqqmlextensionplugin->connectNotify(*signal);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnConnectNotify(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlExtensionPlugin_DisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlExtensionPlugin_SuperDisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_DisconnectNotify_IsBase(true);
        vqqmlextensionplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlExtensionPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnDisconnectNotify(QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = dynamic_cast<VirtualQQmlExtensionPlugin*>(self);
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlExtensionPlugin_Sender(const QQmlExtensionPlugin* self) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        return vqqmlextensionplugin->sender();
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlExtensionPlugin_SuperSender(const QQmlExtensionPlugin* self) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_Sender_IsBase(true);
        return vqqmlextensionplugin->sender();
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnSender(const QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_Sender_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlExtensionPlugin_SenderSignalIndex(const QQmlExtensionPlugin* self) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        return vqqmlextensionplugin->senderSignalIndex();
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlExtensionPlugin_SuperSenderSignalIndex(const QQmlExtensionPlugin* self) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_SenderSignalIndex_IsBase(true);
        return vqqmlextensionplugin->senderSignalIndex();
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnSenderSignalIndex(const QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlExtensionPlugin_Receivers(const QQmlExtensionPlugin* self, const char* signal) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        return vqqmlextensionplugin->receivers(signal);
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlExtensionPlugin_SuperReceivers(const QQmlExtensionPlugin* self, const char* signal) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_Receivers_IsBase(true);
        return vqqmlextensionplugin->receivers(signal);
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnReceivers(const QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_Receivers_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlExtensionPlugin_IsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        return vqqmlextensionplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlExtensionPlugin_SuperIsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin) {
        vqqmlextensionplugin->setQQmlExtensionPlugin_IsSignalConnected_IsBase(true);
        return vqqmlextensionplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlExtensionPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionPlugin_OnIsSignalConnected(const QQmlExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlextensionplugin = const_cast<VirtualQQmlExtensionPlugin*>(dynamic_cast<const VirtualQQmlExtensionPlugin*>(self));
    if (vqqmlextensionplugin && vqqmlextensionplugin->isVirtualQQmlExtensionPlugin)
        vqqmlextensionplugin->setQQmlExtensionPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlExtensionPlugin::QQmlExtensionPlugin_IsSignalConnected_Callback>(slot));
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
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlengineextensionplugin->metaObject();
    } else {
        return (QMetaObject*)self->QQmlEngineExtensionPlugin::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnMetaObject(const QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_MetaObject_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlEngineExtensionPlugin_SuperMetacast(QQmlEngineExtensionPlugin* self, const char* param1) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Metacast_IsBase(true);
        return vqqmlengineextensionplugin->qt_metacast(param1);
    } else {
        return self->QQmlEngineExtensionPlugin::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnMetacast(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Metacast_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlEngineExtensionPlugin_SuperMetacall(QQmlEngineExtensionPlugin* self, int param1, int param2, void** param3) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Metacall_IsBase(true);
        return vqqmlengineextensionplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlEngineExtensionPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnMetacall(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Metacall_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperInitializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_InitializeEngine_IsBase(true);
        vqqmlengineextensionplugin->initializeEngine(engine, uri);
    } else {
        self->QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnInitializeEngine(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_InitializeEngine_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_InitializeEngine_Callback>(slot));
}

// Derived class handler implementation
bool QQmlEngineExtensionPlugin_Event(QQmlEngineExtensionPlugin* self, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        return vqqmlengineextensionplugin->event(event);
    } else {
        return self->QQmlEngineExtensionPlugin::event(event);
    }
}

// Base class handler implementation
bool QQmlEngineExtensionPlugin_SuperEvent(QQmlEngineExtensionPlugin* self, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Event_IsBase(true);
        return vqqmlengineextensionplugin->event(event);
    } else {
        return self->QQmlEngineExtensionPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Event_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlEngineExtensionPlugin_EventFilter(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        return vqqmlengineextensionplugin->eventFilter(watched, event);
    } else {
        return self->QQmlEngineExtensionPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlEngineExtensionPlugin_SuperEventFilter(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_EventFilter_IsBase(true);
        return vqqmlengineextensionplugin->eventFilter(watched, event);
    } else {
        return self->QQmlEngineExtensionPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnEventFilter(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_EventFilter_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_TimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->timerEvent(event);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperTimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_TimerEvent_IsBase(true);
        vqqmlengineextensionplugin->timerEvent(event);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnTimerEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_TimerEvent_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_ChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->childEvent(event);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_ChildEvent_IsBase(true);
        vqqmlengineextensionplugin->childEvent(event);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnChildEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_ChildEvent_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_CustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->customEvent(event);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperCustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_CustomEvent_IsBase(true);
        vqqmlengineextensionplugin->customEvent(event);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnCustomEvent(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_CustomEvent_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_ConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->connectNotify(*signal);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_ConnectNotify_IsBase(true);
        vqqmlengineextensionplugin->connectNotify(*signal);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnConnectNotify(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlEngineExtensionPlugin_DisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlEngineExtensionPlugin_SuperDisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_DisconnectNotify_IsBase(true);
        vqqmlengineextensionplugin->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlEngineExtensionPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnDisconnectNotify(QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = dynamic_cast<VirtualQQmlEngineExtensionPlugin*>(self);
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlEngineExtensionPlugin_Sender(const QQmlEngineExtensionPlugin* self) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        return vqqmlengineextensionplugin->sender();
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlEngineExtensionPlugin_SuperSender(const QQmlEngineExtensionPlugin* self) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Sender_IsBase(true);
        return vqqmlengineextensionplugin->sender();
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnSender(const QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Sender_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlEngineExtensionPlugin_SenderSignalIndex(const QQmlEngineExtensionPlugin* self) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        return vqqmlengineextensionplugin->senderSignalIndex();
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlEngineExtensionPlugin_SuperSenderSignalIndex(const QQmlEngineExtensionPlugin* self) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_SenderSignalIndex_IsBase(true);
        return vqqmlengineextensionplugin->senderSignalIndex();
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnSenderSignalIndex(const QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlEngineExtensionPlugin_Receivers(const QQmlEngineExtensionPlugin* self, const char* signal) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        return vqqmlengineextensionplugin->receivers(signal);
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlEngineExtensionPlugin_SuperReceivers(const QQmlEngineExtensionPlugin* self, const char* signal) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Receivers_IsBase(true);
        return vqqmlengineextensionplugin->receivers(signal);
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnReceivers(const QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_Receivers_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlEngineExtensionPlugin_IsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        return vqqmlengineextensionplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlEngineExtensionPlugin_SuperIsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin) {
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_IsSignalConnected_IsBase(true);
        return vqqmlengineextensionplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlEngineExtensionPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlEngineExtensionPlugin_OnIsSignalConnected(const QQmlEngineExtensionPlugin* self, intptr_t slot) {
    auto* vqqmlengineextensionplugin = const_cast<VirtualQQmlEngineExtensionPlugin*>(dynamic_cast<const VirtualQQmlEngineExtensionPlugin*>(self));
    if (vqqmlengineextensionplugin && vqqmlengineextensionplugin->isVirtualQQmlEngineExtensionPlugin)
        vqqmlengineextensionplugin->setQQmlEngineExtensionPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlEngineExtensionPlugin::QQmlEngineExtensionPlugin_IsSignalConnected_Callback>(slot));
}

void QQmlEngineExtensionPlugin_Delete(QQmlEngineExtensionPlugin* self) {
    delete self;
}
