#include <KToggleAction>
#include <KToggleFullScreenAction>
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
#include <QWidget>
#include <ktogglefullscreenaction.h>
#include "libktogglefullscreenaction.h"
#include "libktogglefullscreenaction.hxx"

KToggleFullScreenAction* KToggleFullScreenAction_new(QObject* parent) {
    return new VirtualKToggleFullScreenAction(parent);
}

KToggleFullScreenAction* KToggleFullScreenAction_new2(QWidget* window, QObject* parent) {
    return new VirtualKToggleFullScreenAction(window, parent);
}

QMetaObject* KToggleFullScreenAction_MetaObject(const KToggleFullScreenAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToggleFullScreenAction_Metacast(KToggleFullScreenAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToggleFullScreenAction_Metacall(KToggleFullScreenAction* self, int param1, int param2, void** param3) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KToggleFullScreenAction_OnMetacall(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Metacall_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KToggleFullScreenAction_QBaseMetacall(KToggleFullScreenAction* self, int param1, int param2, void** param3) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Metacall_IsBase(true);
        return vktogglefullscreenaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToggleFullScreenAction_Tr(const char* s) {
    QString _ret = KToggleFullScreenAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToggleFullScreenAction_SetWindow(KToggleFullScreenAction* self, QWidget* window) {
    self->setWindow(window);
}

void KToggleFullScreenAction_SetFullScreen(QWidget* window, bool set) {
    KToggleFullScreenAction::setFullScreen(window, set);
}

libqt_string KToggleFullScreenAction_Tr2(const char* s, const char* c) {
    QString _ret = KToggleFullScreenAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToggleFullScreenAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToggleFullScreenAction::tr(s, c, static_cast<int>(n));
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
bool KToggleFullScreenAction_EventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return vktogglefullscreenaction->eventFilter(object, event);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KToggleFullScreenAction_QBaseEventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_EventFilter_IsBase(true);
        return vktogglefullscreenaction->eventFilter(object, event);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnEventFilter(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_EventFilter_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleFullScreenAction_SlotToggled(KToggleFullScreenAction* self, bool checked) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->slotToggled(checked);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->slotToggled(checked);
    }
}

// Base class handler implementation
void KToggleFullScreenAction_QBaseSlotToggled(KToggleFullScreenAction* self, bool checked) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_SlotToggled_IsBase(true);
        vktogglefullscreenaction->slotToggled(checked);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->slotToggled(checked);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnSlotToggled(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_SlotToggled_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleFullScreenAction_Event(KToggleFullScreenAction* self, QEvent* param1) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return vktogglefullscreenaction->event(param1);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KToggleFullScreenAction_QBaseEvent(KToggleFullScreenAction* self, QEvent* param1) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Event_IsBase(true);
        return vktogglefullscreenaction->event(param1);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnEvent(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Event_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleFullScreenAction_TimerEvent(KToggleFullScreenAction* self, QTimerEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->timerEvent(event);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToggleFullScreenAction_QBaseTimerEvent(KToggleFullScreenAction* self, QTimerEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_TimerEvent_IsBase(true);
        vktogglefullscreenaction->timerEvent(event);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnTimerEvent(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_TimerEvent_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleFullScreenAction_ChildEvent(KToggleFullScreenAction* self, QChildEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->childEvent(event);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToggleFullScreenAction_QBaseChildEvent(KToggleFullScreenAction* self, QChildEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_ChildEvent_IsBase(true);
        vktogglefullscreenaction->childEvent(event);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnChildEvent(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_ChildEvent_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleFullScreenAction_CustomEvent(KToggleFullScreenAction* self, QEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->customEvent(event);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToggleFullScreenAction_QBaseCustomEvent(KToggleFullScreenAction* self, QEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_CustomEvent_IsBase(true);
        vktogglefullscreenaction->customEvent(event);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnCustomEvent(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_CustomEvent_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleFullScreenAction_ConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->connectNotify(*signal);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToggleFullScreenAction_QBaseConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_ConnectNotify_IsBase(true);
        vktogglefullscreenaction->connectNotify(*signal);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnConnectNotify(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_ConnectNotify_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleFullScreenAction_DisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToggleFullScreenAction_QBaseDisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_DisconnectNotify_IsBase(true);
        vktogglefullscreenaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToggleFullScreenAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnDisconnectNotify(KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToggleFullScreenAction_Sender(const KToggleFullScreenAction* self) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return vktogglefullscreenaction->sender();
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToggleFullScreenAction_QBaseSender(const KToggleFullScreenAction* self) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Sender_IsBase(true);
        return vktogglefullscreenaction->sender();
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnSender(const KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Sender_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToggleFullScreenAction_SenderSignalIndex(const KToggleFullScreenAction* self) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return vktogglefullscreenaction->senderSignalIndex();
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToggleFullScreenAction_QBaseSenderSignalIndex(const KToggleFullScreenAction* self) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_SenderSignalIndex_IsBase(true);
        return vktogglefullscreenaction->senderSignalIndex();
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnSenderSignalIndex(const KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToggleFullScreenAction_Receivers(const KToggleFullScreenAction* self, const char* signal) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return vktogglefullscreenaction->receivers(signal);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToggleFullScreenAction_QBaseReceivers(const KToggleFullScreenAction* self, const char* signal) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Receivers_IsBase(true);
        return vktogglefullscreenaction->receivers(signal);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnReceivers(const KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_Receivers_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleFullScreenAction_IsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        return vktogglefullscreenaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToggleFullScreenAction_QBaseIsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_IsSignalConnected_IsBase(true);
        return vktogglefullscreenaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToggleFullScreenAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnIsSignalConnected(const KToggleFullScreenAction* self, intptr_t slot) {
    auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self));
    if (vktogglefullscreenaction && vktogglefullscreenaction->isVirtualKToggleFullScreenAction) {
        vktogglefullscreenaction->setKToggleFullScreenAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_IsSignalConnected_Callback>(slot));
    }
}

void KToggleFullScreenAction_Delete(KToggleFullScreenAction* self) {
    delete self;
}
