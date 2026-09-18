#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__PlatformPluginFactory
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__PlatformTheme
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__Units
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <platformpluginfactory.h>
#include "libplatformpluginfactory.h"
#include "libplatformpluginfactory.hxx"

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_new() {
    return new VirtualKirigamiPlatformPlatformPluginFactory();
}

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_new2(QObject* parent) {
    return new VirtualKirigamiPlatformPlatformPluginFactory(parent);
}

QMetaObject* Kirigami__Platform__PlatformPluginFactory_MetaObject(const Kirigami__Platform__PlatformPluginFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__PlatformPluginFactory_Metacast(Kirigami__Platform__PlatformPluginFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__PlatformPluginFactory_Metacall(Kirigami__Platform__PlatformPluginFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Kirigami__Platform__PlatformPluginFactory_Tr(const char* s) {
    auto _ret = Kirigami::Platform::PlatformPluginFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Kirigami__Platform__PlatformTheme* Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent) {
    return self->createPlatformTheme(parent);
}

Kirigami__Platform__Units* Kirigami__Platform__PlatformPluginFactory_CreateUnits(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent) {
    return self->createUnits(parent);
}

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_FindPlugin() {
    return Kirigami::Platform::PlatformPluginFactory::findPlugin();
}

libqt_string Kirigami__Platform__PlatformPluginFactory_Tr2(const char* s, const char* c) {
    auto _ret = Kirigami::Platform::PlatformPluginFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__PlatformPluginFactory_Tr3(const char* s, const char* c, int n) {
    auto _ret = Kirigami::Platform::PlatformPluginFactory::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_FindPlugin1(const libqt_string pluginName) {
    QString pluginName_QString = QString::fromUtf8(pluginName.data, pluginName.len);
    return Kirigami::Platform::PlatformPluginFactory::findPlugin(pluginName_QString);
}

// Base class handler implementation
QMetaObject* Kirigami__Platform__PlatformPluginFactory_SuperMetaObject(const Kirigami__Platform__PlatformPluginFactory* self) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_MetaObject_IsBase(true);
        return (QMetaObject*)vkirigamiplatformplatformpluginfactory->metaObject();
    } else {
        return (QMetaObject*)self->Kirigami::Platform::PlatformPluginFactory::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnMetaObject(const Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_MetaObject_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* Kirigami__Platform__PlatformPluginFactory_SuperMetacast(Kirigami__Platform__PlatformPluginFactory* self, const char* param1) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Metacast_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->qt_metacast(param1);
    } else {
        return self->Kirigami::Platform::PlatformPluginFactory::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnMetacast(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Metacast_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Metacast_Callback>(slot));
}

// Base class handler implementation
int Kirigami__Platform__PlatformPluginFactory_SuperMetacall(Kirigami__Platform__PlatformPluginFactory* self, int param1, int param2, void** param3) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Metacall_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Kirigami::Platform::PlatformPluginFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnMetacall(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Metacall_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Metacall_Callback>(slot));
}

// Base class handler implementation
Kirigami__Platform__PlatformTheme* Kirigami__Platform__PlatformPluginFactory_SuperCreatePlatformTheme(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_CreatePlatformTheme_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->createPlatformTheme(parent);
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->createPlatformTheme(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnCreatePlatformTheme(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_CreatePlatformTheme_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme_Callback>(slot));
}

// Base class handler implementation
Kirigami__Platform__Units* Kirigami__Platform__PlatformPluginFactory_SuperCreateUnits(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_CreateUnits_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->createUnits(parent);
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->createUnits(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnCreateUnits(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_CreateUnits_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_CreateUnits_Callback>(slot));
}

// Derived class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_Event(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        return vkirigamiplatformplatformpluginfactory->event(event);
    } else {
        return self->Kirigami::Platform::PlatformPluginFactory::event(event);
    }
}

// Base class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_SuperEvent(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Event_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->event(event);
    } else {
        return self->Kirigami::Platform::PlatformPluginFactory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Event_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Event_Callback>(slot));
}

// Derived class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_EventFilter(Kirigami__Platform__PlatformPluginFactory* self, QObject* watched, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        return vkirigamiplatformplatformpluginfactory->eventFilter(watched, event);
    } else {
        return self->Kirigami::Platform::PlatformPluginFactory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_SuperEventFilter(Kirigami__Platform__PlatformPluginFactory* self, QObject* watched, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_EventFilter_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->eventFilter(watched, event);
    } else {
        return self->Kirigami::Platform::PlatformPluginFactory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnEventFilter(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_EventFilter_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_TimerEvent(Kirigami__Platform__PlatformPluginFactory* self, QTimerEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->timerEvent(event);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperTimerEvent(Kirigami__Platform__PlatformPluginFactory* self, QTimerEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_TimerEvent_IsBase(true);
        vkirigamiplatformplatformpluginfactory->timerEvent(event);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnTimerEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_TimerEvent_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_ChildEvent(Kirigami__Platform__PlatformPluginFactory* self, QChildEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->childEvent(event);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperChildEvent(Kirigami__Platform__PlatformPluginFactory* self, QChildEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_ChildEvent_IsBase(true);
        vkirigamiplatformplatformpluginfactory->childEvent(event);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnChildEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_ChildEvent_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_CustomEvent(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->customEvent(event);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperCustomEvent(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_CustomEvent_IsBase(true);
        vkirigamiplatformplatformpluginfactory->customEvent(event);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnCustomEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_CustomEvent_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_ConnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->connectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperConnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_ConnectNotify_IsBase(true);
        vkirigamiplatformplatformpluginfactory->connectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnConnectNotify(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_ConnectNotify_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_DisconnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->disconnectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperDisconnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_DisconnectNotify_IsBase(true);
        vkirigamiplatformplatformpluginfactory->disconnectNotify(*signal);
    } else {
        ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnDisconnectNotify(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_DisconnectNotify_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* Kirigami__Platform__PlatformPluginFactory_Sender(const Kirigami__Platform__PlatformPluginFactory* self) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        return vkirigamiplatformplatformpluginfactory->sender();
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->sender();
    }
}

// Base class handler implementation
QObject* Kirigami__Platform__PlatformPluginFactory_SuperSender(const Kirigami__Platform__PlatformPluginFactory* self) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Sender_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->sender();
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnSender(const Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Sender_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Sender_Callback>(slot));
}

// Derived class handler implementation
int Kirigami__Platform__PlatformPluginFactory_SenderSignalIndex(const Kirigami__Platform__PlatformPluginFactory* self) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        return vkirigamiplatformplatformpluginfactory->senderSignalIndex();
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Kirigami__Platform__PlatformPluginFactory_SuperSenderSignalIndex(const Kirigami__Platform__PlatformPluginFactory* self) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_SenderSignalIndex_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->senderSignalIndex();
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnSenderSignalIndex(const Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_SenderSignalIndex_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int Kirigami__Platform__PlatformPluginFactory_Receivers(const Kirigami__Platform__PlatformPluginFactory* self, const char* signal) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        return vkirigamiplatformplatformpluginfactory->receivers(signal);
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Kirigami__Platform__PlatformPluginFactory_SuperReceivers(const Kirigami__Platform__PlatformPluginFactory* self, const char* signal) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Receivers_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->receivers(signal);
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnReceivers(const Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_Receivers_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_IsSignalConnected(const Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        return vkirigamiplatformplatformpluginfactory->isSignalConnected(*signal);
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_SuperIsSignalConnected(const Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory) {
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_IsSignalConnected_IsBase(true);
        return vkirigamiplatformplatformpluginfactory->isSignalConnected(*signal);
    } else {
        return ((VirtualKirigamiPlatformPlatformPluginFactory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnIsSignalConnected(const Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self));
    if (vkirigamiplatformplatformpluginfactory && vkirigamiplatformplatformpluginfactory->isVirtualKirigamiPlatformPlatformPluginFactory)
        vkirigamiplatformplatformpluginfactory->setKirigami__Platform__PlatformPluginFactory_IsSignalConnected_Callback(reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_IsSignalConnected_Callback>(slot));
}

void Kirigami__Platform__PlatformPluginFactory_Delete(Kirigami__Platform__PlatformPluginFactory* self) {
    delete self;
}
