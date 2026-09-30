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
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return new QVariant(vkconfigpropertymap->updateValue(key_QString, *input));
    }
    return {};
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
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_MetaObject_IsBase(true);
        return (QMetaObject*)vkconfigpropertymap->metaObject();
    } else {
        return (QMetaObject*)self->KConfigPropertyMap::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnMetaObject(const KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_MetaObject_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* KConfigPropertyMap_SuperMetacast(KConfigPropertyMap* self, const char* param1) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_Metacast_IsBase(true);
        return vkconfigpropertymap->qt_metacast(param1);
    } else {
        return self->KConfigPropertyMap::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnMetacast(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_Metacast_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Metacast_Callback>(slot));
}

// Base class handler implementation
int KConfigPropertyMap_SuperMetacall(KConfigPropertyMap* self, int param1, int param2, void** param3) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_Metacall_IsBase(true);
        return vkconfigpropertymap->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigPropertyMap::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnMetacall(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_Metacall_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Metacall_Callback>(slot));
}

// Base class handler implementation
QVariant* KConfigPropertyMap_SuperUpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_UpdateValue_IsBase(true);
        return new QVariant(vkconfigpropertymap->updateValue(key_QString, *input));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnUpdateValue(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_UpdateValue_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_UpdateValue_Callback>(slot));
}

// Derived class handler implementation
bool KConfigPropertyMap_Event(KConfigPropertyMap* self, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return vkconfigpropertymap->event(event);
    } else {
        return self->KConfigPropertyMap::event(event);
    }
}

// Base class handler implementation
bool KConfigPropertyMap_SuperEvent(KConfigPropertyMap* self, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_Event_IsBase(true);
        return vkconfigpropertymap->event(event);
    } else {
        return self->KConfigPropertyMap::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnEvent(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_Event_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Event_Callback>(slot));
}

// Derived class handler implementation
bool KConfigPropertyMap_EventFilter(KConfigPropertyMap* self, QObject* watched, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return vkconfigpropertymap->eventFilter(watched, event);
    } else {
        return self->KConfigPropertyMap::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KConfigPropertyMap_SuperEventFilter(KConfigPropertyMap* self, QObject* watched, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_EventFilter_IsBase(true);
        return vkconfigpropertymap->eventFilter(watched, event);
    } else {
        return self->KConfigPropertyMap::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnEventFilter(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_EventFilter_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void KConfigPropertyMap_TimerEvent(KConfigPropertyMap* self, QTimerEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->timerEvent(event);
    } else {
        ((VirtualKConfigPropertyMap*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperTimerEvent(KConfigPropertyMap* self, QTimerEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_TimerEvent_IsBase(true);
        vkconfigpropertymap->timerEvent(event);
    } else {
        ((VirtualKConfigPropertyMap*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnTimerEvent(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_TimerEvent_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void KConfigPropertyMap_ChildEvent(KConfigPropertyMap* self, QChildEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->childEvent(event);
    } else {
        ((VirtualKConfigPropertyMap*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperChildEvent(KConfigPropertyMap* self, QChildEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_ChildEvent_IsBase(true);
        vkconfigpropertymap->childEvent(event);
    } else {
        ((VirtualKConfigPropertyMap*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnChildEvent(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_ChildEvent_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void KConfigPropertyMap_CustomEvent(KConfigPropertyMap* self, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->customEvent(event);
    } else {
        ((VirtualKConfigPropertyMap*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperCustomEvent(KConfigPropertyMap* self, QEvent* event) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_CustomEvent_IsBase(true);
        vkconfigpropertymap->customEvent(event);
    } else {
        ((VirtualKConfigPropertyMap*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnCustomEvent(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_CustomEvent_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void KConfigPropertyMap_ConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->connectNotify(*signal);
    } else {
        ((VirtualKConfigPropertyMap*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_ConnectNotify_IsBase(true);
        vkconfigpropertymap->connectNotify(*signal);
    } else {
        ((VirtualKConfigPropertyMap*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnConnectNotify(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_ConnectNotify_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void KConfigPropertyMap_DisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigPropertyMap*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigPropertyMap_SuperDisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_DisconnectNotify_IsBase(true);
        vkconfigpropertymap->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigPropertyMap*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnDisconnectNotify(KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = dynamic_cast<VirtualKConfigPropertyMap*>(self);
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_DisconnectNotify_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* KConfigPropertyMap_Sender(const KConfigPropertyMap* self) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return vkconfigpropertymap->sender();
    } else {
        return ((VirtualKConfigPropertyMap*)self)->sender();
    }
}

// Base class handler implementation
QObject* KConfigPropertyMap_SuperSender(const KConfigPropertyMap* self) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_Sender_IsBase(true);
        return vkconfigpropertymap->sender();
    } else {
        return ((VirtualKConfigPropertyMap*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnSender(const KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_Sender_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Sender_Callback>(slot));
}

// Derived class handler implementation
int KConfigPropertyMap_SenderSignalIndex(const KConfigPropertyMap* self) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return vkconfigpropertymap->senderSignalIndex();
    } else {
        return ((VirtualKConfigPropertyMap*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KConfigPropertyMap_SuperSenderSignalIndex(const KConfigPropertyMap* self) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_SenderSignalIndex_IsBase(true);
        return vkconfigpropertymap->senderSignalIndex();
    } else {
        return ((VirtualKConfigPropertyMap*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnSenderSignalIndex(const KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_SenderSignalIndex_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int KConfigPropertyMap_Receivers(const KConfigPropertyMap* self, const char* signal) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return vkconfigpropertymap->receivers(signal);
    } else {
        return ((VirtualKConfigPropertyMap*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KConfigPropertyMap_SuperReceivers(const KConfigPropertyMap* self, const char* signal) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_Receivers_IsBase(true);
        return vkconfigpropertymap->receivers(signal);
    } else {
        return ((VirtualKConfigPropertyMap*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnReceivers(const KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_Receivers_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool KConfigPropertyMap_IsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        return vkconfigpropertymap->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigPropertyMap*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KConfigPropertyMap_SuperIsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap) {
        vkconfigpropertymap->setKConfigPropertyMap_IsSignalConnected_IsBase(true);
        return vkconfigpropertymap->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigPropertyMap*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigPropertyMap_OnIsSignalConnected(const KConfigPropertyMap* self, intptr_t slot) {
    auto* vkconfigpropertymap = const_cast<VirtualKConfigPropertyMap*>(dynamic_cast<const VirtualKConfigPropertyMap*>(self));
    if (vkconfigpropertymap && vkconfigpropertymap->isVirtualKConfigPropertyMap)
        vkconfigpropertymap->setKConfigPropertyMap_IsSignalConnected_Callback(reinterpret_cast<VirtualKConfigPropertyMap::KConfigPropertyMap_IsSignalConnected_Callback>(slot));
}

void KConfigPropertyMap_Delete(KConfigPropertyMap* self) {
    delete self;
}
