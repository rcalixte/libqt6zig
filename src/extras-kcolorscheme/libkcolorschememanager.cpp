#include <KColorSchemeManager>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorSchemeManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KColorSchemeManager_Tr(const char* s) {
    QString _ret = KColorSchemeManager::tr(s);
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
    QString _ret = self->activeSchemeId();
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
    QString _ret = self->activeSchemeName();
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
    QString _ret = KColorSchemeManager::tr(s, c);
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
    QString _ret = KColorSchemeManager::tr(s, c, static_cast<int>(n));
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
int KColorSchemeManager_QBaseMetacall(KColorSchemeManager* self, int param1, int param2, void** param3) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Metacall_IsBase(true);
        return vkcolorschememanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KColorSchemeManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnMetacall(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Metacall_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeManager_Event(KColorSchemeManager* self, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return vkcolorschememanager->event(event);
    } else {
        return self->KColorSchemeManager::event(event);
    }
}

// Base class handler implementation
bool KColorSchemeManager_QBaseEvent(KColorSchemeManager* self, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Event_IsBase(true);
        return vkcolorschememanager->event(event);
    } else {
        return self->KColorSchemeManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnEvent(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Event_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeManager_EventFilter(KColorSchemeManager* self, QObject* watched, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return vkcolorschememanager->eventFilter(watched, event);
    } else {
        return self->KColorSchemeManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KColorSchemeManager_QBaseEventFilter(KColorSchemeManager* self, QObject* watched, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_EventFilter_IsBase(true);
        return vkcolorschememanager->eventFilter(watched, event);
    } else {
        return self->KColorSchemeManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnEventFilter(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_EventFilter_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeManager_TimerEvent(KColorSchemeManager* self, QTimerEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->timerEvent(event);
    } else {
        ((VirtualKColorSchemeManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeManager_QBaseTimerEvent(KColorSchemeManager* self, QTimerEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_TimerEvent_IsBase(true);
        vkcolorschememanager->timerEvent(event);
    } else {
        ((VirtualKColorSchemeManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnTimerEvent(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_TimerEvent_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeManager_ChildEvent(KColorSchemeManager* self, QChildEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->childEvent(event);
    } else {
        ((VirtualKColorSchemeManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeManager_QBaseChildEvent(KColorSchemeManager* self, QChildEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_ChildEvent_IsBase(true);
        vkcolorschememanager->childEvent(event);
    } else {
        ((VirtualKColorSchemeManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnChildEvent(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_ChildEvent_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeManager_CustomEvent(KColorSchemeManager* self, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->customEvent(event);
    } else {
        ((VirtualKColorSchemeManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColorSchemeManager_QBaseCustomEvent(KColorSchemeManager* self, QEvent* event) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_CustomEvent_IsBase(true);
        vkcolorschememanager->customEvent(event);
    } else {
        ((VirtualKColorSchemeManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnCustomEvent(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_CustomEvent_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeManager_ConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->connectNotify(*signal);
    } else {
        ((VirtualKColorSchemeManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColorSchemeManager_QBaseConnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_ConnectNotify_IsBase(true);
        vkcolorschememanager->connectNotify(*signal);
    } else {
        ((VirtualKColorSchemeManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnConnectNotify(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_ConnectNotify_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorSchemeManager_DisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->disconnectNotify(*signal);
    } else {
        ((VirtualKColorSchemeManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColorSchemeManager_QBaseDisconnectNotify(KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_DisconnectNotify_IsBase(true);
        vkcolorschememanager->disconnectNotify(*signal);
    } else {
        ((VirtualKColorSchemeManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnDisconnectNotify(KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = dynamic_cast<VirtualKColorSchemeManager*>(self);
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_DisconnectNotify_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColorSchemeManager_Sender(const KColorSchemeManager* self) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return vkcolorschememanager->sender();
    } else {
        return ((VirtualKColorSchemeManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColorSchemeManager_QBaseSender(const KColorSchemeManager* self) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Sender_IsBase(true);
        return vkcolorschememanager->sender();
    } else {
        return ((VirtualKColorSchemeManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnSender(const KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Sender_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeManager_SenderSignalIndex(const KColorSchemeManager* self) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return vkcolorschememanager->senderSignalIndex();
    } else {
        return ((VirtualKColorSchemeManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColorSchemeManager_QBaseSenderSignalIndex(const KColorSchemeManager* self) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_SenderSignalIndex_IsBase(true);
        return vkcolorschememanager->senderSignalIndex();
    } else {
        return ((VirtualKColorSchemeManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnSenderSignalIndex(const KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorSchemeManager_Receivers(const KColorSchemeManager* self, const char* signal) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return vkcolorschememanager->receivers(signal);
    } else {
        return ((VirtualKColorSchemeManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColorSchemeManager_QBaseReceivers(const KColorSchemeManager* self, const char* signal) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Receivers_IsBase(true);
        return vkcolorschememanager->receivers(signal);
    } else {
        return ((VirtualKColorSchemeManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnReceivers(const KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_Receivers_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorSchemeManager_IsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        return vkcolorschememanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorSchemeManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColorSchemeManager_QBaseIsSignalConnected(const KColorSchemeManager* self, const QMetaMethod* signal) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_IsSignalConnected_IsBase(true);
        return vkcolorschememanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorSchemeManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorSchemeManager_OnIsSignalConnected(const KColorSchemeManager* self, intptr_t slot) {
    auto* vkcolorschememanager = const_cast<VirtualKColorSchemeManager*>(dynamic_cast<const VirtualKColorSchemeManager*>(self));
    if (vkcolorschememanager && vkcolorschememanager->isVirtualKColorSchemeManager) {
        vkcolorschememanager->setKColorSchemeManager_IsSignalConnected_Callback(reinterpret_cast<VirtualKColorSchemeManager::KColorSchemeManager_IsSignalConnected_Callback>(slot));
    }
}

void KColorSchemeManager_Delete(KColorSchemeManager* self) {
    delete self;
}
