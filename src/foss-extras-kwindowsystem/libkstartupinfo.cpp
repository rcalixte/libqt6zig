#include <KStartupInfo>
#define WORKAROUND_INNER_CLASS_DEFINITION_KStartupInfo__Data
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWindow>
#include <kstartupinfo.h>
#include "libkstartupinfo.h"
#include "libkstartupinfo.hxx"

KStartupInfo* KStartupInfo_new(int flags) {
    return new VirtualKStartupInfo(static_cast<int>(flags));
}

KStartupInfo* KStartupInfo_new2(int flags, QObject* parent) {
    return new VirtualKStartupInfo(static_cast<int>(flags), parent);
}

QMetaObject* KStartupInfo_MetaObject(const KStartupInfo* self) {
    return (QMetaObject*)self->metaObject();
}

void* KStartupInfo_Metacast(KStartupInfo* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KStartupInfo_Metacall(KStartupInfo* self, int param1, int param2, void** param3) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKStartupInfo*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KStartupInfo_Tr(const char* s) {
    QString _ret = KStartupInfo::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfo_AppStarted() {
    KStartupInfo::appStarted();
}

void KStartupInfo_AppStarted2(const libqt_string startup_id) {
    QByteArray startup_id_QByteArray(startup_id.data, startup_id.len);
    KStartupInfo::appStarted(startup_id_QByteArray);
}

void KStartupInfo_SetStartupId(const libqt_string startup_id) {
    QByteArray startup_id_QByteArray(startup_id.data, startup_id.len);
    KStartupInfo::setStartupId(startup_id_QByteArray);
}

void KStartupInfo_SetNewStartupId(QWindow* window, const libqt_string startup_id) {
    QByteArray startup_id_QByteArray(startup_id.data, startup_id.len);
    KStartupInfo::setNewStartupId(window, startup_id_QByteArray);
}

libqt_string KStartupInfo_CreateNewStartupId() {
    QByteArray _qb = KStartupInfo::createNewStartupId();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStartupInfo_CreateNewStartupIdForTimestamp(unsigned int timestamp) {
    QByteArray _qb = KStartupInfo::createNewStartupIdForTimestamp(static_cast<quint32>(timestamp));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KStartupInfo_SendStartup(const KStartupInfoId* id, const KStartupInfoData* data) {
    return KStartupInfo::sendStartup(*id, *data);
}

bool KStartupInfo_SendChange(const KStartupInfoId* id, const KStartupInfoData* data) {
    return KStartupInfo::sendChange(*id, *data);
}

bool KStartupInfo_SendFinish(const KStartupInfoId* id) {
    return KStartupInfo::sendFinish(*id);
}

bool KStartupInfo_SendFinish2(const KStartupInfoId* id, const KStartupInfoData* data) {
    return KStartupInfo::sendFinish(*id, *data);
}

void KStartupInfo_ResetStartupEnv() {
    KStartupInfo::resetStartupEnv();
}

int KStartupInfo_CheckStartup(KStartupInfo* self, uintptr_t w) {
    return static_cast<int>(self->checkStartup(static_cast<WId>(w)));
}

int KStartupInfo_CheckStartup2(KStartupInfo* self, uintptr_t w, KStartupInfoId* id) {
    return static_cast<int>(self->checkStartup(static_cast<WId>(w), *id));
}

int KStartupInfo_CheckStartup3(KStartupInfo* self, uintptr_t w, KStartupInfoData* data) {
    return static_cast<int>(self->checkStartup(static_cast<WId>(w), *data));
}

int KStartupInfo_CheckStartup4(KStartupInfo* self, uintptr_t w, KStartupInfoId* id, KStartupInfoData* data) {
    return static_cast<int>(self->checkStartup(static_cast<WId>(w), *id, *data));
}

void KStartupInfo_SetTimeout(KStartupInfo* self, unsigned int secs) {
    self->setTimeout(static_cast<unsigned int>(secs));
}

libqt_string KStartupInfo_WindowStartupId(uintptr_t w) {
    QByteArray _qb = KStartupInfo::windowStartupId(static_cast<WId>(w));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfo_GotNewStartup(KStartupInfo* self, const KStartupInfoId* id, const KStartupInfoData* data) {
    self->gotNewStartup(*id, *data);
}

void KStartupInfo_Connect_GotNewStartup(KStartupInfo* self, intptr_t slot) {
    void (*slotFunc)(KStartupInfo*, KStartupInfoId*, KStartupInfoData*) = reinterpret_cast<void (*)(KStartupInfo*, KStartupInfoId*, KStartupInfoData*)>(slot);
    KStartupInfo::connect(self, &KStartupInfo::gotNewStartup, [self, slotFunc](const KStartupInfoId& id, const KStartupInfoData& data) {
        const KStartupInfoId& id_ret = id;
        // Cast returned reference into pointer
        KStartupInfoId* sigval1 = const_cast<KStartupInfoId*>(&id_ret);
        const KStartupInfoData& data_ret = data;
        // Cast returned reference into pointer
        KStartupInfoData* sigval2 = const_cast<KStartupInfoData*>(&data_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KStartupInfo_GotStartupChange(KStartupInfo* self, const KStartupInfoId* id, const KStartupInfoData* data) {
    self->gotStartupChange(*id, *data);
}

void KStartupInfo_Connect_GotStartupChange(KStartupInfo* self, intptr_t slot) {
    void (*slotFunc)(KStartupInfo*, KStartupInfoId*, KStartupInfoData*) = reinterpret_cast<void (*)(KStartupInfo*, KStartupInfoId*, KStartupInfoData*)>(slot);
    KStartupInfo::connect(self, &KStartupInfo::gotStartupChange, [self, slotFunc](const KStartupInfoId& id, const KStartupInfoData& data) {
        const KStartupInfoId& id_ret = id;
        // Cast returned reference into pointer
        KStartupInfoId* sigval1 = const_cast<KStartupInfoId*>(&id_ret);
        const KStartupInfoData& data_ret = data;
        // Cast returned reference into pointer
        KStartupInfoData* sigval2 = const_cast<KStartupInfoData*>(&data_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KStartupInfo_GotRemoveStartup(KStartupInfo* self, const KStartupInfoId* id, const KStartupInfoData* data) {
    self->gotRemoveStartup(*id, *data);
}

void KStartupInfo_Connect_GotRemoveStartup(KStartupInfo* self, intptr_t slot) {
    void (*slotFunc)(KStartupInfo*, KStartupInfoId*, KStartupInfoData*) = reinterpret_cast<void (*)(KStartupInfo*, KStartupInfoId*, KStartupInfoData*)>(slot);
    KStartupInfo::connect(self, &KStartupInfo::gotRemoveStartup, [self, slotFunc](const KStartupInfoId& id, const KStartupInfoData& data) {
        const KStartupInfoId& id_ret = id;
        // Cast returned reference into pointer
        KStartupInfoId* sigval1 = const_cast<KStartupInfoId*>(&id_ret);
        const KStartupInfoData& data_ret = data;
        // Cast returned reference into pointer
        KStartupInfoData* sigval2 = const_cast<KStartupInfoData*>(&data_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KStartupInfo_CustomEvent(KStartupInfo* self, QEvent* e_P) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->customEvent(e_P);
    }
}

libqt_string KStartupInfo_Tr2(const char* s, const char* c) {
    QString _ret = KStartupInfo::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStartupInfo_Tr3(const char* s, const char* c, int n) {
    QString _ret = KStartupInfo::tr(s, c, static_cast<int>(n));
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
int KStartupInfo_QBaseMetacall(KStartupInfo* self, int param1, int param2, void** param3) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Metacall_IsBase(true);
        return vkstartupinfo->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KStartupInfo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnMetacall(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Metacall_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KStartupInfo_QBaseCustomEvent(KStartupInfo* self, QEvent* e_P) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_CustomEvent_IsBase(true);
        vkstartupinfo->customEvent(e_P);
    } else {
        ((VirtualKStartupInfo*)self)->customEvent(e_P);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnCustomEvent(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_CustomEvent_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStartupInfo_Event(KStartupInfo* self, QEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return vkstartupinfo->event(event);
    } else {
        return self->KStartupInfo::event(event);
    }
}

// Base class handler implementation
bool KStartupInfo_QBaseEvent(KStartupInfo* self, QEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Event_IsBase(true);
        return vkstartupinfo->event(event);
    } else {
        return self->KStartupInfo::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnEvent(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Event_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStartupInfo_EventFilter(KStartupInfo* self, QObject* watched, QEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return vkstartupinfo->eventFilter(watched, event);
    } else {
        return self->KStartupInfo::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KStartupInfo_QBaseEventFilter(KStartupInfo* self, QObject* watched, QEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_EventFilter_IsBase(true);
        return vkstartupinfo->eventFilter(watched, event);
    } else {
        return self->KStartupInfo::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnEventFilter(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_EventFilter_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KStartupInfo_TimerEvent(KStartupInfo* self, QTimerEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->timerEvent(event);
    } else {
        ((VirtualKStartupInfo*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KStartupInfo_QBaseTimerEvent(KStartupInfo* self, QTimerEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_TimerEvent_IsBase(true);
        vkstartupinfo->timerEvent(event);
    } else {
        ((VirtualKStartupInfo*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnTimerEvent(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_TimerEvent_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStartupInfo_ChildEvent(KStartupInfo* self, QChildEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->childEvent(event);
    } else {
        ((VirtualKStartupInfo*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KStartupInfo_QBaseChildEvent(KStartupInfo* self, QChildEvent* event) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_ChildEvent_IsBase(true);
        vkstartupinfo->childEvent(event);
    } else {
        ((VirtualKStartupInfo*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnChildEvent(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_ChildEvent_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStartupInfo_ConnectNotify(KStartupInfo* self, const QMetaMethod* signal) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->connectNotify(*signal);
    } else {
        ((VirtualKStartupInfo*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KStartupInfo_QBaseConnectNotify(KStartupInfo* self, const QMetaMethod* signal) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_ConnectNotify_IsBase(true);
        vkstartupinfo->connectNotify(*signal);
    } else {
        ((VirtualKStartupInfo*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnConnectNotify(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_ConnectNotify_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KStartupInfo_DisconnectNotify(KStartupInfo* self, const QMetaMethod* signal) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->disconnectNotify(*signal);
    } else {
        ((VirtualKStartupInfo*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KStartupInfo_QBaseDisconnectNotify(KStartupInfo* self, const QMetaMethod* signal) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_DisconnectNotify_IsBase(true);
        vkstartupinfo->disconnectNotify(*signal);
    } else {
        ((VirtualKStartupInfo*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnDisconnectNotify(KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = dynamic_cast<VirtualKStartupInfo*>(self);
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_DisconnectNotify_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KStartupInfo_Sender(const KStartupInfo* self) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return vkstartupinfo->sender();
    } else {
        return ((VirtualKStartupInfo*)self)->sender();
    }
}

// Base class handler implementation
QObject* KStartupInfo_QBaseSender(const KStartupInfo* self) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Sender_IsBase(true);
        return vkstartupinfo->sender();
    } else {
        return ((VirtualKStartupInfo*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnSender(const KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Sender_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KStartupInfo_SenderSignalIndex(const KStartupInfo* self) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return vkstartupinfo->senderSignalIndex();
    } else {
        return ((VirtualKStartupInfo*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KStartupInfo_QBaseSenderSignalIndex(const KStartupInfo* self) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_SenderSignalIndex_IsBase(true);
        return vkstartupinfo->senderSignalIndex();
    } else {
        return ((VirtualKStartupInfo*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnSenderSignalIndex(const KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_SenderSignalIndex_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KStartupInfo_Receivers(const KStartupInfo* self, const char* signal) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return vkstartupinfo->receivers(signal);
    } else {
        return ((VirtualKStartupInfo*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KStartupInfo_QBaseReceivers(const KStartupInfo* self, const char* signal) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Receivers_IsBase(true);
        return vkstartupinfo->receivers(signal);
    } else {
        return ((VirtualKStartupInfo*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnReceivers(const KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_Receivers_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStartupInfo_IsSignalConnected(const KStartupInfo* self, const QMetaMethod* signal) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        return vkstartupinfo->isSignalConnected(*signal);
    } else {
        return ((VirtualKStartupInfo*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KStartupInfo_QBaseIsSignalConnected(const KStartupInfo* self, const QMetaMethod* signal) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_IsSignalConnected_IsBase(true);
        return vkstartupinfo->isSignalConnected(*signal);
    } else {
        return ((VirtualKStartupInfo*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStartupInfo_OnIsSignalConnected(const KStartupInfo* self, intptr_t slot) {
    auto* vkstartupinfo = const_cast<VirtualKStartupInfo*>(dynamic_cast<const VirtualKStartupInfo*>(self));
    if (vkstartupinfo && vkstartupinfo->isVirtualKStartupInfo) {
        vkstartupinfo->setKStartupInfo_IsSignalConnected_Callback(reinterpret_cast<VirtualKStartupInfo::KStartupInfo_IsSignalConnected_Callback>(slot));
    }
}

void KStartupInfo_Delete(KStartupInfo* self) {
    delete self;
}

KStartupInfoId* KStartupInfoId_new() {
    return new KStartupInfoId();
}

KStartupInfoId* KStartupInfoId_new2(const KStartupInfoId* data) {
    return new KStartupInfoId(*data);
}

bool KStartupInfoId_OperatorEqual(const KStartupInfoId* self, const KStartupInfoId* id) {
    return (*self == *id);
}

bool KStartupInfoId_OperatorNotEqual(const KStartupInfoId* self, const KStartupInfoId* id) {
    return (*self != *id);
}

bool KStartupInfoId_IsNull(const KStartupInfoId* self) {
    return self->isNull();
}

void KStartupInfoId_InitId(KStartupInfoId* self) {
    self->initId();
}

libqt_string KStartupInfoId_Id(const KStartupInfoId* self) {
    const QByteArray _qb = self->id();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long KStartupInfoId_Timestamp(const KStartupInfoId* self) {
    return self->timestamp();
}

bool KStartupInfoId_SetupStartupEnv(const KStartupInfoId* self) {
    return self->setupStartupEnv();
}

void KStartupInfoId_OperatorAssign(KStartupInfoId* self, const KStartupInfoId* data) {
    self->operator=(*data);
}

bool KStartupInfoId_OperatorLesser(const KStartupInfoId* self, const KStartupInfoId* id) {
    return (*self < *id);
}

void KStartupInfoId_InitId1(KStartupInfoId* self, const libqt_string id) {
    QByteArray id_QByteArray(id.data, id.len);
    self->initId(id_QByteArray);
}

void KStartupInfoId_Delete(KStartupInfoId* self) {
    delete self;
}

KStartupInfoData* KStartupInfoData_new() {
    return new KStartupInfoData();
}

KStartupInfoData* KStartupInfoData_new2(const KStartupInfoData* data) {
    return new KStartupInfoData(*data);
}

void KStartupInfoData_SetBin(KStartupInfoData* self, const libqt_string bin) {
    QString bin_QString = QString::fromUtf8(bin.data, bin.len);
    self->setBin(bin_QString);
}

libqt_string KStartupInfoData_Bin(const KStartupInfoData* self) {
    const QString _ret = self->bin();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_SetName(KStartupInfoData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string KStartupInfoData_FindName(const KStartupInfoData* self) {
    const QString _ret = self->findName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStartupInfoData_Name(const KStartupInfoData* self) {
    const QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_SetDescription(KStartupInfoData* self, const libqt_string descr) {
    QString descr_QString = QString::fromUtf8(descr.data, descr.len);
    self->setDescription(descr_QString);
}

libqt_string KStartupInfoData_FindDescription(const KStartupInfoData* self) {
    const QString _ret = self->findDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStartupInfoData_Description(const KStartupInfoData* self) {
    const QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_SetIcon(KStartupInfoData* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setIcon(icon_QString);
}

libqt_string KStartupInfoData_FindIcon(const KStartupInfoData* self) {
    const QString _ret = self->findIcon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStartupInfoData_Icon(const KStartupInfoData* self) {
    const QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_SetDesktop(KStartupInfoData* self, int desktop) {
    self->setDesktop(static_cast<int>(desktop));
}

int KStartupInfoData_Desktop(const KStartupInfoData* self) {
    return self->desktop();
}

void KStartupInfoData_SetWMClass(KStartupInfoData* self, const libqt_string wmclass) {
    QByteArray wmclass_QByteArray(wmclass.data, wmclass.len);
    self->setWMClass(wmclass_QByteArray);
}

libqt_string KStartupInfoData_FindWMClass(const KStartupInfoData* self) {
    const QByteArray _qb = self->findWMClass();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStartupInfoData_WMClass(const KStartupInfoData* self) {
    QByteArray _qb = self->WMClass();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_AddPid(KStartupInfoData* self, pid_t pid) {
    self->addPid(pid);
}

libqt_list /* of pid_t */ KStartupInfoData_Pids(const KStartupInfoData* self) {
    QList<pid_t> _ret = self->pids();
    // Convert QList<> from C++ memory to manually-managed C memory
    pid_t* _arr = static_cast<pid_t*>(malloc(sizeof(pid_t) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KStartupInfoData_IsPid(const KStartupInfoData* self, pid_t pid) {
    return self->is_pid(pid);
}

void KStartupInfoData_SetHostname(KStartupInfoData* self) {
    self->setHostname();
}

libqt_string KStartupInfoData_Hostname(const KStartupInfoData* self) {
    QByteArray _qb = self->hostname();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_SetSilent(KStartupInfoData* self, int state) {
    self->setSilent(static_cast<KStartupInfoData::TriState>(state));
}

int KStartupInfoData_Silent(const KStartupInfoData* self) {
    return static_cast<int>(self->silent());
}

int KStartupInfoData_Screen(const KStartupInfoData* self) {
    return self->screen();
}

void KStartupInfoData_SetScreen(KStartupInfoData* self, int screen) {
    self->setScreen(static_cast<int>(screen));
}

int KStartupInfoData_Xinerama(const KStartupInfoData* self) {
    return self->xinerama();
}

void KStartupInfoData_SetXinerama(KStartupInfoData* self, int xinerama) {
    self->setXinerama(static_cast<int>(xinerama));
}

libqt_string KStartupInfoData_ApplicationId(const KStartupInfoData* self) {
    QString _ret = self->applicationId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStartupInfoData_SetApplicationId(KStartupInfoData* self, const libqt_string desktop) {
    QString desktop_QString = QString::fromUtf8(desktop.data, desktop.len);
    self->setApplicationId(desktop_QString);
}

void KStartupInfoData_Update(KStartupInfoData* self, const KStartupInfoData* data) {
    self->update(*data);
}

void KStartupInfoData_OperatorAssign(KStartupInfoData* self, const KStartupInfoData* data) {
    self->operator=(*data);
}

void KStartupInfoData_SetHostname1(KStartupInfoData* self, const libqt_string hostname) {
    QByteArray hostname_QByteArray(hostname.data, hostname.len);
    self->setHostname(hostname_QByteArray);
}

void KStartupInfoData_Delete(KStartupInfoData* self) {
    delete self;
}
