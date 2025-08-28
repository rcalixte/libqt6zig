#include <KConfigSkeleton>
#include <KCoreConfigSkeleton>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
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
