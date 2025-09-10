#include <KBookmark>
#include <KBookmarkAction>
#include <KBookmarkActionInterface>
#include <KBookmarkOwner>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kbookmarkaction.h>
#include "libkbookmarkaction.h"
#include "libkbookmarkaction.hxx"

KBookmarkAction* KBookmarkAction_new(const KBookmark* bk, KBookmarkOwner* owner, QObject* parent) {
    return new VirtualKBookmarkAction(*bk, owner, parent);
}

QMetaObject* KBookmarkAction_MetaObject(const KBookmarkAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkAction_Metacast(KBookmarkAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkAction_Metacall(KBookmarkAction* self, int param1, int param2, void** param3) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBookmarkAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBookmarkAction_Tr(const char* s) {
    QString _ret = KBookmarkAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmarkAction_SlotSelected(KBookmarkAction* self, int mb, int km) {
    self->slotSelected(static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
}

libqt_string KBookmarkAction_Tr2(const char* s, const char* c) {
    QString _ret = KBookmarkAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KBookmarkAction::tr(s, c, static_cast<int>(n));
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
int KBookmarkAction_QBaseMetacall(KBookmarkAction* self, int param1, int param2, void** param3) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Metacall_IsBase(true);
        return vkbookmarkaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBookmarkAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnMetacall(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Metacall_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkAction_Event(KBookmarkAction* self, QEvent* param1) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return vkbookmarkaction->event(param1);
    } else {
        return ((VirtualKBookmarkAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KBookmarkAction_QBaseEvent(KBookmarkAction* self, QEvent* param1) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Event_IsBase(true);
        return vkbookmarkaction->event(param1);
    } else {
        return ((VirtualKBookmarkAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnEvent(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Event_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkAction_EventFilter(KBookmarkAction* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return vkbookmarkaction->eventFilter(watched, event);
    } else {
        return self->KBookmarkAction::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KBookmarkAction_QBaseEventFilter(KBookmarkAction* self, QObject* watched, QEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_EventFilter_IsBase(true);
        return vkbookmarkaction->eventFilter(watched, event);
    } else {
        return self->KBookmarkAction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnEventFilter(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_EventFilter_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkAction_TimerEvent(KBookmarkAction* self, QTimerEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->timerEvent(event);
    } else {
        ((VirtualKBookmarkAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBookmarkAction_QBaseTimerEvent(KBookmarkAction* self, QTimerEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_TimerEvent_IsBase(true);
        vkbookmarkaction->timerEvent(event);
    } else {
        ((VirtualKBookmarkAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnTimerEvent(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_TimerEvent_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkAction_ChildEvent(KBookmarkAction* self, QChildEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->childEvent(event);
    } else {
        ((VirtualKBookmarkAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBookmarkAction_QBaseChildEvent(KBookmarkAction* self, QChildEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_ChildEvent_IsBase(true);
        vkbookmarkaction->childEvent(event);
    } else {
        ((VirtualKBookmarkAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnChildEvent(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_ChildEvent_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkAction_CustomEvent(KBookmarkAction* self, QEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->customEvent(event);
    } else {
        ((VirtualKBookmarkAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBookmarkAction_QBaseCustomEvent(KBookmarkAction* self, QEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_CustomEvent_IsBase(true);
        vkbookmarkaction->customEvent(event);
    } else {
        ((VirtualKBookmarkAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnCustomEvent(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_CustomEvent_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkAction_ConnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkAction_QBaseConnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_ConnectNotify_IsBase(true);
        vkbookmarkaction->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnConnectNotify(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_ConnectNotify_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkAction_DisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkAction_QBaseDisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_DisconnectNotify_IsBase(true);
        vkbookmarkaction->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnDisconnectNotify(KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBookmarkAction_Sender(const KBookmarkAction* self) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return vkbookmarkaction->sender();
    } else {
        return ((VirtualKBookmarkAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBookmarkAction_QBaseSender(const KBookmarkAction* self) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Sender_IsBase(true);
        return vkbookmarkaction->sender();
    } else {
        return ((VirtualKBookmarkAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnSender(const KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Sender_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkAction_SenderSignalIndex(const KBookmarkAction* self) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return vkbookmarkaction->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBookmarkAction_QBaseSenderSignalIndex(const KBookmarkAction* self) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_SenderSignalIndex_IsBase(true);
        return vkbookmarkaction->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnSenderSignalIndex(const KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkAction_Receivers(const KBookmarkAction* self, const char* signal) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return vkbookmarkaction->receivers(signal);
    } else {
        return ((VirtualKBookmarkAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBookmarkAction_QBaseReceivers(const KBookmarkAction* self, const char* signal) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Receivers_IsBase(true);
        return vkbookmarkaction->receivers(signal);
    } else {
        return ((VirtualKBookmarkAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnReceivers(const KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_Receivers_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkAction_IsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        return vkbookmarkaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBookmarkAction_QBaseIsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_IsSignalConnected_IsBase(true);
        return vkbookmarkaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnIsSignalConnected(const KBookmarkAction* self, intptr_t slot) {
    auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self));
    if (vkbookmarkaction && vkbookmarkaction->isVirtualKBookmarkAction) {
        vkbookmarkaction->setKBookmarkAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_IsSignalConnected_Callback>(slot));
    }
}

void KBookmarkAction_Delete(KBookmarkAction* self) {
    delete self;
}
