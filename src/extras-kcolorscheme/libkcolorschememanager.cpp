#include <KColorSchemeManager>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kcolorschememanager.h>
#include "libkcolorschememanager.h"
#include "libkcolorschememanager.hxx"

KColorSchemeManager* KColorSchemeManager_new() {
    return new VirtualKColorSchemeManager();
}

KColorSchemeManager* KColorSchemeManager_new2(QObject* parent) {
    return new VirtualKColorSchemeManager(parent);
}

QMetaObject* KColorSchemeManager_MetaObject(const KColorSchemeManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorSchemeManager_Metacast(KColorSchemeManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorSchemeManager_Metacall(KColorSchemeManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColorSchemeManager_Tr(const char* s) {
    auto _ret = KColorSchemeManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* KColorSchemeManager_Model(const KColorSchemeManager* self) {
    return self->model();
}

QModelIndex* KColorSchemeManager_IndexForSchemeId(const KColorSchemeManager* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QModelIndex(self->indexForSchemeId(id_QString));
}

QModelIndex* KColorSchemeManager_IndexForScheme(const KColorSchemeManager* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QModelIndex(self->indexForScheme(name_QString));
}

void KColorSchemeManager_SaveSchemeToConfigFile(const KColorSchemeManager* self, const libqt_string schemeName) {
    QString schemeName_QString = QString::fromUtf8(schemeName.data, schemeName.len);
    self->saveSchemeToConfigFile(schemeName_QString);
}

void KColorSchemeManager_SetAutosaveChanges(KColorSchemeManager* self, bool autosaveChanges) {
    self->setAutosaveChanges(autosaveChanges);
}

libqt_string KColorSchemeManager_ActiveSchemeId(const KColorSchemeManager* self) {
    auto _ret = self->activeSchemeId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorSchemeManager_ActiveSchemeName(const KColorSchemeManager* self) {
    auto _ret = self->activeSchemeName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KColorSchemeManager* KColorSchemeManager_Instance() {
    return KColorSchemeManager::instance();
}

void KColorSchemeManager_ActivateScheme(KColorSchemeManager* self, const QModelIndex* index) {
    self->activateScheme(*index);
}

libqt_string KColorSchemeManager_Tr2(const char* s, const char* c) {
    auto _ret = KColorSchemeManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorSchemeManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = KColorSchemeManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColorSchemeManager_SuperMetaObject(const KColorSchemeManager* self) {
    return (QMetaObject*)self->KColorSchemeManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnMetaObject(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self)))
        vkcolorschememanager->kcolorschememanager_metaobject_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColorSchemeManager_SuperMetacast(KColorSchemeManager* self, const char* param1) {
    return self->KColorSchemeManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnMetacast(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_metacast_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColorSchemeManager_SuperMetacall(KColorSchemeManager* self, int param1, int param2, void** param3) {
    return self->KColorSchemeManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnMetacall(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_metacall_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeManager_Event(KColorSchemeManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KColorSchemeManager_SuperEvent(KColorSchemeManager* self, QEvent* event) {
    return self->KColorSchemeManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnEvent(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_event_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool KColorSchemeManager_EventFilter(KColorSchemeManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KColorSchemeManager_SuperEventFilter(KColorSchemeManager* self, QObject* watched, QEvent* event) {
    return self->KColorSchemeManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnEventFilter(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_eventfilter_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeManager_TimerEvent(KColorSchemeManager* self, QTimerEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager) {
        vkcolorschememanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeManager_SuperTimerEvent(KColorSchemeManager* self, QTimerEvent* event) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self)) {
        vkcolorschememanager->KColorSchemeManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnTimerEvent(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_timerevent_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeManager_ChildEvent(KColorSchemeManager* self, QChildEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager) {
        vkcolorschememanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeManager_SuperChildEvent(KColorSchemeManager* self, QChildEvent* event) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self)) {
        vkcolorschememanager->KColorSchemeManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnChildEvent(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_childevent_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeManager_CustomEvent(KColorSchemeManager* self, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager) {
        vkcolorschememanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeManager_SuperCustomEvent(KColorSchemeManager* self, QEvent* event) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self)) {
        vkcolorschememanager->KColorSchemeManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorSchemeManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnCustomEvent(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_customevent_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeManager_ConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager) {
        vkcolorschememanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeManager_SuperConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self)) {
        vkcolorschememanager->KColorSchemeManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorSchemeManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnConnectNotify(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_connectnotify_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColorSchemeManager_DisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager) {
        vkcolorschememanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorSchemeManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorSchemeManager_SuperDisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self)) {
        vkcolorschememanager->KColorSchemeManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorSchemeManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnDisconnectNotify(KColorSchemeManager* self, intptr_t slot) {
    if (auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self))
        vkcolorschememanager->kcolorschememanager_disconnectnotify_callback = reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KColorSchemeManager_Sender(const KColorSchemeManager* self) {
    if (auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self))) {
        return vkcolorschememanager->VirtualKColorSchemeManager::sender();
    } else
        qFatal("Error: Protected method KColorSchemeManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorSchemeManager_SenderSignalIndex(const KColorSchemeManager* self) {
    if (auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self))) {
        return vkcolorschememanager->VirtualKColorSchemeManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColorSchemeManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorSchemeManager_Receivers(const KColorSchemeManager* self, const char* signal) {
    if (auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self))) {
        return vkcolorschememanager->VirtualKColorSchemeManager::receivers(signal);
    } else
        qFatal("Error: Protected method KColorSchemeManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorSchemeManager_IsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal) {
    if (auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self))) {
        return vkcolorschememanager->VirtualKColorSchemeManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColorSchemeManager::isSignalConnected called without a directly constructed type");
}

void KColorSchemeManager_Delete(KColorSchemeManager* self) {
    delete self;
}
