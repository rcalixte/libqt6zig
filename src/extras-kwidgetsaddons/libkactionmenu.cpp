#include <KActionMenu>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <kactionmenu.h>
#include "libkactionmenu.h"
#include "libkactionmenu.hxx"

KActionMenu* KActionMenu_new(QObject* parent) {
    return new VirtualKActionMenu(parent);
}

KActionMenu* KActionMenu_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKActionMenu(text_QString, parent);
}

KActionMenu* KActionMenu_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKActionMenu(*icon, text_QString, parent);
}

QMetaObject* KActionMenu_MetaObject(const KActionMenu* self) {
    auto* vkactionmenu = dynamic_cast<const VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKActionMenu*)self)->metaObject();
    }
}

void* KActionMenu_Metacast(KActionMenu* self, const char* param1) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKActionMenu*)self)->qt_metacast(param1);
    }
}

int KActionMenu_Metacall(KActionMenu* self, int param1, int param2, void** param3) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKActionMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void KActionMenu_AddAction(KActionMenu* self, QAction* action) {
    self->addAction(action);
}

QAction* KActionMenu_AddSeparator(KActionMenu* self) {
    return self->addSeparator();
}

void KActionMenu_InsertAction(KActionMenu* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

QAction* KActionMenu_InsertSeparator(KActionMenu* self, QAction* before) {
    return self->insertSeparator(before);
}

void KActionMenu_RemoveAction(KActionMenu* self, QAction* action) {
    self->removeAction(action);
}

int KActionMenu_PopupMode(const KActionMenu* self) {
    return static_cast<int>(self->popupMode());
}

void KActionMenu_SetPopupMode(KActionMenu* self, int popupMode) {
    self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(popupMode));
}

QWidget* KActionMenu_CreateWidget(KActionMenu* self, QWidget* parent) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return self->createWidget(parent);
    } else {
        return ((VirtualKActionMenu*)self)->createWidget(parent);
    }
}

// Base class handler implementation
QMetaObject* KActionMenu_SuperMetaObject(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_MetaObject_IsBase(true);
        return (QMetaObject*)vkactionmenu->metaObject();
    } else {
        return (QMetaObject*)self->KActionMenu::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnMetaObject(const KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_MetaObject_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KActionMenu_SuperMetacast(KActionMenu* self, const char* param1) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Metacast_IsBase(true);
        return vkactionmenu->qt_metacast(param1);
    } else {
        return self->KActionMenu::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnMetacast(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Metacast_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KActionMenu_SuperMetacall(KActionMenu* self, int param1, int param2, void** param3) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Metacall_IsBase(true);
        return vkactionmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KActionMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnMetacall(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Metacall_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KActionMenu_SuperCreateWidget(KActionMenu* self, QWidget* parent) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_CreateWidget_IsBase(true);
        return vkactionmenu->createWidget(parent);
    } else {
        return self->KActionMenu::createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnCreateWidget(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_CreateWidget_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionMenu_Event(KActionMenu* self, QEvent* param1) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return vkactionmenu->event(param1);
    } else {
        return ((VirtualKActionMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool KActionMenu_SuperEvent(KActionMenu* self, QEvent* param1) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Event_IsBase(true);
        return vkactionmenu->event(param1);
    } else {
        return ((VirtualKActionMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnEvent(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Event_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionMenu_EventFilter(KActionMenu* self, QObject* param1, QEvent* param2) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return vkactionmenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKActionMenu*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KActionMenu_SuperEventFilter(KActionMenu* self, QObject* param1, QEvent* param2) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_EventFilter_IsBase(true);
        return vkactionmenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKActionMenu*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnEventFilter(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_EventFilter_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionMenu_DeleteWidget(KActionMenu* self, QWidget* widget) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->deleteWidget(widget);
    } else {
        ((VirtualKActionMenu*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KActionMenu_SuperDeleteWidget(KActionMenu* self, QWidget* widget) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_DeleteWidget_IsBase(true);
        vkactionmenu->deleteWidget(widget);
    } else {
        ((VirtualKActionMenu*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnDeleteWidget(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_DeleteWidget_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionMenu_TimerEvent(KActionMenu* self, QTimerEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->timerEvent(event);
    } else {
        ((VirtualKActionMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KActionMenu_SuperTimerEvent(KActionMenu* self, QTimerEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_TimerEvent_IsBase(true);
        vkactionmenu->timerEvent(event);
    } else {
        ((VirtualKActionMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnTimerEvent(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_TimerEvent_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionMenu_ChildEvent(KActionMenu* self, QChildEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->childEvent(event);
    } else {
        ((VirtualKActionMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KActionMenu_SuperChildEvent(KActionMenu* self, QChildEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_ChildEvent_IsBase(true);
        vkactionmenu->childEvent(event);
    } else {
        ((VirtualKActionMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnChildEvent(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_ChildEvent_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionMenu_CustomEvent(KActionMenu* self, QEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->customEvent(event);
    } else {
        ((VirtualKActionMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KActionMenu_SuperCustomEvent(KActionMenu* self, QEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_CustomEvent_IsBase(true);
        vkactionmenu->customEvent(event);
    } else {
        ((VirtualKActionMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnCustomEvent(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_CustomEvent_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionMenu_ConnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->connectNotify(*signal);
    } else {
        ((VirtualKActionMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KActionMenu_SuperConnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_ConnectNotify_IsBase(true);
        vkactionmenu->connectNotify(*signal);
    } else {
        ((VirtualKActionMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnConnectNotify(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionMenu_DisconnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKActionMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KActionMenu_SuperDisconnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_DisconnectNotify_IsBase(true);
        vkactionmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKActionMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnDisconnectNotify(KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KActionMenu_CreatedWidgets(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        QList<QWidget*> _ret = vkactionmenu->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKActionMenu*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
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
libqt_list /* of QWidget* */ KActionMenu_SuperCreatedWidgets(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkactionmenu->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKActionMenu*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
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
void KActionMenu_OnCreatedWidgets(const KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_CreatedWidgets_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KActionMenu_Sender(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return vkactionmenu->sender();
    } else {
        return ((VirtualKActionMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KActionMenu_SuperSender(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Sender_IsBase(true);
        return vkactionmenu->sender();
    } else {
        return ((VirtualKActionMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnSender(const KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Sender_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionMenu_SenderSignalIndex(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return vkactionmenu->senderSignalIndex();
    } else {
        return ((VirtualKActionMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KActionMenu_SuperSenderSignalIndex(const KActionMenu* self) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_SenderSignalIndex_IsBase(true);
        return vkactionmenu->senderSignalIndex();
    } else {
        return ((VirtualKActionMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnSenderSignalIndex(const KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionMenu_Receivers(const KActionMenu* self, const char* signal) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return vkactionmenu->receivers(signal);
    } else {
        return ((VirtualKActionMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KActionMenu_SuperReceivers(const KActionMenu* self, const char* signal) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Receivers_IsBase(true);
        return vkactionmenu->receivers(signal);
    } else {
        return ((VirtualKActionMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnReceivers(const KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_Receivers_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionMenu_IsSignalConnected(const KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        return vkactionmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KActionMenu_SuperIsSignalConnected(const KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_IsSignalConnected_IsBase(true);
        return vkactionmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnIsSignalConnected(const KActionMenu* self, intptr_t slot) {
    auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self));
    if (vkactionmenu && vkactionmenu->isVirtualKActionMenu) {
        vkactionmenu->setKActionMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKActionMenu::KActionMenu_IsSignalConnected_Callback>(slot));
    }
}

void KActionMenu_Delete(KActionMenu* self) {
    delete self;
}
