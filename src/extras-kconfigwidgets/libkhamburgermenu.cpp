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
#include <QByteArray>
#include <cstring>
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
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKHamburgerMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KHamburgerMenu_Tr(const char* s) {
    QString _ret = KHamburgerMenu::tr(s);
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
    KHamburgerMenu::connect(self, &KHamburgerMenu::aboutToShowMenu, [self, slotFunc]() {
        slotFunc(self);
    });
}

QWidget* KHamburgerMenu_CreateWidget(KHamburgerMenu* self, QWidget* parent) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->createWidget(parent);
    }
    return {};
}

libqt_string KHamburgerMenu_Tr2(const char* s, const char* c) {
    QString _ret = KHamburgerMenu::tr(s, c);
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
    QString _ret = KHamburgerMenu::tr(s, c, static_cast<int>(n));
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
int KHamburgerMenu_QBaseMetacall(KHamburgerMenu* self, int param1, int param2, void** param3) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Metacall_IsBase(true);
        return vkhamburgermenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KHamburgerMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnMetacall(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Metacall_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KHamburgerMenu_QBaseCreateWidget(KHamburgerMenu* self, QWidget* parent) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_CreateWidget_IsBase(true);
        return vkhamburgermenu->createWidget(parent);
    } else {
        return ((VirtualKHamburgerMenu*)self)->createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnCreateWidget(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_CreateWidget_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHamburgerMenu_Event(KHamburgerMenu* self, QEvent* param1) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->event(param1);
    } else {
        return ((VirtualKHamburgerMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool KHamburgerMenu_QBaseEvent(KHamburgerMenu* self, QEvent* param1) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Event_IsBase(true);
        return vkhamburgermenu->event(param1);
    } else {
        return ((VirtualKHamburgerMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnEvent(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Event_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHamburgerMenu_EventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKHamburgerMenu*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KHamburgerMenu_QBaseEventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_EventFilter_IsBase(true);
        return vkhamburgermenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKHamburgerMenu*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnEventFilter(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_EventFilter_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KHamburgerMenu_DeleteWidget(KHamburgerMenu* self, QWidget* widget) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->deleteWidget(widget);
    } else {
        ((VirtualKHamburgerMenu*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KHamburgerMenu_QBaseDeleteWidget(KHamburgerMenu* self, QWidget* widget) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_DeleteWidget_IsBase(true);
        vkhamburgermenu->deleteWidget(widget);
    } else {
        ((VirtualKHamburgerMenu*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnDeleteWidget(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_DeleteWidget_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KHamburgerMenu_TimerEvent(KHamburgerMenu* self, QTimerEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->timerEvent(event);
    } else {
        ((VirtualKHamburgerMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KHamburgerMenu_QBaseTimerEvent(KHamburgerMenu* self, QTimerEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_TimerEvent_IsBase(true);
        vkhamburgermenu->timerEvent(event);
    } else {
        ((VirtualKHamburgerMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnTimerEvent(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_TimerEvent_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHamburgerMenu_ChildEvent(KHamburgerMenu* self, QChildEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->childEvent(event);
    } else {
        ((VirtualKHamburgerMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KHamburgerMenu_QBaseChildEvent(KHamburgerMenu* self, QChildEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_ChildEvent_IsBase(true);
        vkhamburgermenu->childEvent(event);
    } else {
        ((VirtualKHamburgerMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnChildEvent(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_ChildEvent_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHamburgerMenu_CustomEvent(KHamburgerMenu* self, QEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->customEvent(event);
    } else {
        ((VirtualKHamburgerMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KHamburgerMenu_QBaseCustomEvent(KHamburgerMenu* self, QEvent* event) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_CustomEvent_IsBase(true);
        vkhamburgermenu->customEvent(event);
    } else {
        ((VirtualKHamburgerMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnCustomEvent(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_CustomEvent_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHamburgerMenu_ConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->connectNotify(*signal);
    } else {
        ((VirtualKHamburgerMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KHamburgerMenu_QBaseConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_ConnectNotify_IsBase(true);
        vkhamburgermenu->connectNotify(*signal);
    } else {
        ((VirtualKHamburgerMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnConnectNotify(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KHamburgerMenu_DisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->disconnectNotify(*signal);
    } else {
        ((VirtualKHamburgerMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KHamburgerMenu_QBaseDisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_DisconnectNotify_IsBase(true);
        vkhamburgermenu->disconnectNotify(*signal);
    } else {
        ((VirtualKHamburgerMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnDisconnectNotify(KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = dynamic_cast<VirtualKHamburgerMenu*>(self);
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KHamburgerMenu_CreatedWidgets(const KHamburgerMenu* self) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        QList<QWidget*> _ret = vkhamburgermenu->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKHamburgerMenu*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ KHamburgerMenu_QBaseCreatedWidgets(const KHamburgerMenu* self) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkhamburgermenu->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKHamburgerMenu*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnCreatedWidgets(const KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_CreatedWidgets_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KHamburgerMenu_Sender(const KHamburgerMenu* self) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->sender();
    } else {
        return ((VirtualKHamburgerMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KHamburgerMenu_QBaseSender(const KHamburgerMenu* self) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Sender_IsBase(true);
        return vkhamburgermenu->sender();
    } else {
        return ((VirtualKHamburgerMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnSender(const KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Sender_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KHamburgerMenu_SenderSignalIndex(const KHamburgerMenu* self) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->senderSignalIndex();
    } else {
        return ((VirtualKHamburgerMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KHamburgerMenu_QBaseSenderSignalIndex(const KHamburgerMenu* self) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_SenderSignalIndex_IsBase(true);
        return vkhamburgermenu->senderSignalIndex();
    } else {
        return ((VirtualKHamburgerMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnSenderSignalIndex(const KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KHamburgerMenu_Receivers(const KHamburgerMenu* self, const char* signal) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->receivers(signal);
    } else {
        return ((VirtualKHamburgerMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KHamburgerMenu_QBaseReceivers(const KHamburgerMenu* self, const char* signal) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Receivers_IsBase(true);
        return vkhamburgermenu->receivers(signal);
    } else {
        return ((VirtualKHamburgerMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnReceivers(const KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_Receivers_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHamburgerMenu_IsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        return vkhamburgermenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKHamburgerMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KHamburgerMenu_QBaseIsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_IsSignalConnected_IsBase(true);
        return vkhamburgermenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKHamburgerMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHamburgerMenu_OnIsSignalConnected(const KHamburgerMenu* self, intptr_t slot) {
    auto* vkhamburgermenu = const_cast<VirtualKHamburgerMenu*>(dynamic_cast<const VirtualKHamburgerMenu*>(self));
    if (vkhamburgermenu && vkhamburgermenu->isVirtualKHamburgerMenu) {
        vkhamburgermenu->setKHamburgerMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKHamburgerMenu::KHamburgerMenu_IsSignalConnected_Callback>(slot));
    }
}

void KHamburgerMenu_Delete(KHamburgerMenu* self) {
    delete self;
}
