#include <KConfigGroup>
#include <KConfigLoader>
#include <KConfigSkeleton>
#include <KCoreConfigSkeleton>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->usrSave();
    }
    return {};
}

// Base class handler implementation
bool KConfigLoader_QBaseUsrSave(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrSave_IsBase(true);
        return vkconfigloader->usrSave();
    } else {
        return ((VirtualKConfigLoader*)self)->usrSave();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrSave(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrSave_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrSave_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigLoader_Metacall(KConfigLoader* self, int param1, int param2, void** param3) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int KConfigLoader_QBaseMetacall(KConfigLoader* self, int param1, int param2, void** param3) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Metacall_IsBase(true);
        return vkconfigloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnMetacall(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Metacall_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_SetDefaults(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setDefaults();
    } else {
        self->KConfigLoader::setDefaults();
    }
}

// Base class handler implementation
void KConfigLoader_QBaseSetDefaults(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_SetDefaults_IsBase(true);
        vkconfigloader->setDefaults();
    } else {
        self->KConfigLoader::setDefaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnSetDefaults(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_SetDefaults_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_SetDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigLoader_UseDefaults(KConfigLoader* self, bool b) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->useDefaults(b);
    } else {
        return self->KConfigLoader::useDefaults(b);
    }
}

// Base class handler implementation
bool KConfigLoader_QBaseUseDefaults(KConfigLoader* self, bool b) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UseDefaults_IsBase(true);
        return vkconfigloader->useDefaults(b);
    } else {
        return self->KConfigLoader::useDefaults(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUseDefaults(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UseDefaults_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UseDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigLoader_UsrUseDefaults(KConfigLoader* self, bool b) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->usrUseDefaults(b);
    } else {
        return ((VirtualKConfigLoader*)self)->usrUseDefaults(b);
    }
}

// Base class handler implementation
bool KConfigLoader_QBaseUsrUseDefaults(KConfigLoader* self, bool b) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrUseDefaults_IsBase(true);
        return vkconfigloader->usrUseDefaults(b);
    } else {
        return ((VirtualKConfigLoader*)self)->usrUseDefaults(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrUseDefaults(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrUseDefaults_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrUseDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_UsrSetDefaults(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->usrSetDefaults();
    } else {
        ((VirtualKConfigLoader*)self)->usrSetDefaults();
    }
}

// Base class handler implementation
void KConfigLoader_QBaseUsrSetDefaults(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrSetDefaults_IsBase(true);
        vkconfigloader->usrSetDefaults();
    } else {
        ((VirtualKConfigLoader*)self)->usrSetDefaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrSetDefaults(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrSetDefaults_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrSetDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_UsrRead(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->usrRead();
    } else {
        ((VirtualKConfigLoader*)self)->usrRead();
    }
}

// Base class handler implementation
void KConfigLoader_QBaseUsrRead(KConfigLoader* self) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrRead_IsBase(true);
        vkconfigloader->usrRead();
    } else {
        ((VirtualKConfigLoader*)self)->usrRead();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnUsrRead(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_UsrRead_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_UsrRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigLoader_Event(KConfigLoader* self, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->event(event);
    } else {
        return self->KConfigLoader::event(event);
    }
}

// Base class handler implementation
bool KConfigLoader_QBaseEvent(KConfigLoader* self, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Event_IsBase(true);
        return vkconfigloader->event(event);
    } else {
        return self->KConfigLoader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnEvent(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Event_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigLoader_EventFilter(KConfigLoader* self, QObject* watched, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->eventFilter(watched, event);
    } else {
        return self->KConfigLoader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KConfigLoader_QBaseEventFilter(KConfigLoader* self, QObject* watched, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_EventFilter_IsBase(true);
        return vkconfigloader->eventFilter(watched, event);
    } else {
        return self->KConfigLoader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnEventFilter(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_EventFilter_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_TimerEvent(KConfigLoader* self, QTimerEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->timerEvent(event);
    } else {
        ((VirtualKConfigLoader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KConfigLoader_QBaseTimerEvent(KConfigLoader* self, QTimerEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_TimerEvent_IsBase(true);
        vkconfigloader->timerEvent(event);
    } else {
        ((VirtualKConfigLoader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnTimerEvent(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_TimerEvent_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_ChildEvent(KConfigLoader* self, QChildEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->childEvent(event);
    } else {
        ((VirtualKConfigLoader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KConfigLoader_QBaseChildEvent(KConfigLoader* self, QChildEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_ChildEvent_IsBase(true);
        vkconfigloader->childEvent(event);
    } else {
        ((VirtualKConfigLoader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnChildEvent(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_ChildEvent_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_CustomEvent(KConfigLoader* self, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->customEvent(event);
    } else {
        ((VirtualKConfigLoader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KConfigLoader_QBaseCustomEvent(KConfigLoader* self, QEvent* event) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_CustomEvent_IsBase(true);
        vkconfigloader->customEvent(event);
    } else {
        ((VirtualKConfigLoader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnCustomEvent(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_CustomEvent_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_ConnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->connectNotify(*signal);
    } else {
        ((VirtualKConfigLoader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigLoader_QBaseConnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_ConnectNotify_IsBase(true);
        vkconfigloader->connectNotify(*signal);
    } else {
        ((VirtualKConfigLoader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnConnectNotify(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_ConnectNotify_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigLoader_DisconnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigLoader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigLoader_QBaseDisconnectNotify(KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_DisconnectNotify_IsBase(true);
        vkconfigloader->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigLoader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnDisconnectNotify(KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = dynamic_cast<VirtualKConfigLoader*>(self);
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_DisconnectNotify_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KConfigLoader_Sender(const KConfigLoader* self) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->sender();
    } else {
        return ((VirtualKConfigLoader*)self)->sender();
    }
}

// Base class handler implementation
QObject* KConfigLoader_QBaseSender(const KConfigLoader* self) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Sender_IsBase(true);
        return vkconfigloader->sender();
    } else {
        return ((VirtualKConfigLoader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnSender(const KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Sender_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigLoader_SenderSignalIndex(const KConfigLoader* self) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->senderSignalIndex();
    } else {
        return ((VirtualKConfigLoader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KConfigLoader_QBaseSenderSignalIndex(const KConfigLoader* self) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_SenderSignalIndex_IsBase(true);
        return vkconfigloader->senderSignalIndex();
    } else {
        return ((VirtualKConfigLoader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnSenderSignalIndex(const KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_SenderSignalIndex_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigLoader_Receivers(const KConfigLoader* self, const char* signal) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->receivers(signal);
    } else {
        return ((VirtualKConfigLoader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KConfigLoader_QBaseReceivers(const KConfigLoader* self, const char* signal) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Receivers_IsBase(true);
        return vkconfigloader->receivers(signal);
    } else {
        return ((VirtualKConfigLoader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnReceivers(const KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_Receivers_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigLoader_IsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        return vkconfigloader->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigLoader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KConfigLoader_QBaseIsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_IsSignalConnected_IsBase(true);
        return vkconfigloader->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigLoader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigLoader_OnIsSignalConnected(const KConfigLoader* self, intptr_t slot) {
    auto* vkconfigloader = const_cast<VirtualKConfigLoader*>(dynamic_cast<const VirtualKConfigLoader*>(self));
    if (vkconfigloader && vkconfigloader->isVirtualKConfigLoader) {
        vkconfigloader->setKConfigLoader_IsSignalConnected_Callback(reinterpret_cast<VirtualKConfigLoader::KConfigLoader_IsSignalConnected_Callback>(slot));
    }
}

void KConfigLoader_Delete(KConfigLoader* self) {
    delete self;
}
