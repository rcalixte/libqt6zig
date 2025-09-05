#include <KAboutData>
#include <KHelpMenu>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <khelpmenu.h>
#include "libkhelpmenu.h"
#include "libkhelpmenu.hxx"

KHelpMenu* KHelpMenu_new(QWidget* parent) {
    return new VirtualKHelpMenu(parent);
}

KHelpMenu* KHelpMenu_new2(QWidget* parent, const libqt_string unused) {
    QString unused_QString = QString::fromUtf8(unused.data, unused.len);
    return new VirtualKHelpMenu(parent, unused_QString);
}

KHelpMenu* KHelpMenu_new3() {
    return new VirtualKHelpMenu();
}

KHelpMenu* KHelpMenu_new4(QWidget* parent, const KAboutData* aboutData, bool showWhatsThis) {
    return new VirtualKHelpMenu(parent, *aboutData, showWhatsThis);
}

KHelpMenu* KHelpMenu_new5(QWidget* parent, const KAboutData* aboutData) {
    return new VirtualKHelpMenu(parent, *aboutData);
}

KHelpMenu* KHelpMenu_new6(QWidget* parent, const libqt_string unused, bool showWhatsThis) {
    QString unused_QString = QString::fromUtf8(unused.data, unused.len);
    return new VirtualKHelpMenu(parent, unused_QString, showWhatsThis);
}

QMetaObject* KHelpMenu_MetaObject(const KHelpMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KHelpMenu_Metacast(KHelpMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KHelpMenu_Metacall(KHelpMenu* self, int param1, int param2, void** param3) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKHelpMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KHelpMenu_Tr(const char* s) {
    QString _ret = KHelpMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KHelpMenu_SetShowWhatsThis(KHelpMenu* self, bool showWhatsThis) {
    self->setShowWhatsThis(showWhatsThis);
}

QMenu* KHelpMenu_Menu(KHelpMenu* self) {
    return self->menu();
}

QAction* KHelpMenu_Action(const KHelpMenu* self, int id) {
    return self->action(static_cast<KHelpMenu::MenuId>(id));
}

void KHelpMenu_AppHelpActivated(KHelpMenu* self) {
    self->appHelpActivated();
}

void KHelpMenu_ContextHelpActivated(KHelpMenu* self) {
    self->contextHelpActivated();
}

void KHelpMenu_AboutApplication(KHelpMenu* self) {
    self->aboutApplication();
}

void KHelpMenu_AboutKDE(KHelpMenu* self) {
    self->aboutKDE();
}

void KHelpMenu_ReportBug(KHelpMenu* self) {
    self->reportBug();
}

void KHelpMenu_SwitchApplicationLanguage(KHelpMenu* self) {
    self->switchApplicationLanguage();
}

void KHelpMenu_Donate(KHelpMenu* self) {
    self->donate();
}

void KHelpMenu_ShowAboutApplication(KHelpMenu* self) {
    self->showAboutApplication();
}

void KHelpMenu_Connect_ShowAboutApplication(KHelpMenu* self, intptr_t slot) {
    void (*slotFunc)(KHelpMenu*) = reinterpret_cast<void (*)(KHelpMenu*)>(slot);
    KHelpMenu::connect(self, &KHelpMenu::showAboutApplication, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KHelpMenu_Tr2(const char* s, const char* c) {
    QString _ret = KHelpMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KHelpMenu_Tr3(const char* s, const char* c, int n) {
    QString _ret = KHelpMenu::tr(s, c, static_cast<int>(n));
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
int KHelpMenu_QBaseMetacall(KHelpMenu* self, int param1, int param2, void** param3) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Metacall_IsBase(true);
        return vkhelpmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KHelpMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnMetacall(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Metacall_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHelpMenu_Event(KHelpMenu* self, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return vkhelpmenu->event(event);
    } else {
        return self->KHelpMenu::event(event);
    }
}

// Base class handler implementation
bool KHelpMenu_QBaseEvent(KHelpMenu* self, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Event_IsBase(true);
        return vkhelpmenu->event(event);
    } else {
        return self->KHelpMenu::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnEvent(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Event_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHelpMenu_EventFilter(KHelpMenu* self, QObject* watched, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return vkhelpmenu->eventFilter(watched, event);
    } else {
        return self->KHelpMenu::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KHelpMenu_QBaseEventFilter(KHelpMenu* self, QObject* watched, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_EventFilter_IsBase(true);
        return vkhelpmenu->eventFilter(watched, event);
    } else {
        return self->KHelpMenu::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnEventFilter(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_EventFilter_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KHelpMenu_TimerEvent(KHelpMenu* self, QTimerEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->timerEvent(event);
    } else {
        ((VirtualKHelpMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KHelpMenu_QBaseTimerEvent(KHelpMenu* self, QTimerEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_TimerEvent_IsBase(true);
        vkhelpmenu->timerEvent(event);
    } else {
        ((VirtualKHelpMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnTimerEvent(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_TimerEvent_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHelpMenu_ChildEvent(KHelpMenu* self, QChildEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->childEvent(event);
    } else {
        ((VirtualKHelpMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KHelpMenu_QBaseChildEvent(KHelpMenu* self, QChildEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_ChildEvent_IsBase(true);
        vkhelpmenu->childEvent(event);
    } else {
        ((VirtualKHelpMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnChildEvent(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_ChildEvent_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHelpMenu_CustomEvent(KHelpMenu* self, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->customEvent(event);
    } else {
        ((VirtualKHelpMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KHelpMenu_QBaseCustomEvent(KHelpMenu* self, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_CustomEvent_IsBase(true);
        vkhelpmenu->customEvent(event);
    } else {
        ((VirtualKHelpMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnCustomEvent(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_CustomEvent_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHelpMenu_ConnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->connectNotify(*signal);
    } else {
        ((VirtualKHelpMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KHelpMenu_QBaseConnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_ConnectNotify_IsBase(true);
        vkhelpmenu->connectNotify(*signal);
    } else {
        ((VirtualKHelpMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnConnectNotify(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KHelpMenu_DisconnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKHelpMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KHelpMenu_QBaseDisconnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_DisconnectNotify_IsBase(true);
        vkhelpmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKHelpMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnDisconnectNotify(KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KHelpMenu_Sender(const KHelpMenu* self) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return vkhelpmenu->sender();
    } else {
        return ((VirtualKHelpMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KHelpMenu_QBaseSender(const KHelpMenu* self) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Sender_IsBase(true);
        return vkhelpmenu->sender();
    } else {
        return ((VirtualKHelpMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnSender(const KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Sender_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KHelpMenu_SenderSignalIndex(const KHelpMenu* self) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return vkhelpmenu->senderSignalIndex();
    } else {
        return ((VirtualKHelpMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KHelpMenu_QBaseSenderSignalIndex(const KHelpMenu* self) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_SenderSignalIndex_IsBase(true);
        return vkhelpmenu->senderSignalIndex();
    } else {
        return ((VirtualKHelpMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnSenderSignalIndex(const KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KHelpMenu_Receivers(const KHelpMenu* self, const char* signal) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return vkhelpmenu->receivers(signal);
    } else {
        return ((VirtualKHelpMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KHelpMenu_QBaseReceivers(const KHelpMenu* self, const char* signal) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Receivers_IsBase(true);
        return vkhelpmenu->receivers(signal);
    } else {
        return ((VirtualKHelpMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnReceivers(const KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_Receivers_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHelpMenu_IsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        return vkhelpmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKHelpMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KHelpMenu_QBaseIsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_IsSignalConnected_IsBase(true);
        return vkhelpmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKHelpMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnIsSignalConnected(const KHelpMenu* self, intptr_t slot) {
    auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self));
    if (vkhelpmenu && vkhelpmenu->isVirtualKHelpMenu) {
        vkhelpmenu->setKHelpMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKHelpMenu::KHelpMenu_IsSignalConnected_Callback>(slot));
    }
}

void KHelpMenu_Delete(KHelpMenu* self) {
    delete self;
}
