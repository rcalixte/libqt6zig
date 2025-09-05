#include <KToggleAction>
#include <KToggleToolBarAction>
#include <KToolBar>
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
#include <ktoggletoolbaraction.h>
#include "libktoggletoolbaraction.h"
#include "libktoggletoolbaraction.hxx"

KToggleToolBarAction* KToggleToolBarAction_new(KToolBar* toolBar, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToggleToolBarAction(toolBar, text_QString, parent);
}

QMetaObject* KToggleToolBarAction_MetaObject(const KToggleToolBarAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToggleToolBarAction_Metacast(KToggleToolBarAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToggleToolBarAction_Metacall(KToggleToolBarAction* self, int param1, int param2, void** param3) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToggleToolBarAction_Tr(const char* s) {
    QString _ret = KToggleToolBarAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KToolBar* KToggleToolBarAction_ToolBar(KToggleToolBarAction* self) {
    return self->toolBar();
}

bool KToggleToolBarAction_EventFilter(KToggleToolBarAction* self, QObject* watched, QEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return self->eventFilter(watched, event);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->eventFilter(watched, event);
    }
}

libqt_string KToggleToolBarAction_Tr2(const char* s, const char* c) {
    QString _ret = KToggleToolBarAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToggleToolBarAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToggleToolBarAction::tr(s, c, static_cast<int>(n));
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
int KToggleToolBarAction_QBaseMetacall(KToggleToolBarAction* self, int param1, int param2, void** param3) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Metacall_IsBase(true);
        return vktoggletoolbaraction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KToggleToolBarAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnMetacall(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Metacall_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KToggleToolBarAction_QBaseEventFilter(KToggleToolBarAction* self, QObject* watched, QEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_EventFilter_IsBase(true);
        return vktoggletoolbaraction->eventFilter(watched, event);
    } else {
        return self->KToggleToolBarAction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnEventFilter(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_EventFilter_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleToolBarAction_Event(KToggleToolBarAction* self, QEvent* param1) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return vktoggletoolbaraction->event(param1);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KToggleToolBarAction_QBaseEvent(KToggleToolBarAction* self, QEvent* param1) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Event_IsBase(true);
        return vktoggletoolbaraction->event(param1);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnEvent(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Event_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleToolBarAction_TimerEvent(KToggleToolBarAction* self, QTimerEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->timerEvent(event);
    } else {
        ((VirtualKToggleToolBarAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToggleToolBarAction_QBaseTimerEvent(KToggleToolBarAction* self, QTimerEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_TimerEvent_IsBase(true);
        vktoggletoolbaraction->timerEvent(event);
    } else {
        ((VirtualKToggleToolBarAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnTimerEvent(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_TimerEvent_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleToolBarAction_ChildEvent(KToggleToolBarAction* self, QChildEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->childEvent(event);
    } else {
        ((VirtualKToggleToolBarAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToggleToolBarAction_QBaseChildEvent(KToggleToolBarAction* self, QChildEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_ChildEvent_IsBase(true);
        vktoggletoolbaraction->childEvent(event);
    } else {
        ((VirtualKToggleToolBarAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnChildEvent(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_ChildEvent_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleToolBarAction_CustomEvent(KToggleToolBarAction* self, QEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->customEvent(event);
    } else {
        ((VirtualKToggleToolBarAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToggleToolBarAction_QBaseCustomEvent(KToggleToolBarAction* self, QEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_CustomEvent_IsBase(true);
        vktoggletoolbaraction->customEvent(event);
    } else {
        ((VirtualKToggleToolBarAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnCustomEvent(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_CustomEvent_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleToolBarAction_ConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->connectNotify(*signal);
    } else {
        ((VirtualKToggleToolBarAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToggleToolBarAction_QBaseConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_ConnectNotify_IsBase(true);
        vktoggletoolbaraction->connectNotify(*signal);
    } else {
        ((VirtualKToggleToolBarAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnConnectNotify(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_ConnectNotify_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToggleToolBarAction_DisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->disconnectNotify(*signal);
    } else {
        ((VirtualKToggleToolBarAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToggleToolBarAction_QBaseDisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_DisconnectNotify_IsBase(true);
        vktoggletoolbaraction->disconnectNotify(*signal);
    } else {
        ((VirtualKToggleToolBarAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnDisconnectNotify(KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToggleToolBarAction_Sender(const KToggleToolBarAction* self) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return vktoggletoolbaraction->sender();
    } else {
        return ((VirtualKToggleToolBarAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToggleToolBarAction_QBaseSender(const KToggleToolBarAction* self) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Sender_IsBase(true);
        return vktoggletoolbaraction->sender();
    } else {
        return ((VirtualKToggleToolBarAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnSender(const KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Sender_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToggleToolBarAction_SenderSignalIndex(const KToggleToolBarAction* self) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return vktoggletoolbaraction->senderSignalIndex();
    } else {
        return ((VirtualKToggleToolBarAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToggleToolBarAction_QBaseSenderSignalIndex(const KToggleToolBarAction* self) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_SenderSignalIndex_IsBase(true);
        return vktoggletoolbaraction->senderSignalIndex();
    } else {
        return ((VirtualKToggleToolBarAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnSenderSignalIndex(const KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToggleToolBarAction_Receivers(const KToggleToolBarAction* self, const char* signal) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return vktoggletoolbaraction->receivers(signal);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToggleToolBarAction_QBaseReceivers(const KToggleToolBarAction* self, const char* signal) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Receivers_IsBase(true);
        return vktoggletoolbaraction->receivers(signal);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnReceivers(const KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_Receivers_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToggleToolBarAction_IsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        return vktoggletoolbaraction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToggleToolBarAction_QBaseIsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_IsSignalConnected_IsBase(true);
        return vktoggletoolbaraction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToggleToolBarAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnIsSignalConnected(const KToggleToolBarAction* self, intptr_t slot) {
    auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self));
    if (vktoggletoolbaraction && vktoggletoolbaraction->isVirtualKToggleToolBarAction) {
        vktoggletoolbaraction->setKToggleToolBarAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_IsSignalConnected_Callback>(slot));
    }
}

void KToggleToolBarAction_Delete(KToggleToolBarAction* self) {
    delete self;
}
