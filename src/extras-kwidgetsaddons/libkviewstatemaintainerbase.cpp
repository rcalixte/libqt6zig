#include <KViewStateMaintainerBase>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelectionModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kviewstatemaintainerbase.h>
#include "libkviewstatemaintainerbase.h"
#include "libkviewstatemaintainerbase.hxx"

KViewStateMaintainerBase* KViewStateMaintainerBase_new() {
    return new VirtualKViewStateMaintainerBase();
}

KViewStateMaintainerBase* KViewStateMaintainerBase_new2(QObject* parent) {
    return new VirtualKViewStateMaintainerBase(parent);
}

QMetaObject* KViewStateMaintainerBase_MetaObject(const KViewStateMaintainerBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KViewStateMaintainerBase_Metacast(KViewStateMaintainerBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KViewStateMaintainerBase_Metacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KViewStateMaintainerBase_Tr(const char* s) {
    auto _ret = KViewStateMaintainerBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KViewStateMaintainerBase_SetSelectionModel(KViewStateMaintainerBase* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

QItemSelectionModel* KViewStateMaintainerBase_SelectionModel(const KViewStateMaintainerBase* self) {
    return self->selectionModel();
}

void KViewStateMaintainerBase_SetView(KViewStateMaintainerBase* self, QAbstractItemView* view) {
    self->setView(view);
}

QAbstractItemView* KViewStateMaintainerBase_View(const KViewStateMaintainerBase* self) {
    return self->view();
}

void KViewStateMaintainerBase_SaveState(KViewStateMaintainerBase* self) {
    self->saveState();
}

void KViewStateMaintainerBase_RestoreState(KViewStateMaintainerBase* self) {
    self->restoreState();
}

libqt_string KViewStateMaintainerBase_Tr2(const char* s, const char* c) {
    auto _ret = KViewStateMaintainerBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KViewStateMaintainerBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = KViewStateMaintainerBase::tr(s, c, static_cast<int>(n));
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
QMetaObject* KViewStateMaintainerBase_SuperMetaObject(const KViewStateMaintainerBase* self) {
    return (QMetaObject*)self->KViewStateMaintainerBase::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnMetaObject(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self)))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_metaobject_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KViewStateMaintainerBase_SuperMetacast(KViewStateMaintainerBase* self, const char* param1) {
    return self->KViewStateMaintainerBase::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnMetacast(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_metacast_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Metacast_Callback>(slot);
}

// Base class handler implementation
int KViewStateMaintainerBase_SuperMetacall(KViewStateMaintainerBase* self, int param1, int param2, void** param3) {
    return self->KViewStateMaintainerBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnMetacall(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_metacall_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnSaveState(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_savestate_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_SaveState_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnRestoreState(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_restorestate_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_RestoreState_Callback>(slot);
}

// Derived class handler implementation
bool KViewStateMaintainerBase_Event(KViewStateMaintainerBase* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KViewStateMaintainerBase_SuperEvent(KViewStateMaintainerBase* self, QEvent* event) {
    return self->KViewStateMaintainerBase::event(event);
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_event_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_Event_Callback>(slot);
}

// Derived class handler implementation
bool KViewStateMaintainerBase_EventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KViewStateMaintainerBase_SuperEventFilter(KViewStateMaintainerBase* self, QObject* watched, QEvent* event) {
    return self->KViewStateMaintainerBase::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnEventFilter(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_eventfilter_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KViewStateMaintainerBase_TimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase) {
        vkviewstatemaintainerbase->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_SuperTimerEvent(KViewStateMaintainerBase* self, QTimerEvent* event) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self)) {
        vkviewstatemaintainerbase->KViewStateMaintainerBase::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnTimerEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_timerevent_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KViewStateMaintainerBase_ChildEvent(KViewStateMaintainerBase* self, QChildEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase) {
        vkviewstatemaintainerbase->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_SuperChildEvent(KViewStateMaintainerBase* self, QChildEvent* event) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self)) {
        vkviewstatemaintainerbase->KViewStateMaintainerBase::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnChildEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_childevent_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KViewStateMaintainerBase_CustomEvent(KViewStateMaintainerBase* self, QEvent* event) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase) {
        vkviewstatemaintainerbase->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_SuperCustomEvent(KViewStateMaintainerBase* self, QEvent* event) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self)) {
        vkviewstatemaintainerbase->KViewStateMaintainerBase::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnCustomEvent(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_customevent_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KViewStateMaintainerBase_ConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase) {
        vkviewstatemaintainerbase->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_SuperConnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self)) {
        vkviewstatemaintainerbase->KViewStateMaintainerBase::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnConnectNotify(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_connectnotify_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KViewStateMaintainerBase_DisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self);
    if (vkviewstatemaintainerbase) {
        vkviewstatemaintainerbase->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateMaintainerBase_SuperDisconnectNotify(KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self)) {
        vkviewstatemaintainerbase->KViewStateMaintainerBase::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KViewStateMaintainerBase::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateMaintainerBase_OnDisconnectNotify(KViewStateMaintainerBase* self, intptr_t slot) {
    if (auto* vkviewstatemaintainerbase = dynamic_cast<VirtualKViewStateMaintainerBase*>(self))
        vkviewstatemaintainerbase->kviewstatemaintainerbase_disconnectnotify_callback = reinterpret_cast<VirtualKViewStateMaintainerBase::KViewStateMaintainerBase_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KViewStateMaintainerBase_Sender(const KViewStateMaintainerBase* self) {
    if (auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self))) {
        return vkviewstatemaintainerbase->VirtualKViewStateMaintainerBase::sender();
    } else
        qFatal("Error: Protected method KViewStateMaintainerBase::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KViewStateMaintainerBase_SenderSignalIndex(const KViewStateMaintainerBase* self) {
    if (auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self))) {
        return vkviewstatemaintainerbase->VirtualKViewStateMaintainerBase::senderSignalIndex();
    } else
        qFatal("Error: Protected method KViewStateMaintainerBase::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KViewStateMaintainerBase_Receivers(const KViewStateMaintainerBase* self, const char* signal) {
    if (auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self))) {
        return vkviewstatemaintainerbase->VirtualKViewStateMaintainerBase::receivers(signal);
    } else
        qFatal("Error: Protected method KViewStateMaintainerBase::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KViewStateMaintainerBase_IsSignalConnected(const KViewStateMaintainerBase* self, const QMetaMethod* signal) {
    if (auto* vkviewstatemaintainerbase = const_cast<VirtualKViewStateMaintainerBase*>(dynamic_cast<const VirtualKViewStateMaintainerBase*>(self))) {
        return vkviewstatemaintainerbase->VirtualKViewStateMaintainerBase::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KViewStateMaintainerBase::isSignalConnected called without a directly constructed type");
}

void KViewStateMaintainerBase_Delete(KViewStateMaintainerBase* self) {
    delete self;
}
