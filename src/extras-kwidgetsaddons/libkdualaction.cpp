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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDualAction_Tr(const char* s) {
    auto _ret = KDualAction::tr(s);
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
    auto _ret = self->activeText();
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
    auto _ret = self->inactiveText();
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
    auto _ret = self->activeToolTip();
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
    auto _ret = self->inactiveToolTip();
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
    KDualAction::connect(self,
                         static_cast<void (KDualAction::*)(bool)>(&KDualAction::activeChanged),
                         [self, slotFunc](bool param1) {
                             bool sigval1 = param1;
                             slotFunc(self, sigval1);
                         });
}

void KDualAction_ActiveChangedByUser(KDualAction* self, bool param1) {
    self->activeChangedByUser(param1);
}

void KDualAction_Connect_ActiveChangedByUser(KDualAction* self, intptr_t slot) {
    void (*slotFunc)(KDualAction*, bool) = reinterpret_cast<void (*)(KDualAction*, bool)>(slot);
    KDualAction::connect(self,
                         static_cast<void (KDualAction::*)(bool)>(&KDualAction::activeChangedByUser),
                         [self, slotFunc](bool param1) {
                             bool sigval1 = param1;
                             slotFunc(self, sigval1);
                         });
}

libqt_string KDualAction_Tr2(const char* s, const char* c) {
    auto _ret = KDualAction::tr(s, c);
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
    auto _ret = KDualAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDualAction_SuperMetaObject(const KDualAction* self) {
    return (QMetaObject*)self->KDualAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnMetaObject(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self)))
        vkdualaction->kdualaction_metaobject_callback = reinterpret_cast<VirtualKDualAction::KDualAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDualAction_SuperMetacast(KDualAction* self, const char* param1) {
    return self->KDualAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnMetacast(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_metacast_callback = reinterpret_cast<VirtualKDualAction::KDualAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDualAction_SuperMetacall(KDualAction* self, int param1, int param2, void** param3) {
    return self->KDualAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnMetacall(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_metacall_callback = reinterpret_cast<VirtualKDualAction::KDualAction_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KDualAction_Event(KDualAction* self, QEvent* param1) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction) {
        return vkdualaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KDualAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDualAction_SuperEvent(KDualAction* self, QEvent* param1) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self)) {
        return vkdualaction->KDualAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KDualAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnEvent(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_event_callback = reinterpret_cast<VirtualKDualAction::KDualAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDualAction_EventFilter(KDualAction* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDualAction_SuperEventFilter(KDualAction* self, QObject* watched, QEvent* event) {
    return self->KDualAction::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnEventFilter(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_eventfilter_callback = reinterpret_cast<VirtualKDualAction::KDualAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDualAction_TimerEvent(KDualAction* self, QTimerEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction) {
        vkdualaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDualAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDualAction_SuperTimerEvent(KDualAction* self, QTimerEvent* event) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self)) {
        vkdualaction->KDualAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDualAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnTimerEvent(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_timerevent_callback = reinterpret_cast<VirtualKDualAction::KDualAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDualAction_ChildEvent(KDualAction* self, QChildEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction) {
        vkdualaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDualAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDualAction_SuperChildEvent(KDualAction* self, QChildEvent* event) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self)) {
        vkdualaction->KDualAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDualAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnChildEvent(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_childevent_callback = reinterpret_cast<VirtualKDualAction::KDualAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDualAction_CustomEvent(KDualAction* self, QEvent* event) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction) {
        vkdualaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDualAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDualAction_SuperCustomEvent(KDualAction* self, QEvent* event) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self)) {
        vkdualaction->KDualAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDualAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnCustomEvent(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_customevent_callback = reinterpret_cast<VirtualKDualAction::KDualAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDualAction_ConnectNotify(KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction) {
        vkdualaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDualAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDualAction_SuperConnectNotify(KDualAction* self, const QMetaMethod* signal) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self)) {
        vkdualaction->KDualAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDualAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnConnectNotify(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_connectnotify_callback = reinterpret_cast<VirtualKDualAction::KDualAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDualAction_DisconnectNotify(KDualAction* self, const QMetaMethod* signal) {
    auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self);
    if (vkdualaction) {
        vkdualaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDualAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDualAction_SuperDisconnectNotify(KDualAction* self, const QMetaMethod* signal) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self)) {
        vkdualaction->KDualAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDualAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDualAction_OnDisconnectNotify(KDualAction* self, intptr_t slot) {
    if (auto* vkdualaction = dynamic_cast<VirtualKDualAction*>(self))
        vkdualaction->kdualaction_disconnectnotify_callback = reinterpret_cast<VirtualKDualAction::KDualAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KDualAction_Sender(const KDualAction* self) {
    if (auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self))) {
        return vkdualaction->VirtualKDualAction::sender();
    } else
        qFatal("Error: Protected method KDualAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDualAction_SenderSignalIndex(const KDualAction* self) {
    if (auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self))) {
        return vkdualaction->VirtualKDualAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDualAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDualAction_Receivers(const KDualAction* self, const char* signal) {
    if (auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self))) {
        return vkdualaction->VirtualKDualAction::receivers(signal);
    } else
        qFatal("Error: Protected method KDualAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDualAction_IsSignalConnected(const KDualAction* self, const QMetaMethod* signal) {
    if (auto* vkdualaction = const_cast<VirtualKDualAction*>(dynamic_cast<const VirtualKDualAction*>(self))) {
        return vkdualaction->VirtualKDualAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDualAction::isSignalConnected called without a directly constructed type");
}

void KDualAction_Delete(KDualAction* self) {
    delete self;
}
