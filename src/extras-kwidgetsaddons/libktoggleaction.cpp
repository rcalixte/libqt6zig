#include <KGuiItem>
#include <KToggleAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <ktoggleaction.h>
#include "libktoggleaction.h"
#include "libktoggleaction.hxx"

KToggleAction* KToggleAction_new(QObject* parent) {
    return new VirtualKToggleAction(parent);
}

KToggleAction* KToggleAction_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToggleAction(text_QString, parent);
}

KToggleAction* KToggleAction_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToggleAction(*icon, text_QString, parent);
}

QMetaObject* KToggleAction_MetaObject(const KToggleAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToggleAction_Metacast(KToggleAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToggleAction_Metacall(KToggleAction* self, int param1, int param2, void** param3) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToggleAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KToggleAction_OnMetacall(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Metacall_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KToggleAction_QBaseMetacall(KToggleAction* self, int param1, int param2, void** param3) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Metacall_IsBase(true);
        return vktoggleaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToggleAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToggleAction_Tr(const char* s) {
    QString _ret = KToggleAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToggleAction_SetCheckedState(KToggleAction* self, const KGuiItem* checkedItem) {
    self->setCheckedState(*checkedItem);
}

libqt_string KToggleAction_Tr2(const char* s, const char* c) {
    QString _ret = KToggleAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToggleAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToggleAction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void KToggleAction_SlotToggled(KToggleAction* self, bool checked) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->slotToggled(checked);
    } else {
        ((VirtualKToggleAction*)self)->slotToggled(checked);
    }
}

// Base class handler implementation
void KToggleAction_QBaseSlotToggled(KToggleAction* self, bool checked) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_SlotToggled_IsBase(true);
        vktoggleaction->slotToggled(checked);
    } else {
        ((VirtualKToggleAction*)self)->slotToggled(checked);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnSlotToggled(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_SlotToggled_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleAction_Event(KToggleAction* self, QEvent* param1) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return vktoggleaction->event(param1);
    } else {
        return ((VirtualKToggleAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KToggleAction_QBaseEvent(KToggleAction* self, QEvent* param1) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Event_IsBase(true);
        return vktoggleaction->event(param1);
    } else {
        return ((VirtualKToggleAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnEvent(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Event_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleAction_EventFilter(KToggleAction* self, QObject* watched, QEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return vktoggleaction->eventFilter(watched, event);
    } else {
        return self->KToggleAction::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KToggleAction_QBaseEventFilter(KToggleAction* self, QObject* watched, QEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_EventFilter_IsBase(true);
        return vktoggleaction->eventFilter(watched, event);
    } else {
        return self->KToggleAction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnEventFilter(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_EventFilter_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleAction_TimerEvent(KToggleAction* self, QTimerEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->timerEvent(event);
    } else {
        ((VirtualKToggleAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToggleAction_QBaseTimerEvent(KToggleAction* self, QTimerEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_TimerEvent_IsBase(true);
        vktoggleaction->timerEvent(event);
    } else {
        ((VirtualKToggleAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnTimerEvent(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_TimerEvent_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleAction_ChildEvent(KToggleAction* self, QChildEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->childEvent(event);
    } else {
        ((VirtualKToggleAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToggleAction_QBaseChildEvent(KToggleAction* self, QChildEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_ChildEvent_IsBase(true);
        vktoggleaction->childEvent(event);
    } else {
        ((VirtualKToggleAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnChildEvent(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_ChildEvent_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleAction_CustomEvent(KToggleAction* self, QEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->customEvent(event);
    } else {
        ((VirtualKToggleAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToggleAction_QBaseCustomEvent(KToggleAction* self, QEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_CustomEvent_IsBase(true);
        vktoggleaction->customEvent(event);
    } else {
        ((VirtualKToggleAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnCustomEvent(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_CustomEvent_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleAction_ConnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->connectNotify(*signal);
    } else {
        ((VirtualKToggleAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToggleAction_QBaseConnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_ConnectNotify_IsBase(true);
        vktoggleaction->connectNotify(*signal);
    } else {
        ((VirtualKToggleAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnConnectNotify(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_ConnectNotify_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleAction_DisconnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToggleAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToggleAction_QBaseDisconnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_DisconnectNotify_IsBase(true);
        vktoggleaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToggleAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnDisconnectNotify(KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToggleAction_Sender(const KToggleAction* self) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return vktoggleaction->sender();
    } else {
        return ((VirtualKToggleAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToggleAction_QBaseSender(const KToggleAction* self) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Sender_IsBase(true);
        return vktoggleaction->sender();
    } else {
        return ((VirtualKToggleAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnSender(const KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Sender_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToggleAction_SenderSignalIndex(const KToggleAction* self) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return vktoggleaction->senderSignalIndex();
    } else {
        return ((VirtualKToggleAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToggleAction_QBaseSenderSignalIndex(const KToggleAction* self) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_SenderSignalIndex_IsBase(true);
        return vktoggleaction->senderSignalIndex();
    } else {
        return ((VirtualKToggleAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnSenderSignalIndex(const KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToggleAction_Receivers(const KToggleAction* self, const char* signal) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return vktoggleaction->receivers(signal);
    } else {
        return ((VirtualKToggleAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToggleAction_QBaseReceivers(const KToggleAction* self, const char* signal) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Receivers_IsBase(true);
        return vktoggleaction->receivers(signal);
    } else {
        return ((VirtualKToggleAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnReceivers(const KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_Receivers_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleAction_IsSignalConnected(const KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        return vktoggleaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToggleAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToggleAction_QBaseIsSignalConnected(const KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_IsSignalConnected_IsBase(true);
        return vktoggleaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToggleAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnIsSignalConnected(const KToggleAction* self, intptr_t slot) {
    auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self));
    if (vktoggleaction && vktoggleaction->isVirtualKToggleAction) {
        vktoggleaction->setKToggleAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKToggleAction::KToggleAction_IsSignalConnected_Callback>(slot));
    }
}

void KToggleAction_Delete(KToggleAction* self) {
    delete self;
}
