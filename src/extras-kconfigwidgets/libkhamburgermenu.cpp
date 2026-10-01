#include <KHamburgerMenu>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMenu>
#include <QMenuBar>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <khamburgermenu.h>
#include "libkhamburgermenu.h"
#include "libkhamburgermenu.hxx"

KHamburgerMenu* KHamburgerMenu_new(QObject* parent) {
    return new VirtualKHamburgerMenu(parent);
}

QMetaObject* KHamburgerMenu_MetaObject(const KHamburgerMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KHamburgerMenu_Metacast(KHamburgerMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KHamburgerMenu_Metacall(KHamburgerMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KHamburgerMenu_Tr(const char* s) {
    auto _ret = KHamburgerMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KHamburgerMenu_SetMenuBar(KHamburgerMenu* self, QMenuBar* menuBar) {
    self->setMenuBar(menuBar);
}

QMenuBar* KHamburgerMenu_MenuBar(const KHamburgerMenu* self) {
    return self->menuBar();
}

void KHamburgerMenu_SetMenuBarAdvertised(KHamburgerMenu* self, bool advertise) {
    self->setMenuBarAdvertised(advertise);
}

bool KHamburgerMenu_MenuBarAdvertised(const KHamburgerMenu* self) {
    return self->menuBarAdvertised();
}

void KHamburgerMenu_SetShowMenuBarAction(KHamburgerMenu* self, QAction* showMenuBarAction) {
    self->setShowMenuBarAction(showMenuBarAction);
}

void KHamburgerMenu_AddToMenu(KHamburgerMenu* self, QMenu* menu) {
    self->addToMenu(menu);
}

void KHamburgerMenu_InsertIntoMenuBefore(KHamburgerMenu* self, QMenu* menu, QAction* before) {
    self->insertIntoMenuBefore(menu, before);
}

void KHamburgerMenu_HideActionsOf(KHamburgerMenu* self, QWidget* widget) {
    self->hideActionsOf(widget);
}

void KHamburgerMenu_ShowActionsOf(KHamburgerMenu* self, QWidget* widget) {
    self->showActionsOf(widget);
}

void KHamburgerMenu_AboutToShowMenu(KHamburgerMenu* self) {
    self->aboutToShowMenu();
}

void KHamburgerMenu_Connect_AboutToShowMenu(KHamburgerMenu* self, intptr_t slot) {
    void (*slotFunc)(KHamburgerMenu*) = reinterpret_cast<void (*)(KHamburgerMenu*)>(slot);
    KHamburgerMenu::connect(self,
                            static_cast<void (KHamburgerMenu::*)()>(&KHamburgerMenu::aboutToShowMenu),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

QWidget* KHamburgerMenu_CreateWidget(KHamburgerMenu* self, QWidget* parent) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        return vkhamburgermenu->createWidget(parent);
    }
    qFatal("Error: Protected method KHamburgerMenu::createWidget called without a directly constructed type");
}

libqt_string KHamburgerMenu_Tr2(const char* s, const char* c) {
    auto _ret = KHamburgerMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KHamburgerMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KHamburgerMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KHamburgerMenu_SuperMetaObject(const KHamburgerMenu* self) {
    return (QMetaObject*)self->KHamburgerMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnMetaObject(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self)))
        vkhamburgermenu->khamburgermenu_metaobject_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KHamburgerMenu_SuperMetacast(KHamburgerMenu* self, const char* param1) {
    return self->KHamburgerMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnMetacast(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_metacast_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KHamburgerMenu_SuperMetacall(KHamburgerMenu* self, int param1, int param2, void** param3) {
    return self->KHamburgerMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnMetacall(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_metacall_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KHamburgerMenu_SuperCreateWidget(KHamburgerMenu* self, QWidget* parent) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        return vkhamburgermenu->KHamburgerMenu::createWidget(parent);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnCreateWidget(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_createwidget_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool KHamburgerMenu_Event(KHamburgerMenu* self, QEvent* param1) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        return vkhamburgermenu->event(param1);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KHamburgerMenu_SuperEvent(KHamburgerMenu* self, QEvent* param1) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        return vkhamburgermenu->KHamburgerMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnEvent(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_event_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KHamburgerMenu_EventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        return vkhamburgermenu->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KHamburgerMenu_SuperEventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        return vkhamburgermenu->KHamburgerMenu::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnEventFilter(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_eventfilter_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KHamburgerMenu_DeleteWidget(KHamburgerMenu* self, QWidget* widget) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        vkhamburgermenu->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KHamburgerMenu_SuperDeleteWidget(KHamburgerMenu* self, QWidget* widget) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        vkhamburgermenu->KHamburgerMenu::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnDeleteWidget(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_deletewidget_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KHamburgerMenu_TimerEvent(KHamburgerMenu* self, QTimerEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        vkhamburgermenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHamburgerMenu_SuperTimerEvent(KHamburgerMenu* self, QTimerEvent* event) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        vkhamburgermenu->KHamburgerMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnTimerEvent(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_timerevent_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KHamburgerMenu_ChildEvent(KHamburgerMenu* self, QChildEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        vkhamburgermenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHamburgerMenu_SuperChildEvent(KHamburgerMenu* self, QChildEvent* event) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        vkhamburgermenu->KHamburgerMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnChildEvent(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_childevent_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KHamburgerMenu_CustomEvent(KHamburgerMenu* self, QEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        vkhamburgermenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHamburgerMenu_SuperCustomEvent(KHamburgerMenu* self, QEvent* event) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        vkhamburgermenu->KHamburgerMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnCustomEvent(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_customevent_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KHamburgerMenu_ConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        vkhamburgermenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KHamburgerMenu_SuperConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        vkhamburgermenu->KHamburgerMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnConnectNotify(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_connectnotify_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KHamburgerMenu_DisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu) {
        vkhamburgermenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KHamburgerMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KHamburgerMenu_SuperDisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self)) {
        vkhamburgermenu->KHamburgerMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KHamburgerMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnDisconnectNotify(KHamburgerMenu* self, intptr_t slot) {
    if (auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self))
        vkhamburgermenu->khamburgermenu_disconnectnotify_callback = reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KHamburgerMenu_CreatedWidgets(const KHamburgerMenu* self) {
    if (auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self))) {
        QList<QWidget*> _ret = vkhamburgermenu->VirtualKHamburgerMenu::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KHamburgerMenu::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KHamburgerMenu_Sender(const KHamburgerMenu* self) {
    if (auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self))) {
        return vkhamburgermenu->VirtualKHamburgerMenu::sender();
    } else
        qFatal("Error: Protected method KHamburgerMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KHamburgerMenu_SenderSignalIndex(const KHamburgerMenu* self) {
    if (auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self))) {
        return vkhamburgermenu->VirtualKHamburgerMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KHamburgerMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KHamburgerMenu_Receivers(const KHamburgerMenu* self, const char* signal) {
    if (auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self))) {
        return vkhamburgermenu->VirtualKHamburgerMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KHamburgerMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KHamburgerMenu_IsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal) {
    if (auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self))) {
        return vkhamburgermenu->VirtualKHamburgerMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KHamburgerMenu::isSignalConnected called without a directly constructed type");
}

void KHamburgerMenu_Delete(KHamburgerMenu* self) {
    delete self;
}
