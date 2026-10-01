#include <KGuiItem>
#include <KToggleAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <ktoggleaction.h>
#include "libktoggleaction.h"
#include "libktoggleaction.hxx"

KToggleAction* KToggleAction_new(QObject* parent) {
    return new VirtualKToggleAction(parent);
}

KToggleAction* KToggleAction_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToggleAction(text_QString, parent);
}

KToggleAction* KToggleAction_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToggleAction(*icon, text_QString, parent);
}

QMetaObject* KToggleAction_MetaObject(const KToggleAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToggleAction_Metacast(KToggleAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToggleAction_Metacall(KToggleAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToggleAction_Tr(const char* s) {
    auto _ret = KToggleAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToggleAction_SetCheckedState(KToggleAction* self, const KGuiItem* checkedItem) {
    self->setCheckedState(*checkedItem);
}

void KToggleAction_SlotToggled(KToggleAction* self, bool checked) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        vktoggleaction->slotToggled(checked);
    }
}

libqt_string KToggleAction_Tr2(const char* s, const char* c) {
    auto _ret = KToggleAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToggleAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KToggleAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToggleAction_SuperMetaObject(const KToggleAction* self) {
    return (QMetaObject*)self->KToggleAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnMetaObject(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self)))
        vktoggleaction->ktoggleaction_metaobject_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToggleAction_SuperMetacast(KToggleAction* self, const char* param1) {
    return self->KToggleAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnMetacast(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_metacast_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToggleAction_SuperMetacall(KToggleAction* self, int param1, int param2, void** param3) {
    return self->KToggleAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnMetacall(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_metacall_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_Metacall_Callback>(slot);
}

// Base class handler implementation
void KToggleAction_SuperSlotToggled(KToggleAction* self, bool checked) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        vktoggleaction->KToggleAction::slotToggled(checked);
    } else
        qFatal("Error: Protected virtual method KToggleAction::slotToggled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnSlotToggled(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_slottoggled_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_SlotToggled_Callback>(slot);
}

// Derived class handler implementation
bool KToggleAction_Event(KToggleAction* self, QEvent* param1) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        return vktoggleaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KToggleAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToggleAction_SuperEvent(KToggleAction* self, QEvent* param1) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        return vktoggleaction->KToggleAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KToggleAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnEvent(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_event_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KToggleAction_EventFilter(KToggleAction* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KToggleAction_SuperEventFilter(KToggleAction* self, QObject* watched, QEvent* event) {
    return self->KToggleAction::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnEventFilter(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_eventfilter_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KToggleAction_TimerEvent(KToggleAction* self, QTimerEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        vktoggleaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleAction_SuperTimerEvent(KToggleAction* self, QTimerEvent* event) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        vktoggleaction->KToggleAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnTimerEvent(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_timerevent_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleAction_ChildEvent(KToggleAction* self, QChildEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        vktoggleaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleAction_SuperChildEvent(KToggleAction* self, QChildEvent* event) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        vktoggleaction->KToggleAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnChildEvent(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_childevent_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleAction_CustomEvent(KToggleAction* self, QEvent* event) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        vktoggleaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleAction_SuperCustomEvent(KToggleAction* self, QEvent* event) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        vktoggleaction->KToggleAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnCustomEvent(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_customevent_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleAction_ConnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        vktoggleaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToggleAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleAction_SuperConnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        vktoggleaction->KToggleAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToggleAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnConnectNotify(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_connectnotify_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToggleAction_DisconnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self);
    if (vktoggleaction) {
        vktoggleaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToggleAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleAction_SuperDisconnectNotify(KToggleAction* self, const QMetaMethod* signal) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self)) {
        vktoggleaction->KToggleAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToggleAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleAction_OnDisconnectNotify(KToggleAction* self, intptr_t slot) {
    if (auto* vktoggleaction = dynamic_cast<VirtualKToggleAction*>(self))
        vktoggleaction->ktoggleaction_disconnectnotify_callback = reinterpret_cast<VirtualKToggleAction::KToggleAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KToggleAction_Sender(const KToggleAction* self) {
    if (auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self))) {
        return vktoggleaction->VirtualKToggleAction::sender();
    } else
        qFatal("Error: Protected method KToggleAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToggleAction_SenderSignalIndex(const KToggleAction* self) {
    if (auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self))) {
        return vktoggleaction->VirtualKToggleAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToggleAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToggleAction_Receivers(const KToggleAction* self, const char* signal) {
    if (auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self))) {
        return vktoggleaction->VirtualKToggleAction::receivers(signal);
    } else
        qFatal("Error: Protected method KToggleAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToggleAction_IsSignalConnected(const KToggleAction* self, const QMetaMethod* signal) {
    if (auto* vktoggleaction = const_cast<VirtualKToggleAction*>(dynamic_cast<const VirtualKToggleAction*>(self))) {
        return vktoggleaction->VirtualKToggleAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToggleAction::isSignalConnected called without a directly constructed type");
}

void KToggleAction_Delete(KToggleAction* self) {
    delete self;
}
