#include <KActionMenu>
#include <KBookmark>
#include <KBookmarkActionInterface>
#include <KBookmarkActionMenu>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <kbookmarkactionmenu.h>
#include "libkbookmarkactionmenu.h"
#include "libkbookmarkactionmenu.hxx"

KBookmarkActionMenu* KBookmarkActionMenu_new(const KBookmark* bm, QObject* parent) {
    return new VirtualKBookmarkActionMenu(*bm, parent);
}

KBookmarkActionMenu* KBookmarkActionMenu_new2(const KBookmark* bm, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKBookmarkActionMenu(*bm, text_QString, parent);
}

KBookmarkActionInterface* KBookmarkActionMenu_AsKBookmarkActionInterface(KBookmarkActionMenu* self) {
    return static_cast<KBookmarkActionInterface*>(self);
}

KBookmarkActionMenu* KBookmarkActionMenu_FromKBookmarkActionInterface(KBookmarkActionInterface* _kbookmarkactioninterface) {
    return dynamic_cast<KBookmarkActionMenu*>(static_cast<KBookmarkActionInterface*>(_kbookmarkactioninterface));
}

QMetaObject* KBookmarkActionMenu_MetaObject(const KBookmarkActionMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkActionMenu_Metacast(KBookmarkActionMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkActionMenu_Metacall(KBookmarkActionMenu* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBookmarkActionMenu_Tr(const char* s) {
    auto _ret = KBookmarkActionMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkActionMenu_Tr2(const char* s, const char* c) {
    auto _ret = KBookmarkActionMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkActionMenu_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBookmarkActionMenu::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBookmarkActionMenu_SuperMetaObject(const KBookmarkActionMenu* self) {
    return (QMetaObject*)self->KBookmarkActionMenu::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnMetaObject(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self)))
        vkbookmarkactionmenu->kbookmarkactionmenu_metaobject_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBookmarkActionMenu_SuperMetacast(KBookmarkActionMenu* self, const char* param1) {
    return self->KBookmarkActionMenu::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnMetacast(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_metacast_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBookmarkActionMenu_SuperMetacall(KBookmarkActionMenu* self, int param1, int param2, void** param3) {
    return self->KBookmarkActionMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnMetacall(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_metacall_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Metacall_Callback>(slot);
}

// Derived class handler implementation
QWidget* KBookmarkActionMenu_CreateWidget(KBookmarkActionMenu* self, QWidget* parent) {
    return self->createWidget(parent);
}

// Base class handler implementation
QWidget* KBookmarkActionMenu_SuperCreateWidget(KBookmarkActionMenu* self, QWidget* parent) {
    return self->KBookmarkActionMenu::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnCreateWidget(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_createwidget_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkActionMenu_Event(KBookmarkActionMenu* self, QEvent* param1) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        return vkbookmarkactionmenu->event(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkActionMenu_SuperEvent(KBookmarkActionMenu* self, QEvent* param1) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        return vkbookmarkactionmenu->KBookmarkActionMenu::event(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnEvent(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_event_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Event_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkActionMenu_EventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        return vkbookmarkactionmenu->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkActionMenu_SuperEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        return vkbookmarkactionmenu->KBookmarkActionMenu::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnEventFilter(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_eventfilter_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkActionMenu_DeleteWidget(KBookmarkActionMenu* self, QWidget* widget) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        vkbookmarkactionmenu->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkActionMenu_SuperDeleteWidget(KBookmarkActionMenu* self, QWidget* widget) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        vkbookmarkactionmenu->KBookmarkActionMenu::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnDeleteWidget(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_deletewidget_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkActionMenu_TimerEvent(KBookmarkActionMenu* self, QTimerEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        vkbookmarkactionmenu->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkActionMenu_SuperTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        vkbookmarkactionmenu->KBookmarkActionMenu::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnTimerEvent(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_timerevent_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkActionMenu_ChildEvent(KBookmarkActionMenu* self, QChildEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        vkbookmarkactionmenu->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkActionMenu_SuperChildEvent(KBookmarkActionMenu* self, QChildEvent* event) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        vkbookmarkactionmenu->KBookmarkActionMenu::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnChildEvent(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_childevent_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkActionMenu_CustomEvent(KBookmarkActionMenu* self, QEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        vkbookmarkactionmenu->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkActionMenu_SuperCustomEvent(KBookmarkActionMenu* self, QEvent* event) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        vkbookmarkactionmenu->KBookmarkActionMenu::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnCustomEvent(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_customevent_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkActionMenu_ConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        vkbookmarkactionmenu->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkActionMenu_SuperConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        vkbookmarkactionmenu->KBookmarkActionMenu::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnConnectNotify(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_connectnotify_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkActionMenu_DisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu) {
        vkbookmarkactionmenu->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkActionMenu::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkActionMenu_SuperDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self)) {
        vkbookmarkactionmenu->KBookmarkActionMenu::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkActionMenu::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnDisconnectNotify(KBookmarkActionMenu* self, intptr_t slot) {
    if (auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self))
        vkbookmarkactionmenu->kbookmarkactionmenu_disconnectnotify_callback = reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KBookmarkActionMenu_CreatedWidgets(const KBookmarkActionMenu* self) {
    if (auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self))) {
        QList<QWidget*> _ret = vkbookmarkactionmenu->VirtualKBookmarkActionMenu::createdWidgets();
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
        qFatal("Error: Protected method KBookmarkActionMenu::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBookmarkActionMenu_Sender(const KBookmarkActionMenu* self) {
    if (auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self))) {
        return vkbookmarkactionmenu->VirtualKBookmarkActionMenu::sender();
    } else
        qFatal("Error: Protected method KBookmarkActionMenu::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkActionMenu_SenderSignalIndex(const KBookmarkActionMenu* self) {
    if (auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self))) {
        return vkbookmarkactionmenu->VirtualKBookmarkActionMenu::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBookmarkActionMenu::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkActionMenu_Receivers(const KBookmarkActionMenu* self, const char* signal) {
    if (auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self))) {
        return vkbookmarkactionmenu->VirtualKBookmarkActionMenu::receivers(signal);
    } else
        qFatal("Error: Protected method KBookmarkActionMenu::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkActionMenu_IsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self))) {
        return vkbookmarkactionmenu->VirtualKBookmarkActionMenu::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBookmarkActionMenu::isSignalConnected called without a directly constructed type");
}

void KBookmarkActionMenu_Delete(KBookmarkActionMenu* self) {
    delete self;
}
