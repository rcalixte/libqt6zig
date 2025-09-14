#include <KSelectionOwner>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kselectionowner.h>
#include "libkselectionowner.h"
#include "libkselectionowner.hxx"

KSelectionOwner* KSelectionOwner_new(const char* selection) {
    return new VirtualKSelectionOwner(selection);
}

KSelectionOwner* KSelectionOwner_new2(const char* selection, int screen) {
    return new VirtualKSelectionOwner(selection, static_cast<int>(screen));
}

KSelectionOwner* KSelectionOwner_new3(const char* selection, int screen, QObject* parent) {
    return new VirtualKSelectionOwner(selection, static_cast<int>(screen), parent);
}

QMetaObject* KSelectionOwner_MetaObject(const KSelectionOwner* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelectionOwner_Metacast(KSelectionOwner* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelectionOwner_Metacall(KSelectionOwner* self, int param1, int param2, void** param3) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelectionOwner*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSelectionOwner_Tr(const char* s) {
    QString _ret = KSelectionOwner::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSelectionOwner_Claim(KSelectionOwner* self, bool force) {
    self->claim(force);
}

void KSelectionOwner_Release(KSelectionOwner* self) {
    self->release();
}

bool KSelectionOwner_FilterEvent(KSelectionOwner* self, void* ev_P) {
    return self->filterEvent(ev_P);
}

void KSelectionOwner_TimerEvent(KSelectionOwner* self, QTimerEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        self->timerEvent(event);
    } else {
        ((VirtualKSelectionOwner*)self)->timerEvent(event);
    }
}

void KSelectionOwner_LostOwnership(KSelectionOwner* self) {
    self->lostOwnership();
}

void KSelectionOwner_Connect_LostOwnership(KSelectionOwner* self, intptr_t slot) {
    void (*slotFunc)(KSelectionOwner*) = reinterpret_cast<void (*)(KSelectionOwner*)>(slot);
    KSelectionOwner::connect(self, &KSelectionOwner::lostOwnership, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionOwner_ClaimedOwnership(KSelectionOwner* self) {
    self->claimedOwnership();
}

void KSelectionOwner_Connect_ClaimedOwnership(KSelectionOwner* self, intptr_t slot) {
    void (*slotFunc)(KSelectionOwner*) = reinterpret_cast<void (*)(KSelectionOwner*)>(slot);
    KSelectionOwner::connect(self, &KSelectionOwner::claimedOwnership, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionOwner_FailedToClaimOwnership(KSelectionOwner* self) {
    self->failedToClaimOwnership();
}

void KSelectionOwner_Connect_FailedToClaimOwnership(KSelectionOwner* self, intptr_t slot) {
    void (*slotFunc)(KSelectionOwner*) = reinterpret_cast<void (*)(KSelectionOwner*)>(slot);
    KSelectionOwner::connect(self, &KSelectionOwner::failedToClaimOwnership, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSelectionOwner_GetAtoms(KSelectionOwner* self) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->getAtoms();
    }
}

libqt_string KSelectionOwner_Tr2(const char* s, const char* c) {
    QString _ret = KSelectionOwner::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSelectionOwner_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSelectionOwner::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSelectionOwner_Claim2(KSelectionOwner* self, bool force, bool force_kill) {
    self->claim(force, force_kill);
}

// Base class handler implementation
int KSelectionOwner_QBaseMetacall(KSelectionOwner* self, int param1, int param2, void** param3) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Metacall_IsBase(true);
        return vkselectionowner->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSelectionOwner::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnMetacall(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Metacall_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseTimerEvent(KSelectionOwner* self, QTimerEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_TimerEvent_IsBase(true);
        vkselectionowner->timerEvent(event);
    } else {
        self->KSelectionOwner::timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnTimerEvent(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_TimerEvent_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_TimerEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseGetAtoms(KSelectionOwner* self) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_GetAtoms_IsBase(true);
        vkselectionowner->getAtoms();
    } else {
        ((VirtualKSelectionOwner*)self)->getAtoms();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnGetAtoms(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_GetAtoms_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_GetAtoms_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionOwner_Event(KSelectionOwner* self, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return vkselectionowner->event(event);
    } else {
        return self->KSelectionOwner::event(event);
    }
}

// Base class handler implementation
bool KSelectionOwner_QBaseEvent(KSelectionOwner* self, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Event_IsBase(true);
        return vkselectionowner->event(event);
    } else {
        return self->KSelectionOwner::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnEvent(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Event_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionOwner_EventFilter(KSelectionOwner* self, QObject* watched, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return vkselectionowner->eventFilter(watched, event);
    } else {
        return self->KSelectionOwner::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSelectionOwner_QBaseEventFilter(KSelectionOwner* self, QObject* watched, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_EventFilter_IsBase(true);
        return vkselectionowner->eventFilter(watched, event);
    } else {
        return self->KSelectionOwner::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnEventFilter(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_EventFilter_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionOwner_ChildEvent(KSelectionOwner* self, QChildEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->childEvent(event);
    } else {
        ((VirtualKSelectionOwner*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseChildEvent(KSelectionOwner* self, QChildEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_ChildEvent_IsBase(true);
        vkselectionowner->childEvent(event);
    } else {
        ((VirtualKSelectionOwner*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnChildEvent(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_ChildEvent_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionOwner_CustomEvent(KSelectionOwner* self, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->customEvent(event);
    } else {
        ((VirtualKSelectionOwner*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseCustomEvent(KSelectionOwner* self, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_CustomEvent_IsBase(true);
        vkselectionowner->customEvent(event);
    } else {
        ((VirtualKSelectionOwner*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnCustomEvent(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_CustomEvent_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionOwner_ConnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->connectNotify(*signal);
    } else {
        ((VirtualKSelectionOwner*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseConnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_ConnectNotify_IsBase(true);
        vkselectionowner->connectNotify(*signal);
    } else {
        ((VirtualKSelectionOwner*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnConnectNotify(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_ConnectNotify_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionOwner_DisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectionOwner*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseDisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_DisconnectNotify_IsBase(true);
        vkselectionowner->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectionOwner*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnDisconnectNotify(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_DisconnectNotify_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectionOwner_SetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setData(static_cast<uint32_t>(extra1), static_cast<uint32_t>(extra2));
    } else {
        ((VirtualKSelectionOwner*)self)->setData(static_cast<uint32_t>(extra1), static_cast<uint32_t>(extra2));
    }
}

// Base class handler implementation
void KSelectionOwner_QBaseSetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_SetData_IsBase(true);
        vkselectionowner->setData(static_cast<uint32_t>(extra1), static_cast<uint32_t>(extra2));
    } else {
        ((VirtualKSelectionOwner*)self)->setData(static_cast<uint32_t>(extra1), static_cast<uint32_t>(extra2));
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnSetData(KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_SetData_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSelectionOwner_Sender(const KSelectionOwner* self) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return vkselectionowner->sender();
    } else {
        return ((VirtualKSelectionOwner*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSelectionOwner_QBaseSender(const KSelectionOwner* self) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Sender_IsBase(true);
        return vkselectionowner->sender();
    } else {
        return ((VirtualKSelectionOwner*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnSender(const KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Sender_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionOwner_SenderSignalIndex(const KSelectionOwner* self) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return vkselectionowner->senderSignalIndex();
    } else {
        return ((VirtualKSelectionOwner*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSelectionOwner_QBaseSenderSignalIndex(const KSelectionOwner* self) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_SenderSignalIndex_IsBase(true);
        return vkselectionowner->senderSignalIndex();
    } else {
        return ((VirtualKSelectionOwner*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnSenderSignalIndex(const KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectionOwner_Receivers(const KSelectionOwner* self, const char* signal) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return vkselectionowner->receivers(signal);
    } else {
        return ((VirtualKSelectionOwner*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSelectionOwner_QBaseReceivers(const KSelectionOwner* self, const char* signal) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Receivers_IsBase(true);
        return vkselectionowner->receivers(signal);
    } else {
        return ((VirtualKSelectionOwner*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnReceivers(const KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_Receivers_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectionOwner_IsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        return vkselectionowner->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectionOwner*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSelectionOwner_QBaseIsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_IsSignalConnected_IsBase(true);
        return vkselectionowner->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectionOwner*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnIsSignalConnected(const KSelectionOwner* self, intptr_t slot) {
    auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self));
    if (vkselectionowner && vkselectionowner->isVirtualKSelectionOwner) {
        vkselectionowner->setKSelectionOwner_IsSignalConnected_Callback(reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_IsSignalConnected_Callback>(slot));
    }
}

void KSelectionOwner_Delete(KSelectionOwner* self) {
    delete self;
}
