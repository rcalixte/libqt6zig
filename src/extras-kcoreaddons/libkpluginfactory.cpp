#include <KPluginFactory>
#include <KPluginMetaData>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kpluginfactory.h>
#include "libkpluginfactory.h"
#include "libkpluginfactory.hxx"

KPluginFactory* KPluginFactory_new() {
    return new VirtualKPluginFactory();
}

QMetaObject* KPluginFactory_MetaObject(const KPluginFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPluginFactory_Metacast(KPluginFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPluginFactory_Metacall(KPluginFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPluginFactory_Tr(const char* s) {
    auto _ret = KPluginFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPluginMetaData* KPluginFactory_MetaData(const KPluginFactory* self) {
    return new KPluginMetaData(self->metaData());
}

void KPluginFactory_SetMetaData(KPluginFactory* self, const KPluginMetaData* metaData) {
    self->setMetaData(*metaData);
}

QObject* KPluginFactory_Create(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args) {
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory) {
        return vkpluginfactory->create(iface, parentWidget, parent, args_QList);
    }
    qFatal("Error: Protected method KPluginFactory::create called without a directly constructed type");
}

libqt_string KPluginFactory_Tr2(const char* s, const char* c) {
    auto _ret = KPluginFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginFactory_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPluginFactory::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPluginFactory_SuperMetaObject(const KPluginFactory* self) {
    return (QMetaObject*)self->KPluginFactory::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnMetaObject(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self)))
        vkpluginfactory->kpluginfactory_metaobject_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPluginFactory_SuperMetacast(KPluginFactory* self, const char* param1) {
    return self->KPluginFactory::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnMetacast(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_metacast_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPluginFactory_SuperMetacall(KPluginFactory* self, int param1, int param2, void** param3) {
    return self->KPluginFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnMetacall(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_metacall_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Metacall_Callback>(slot);
}

// Base class handler implementation
QObject* KPluginFactory_SuperCreate(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args) {
    QList<QVariant> args_QList;
    args_QList.reserve(args.len);
    QVariant** args_arr = static_cast<QVariant**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self)) {
        return vkpluginfactory->KPluginFactory::create(iface, parentWidget, parent, args_QList);
    } else
        qFatal("Error: Protected virtual method KPluginFactory::create called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnCreate(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_create_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Create_Callback>(slot);
}

// Derived class handler implementation
bool KPluginFactory_Event(KPluginFactory* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KPluginFactory_SuperEvent(KPluginFactory* self, QEvent* event) {
    return self->KPluginFactory::event(event);
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnEvent(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_event_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_Event_Callback>(slot);
}

// Derived class handler implementation
bool KPluginFactory_EventFilter(KPluginFactory* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPluginFactory_SuperEventFilter(KPluginFactory* self, QObject* watched, QEvent* event) {
    return self->KPluginFactory::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnEventFilter(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_eventfilter_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPluginFactory_TimerEvent(KPluginFactory* self, QTimerEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory) {
        vkpluginfactory->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluginFactory::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluginFactory_SuperTimerEvent(KPluginFactory* self, QTimerEvent* event) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self)) {
        vkpluginfactory->KPluginFactory::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluginFactory::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnTimerEvent(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_timerevent_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluginFactory_ChildEvent(KPluginFactory* self, QChildEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory) {
        vkpluginfactory->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluginFactory::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluginFactory_SuperChildEvent(KPluginFactory* self, QChildEvent* event) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self)) {
        vkpluginfactory->KPluginFactory::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluginFactory::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnChildEvent(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_childevent_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluginFactory_CustomEvent(KPluginFactory* self, QEvent* event) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory) {
        vkpluginfactory->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPluginFactory::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluginFactory_SuperCustomEvent(KPluginFactory* self, QEvent* event) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self)) {
        vkpluginfactory->KPluginFactory::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPluginFactory::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnCustomEvent(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_customevent_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPluginFactory_ConnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory) {
        vkpluginfactory->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPluginFactory::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluginFactory_SuperConnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self)) {
        vkpluginfactory->KPluginFactory::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPluginFactory::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnConnectNotify(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_connectnotify_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPluginFactory_DisconnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self);
    if (vkpluginfactory) {
        vkpluginfactory->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPluginFactory::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPluginFactory_SuperDisconnectNotify(KPluginFactory* self, const QMetaMethod* signal) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self)) {
        vkpluginfactory->KPluginFactory::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPluginFactory::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPluginFactory_OnDisconnectNotify(KPluginFactory* self, intptr_t slot) {
    if (auto* vkpluginfactory = dynamic_cast<VirtualKPluginFactory*>(self))
        vkpluginfactory->kpluginfactory_disconnectnotify_callback = reinterpret_cast<VirtualKPluginFactory::KPluginFactory_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KPluginFactory_Sender(const KPluginFactory* self) {
    if (auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self))) {
        return vkpluginfactory->VirtualKPluginFactory::sender();
    } else
        qFatal("Error: Protected method KPluginFactory::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPluginFactory_SenderSignalIndex(const KPluginFactory* self) {
    if (auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self))) {
        return vkpluginfactory->VirtualKPluginFactory::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPluginFactory::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPluginFactory_Receivers(const KPluginFactory* self, const char* signal) {
    if (auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self))) {
        return vkpluginfactory->VirtualKPluginFactory::receivers(signal);
    } else
        qFatal("Error: Protected method KPluginFactory::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPluginFactory_IsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal) {
    if (auto* vkpluginfactory = const_cast<VirtualKPluginFactory*>(dynamic_cast<const VirtualKPluginFactory*>(self))) {
        return vkpluginfactory->VirtualKPluginFactory::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPluginFactory::isSignalConnected called without a directly constructed type");
}

void KPluginFactory_Delete(KPluginFactory* self) {
    delete self;
}
