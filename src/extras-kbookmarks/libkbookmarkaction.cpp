#include <KBookmark>
#include <KBookmarkAction>
#include <KBookmarkActionInterface>
#include <KBookmarkOwner>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kbookmarkaction.h>
#include "libkbookmarkaction.h"
#include "libkbookmarkaction.hxx"

KBookmarkAction* KBookmarkAction_new(const KBookmark* bk, KBookmarkOwner* owner, QObject* parent) {
    return new VirtualKBookmarkAction(*bk, owner, parent);
}

KBookmarkActionInterface* KBookmarkAction_AsKBookmarkActionInterface(KBookmarkAction* self) {
    return static_cast<KBookmarkActionInterface*>(self);
}

KBookmarkAction* KBookmarkAction_FromKBookmarkActionInterface(KBookmarkActionInterface* _kbookmarkactioninterface) {
    return dynamic_cast<KBookmarkAction*>(static_cast<KBookmarkActionInterface*>(_kbookmarkactioninterface));
}

QMetaObject* KBookmarkAction_MetaObject(const KBookmarkAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkAction_Metacast(KBookmarkAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkAction_Metacall(KBookmarkAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBookmarkAction_Tr(const char* s) {
    auto _ret = KBookmarkAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmarkAction_SlotSelected(KBookmarkAction* self, int mb, int km) {
    self->slotSelected(static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
}

libqt_string KBookmarkAction_Tr2(const char* s, const char* c) {
    auto _ret = KBookmarkAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBookmarkAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBookmarkAction_SuperMetaObject(const KBookmarkAction* self) {
    return (QMetaObject*)self->KBookmarkAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnMetaObject(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self)))
        vkbookmarkaction->kbookmarkaction_metaobject_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBookmarkAction_SuperMetacast(KBookmarkAction* self, const char* param1) {
    return self->KBookmarkAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnMetacast(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_metacast_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBookmarkAction_SuperMetacall(KBookmarkAction* self, int param1, int param2, void** param3) {
    return self->KBookmarkAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnMetacall(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_metacall_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkAction_Event(KBookmarkAction* self, QEvent* param1) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction) {
        return vkbookmarkaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkAction_SuperEvent(KBookmarkAction* self, QEvent* param1) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self)) {
        return vkbookmarkaction->KBookmarkAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnEvent(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_event_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkAction_EventFilter(KBookmarkAction* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KBookmarkAction_SuperEventFilter(KBookmarkAction* self, QObject* watched, QEvent* event) {
    return self->KBookmarkAction::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnEventFilter(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_eventfilter_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkAction_TimerEvent(KBookmarkAction* self, QTimerEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction) {
        vkbookmarkaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkAction_SuperTimerEvent(KBookmarkAction* self, QTimerEvent* event) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self)) {
        vkbookmarkaction->KBookmarkAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnTimerEvent(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_timerevent_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkAction_ChildEvent(KBookmarkAction* self, QChildEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction) {
        vkbookmarkaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkAction_SuperChildEvent(KBookmarkAction* self, QChildEvent* event) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self)) {
        vkbookmarkaction->KBookmarkAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnChildEvent(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_childevent_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkAction_CustomEvent(KBookmarkAction* self, QEvent* event) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction) {
        vkbookmarkaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkAction_SuperCustomEvent(KBookmarkAction* self, QEvent* event) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self)) {
        vkbookmarkaction->KBookmarkAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnCustomEvent(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_customevent_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkAction_ConnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction) {
        vkbookmarkaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkAction_SuperConnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self)) {
        vkbookmarkaction->KBookmarkAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnConnectNotify(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_connectnotify_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkAction_DisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self);
    if (vkbookmarkaction) {
        vkbookmarkaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkAction_SuperDisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self)) {
        vkbookmarkaction->KBookmarkAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkAction_OnDisconnectNotify(KBookmarkAction* self, intptr_t slot) {
    if (auto* vkbookmarkaction = dynamic_cast<VirtualKBookmarkAction*>(self))
        vkbookmarkaction->kbookmarkaction_disconnectnotify_callback = reinterpret_cast<VirtualKBookmarkAction::KBookmarkAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KBookmarkAction_Sender(const KBookmarkAction* self) {
    if (auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self))) {
        return vkbookmarkaction->VirtualKBookmarkAction::sender();
    } else
        qFatal("Error: Protected method KBookmarkAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkAction_SenderSignalIndex(const KBookmarkAction* self) {
    if (auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self))) {
        return vkbookmarkaction->VirtualKBookmarkAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBookmarkAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkAction_Receivers(const KBookmarkAction* self, const char* signal) {
    if (auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self))) {
        return vkbookmarkaction->VirtualKBookmarkAction::receivers(signal);
    } else
        qFatal("Error: Protected method KBookmarkAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkAction_IsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkaction = const_cast<VirtualKBookmarkAction*>(dynamic_cast<const VirtualKBookmarkAction*>(self))) {
        return vkbookmarkaction->VirtualKBookmarkAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBookmarkAction::isSignalConnected called without a directly constructed type");
}

void KBookmarkAction_Delete(KBookmarkAction* self) {
    delete self;
}
