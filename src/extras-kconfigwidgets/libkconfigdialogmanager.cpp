#include <KConfigDialogManager>
#include <KCoreConfigSkeleton>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHash>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kconfigdialogmanager.h>
#include "libkconfigdialogmanager.h"
#include "libkconfigdialogmanager.hxx"

KConfigDialogManager* KConfigDialogManager_new(QWidget* parent, KCoreConfigSkeleton* conf) {
    return new VirtualKConfigDialogManager(parent, conf);
}

QMetaObject* KConfigDialogManager_MetaObject(const KConfigDialogManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigDialogManager_Metacast(KConfigDialogManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigDialogManager_Metacall(KConfigDialogManager* self, int param1, int param2, void** param3) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKConfigDialogManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KConfigDialogManager_Tr(const char* s) {
    QString _ret = KConfigDialogManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigDialogManager_SettingsChanged(KConfigDialogManager* self) {
    self->settingsChanged();
}

void KConfigDialogManager_Connect_SettingsChanged(KConfigDialogManager* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialogManager*) = reinterpret_cast<void (*)(KConfigDialogManager*)>(slot);
    KConfigDialogManager::connect(self, &KConfigDialogManager::settingsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KConfigDialogManager_WidgetModified(KConfigDialogManager* self) {
    self->widgetModified();
}

void KConfigDialogManager_Connect_WidgetModified(KConfigDialogManager* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialogManager*) = reinterpret_cast<void (*)(KConfigDialogManager*)>(slot);
    KConfigDialogManager::connect(self, &KConfigDialogManager::widgetModified, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KConfigDialogManager_AddWidget(KConfigDialogManager* self, QWidget* widget) {
    self->addWidget(widget);
}

bool KConfigDialogManager_HasChanged(const KConfigDialogManager* self) {
    return self->hasChanged();
}

bool KConfigDialogManager_IsDefault(const KConfigDialogManager* self) {
    return self->isDefault();
}

libqt_map* /* of libqt_string to libqt_string */ KConfigDialogManager_PropertyMap() {
    QHash<QString, QByteArray>* _ret = KConfigDialogManager::propertyMap();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret->size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret->size()));
    int _ctr = 0;
    for (auto _itr = _ret->keyValueBegin(); _itr != _ret->keyValueEnd(); ++_itr) {
        QString _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map* _out;
    _out->len = _ret->size();
    _out->keys = static_cast<void*>(_karr);
    _out->values = static_cast<void*>(_varr);
    return _out;
}

void KConfigDialogManager_UpdateSettings(KConfigDialogManager* self) {
    self->updateSettings();
}

void KConfigDialogManager_UpdateWidgets(KConfigDialogManager* self) {
    self->updateWidgets();
}

void KConfigDialogManager_UpdateWidgetsDefault(KConfigDialogManager* self) {
    self->updateWidgetsDefault();
}

void KConfigDialogManager_SetDefaultsIndicatorsVisible(KConfigDialogManager* self, bool enabled) {
    self->setDefaultsIndicatorsVisible(enabled);
}

libqt_string KConfigDialogManager_Tr2(const char* s, const char* c) {
    QString _ret = KConfigDialogManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigDialogManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = KConfigDialogManager::tr(s, c, static_cast<int>(n));
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
int KConfigDialogManager_QBaseMetacall(KConfigDialogManager* self, int param1, int param2, void** param3) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Metacall_IsBase(true);
        return vkconfigdialogmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigDialogManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnMetacall(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Metacall_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialogManager_Event(KConfigDialogManager* self, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->event(event);
    } else {
        return self->KConfigDialogManager::event(event);
    }
}

// Base class handler implementation
bool KConfigDialogManager_QBaseEvent(KConfigDialogManager* self, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Event_IsBase(true);
        return vkconfigdialogmanager->event(event);
    } else {
        return self->KConfigDialogManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnEvent(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Event_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialogManager_EventFilter(KConfigDialogManager* self, QObject* watched, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->eventFilter(watched, event);
    } else {
        return self->KConfigDialogManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KConfigDialogManager_QBaseEventFilter(KConfigDialogManager* self, QObject* watched, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_EventFilter_IsBase(true);
        return vkconfigdialogmanager->eventFilter(watched, event);
    } else {
        return self->KConfigDialogManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnEventFilter(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_EventFilter_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_TimerEvent(KConfigDialogManager* self, QTimerEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->timerEvent(event);
    } else {
        ((VirtualKConfigDialogManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseTimerEvent(KConfigDialogManager* self, QTimerEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_TimerEvent_IsBase(true);
        vkconfigdialogmanager->timerEvent(event);
    } else {
        ((VirtualKConfigDialogManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnTimerEvent(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_TimerEvent_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_ChildEvent(KConfigDialogManager* self, QChildEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->childEvent(event);
    } else {
        ((VirtualKConfigDialogManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseChildEvent(KConfigDialogManager* self, QChildEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_ChildEvent_IsBase(true);
        vkconfigdialogmanager->childEvent(event);
    } else {
        ((VirtualKConfigDialogManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnChildEvent(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_ChildEvent_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_CustomEvent(KConfigDialogManager* self, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->customEvent(event);
    } else {
        ((VirtualKConfigDialogManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseCustomEvent(KConfigDialogManager* self, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_CustomEvent_IsBase(true);
        vkconfigdialogmanager->customEvent(event);
    } else {
        ((VirtualKConfigDialogManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnCustomEvent(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_CustomEvent_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_ConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->connectNotify(*signal);
    } else {
        ((VirtualKConfigDialogManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_ConnectNotify_IsBase(true);
        vkconfigdialogmanager->connectNotify(*signal);
    } else {
        ((VirtualKConfigDialogManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnConnectNotify(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_ConnectNotify_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_DisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigDialogManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseDisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_DisconnectNotify_IsBase(true);
        vkconfigdialogmanager->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigDialogManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnDisconnectNotify(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_DisconnectNotify_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_Init(KConfigDialogManager* self, bool trackChanges) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->init(trackChanges);
    } else {
        ((VirtualKConfigDialogManager*)self)->init(trackChanges);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseInit(KConfigDialogManager* self, bool trackChanges) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Init_IsBase(true);
        vkconfigdialogmanager->init(trackChanges);
    } else {
        ((VirtualKConfigDialogManager*)self)->init(trackChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnInit(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Init_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Init_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialogManager_ParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->parseChildren(widget, trackChanges);
    } else {
        return ((VirtualKConfigDialogManager*)self)->parseChildren(widget, trackChanges);
    }
}

// Base class handler implementation
bool KConfigDialogManager_QBaseParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_ParseChildren_IsBase(true);
        return vkconfigdialogmanager->parseChildren(widget, trackChanges);
    } else {
        return ((VirtualKConfigDialogManager*)self)->parseChildren(widget, trackChanges);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnParseChildren(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_ParseChildren_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_ParseChildren_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KConfigDialogManager_GetUserProperty(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        QByteArray _qb = vkconfigdialogmanager->getUserProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getUserProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KConfigDialogManager_QBaseGetUserProperty(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetUserProperty_IsBase(true);
        QByteArray _qb = vkconfigdialogmanager->getUserProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getUserProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnGetUserProperty(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetUserProperty_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_GetUserProperty_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KConfigDialogManager_GetCustomProperty(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        QByteArray _qb = vkconfigdialogmanager->getCustomProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getCustomProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KConfigDialogManager_QBaseGetCustomProperty(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetCustomProperty_IsBase(true);
        QByteArray _qb = vkconfigdialogmanager->getCustomProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getCustomProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnGetCustomProperty(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetCustomProperty_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_GetCustomProperty_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KConfigDialogManager_GetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        QByteArray _qb = vkconfigdialogmanager->getUserPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getUserPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KConfigDialogManager_QBaseGetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetUserPropertyChangedSignal_IsBase(true);
        QByteArray _qb = vkconfigdialogmanager->getUserPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getUserPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnGetUserPropertyChangedSignal(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetUserPropertyChangedSignal_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_GetUserPropertyChangedSignal_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KConfigDialogManager_GetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        QByteArray _qb = vkconfigdialogmanager->getCustomPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getCustomPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KConfigDialogManager_QBaseGetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetCustomPropertyChangedSignal_IsBase(true);
        QByteArray _qb = vkconfigdialogmanager->getCustomPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualKConfigDialogManager*)self)->getCustomPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnGetCustomPropertyChangedSignal(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_GetCustomPropertyChangedSignal_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_GetCustomPropertyChangedSignal_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_SetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setProperty(w, *v);
    } else {
        ((VirtualKConfigDialogManager*)self)->setProperty(w, *v);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseSetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_SetProperty_IsBase(true);
        vkconfigdialogmanager->setProperty(w, *v);
    } else {
        ((VirtualKConfigDialogManager*)self)->setProperty(w, *v);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnSetProperty(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_SetProperty_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_SetProperty_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KConfigDialogManager_Property(const KConfigDialogManager* self, QWidget* w) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return new QVariant(vkconfigdialogmanager->property(w));
    }
    return {};
}

// Base class handler implementation
QVariant* KConfigDialogManager_QBaseProperty(const KConfigDialogManager* self, QWidget* w) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Property_IsBase(true);
        return new QVariant(vkconfigdialogmanager->property(w));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnProperty(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Property_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Property_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_SetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setupWidget(widget, item);
    } else {
        ((VirtualKConfigDialogManager*)self)->setupWidget(widget, item);
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseSetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_SetupWidget_IsBase(true);
        vkconfigdialogmanager->setupWidget(widget, item);
    } else {
        ((VirtualKConfigDialogManager*)self)->setupWidget(widget, item);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnSetupWidget(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_SetupWidget_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_SetupWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialogManager_InitMaps(KConfigDialogManager* self) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->initMaps();
    } else {
        ((VirtualKConfigDialogManager*)self)->initMaps();
    }
}

// Base class handler implementation
void KConfigDialogManager_QBaseInitMaps(KConfigDialogManager* self) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_InitMaps_IsBase(true);
        vkconfigdialogmanager->initMaps();
    } else {
        ((VirtualKConfigDialogManager*)self)->initMaps();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnInitMaps(KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_InitMaps_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_InitMaps_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KConfigDialogManager_Sender(const KConfigDialogManager* self) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->sender();
    } else {
        return ((VirtualKConfigDialogManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* KConfigDialogManager_QBaseSender(const KConfigDialogManager* self) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Sender_IsBase(true);
        return vkconfigdialogmanager->sender();
    } else {
        return ((VirtualKConfigDialogManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnSender(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Sender_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialogManager_SenderSignalIndex(const KConfigDialogManager* self) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->senderSignalIndex();
    } else {
        return ((VirtualKConfigDialogManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KConfigDialogManager_QBaseSenderSignalIndex(const KConfigDialogManager* self) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_SenderSignalIndex_IsBase(true);
        return vkconfigdialogmanager->senderSignalIndex();
    } else {
        return ((VirtualKConfigDialogManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnSenderSignalIndex(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialogManager_Receivers(const KConfigDialogManager* self, const char* signal) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->receivers(signal);
    } else {
        return ((VirtualKConfigDialogManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KConfigDialogManager_QBaseReceivers(const KConfigDialogManager* self, const char* signal) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Receivers_IsBase(true);
        return vkconfigdialogmanager->receivers(signal);
    } else {
        return ((VirtualKConfigDialogManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnReceivers(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_Receivers_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialogManager_IsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        return vkconfigdialogmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigDialogManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KConfigDialogManager_QBaseIsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_IsSignalConnected_IsBase(true);
        return vkconfigdialogmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigDialogManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnIsSignalConnected(const KConfigDialogManager* self, intptr_t slot) {
    auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self));
    if (vkconfigdialogmanager && vkconfigdialogmanager->isVirtualKConfigDialogManager) {
        vkconfigdialogmanager->setKConfigDialogManager_IsSignalConnected_Callback(reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_IsSignalConnected_Callback>(slot));
    }
}

void KConfigDialogManager_Delete(KConfigDialogManager* self) {
    delete self;
}
