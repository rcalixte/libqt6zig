#include <KSelectionOwner>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kselectionowner.h>
#include "libkselectionowner.h"
#include "libkselectionowner.hxx"

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new(uint32_t selection) {
    return new VirtualKSelectionOwner(selection);
}
#endif

KSelectionOwner* KSelectionOwner_new2(const char* selection) {
    return new VirtualKSelectionOwner(selection);
}

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new3(uint32_t selection, xcb_connection_t* c, uint32_t root) {
    return new VirtualKSelectionOwner(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new4(const char* selection, xcb_connection_t* c, uint32_t root) {
    return new VirtualKSelectionOwner(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new5(uint32_t selection, int screen) {
    return new VirtualKSelectionOwner(selection, static_cast<int>(screen));
}
#endif

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new6(uint32_t selection, int screen, QObject* parent) {
    return new VirtualKSelectionOwner(selection, static_cast<int>(screen), parent);
}
#endif

KSelectionOwner* KSelectionOwner_new7(const char* selection, int screen) {
    return new VirtualKSelectionOwner(selection, static_cast<int>(screen));
}

KSelectionOwner* KSelectionOwner_new8(const char* selection, int screen, QObject* parent) {
    return new VirtualKSelectionOwner(selection, static_cast<int>(screen), parent);
}

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new9(uint32_t selection, xcb_connection_t* c, uint32_t root, QObject* parent) {
    return new VirtualKSelectionOwner(selection, c, root, parent);
}
#endif

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new10(const char* selection, xcb_connection_t* c, uint32_t root, QObject* parent) {
    return new VirtualKSelectionOwner(selection, c, root, parent);
}
#endif

QMetaObject* KSelectionOwner_MetaObject(const KSelectionOwner* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelectionOwner_Metacast(KSelectionOwner* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelectionOwner_Metacall(KSelectionOwner* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSelectionOwner_Tr(const char* s) {
    auto _ret = KSelectionOwner::tr(s);
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

#ifdef __linux__
uint32_t KSelectionOwner_OwnerWindow(const KSelectionOwner* self) {
    return self->ownerWindow();
}
#endif

bool KSelectionOwner_FilterEvent(KSelectionOwner* self, void* ev_P) {
    return self->filterEvent(ev_P);
}

void KSelectionOwner_TimerEvent(KSelectionOwner* self, QTimerEvent* event) {
    self->timerEvent(event);
}

void KSelectionOwner_LostOwnership(KSelectionOwner* self) {
    self->lostOwnership();
}

void KSelectionOwner_Connect_LostOwnership(KSelectionOwner* self, intptr_t slot) {
    void (*slotFunc)(KSelectionOwner*) = reinterpret_cast<void (*)(KSelectionOwner*)>(slot);
    KSelectionOwner::connect(self,
                             static_cast<void (KSelectionOwner::*)()>(&KSelectionOwner::lostOwnership),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void KSelectionOwner_ClaimedOwnership(KSelectionOwner* self) {
    self->claimedOwnership();
}

void KSelectionOwner_Connect_ClaimedOwnership(KSelectionOwner* self, intptr_t slot) {
    void (*slotFunc)(KSelectionOwner*) = reinterpret_cast<void (*)(KSelectionOwner*)>(slot);
    KSelectionOwner::connect(self,
                             static_cast<void (KSelectionOwner::*)()>(&KSelectionOwner::claimedOwnership),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void KSelectionOwner_FailedToClaimOwnership(KSelectionOwner* self) {
    self->failedToClaimOwnership();
}

void KSelectionOwner_Connect_FailedToClaimOwnership(KSelectionOwner* self, intptr_t slot) {
    void (*slotFunc)(KSelectionOwner*) = reinterpret_cast<void (*)(KSelectionOwner*)>(slot);
    KSelectionOwner::connect(self,
                             static_cast<void (KSelectionOwner::*)()>(&KSelectionOwner::failedToClaimOwnership),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

#ifdef __linux__
bool KSelectionOwner_GenericReply(KSelectionOwner* self, uint32_t target, uint32_t property, uint32_t requestor) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        return vkselectionowner->genericReply(target, property, requestor);
    }
    qFatal("Error: Protected method KSelectionOwner::genericReply called without a directly constructed type");
}
#endif

#ifdef __linux__
void KSelectionOwner_ReplyTargets(KSelectionOwner* self, uint32_t property, uint32_t requestor) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        vkselectionowner->replyTargets(property, requestor);
    }
}
#endif

void KSelectionOwner_GetAtoms(KSelectionOwner* self) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        vkselectionowner->getAtoms();
    }
}

libqt_string KSelectionOwner_Tr2(const char* s, const char* c) {
    auto _ret = KSelectionOwner::tr(s, c);
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
    auto _ret = KSelectionOwner::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSelectionOwner_SuperMetaObject(const KSelectionOwner* self) {
    return (QMetaObject*)self->KSelectionOwner::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnMetaObject(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self)))
        vkselectionowner->kselectionowner_metaobject_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSelectionOwner_SuperMetacast(KSelectionOwner* self, const char* param1) {
    return self->KSelectionOwner::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnMetacast(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_metacast_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSelectionOwner_SuperMetacall(KSelectionOwner* self, int param1, int param2, void** param3) {
    return self->KSelectionOwner::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnMetacall(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_metacall_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Metacall_Callback>(slot);
}

// Base class handler implementation
void KSelectionOwner_SuperTimerEvent(KSelectionOwner* self, QTimerEvent* event) {
    self->KSelectionOwner::timerEvent(event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnTimerEvent(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_timerevent_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_TimerEvent_Callback>(slot);
}

// Base class handler implementation
bool KSelectionOwner_SuperGenericReply(KSelectionOwner* self, uint32_t target, uint32_t property, uint32_t requestor) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        return vkselectionowner->KSelectionOwner::genericReply(target, property, requestor);
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::genericReply called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnGenericReply(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_genericreply_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_GenericReply_Callback>(slot);
}

// Base class handler implementation
void KSelectionOwner_SuperReplyTargets(KSelectionOwner* self, uint32_t property, uint32_t requestor) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->KSelectionOwner::replyTargets(property, requestor);
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::replyTargets called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnReplyTargets(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_replytargets_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_ReplyTargets_Callback>(slot);
}

// Base class handler implementation
void KSelectionOwner_SuperGetAtoms(KSelectionOwner* self) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->KSelectionOwner::getAtoms();
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::getAtoms called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnGetAtoms(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_getatoms_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_GetAtoms_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionOwner_Event(KSelectionOwner* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSelectionOwner_SuperEvent(KSelectionOwner* self, QEvent* event) {
    return self->KSelectionOwner::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnEvent(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_event_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionOwner_EventFilter(KSelectionOwner* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSelectionOwner_SuperEventFilter(KSelectionOwner* self, QObject* watched, QEvent* event) {
    return self->KSelectionOwner::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnEventFilter(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_eventfilter_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSelectionOwner_ChildEvent(KSelectionOwner* self, QChildEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        vkselectionowner->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionOwner::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionOwner_SuperChildEvent(KSelectionOwner* self, QChildEvent* event) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->KSelectionOwner::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnChildEvent(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_childevent_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionOwner_CustomEvent(KSelectionOwner* self, QEvent* event) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        vkselectionowner->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionOwner::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionOwner_SuperCustomEvent(KSelectionOwner* self, QEvent* event) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->KSelectionOwner::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnCustomEvent(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_customevent_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionOwner_ConnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        vkselectionowner->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectionOwner::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionOwner_SuperConnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->KSelectionOwner::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnConnectNotify(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_connectnotify_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSelectionOwner_DisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self);
    if (vkselectionowner) {
        vkselectionowner->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectionOwner::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionOwner_SuperDisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->KSelectionOwner::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectionOwner::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionOwner_OnDisconnectNotify(KSelectionOwner* self, intptr_t slot) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self))
        vkselectionowner->kselectionowner_disconnectnotify_callback = reinterpret_cast<VirtualKSelectionOwner::KSelectionOwner_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSelectionOwner_SetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2) {
    if (auto* vkselectionowner = dynamic_cast<VirtualKSelectionOwner*>(self)) {
        vkselectionowner->VirtualKSelectionOwner::setData(static_cast<uint32_t>(extra1), static_cast<uint32_t>(extra2));
    } else
        qFatal("Error: Protected method KSelectionOwner::setData called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSelectionOwner_Sender(const KSelectionOwner* self) {
    if (auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self))) {
        return vkselectionowner->VirtualKSelectionOwner::sender();
    } else
        qFatal("Error: Protected method KSelectionOwner::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectionOwner_SenderSignalIndex(const KSelectionOwner* self) {
    if (auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self))) {
        return vkselectionowner->VirtualKSelectionOwner::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSelectionOwner::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectionOwner_Receivers(const KSelectionOwner* self, const char* signal) {
    if (auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self))) {
        return vkselectionowner->VirtualKSelectionOwner::receivers(signal);
    } else
        qFatal("Error: Protected method KSelectionOwner::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectionOwner_IsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal) {
    if (auto* vkselectionowner = const_cast<VirtualKSelectionOwner*>(dynamic_cast<const VirtualKSelectionOwner*>(self))) {
        return vkselectionowner->VirtualKSelectionOwner::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSelectionOwner::isSignalConnected called without a directly constructed type");
}

void KSelectionOwner_Delete(KSelectionOwner* self) {
    delete self;
}
