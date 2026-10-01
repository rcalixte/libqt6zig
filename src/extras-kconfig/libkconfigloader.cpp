#include <KConfigGroup>
#include <KConfigLoader>
#include <KConfigSkeleton>
#include <KCoreConfigSkeleton>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <kconfigloader.h>
#include "libkconfigloader.h"
#include "libkconfigloader.hxx"

KConfigLoader* KConfigLoader_new(const libqt_string configFile, QIODevice* xml) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKConfigLoader(configFile_QString, xml);
}

KConfigLoader* KConfigLoader_new2(const KConfigGroup* config, QIODevice* xml) {
    return new VirtualKConfigLoader(*config, xml);
}

KConfigLoader* KConfigLoader_new3(const libqt_string configFile, QIODevice* xml, QObject* parent) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKConfigLoader(configFile_QString, xml, parent);
}

KConfigLoader* KConfigLoader_new4(const KConfigGroup* config, QIODevice* xml, QObject* parent) {
    return new VirtualKConfigLoader(*config, xml, parent);
}

KConfigSkeletonItem* KConfigLoader_FindItem(const KConfigLoader* self, const libqt_string group, const libqt_string key) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->findItem(group_QString, key_QString);
}

KConfigSkeletonItem* KConfigLoader_FindItemByName(const KConfigLoader* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->findItemByName(name_QString);
}

QVariant* KConfigLoader_Property(const KConfigLoader* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->property(name_QString));
}

bool KConfigLoader_HasGroup(const KConfigLoader* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->hasGroup(group_QString);
}

libqt_list /* of libqt_string */ KConfigLoader_GroupList(const KConfigLoader* self) {
    QList<QString> _ret = self->groupList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KConfigLoader_UsrSave(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        return vkconfigloader->usrSave();
    }
    qFatal("Error: Protected method KConfigLoader::usrSave called without a directly constructed type");
}

// Base class handler implementation
bool KConfigLoader_SuperUsrSave(KConfigLoader* self) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        return vkconfigloader->KConfigLoader::usrSave();
    } else
        qFatal("Error: Protected virtual method KConfigLoader::usrSave called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrSave(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_usrsave_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrSave_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* KConfigLoader_MetaObject(const KConfigLoader* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* KConfigLoader_SuperMetaObject(const KConfigLoader* self) {
    return (QMetaObject*)self->KConfigLoader::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnMetaObject(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self)))
        vkconfigloader->kconfigloader_metaobject_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* KConfigLoader_Metacast(KConfigLoader* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* KConfigLoader_SuperMetacast(KConfigLoader* self, const char* param1) {
    return self->KConfigLoader::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnMetacast(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_metacast_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Metacast_Callback>(slot);
}

// Derived class handler implementation
int KConfigLoader_Metacall(KConfigLoader* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int KConfigLoader_SuperMetacall(KConfigLoader* self, int param1, int param2, void** param3) {
    return self->KConfigLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnMetacall(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_metacall_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_SetDefaults(KConfigLoader* self) {
    self->setDefaults();
}

// Base class handler implementation
void KConfigLoader_SuperSetDefaults(KConfigLoader* self) {
    self->KConfigLoader::setDefaults();
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnSetDefaults(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_setdefaults_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_SetDefaults_Callback>(slot);
}

// Derived class handler implementation
bool KConfigLoader_UseDefaults(KConfigLoader* self, bool b) {
    return self->useDefaults(b);
}

// Base class handler implementation
bool KConfigLoader_SuperUseDefaults(KConfigLoader* self, bool b) {
    return self->KConfigLoader::useDefaults(b);
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUseDefaults(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_usedefaults_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UseDefaults_Callback>(slot);
}

// Derived class handler implementation
bool KConfigLoader_UsrUseDefaults(KConfigLoader* self, bool b) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        return vkconfigloader->usrUseDefaults(b);
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::usrUseDefaults called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigLoader_SuperUsrUseDefaults(KConfigLoader* self, bool b) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        return vkconfigloader->KConfigLoader::usrUseDefaults(b);
    } else
        qFatal("Error: Protected virtual method KConfigLoader::usrUseDefaults called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrUseDefaults(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_usrusedefaults_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrUseDefaults_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_UsrSetDefaults(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->usrSetDefaults();
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::usrSetDefaults called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperUsrSetDefaults(KConfigLoader* self) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::usrSetDefaults();
    } else
        qFatal("Error: Protected virtual method KConfigLoader::usrSetDefaults called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrSetDefaults(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_usrsetdefaults_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrSetDefaults_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_UsrRead(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->usrRead();
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::usrRead called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperUsrRead(KConfigLoader* self) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::usrRead();
    } else
        qFatal("Error: Protected virtual method KConfigLoader::usrRead called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrRead(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_usrread_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrRead_Callback>(slot);
}

// Derived class handler implementation
bool KConfigLoader_Event(KConfigLoader* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KConfigLoader_SuperEvent(KConfigLoader* self, QEvent* event) {
    return self->KConfigLoader::event(event);
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnEvent(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_event_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Event_Callback>(slot);
}

// Derived class handler implementation
bool KConfigLoader_EventFilter(KConfigLoader* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KConfigLoader_SuperEventFilter(KConfigLoader* self, QObject* watched, QEvent* event) {
    return self->KConfigLoader::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnEventFilter(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_eventfilter_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_TimerEvent(KConfigLoader* self, QTimerEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperTimerEvent(KConfigLoader* self, QTimerEvent* event) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigLoader::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnTimerEvent(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_timerevent_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_ChildEvent(KConfigLoader* self, QChildEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperChildEvent(KConfigLoader* self, QChildEvent* event) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigLoader::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnChildEvent(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_childevent_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_CustomEvent(KConfigLoader* self, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperCustomEvent(KConfigLoader* self, QEvent* event) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigLoader::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnCustomEvent(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_customevent_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_ConnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperConnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigLoader::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnConnectNotify(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_connectnotify_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KConfigLoader_DisconnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader) {
        vkconfigloader->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigLoader::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigLoader_SuperDisconnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self)) {
        vkconfigloader->KConfigLoader::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigLoader::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnDisconnectNotify(KConfigLoader* self, intptr_t slot) {
    if (auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self))
        vkconfigloader->kconfigloader_disconnectnotify_callback = reinterpret_cast<VirtualKConfigLoader::KConfigLoader_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KConfigLoader_Sender(const KConfigLoader* self) {
    if (auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self))) {
        return vkconfigloader->VirtualKConfigLoader::sender();
    } else
        qFatal("Error: Protected method KConfigLoader::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigLoader_SenderSignalIndex(const KConfigLoader* self) {
    if (auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self))) {
        return vkconfigloader->VirtualKConfigLoader::senderSignalIndex();
    } else
        qFatal("Error: Protected method KConfigLoader::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigLoader_Receivers(const KConfigLoader* self, const char* signal) {
    if (auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self))) {
        return vkconfigloader->VirtualKConfigLoader::receivers(signal);
    } else
        qFatal("Error: Protected method KConfigLoader::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigLoader_IsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal) {
    if (auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self))) {
        return vkconfigloader->VirtualKConfigLoader::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KConfigLoader::isSignalConnected called without a directly constructed type");
}

void KConfigLoader_Delete(KConfigLoader* self) {
    delete self;
}
