#include <KConfig>
#include <KConfigSkeleton>
#define WORKAROUND_INNER_CLASS_DEFINITION_KConfigSkeleton__ItemColor
#define WORKAROUND_INNER_CLASS_DEFINITION_KConfigSkeleton__ItemFont
#include <KCoreConfigSkeleton>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <kconfigskeleton.h>
#include "libkconfigskeleton.h"
#include "libkconfigskeleton.hxx"

KConfigSkeleton* KConfigSkeleton_new() {
    return new VirtualKConfigSkeleton();
}

KConfigSkeleton* KConfigSkeleton_new2(const libqt_string configname) {
    QString configname_QString = QString::fromUtf8(configname.data, configname.len);
    return new VirtualKConfigSkeleton(configname_QString);
}

KConfigSkeleton* KConfigSkeleton_new3(const libqt_string configname, QObject* parent) {
    QString configname_QString = QString::fromUtf8(configname.data, configname.len);
    return new VirtualKConfigSkeleton(configname_QString, parent);
}

QMetaObject* KConfigSkeleton_MetaObject(const KConfigSkeleton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigSkeleton_Metacast(KConfigSkeleton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigSkeleton_Metacall(KConfigSkeleton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KConfigSkeleton_Tr(const char* s) {
    auto _ret = KConfigSkeleton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KConfigSkeleton__ItemColor* KConfigSkeleton_AddItemColor(KConfigSkeleton* self, const libqt_string name, QColor* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemColor(name_QString, *reference);
}

KConfigSkeleton__ItemFont* KConfigSkeleton_AddItemFont(KConfigSkeleton* self, const libqt_string name, QFont* reference) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemFont(name_QString, *reference);
}

libqt_string KConfigSkeleton_Tr2(const char* s, const char* c) {
    auto _ret = KConfigSkeleton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigSkeleton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KConfigSkeleton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KConfigSkeleton__ItemColor* KConfigSkeleton_AddItemColor3(KConfigSkeleton* self, const libqt_string name, QColor* reference, const QColor* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemColor(name_QString, *reference, *defaultValue);
}

KConfigSkeleton__ItemColor* KConfigSkeleton_AddItemColor4(KConfigSkeleton* self, const libqt_string name, QColor* reference, const QColor* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemColor(name_QString, *reference, *defaultValue, key_QString);
}

KConfigSkeleton__ItemFont* KConfigSkeleton_AddItemFont3(KConfigSkeleton* self, const libqt_string name, QFont* reference, const QFont* defaultValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addItemFont(name_QString, *reference, *defaultValue);
}

KConfigSkeleton__ItemFont* KConfigSkeleton_AddItemFont4(KConfigSkeleton* self, const libqt_string name, QFont* reference, const QFont* defaultValue, const libqt_string key) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->addItemFont(name_QString, *reference, *defaultValue, key_QString);
}

// Base class handler implementation
QMetaObject* KConfigSkeleton_SuperMetaObject(const KConfigSkeleton* self) {
    return (QMetaObject*)self->KConfigSkeleton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnMetaObject(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self)))
        vkconfigskeleton->kconfigskeleton_metaobject_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KConfigSkeleton_SuperMetacast(KConfigSkeleton* self, const char* param1) {
    return self->KConfigSkeleton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnMetacast(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_metacast_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KConfigSkeleton_SuperMetacall(KConfigSkeleton* self, int param1, int param2, void** param3) {
    return self->KConfigSkeleton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnMetacall(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_metacall_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_SetDefaults(KConfigSkeleton* self) {
    self->setDefaults();
}

// Base class handler implementation
void KConfigSkeleton_SuperSetDefaults(KConfigSkeleton* self) {
    self->KConfigSkeleton::setDefaults();
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnSetDefaults(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_setdefaults_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_SetDefaults_Callback>(slot);
}

// Derived class handler implementation
bool KConfigSkeleton_UseDefaults(KConfigSkeleton* self, bool b) {
    return self->useDefaults(b);
}

// Base class handler implementation
bool KConfigSkeleton_SuperUseDefaults(KConfigSkeleton* self, bool b) {
    return self->KConfigSkeleton::useDefaults(b);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUseDefaults(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_usedefaults_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UseDefaults_Callback>(slot);
}

// Derived class handler implementation
bool KConfigSkeleton_UsrUseDefaults(KConfigSkeleton* self, bool b) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        return vkconfigskeleton->usrUseDefaults(b);
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::usrUseDefaults called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigSkeleton_SuperUsrUseDefaults(KConfigSkeleton* self, bool b) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        return vkconfigskeleton->KConfigSkeleton::usrUseDefaults(b);
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::usrUseDefaults called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrUseDefaults(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_usrusedefaults_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrUseDefaults_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_UsrSetDefaults(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->usrSetDefaults();
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::usrSetDefaults called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperUsrSetDefaults(KConfigSkeleton* self) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::usrSetDefaults();
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::usrSetDefaults called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrSetDefaults(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_usrsetdefaults_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrSetDefaults_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_UsrRead(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->usrRead();
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::usrRead called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperUsrRead(KConfigSkeleton* self) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::usrRead();
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::usrRead called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrRead(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_usrread_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrRead_Callback>(slot);
}

// Derived class handler implementation
bool KConfigSkeleton_UsrSave(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        return vkconfigskeleton->usrSave();
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::usrSave called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigSkeleton_SuperUsrSave(KConfigSkeleton* self) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        return vkconfigskeleton->KConfigSkeleton::usrSave();
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::usrSave called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrSave(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_usrsave_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrSave_Callback>(slot);
}

// Derived class handler implementation
bool KConfigSkeleton_Event(KConfigSkeleton* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KConfigSkeleton_SuperEvent(KConfigSkeleton* self, QEvent* event) {
    return self->KConfigSkeleton::event(event);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnEvent(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_event_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Event_Callback>(slot);
}

// Derived class handler implementation
bool KConfigSkeleton_EventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KConfigSkeleton_SuperEventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event) {
    return self->KConfigSkeleton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnEventFilter(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_eventfilter_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_TimerEvent(KConfigSkeleton* self, QTimerEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperTimerEvent(KConfigSkeleton* self, QTimerEvent* event) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnTimerEvent(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_timerevent_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_ChildEvent(KConfigSkeleton* self, QChildEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperChildEvent(KConfigSkeleton* self, QChildEvent* event) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnChildEvent(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_childevent_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_CustomEvent(KConfigSkeleton* self, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperCustomEvent(KConfigSkeleton* self, QEvent* event) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnCustomEvent(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_customevent_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_ConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnConnectNotify(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_connectnotify_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KConfigSkeleton_DisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton) {
        vkconfigskeleton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigSkeleton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigSkeleton_SuperDisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self)) {
        vkconfigskeleton->KConfigSkeleton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigSkeleton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnDisconnectNotify(KConfigSkeleton* self, intptr_t slot) {
    if (auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self))
        vkconfigskeleton->kconfigskeleton_disconnectnotify_callback = reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KConfigSkeleton_Sender(const KConfigSkeleton* self) {
    if (auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self))) {
        return vkconfigskeleton->VirtualKConfigSkeleton::sender();
    } else
        qFatal("Error: Protected method KConfigSkeleton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigSkeleton_SenderSignalIndex(const KConfigSkeleton* self) {
    if (auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self))) {
        return vkconfigskeleton->VirtualKConfigSkeleton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KConfigSkeleton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigSkeleton_Receivers(const KConfigSkeleton* self, const char* signal) {
    if (auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self))) {
        return vkconfigskeleton->VirtualKConfigSkeleton::receivers(signal);
    } else
        qFatal("Error: Protected method KConfigSkeleton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigSkeleton_IsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal) {
    if (auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self))) {
        return vkconfigskeleton->VirtualKConfigSkeleton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KConfigSkeleton::isSignalConnected called without a directly constructed type");
}

void KConfigSkeleton_Delete(KConfigSkeleton* self) {
    delete self;
}

KConfigSkeleton__ItemColor* KConfigSkeleton__ItemColor_new(const libqt_string _group, const libqt_string _key, QColor* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKConfigSkeletonItemColor(_group_QString, _key_QString, *reference);
}

KConfigSkeleton__ItemColor* KConfigSkeleton__ItemColor_new2(const libqt_string _group, const libqt_string _key, QColor* reference, const QColor* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKConfigSkeletonItemColor(_group_QString, _key_QString, *reference, *defaultValue);
}

void KConfigSkeleton__ItemColor_ReadConfig(KConfigSkeleton__ItemColor* self, KConfig* config) {
    self->readConfig(config);
}

void KConfigSkeleton__ItemColor_SetProperty(KConfigSkeleton__ItemColor* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KConfigSkeleton__ItemColor_IsEqual(const KConfigSkeleton__ItemColor* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KConfigSkeleton__ItemColor_Property(const KConfigSkeleton__ItemColor* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KConfigSkeleton__ItemColor_SuperReadConfig(KConfigSkeleton__ItemColor* self, KConfig* config) {
    self->KConfigSkeleton::ItemColor::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnReadConfig(KConfigSkeleton__ItemColor* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self))
        vkconfigskeletonitemcolor->kconfigskeleton__itemcolor_readconfig_callback = reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KConfigSkeleton__ItemColor_SuperSetProperty(KConfigSkeleton__ItemColor* self, const QVariant* p) {
    self->KConfigSkeleton::ItemColor::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnSetProperty(KConfigSkeleton__ItemColor* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self))
        vkconfigskeletonitemcolor->kconfigskeleton__itemcolor_setproperty_callback = reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KConfigSkeleton__ItemColor_SuperIsEqual(const KConfigSkeleton__ItemColor* self, const QVariant* p) {
    return self->KConfigSkeleton::ItemColor::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnIsEqual(KConfigSkeleton__ItemColor* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemcolor = const_cast<VirtualKConfigSkeletonItemColor*>(dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self)))
        vkconfigskeletonitemcolor->kconfigskeleton__itemcolor_isequal_callback = reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KConfigSkeleton__ItemColor_SuperProperty(const KConfigSkeleton__ItemColor* self) {
    return new QVariant(self->KConfigSkeleton::ItemColor::property());
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnProperty(KConfigSkeleton__ItemColor* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemcolor = const_cast<VirtualKConfigSkeletonItemColor*>(dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self)))
        vkconfigskeletonitemcolor->kconfigskeleton__itemcolor_property_callback = reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_Property_Callback>(slot);
}

void KConfigSkeleton__ItemColor_Delete(KConfigSkeleton__ItemColor* self) {
    delete self;
}

KConfigSkeleton__ItemFont* KConfigSkeleton__ItemFont_new(const libqt_string _group, const libqt_string _key, QFont* reference) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKConfigSkeletonItemFont(_group_QString, _key_QString, *reference);
}

KConfigSkeleton__ItemFont* KConfigSkeleton__ItemFont_new2(const libqt_string _group, const libqt_string _key, QFont* reference, const QFont* defaultValue) {
    QString _group_QString = QString::fromUtf8(_group.data, _group.len);
    QString _key_QString = QString::fromUtf8(_key.data, _key.len);
    return new VirtualKConfigSkeletonItemFont(_group_QString, _key_QString, *reference, *defaultValue);
}

void KConfigSkeleton__ItemFont_ReadConfig(KConfigSkeleton__ItemFont* self, KConfig* config) {
    self->readConfig(config);
}

void KConfigSkeleton__ItemFont_SetProperty(KConfigSkeleton__ItemFont* self, const QVariant* p) {
    self->setProperty(*p);
}

bool KConfigSkeleton__ItemFont_IsEqual(const KConfigSkeleton__ItemFont* self, const QVariant* p) {
    return self->isEqual(*p);
}

QVariant* KConfigSkeleton__ItemFont_Property(const KConfigSkeleton__ItemFont* self) {
    return new QVariant(self->property());
}

// Base class handler implementation
void KConfigSkeleton__ItemFont_SuperReadConfig(KConfigSkeleton__ItemFont* self, KConfig* config) {
    self->KConfigSkeleton::ItemFont::readConfig(config);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnReadConfig(KConfigSkeleton__ItemFont* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self))
        vkconfigskeletonitemfont->kconfigskeleton__itemfont_readconfig_callback = reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KConfigSkeleton__ItemFont_SuperSetProperty(KConfigSkeleton__ItemFont* self, const QVariant* p) {
    self->KConfigSkeleton::ItemFont::setProperty(*p);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnSetProperty(KConfigSkeleton__ItemFont* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self))
        vkconfigskeletonitemfont->kconfigskeleton__itemfont_setproperty_callback = reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_SetProperty_Callback>(slot);
}

// Base class handler implementation
bool KConfigSkeleton__ItemFont_SuperIsEqual(const KConfigSkeleton__ItemFont* self, const QVariant* p) {
    return self->KConfigSkeleton::ItemFont::isEqual(*p);
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnIsEqual(KConfigSkeleton__ItemFont* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemfont = const_cast<VirtualKConfigSkeletonItemFont*>(dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self)))
        vkconfigskeletonitemfont->kconfigskeleton__itemfont_isequal_callback = reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_IsEqual_Callback>(slot);
}

// Base class handler implementation
QVariant* KConfigSkeleton__ItemFont_SuperProperty(const KConfigSkeleton__ItemFont* self) {
    return new QVariant(self->KConfigSkeleton::ItemFont::property());
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnProperty(KConfigSkeleton__ItemFont* self, intptr_t slot) {
    if (auto* vkconfigskeletonitemfont = const_cast<VirtualKConfigSkeletonItemFont*>(dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self)))
        vkconfigskeletonitemfont->kconfigskeleton__itemfont_property_callback = reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_Property_Callback>(slot);
}

void KConfigSkeleton__ItemFont_Delete(KConfigSkeleton__ItemFont* self) {
    delete self;
}
