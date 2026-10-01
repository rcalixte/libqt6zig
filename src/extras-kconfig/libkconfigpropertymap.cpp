#include <KConfigPropertyMap>
#include <KCoreConfigSkeleton>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlPropertyMap>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <kconfigpropertymap.h>
#include "libkconfigpropertymap.h"
#include "libkconfigpropertymap.hxx"

KConfigPropertyMap* KConfigPropertyMap_new(KCoreConfigSkeleton* config) {
    return new VirtualKConfigPropertyMap(config);
}

KConfigPropertyMap* KConfigPropertyMap_new2(KCoreConfigSkeleton* config, QObject* parent) {
    return new VirtualKConfigPropertyMap(config, parent);
}

QMetaObject* KConfigPropertyMap_MetaObject(const KConfigPropertyMap* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigPropertyMap_Metacast(KConfigPropertyMap* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigPropertyMap_Metacall(KConfigPropertyMap* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KConfigPropertyMap_Tr(const char* s) {
    auto _ret = KConfigPropertyMap::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KConfigPropertyMap_IsNotify(const KConfigPropertyMap* self) {
    return self->isNotify();
}

void KConfigPropertyMap_SetNotify(KConfigPropertyMap* self, bool notify) {
    self->setNotify(notify);
}

bool KConfigPropertyMap_IsImmutable(const KConfigPropertyMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->isImmutable(key_QString);
}

void KConfigPropertyMap_WriteConfig(KConfigPropertyMap* self) {
    self->writeConfig();
}

QVariant* KConfigPropertyMap_UpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap) {
        return new QVariant(vkconfigpropertymap->updateValue(key_QString, *input));
    }
    qFatal("Error: Protected method KConfigPropertyMap::updateValue called without a directly constructed type");
}

libqt_string KConfigPropertyMap_Tr2(const char* s, const char* c) {
    auto _ret = KConfigPropertyMap::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigPropertyMap_Tr3(const char* s, const char* c, int n) {
    auto _ret = KConfigPropertyMap::tr(s, c, static_cast<int>(n));
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
QMetaObject* KConfigPropertyMap_SuperMetaObject(const KConfigPropertyMap* self) {
    return (QMetaObject*)self->KConfigPropertyMap::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnMetaObject(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self)))
        vkconfigpropertymap->kconfigpropertymap_metaobject_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KConfigPropertyMap_SuperMetacast(KConfigPropertyMap* self, const char* param1) {
    return self->KConfigPropertyMap::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnMetacast(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_metacast_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Metacast_Callback>(slot);
}

// Base class handler implementation
int KConfigPropertyMap_SuperMetacall(KConfigPropertyMap* self, int param1, int param2, void** param3) {
    return self->KConfigPropertyMap::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnMetacall(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_metacall_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* KConfigPropertyMap_SuperUpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        return new QVariant(vkconfigpropertymap->KConfigPropertyMap::updateValue(key_QString, *input));
    qFatal("Error: Protected virtual method KConfigPropertyMap::updateValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnUpdateValue(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_updatevalue_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_UpdateValue_Callback>(slot);
}

// Derived class handler implementation
bool KConfigPropertyMap_Event(KConfigPropertyMap* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KConfigPropertyMap_SuperEvent(KConfigPropertyMap* self, QEvent* event) {
    return self->KConfigPropertyMap::event(event);
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnEvent(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_event_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Event_Callback>(slot);
}

// Derived class handler implementation
bool KConfigPropertyMap_EventFilter(KConfigPropertyMap* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KConfigPropertyMap_SuperEventFilter(KConfigPropertyMap* self, QObject* watched, QEvent* event) {
    return self->KConfigPropertyMap::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnEventFilter(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_eventfilter_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KConfigPropertyMap_TimerEvent(KConfigPropertyMap* self, QTimerEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap) {
        vkconfigpropertymap->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigPropertyMap::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperTimerEvent(KConfigPropertyMap* self, QTimerEvent* event) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self)) {
        vkconfigpropertymap->KConfigPropertyMap::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigPropertyMap::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnTimerEvent(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_timerevent_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigPropertyMap_ChildEvent(KConfigPropertyMap* self, QChildEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap) {
        vkconfigpropertymap->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigPropertyMap::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperChildEvent(KConfigPropertyMap* self, QChildEvent* event) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self)) {
        vkconfigpropertymap->KConfigPropertyMap::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigPropertyMap::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnChildEvent(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_childevent_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigPropertyMap_CustomEvent(KConfigPropertyMap* self, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap) {
        vkconfigpropertymap->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigPropertyMap::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperCustomEvent(KConfigPropertyMap* self, QEvent* event) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self)) {
        vkconfigpropertymap->KConfigPropertyMap::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigPropertyMap::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnCustomEvent(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_customevent_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigPropertyMap_ConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap) {
        vkconfigpropertymap->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigPropertyMap::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self)) {
        vkconfigpropertymap->KConfigPropertyMap::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigPropertyMap::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnConnectNotify(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_connectnotify_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KConfigPropertyMap_DisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap) {
        vkconfigpropertymap->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigPropertyMap::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperDisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self)) {
        vkconfigpropertymap->KConfigPropertyMap::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigPropertyMap::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnDisconnectNotify(KConfigPropertyMap* self, intptr_t slot) {
    if (auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self))
        vkconfigpropertymap->kconfigpropertymap_disconnectnotify_callback = reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KConfigPropertyMap_Sender(const KConfigPropertyMap* self) {
    if (auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self))) {
        return vkconfigpropertymap->VirtualKConfigPropertyMap::sender();
    } else
        qFatal("Error: Protected method KConfigPropertyMap::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigPropertyMap_SenderSignalIndex(const KConfigPropertyMap* self) {
    if (auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self))) {
        return vkconfigpropertymap->VirtualKConfigPropertyMap::senderSignalIndex();
    } else
        qFatal("Error: Protected method KConfigPropertyMap::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigPropertyMap_Receivers(const KConfigPropertyMap* self, const char* signal) {
    if (auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self))) {
        return vkconfigpropertymap->VirtualKConfigPropertyMap::receivers(signal);
    } else
        qFatal("Error: Protected method KConfigPropertyMap::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigPropertyMap_IsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal) {
    if (auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self))) {
        return vkconfigpropertymap->VirtualKConfigPropertyMap::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KConfigPropertyMap::isSignalConnected called without a directly constructed type");
}

void KConfigPropertyMap_Delete(KConfigPropertyMap* self) {
    delete self;
}
