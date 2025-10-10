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
#include <QByteArray>
#include <cstring>
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
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKConfigSkeleton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KConfigSkeleton_Tr(const char* s) {
    QString _ret = KConfigSkeleton::tr(s);
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
    QString _ret = KConfigSkeleton::tr(s, c);
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
    QString _ret = KConfigSkeleton::tr(s, c, static_cast<int>(n));
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
int KConfigSkeleton_QBaseMetacall(KConfigSkeleton* self, int param1, int param2, void** param3) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Metacall_IsBase(true);
        return vkconfigskeleton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigSkeleton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnMetacall(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Metacall_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_SetDefaults(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setDefaults();
    } else {
        self->KConfigSkeleton::setDefaults();
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseSetDefaults(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_SetDefaults_IsBase(true);
        vkconfigskeleton->setDefaults();
    } else {
        self->KConfigSkeleton::setDefaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnSetDefaults(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_SetDefaults_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_SetDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigSkeleton_UseDefaults(KConfigSkeleton* self, bool b) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->useDefaults(b);
    } else {
        return self->KConfigSkeleton::useDefaults(b);
    }
}

// Base class handler implementation
bool KConfigSkeleton_QBaseUseDefaults(KConfigSkeleton* self, bool b) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UseDefaults_IsBase(true);
        return vkconfigskeleton->useDefaults(b);
    } else {
        return self->KConfigSkeleton::useDefaults(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUseDefaults(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UseDefaults_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UseDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigSkeleton_UsrUseDefaults(KConfigSkeleton* self, bool b) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->usrUseDefaults(b);
    } else {
        return ((VirtualKConfigSkeleton*)self)->usrUseDefaults(b);
    }
}

// Base class handler implementation
bool KConfigSkeleton_QBaseUsrUseDefaults(KConfigSkeleton* self, bool b) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrUseDefaults_IsBase(true);
        return vkconfigskeleton->usrUseDefaults(b);
    } else {
        return ((VirtualKConfigSkeleton*)self)->usrUseDefaults(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrUseDefaults(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrUseDefaults_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrUseDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_UsrSetDefaults(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->usrSetDefaults();
    } else {
        ((VirtualKConfigSkeleton*)self)->usrSetDefaults();
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseUsrSetDefaults(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrSetDefaults_IsBase(true);
        vkconfigskeleton->usrSetDefaults();
    } else {
        ((VirtualKConfigSkeleton*)self)->usrSetDefaults();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrSetDefaults(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrSetDefaults_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrSetDefaults_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_UsrRead(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->usrRead();
    } else {
        ((VirtualKConfigSkeleton*)self)->usrRead();
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseUsrRead(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrRead_IsBase(true);
        vkconfigskeleton->usrRead();
    } else {
        ((VirtualKConfigSkeleton*)self)->usrRead();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrRead(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrRead_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigSkeleton_UsrSave(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->usrSave();
    } else {
        return ((VirtualKConfigSkeleton*)self)->usrSave();
    }
}

// Base class handler implementation
bool KConfigSkeleton_QBaseUsrSave(KConfigSkeleton* self) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrSave_IsBase(true);
        return vkconfigskeleton->usrSave();
    } else {
        return ((VirtualKConfigSkeleton*)self)->usrSave();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnUsrSave(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_UsrSave_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_UsrSave_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigSkeleton_Event(KConfigSkeleton* self, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->event(event);
    } else {
        return self->KConfigSkeleton::event(event);
    }
}

// Base class handler implementation
bool KConfigSkeleton_QBaseEvent(KConfigSkeleton* self, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Event_IsBase(true);
        return vkconfigskeleton->event(event);
    } else {
        return self->KConfigSkeleton::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnEvent(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Event_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigSkeleton_EventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->eventFilter(watched, event);
    } else {
        return self->KConfigSkeleton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KConfigSkeleton_QBaseEventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_EventFilter_IsBase(true);
        return vkconfigskeleton->eventFilter(watched, event);
    } else {
        return self->KConfigSkeleton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnEventFilter(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_EventFilter_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_TimerEvent(KConfigSkeleton* self, QTimerEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->timerEvent(event);
    } else {
        ((VirtualKConfigSkeleton*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseTimerEvent(KConfigSkeleton* self, QTimerEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_TimerEvent_IsBase(true);
        vkconfigskeleton->timerEvent(event);
    } else {
        ((VirtualKConfigSkeleton*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnTimerEvent(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_TimerEvent_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_ChildEvent(KConfigSkeleton* self, QChildEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->childEvent(event);
    } else {
        ((VirtualKConfigSkeleton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseChildEvent(KConfigSkeleton* self, QChildEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_ChildEvent_IsBase(true);
        vkconfigskeleton->childEvent(event);
    } else {
        ((VirtualKConfigSkeleton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnChildEvent(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_ChildEvent_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_CustomEvent(KConfigSkeleton* self, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->customEvent(event);
    } else {
        ((VirtualKConfigSkeleton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseCustomEvent(KConfigSkeleton* self, QEvent* event) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_CustomEvent_IsBase(true);
        vkconfigskeleton->customEvent(event);
    } else {
        ((VirtualKConfigSkeleton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnCustomEvent(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_CustomEvent_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_ConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->connectNotify(*signal);
    } else {
        ((VirtualKConfigSkeleton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_ConnectNotify_IsBase(true);
        vkconfigskeleton->connectNotify(*signal);
    } else {
        ((VirtualKConfigSkeleton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnConnectNotify(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_ConnectNotify_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigSkeleton_DisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigSkeleton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigSkeleton_QBaseDisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_DisconnectNotify_IsBase(true);
        vkconfigskeleton->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigSkeleton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnDisconnectNotify(KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = dynamic_cast<VirtualKConfigSkeleton*>(self);
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_DisconnectNotify_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KConfigSkeleton_Sender(const KConfigSkeleton* self) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->sender();
    } else {
        return ((VirtualKConfigSkeleton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KConfigSkeleton_QBaseSender(const KConfigSkeleton* self) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Sender_IsBase(true);
        return vkconfigskeleton->sender();
    } else {
        return ((VirtualKConfigSkeleton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnSender(const KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Sender_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigSkeleton_SenderSignalIndex(const KConfigSkeleton* self) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->senderSignalIndex();
    } else {
        return ((VirtualKConfigSkeleton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KConfigSkeleton_QBaseSenderSignalIndex(const KConfigSkeleton* self) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_SenderSignalIndex_IsBase(true);
        return vkconfigskeleton->senderSignalIndex();
    } else {
        return ((VirtualKConfigSkeleton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnSenderSignalIndex(const KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigSkeleton_Receivers(const KConfigSkeleton* self, const char* signal) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->receivers(signal);
    } else {
        return ((VirtualKConfigSkeleton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KConfigSkeleton_QBaseReceivers(const KConfigSkeleton* self, const char* signal) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Receivers_IsBase(true);
        return vkconfigskeleton->receivers(signal);
    } else {
        return ((VirtualKConfigSkeleton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnReceivers(const KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_Receivers_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigSkeleton_IsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        return vkconfigskeleton->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigSkeleton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KConfigSkeleton_QBaseIsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_IsSignalConnected_IsBase(true);
        return vkconfigskeleton->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigSkeleton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton_OnIsSignalConnected(const KConfigSkeleton* self, intptr_t slot) {
    auto* vkconfigskeleton = const_cast<VirtualKConfigSkeleton*>(dynamic_cast<const VirtualKConfigSkeleton*>(self));
    if (vkconfigskeleton && vkconfigskeleton->isVirtualKConfigSkeleton) {
        vkconfigskeleton->setKConfigSkeleton_IsSignalConnected_Callback(reinterpret_cast<VirtualKConfigSkeleton::KConfigSkeleton_IsSignalConnected_Callback>(slot));
    }
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
    auto* vkconfigskeleton__itemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeleton__itemcolor && vkconfigskeleton__itemcolor->isVirtualKConfigSkeletonItemColor) {
        self->readConfig(config);
    } else {
        ((VirtualKConfigSkeletonItemColor*)self)->readConfig(config);
    }
}

void KConfigSkeleton__ItemColor_SetProperty(KConfigSkeleton__ItemColor* self, const QVariant* p) {
    auto* vkconfigskeleton__itemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeleton__itemcolor && vkconfigskeleton__itemcolor->isVirtualKConfigSkeletonItemColor) {
        self->setProperty(*p);
    } else {
        ((VirtualKConfigSkeletonItemColor*)self)->setProperty(*p);
    }
}

bool KConfigSkeleton__ItemColor_IsEqual(const KConfigSkeleton__ItemColor* self, const QVariant* p) {
    auto* vkconfigskeleton__itemcolor = dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeleton__itemcolor && vkconfigskeleton__itemcolor->isVirtualKConfigSkeletonItemColor) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKConfigSkeletonItemColor*)self)->isEqual(*p);
    }
}

QVariant* KConfigSkeleton__ItemColor_Property(const KConfigSkeleton__ItemColor* self) {
    auto* vkconfigskeleton__itemcolor = dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeleton__itemcolor && vkconfigskeleton__itemcolor->isVirtualKConfigSkeletonItemColor) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItemColor*)self)->property());
    }
}

// Base class handler implementation
void KConfigSkeleton__ItemColor_QBaseReadConfig(KConfigSkeleton__ItemColor* self, KConfig* config) {
    auto* vkconfigskeletonitemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_ReadConfig_IsBase(true);
        vkconfigskeletonitemcolor->readConfig(config);
    } else {
        self->KConfigSkeleton::ItemColor::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnReadConfig(KConfigSkeleton__ItemColor* self, intptr_t slot) {
    auto* vkconfigskeletonitemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_ReadConfig_Callback(reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeleton__ItemColor_QBaseSetProperty(KConfigSkeleton__ItemColor* self, const QVariant* p) {
    auto* vkconfigskeletonitemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_SetProperty_IsBase(true);
        vkconfigskeletonitemcolor->setProperty(*p);
    } else {
        self->KConfigSkeleton::ItemColor::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnSetProperty(KConfigSkeleton__ItemColor* self, intptr_t slot) {
    auto* vkconfigskeletonitemcolor = dynamic_cast<VirtualKConfigSkeletonItemColor*>(self);
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_SetProperty_Callback(reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigSkeleton__ItemColor_QBaseIsEqual(const KConfigSkeleton__ItemColor* self, const QVariant* p) {
    auto* vkconfigskeletonitemcolor = const_cast<VirtualKConfigSkeletonItemColor*>(dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self));
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_IsEqual_IsBase(true);
        return vkconfigskeletonitemcolor->isEqual(*p);
    } else {
        return self->KConfigSkeleton::ItemColor::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnIsEqual(const KConfigSkeleton__ItemColor* self, intptr_t slot) {
    auto* vkconfigskeletonitemcolor = const_cast<VirtualKConfigSkeletonItemColor*>(dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self));
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_IsEqual_Callback(reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KConfigSkeleton__ItemColor_QBaseProperty(const KConfigSkeleton__ItemColor* self) {
    auto* vkconfigskeletonitemcolor = const_cast<VirtualKConfigSkeletonItemColor*>(dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self));
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_Property_IsBase(true);
        return new QVariant(vkconfigskeletonitemcolor->property());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItemColor*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemColor_OnProperty(const KConfigSkeleton__ItemColor* self, intptr_t slot) {
    auto* vkconfigskeletonitemcolor = const_cast<VirtualKConfigSkeletonItemColor*>(dynamic_cast<const VirtualKConfigSkeletonItemColor*>(self));
    if (vkconfigskeletonitemcolor && vkconfigskeletonitemcolor->isVirtualKConfigSkeletonItemColor) {
        vkconfigskeletonitemcolor->setKConfigSkeleton__ItemColor_Property_Callback(reinterpret_cast<VirtualKConfigSkeletonItemColor::KConfigSkeleton__ItemColor_Property_Callback>(slot));
    }
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
    auto* vkconfigskeleton__itemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeleton__itemfont && vkconfigskeleton__itemfont->isVirtualKConfigSkeletonItemFont) {
        self->readConfig(config);
    } else {
        ((VirtualKConfigSkeletonItemFont*)self)->readConfig(config);
    }
}

void KConfigSkeleton__ItemFont_SetProperty(KConfigSkeleton__ItemFont* self, const QVariant* p) {
    auto* vkconfigskeleton__itemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeleton__itemfont && vkconfigskeleton__itemfont->isVirtualKConfigSkeletonItemFont) {
        self->setProperty(*p);
    } else {
        ((VirtualKConfigSkeletonItemFont*)self)->setProperty(*p);
    }
}

bool KConfigSkeleton__ItemFont_IsEqual(const KConfigSkeleton__ItemFont* self, const QVariant* p) {
    auto* vkconfigskeleton__itemfont = dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeleton__itemfont && vkconfigskeleton__itemfont->isVirtualKConfigSkeletonItemFont) {
        return self->isEqual(*p);
    } else {
        return ((VirtualKConfigSkeletonItemFont*)self)->isEqual(*p);
    }
}

QVariant* KConfigSkeleton__ItemFont_Property(const KConfigSkeleton__ItemFont* self) {
    auto* vkconfigskeleton__itemfont = dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeleton__itemfont && vkconfigskeleton__itemfont->isVirtualKConfigSkeletonItemFont) {
        return new QVariant(self->property());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItemFont*)self)->property());
    }
}

// Base class handler implementation
void KConfigSkeleton__ItemFont_QBaseReadConfig(KConfigSkeleton__ItemFont* self, KConfig* config) {
    auto* vkconfigskeletonitemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_ReadConfig_IsBase(true);
        vkconfigskeletonitemfont->readConfig(config);
    } else {
        self->KConfigSkeleton::ItemFont::readConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnReadConfig(KConfigSkeleton__ItemFont* self, intptr_t slot) {
    auto* vkconfigskeletonitemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_ReadConfig_Callback(reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigSkeleton__ItemFont_QBaseSetProperty(KConfigSkeleton__ItemFont* self, const QVariant* p) {
    auto* vkconfigskeletonitemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_SetProperty_IsBase(true);
        vkconfigskeletonitemfont->setProperty(*p);
    } else {
        self->KConfigSkeleton::ItemFont::setProperty(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnSetProperty(KConfigSkeleton__ItemFont* self, intptr_t slot) {
    auto* vkconfigskeletonitemfont = dynamic_cast<VirtualKConfigSkeletonItemFont*>(self);
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_SetProperty_Callback(reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigSkeleton__ItemFont_QBaseIsEqual(const KConfigSkeleton__ItemFont* self, const QVariant* p) {
    auto* vkconfigskeletonitemfont = const_cast<VirtualKConfigSkeletonItemFont*>(dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self));
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_IsEqual_IsBase(true);
        return vkconfigskeletonitemfont->isEqual(*p);
    } else {
        return self->KConfigSkeleton::ItemFont::isEqual(*p);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnIsEqual(const KConfigSkeleton__ItemFont* self, intptr_t slot) {
    auto* vkconfigskeletonitemfont = const_cast<VirtualKConfigSkeletonItemFont*>(dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self));
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_IsEqual_Callback(reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_IsEqual_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* KConfigSkeleton__ItemFont_QBaseProperty(const KConfigSkeleton__ItemFont* self) {
    auto* vkconfigskeletonitemfont = const_cast<VirtualKConfigSkeletonItemFont*>(dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self));
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_Property_IsBase(true);
        return new QVariant(vkconfigskeletonitemfont->property());
    } else {
        return new QVariant(((VirtualKConfigSkeletonItemFont*)self)->property());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigSkeleton__ItemFont_OnProperty(const KConfigSkeleton__ItemFont* self, intptr_t slot) {
    auto* vkconfigskeletonitemfont = const_cast<VirtualKConfigSkeletonItemFont*>(dynamic_cast<const VirtualKConfigSkeletonItemFont*>(self));
    if (vkconfigskeletonitemfont && vkconfigskeletonitemfont->isVirtualKConfigSkeletonItemFont) {
        vkconfigskeletonitemfont->setKConfigSkeleton__ItemFont_Property_Callback(reinterpret_cast<VirtualKConfigSkeletonItemFont::KConfigSkeleton__ItemFont_Property_Callback>(slot));
    }
}

void KConfigSkeleton__ItemFont_Delete(KConfigSkeleton__ItemFont* self) {
    delete self;
}
