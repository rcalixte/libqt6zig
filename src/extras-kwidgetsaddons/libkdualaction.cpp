#include <KDualAction>
#include <KGuiItem>
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
#include <kdualaction.h>
#include "libkdualaction.h"
#include "libkdualaction.hxx"

KDualAction* KDualAction_new(QObject* parent) {
    return new VirtualKDualAction(parent);
}

KDualAction* KDualAction_new2(const libqt_string inactiveText, const libqt_string activeText, QObject* parent) {
    QString inactiveText_QString = QString::fromUtf8(inactiveText.data, inactiveText.len);
    QString activeText_QString = QString::fromUtf8(activeText.data, activeText.len);
    return new VirtualKDualAction(inactiveText_QString, activeText_QString, parent);
}

QMetaObject* KDualAction_MetaObject(const KDualAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDualAction_Metacast(KDualAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDualAction_Metacall(KDualAction* self, int param1, int param2, void** param3) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDualAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDualAction_Tr(const char* s) {
    QString _ret = KDualAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDualAction_SetActiveGuiItem(KDualAction* self, const KGuiItem* activeGuiItem) {
    self->setActiveGuiItem(*activeGuiItem);
}

KGuiItem* KDualAction_ActiveGuiItem(const KDualAction* self) {
    return new KGuiItem(self->activeGuiItem());
}

void KDualAction_SetInactiveGuiItem(KDualAction* self, const KGuiItem* inactiveGuiItem) {
    self->setInactiveGuiItem(*inactiveGuiItem);
}

KGuiItem* KDualAction_InactiveGuiItem(const KDualAction* self) {
    return new KGuiItem(self->inactiveGuiItem());
}

void KDualAction_SetActiveIcon(KDualAction* self, const QIcon* activeIcon) {
    self->setActiveIcon(*activeIcon);
}

QIcon* KDualAction_ActiveIcon(const KDualAction* self) {
    return new QIcon(self->activeIcon());
}

void KDualAction_SetInactiveIcon(KDualAction* self, const QIcon* inactiveIcon) {
    self->setInactiveIcon(*inactiveIcon);
}

QIcon* KDualAction_InactiveIcon(const KDualAction* self) {
    return new QIcon(self->inactiveIcon());
}

void KDualAction_SetActiveText(KDualAction* self, const libqt_string activeText) {
    QString activeText_QString = QString::fromUtf8(activeText.data, activeText.len);
    self->setActiveText(activeText_QString);
}

libqt_string KDualAction_ActiveText(const KDualAction* self) {
    QString _ret = self->activeText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDualAction_SetInactiveText(KDualAction* self, const libqt_string inactiveText) {
    QString inactiveText_QString = QString::fromUtf8(inactiveText.data, inactiveText.len);
    self->setInactiveText(inactiveText_QString);
}

libqt_string KDualAction_InactiveText(const KDualAction* self) {
    QString _ret = self->inactiveText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDualAction_SetActiveToolTip(KDualAction* self, const libqt_string activeToolTip) {
    QString activeToolTip_QString = QString::fromUtf8(activeToolTip.data, activeToolTip.len);
    self->setActiveToolTip(activeToolTip_QString);
}

libqt_string KDualAction_ActiveToolTip(const KDualAction* self) {
    QString _ret = self->activeToolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDualAction_SetInactiveToolTip(KDualAction* self, const libqt_string inactiveToolTip) {
    QString inactiveToolTip_QString = QString::fromUtf8(inactiveToolTip.data, inactiveToolTip.len);
    self->setInactiveToolTip(inactiveToolTip_QString);
}

libqt_string KDualAction_InactiveToolTip(const KDualAction* self) {
    QString _ret = self->inactiveToolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDualAction_SetIconForStates(KDualAction* self, const QIcon* icon) {
    self->setIconForStates(*icon);
}

bool KDualAction_IsActive(const KDualAction* self) {
    return self->isActive();
}

void KDualAction_SetAutoToggle(KDualAction* self, bool autoToggle) {
    self->setAutoToggle(autoToggle);
}

bool KDualAction_AutoToggle(const KDualAction* self) {
    return self->autoToggle();
}

void KDualAction_SetActive(KDualAction* self, bool state) {
    self->setActive(state);
}

void KDualAction_ActiveChanged(KDualAction* self, bool param1) {
    self->activeChanged(param1);
}

void KDualAction_Connect_ActiveChanged(KDualAction* self, intptr_t slot) {
    void (*slotFunc)(KDualAction*, bool) = reinterpret_cast<void (*)(KDualAction*, bool)>(slot);
    KDualAction::connect(self, &KDualAction::activeChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void KDualAction_ActiveChangedByUser(KDualAction* self, bool param1) {
    self->activeChangedByUser(param1);
}

void KDualAction_Connect_ActiveChangedByUser(KDualAction* self, intptr_t slot) {
    void (*slotFunc)(KDualAction*, bool) = reinterpret_cast<void (*)(KDualAction*, bool)>(slot);
    KDualAction::connect(self, &KDualAction::activeChangedByUser, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string KDualAction_Tr2(const char* s, const char* c) {
    QString _ret = KDualAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDualAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDualAction::tr(s, c, static_cast<int>(n));
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
int KDualAction_QBaseMetacall(KDualAction* self, int param1, int param2, void** param3) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Metacall_IsBase(true);
        return vkdualaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDualAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnMetacall(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Metacall_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDualAction_Event(KDualAction* self, QEvent* param1) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return vkdualaction->event(param1);
    } else {
        return ((VirtualKDualAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KDualAction_QBaseEvent(KDualAction* self, QEvent* param1) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Event_IsBase(true);
        return vkdualaction->event(param1);
    } else {
        return ((VirtualKDualAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnEvent(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Event_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDualAction_EventFilter(KDualAction* self, QObject* watched, QEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return vkdualaction->eventFilter(watched, event);
    } else {
        return self->KDualAction::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDualAction_QBaseEventFilter(KDualAction* self, QObject* watched, QEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_EventFilter_IsBase(true);
        return vkdualaction->eventFilter(watched, event);
    } else {
        return self->KDualAction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnEventFilter(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_EventFilter_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDualAction_TimerEvent(KDualAction* self, QTimerEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->timerEvent(event);
    } else {
        ((VirtualKDualAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDualAction_QBaseTimerEvent(KDualAction* self, QTimerEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_TimerEvent_IsBase(true);
        vkdualaction->timerEvent(event);
    } else {
        ((VirtualKDualAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnTimerEvent(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_TimerEvent_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDualAction_ChildEvent(KDualAction* self, QChildEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->childEvent(event);
    } else {
        ((VirtualKDualAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDualAction_QBaseChildEvent(KDualAction* self, QChildEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_ChildEvent_IsBase(true);
        vkdualaction->childEvent(event);
    } else {
        ((VirtualKDualAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnChildEvent(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_ChildEvent_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDualAction_CustomEvent(KDualAction* self, QEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->customEvent(event);
    } else {
        ((VirtualKDualAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDualAction_QBaseCustomEvent(KDualAction* self, QEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_CustomEvent_IsBase(true);
        vkdualaction->customEvent(event);
    } else {
        ((VirtualKDualAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnCustomEvent(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_CustomEvent_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDualAction_ConnectNotify(KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->connectNotify(*signal);
    } else {
        ((VirtualKDualAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDualAction_QBaseConnectNotify(KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_ConnectNotify_IsBase(true);
        vkdualaction->connectNotify(*signal);
    } else {
        ((VirtualKDualAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnConnectNotify(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_ConnectNotify_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDualAction_DisconnectNotify(KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->disconnectNotify(*signal);
    } else {
        ((VirtualKDualAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDualAction_QBaseDisconnectNotify(KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_DisconnectNotify_IsBase(true);
        vkdualaction->disconnectNotify(*signal);
    } else {
        ((VirtualKDualAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnDisconnectNotify(KDualAction* self, intptr_t slot) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDualAction_Sender(const KDualAction* self) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return vkdualaction->sender();
    } else {
        return ((VirtualKDualAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDualAction_QBaseSender(const KDualAction* self) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Sender_IsBase(true);
        return vkdualaction->sender();
    } else {
        return ((VirtualKDualAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnSender(const KDualAction* self, intptr_t slot) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Sender_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDualAction_SenderSignalIndex(const KDualAction* self) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return vkdualaction->senderSignalIndex();
    } else {
        return ((VirtualKDualAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDualAction_QBaseSenderSignalIndex(const KDualAction* self) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_SenderSignalIndex_IsBase(true);
        return vkdualaction->senderSignalIndex();
    } else {
        return ((VirtualKDualAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnSenderSignalIndex(const KDualAction* self, intptr_t slot) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDualAction_Receivers(const KDualAction* self, const char* signal) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return vkdualaction->receivers(signal);
    } else {
        return ((VirtualKDualAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDualAction_QBaseReceivers(const KDualAction* self, const char* signal) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Receivers_IsBase(true);
        return vkdualaction->receivers(signal);
    } else {
        return ((VirtualKDualAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnReceivers(const KDualAction* self, intptr_t slot) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_Receivers_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDualAction_IsSignalConnected(const KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        return vkdualaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKDualAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDualAction_QBaseIsSignalConnected(const KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_IsSignalConnected_IsBase(true);
        return vkdualaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKDualAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnIsSignalConnected(const KDualAction* self, intptr_t slot) {
    auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self));
    if (vkdualaction && vkdualaction->isVirtualKDualAction) {
        vkdualaction->setKDualAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKDualAction::KDualAction_IsSignalConnected_Callback>(slot));
    }
}

void KDualAction_Delete(KDualAction* self) {
    delete self;
}
