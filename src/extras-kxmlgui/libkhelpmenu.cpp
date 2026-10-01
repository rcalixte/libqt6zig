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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KHelpMenu_Tr(const char* s) {
    auto _ret = KHelpMenu::tr(s);
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
    KHelpMenu::connect(self,
                       static_cast<void (KHelpMenu::*)()>(&KHelpMenu::showAboutApplication),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

libqt_string KHelpMenu_Tr2(const char* s, const char* c) {
    auto _ret = KHelpMenu::tr(s, c);
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
    auto _ret = KHelpMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KHelpMenu_SuperMetaObject(const KHelpMenu* self) {
    return (QMetaObject*)self->KHelpMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnMetaObject(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self)))
        vkhelpmenu->khelpmenu_metaobject_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KHelpMenu_SuperMetacast(KHelpMenu* self, const char* param1) {
    return self->KHelpMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnMetacast(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_metacast_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KHelpMenu_SuperMetacall(KHelpMenu* self, int param1, int param2, void** param3) {
    return self->KHelpMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnMetacall(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_metacall_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KHelpMenu_Event(KHelpMenu* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KHelpMenu_SuperEvent(KHelpMenu* self, QEvent* event) {
    return self->KHelpMenu::event(event);
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnEvent(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_event_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KHelpMenu_EventFilter(KHelpMenu* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KHelpMenu_SuperEventFilter(KHelpMenu* self, QObject* watched, QEvent* event) {
    return self->KHelpMenu::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnEventFilter(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_eventfilter_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KHelpMenu_TimerEvent(KHelpMenu* self, QTimerEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu) {
        vkhelpmenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHelpMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHelpMenu_SuperTimerEvent(KHelpMenu* self, QTimerEvent* event) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self)) {
        vkhelpmenu->KHelpMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KHelpMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnTimerEvent(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_timerevent_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KHelpMenu_ChildEvent(KHelpMenu* self, QChildEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu) {
        vkhelpmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHelpMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHelpMenu_SuperChildEvent(KHelpMenu* self, QChildEvent* event) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self)) {
        vkhelpmenu->KHelpMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KHelpMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnChildEvent(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_childevent_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KHelpMenu_CustomEvent(KHelpMenu* self, QEvent* event) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu) {
        vkhelpmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHelpMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHelpMenu_SuperCustomEvent(KHelpMenu* self, QEvent* event) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self)) {
        vkhelpmenu->KHelpMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KHelpMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnCustomEvent(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_customevent_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KHelpMenu_ConnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu) {
        vkhelpmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KHelpMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KHelpMenu_SuperConnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self)) {
        vkhelpmenu->KHelpMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KHelpMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnConnectNotify(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_connectnotify_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KHelpMenu_DisconnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self);
    if (vkhelpmenu) {
        vkhelpmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KHelpMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KHelpMenu_SuperDisconnectNotify(KHelpMenu* self, const QMetaMethod* signal) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self)) {
        vkhelpmenu->KHelpMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KHelpMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHelpMenu_OnDisconnectNotify(KHelpMenu* self, intptr_t slot) {
    if (auto* vkhelpmenu = dynamic_cast<VirtualKHelpMenu*>(self))
        vkhelpmenu->khelpmenu_disconnectnotify_callback = reinterpret_cast<VirtualKHelpMenu::KHelpMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KHelpMenu_Sender(const KHelpMenu* self) {
    if (auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self))) {
        return vkhelpmenu->VirtualKHelpMenu::sender();
    } else
        qFatal("Error: Protected method KHelpMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KHelpMenu_SenderSignalIndex(const KHelpMenu* self) {
    if (auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self))) {
        return vkhelpmenu->VirtualKHelpMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KHelpMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KHelpMenu_Receivers(const KHelpMenu* self, const char* signal) {
    if (auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self))) {
        return vkhelpmenu->VirtualKHelpMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KHelpMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KHelpMenu_IsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal) {
    if (auto* vkhelpmenu = const_cast<VirtualKHelpMenu*>(dynamic_cast<const VirtualKHelpMenu*>(self))) {
        return vkhelpmenu->VirtualKHelpMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KHelpMenu::isSignalConnected called without a directly constructed type");
}

void KHelpMenu_Delete(KHelpMenu* self) {
    delete self;
}
