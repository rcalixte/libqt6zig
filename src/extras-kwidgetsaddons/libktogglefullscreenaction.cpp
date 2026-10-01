#include <KToggleAction>
#include <KToggleFullScreenAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <ktogglefullscreenaction.h>
#include "libktogglefullscreenaction.h"
#include "libktogglefullscreenaction.hxx"

KToggleFullScreenAction* KToggleFullScreenAction_new(QObject* parent) {
    return new VirtualKToggleFullScreenAction(parent);
}

KToggleFullScreenAction* KToggleFullScreenAction_new2(QWidget* window, QObject* parent) {
    return new VirtualKToggleFullScreenAction(window, parent);
}

QMetaObject* KToggleFullScreenAction_MetaObject(const KToggleFullScreenAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToggleFullScreenAction_Metacast(KToggleFullScreenAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToggleFullScreenAction_Metacall(KToggleFullScreenAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToggleFullScreenAction_Tr(const char* s) {
    auto _ret = KToggleFullScreenAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToggleFullScreenAction_SetWindow(KToggleFullScreenAction* self, QWidget* window) {
    self->setWindow(window);
}

void KToggleFullScreenAction_SetFullScreen(QWidget* window, bool set) {
    KToggleFullScreenAction::setFullScreen(window, set);
}

bool KToggleFullScreenAction_EventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        return vktogglefullscreenaction->eventFilter(object, event);
    }
    qFatal("Error: Protected method KToggleFullScreenAction::eventFilter called without a directly constructed type");
}

void KToggleFullScreenAction_SlotToggled(KToggleFullScreenAction* self, bool checked) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        vktogglefullscreenaction->slotToggled(checked);
    }
}

libqt_string KToggleFullScreenAction_Tr2(const char* s, const char* c) {
    auto _ret = KToggleFullScreenAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToggleFullScreenAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KToggleFullScreenAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToggleFullScreenAction_SuperMetaObject(const KToggleFullScreenAction* self) {
    return (QMetaObject*)self->KToggleFullScreenAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnMetaObject(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self)))
        vktogglefullscreenaction->ktogglefullscreenaction_metaobject_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToggleFullScreenAction_SuperMetacast(KToggleFullScreenAction* self, const char* param1) {
    return self->KToggleFullScreenAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnMetacast(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_metacast_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToggleFullScreenAction_SuperMetacall(KToggleFullScreenAction* self, int param1, int param2, void** param3) {
    return self->KToggleFullScreenAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnMetacall(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_metacall_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KToggleFullScreenAction_SuperEventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        return vktogglefullscreenaction->KToggleFullScreenAction::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnEventFilter(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_eventfilter_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KToggleFullScreenAction_SuperSlotToggled(KToggleFullScreenAction* self, bool checked) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        vktogglefullscreenaction->KToggleFullScreenAction::slotToggled(checked);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::slotToggled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnSlotToggled(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_slottoggled_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_SlotToggled_Callback>(slot);
}

// Derived class handler implementation
bool KToggleFullScreenAction_Event(KToggleFullScreenAction* self, QEvent* param1) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        return vktogglefullscreenaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KToggleFullScreenAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToggleFullScreenAction_SuperEvent(KToggleFullScreenAction* self, QEvent* param1) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        return vktogglefullscreenaction->KToggleFullScreenAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnEvent(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_event_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_Event_Callback>(slot);
}

// Derived class handler implementation
void KToggleFullScreenAction_TimerEvent(KToggleFullScreenAction* self, QTimerEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        vktogglefullscreenaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleFullScreenAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleFullScreenAction_SuperTimerEvent(KToggleFullScreenAction* self, QTimerEvent* event) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        vktogglefullscreenaction->KToggleFullScreenAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnTimerEvent(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_timerevent_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleFullScreenAction_ChildEvent(KToggleFullScreenAction* self, QChildEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        vktogglefullscreenaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleFullScreenAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleFullScreenAction_SuperChildEvent(KToggleFullScreenAction* self, QChildEvent* event) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        vktogglefullscreenaction->KToggleFullScreenAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnChildEvent(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_childevent_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleFullScreenAction_CustomEvent(KToggleFullScreenAction* self, QEvent* event) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        vktogglefullscreenaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleFullScreenAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleFullScreenAction_SuperCustomEvent(KToggleFullScreenAction* self, QEvent* event) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        vktogglefullscreenaction->KToggleFullScreenAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnCustomEvent(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_customevent_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleFullScreenAction_ConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        vktogglefullscreenaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToggleFullScreenAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleFullScreenAction_SuperConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        vktogglefullscreenaction->KToggleFullScreenAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnConnectNotify(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_connectnotify_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToggleFullScreenAction_DisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self);
    if (vktogglefullscreenaction) {
        vktogglefullscreenaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToggleFullScreenAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleFullScreenAction_SuperDisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self)) {
        vktogglefullscreenaction->KToggleFullScreenAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToggleFullScreenAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleFullScreenAction_OnDisconnectNotify(KToggleFullScreenAction* self, intptr_t slot) {
    if (auto* vktogglefullscreenaction = dynamic_cast<VirtualKToggleFullScreenAction*>(self))
        vktogglefullscreenaction->ktogglefullscreenaction_disconnectnotify_callback = reinterpret_cast<VirtualKToggleFullScreenAction::KToggleFullScreenAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KToggleFullScreenAction_Sender(const KToggleFullScreenAction* self) {
    if (auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self))) {
        return vktogglefullscreenaction->VirtualKToggleFullScreenAction::sender();
    } else
        qFatal("Error: Protected method KToggleFullScreenAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToggleFullScreenAction_SenderSignalIndex(const KToggleFullScreenAction* self) {
    if (auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self))) {
        return vktogglefullscreenaction->VirtualKToggleFullScreenAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToggleFullScreenAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToggleFullScreenAction_Receivers(const KToggleFullScreenAction* self, const char* signal) {
    if (auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self))) {
        return vktogglefullscreenaction->VirtualKToggleFullScreenAction::receivers(signal);
    } else
        qFatal("Error: Protected method KToggleFullScreenAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToggleFullScreenAction_IsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal) {
    if (auto* vktogglefullscreenaction = const_cast<VirtualKToggleFullScreenAction*>(dynamic_cast<const VirtualKToggleFullScreenAction*>(self))) {
        return vktogglefullscreenaction->VirtualKToggleFullScreenAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToggleFullScreenAction::isSignalConnected called without a directly constructed type");
}

void KToggleFullScreenAction_Delete(KToggleFullScreenAction* self) {
    delete self;
}
