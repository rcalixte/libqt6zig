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
    return (QMetaObject*)self->metaObject();
}

void* KActionMenu_Metacast(KActionMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KActionMenu_Metacall(KActionMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KActionMenu_Tr(const char* s) {
    auto _ret = KActionMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    return self->createWidget(parent);
}

libqt_string KActionMenu_Tr2(const char* s, const char* c) {
    auto _ret = KActionMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KActionMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KActionMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KActionMenu_SuperMetaObject(const KActionMenu* self) {
    return (QMetaObject*)self->KActionMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnMetaObject(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self)))
        vkactionmenu->kactionmenu_metaobject_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KActionMenu_SuperMetacast(KActionMenu* self, const char* param1) {
    return self->KActionMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnMetacast(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_metacast_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KActionMenu_SuperMetacall(KActionMenu* self, int param1, int param2, void** param3) {
    return self->KActionMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnMetacall(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_metacall_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KActionMenu_SuperCreateWidget(KActionMenu* self, QWidget* parent) {
    return self->KActionMenu::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnCreateWidget(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_createwidget_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool KActionMenu_Event(KActionMenu* self, QEvent* param1) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        return vkactionmenu->event(param1);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KActionMenu_SuperEvent(KActionMenu* self, QEvent* param1) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        return vkactionmenu->KActionMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method KActionMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnEvent(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_event_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KActionMenu_EventFilter(KActionMenu* self, QObject* param1, QEvent* param2) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        return vkactionmenu->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KActionMenu_SuperEventFilter(KActionMenu* self, QObject* param1, QEvent* param2) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        return vkactionmenu->KActionMenu::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KActionMenu::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnEventFilter(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_eventfilter_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KActionMenu_DeleteWidget(KActionMenu* self, QWidget* widget) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        vkactionmenu->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionMenu_SuperDeleteWidget(KActionMenu* self, QWidget* widget) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        vkactionmenu->KActionMenu::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KActionMenu::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnDeleteWidget(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_deletewidget_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KActionMenu_TimerEvent(KActionMenu* self, QTimerEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        vkactionmenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionMenu_SuperTimerEvent(KActionMenu* self, QTimerEvent* event) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        vkactionmenu->KActionMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnTimerEvent(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_timerevent_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionMenu_ChildEvent(KActionMenu* self, QChildEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        vkactionmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionMenu_SuperChildEvent(KActionMenu* self, QChildEvent* event) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        vkactionmenu->KActionMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnChildEvent(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_childevent_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionMenu_CustomEvent(KActionMenu* self, QEvent* event) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        vkactionmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionMenu_SuperCustomEvent(KActionMenu* self, QEvent* event) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        vkactionmenu->KActionMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KActionMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnCustomEvent(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_customevent_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KActionMenu_ConnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        vkactionmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionMenu_SuperConnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        vkactionmenu->KActionMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KActionMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnConnectNotify(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_connectnotify_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KActionMenu_DisconnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self);
    if (vkactionmenu) {
        vkactionmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KActionMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KActionMenu_SuperDisconnectNotify(KActionMenu* self, const QMetaMethod* signal) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self)) {
        vkactionmenu->KActionMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KActionMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KActionMenu_OnDisconnectNotify(KActionMenu* self, intptr_t slot) {
    if (auto* vkactionmenu = dynamic_cast<VirtualKActionMenu*>(self))
        vkactionmenu->kactionmenu_disconnectnotify_callback = reinterpret_cast<VirtualKActionMenu::KActionMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KActionMenu_CreatedWidgets(const KActionMenu* self) {
    if (auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self))) {
        QList<QWidget*> _ret = vkactionmenu->VirtualKActionMenu::createdWidgets();
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
        qFatal("Error: Protected method KActionMenu::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KActionMenu_Sender(const KActionMenu* self) {
    if (auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self))) {
        return vkactionmenu->VirtualKActionMenu::sender();
    } else
        qFatal("Error: Protected method KActionMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KActionMenu_SenderSignalIndex(const KActionMenu* self) {
    if (auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self))) {
        return vkactionmenu->VirtualKActionMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KActionMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KActionMenu_Receivers(const KActionMenu* self, const char* signal) {
    if (auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self))) {
        return vkactionmenu->VirtualKActionMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KActionMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KActionMenu_IsSignalConnected(const KActionMenu* self, const QMetaMethod* signal) {
    if (auto* vkactionmenu = const_cast<VirtualKActionMenu*>(dynamic_cast<const VirtualKActionMenu*>(self))) {
        return vkactionmenu->VirtualKActionMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KActionMenu::isSignalConnected called without a directly constructed type");
}

void KActionMenu_Delete(KActionMenu* self) {
    delete self;
}
